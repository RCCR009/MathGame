# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/adria/MathGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/adria/MathGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MathGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MathGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MathGame.dir/flags.make

CMakeFiles/MathGame.dir/ui/main.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/ui/main.cpp.o: ../ui/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MathGame.dir/ui/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/ui/main.cpp.o -c /cygdrive/c/Users/adria/MathGame/ui/main.cpp

CMakeFiles/MathGame.dir/ui/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/ui/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/ui/main.cpp > CMakeFiles/MathGame.dir/ui/main.cpp.i

CMakeFiles/MathGame.dir/ui/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/ui/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/ui/main.cpp -o CMakeFiles/MathGame.dir/ui/main.cpp.s

CMakeFiles/MathGame.dir/tad/Player.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/tad/Player.cpp.o: ../tad/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MathGame.dir/tad/Player.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/tad/Player.cpp.o -c /cygdrive/c/Users/adria/MathGame/tad/Player.cpp

CMakeFiles/MathGame.dir/tad/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/tad/Player.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/tad/Player.cpp > CMakeFiles/MathGame.dir/tad/Player.cpp.i

CMakeFiles/MathGame.dir/tad/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/tad/Player.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/tad/Player.cpp -o CMakeFiles/MathGame.dir/tad/Player.cpp.s

CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o: ../tad/MathOperations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o -c /cygdrive/c/Users/adria/MathGame/tad/MathOperations.cpp

CMakeFiles/MathGame.dir/tad/MathOperations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/tad/MathOperations.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/tad/MathOperations.cpp > CMakeFiles/MathGame.dir/tad/MathOperations.cpp.i

CMakeFiles/MathGame.dir/tad/MathOperations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/tad/MathOperations.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/tad/MathOperations.cpp -o CMakeFiles/MathGame.dir/tad/MathOperations.cpp.s

CMakeFiles/MathGame.dir/tad/Game.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/tad/Game.cpp.o: ../tad/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/MathGame.dir/tad/Game.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/tad/Game.cpp.o -c /cygdrive/c/Users/adria/MathGame/tad/Game.cpp

CMakeFiles/MathGame.dir/tad/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/tad/Game.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/tad/Game.cpp > CMakeFiles/MathGame.dir/tad/Game.cpp.i

CMakeFiles/MathGame.dir/tad/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/tad/Game.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/tad/Game.cpp -o CMakeFiles/MathGame.dir/tad/Game.cpp.s

CMakeFiles/MathGame.dir/structures/Node.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/Node.cpp.o: ../structures/Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/MathGame.dir/structures/Node.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/Node.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/Node.cpp

CMakeFiles/MathGame.dir/structures/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/Node.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/Node.cpp > CMakeFiles/MathGame.dir/structures/Node.cpp.i

CMakeFiles/MathGame.dir/structures/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/Node.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/Node.cpp -o CMakeFiles/MathGame.dir/structures/Node.cpp.s

CMakeFiles/MathGame.dir/structures/List.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/List.cpp.o: ../structures/List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/MathGame.dir/structures/List.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/List.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/List.cpp

CMakeFiles/MathGame.dir/structures/List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/List.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/List.cpp > CMakeFiles/MathGame.dir/structures/List.cpp.i

CMakeFiles/MathGame.dir/structures/List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/List.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/List.cpp -o CMakeFiles/MathGame.dir/structures/List.cpp.s

CMakeFiles/MathGame.dir/structures/Queue.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/Queue.cpp.o: ../structures/Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/MathGame.dir/structures/Queue.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/Queue.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/Queue.cpp

CMakeFiles/MathGame.dir/structures/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/Queue.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/Queue.cpp > CMakeFiles/MathGame.dir/structures/Queue.cpp.i

CMakeFiles/MathGame.dir/structures/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/Queue.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/Queue.cpp -o CMakeFiles/MathGame.dir/structures/Queue.cpp.s

CMakeFiles/MathGame.dir/structures/Stack.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/Stack.cpp.o: ../structures/Stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/MathGame.dir/structures/Stack.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/Stack.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/Stack.cpp

