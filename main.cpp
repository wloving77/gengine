// main.cpp
#include "./include/Engine.h"
#include "./include/Renderer.h"

int main() {
    Engine engine;

    if (!engine.Init()) {
        return -1;
    }

    while (!engine.ShouldClose()) {
        engine.Update();
        engine.Render();
    }

    engine.Shutdown();
    return 0;
}
