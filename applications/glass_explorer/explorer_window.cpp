#include "explorer_window.h"

#include "filesystem_engine.h"
#include "address_bar.h"
#include "preview_pane.h"

using namespace GlassOS;

std::string ExplorerWindow::currentPath = "/";


bool ExplorerWindow::Initialize()
{
    currentPath = "/";

    return true;
}


void ExplorerWindow::Open(
    const std::string& path)
{
    currentPath = path;

    AddressBar::SetPath(path);

    FileSystemEngine::ListDirectory(path);
}


std::string ExplorerWindow::CurrentPath()
{
    return currentPath;
}


void ExplorerWindow::Refresh()
{
    FileSystemEngine::ListDirectory(
        currentPath);

    PreviewPane::Clear();
}
