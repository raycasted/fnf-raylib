#!/usr/bin/env bash
# resize_images.sh
# Step 1: Divide all image dimensions by 2
# Step 2: Round each dimension to the nearest power of two, max 1024
# Requires: ImageMagick v7+ (magick)

nearest_pot() {
    local val=$1
    local max=512

    (( val < 1 )) && val=1

    local lower=1
    while (( lower * 2 <= val )); do
        lower=$(( lower * 2 ))
    done
    local upper=$(( lower * 2 ))

    local result
    if (( val - lower < upper - val )); then
        result=$lower
    else
        result=$upper
    fi

    (( result > max )) && result=$max

    echo $result
}

shopt -s nullglob
images=( *.jpg *.jpeg *.png *.gif *.bmp *.tiff *.tif *.webp
         *.JPG *.JPEG *.PNG *.GIF *.BMP *.TIFF *.TIF *.WEBP )

if (( ${#images[@]} == 0 )); then
    echo "No image files found in the current directory."
    exit 0
fi

for img in "${images[@]}"; do
    echo "Processing: $img"

    dims=$(magick identify -format "%w %h" "$img" 2>/dev/null | head -1)
    orig_w=$(echo "$dims" | awk '{print $1}')
    orig_h=$(echo "$dims" | awk '{print $2}')

    if [[ -z "$orig_w" || -z "$orig_h" ]]; then
        echo "  Could not read dimensions, skipping."
        continue
    fi

    half_w=$(( orig_w / 2 ))
    half_h=$(( orig_h / 2 ))
    (( half_w < 1 )) && half_w=1
    (( half_h < 1 )) && half_h=1

    pot_w=$(nearest_pot "$half_w")
    pot_h=$(nearest_pot "$half_h")

    echo "  ${orig_w}x${orig_h}  ->  halved: ${half_w}x${half_h}  ->  POT: ${pot_w}x${pot_h}"

    magick "$img" -resize "${pot_w}x${pot_h}!" "$img"

    echo "  Done"
done

echo ""
echo "All images processed."