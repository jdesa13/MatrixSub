cmake_minimum_required(VERSION 2.8.9)
project (MatrixSub)

set(EIGEN_INCLUDE_DIR
    ${CMAKE_CURRENT_SOURCE_DIR}/eigen-git-mirror)

add_subdirectory(eigen-git-mirror)

include_directories(${EIGEN_INCLUDE_DIR})
add_executable(tester main.cpp)

target_link_libraries(tester eigen-git-mirror)
ADD_DEPENDENCIES(tester eigen-git-mirror)