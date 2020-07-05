cmake_minimum_required(VERSION 3.15)
project(the_castle_of_darkness)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Game.cpp Game.h Player.cpp Player.h Graph.cpp Graph.h)
add_executable(the_castle_of_darkness ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(the_castle_of_darkness sfml-system sfml-window sfml-graphics sfml-audio sfml-network)

add_subdirectory(Google_tests)