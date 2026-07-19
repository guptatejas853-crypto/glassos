#pragma once

#include <string>

namespace GlassOS
{
    enum class BootMode
    {
        Normal,
        RecoverySession,
        RecoveryCenter,
        SafeMode,
        Diagnostics
    };

    class BootManager
    {
    public:
        BootManager();

        bool Initialize();

        BootMode DetectBootMode();

        void Start();

    private:
        bool WasLastShutdownUnexpected();

        void StartNormalBoot();

        void StartRecoverySession();

        void StartRecoveryCenter();

        void StartSafeMode();

        void StartDiagnostics();
    };
}
