#include "ai_terminal.h"
#include "ai_command_manager.h"

#include <iostream>

using namespace GlassOS;

bool AITerminal::Initialize()
{
    return true;
}

bool AITerminal::Start()
{
    std::cout
        << "[AI Terminal] Started\n";

    return true;
}

bool AITerminal::Stop()
{
    std::cout
        << "[AI Terminal] Closed\n";

    return true;
}

bool AITerminal::ProcessPrompt(
    const std::string& prompt)
{
    ExecuteNaturalTask(prompt);

    DetectCommandCreation(prompt);

    return true;
}

bool AITerminal::ExecuteNaturalTask(
    const std::string& prompt)
{
    std::cout
        << "AI Processing:\n"
        << prompt
        << std::endl;

    return true;
}

bool AITerminal::DetectCommandCreation(
    const std::string& prompt)
{
    AskToSaveCommand(prompt);

    return true;
}

bool AITerminal::AskToSaveCommand(
    const std::string& task)
{
    AICommandManager::SuggestCommand(task);

    return true;
}
