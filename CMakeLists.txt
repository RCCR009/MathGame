cmake_minimum_required(VERSION 3.14)
project(MathGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(MathGame ui/main.cpp tad/Player.cpp tad/Player.h tad/MathOperations.cpp tad/MathOperations.h tad/Game.cpp tad/Game.h structures/Node.cpp structures/Node.h structures/List.cpp structures/List.h structures/Queue.cpp structures/Queue.h structures/Stack.cpp structures/Stack.h controller/GameController.cpp controller/GameController.h controller/PlayerController.cpp controller/PlayerController.h repository/RecordsPersistence.cpp repository/RecordsPersistence.h service/GameService.cpp service/GameService.h)