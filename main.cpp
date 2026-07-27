#include <iostream>
#include "Kernel.h"
#include "desktop.h"
#include "window_manager.h"

using namespace GlassOS;

int main()
{
    std::cout << "=================================\n";
    std::cout << "        GlassOS Alpha\n";
    std::cout << "=================================\n";

    std::cout << "[GlassOS] Starting...\n";

    if (!Kernel::Initialize())
    {
        std::cout << "[GlassOS] Kernel Initialization Failed.\n";
        return 1;
    }

    // Start Desktop
    if (!Desktop::Initialize())
    {
        std::cout << "[GlassOS] Desktop Initialization Failed.\n";
        return 1;
    }

    // Start Window Manager
    if (!WindowManager::Initialize())
    {
        std::cout << "[GlassOS] Window Manager Initialization Failed.\n";
        return 1;
    }

    std::cout << "[GlassOS] System Ready.\n";

    return 0;
}
