#pragma once

#include <string>

namespace GlassOS
{
    class GlassSync
    {
    public:
        static bool Initialize();

        static bool EnableSync();

        static bool DisableSync();

        static bool SyncNow();

        static bool UploadData();

        static bool DownloadData();

        static bool IsSyncEnabled();

    private:
        static bool syncEnabled;
    };
}
