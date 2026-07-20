#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct RecoveryApplication
    {
        std::string name;
        std::string executable;
        std::string workingDirectory;
        bool supportsRecovery;
    };

    struct RecoveryFile
    {
        std::string path;
        bool modified;
    };

    struct RecoveryWindow
    {
        int x;
        int y;
        int width;
        int height;
        bool maximized;
    };

    struct RecoverySession
    {
        std::string sessionId;
        std::string userId;

        std::vector<RecoveryApplication> applications;
        std::vector<RecoveryFile> files;
        std::vector<RecoveryWindow> windows;
    };

    class RecoveryDatabase
    {
    public:
        static bool Save(const RecoverySession& session);

        static bool Load(RecoverySession& session);

        static bool Delete();

        static bool Exists();
    };
}
