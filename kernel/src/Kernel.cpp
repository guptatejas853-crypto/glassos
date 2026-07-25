#include "Kernel.h"

#include <iostream>

#include "../../ui/renderer.h"
#include "../../ui/glass_effect.h"

#include "../../desktop/session_manager.h"
#include "../../desktop/desktop_manager.h"

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

    if (!Renderer::Initialize())
        return false;

    if (!GlassEffect::Initialize())
        return false;

    if (!SessionManager::Initialize())
        return false;

    if (!DesktopManager::Initialize())
        return false;

    DesktopManager::StartDesktop();

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
