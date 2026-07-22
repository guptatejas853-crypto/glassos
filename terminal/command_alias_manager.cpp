#include "command_alias_manager.h"

using namespace GlassOS;

std::unordered_map<
    std::string,
    std::string>
CommandAliasManager::aliases;


bool CommandAliasManager::Initialize()
{
    aliases.clear();

    return true;
}


bool CommandAliasManager::AddAlias(
    const std::string& alias,
    const std::string& command)
{
    aliases[alias] = command;

    return true;
}


bool CommandAliasManager::RemoveAlias(
    const std::string& alias)
{
    return aliases.erase(alias) > 0;
}


bool CommandAliasManager::AliasExists(
    const std::string& alias)
{
    return aliases.find(alias)
        != aliases.end();
}


std::string CommandAliasManager::Resolve(
    const std::string& alias)
{
    auto it = aliases.find(alias);

    if(it == aliases.end())
        return alias;

    return it->second;
}
