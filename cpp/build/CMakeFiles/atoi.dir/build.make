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
include CMakeFiles/atoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/atoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/atoi.dir/flags.make

CMakeFiles/atoi.dir/atoi.cc.o: CMakeFiles/atoi.dir/flags.make
CMakeFiles/atoi.dir/atoi.cc.o: ../atoi.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/atoi.dir/atoi.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/atoi.dir/atoi.cc.o -c /home/chimmu/github/leetcode/leetcode/cpp/atoi.cc

CMakeFiles/atoi.dir/atoi.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atoi.dir/atoi.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chimmu/github/leetcode/leetcode/cpp/atoi.cc > CMakeFiles/atoi.dir/atoi.cc.i

CMakeFiles/atoi.dir/atoi.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atoi.dir/atoi.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chimmu/github/leetcode/leetcode/cpp/atoi.cc -o CMakeFiles/atoi.dir/atoi.cc.s

CMakeFiles/atoi.dir/atoi.cc.o.requires:
.PHONY : CMakeFiles/atoi.dir/atoi.cc.o.requires

CMakeFiles/atoi.dir/atoi.cc.o.provides: CMakeFiles/atoi.dir/atoi.cc.o.requires
	$(MAKE) -f CMakeFiles/atoi.dir/build.make CMakeFiles/atoi.dir/atoi.cc.o.provides.build
.PHONY : CMakeFiles/atoi.dir/atoi.cc.o.provides

CMakeFiles/atoi.dir/atoi.cc.o.provides.build: CMakeFiles/atoi.dir/atoi.cc.o

# Object files for target atoi
atoi_OBJECTS = \
"CMakeFiles/atoi.dir/atoi.cc.o"

# External object files for target atoi
atoi_EXTERNAL_OBJECTS =

atoi: CMakeFiles/atoi.dir/atoi.cc.o
atoi: CMakeFiles/atoi.dir/build.make
atoi: libcommon.so
atoi: CMakeFiles/atoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable atoi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atoi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/atoi.dir/build: atoi
.PHONY : CMakeFiles/atoi.dir/build

CMakeFiles/atoi.dir/requires: CMakeFiles/atoi.dir/atoi.cc.o.requires
.PHONY : CMakeFiles/atoi.dir/requires

CMakeFiles/atoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/atoi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/atoi.dir/clean

CMakeFiles/atoi.dir/depend:
	cd /home/chimmu/github/leetcode/leetcode/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles/atoi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/atoi.dir/depend

