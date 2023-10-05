cmake_minimum_required(VERSION 3.10)
project(Data_sorting_application)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Data_sorting_application src/main.cpp src/DataGenerator.cpp src/BubbleSort.cpp)