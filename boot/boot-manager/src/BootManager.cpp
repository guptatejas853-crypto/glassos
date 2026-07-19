#include "BootManager.h"
#include "BootFlow.h"

#include <iostream>

using namespace GlassOS;

BootManager::BootManager()
{
}

bool BootManager::Initialize()
{
    std::cout << "[BootManager] Initializing...\n";
    return true;
}

BootMode BootManager::DetectBootMode()
{
    if (WasLastShutdownUnexpected())
        return BootMode::RecoverySession;

    return BootMode::Normal;
}

void BootManager::Start()
{
    BootMode mode = DetectBootMode();

    switch (mode)
    {
        case BootMode::Normal:
            StartNormalBoot();
            break;

        case BootMode::RecoverySession:
            StartRecoverySession();
            break;

        case BootMode::RecoveryCenter:
            StartRecoveryCenter();
            break;

        case BootMode::SafeMode:
            StartSafeMode();
            break;

        case BootMode::Diagnostics:
            StartDiagnostics();
            break;
    }
}

bool BootManager::WasLastShutdownUnexpected()
{
    return false;
}

void BootManager::StartNormalBoot()
{
    std::cout << "[BootManager] Starting Normal Boot...\n";

    if (!BootFlow::InitializeHardware())
        return;

    if (!BootFlow::LoadKernel())
        return;

    if (!BootFlow::LoadDrivers())
        return;

    if (!BootFlow::StartServices())
        return;

    if (!BootFlow::LaunchDesktop())
        return;

    std::cout << "[BootManager] Boot Completed Successfully.\n";
}

void BootManager::StartRecoverySession()
{
    std::cout << "[BootManager] Recovery Session\n";
}

void BootManager::StartRecoveryCenter()
{
    std::cout << "[BootManager] Recovery Center\n";
}

void BootManager::StartSafeMode()
{
    std::cout << "[BootManager] Safe Mode\n";
}

void BootManager::StartDiagnostics()
{
    std::cout << "[BootManager] Diagnostics Mode\n";
}
