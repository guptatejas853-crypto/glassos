#pragma once

#include <string>

namespace GlassOS
{
    class BackupManager
    {
    public:
        static bool Initialize();

        static bool CreateBackup(
            const std::string& location);

        static bool RestoreBackup(
            const std::string& location);

        static bool DeleteBackup(
            const std::string& location);

        static std::string LastBackup();

    private:
        static std::string lastBackup;
    };
}
