# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/holyshared/Documents/projects/algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/holyshared/Documents/projects/algorithm

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/Applications/CLion.app/Contents/bin/cmake/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.9.4/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/holyshared/Documents/projects/algorithm/CMakeFiles /Users/holyshared/Documents/projects/algorithm/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/holyshared/Documents/projects/algorithm/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named quick_sort

# Build rule for target.
quick_sort: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 quick_sort
.PHONY : quick_sort

# fast build rule for target.
quick_sort/fast:
	$(MAKE) -f CMakeFiles/quick_sort.dir/build.make CMakeFiles/quick_sort.dir/build
.PHONY : quick_sort/fast

#=============================================================================
# Target rules for targets named bubble_sort

# Build rule for target.
bubble_sort: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 bubble_sort
.PHONY : bubble_sort

# fast build rule for target.
bubble_sort/fast:
	$(MAKE) -f CMakeFiles/bubble_sort.dir/build.make CMakeFiles/bubble_sort.dir/build
.PHONY : bubble_sort/fast

bubble_sort.o: bubble_sort.c.o

.PHONY : bubble_sort.o

# target to build an object file
bubble_sort.c.o:
	$(MAKE) -f CMakeFiles/bubble_sort.dir/build.make CMakeFiles/bubble_sort.dir/bubble_sort.c.o
.PHONY : bubble_sort.c.o

bubble_sort.i: bubble_sort.c.i

.PHONY : bubble_sort.i

# target to preprocess a source file
bubble_sort.c.i:
	$(MAKE) -f CMakeFiles/bubble_sort.dir/build.make CMakeFiles/bubble_sort.dir/bubble_sort.c.i
.PHONY : bubble_sort.c.i

bubble_sort.s: bubble_sort.c.s

.PHONY : bubble_sort.s

# target to generate assembly for a file
bubble_sort.c.s:
	$(MAKE) -f CMakeFiles/bubble_sort.dir/build.make CMakeFiles/bubble_sort.dir/bubble_sort.c.s
.PHONY : bubble_sort.c.s

quick_sort.o: quick_sort.c.o

.PHONY : quick_sort.o

# target to build an object file
quick_sort.c.o:
	$(MAKE) -f CMakeFiles/quick_sort.dir/build.make CMakeFiles/quick_sort.dir/quick_sort.c.o
.PHONY : quick_sort.c.o

quick_sort.i: quick_sort.c.i

.PHONY : quick_sort.i

# target to preprocess a source file
quick_sort.c.i:
	$(MAKE) -f CMakeFiles/quick_sort.dir/build.make CMakeFiles/quick_sort.dir/quick_sort.c.i
.PHONY : quick_sort.c.i

quick_sort.s: quick_sort.c.s

.PHONY : quick_sort.s

# target to generate assembly for a file
quick_sort.c.s:
	$(MAKE) -f CMakeFiles/quick_sort.dir/build.make CMakeFiles/quick_sort.dir/quick_sort.c.s
.PHONY : quick_sort.c.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... quick_sort"
	@echo "... bubble_sort"
	@echo "... bubble_sort.o"
	@echo "... bubble_sort.i"
	@echo "... bubble_sort.s"
	@echo "... quick_sort.o"
	@echo "... quick_sort.i"
	@echo "... quick_sort.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
