#pragma once

#include <string>

namespace GlassOS
{
    class UpdateManager
    {
    public:
        static bool Initialize();

        static bool CheckUpdates();

        static bool DownloadUpdate(
            const std::string& version);

        static bool InstallUpdate();

        static std::string CurrentVersion();

        static bool IsUpdateAvailable();

    private:
        static std::string version;

        static bool updateAvailable;
    };
}
