// Engine.cpp
#include "Engine.h"
#include <iostream>

Engine::Engine() : window(nullptr) {}

Engine::~Engine() {
    Shutdown();
}

bool Engine::Init() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return false;
    }

    window = glfwCreateWindow(800, 600, "Game Engine", nullptr, nullptr);
    if (!window) {
        std::cerr << "Failed to create window" << std::endl;
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);
    return true;
}

void Engine::Update() {
    glfwPollEvents();
}

void Engine::Render() {
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);
}

void Engine::Shutdown() {
    if (window) {
        glfwDestroyWindow(window);
        window = nullptr;
    }
    glfwTerminate();
}

bool Engine::ShouldClose() {
    return glfwWindowShouldClose(window);
}
