# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/haroon/minecraft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/haroon/minecraft/build

# Include any dependencies generated for this target.
include CMakeFiles/OpenGL.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/OpenGL.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGL.dir/flags.make

CMakeFiles/OpenGL.dir/codegen:
.PHONY : CMakeFiles/OpenGL.dir/codegen

CMakeFiles/OpenGL.dir/main.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/main.cpp.o: /Users/haroon/minecraft/main.cpp
CMakeFiles/OpenGL.dir/main.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OpenGL.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/main.cpp.o -MF CMakeFiles/OpenGL.dir/main.cpp.o.d -o CMakeFiles/OpenGL.dir/main.cpp.o -c /Users/haroon/minecraft/main.cpp

CMakeFiles/OpenGL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/main.cpp > CMakeFiles/OpenGL.dir/main.cpp.i

CMakeFiles/OpenGL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/main.cpp -o CMakeFiles/OpenGL.dir/main.cpp.s

CMakeFiles/OpenGL.dir/glad.c.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/glad.c.o: /Users/haroon/minecraft/glad.c
CMakeFiles/OpenGL.dir/glad.c.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/OpenGL.dir/glad.c.o"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/glad.c.o -MF CMakeFiles/OpenGL.dir/glad.c.o.d -o CMakeFiles/OpenGL.dir/glad.c.o -c /Users/haroon/minecraft/glad.c

CMakeFiles/OpenGL.dir/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/OpenGL.dir/glad.c.i"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/haroon/minecraft/glad.c > CMakeFiles/OpenGL.dir/glad.c.i

CMakeFiles/OpenGL.dir/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/OpenGL.dir/glad.c.s"
	/usr/bin/clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/haroon/minecraft/glad.c -o CMakeFiles/OpenGL.dir/glad.c.s

CMakeFiles/OpenGL.dir/Application.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/Application.cpp.o: /Users/haroon/minecraft/Application.cpp
CMakeFiles/OpenGL.dir/Application.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGL.dir/Application.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/Application.cpp.o -MF CMakeFiles/OpenGL.dir/Application.cpp.o.d -o CMakeFiles/OpenGL.dir/Application.cpp.o -c /Users/haroon/minecraft/Application.cpp

CMakeFiles/OpenGL.dir/Application.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/Application.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/Application.cpp > CMakeFiles/OpenGL.dir/Application.cpp.i

CMakeFiles/OpenGL.dir/Application.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/Application.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/Application.cpp -o CMakeFiles/OpenGL.dir/Application.cpp.s

CMakeFiles/OpenGL.dir/Window.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/Window.cpp.o: /Users/haroon/minecraft/Window.cpp
CMakeFiles/OpenGL.dir/Window.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGL.dir/Window.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/Window.cpp.o -MF CMakeFiles/OpenGL.dir/Window.cpp.o.d -o CMakeFiles/OpenGL.dir/Window.cpp.o -c /Users/haroon/minecraft/Window.cpp

CMakeFiles/OpenGL.dir/Window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/Window.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/Window.cpp > CMakeFiles/OpenGL.dir/Window.cpp.i

CMakeFiles/OpenGL.dir/Window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/Window.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/Window.cpp -o CMakeFiles/OpenGL.dir/Window.cpp.s

CMakeFiles/OpenGL.dir/Renderer.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/Renderer.cpp.o: /Users/haroon/minecraft/Renderer.cpp
CMakeFiles/OpenGL.dir/Renderer.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGL.dir/Renderer.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/Renderer.cpp.o -MF CMakeFiles/OpenGL.dir/Renderer.cpp.o.d -o CMakeFiles/OpenGL.dir/Renderer.cpp.o -c /Users/haroon/minecraft/Renderer.cpp

CMakeFiles/OpenGL.dir/Renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/Renderer.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/Renderer.cpp > CMakeFiles/OpenGL.dir/Renderer.cpp.i

CMakeFiles/OpenGL.dir/Renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/Renderer.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/Renderer.cpp -o CMakeFiles/OpenGL.dir/Renderer.cpp.s

