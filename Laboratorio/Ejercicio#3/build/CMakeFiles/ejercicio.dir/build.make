# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/victor/Tarea/Laboratorio/Ejercicio#3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/victor/Tarea/Laboratorio/Ejercicio#3/build"

# Include any dependencies generated for this target.
include CMakeFiles/ejercicio.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ejercicio.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ejercicio.dir/flags.make

CMakeFiles/ejercicio.dir/Juego.cpp.o: CMakeFiles/ejercicio.dir/flags.make
CMakeFiles/ejercicio.dir/Juego.cpp.o: ../Juego.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/victor/Tarea/Laboratorio/Ejercicio#3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ejercicio.dir/Juego.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ejercicio.dir/Juego.cpp.o -c "/home/victor/Tarea/Laboratorio/Ejercicio#3/Juego.cpp"

CMakeFiles/ejercicio.dir/Juego.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ejercicio.dir/Juego.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/victor/Tarea/Laboratorio/Ejercicio#3/Juego.cpp" > CMakeFiles/ejercicio.dir/Juego.cpp.i

CMakeFiles/ejercicio.dir/Juego.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ejercicio.dir/Juego.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/victor/Tarea/Laboratorio/Ejercicio#3/Juego.cpp" -o CMakeFiles/ejercicio.dir/Juego.cpp.s

CMakeFiles/ejercicio.dir/Juego.cpp.o.requires:

.PHONY : CMakeFiles/ejercicio.dir/Juego.cpp.o.requires

CMakeFiles/ejercicio.dir/Juego.cpp.o.provides: CMakeFiles/ejercicio.dir/Juego.cpp.o.requires
	$(MAKE) -f CMakeFiles/ejercicio.dir/build.make CMakeFiles/ejercicio.dir/Juego.cpp.o.provides.build
.PHONY : CMakeFiles/ejercicio.dir/Juego.cpp.o.provides

CMakeFiles/ejercicio.dir/Juego.cpp.o.provides.build: CMakeFiles/ejercicio.dir/Juego.cpp.o


# Object files for target ejercicio
ejercicio_OBJECTS = \
"CMakeFiles/ejercicio.dir/Juego.cpp.o"

# External object files for target ejercicio
ejercicio_EXTERNAL_OBJECTS =

ejercicio: CMakeFiles/ejercicio.dir/Juego.cpp.o
ejercicio: CMakeFiles/ejercicio.dir/build.make
ejercicio: /usr/lib/x86_64-linux-gnu/libGLU.so
ejercicio: /usr/lib/x86_64-linux-gnu/libGL.so
ejercicio: /usr/lib/x86_64-linux-gnu/libglut.so
ejercicio: /usr/lib/x86_64-linux-gnu/libXmu.so
ejercicio: /usr/lib/x86_64-linux-gnu/libXi.so
ejercicio: CMakeFiles/ejercicio.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/victor/Tarea/Laboratorio/Ejercicio#3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ejercicio"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ejercicio.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ejercicio.dir/build: ejercicio

.PHONY : CMakeFiles/ejercicio.dir/build

CMakeFiles/ejercicio.dir/requires: CMakeFiles/ejercicio.dir/Juego.cpp.o.requires

.PHONY : CMakeFiles/ejercicio.dir/requires

CMakeFiles/ejercicio.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ejercicio.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ejercicio.dir/clean

CMakeFiles/ejercicio.dir/depend:
	cd "/home/victor/Tarea/Laboratorio/Ejercicio#3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/victor/Tarea/Laboratorio/Ejercicio#3" "/home/victor/Tarea/Laboratorio/Ejercicio#3" "/home/victor/Tarea/Laboratorio/Ejercicio#3/build" "/home/victor/Tarea/Laboratorio/Ejercicio#3/build" "/home/victor/Tarea/Laboratorio/Ejercicio#3/build/CMakeFiles/ejercicio.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ejercicio.dir/depend
