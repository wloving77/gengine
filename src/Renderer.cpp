// Renderer.cpp
#include "Renderer.h"
#include <iostream>

Renderer::Renderer() {}

Renderer::~Renderer() {}

void Renderer::Init() {
    glewExperimental = GL_TRUE;
    GLenum err = glewInit();
    if (err != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW: " << glewGetErrorString(err) << std::endl;
    }
}

void Renderer::Draw() {
    // Draw your objects here
}