#pragma once

#include <string>

namespace GlassOS
{
    class StorageManager
    {
    public:
        static bool Initialize();

        static bool SetStoragePath(
            const std::string& path);

        static std::string GetStoragePath();

        static bool ClearCache();

        static bool EnableStorageProtection();

        static bool IsStorageProtected();

    private:
        static std::string storagePath;

        static bool protectedMode;
    };
}
