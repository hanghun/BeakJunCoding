cmake_minimum_required(VERSION 3.23)

project(BeakJun VERSION 1.0)

set(Headers
	src/Dog.h
)

set(Sources
	src/main.cpp
	src/Dog.cpp
)

add_executable(${PROJECT_NAME}
	${Headers}
	${Sources}
)