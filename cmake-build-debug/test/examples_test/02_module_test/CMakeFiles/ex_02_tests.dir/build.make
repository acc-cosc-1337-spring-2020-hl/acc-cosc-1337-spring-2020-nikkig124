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
include test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/depend.make

# Include the progress variables for this target.
include test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/progress.make

# Include the compile flags for this target's objects.
include test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/flags.make

test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o: test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/flags.make
test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o: ../test/examples_test/02_module_test/02_module_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/examples_test/02_module_test/02_module_tests.cpp

test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/examples_test/02_module_test/02_module_tests.cpp > CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.i

test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/examples_test/02_module_test/02_module_tests.cpp -o CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.s

# Object files for target ex_02_tests
ex_02_tests_OBJECTS = \
"CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o"

# External object files for target ex_02_tests
ex_02_tests_EXTERNAL_OBJECTS =

test/examples_test/02_module_test/ex_02_tests: test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/02_module_tests.cpp.o
test/examples_test/02_module_test/ex_02_tests: test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/build.make
test/examples_test/02_module_test/ex_02_tests: src/examples/02_module/01_if/libex_02_01_library.a
test/examples_test/02_module_test/ex_02_tests: src/examples/02_module/02_if_else/libex_02_02_library.a
test/examples_test/02_module_test/ex_02_tests: src/examples/02_module/03_switch/libex_02_03_library.a
test/examples_test/02_module_test/ex_02_tests: test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex_02_tests"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_02_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/build: test/examples_test/02_module_test/ex_02_tests

.PHONY : test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/build

test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/clean:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test && $(CMAKE_COMMAND) -P CMakeFiles/ex_02_tests.dir/cmake_clean.cmake
.PHONY : test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/clean

test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/depend:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124 /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/test/examples_test/02_module_test /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/examples_test/02_module_test/CMakeFiles/ex_02_tests.dir/depend

