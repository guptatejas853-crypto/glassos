#include "command_memory.h"

using namespace GlassOS;

std::unordered_map<
    std::string,
    int>
CommandMemory::usage;


bool CommandMemory::Initialize()
{
    usage.clear();

    return true;
}


void CommandMemory::Record(
    const std::string& command)
{
    usage[command]++;
}


int CommandMemory::UsageCount(
    const std::string& command)
{
    auto it = usage.find(command);

    if(it == usage.end())
        return 0;

    return it->second;
}


std::string CommandMemory::MostUsed()
{
    int best = -1;

    std::string command;

    for(const auto& item : usage)
    {
        if(item.second > best)
        {
            best = item.second;

            command = item.first;
        }
    }

    return command;
}


bool CommandMemory::Forget(
    const std::string& command)
{
    return usage.erase(command) > 0;
}
