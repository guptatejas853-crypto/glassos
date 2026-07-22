#include "command_validator.h"

#include "command_registry.h"
#include "command_suggester.h"

using namespace GlassOS;


bool CommandValidator::Initialize()
{
    return true;
}


bool CommandValidator::CommandExists(
    const std::string& command)
{
    return
        CommandRegistry::HasSystemCommand(command) ||
        CommandRegistry::HasUserCommand(command) ||
        CommandRegistry::HasAICommand(command);
}


bool CommandValidator::Validate(
    const std::string& command)
{
    return CommandExists(command);
}


std::vector<std::string>
CommandValidator::Suggestions(
    const std::string& command)
{
    return CommandSuggester::Suggest(command);
}
