#include "command_metadata.h"

using namespace GlassOS;

std::vector<CommandMetadata>
CommandMetadataManager::database;

bool CommandMetadataManager::Initialize()
{
    database.clear();

    return true;
}

bool CommandMetadataManager::Register(
    const CommandMetadata& metadata)
{
    database.push_back(metadata);

    return true;
}

bool CommandMetadataManager::Exists(
    const std::string& command)
{
    for(const auto& item : database)
    {
        if(item.name == command)
            return true;
    }

    return false;
}

CommandMetadata
CommandMetadataManager::Get(
    const std::string& command)
{
    for(const auto& item : database)
    {
        if(item.name == command)
            return item;
    }

    return {};
}
