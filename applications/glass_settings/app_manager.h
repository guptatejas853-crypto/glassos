#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class AppManager
    {
    public:
        static bool Initialize();

        static bool Install(
            const std::string& app);

        static bool Uninstall(
            const std::string& app);

        static bool IsInstalled(
            const std::string& app);

        static const std::vector<std::string>&
            GetInstalledApps();

    private:
        static std::vector<std::string> apps;
    };
}
