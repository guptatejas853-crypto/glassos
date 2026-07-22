#include "taskbar_controller.h"

#include "../applications/application_launcher.h"

using namespace GlassOS;

bool TaskbarController::Initialize()
{
    return true;
}

void TaskbarController::OpenExplorer()
{
    ApplicationLauncher::Launch("Explorer");
}

void TaskbarController::OpenSettings()
{
    ApplicationLauncher::Launch("Settings");
}

void TaskbarController::OpenNotebook()
{
    ApplicationLauncher::Launch("Notebook");
}

void TaskbarController::OpenTerminal()
{
    ApplicationLauncher::Launch("Terminal");
}
