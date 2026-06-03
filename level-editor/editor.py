import json
import sys

DIR_MAP = {
    0: "left",
    1: "down",
    2: "up",
    3: "right"
}

offset = input("what is the name of your offset variable? ")
tempo = input("what is the name of your tempo variable? ")
def side_from_d(d):
    return "playerSide" if d <= 3 else "computerSide"

def dir_from_d(d):
    return DIR_MAP[d % 4]

def compile_chart(chart, difficulty):
    notes = chart[difficulty]

    out = []
    out.append("// AUTO-GENERATED CHART\n")

    i = 0

    for n in notes:
        t = n["t"]
        d = n["d"]
        hold = n.get("l", None)

        direction = dir_from_d(d)
        side = side_from_d(d)

        out.append(f"Arrow arrow{i}({direction});")
        out.append(f"arrow{i}.speed = {tempo};")
        out.append(f"arrow{i}.pos.y = {round(t)} + {offset};")
        out.append(f"arrow{i}.side = {side};")

        if hold is not None:
            out.append(f"arrow{i}.trailSize = {round(hold)};")
        if side == "computerSide":
            out.append("computerArrowList->insert(computerArrowList->begin(), arrow{});".format(i))
        else:
            out.append("playerArrowList->insert(playerArrowList->begin(), arrow{});".format(i))
        out.append("")  # spacing

        i += 1

    return "\n".join(out)

def main():
    if len(sys.argv) < 3:
        print("Usage: python3 editor.py chart.json hard")
        return

    file = sys.argv[1]
    difficulty = sys.argv[2]

    with open(file, "r") as f:
        chart = json.load(f)

    cpp = compile_chart(chart, difficulty)

    with open("generated_chart.cpp", "w") as f:
        f.write(cpp)

    print("Wrote generated_chart.cpp")

if __name__ == "__main__":
    main()
