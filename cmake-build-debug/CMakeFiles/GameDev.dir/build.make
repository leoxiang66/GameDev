# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/tao_xiang/Documents/clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/tao_xiang/Documents/clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tao_xiang/git/GameDev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tao_xiang/git/GameDev/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GameDev.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GameDev.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GameDev.dir/flags.make

CMakeFiles/GameDev.dir/main.cpp.o: CMakeFiles/GameDev.dir/flags.make
CMakeFiles/GameDev.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tao_xiang/git/GameDev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GameDev.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GameDev.dir/main.cpp.o -c /home/tao_xiang/git/GameDev/main.cpp

CMakeFiles/GameDev.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GameDev.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tao_xiang/git/GameDev/main.cpp > CMakeFiles/GameDev.dir/main.cpp.i

CMakeFiles/GameDev.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GameDev.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tao_xiang/git/GameDev/main.cpp -o CMakeFiles/GameDev.dir/main.cpp.s

# Object files for target GameDev
GameDev_OBJECTS = \
"CMakeFiles/GameDev.dir/main.cpp.o"

# External object files for target GameDev
GameDev_EXTERNAL_OBJECTS =

GameDev: CMakeFiles/GameDev.dir/main.cpp.o
GameDev: CMakeFiles/GameDev.dir/build.make
GameDev: CMakeFiles/GameDev.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tao_xiang/git/GameDev/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GameDev"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GameDev.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GameDev.dir/build: GameDev

.PHONY : CMakeFiles/GameDev.dir/build

CMakeFiles/GameDev.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GameDev.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GameDev.dir/clean

CMakeFiles/GameDev.dir/depend:
	cd /home/tao_xiang/git/GameDev/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tao_xiang/git/GameDev /home/tao_xiang/git/GameDev /home/tao_xiang/git/GameDev/cmake-build-debug /home/tao_xiang/git/GameDev/cmake-build-debug /home/tao_xiang/git/GameDev/cmake-build-debug/CMakeFiles/GameDev.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GameDev.dir/depend

