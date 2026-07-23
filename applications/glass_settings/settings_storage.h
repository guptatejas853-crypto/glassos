#pragma once

#include <map>
#include <string>

namespace GlassOS
{
    class SettingsStorage
    {
    public:

        static bool Initialize();

        static void SetValue(
            const std::string& key,
            const std::string& value);

        static std::string GetValue(
            const std::string& key);

        static bool Save();

        static bool Load();

    private:

        static std::map<
            std::string,
            std::string> settings;
    };
}
