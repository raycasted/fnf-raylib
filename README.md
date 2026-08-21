# Friday Night Funkin' - raylib Remake (Dreamcast Port)
`pc-old` is the original code, originally made for pc, but now natively on Dreamcast.
I am working on making this code more *native* to the Dreamcast instead of using cross-platform libraries like `libwav` and `raylib`.

I DO NOT OWN ANY OF THE ASSETS FOUND IN `resources/`

https://github.com/FunkinCrew/funkin.assets/

https://remoddedrose.itch.io/fnf-font - use the actual fnf font in the funkin-assets repo instead...

# Dependencies
~~Please see the [raylib wiki](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux) for dependencies, as this project depends on raylib, and compiles it from scratch.~~
Please see the [raylib dreamcast repo](https://github.com/raylib4Consoles/raylib4Dreamcast) as this is the port of raylib this project depends on.
A working install of [KallistiOS]
# Building

I was too lazy to make a proper build system, so please look inside `./build.sh` for making the program *and* CDI generation OR run it if you're in a *nix shell.

yes, the script **was AI generated**, don't hate me for that.

# Known Bugs/TODOs
1. Some textures have a few artifacts from me not cutting the original ones correctly
2. GF sprite's animation wobbles
3. The ending part of the trail isn't implemented yet
4. Note splashes when a perfect hit
5. Player icons on health bar
6. Worship isn't charted correctly, also not on Dreamcast (not sure, maybe someone can double check)
7. Proportions of the songs aren't 100% accurate (probably will never be because of the Dreamcast being 4:3)
8. Make missing trails more forgiving (like FNF's)
9. Camera ease isn't 100% accurate
10. Dreamcast audio needs to be synced with the track, use `fs_seek()` instead of `SeekMusicStream()`
If you know the fix to any of these problems, please PR it, or write an issue if you're not sure how to implement it. Thanks!

***NOTE:*** *Charts are not read from a JSON file, they are compiled into the game. This is an issue for code management, but I am keeping it this way because of my trust issues with the Dreamcast's GD-ROM drive.*

# Actual TODOs
- Make an actual user friendly stage editor using ImGui and make a file format for it
- Make a JSON parser so the charts aren't just really long lines of C++ code
- Split main.cpp across multiple files so it is easier to manage in the future
- Make a scene system instead of using a giant switch statement (goes with above TODO)

I am probably not going to work on all of that, hopefully one day someone forks this and maybe my dream will come true!
