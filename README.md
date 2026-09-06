# Friday Night Funkin' - raylib Remake (Dreamcast Port)
`pc-old` is the original code, originally made for pc, but now natively on Dreamcast.
I am working on making this code more *native* to the Dreamcast instead of using cross-platform libraries like `libwav` and `raylib`.

I DO NOT OWN ANY OF THE ASSETS FOUND IN `resources/`
The GPL license covers only the code, the resources are exempt from the license (because they aren't my assets)

https://github.com/FunkinCrew/funkin.assets/

https://remoddedrose.itch.io/fnf-font

# Controls
Honestly, it's very standard controls.

Menus can be navigated with the joystick, you must press START at the title screen, and you can skip the intro text with START.

You can play the game with the D-PAD, OR with the buttons (which I think is better)

Press RIGHT TRIGGER to go back to the song selection screen from a level.

# PROOF this works on REAL HARDWARE

<a>
  <img src="https://cdn.discordapp.com/attachments/925678813227151381/1509303696775974942/IMG_20260527_231314.jpg?ex=6a993a5a&is=6a97e8da&hm=fdfd2835c64c81287f1b910b646e03e7b247fc1dae5cca8297cee4317a12f32e&" width="500">
</a>

(this is the dev of the Dreamcast Balatro port playing my game heheheh)
# Dependencies
~~Please see the [raylib wiki](https://github.com/raysan5/raylib/wiki/Working-on-GNU-Linux) for dependencies, as this project depends on raylib, and compiles it from scratch.~~ (applies to `pc-old`)

Please see the [raylib dreamcast repo](https://github.com/raylib4Consoles/raylib4Dreamcast) as this is the port of raylib this project depends on.

A working install of [KallistiOS and kos-ports](https://dreamcast.wiki/Getting_Started_with_Dreamcast_development#Setting_up_and_compiling_the_toolchain_with_the_dc-chain_script)

[mkdcdisc](https://gitlab.com/simulant/mkdcdisc) for ISO generation
# Building

Simply run `make all` in the root directory of the project and this will build the ELF and the CDI image.

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
10. Formats are not native adpcm_yamaha
If you know the fix to any of these problems, please PR it, or write an issue if you're not sure how to implement it. Thanks!

***NOTE:*** *Charts are not read from a JSON file, they are compiled into the game. This is an issue for code management, but I am keeping it this way because of my trust issues with the Dreamcast's GD-ROM drive.*

# Actual TODOs
- Make an actual user friendly stage editor using ImGui and make a file format for it
- Make a JSON parser so the charts aren't just really long lines of C++ code
- Split main.cpp across multiple files so it is easier to manage in the future
- Make a scene system instead of using a giant switch statement (goes with above TODO)
