
# Emscripten Demo 101

Hello world with emscripten.

## Installing:

1) Install Python 3.8

2) download/git pull from https://github.com/emscripten-core/emsdk

3) Follow https://emscripten.org/docs/getting_started/downloads.html#platform-notes-installation-instructions-sdk

4) Add to your environment PATH variable "C:\path\to\your\emsdk\upstream\emscripten". prompt: "emscripten add to PATH"

## Building + Running

- `emcc main.cpp -o index.html -s SINGLE_FILE=1`, the SINGLE_FILE macro allows localhost

- You should see a .wasm file as well. Open `index.html` in browser.

- Alternatively, `emcc main.cpp -o index.html` and `emrun index.html` to run on localhost
