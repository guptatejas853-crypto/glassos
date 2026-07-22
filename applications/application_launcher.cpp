#include "application_launcher.h"

#include "application.h"
#include "application_manager.h"

#include <memory>

using namespace GlassOS;

bool ApplicationLauncher::Initialize()
{
    return true;
}

bool ApplicationLauncher::Launch(
    const std::string& name)
{
    auto app =
        std::make_shared<Application>(name);

    app->Launch();

    ApplicationManager::AddApplication(app);

    return true;
}
