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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug

# Include any dependencies generated for this target.
include source/CMakeFiles/aufgabe_9.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/aufgabe_9.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/aufgabe_9.dir/flags.make

source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o: source/CMakeFiles/aufgabe_9.dir/flags.make
source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o: ../source/aufgabe_9.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o -c /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/source/aufgabe_9.cpp

source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.i"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/source/aufgabe_9.cpp > CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.i

source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.s"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/source/aufgabe_9.cpp -o CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.s

# Object files for target aufgabe_9
aufgabe_9_OBJECTS = \
"CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o"

# External object files for target aufgabe_9
aufgabe_9_EXTERNAL_OBJECTS =

source/aufgabe_9: source/CMakeFiles/aufgabe_9.dir/aufgabe_9.cpp.o
source/aufgabe_9: source/CMakeFiles/aufgabe_9.dir/build.make
source/aufgabe_9: source/CMakeFiles/aufgabe_9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable aufgabe_9"
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aufgabe_9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/aufgabe_9.dir/build: source/aufgabe_9

.PHONY : source/CMakeFiles/aufgabe_9.dir/build

source/CMakeFiles/aufgabe_9.dir/clean:
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source && $(CMAKE_COMMAND) -P CMakeFiles/aufgabe_9.dir/cmake_clean.cmake
.PHONY : source/CMakeFiles/aufgabe_9.dir/clean

source/CMakeFiles/aufgabe_9.dir/depend:
	cd /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3 /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/source /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source /Users/datboi/GitHub/programmiersprachen-aufgabenblatt-3/cmake-build-debug/source/CMakeFiles/aufgabe_9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/CMakeFiles/aufgabe_9.dir/depend

