cmake_minimum_required(VERSION 3.10)
project(GameEngine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(include lib/glm lib/stb lib/glfw/include lib/glew/include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(GameEngine main.cpp ${SOURCES})

# Link libraries
target_link_libraries(GameEngine glfw GLEW GL)