CMakeFiles/MathGame.dir/structures/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/Stack.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/Stack.cpp > CMakeFiles/MathGame.dir/structures/Stack.cpp.i

CMakeFiles/MathGame.dir/structures/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/Stack.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/Stack.cpp -o CMakeFiles/MathGame.dir/structures/Stack.cpp.s

CMakeFiles/MathGame.dir/controller/GameController.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/controller/GameController.cpp.o: ../controller/GameController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/MathGame.dir/controller/GameController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/controller/GameController.cpp.o -c /cygdrive/c/Users/adria/MathGame/controller/GameController.cpp

CMakeFiles/MathGame.dir/controller/GameController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/controller/GameController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/controller/GameController.cpp > CMakeFiles/MathGame.dir/controller/GameController.cpp.i

CMakeFiles/MathGame.dir/controller/GameController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/controller/GameController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/controller/GameController.cpp -o CMakeFiles/MathGame.dir/controller/GameController.cpp.s

CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o: ../controller/PlayerController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o -c /cygdrive/c/Users/adria/MathGame/controller/PlayerController.cpp

CMakeFiles/MathGame.dir/controller/PlayerController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/controller/PlayerController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/controller/PlayerController.cpp > CMakeFiles/MathGame.dir/controller/PlayerController.cpp.i

CMakeFiles/MathGame.dir/controller/PlayerController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/controller/PlayerController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/controller/PlayerController.cpp -o CMakeFiles/MathGame.dir/controller/PlayerController.cpp.s

CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o: ../repository/RecordsPersistence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o -c /cygdrive/c/Users/adria/MathGame/repository/RecordsPersistence.cpp

CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/repository/RecordsPersistence.cpp > CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.i

CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/repository/RecordsPersistence.cpp -o CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.s

CMakeFiles/MathGame.dir/tad/Record.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/tad/Record.cpp.o: ../tad/Record.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/MathGame.dir/tad/Record.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/tad/Record.cpp.o -c /cygdrive/c/Users/adria/MathGame/tad/Record.cpp

CMakeFiles/MathGame.dir/tad/Record.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/tad/Record.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/tad/Record.cpp > CMakeFiles/MathGame.dir/tad/Record.cpp.i

CMakeFiles/MathGame.dir/tad/Record.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/tad/Record.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/tad/Record.cpp -o CMakeFiles/MathGame.dir/tad/Record.cpp.s

CMakeFiles/MathGame.dir/controller/RecordController.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/controller/RecordController.cpp.o: ../controller/RecordController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/MathGame.dir/controller/RecordController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/controller/RecordController.cpp.o -c /cygdrive/c/Users/adria/MathGame/controller/RecordController.cpp

CMakeFiles/MathGame.dir/controller/RecordController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/controller/RecordController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/controller/RecordController.cpp > CMakeFiles/MathGame.dir/controller/RecordController.cpp.i

CMakeFiles/MathGame.dir/controller/RecordController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/controller/RecordController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/controller/RecordController.cpp -o CMakeFiles/MathGame.dir/controller/RecordController.cpp.s

CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o: ../structures/RecordStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/RecordStack.cpp

CMakeFiles/MathGame.dir/structures/RecordStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/RecordStack.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/RecordStack.cpp > CMakeFiles/MathGame.dir/structures/RecordStack.cpp.i

CMakeFiles/MathGame.dir/structures/RecordStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/RecordStack.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/RecordStack.cpp -o CMakeFiles/MathGame.dir/structures/RecordStack.cpp.s

CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o: ../structures/NodeRecord.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/NodeRecord.cpp

CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/NodeRecord.cpp > CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.i

CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/NodeRecord.cpp -o CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.s

CMakeFiles/MathGame.dir/structures/RecordList.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/RecordList.cpp.o: ../structures/RecordList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/MathGame.dir/structures/RecordList.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/RecordList.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/RecordList.cpp

CMakeFiles/MathGame.dir/structures/RecordList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/RecordList.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/RecordList.cpp > CMakeFiles/MathGame.dir/structures/RecordList.cpp.i

