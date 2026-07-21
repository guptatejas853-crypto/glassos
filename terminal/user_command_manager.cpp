#include "user_command_manager.h"

#include <iostream>

using namespace GlassOS;

const std::string
UserCommandManager::commandDatabase =
    "user_commands.db";

bool UserCommandManager::Initialize()
{
    return Load();
}

bool UserCommandManager::Load()
{
    std::cout
        << "[User Commands] Loaded\n";

    return true;
}

bool UserCommandManager::Save()
{
    std::cout
        << "[User Commands] Saved\n";

    return true;
}

bool UserCommandManager::RegisterCommand(
    const std::string& command,
    const std::string& description)
{
    std::cout
        << "Registered "
        << command
        << " : "
        << description
        << std::endl;

    Save();

    return true;
}

bool UserCommandManager::RemoveCommand(
    const std::string& command)
{
    std::cout
        << "Removed "
        << command
        << std::endl;

    Save();

    return true;
}

bool UserCommandManager::Exists(
    const std::string& command)
{
    return false;
}
