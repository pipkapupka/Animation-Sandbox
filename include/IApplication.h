#pragma once

class IApplication {
public:
    inline IApplication();
    inline virtual ~IApplication();
    inline virtual void Initialize();
    inline virtual void Update(float delta_time);
    inline virtual void Render(float aspect_ratio);
    inline virtual void Shutdown();
private:
    IApplication(const IApplication&);
    IApplication& operator=(const IApplication&);
};