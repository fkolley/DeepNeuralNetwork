cmake_minimum_required (VERSION 2.6)
project (deepNeuralNetwork)

# Set the output folder where the program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

add_executable(deepNeuralNetwork ${CMAKE_SOURCE_DIR}/../src/deepNeuralNetwork.cpp)