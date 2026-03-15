#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "IApplication.h"

class SandboxApp final : public IApplication {
public:
    SandboxApp();
    ~SandboxApp() override;
    void Initialize() override;
    void Run() override;
    void Update(float delta_time) override;
    void Render(float aspect_ratio) override;
    void Shutdown() override;
private:
    GLFWwindow* window = nullptr;
};