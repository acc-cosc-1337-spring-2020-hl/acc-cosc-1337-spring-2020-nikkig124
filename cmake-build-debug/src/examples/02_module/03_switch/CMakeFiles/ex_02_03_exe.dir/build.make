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
include src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/depend.make

# Include the progress variables for this target.
include src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/progress.make

# Include the compile flags for this target's objects.
include src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/flags.make

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.o: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/flags.make
src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.o: ../src/examples/02_module/03_switch/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex_02_03_exe.dir/main.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/main.cpp

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_02_03_exe.dir/main.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/main.cpp > CMakeFiles/ex_02_03_exe.dir/main.cpp.i

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_02_03_exe.dir/main.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/main.cpp -o CMakeFiles/ex_02_03_exe.dir/main.cpp.s

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.o: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/flags.make
src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.o: ../src/examples/02_module/03_switch/switch.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.o"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex_02_03_exe.dir/switch.cpp.o -c /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/switch.cpp

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex_02_03_exe.dir/switch.cpp.i"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/switch.cpp > CMakeFiles/ex_02_03_exe.dir/switch.cpp.i

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex_02_03_exe.dir/switch.cpp.s"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch/switch.cpp -o CMakeFiles/ex_02_03_exe.dir/switch.cpp.s

# Object files for target ex_02_03_exe
ex_02_03_exe_OBJECTS = \
"CMakeFiles/ex_02_03_exe.dir/main.cpp.o" \
"CMakeFiles/ex_02_03_exe.dir/switch.cpp.o"

# External object files for target ex_02_03_exe
ex_02_03_exe_EXTERNAL_OBJECTS =

src/examples/02_module/03_switch/ex_02_03_exe: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/main.cpp.o
src/examples/02_module/03_switch/ex_02_03_exe: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/switch.cpp.o
src/examples/02_module/03_switch/ex_02_03_exe: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/build.make
src/examples/02_module/03_switch/ex_02_03_exe: src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ex_02_03_exe"
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_02_03_exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/build: src/examples/02_module/03_switch/ex_02_03_exe

.PHONY : src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/build

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/clean:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch && $(CMAKE_COMMAND) -P CMakeFiles/ex_02_03_exe.dir/cmake_clean.cmake
.PHONY : src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/clean

src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/depend:
	cd /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124 /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/src/examples/02_module/03_switch /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch /Users/nicole_gibsonmbp/Desktop/Prog2/acc-cosc-1337-spring-2020-nikkig124/cmake-build-debug/src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/examples/02_module/03_switch/CMakeFiles/ex_02_03_exe.dir/depend

