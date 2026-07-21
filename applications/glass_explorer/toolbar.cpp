#include "toolbar.h"

using namespace GlassOS;

std::vector<ToolbarButton> Toolbar::buttons;

bool Toolbar::Initialize()
{
    return LoadDefaultButtons();
}

bool Toolbar::LoadDefaultButtons()
{
    buttons.clear();

    buttons.push_back({"back", "Back"});
    buttons.push_back({"forward", "Forward"});
    buttons.push_back({"up", "Up"});
    buttons.push_back({"refresh", "Refresh"});

    buttons.push_back({"newfolder", "New Folder"});

    buttons.push_back({"copy", "Copy"});
    buttons.push_back({"cut", "Cut"});
    buttons.push_back({"paste", "Paste"});

    buttons.push_back({"delete", "Delete"});

    buttons.push_back({"search", "Search"});

    return true;
}

const std::vector<ToolbarButton>&
Toolbar::GetButtons()
{
    return buttons;
}
