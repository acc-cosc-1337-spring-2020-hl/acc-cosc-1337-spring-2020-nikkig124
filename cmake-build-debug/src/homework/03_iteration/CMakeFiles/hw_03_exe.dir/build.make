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
include src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/depend.make

# Include the progress variables for this target.
include src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/progress.make

# Include the compile flags for this target's objects.
include src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/flags.make

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.o: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/flags.make
src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.o: ../src/homework/03_iteration/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw_03_exe.dir/main.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/main.cpp

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw_03_exe.dir/main.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/main.cpp > CMakeFiles/hw_03_exe.dir/main.cpp.i

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw_03_exe.dir/main.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/main.cpp -o CMakeFiles/hw_03_exe.dir/main.cpp.s

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.o: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/flags.make
src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.o: ../src/homework/03_iteration/dna.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw_03_exe.dir/dna.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/dna.cpp

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw_03_exe.dir/dna.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/dna.cpp > CMakeFiles/hw_03_exe.dir/dna.cpp.i

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw_03_exe.dir/dna.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration/dna.cpp -o CMakeFiles/hw_03_exe.dir/dna.cpp.s

# Object files for target hw_03_exe
hw_03_exe_OBJECTS = \
"CMakeFiles/hw_03_exe.dir/main.cpp.o" \
"CMakeFiles/hw_03_exe.dir/dna.cpp.o"

# External object files for target hw_03_exe
hw_03_exe_EXTERNAL_OBJECTS =

src/homework/03_iteration/hw_03_exe: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/main.cpp.o
src/homework/03_iteration/hw_03_exe: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/dna.cpp.o
src/homework/03_iteration/hw_03_exe: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/build.make
src/homework/03_iteration/hw_03_exe: src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable hw_03_exe"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw_03_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/build: src/homework/03_iteration/hw_03_exe

.PHONY : src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/build

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/clean:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration && $(CMAKE_COMMAND) -P CMakeFiles/hw_03_exe.dir/cmake_clean.cmake
.PHONY : src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/clean

src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/depend:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124 /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/homework/03_iteration /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/homework/03_iteration/CMakeFiles/hw_03_exe.dir/depend

