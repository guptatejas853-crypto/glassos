#include "command_registry.h"

using namespace GlassOS;

std::unordered_map<
    std::string,
    CommandRegistry::CommandFunction>
CommandRegistry::systemCommands;

std::unordered_map<
    std::string,
    CommandRegistry::CommandFunction>
CommandRegistry::userCommands;

std::unordered_map<
    std::string,
    CommandRegistry::CommandFunction>
CommandRegistry::aiCommands;

bool CommandRegistry::Initialize()
{
    systemCommands.clear();
    userCommands.clear();
    aiCommands.clear();

    return true;
}

bool CommandRegistry::RegisterSystemCommand(
    const std::string& command,
    CommandFunction function)
{
    systemCommands[command] = function;
    return true;
}

bool CommandRegistry::RegisterUserCommand(
    const std::string& command,
    CommandFunction function)
{
    userCommands[command] = function;
    return true;
}

bool CommandRegistry::RegisterAICommand(
    const std::string& command,
    CommandFunction function)
{
    aiCommands[command] = function;
    return true;
}

bool CommandRegistry::Execute(
    const std::string& command)
{
    auto system = systemCommands.find(command);
    if(system != systemCommands.end())
        return system->second();

    auto user = userCommands.find(command);
    if(user != userCommands.end())
        return user->second();

    auto ai = aiCommands.find(command);
    if(ai != aiCommands.end())
        return ai->second();

    return false;
}

bool CommandRegistry::Exists(
    const std::string& command)
{
    return
        systemCommands.count(command) ||
        userCommands.count(command) ||
        aiCommands.count(command);
}

std::vector<std::string>
CommandRegistry::GetAllCommands()
{
    std::vector<std::string> result;

    for(const auto& cmd : systemCommands)
        result.push_back(cmd.first);

    for(const auto& cmd : userCommands)
        result.push_back(cmd.first);

    for(const auto& cmd : aiCommands)
        result.push_back(cmd.first);

    return result;
}