CMakeFiles/MathGame.dir/structures/RecordList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/RecordList.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/RecordList.cpp -o CMakeFiles/MathGame.dir/structures/RecordList.cpp.s

CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o: ../structures/PlayerQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/PlayerQueue.cpp

CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/PlayerQueue.cpp > CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.i

CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/PlayerQueue.cpp -o CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.s

CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o: ../structures/NodePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building CXX object CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o -c /cygdrive/c/Users/adria/MathGame/structures/NodePlayer.cpp

CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/structures/NodePlayer.cpp > CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.i

CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/structures/NodePlayer.cpp -o CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.s

CMakeFiles/MathGame.dir/tad/Utils.cpp.o: CMakeFiles/MathGame.dir/flags.make
CMakeFiles/MathGame.dir/tad/Utils.cpp.o: ../tad/Utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building CXX object CMakeFiles/MathGame.dir/tad/Utils.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MathGame.dir/tad/Utils.cpp.o -c /cygdrive/c/Users/adria/MathGame/tad/Utils.cpp

CMakeFiles/MathGame.dir/tad/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MathGame.dir/tad/Utils.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/adria/MathGame/tad/Utils.cpp > CMakeFiles/MathGame.dir/tad/Utils.cpp.i

CMakeFiles/MathGame.dir/tad/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MathGame.dir/tad/Utils.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/adria/MathGame/tad/Utils.cpp -o CMakeFiles/MathGame.dir/tad/Utils.cpp.s

# Object files for target MathGame
MathGame_OBJECTS = \
"CMakeFiles/MathGame.dir/ui/main.cpp.o" \
"CMakeFiles/MathGame.dir/tad/Player.cpp.o" \
"CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o" \
"CMakeFiles/MathGame.dir/tad/Game.cpp.o" \
"CMakeFiles/MathGame.dir/structures/Node.cpp.o" \
"CMakeFiles/MathGame.dir/structures/List.cpp.o" \
"CMakeFiles/MathGame.dir/structures/Queue.cpp.o" \
"CMakeFiles/MathGame.dir/structures/Stack.cpp.o" \
"CMakeFiles/MathGame.dir/controller/GameController.cpp.o" \
"CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o" \
"CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o" \
"CMakeFiles/MathGame.dir/tad/Record.cpp.o" \
"CMakeFiles/MathGame.dir/controller/RecordController.cpp.o" \
"CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o" \
"CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o" \
"CMakeFiles/MathGame.dir/structures/RecordList.cpp.o" \
"CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o" \
"CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o" \
"CMakeFiles/MathGame.dir/tad/Utils.cpp.o"

# External object files for target MathGame
MathGame_EXTERNAL_OBJECTS =

MathGame.exe: CMakeFiles/MathGame.dir/ui/main.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/tad/Player.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/tad/MathOperations.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/tad/Game.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/Node.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/List.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/Queue.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/Stack.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/controller/GameController.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/controller/PlayerController.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/repository/RecordsPersistence.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/tad/Record.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/controller/RecordController.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/RecordStack.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/NodeRecord.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/RecordList.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/PlayerQueue.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/structures/NodePlayer.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/tad/Utils.cpp.o
MathGame.exe: CMakeFiles/MathGame.dir/build.make
MathGame.exe: CMakeFiles/MathGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Linking CXX executable MathGame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MathGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MathGame.dir/build: MathGame.exe

.PHONY : CMakeFiles/MathGame.dir/build

CMakeFiles/MathGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MathGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MathGame.dir/clean

CMakeFiles/MathGame.dir/depend:
	cd /cygdrive/c/Users/adria/MathGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/adria/MathGame /cygdrive/c/Users/adria/MathGame /cygdrive/c/Users/adria/MathGame/cmake-build-debug /cygdrive/c/Users/adria/MathGame/cmake-build-debug /cygdrive/c/Users/adria/MathGame/cmake-build-debug/CMakeFiles/MathGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MathGame.dir/depend

