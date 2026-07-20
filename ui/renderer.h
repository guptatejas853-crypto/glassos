#pragma once

#include <string>

namespace GlassOS
{
    class Renderer
    {
    public:
        static bool Initialize();

        static bool BeginFrame();

        static bool EndFrame();

        static bool DrawRectangle(
            int x,
            int y,
            int width,
            int height);

        static bool DrawRoundedRectangle(
            int x,
            int y,
            int width,
            int height,
            int radius);

        static bool DrawText(
            int x,
            int y,
            const std::string& text);

        static bool DrawImage(
            int x,
            int y,
            const std::string& imagePath);
    };
}
