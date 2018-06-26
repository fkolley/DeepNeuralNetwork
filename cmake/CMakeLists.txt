cmake_minimum_required (VERSION 2.6)
project (deepNeuralNetwork)

# Set the output folder where the program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

set(SOURCE_DIR ${CMAKE_SOURCE_DIR}/../src)
include_directories(${SOURCE_DIR})

add_library(NN ${SOURCE_DIR}/NN.cpp)
add_executable(deepNeuralNetwork ${SOURCE_DIR}/deepNeuralNetwork.cpp)
target_link_libraries(deepNeuralNetwork NN)

add_executable(eigenExample ${SOURCE_DIR}/eigenExample.cpp)

add_executable(NN_test ${SOURCE_DIR}/unittest/NN_test.cpp)
target_link_libraries(NN_test boost_unit_test_framework NN)