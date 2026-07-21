#include "notebook_window.h"

#include <iostream>

using namespace GlassOS;

bool NotebookWindow::Initialize()
{
    return true;
}

bool NotebookWindow::Create()
{
    std::cout
        << "[Glass Notebook] Window Created"
        << std::endl;

    return true;
}

bool NotebookWindow::Show()
{
    std::cout
        << "[Glass Notebook] Window Visible"
        << std::endl;

    return true;
}

bool NotebookWindow::Hide()
{
    std::cout
        << "[Glass Notebook] Window Hidden"
        << std::endl;

    return true;
}

bool NotebookWindow::Close()
{
    std::cout
        << "[Glass Notebook] Window Closed"
        << std::endl;

    return true;
}

bool NotebookWindow::Refresh()
{
    std::cout
        << "[Glass Notebook] Refreshed"
        << std::endl;

    return true;
}
