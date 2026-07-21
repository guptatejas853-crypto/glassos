#pragma once

#include <string>

namespace GlassOS
{
    class KeyboardManager
    {
    public:
        static bool Initialize();

        static bool SetLayout(
            const std::string& layout);

        static std::string GetLayout();

        static bool EnableAutoCorrect();

        static bool DisableAutoCorrect();

        static bool IsAutoCorrectEnabled();

        static bool SetRepeatRate(
            int rate);

        static int GetRepeatRate();

    private:
        static std::string layout;

        static bool autoCorrect;

        static int repeatRate;
    };
}
