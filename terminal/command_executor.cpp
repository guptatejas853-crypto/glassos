#include "command_executor.h"

#include "command_registry.h"

using namespace GlassOS;


bool CommandExecutor::Initialize()
{
    return true;
}


bool CommandExecutor::Execute(
    const std::string& command)
{
    if(CommandRegistry::HasSystemCommand(command))
        return ExecuteSystemCommand(command);

    if(CommandRegistry::HasUserCommand(command))
        return ExecuteUserCommand(command);

    if(CommandRegistry::HasAICommand(command))
        return ExecuteAICommand(command);

    return false;
}


bool CommandExecutor::ExecuteSystemCommand(
    const std::string& command)
{
    return CommandRegistry::RunSystemCommand(command);
}


bool CommandExecutor::ExecuteUserCommand(
    const std::string& command)
{
    return CommandRegistry::RunUserCommand(command);
}


bool CommandExecutor::ExecuteAICommand(
    const std::string& command)
{
    return CommandRegistry::RunAICommand(command);
}
