# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/crow/Graduation-Project/3D-random-walk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/crow/Graduation-Project/3D-random-walk/build

# Include any dependencies generated for this target.
include CMakeFiles/Point.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Point.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Point.dir/flags.make

CMakeFiles/Point.dir/apps/Point.cpp.o: CMakeFiles/Point.dir/flags.make
CMakeFiles/Point.dir/apps/Point.cpp.o: ../apps/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/crow/Graduation-Project/3D-random-walk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Point.dir/apps/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Point.dir/apps/Point.cpp.o -c /home/crow/Graduation-Project/3D-random-walk/apps/Point.cpp

CMakeFiles/Point.dir/apps/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Point.dir/apps/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/crow/Graduation-Project/3D-random-walk/apps/Point.cpp > CMakeFiles/Point.dir/apps/Point.cpp.i

CMakeFiles/Point.dir/apps/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Point.dir/apps/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/crow/Graduation-Project/3D-random-walk/apps/Point.cpp -o CMakeFiles/Point.dir/apps/Point.cpp.s

CMakeFiles/Point.dir/apps/Point.cpp.o.requires:

.PHONY : CMakeFiles/Point.dir/apps/Point.cpp.o.requires

CMakeFiles/Point.dir/apps/Point.cpp.o.provides: CMakeFiles/Point.dir/apps/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/Point.dir/build.make CMakeFiles/Point.dir/apps/Point.cpp.o.provides.build
.PHONY : CMakeFiles/Point.dir/apps/Point.cpp.o.provides

CMakeFiles/Point.dir/apps/Point.cpp.o.provides.build: CMakeFiles/Point.dir/apps/Point.cpp.o


# Object files for target Point
Point_OBJECTS = \
"CMakeFiles/Point.dir/apps/Point.cpp.o"

# External object files for target Point
Point_EXTERNAL_OBJECTS =

Point: CMakeFiles/Point.dir/apps/Point.cpp.o
Point: CMakeFiles/Point.dir/build.make
Point: CMakeFiles/Point.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/crow/Graduation-Project/3D-random-walk/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Point"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Point.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Point.dir/build: Point

.PHONY : CMakeFiles/Point.dir/build

CMakeFiles/Point.dir/requires: CMakeFiles/Point.dir/apps/Point.cpp.o.requires

.PHONY : CMakeFiles/Point.dir/requires

CMakeFiles/Point.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Point.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Point.dir/clean

CMakeFiles/Point.dir/depend:
	cd /home/crow/Graduation-Project/3D-random-walk/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/crow/Graduation-Project/3D-random-walk /home/crow/Graduation-Project/3D-random-walk /home/crow/Graduation-Project/3D-random-walk/build /home/crow/Graduation-Project/3D-random-walk/build /home/crow/Graduation-Project/3D-random-walk/build/CMakeFiles/Point.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Point.dir/depend

