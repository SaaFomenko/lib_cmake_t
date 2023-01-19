cmake_minimum_required(VERSION 3.5)

project(user 
	VERSION 1.0.0
	DESCRIPTION "Template for C++ library built with CMake"
	LANGUAGES CXX)

add_library(${PROJECT_NAME})
add_library(${PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

string(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_CURRENT_SOURCE_DIR}"
	is_top_level)
