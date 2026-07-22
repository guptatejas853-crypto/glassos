#include "application.h"

using namespace GlassOS;

Application::Application(const std::string& name)
    : m_name(name)
{
}

void Application::Launch()
{
}

void Application::Close()
{
}

std::string Application::GetName() const
{
    return m_name;
}
