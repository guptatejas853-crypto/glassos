#pragma once

#include <string>

namespace GlassOS
{
    class GestureManager
    {
    public:
        static bool Initialize();

        static bool EnableGestures();

        static bool DisableGestures();

        static bool IsEnabled();

        static bool SetGesture(
            const std::string& gesture,
            const std::string& action);

        static std::string GetAction(
            const std::string& gesture);

    private:
        static bool enabled;
    };
}
