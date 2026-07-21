#pragma once

#include <string>

namespace GlassOS
{
    class SettingsManager
    {
    public:
        static bool Initialize();

        static bool Load();

        static bool Save();

        static bool SetValue(
            const std::string& key,
            const std::string& value);

        static std::string GetValue(
            const std::string& key);

        static bool Exists(
            const std::string& key);
    };
}
