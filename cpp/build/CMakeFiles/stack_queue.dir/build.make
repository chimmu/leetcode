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
include CMakeFiles/stack_queue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stack_queue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stack_queue.dir/flags.make

CMakeFiles/stack_queue.dir/stack_queue.cc.o: CMakeFiles/stack_queue.dir/flags.make
CMakeFiles/stack_queue.dir/stack_queue.cc.o: ../stack_queue.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/stack_queue.dir/stack_queue.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/stack_queue.dir/stack_queue.cc.o -c /home/chimmu/github/leetcode/leetcode/cpp/stack_queue.cc

CMakeFiles/stack_queue.dir/stack_queue.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack_queue.dir/stack_queue.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chimmu/github/leetcode/leetcode/cpp/stack_queue.cc > CMakeFiles/stack_queue.dir/stack_queue.cc.i

CMakeFiles/stack_queue.dir/stack_queue.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack_queue.dir/stack_queue.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chimmu/github/leetcode/leetcode/cpp/stack_queue.cc -o CMakeFiles/stack_queue.dir/stack_queue.cc.s

CMakeFiles/stack_queue.dir/stack_queue.cc.o.requires:
.PHONY : CMakeFiles/stack_queue.dir/stack_queue.cc.o.requires

CMakeFiles/stack_queue.dir/stack_queue.cc.o.provides: CMakeFiles/stack_queue.dir/stack_queue.cc.o.requires
	$(MAKE) -f CMakeFiles/stack_queue.dir/build.make CMakeFiles/stack_queue.dir/stack_queue.cc.o.provides.build
.PHONY : CMakeFiles/stack_queue.dir/stack_queue.cc.o.provides

CMakeFiles/stack_queue.dir/stack_queue.cc.o.provides.build: CMakeFiles/stack_queue.dir/stack_queue.cc.o

# Object files for target stack_queue
stack_queue_OBJECTS = \
"CMakeFiles/stack_queue.dir/stack_queue.cc.o"

# External object files for target stack_queue
stack_queue_EXTERNAL_OBJECTS =

stack_queue: CMakeFiles/stack_queue.dir/stack_queue.cc.o
stack_queue: CMakeFiles/stack_queue.dir/build.make
stack_queue: libcommon.so
stack_queue: CMakeFiles/stack_queue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable stack_queue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack_queue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stack_queue.dir/build: stack_queue
.PHONY : CMakeFiles/stack_queue.dir/build

CMakeFiles/stack_queue.dir/requires: CMakeFiles/stack_queue.dir/stack_queue.cc.o.requires
.PHONY : CMakeFiles/stack_queue.dir/requires

CMakeFiles/stack_queue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stack_queue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stack_queue.dir/clean

CMakeFiles/stack_queue.dir/depend:
	cd /home/chimmu/github/leetcode/leetcode/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles/stack_queue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stack_queue.dir/depend