CMakeFiles/OpenGL.dir/Shader.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/Shader.cpp.o: /Users/haroon/minecraft/Shader.cpp
CMakeFiles/OpenGL.dir/Shader.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/OpenGL.dir/Shader.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/Shader.cpp.o -MF CMakeFiles/OpenGL.dir/Shader.cpp.o.d -o CMakeFiles/OpenGL.dir/Shader.cpp.o -c /Users/haroon/minecraft/Shader.cpp

CMakeFiles/OpenGL.dir/Shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/Shader.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/Shader.cpp > CMakeFiles/OpenGL.dir/Shader.cpp.i

CMakeFiles/OpenGL.dir/Shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/Shader.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/Shader.cpp -o CMakeFiles/OpenGL.dir/Shader.cpp.s

CMakeFiles/OpenGL.dir/camera.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/camera.cpp.o: /Users/haroon/minecraft/camera.cpp
CMakeFiles/OpenGL.dir/camera.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/OpenGL.dir/camera.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/camera.cpp.o -MF CMakeFiles/OpenGL.dir/camera.cpp.o.d -o CMakeFiles/OpenGL.dir/camera.cpp.o -c /Users/haroon/minecraft/camera.cpp

CMakeFiles/OpenGL.dir/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/camera.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/camera.cpp > CMakeFiles/OpenGL.dir/camera.cpp.i

CMakeFiles/OpenGL.dir/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/camera.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/camera.cpp -o CMakeFiles/OpenGL.dir/camera.cpp.s

CMakeFiles/OpenGL.dir/Texture.cpp.o: CMakeFiles/OpenGL.dir/flags.make
CMakeFiles/OpenGL.dir/Texture.cpp.o: /Users/haroon/minecraft/Texture.cpp
CMakeFiles/OpenGL.dir/Texture.cpp.o: CMakeFiles/OpenGL.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/OpenGL.dir/Texture.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/OpenGL.dir/Texture.cpp.o -MF CMakeFiles/OpenGL.dir/Texture.cpp.o.d -o CMakeFiles/OpenGL.dir/Texture.cpp.o -c /Users/haroon/minecraft/Texture.cpp

CMakeFiles/OpenGL.dir/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/OpenGL.dir/Texture.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/haroon/minecraft/Texture.cpp > CMakeFiles/OpenGL.dir/Texture.cpp.i

CMakeFiles/OpenGL.dir/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/OpenGL.dir/Texture.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/haroon/minecraft/Texture.cpp -o CMakeFiles/OpenGL.dir/Texture.cpp.s

# Object files for target OpenGL
OpenGL_OBJECTS = \
"CMakeFiles/OpenGL.dir/main.cpp.o" \
"CMakeFiles/OpenGL.dir/glad.c.o" \
"CMakeFiles/OpenGL.dir/Application.cpp.o" \
"CMakeFiles/OpenGL.dir/Window.cpp.o" \
"CMakeFiles/OpenGL.dir/Renderer.cpp.o" \
"CMakeFiles/OpenGL.dir/Shader.cpp.o" \
"CMakeFiles/OpenGL.dir/camera.cpp.o" \
"CMakeFiles/OpenGL.dir/Texture.cpp.o"

# External object files for target OpenGL
OpenGL_EXTERNAL_OBJECTS =

OpenGL: CMakeFiles/OpenGL.dir/main.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/glad.c.o
OpenGL: CMakeFiles/OpenGL.dir/Application.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/Window.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/Renderer.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/Shader.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/camera.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/Texture.cpp.o
OpenGL: CMakeFiles/OpenGL.dir/build.make
OpenGL: /opt/homebrew/lib/libglfw.3.4.dylib
OpenGL: /opt/homebrew/lib/libglm.dylib
OpenGL: CMakeFiles/OpenGL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/haroon/minecraft/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable OpenGL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGL.dir/build: OpenGL
.PHONY : CMakeFiles/OpenGL.dir/build

CMakeFiles/OpenGL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGL.dir/clean

CMakeFiles/OpenGL.dir/depend:
	cd /Users/haroon/minecraft/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/haroon/minecraft /Users/haroon/minecraft /Users/haroon/minecraft/build /Users/haroon/minecraft/build /Users/haroon/minecraft/build/CMakeFiles/OpenGL.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/OpenGL.dir/depend

