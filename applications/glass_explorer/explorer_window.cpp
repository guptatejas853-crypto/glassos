#include "explorer_window.h"

#include <iostream>

using namespace GlassOS;

bool ExplorerWindow::Initialize()
{
    return true;
}

bool ExplorerWindow::Create()
{
    std::cout
        << "[Glass Explorer] Window Created"
        << std::endl;

    return true;
}

bool ExplorerWindow::Show()
{
    std::cout
        << "[Glass Explorer] Window Visible"
        << std::endl;

    return true;
}

bool ExplorerWindow::Hide()
{
    std::cout
        << "[Glass Explorer] Window Hidden"
        << std::endl;

    return true;
}

bool ExplorerWindow::Close()
{
    std::cout
        << "[Glass Explorer] Window Closed"
        << std::endl;

    return true;
}

bool ExplorerWindow::Refresh()
{
    std::cout
        << "[Glass Explorer] Refreshed"
        << std::endl;

    return true;
}
