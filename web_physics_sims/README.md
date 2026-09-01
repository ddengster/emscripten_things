
# web_physics_sims demos

WIP set of physics sim demos. Based off glfw and imgui.

### Building/developing via msvc 2022

- Launch `web_physics_sims.sln` and build

### Building & deploying for web

- Install and setup emscripten paths

- `make -f Makefile.emscripten` to build, it should produce a `web` folder

- `emrun web/index.html` to launch a localhost server and webbrowser

#### Integrating/Updating box2d

- Download desired release of https://github.com/erincatto/box2d, follow `Building for Visual Studio` instructions but run `create_sln.bat` instead. 
The sln contains a box2d project, change the setting to `RelWithDebInfo`, build it and that creates a box2d static library and include file. Copy both over.


