# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge

# Include any dependencies generated for this target.
include CMakeFiles/strings-challenge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strings-challenge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strings-challenge.dir/flags.make

CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o: CMakeFiles/strings-challenge.dir/flags.make
CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o: strings-challenge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o -c /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/strings-challenge.cpp

CMakeFiles/strings-challenge.dir/strings-challenge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strings-challenge.dir/strings-challenge.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/strings-challenge.cpp > CMakeFiles/strings-challenge.dir/strings-challenge.cpp.i

CMakeFiles/strings-challenge.dir/strings-challenge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strings-challenge.dir/strings-challenge.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/strings-challenge.cpp -o CMakeFiles/strings-challenge.dir/strings-challenge.cpp.s

# Object files for target strings-challenge
strings__challenge_OBJECTS = \
"CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o"

# External object files for target strings-challenge
strings__challenge_EXTERNAL_OBJECTS =

strings-challenge: CMakeFiles/strings-challenge.dir/strings-challenge.cpp.o
strings-challenge: CMakeFiles/strings-challenge.dir/build.make
strings-challenge: CMakeFiles/strings-challenge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strings-challenge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strings-challenge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strings-challenge.dir/build: strings-challenge

.PHONY : CMakeFiles/strings-challenge.dir/build

CMakeFiles/strings-challenge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strings-challenge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strings-challenge.dir/clean

CMakeFiles/strings-challenge.dir/depend:
	cd /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge /home/nvidia/github/ryagi97/cpp-learning/udemy-cpp/section-10/1-challenge/CMakeFiles/strings-challenge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strings-challenge.dir/depend
