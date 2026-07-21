#pragma once

#include <string>

namespace GlassOS
{
    class AutoSaveManager
    {
    public:
        static bool Initialize();

        static bool Enable();

        static bool Disable();

        static bool SaveNow();

        static bool SetInterval(
            int seconds);

        static bool IsEnabled();

    private:
        static bool enabled;

        static int intervalSeconds;
    };
}
