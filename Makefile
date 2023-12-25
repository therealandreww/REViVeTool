# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/heewo/Development/cpp/revivetool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/heewo/Development/cpp/revivetool

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake cache editor..."
	/opt/homebrew/Cellar/cmake/3.28.0/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --cyan "Running CMake to regenerate build system..."
	/opt/homebrew/Cellar/cmake/3.28.1/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/heewo/Development/cpp/revivetool/CMakeFiles /Users/heewo/Development/cpp/revivetool//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/heewo/Development/cpp/revivetool/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named app

# Build rule for target.
app: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 app
.PHONY : app

# fast build rule for target.
app/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/build
.PHONY : app/fast

#=============================================================================
# Target rules for targets named update

# Build rule for target.
update: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 update
.PHONY : update

# fast build rule for target.
update/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/update.dir/build.make CMakeFiles/update.dir/build
.PHONY : update/fast

src/app.o: src/app.cpp.o
.PHONY : src/app.o

# target to build an object file
src/app.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/app.cpp.o
.PHONY : src/app.cpp.o

src/app.i: src/app.cpp.i
.PHONY : src/app.i

# target to preprocess a source file
src/app.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/app.cpp.i
.PHONY : src/app.cpp.i

src/app.s: src/app.cpp.s
.PHONY : src/app.s

# target to generate assembly for a file
src/app.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/app.dir/build.make CMakeFiles/app.dir/src/app.cpp.s
.PHONY : src/app.cpp.s

src/update.o: src/update.cpp.o
.PHONY : src/update.o

# target to build an object file
src/update.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/update.dir/build.make CMakeFiles/update.dir/src/update.cpp.o
.PHONY : src/update.cpp.o

src/update.i: src/update.cpp.i
.PHONY : src/update.i

# target to preprocess a source file
src/update.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/update.dir/build.make CMakeFiles/update.dir/src/update.cpp.i
.PHONY : src/update.cpp.i

src/update.s: src/update.cpp.s
.PHONY : src/update.s

# target to generate assembly for a file
src/update.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/update.dir/build.make CMakeFiles/update.dir/src/update.cpp.s
.PHONY : src/update.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... app"
	@echo "... update"
	@echo "... src/app.o"
	@echo "... src/app.i"
	@echo "... src/app.s"
	@echo "... src/update.o"
	@echo "... src/update.i"
	@echo "... src/update.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

