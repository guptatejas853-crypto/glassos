#pragma once

#include <string>

namespace GlassOS
{
    class TimeManager
    {
    public:
        static bool Initialize();

        static bool SetTimeZone(
            const std::string& zone);

        static std::string GetTimeZone();

        static bool SetFormat(
            const std::string& format);

        static std::string GetFormat();

        static bool EnableAutoSync();

        static bool DisableAutoSync();

        static bool AutoSyncEnabled();

    private:
        static std::string timeZone;

        static std::string timeFormat;

        static bool autoSync;
    };
}
