#pragma once

namespace GlassOS
{
    class Renderer
    {
    public:
        static bool Initialize();
        static bool BeginFrame();
        static bool EndFrame();

        static bool DrawWindow(
            const char* title,
            int x,
            int y,
            int width,
            int height);
    };
}
