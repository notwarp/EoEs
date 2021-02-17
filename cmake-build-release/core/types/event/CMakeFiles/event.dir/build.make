# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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
CMAKE_COMMAND = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2020.2.3/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/daniele/devilopment/EoEs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniele/devilopment/EoEs/cmake-build-release

# Include any dependencies generated for this target.
include core/types/event/CMakeFiles/event.dir/depend.make

# Include the progress variables for this target.
include core/types/event/CMakeFiles/event.dir/progress.make

# Include the compile flags for this target's objects.
include core/types/event/CMakeFiles/event.dir/flags.make

core/types/event/CMakeFiles/event.dir/event.c.o: core/types/event/CMakeFiles/event.dir/flags.make
core/types/event/CMakeFiles/event.dir/event.c.o: ../core/types/event/event.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniele/devilopment/EoEs/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object core/types/event/CMakeFiles/event.dir/event.c.o"
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/event.dir/event.c.o   -c /home/daniele/devilopment/EoEs/core/types/event/event.c

core/types/event/CMakeFiles/event.dir/event.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/event.dir/event.c.i"
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/daniele/devilopment/EoEs/core/types/event/event.c > CMakeFiles/event.dir/event.c.i

core/types/event/CMakeFiles/event.dir/event.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/event.dir/event.c.s"
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/daniele/devilopment/EoEs/core/types/event/event.c -o CMakeFiles/event.dir/event.c.s

# Object files for target event
event_OBJECTS = \
"CMakeFiles/event.dir/event.c.o"

# External object files for target event
event_EXTERNAL_OBJECTS =

core/types/event/libevent.a: core/types/event/CMakeFiles/event.dir/event.c.o
core/types/event/libevent.a: core/types/event/CMakeFiles/event.dir/build.make
core/types/event/libevent.a: core/types/event/CMakeFiles/event.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daniele/devilopment/EoEs/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libevent.a"
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && $(CMAKE_COMMAND) -P CMakeFiles/event.dir/cmake_clean_target.cmake
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/event.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/types/event/CMakeFiles/event.dir/build: core/types/event/libevent.a

.PHONY : core/types/event/CMakeFiles/event.dir/build

core/types/event/CMakeFiles/event.dir/clean:
	cd /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event && $(CMAKE_COMMAND) -P CMakeFiles/event.dir/cmake_clean.cmake
.PHONY : core/types/event/CMakeFiles/event.dir/clean

core/types/event/CMakeFiles/event.dir/depend:
	cd /home/daniele/devilopment/EoEs/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniele/devilopment/EoEs /home/daniele/devilopment/EoEs/core/types/event /home/daniele/devilopment/EoEs/cmake-build-release /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event /home/daniele/devilopment/EoEs/cmake-build-release/core/types/event/CMakeFiles/event.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/types/event/CMakeFiles/event.dir/depend

