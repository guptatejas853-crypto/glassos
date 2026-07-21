#include "command_history.h"

using namespace GlassOS;

std::vector<std::string>
CommandHistory::history;

int CommandHistory::currentIndex = -1;

bool CommandHistory::Initialize()
{
    history.clear();
    currentIndex = -1;

    return true;
}

void CommandHistory::Add(
    const std::string& command)
{
    if(command.empty())
        return;

    history.push_back(command);

    currentIndex =
        static_cast<int>(history.size());
}

std::string CommandHistory::Previous()
{
    if(history.empty())
        return "";

    if(currentIndex > 0)
        currentIndex--;

    return history[currentIndex];
}

std::string CommandHistory::Next()
{
    if(history.empty())
        return "";

    if(currentIndex <
        static_cast<int>(history.size()) - 1)
    {
        currentIndex++;
        return history[currentIndex];
    }

    currentIndex =
        static_cast<int>(history.size());

    return "";
}

void CommandHistory::Clear()
{
    history.clear();

    currentIndex = -1;
}
