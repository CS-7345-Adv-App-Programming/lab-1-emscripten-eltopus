
SHELL = /bin/sh

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kali/lab-1-emscripten-eltopus/Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kali/lab-1-emscripten-eltopus/Code/build

MATRIX_CPP = /home/kali/lab-1-emscripten-eltopus/Code/matrix.cpp
WASM_OUTPUT = /home/kali/lab-1-emscripten-eltopus/Code/output
WASM_WASM = /home/kali/lab-1-emscripten-eltopus/Code/output.wasm
MATRIX_GLUE_WRAPPER = /home/kali/lab-1-emscripten-eltopus/Code/matrix_glue_wrapper.cpp
MATRIX_GLUE = /home/kali/lab-1-emscripten-eltopus/Code/glue.cpp
NODE = /home/kali/lab-1-emscripten-eltopus/Code/app.js
OUTPUT_JS = /home/kali/lab-1-emscripten-eltopus/Code/output.js
GLUE_JS = /home/kali/lab-1-emscripten-eltopus/Code/glue.js
EMSDK_ROOT_FOLDER = /home/kali/emsdk/upstream/emscripten
REPO_CODE_DIR = /home/kali/lab-1-emscripten-eltopus/Code



compile:
	$(SHELL source ./home/kali/emsdk/emsdk_env.sh)
	emcc $(MATRIX_CPP) -o $(WASM_OUTPUT)

glue:
	python3 $(EMSDK_ROOT_FOLDER)/tools/webidl_binder.py $(REPO_CODE_DIR)/matrix_classes.idl $(REPO_CODE_DIR)/glue

build:
	emcc $(MATRIX_CPP) $(MATRIX_GLUE_WRAPPER) --post-js $(GLUE_JS) -O2 -o $(OUTPUT_JS) -s EXPORTED_RUNTIME_METHODS=["ccall, cwrap"]

node:
	node $(NODE)

clean:
	rm -rf $(MATRIX_GLUE) $(GLUE_JS) $(WASM_OUTPUT) $(WASM_WASM) $(OUTPUT_JS)

