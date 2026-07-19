#include "BootFlow.h"
#include "Kernel.h"

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
    return true;
}

bool BootFlow::StartServices()
{
    std::cout << "[BootFlow] Starting System Services...\n";
    return true;
}

bool BootFlow::LaunchDesktop()
{
    std::cout << "[BootFlow] Launching Desktop Environment...\n";
    return true;
}
