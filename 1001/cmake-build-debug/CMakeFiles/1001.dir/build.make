# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\jetbrains\apps\CLion\ch-0\193.5662.56\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\jetbrains\apps\CLion\ch-0\193.5662.56\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Code\PAT-C++\1001

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Code\PAT-C++\1001\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/1001.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/1001.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/1001.dir/flags.make

CMakeFiles/1001.dir/main.cpp.obj: CMakeFiles/1001.dir/flags.make
CMakeFiles/1001.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Code\PAT-C++\1001\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1001.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1001.dir\main.cpp.obj -c E:\Code\PAT-C++\1001\main.cpp

CMakeFiles/1001.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1001.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Code\PAT-C++\1001\main.cpp > CMakeFiles\1001.dir\main.cpp.i

CMakeFiles/1001.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1001.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Code\PAT-C++\1001\main.cpp -o CMakeFiles\1001.dir\main.cpp.s

# Object files for target 1001
1001_OBJECTS = \
"CMakeFiles/1001.dir/main.cpp.obj"

# External object files for target 1001
1001_EXTERNAL_OBJECTS =

1001.exe: CMakeFiles/1001.dir/main.cpp.obj
1001.exe: CMakeFiles/1001.dir/build.make
1001.exe: CMakeFiles/1001.dir/linklibs.rsp
1001.exe: CMakeFiles/1001.dir/objects1.rsp
1001.exe: CMakeFiles/1001.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Code\PAT-C++\1001\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1001.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1001.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/1001.dir/build: 1001.exe

.PHONY : CMakeFiles/1001.dir/build

CMakeFiles/1001.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1001.dir\cmake_clean.cmake
.PHONY : CMakeFiles/1001.dir/clean

CMakeFiles/1001.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Code\PAT-C++\1001 E:\Code\PAT-C++\1001 E:\Code\PAT-C++\1001\cmake-build-debug E:\Code\PAT-C++\1001\cmake-build-debug E:\Code\PAT-C++\1001\cmake-build-debug\CMakeFiles\1001.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/1001.dir/depend

