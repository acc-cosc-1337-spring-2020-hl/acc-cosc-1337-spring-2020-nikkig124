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
include src/classwork/05_assign/CMakeFiles/cw_05_library.dir/depend.make

# Include the progress variables for this target.
include src/classwork/05_assign/CMakeFiles/cw_05_library.dir/progress.make

# Include the compile flags for this target's objects.
include src/classwork/05_assign/CMakeFiles/cw_05_library.dir/flags.make

src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.o: src/classwork/05_assign/CMakeFiles/cw_05_library.dir/flags.make
src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.o: ../src/classwork/05_assign/rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cw_05_library.dir/rectangle.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/classwork/05_assign/rectangle.cpp

src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cw_05_library.dir/rectangle.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/classwork/05_assign/rectangle.cpp > CMakeFiles/cw_05_library.dir/rectangle.cpp.i

src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cw_05_library.dir/rectangle.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/classwork/05_assign/rectangle.cpp -o CMakeFiles/cw_05_library.dir/rectangle.cpp.s

# Object files for target cw_05_library
cw_05_library_OBJECTS = \
"CMakeFiles/cw_05_library.dir/rectangle.cpp.o"

# External object files for target cw_05_library
cw_05_library_EXTERNAL_OBJECTS =

src/classwork/05_assign/libcw_05_library.a: src/classwork/05_assign/CMakeFiles/cw_05_library.dir/rectangle.cpp.o
src/classwork/05_assign/libcw_05_library.a: src/classwork/05_assign/CMakeFiles/cw_05_library.dir/build.make
src/classwork/05_assign/libcw_05_library.a: src/classwork/05_assign/CMakeFiles/cw_05_library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcw_05_library.a"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && $(CMAKE_COMMAND) -P CMakeFiles/cw_05_library.dir/cmake_clean_target.cmake
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cw_05_library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/classwork/05_assign/CMakeFiles/cw_05_library.dir/build: src/classwork/05_assign/libcw_05_library.a

.PHONY : src/classwork/05_assign/CMakeFiles/cw_05_library.dir/build

src/classwork/05_assign/CMakeFiles/cw_05_library.dir/clean:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign && $(CMAKE_COMMAND) -P CMakeFiles/cw_05_library.dir/cmake_clean.cmake
.PHONY : src/classwork/05_assign/CMakeFiles/cw_05_library.dir/clean

src/classwork/05_assign/CMakeFiles/cw_05_library.dir/depend:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124 /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/classwork/05_assign /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/classwork/05_assign/CMakeFiles/cw_05_library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/classwork/05_assign/CMakeFiles/cw_05_library.dir/depend

