#include "system.h"

#include "../hal/hal.h"
#include "../drivers/driver_manager.h"
#include "../desktop/desktop_manager.h"
#include "../applications/application_manager.h"
#include "../login/login_manager.h"

using namespace GlassOS;

bool GlassOS::SystemInitialize()
{
    HAL::Initialize();

    DriverManager::Initialize();

    DesktopManager::Initialize();

    ApplicationManager::Initialize();

    LoginManager::Initialize();

    return true;
}

bool GlassOS::SystemStart()
{
    LoginManager::Start();

    DesktopManager::StartDesktop();

    return true;
}

void GlassOS::SystemShutdown()
{
    DesktopManager::ShutdownDesktop();
}
