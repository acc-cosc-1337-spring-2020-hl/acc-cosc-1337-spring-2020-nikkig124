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
CMAKE_SOURCE_DIR = /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug

# Include any dependencies generated for this target.
include test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/depend.make

# Include the progress variables for this target.
include test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/progress.make

# Include the compile flags for this target's objects.
include test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/flags.make

test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.o: test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/flags.make
test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.o: ../test/classwork_test/01_assign_test/types_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cw_01_tests.dir/types_tests.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/classwork_test/01_assign_test/types_tests.cpp

test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cw_01_tests.dir/types_tests.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/classwork_test/01_assign_test/types_tests.cpp > CMakeFiles/cw_01_tests.dir/types_tests.cpp.i

test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cw_01_tests.dir/types_tests.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/classwork_test/01_assign_test/types_tests.cpp -o CMakeFiles/cw_01_tests.dir/types_tests.cpp.s

# Object files for target cw_01_tests
cw_01_tests_OBJECTS = \
"CMakeFiles/cw_01_tests.dir/types_tests.cpp.o"

# External object files for target cw_01_tests
cw_01_tests_EXTERNAL_OBJECTS =

test/classwork_test/01_assign_test/cw_01_tests: test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/types_tests.cpp.o
test/classwork_test/01_assign_test/cw_01_tests: test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/build.make
test/classwork_test/01_assign_test/cw_01_tests: src/classwork/01_assign/libcw_01_library.a
test/classwork_test/01_assign_test/cw_01_tests: test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cw_01_tests"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cw_01_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/build: test/classwork_test/01_assign_test/cw_01_tests

.PHONY : test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/build

test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/clean:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test && $(CMAKE_COMMAND) -P CMakeFiles/cw_01_tests.dir/cmake_clean.cmake
.PHONY : test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/clean

test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/depend:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124 /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/classwork_test/01_assign_test /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/classwork_test/01_assign_test/CMakeFiles/cw_01_tests.dir/depend

