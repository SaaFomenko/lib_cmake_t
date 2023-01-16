cmake_minimum_required(VERSION 3.5.0)

project(myprog)

file(GLOB 
	CPP_SRC "src/*.cpp")

# add_library(${PROJECT_NAME} STATIC ${_LIB})

add_executable(${PROJECT_NAME}.exe ${CPP_SRC})

target_link_libraries(${PROJECT_NAME}.exe {PROJECT_NAME})
