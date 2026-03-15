#pragma once

class IApplication {
public:
    virtual ~IApplication() = default;
    virtual void Initialize() = 0;
    virtual void Update(float delta_time) = 0;
    virtual void Render(float aspect_ratio) = 0;
    virtual void Shutdown() = 0;
private:
    IApplication(const IApplication&) = delete;
    IApplication& operator=(const IApplication&) = delete;
};