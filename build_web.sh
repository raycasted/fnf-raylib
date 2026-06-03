# -ALLOW_MEMORY_GROWTH might be dangerous?
em++ -o index.html src/*.cpp -Os -Wall /Users/hdfsyu/raylib/src/libraylib.a -I/Users/hdfsyu/raylib/src/ -I./include/ -L/Users/hdfsyu/raylib/src/ -s USE_GLFW=3 -s MAX_WEBGL_VERSION=2 -sASSERTIONS -sSTACK_SIZE=320mb -sALLOW_MEMORY_GROWTH --shell-file ./minshell.html --preload-file resources -DPLATFORM_WEB
