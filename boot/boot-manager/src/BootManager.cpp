#include "BootFlow.h"

#include "Kernel.h"
#include "DriverManager.h"
#include "ServiceManager.h"

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
    std::cout << "[BootFlow] Starting Services...\n";

    return ServiceManager::StartServices();
}

bool BootFlow::LaunchDesktop()
{
    std::cout << "[BootFlow] Launching Desktop Environment...\n";

    return true;
}
