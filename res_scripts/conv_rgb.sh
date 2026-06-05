mkdir -p converted

for f in *.png; do
    magick "$f" -alpha on -type TrueColorAlpha PNG32:"converted/$f"
done
