# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chimmu/github/leetcode/leetcode/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chimmu/github/leetcode/leetcode/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/largest_number.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/largest_number.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/largest_number.dir/flags.make

CMakeFiles/largest_number.dir/largest_number.cc.o: CMakeFiles/largest_number.dir/flags.make
CMakeFiles/largest_number.dir/largest_number.cc.o: ../largest_number.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/largest_number.dir/largest_number.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/largest_number.dir/largest_number.cc.o -c /home/chimmu/github/leetcode/leetcode/cpp/largest_number.cc

CMakeFiles/largest_number.dir/largest_number.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/largest_number.dir/largest_number.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chimmu/github/leetcode/leetcode/cpp/largest_number.cc > CMakeFiles/largest_number.dir/largest_number.cc.i

CMakeFiles/largest_number.dir/largest_number.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/largest_number.dir/largest_number.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chimmu/github/leetcode/leetcode/cpp/largest_number.cc -o CMakeFiles/largest_number.dir/largest_number.cc.s

CMakeFiles/largest_number.dir/largest_number.cc.o.requires:
.PHONY : CMakeFiles/largest_number.dir/largest_number.cc.o.requires

CMakeFiles/largest_number.dir/largest_number.cc.o.provides: CMakeFiles/largest_number.dir/largest_number.cc.o.requires
	$(MAKE) -f CMakeFiles/largest_number.dir/build.make CMakeFiles/largest_number.dir/largest_number.cc.o.provides.build
.PHONY : CMakeFiles/largest_number.dir/largest_number.cc.o.provides

CMakeFiles/largest_number.dir/largest_number.cc.o.provides.build: CMakeFiles/largest_number.dir/largest_number.cc.o

# Object files for target largest_number
largest_number_OBJECTS = \
"CMakeFiles/largest_number.dir/largest_number.cc.o"

# External object files for target largest_number
largest_number_EXTERNAL_OBJECTS =

largest_number: CMakeFiles/largest_number.dir/largest_number.cc.o
largest_number: CMakeFiles/largest_number.dir/build.make
largest_number: libcommon.so
largest_number: CMakeFiles/largest_number.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable largest_number"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/largest_number.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/largest_number.dir/build: largest_number
.PHONY : CMakeFiles/largest_number.dir/build

CMakeFiles/largest_number.dir/requires: CMakeFiles/largest_number.dir/largest_number.cc.o.requires
.PHONY : CMakeFiles/largest_number.dir/requires

CMakeFiles/largest_number.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/largest_number.dir/cmake_clean.cmake
.PHONY : CMakeFiles/largest_number.dir/clean

CMakeFiles/largest_number.dir/depend:
	cd /home/chimmu/github/leetcode/leetcode/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles/largest_number.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/largest_number.dir/depend

