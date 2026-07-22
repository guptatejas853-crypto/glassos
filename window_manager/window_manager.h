#pragma once

#include <memory>
#include <vector>

#include "window.h"

namespace GlassOS
{
    class WindowManager
    {
    public:

        static bool Initialize();

        static std::shared_ptr<Window>
        CreateWindow(
            const std::string& title,
            int width,
            int height);

        static void DestroyWindow(
            std::shared_ptr<Window> window);

        static const std::vector<
            std::shared_ptr<Window>>&
        GetWindows();

    private:

        static std::vector<
            std::shared_ptr<Window>> windows;
    };
}
