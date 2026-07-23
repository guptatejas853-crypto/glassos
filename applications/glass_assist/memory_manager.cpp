#include "memory_manager.h"

using namespace GlassOS;

std::vector<std::string>
MemoryManager::messages;

bool MemoryManager::Initialize()
{
    messages.clear();

    return true;
}

void MemoryManager::Add(
    const std::string& message)
{
    messages.push_back(message);

    if(messages.size() > 20)
        messages.erase(messages.begin());
}

std::vector<std::string>
MemoryManager::History()
{
    return messages;
}
