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
include CMakeFiles/digitone.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/digitone.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/digitone.dir/flags.make

CMakeFiles/digitone.dir/digitone.cc.o: CMakeFiles/digitone.dir/flags.make
CMakeFiles/digitone.dir/digitone.cc.o: ../digitone.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/digitone.dir/digitone.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/digitone.dir/digitone.cc.o -c /home/chimmu/github/leetcode/leetcode/cpp/digitone.cc

CMakeFiles/digitone.dir/digitone.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/digitone.dir/digitone.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/chimmu/github/leetcode/leetcode/cpp/digitone.cc > CMakeFiles/digitone.dir/digitone.cc.i

CMakeFiles/digitone.dir/digitone.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/digitone.dir/digitone.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/chimmu/github/leetcode/leetcode/cpp/digitone.cc -o CMakeFiles/digitone.dir/digitone.cc.s

CMakeFiles/digitone.dir/digitone.cc.o.requires:
.PHONY : CMakeFiles/digitone.dir/digitone.cc.o.requires

CMakeFiles/digitone.dir/digitone.cc.o.provides: CMakeFiles/digitone.dir/digitone.cc.o.requires
	$(MAKE) -f CMakeFiles/digitone.dir/build.make CMakeFiles/digitone.dir/digitone.cc.o.provides.build
.PHONY : CMakeFiles/digitone.dir/digitone.cc.o.provides

CMakeFiles/digitone.dir/digitone.cc.o.provides.build: CMakeFiles/digitone.dir/digitone.cc.o

# Object files for target digitone
digitone_OBJECTS = \
"CMakeFiles/digitone.dir/digitone.cc.o"

# External object files for target digitone
digitone_EXTERNAL_OBJECTS =

digitone: CMakeFiles/digitone.dir/digitone.cc.o
digitone: CMakeFiles/digitone.dir/build.make
digitone: libcommon.so
digitone: CMakeFiles/digitone.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable digitone"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/digitone.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/digitone.dir/build: digitone
.PHONY : CMakeFiles/digitone.dir/build

CMakeFiles/digitone.dir/requires: CMakeFiles/digitone.dir/digitone.cc.o.requires
.PHONY : CMakeFiles/digitone.dir/requires

CMakeFiles/digitone.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/digitone.dir/cmake_clean.cmake
.PHONY : CMakeFiles/digitone.dir/clean

CMakeFiles/digitone.dir/depend:
	cd /home/chimmu/github/leetcode/leetcode/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build /home/chimmu/github/leetcode/leetcode/cpp/build/CMakeFiles/digitone.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/digitone.dir/depend

