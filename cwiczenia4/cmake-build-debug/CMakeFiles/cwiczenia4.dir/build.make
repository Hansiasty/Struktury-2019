# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "/Users/bartek/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/bartek/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/183.5429.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bartek/CLionProjects/cwiczenia4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cwiczenia4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cwiczenia4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cwiczenia4.dir/flags.make

CMakeFiles/cwiczenia4.dir/main.cpp.o: CMakeFiles/cwiczenia4.dir/flags.make
CMakeFiles/cwiczenia4.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cwiczenia4.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cwiczenia4.dir/main.cpp.o -c /Users/bartek/CLionProjects/cwiczenia4/main.cpp

CMakeFiles/cwiczenia4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cwiczenia4.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bartek/CLionProjects/cwiczenia4/main.cpp > CMakeFiles/cwiczenia4.dir/main.cpp.i

CMakeFiles/cwiczenia4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cwiczenia4.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bartek/CLionProjects/cwiczenia4/main.cpp -o CMakeFiles/cwiczenia4.dir/main.cpp.s

CMakeFiles/cwiczenia4.dir/kolejka.cpp.o: CMakeFiles/cwiczenia4.dir/flags.make
CMakeFiles/cwiczenia4.dir/kolejka.cpp.o: ../kolejka.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cwiczenia4.dir/kolejka.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cwiczenia4.dir/kolejka.cpp.o -c /Users/bartek/CLionProjects/cwiczenia4/kolejka.cpp

CMakeFiles/cwiczenia4.dir/kolejka.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cwiczenia4.dir/kolejka.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bartek/CLionProjects/cwiczenia4/kolejka.cpp > CMakeFiles/cwiczenia4.dir/kolejka.cpp.i

CMakeFiles/cwiczenia4.dir/kolejka.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cwiczenia4.dir/kolejka.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bartek/CLionProjects/cwiczenia4/kolejka.cpp -o CMakeFiles/cwiczenia4.dir/kolejka.cpp.s

# Object files for target cwiczenia4
cwiczenia4_OBJECTS = \
"CMakeFiles/cwiczenia4.dir/main.cpp.o" \
"CMakeFiles/cwiczenia4.dir/kolejka.cpp.o"

# External object files for target cwiczenia4
cwiczenia4_EXTERNAL_OBJECTS =

cwiczenia4: CMakeFiles/cwiczenia4.dir/main.cpp.o
cwiczenia4: CMakeFiles/cwiczenia4.dir/kolejka.cpp.o
cwiczenia4: CMakeFiles/cwiczenia4.dir/build.make
cwiczenia4: CMakeFiles/cwiczenia4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable cwiczenia4"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cwiczenia4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cwiczenia4.dir/build: cwiczenia4

.PHONY : CMakeFiles/cwiczenia4.dir/build

CMakeFiles/cwiczenia4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cwiczenia4.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cwiczenia4.dir/clean

CMakeFiles/cwiczenia4.dir/depend:
	cd /Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bartek/CLionProjects/cwiczenia4 /Users/bartek/CLionProjects/cwiczenia4 /Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug /Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug /Users/bartek/CLionProjects/cwiczenia4/cmake-build-debug/CMakeFiles/cwiczenia4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cwiczenia4.dir/depend
