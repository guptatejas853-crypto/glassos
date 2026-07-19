#include "Kernel.h"

#include <iostream>

using namespace GlassOS;

bool Kernel::Initialize()
{
    std::cout << "[Kernel] Initializing...\n";

    if (!InitializeMemory())
        return false;

    if (!InitializeProcessManager())
        return false;

    if (!InitializeSecurity())
        return false;

    if (!InitializeIPC())
        return false;

    std::cout << "[Kernel] Initialization Complete.\n";

    return true;
}

bool Kernel::InitializeMemory()
{
    std::cout << "[Kernel] Memory Manager Initialized.\n";
    return true;
}

bool Kernel::InitializeProcessManager()
{
    std::cout << "[Kernel] Process Manager Initialized.\n";
    return true;
}

bool Kernel::InitializeSecurity()
{
    std::cout << "[Kernel] Security Manager Initialized.\n";
    return true;
}

bool Kernel::InitializeIPC()
{
    std::cout << "[Kernel] IPC Initialized.\n";
    return true;
}

bool Kernel::Shutdown()
{
    std::cout << "[Kernel] Shutdown Complete.\n";
    return true;
}
