#pragma once

#include <string>

namespace GlassOS
{
    class BackupSchedule
    {
    public:
        static bool Initialize();

        static bool Enable();

        static bool Disable();

        static bool IsEnabled();

        static bool SetFrequency(
            const std::string& frequency);

        static std::string GetFrequency();

    private:
        static bool enabled;

        static std::string frequency;
    };
}
