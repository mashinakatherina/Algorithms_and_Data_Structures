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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\HP\CLionProjects\aaalgo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/t1207.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/t1207.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/t1207.dir/flags.make

CMakeFiles/t1207.dir/Part2/t1207.cpp.obj: CMakeFiles/t1207.dir/flags.make
CMakeFiles/t1207.dir/Part2/t1207.cpp.obj: ../Part2/t1207.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/t1207.dir/Part2/t1207.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\t1207.dir\Part2\t1207.cpp.obj -c C:\Users\HP\CLionProjects\aaalgo\Part2\t1207.cpp

CMakeFiles/t1207.dir/Part2/t1207.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/t1207.dir/Part2/t1207.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\HP\CLionProjects\aaalgo\Part2\t1207.cpp > CMakeFiles\t1207.dir\Part2\t1207.cpp.i

CMakeFiles/t1207.dir/Part2/t1207.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/t1207.dir/Part2/t1207.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\HP\CLionProjects\aaalgo\Part2\t1207.cpp -o CMakeFiles\t1207.dir\Part2\t1207.cpp.s

# Object files for target t1207
t1207_OBJECTS = \
"CMakeFiles/t1207.dir/Part2/t1207.cpp.obj"

# External object files for target t1207
t1207_EXTERNAL_OBJECTS =

t1207.exe: CMakeFiles/t1207.dir/Part2/t1207.cpp.obj
t1207.exe: CMakeFiles/t1207.dir/build.make
t1207.exe: CMakeFiles/t1207.dir/linklibs.rsp
t1207.exe: CMakeFiles/t1207.dir/objects1.rsp
t1207.exe: CMakeFiles/t1207.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable t1207.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\t1207.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/t1207.dir/build: t1207.exe

.PHONY : CMakeFiles/t1207.dir/build

CMakeFiles/t1207.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\t1207.dir\cmake_clean.cmake
.PHONY : CMakeFiles/t1207.dir/clean

CMakeFiles/t1207.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\HP\CLionProjects\aaalgo C:\Users\HP\CLionProjects\aaalgo C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug C:\Users\HP\CLionProjects\aaalgo\cmake-build-debug\CMakeFiles\t1207.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/t1207.dir/depend

