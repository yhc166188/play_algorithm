# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/yanhuichao/yhc/cmake/test/getKthFromEnd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/getKthFromEnd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/getKthFromEnd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/getKthFromEnd.dir/flags.make

CMakeFiles/getKthFromEnd.dir/main.cpp.o: CMakeFiles/getKthFromEnd.dir/flags.make
CMakeFiles/getKthFromEnd.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/getKthFromEnd.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/getKthFromEnd.dir/main.cpp.o -c /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/main.cpp

CMakeFiles/getKthFromEnd.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/getKthFromEnd.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/main.cpp > CMakeFiles/getKthFromEnd.dir/main.cpp.i

CMakeFiles/getKthFromEnd.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/getKthFromEnd.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/main.cpp -o CMakeFiles/getKthFromEnd.dir/main.cpp.s

# Object files for target getKthFromEnd
getKthFromEnd_OBJECTS = \
"CMakeFiles/getKthFromEnd.dir/main.cpp.o"

# External object files for target getKthFromEnd
getKthFromEnd_EXTERNAL_OBJECTS =

getKthFromEnd: CMakeFiles/getKthFromEnd.dir/main.cpp.o
getKthFromEnd: CMakeFiles/getKthFromEnd.dir/build.make
getKthFromEnd: CMakeFiles/getKthFromEnd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable getKthFromEnd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/getKthFromEnd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/getKthFromEnd.dir/build: getKthFromEnd

.PHONY : CMakeFiles/getKthFromEnd.dir/build

CMakeFiles/getKthFromEnd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/getKthFromEnd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/getKthFromEnd.dir/clean

CMakeFiles/getKthFromEnd.dir/depend:
	cd /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanhuichao/yhc/cmake/test/getKthFromEnd /Users/yanhuichao/yhc/cmake/test/getKthFromEnd /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug /Users/yanhuichao/yhc/cmake/test/getKthFromEnd/cmake-build-debug/CMakeFiles/getKthFromEnd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/getKthFromEnd.dir/depend

