cmake_minimum_required(VERSION 3.14)
project(MathGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(MathGame ui/main.cpp tad/Player.cpp tad/Player.h tad/Node.cpp tad/Node.h tad/PlayerQueue.cpp tad/PlayerQueue.h tad/MathOperations.cpp tad/MathOperations.h tad/Games.cpp tad/Games.h)