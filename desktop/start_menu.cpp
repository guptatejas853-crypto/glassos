#include "start_menu.h"

#include "../applications/application_launcher.h"

using namespace GlassOS;

bool StartMenu::Initialize()
{
    return true;
}

void StartMenu::OpenExplorer()
{
    ApplicationLauncher::Launch("Explorer");
}

void StartMenu::OpenSettings()
{
    ApplicationLauncher::Launch("Settings");
}

void StartMenu::OpenNotebook()
{
    ApplicationLauncher::Launch("Notebook");
}

void StartMenu::OpenTerminal()
{
    ApplicationLauncher::Launch("Terminal");
}
