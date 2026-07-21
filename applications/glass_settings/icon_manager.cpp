#include "icon_manager.h"

using namespace GlassOS;

std::unordered_map<
    std::string,
    std::string>
IconManager::icons;

bool IconManager::Initialize()
{
    icons.clear();

    RegisterIcon(
        "explorer",
        "icons/explorer.png");

    RegisterIcon(
        "notebook",
        "icons/notebook.png");

    RegisterIcon(
        "settings",
        "icons/settings.png");

    RegisterIcon(
        "terminal",
        "icons/terminal.png");

    RegisterIcon(
        "recycle_bin",
        "icons/recycle_bin.png");

    return true;
}

bool IconManager::RegisterIcon(
    const std::string& id,
    const std::string& path)
{
    icons[id] = path;

    return true;
}

std::string IconManager::GetIcon(
    const std::string& id)
{
    auto it = icons.find(id);

    if(it == icons.end())
        return "";

    return it->second;
}

bool IconManager::Exists(
    const std::string& id)
{
    return icons.find(id) != icons.end();
}
