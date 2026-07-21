#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class StartupManager
    {
    public:
        static bool Initialize();

        static bool AddStartupApp(
            const std::string& app);

        static bool RemoveStartupApp(
            const std::string& app);

        static bool IsStartupEnabled(
            const std::string& app);

        static const std::vector<std::string>&
            GetStartupApps();

        static bool EnableStartup();

        static bool DisableStartup();

        static bool IsEnabled();

    private:
        static std::vector<std::string> apps;

        static bool enabled;
    };
}
