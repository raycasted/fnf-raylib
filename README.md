# Friday Night Funkin' - raylib Remake
I DO NOT OWN ANY OF THE ASSETS FOUND IN `resources/`

https://github.com/FunkinCrew/funkin.assets/

https://remoddedrose.itch.io/fnf-font

Dreamcast port is in the `dreamcast` branch
# Dependencies
Please see the [raylib wiki](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux) for dependencies, as this project depends on raylib, and compiles it from scratch.
# Building
To build the game, go into the `build/` folder, and run premake5 gmake for your OS. (assuming you want GNU makefiles and have toolchains)

Output will be in the `bin/` directory.

**Make sure to run the game from the project root, otherwise it will fail to load resources.**
# Known Bugs/TODOs
1. Some textures have a few artifacts from me not cutting the original ones correctly
2. GF sprite's animation wobbles
3. The ending part of the trail isn't implemented yet
4. Note splashes when a perfect hit
5. Player icons on health bar
6. Worship isn't charted correctly (not sure, maybe someone can double check)
7. Proportions of the songs aren't 100% accurate (probably will never be because of the Dreamcast being 4:3)
8. Make missing trails more forgiving (like FNF's)
9. Camera ease isn't 100% accurate
10. Dreamcast port's textures are GARBAGE. (fix: use PVR textures and maybe Dreamcast AICA frames)
If you know the fix to any of these problems, please PR it, or write an issue if you're not sure how to implement it. Thanks!

***NOTE:*** *Charts are not read from a JSON file, they are compiled into the game. This is an issue for code management, but I am keeping it this way because of my trust issues with the Dreamcast's GD-ROM drive.*

# Actual TODOs
- Make an actual user friendly stage editor using ImGui and make a file format for it
- Make a JSON parser so the charts aren't just really long lines of C++ code
- Split main.cpp across multiple files so it is easier to manage in the future
- Make a scene system instead of using a giant switch statement (goes with above TODO)

I am probably not going to work on all of that, hopefully one day someone forks this and maybe my dream will come true!