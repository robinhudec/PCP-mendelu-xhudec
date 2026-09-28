cmake_minimum_required(VERSION 4.3)
project(Fotbalek)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(.)

add_executable(Fotbalek
        Dictionary.cpp
        Dictionary.hpp
        Game.cpp
        Game.hpp
        main.cpp)
