#include "settings_window.h"

#include <iostream>

using namespace GlassOS;

bool SettingsWindow::Initialize()
{
    return true;
}

bool SettingsWindow::Create()
{
    std::cout
        << "[Glass Settings] Window Created"
        << std::endl;

    return true;
}

bool SettingsWindow::Show()
{
    std::cout
        << "[Glass Settings] Window Visible"
        << std::endl;

    return true;
}

bool SettingsWindow::Hide()
{
    std::cout
        << "[Glass Settings] Window Hidden"
        << std::endl;

    return true;
}

bool SettingsWindow::Close()
{
    std::cout
        << "[Glass Settings] Window Closed"
        << std::endl;

    return true;
}

bool SettingsWindow::Refresh()
{
    std::cout
        << "[Glass Settings] Refreshed"
        << std::endl;

    return true;
}
