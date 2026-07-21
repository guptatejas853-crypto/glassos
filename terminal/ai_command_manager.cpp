#include "ai_command_manager.h"
#include "user_command_manager.h"

#include <iostream>

using namespace GlassOS;

std::string AICommandManager::suggestedCommand;
std::string AICommandManager::suggestedDescription;

bool AICommandManager::Initialize()
{
    suggestedCommand.clear();
    suggestedDescription.clear();

    return true;
}

bool AICommandManager::SuggestCommand(
    const std::string& task)
{
    suggestedCommand = "/custom";
    suggestedDescription = task;

    std::cout << "\n";
    std::cout << "────────────────────────────\n";
    std::cout << "I can create a new GlassOS command.\n\n";

    std::cout << "Suggested Command\n\n";
    std::cout << suggestedCommand << "\n\n";

    std::cout << "Description\n\n";
    std::cout << suggestedDescription << "\n\n";

    std::cout << "Save this command?\n\n";
    std::cout << "[Y] Yes\n";
    std::cout << "[N] No\n";
    std::cout << "────────────────────────────\n";

    return true;
}

bool AICommandManager::SaveCommand(
    const std::string& command,
    const std::string& description)
{
    UserCommandManager::RegisterCommand(
        command,
        description);

    std::cout
        << "Command saved successfully.\n";

    return true;
}

bool AICommandManager::CancelCommand()
{
    suggestedCommand.clear();
    suggestedDescription.clear();

    std::cout
        << "Command was not saved.\n";

    return true;
}
