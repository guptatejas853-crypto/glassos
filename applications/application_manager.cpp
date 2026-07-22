#include "application_manager.h"

using namespace GlassOS;

std::vector<std::shared_ptr<Application>>
ApplicationManager::m_apps;

bool ApplicationManager::Initialize()
{
    m_apps.clear();

    return true;
}

void ApplicationManager::AddApplication(
    std::shared_ptr<Application> app)
{
    m_apps.push_back(app);
}

const std::vector<
    std::shared_ptr<Application>>&
ApplicationManager::GetApplications()
{
    return m_apps;
}
