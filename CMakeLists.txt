cmake_minimum_required(VERSION 2.8.9)
project (MatrixSub)


##############################################################
# Output paths
##############################################################
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")


set(EIGEN_INCLUDE_DIR
    ${CMAKE_SOURCE_DIR}/eigen-git-mirror)

#add_subdirectory(eigen-git-mirror)

include_directories(${EIGEN_INCLUDE_DIR})
add_executable(Eigen-Tester main.cpp)

