import re
import sys
import argparse


def halve_arrow_distances(source: str) -> str:
    """
    Finds all arrow pos.y assignments of the form:
        arrowN.pos.y = <number> + SomeName_offset;
    and halves the numeric value, rounding to the nearest integer.
    """

    def halve_match(m: re.Match) -> str:
        original_value = int(m.group(1))
        halved_value = original_value // 1.7
        return f"{m.group(0).split('=')[0]}= {halved_value} + {m.group(2)};"

    # Pattern: arrow<id>.pos.y = <number> + <offset_var>;
    pattern = re.compile(
        r'(\w+\.pos\.y\s*=\s*)(\d+)(\s*\+\s*)(\w+)\s*;'
    )

    def replacer(m: re.Match) -> str:
        prefix = m.group(1)       # e.g. "arrow0.pos.y = "
        value  = int(m.group(2))  # e.g. 11818
        sep    = m.group(3)       # e.g. " + "
        offset = m.group(4)       # e.g. "TestSong_offset"
        halved = value // 1.7
        return f"{prefix}{halved}{sep}{offset};"

    return pattern.sub(replacer, source)


def process_file(input_path: str, output_path: str | None = None) -> None:
    with open(input_path, "r", encoding="utf-8") as f:
        source = f.read()

    result = halve_arrow_distances(source)

    if output_path is None:
        # Default: write next to the input file with a suffix
        if input_path.endswith(".cpp") or input_path.endswith(".h"):
            base, ext = input_path.rsplit(".", 1)
            output_path = f"{base}_halved.{ext}"
        else:
            output_path = input_path + ".halved"

    with open(output_path, "w", encoding="utf-8") as f:
        f.write(result)

    print(f"Written to: {output_path}")


def process_string(source: str) -> str:
    """Convenience wrapper for use as a library."""
    return halve_arrow_distances(source)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Halve the pos.y distances of arrows in a C++ chart function."
    )
    parser.add_argument("input", help="Path to the input .cpp / .h file")
    parser.add_argument(
        "-o", "--output",
        help="Path for the output file (default: <input>_halved.<ext>)",
        default=None,
    )
    args = parser.parse_args()

    process_file(args.input, args.output)