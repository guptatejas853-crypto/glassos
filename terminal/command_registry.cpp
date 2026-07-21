#include "command_registry.h"

using namespace GlassOS;

std::unordered_map<
    std::string,
    CommandRegistry::CommandFunction>
CommandRegistry::commands;

bool CommandRegistry::Initialize()
{
    commands.clear();

    return true;
}

bool CommandRegistry::Register(
    const std::string& command,
    CommandFunction function)
{
    commands[command] = function;

    return true;
}

bool CommandRegistry::Execute(
    const std::string& command)
{
    auto it = commands.find(command);

    if (it == commands.end())
        return false;

    return it->second();
}

bool CommandRegistry::Exists(
    const std::string& command)
{
    return commands.find(command)
        != commands.end();
}
