// Engine.h
#pragma once
#include <GLFW/glfw3.h>

class Engine {
public:
    Engine();
    ~Engine();

    bool Init();
    void Update();
    void Render();
    void Shutdown();
    bool ShouldClose();

private:
    GLFWwindow* window;
};