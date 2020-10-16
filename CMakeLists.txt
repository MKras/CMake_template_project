cmake_minimum_required(VERSION 3.0)

set (NAME template_project)
project(${NAME}})

set(CMAKE_CXX_STANDARD 17)

include_directories(includes)
file(GLOB SOURCES src/*.cpp)

enable_testing()
add_subdirectory(src/tests)

add_library(AppLib SHARED src/utils.cpp)

add_executable(${NAME}.bin ${SOURCES})

install(TARGETS AppLib DESTINATION ${CMAKE_BINARY_DIR}/lib)
install(TARGETS ${NAME}.bin DESTINATION ${CMAKE_BINARY_DIR}/bin)
