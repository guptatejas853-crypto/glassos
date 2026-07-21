#include "default_apps.h"

using namespace GlassOS;

std::string DefaultApps::browser =
    "Glass Browser";

std::string DefaultApps::fileManager =
    "Glass Explorer";

std::string DefaultApps::terminal =
    "Glass Terminal";

std::string DefaultApps::textEditor =
    "Glass Notebook";


bool DefaultApps::Initialize()
{
    browser = "Glass Browser";

    fileManager = "Glass Explorer";

    terminal = "Glass Terminal";

    textEditor = "Glass Notebook";

    return true;
}


bool DefaultApps::SetDefault(
    const std::string& type,
    const std::string& app)
{
    if(type == "browser")
        browser = app;

    else if(type == "fileManager")
        fileManager = app;

    else if(type == "terminal")
        terminal = app;

    else if(type == "textEditor")
        textEditor = app;

    else
        return false;

    return true;
}


std::string DefaultApps::GetDefault(
    const std::string& type)
{
    if(type == "browser")
        return browser;

    if(type == "fileManager")
        return fileManager;

    if(type == "terminal")
        return terminal;

    if(type == "textEditor")
        return textEditor;

    return "";
}


bool DefaultApps::Reset()
{
    Initialize();

    return true;
}
