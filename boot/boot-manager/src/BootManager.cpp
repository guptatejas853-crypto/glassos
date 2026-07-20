#include "BootFlow.h"

#include "Kernel.h"
#include "DriverManager.h"
#include "SessionEngine.h"

#include <iostream>

using namespace GlassOS;

bool BootFlow::InitializeHardware()
{
    std::cout << "[BootFlow] Initializing Hardware...\n";
    return true;
}

bool BootFlow::LoadKernel()
{
    std::cout << "[BootFlow] Loading Kernel...\n";

    return Kernel::Initialize();
}

bool BootFlow::LoadDrivers()
{
    std::cout << "[BootFlow] Loading Drivers...\n";

    return DriverManager::Initialize();
}

bool BootFlow::StartServices()
{
    std::cout << "[BootFlow] Starting System Services...\n";

    return SessionEngine::Initialize();
}

bool BootFlow::LaunchDesktop()
{
    std::cout << "[BootFlow] Starting Glass Session Engine...\n";

    if (!SessionEngine::Start())
        return false;

    std::cout << "[BootFlow] Launching Desktop Environment...\n";

    return true;
}
