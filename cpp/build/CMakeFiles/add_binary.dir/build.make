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
include CMakeFiles/add_binary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/add_binary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/add_binary.dir/flags.make

CMakeFiles/add_binary.dir/add_binary.cc.o: CMakeFiles/add_binary.dir/flags.make
CMakeFiles/add_binary.dir/add_binary.cc.o: ../add_binary.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/add_binary.dir/add_binary.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/add_binary.dir/add_binary.cc.o -c /home/chimmu/github/leetcode/leetcode/cpp/add_binary.cc

CMakeFiles/add_binary.dir/add_binary.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/add_binary.dir/add_binary.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chimmu/github/leetcode/leetcode/cpp/add_binary.cc > CMakeFiles/add_binary.dir/add_binary.cc.i

CMakeFiles/add_binary.dir/add_binary.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/add_binary.dir/add_binary.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chimmu/github/leetcode/leetcode/cpp/add_binary.cc -o CMakeFiles/add_binary.dir/add_binary.cc.s

CMakeFiles/add_binary.dir/add_binary.cc.o.requires:
.PHONY : CMakeFiles/add_binary.dir/add_binary.cc.o.requires

CMakeFiles/add_binary.dir/add_binary.cc.o.provides: CMakeFiles/add_binary.dir/add_binary.cc.o.requires
	$(MAKE) -f CMakeFiles/add_binary.dir/build.make CMakeFiles/add_binary.dir/add_binary.cc.o.provides.build
.PHONY : CMakeFiles/add_binary.dir/add_binary.cc.o.provides

CMakeFiles/add_binary.dir/add_binary.cc.o.provides.build: CMakeFiles/add_binary.dir/add_binary.cc.o

# Object files for target add_binary
add_binary_OBJECTS = \
"CMakeFiles/add_binary.dir/add_binary.cc.o"

# External object files for target add_binary
add_binary_EXTERNAL_OBJECTS =

add_binary: CMakeFiles/add_binary.dir/add_binary.cc.o
add_binary: CMakeFiles/add_binary.dir/build.make
add_binary: libcommon.so
add_binary: CMakeFiles/add_binary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable add_binary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/add_binary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/add_binary.dir/build: add_binary
.PHONY : CMakeFiles/add_binary.dir/build

CMakeFiles/add_binary.dir/requires: CMakeFiles/add_binary.dir/add_binary.cc.o.requires
.PHONY : CMakeFiles/add_binary.dir/requires

CMakeFiles/add_binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/add_binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/add_binary.dir/clean

CMakeFiles/add_binary.dir/depend:
	cd /home/chimmu/github/leetcode/leetcode/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles/add_binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/add_binary.dir/depend

