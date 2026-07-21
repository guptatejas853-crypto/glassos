#include "command_terminal.h"
#include "command_registry.h"

#include <iostream>

using namespace GlassOS;

bool CommandTerminal::Initialize()
{
    CommandRegistry::RegisterSystemCommand(
        "/verify",
        VerifySystem);

    CommandRegistry::RegisterSystemCommand(
        "/repair",
        RepairSystem);

    CommandRegistry::RegisterSystemCommand(
        "/scan",
        ScanSystem);

    CommandRegistry::RegisterSystemCommand(
        "/update",
        UpdateSystem);

    CommandRegistry::RegisterSystemCommand(
        "/help",
        ShowHelp);

    return true;
}

bool CommandTerminal::Start()
{
    std::cout << "[Command Terminal] Started\n";
    return true;
}

bool CommandTerminal::Stop()
{
    std::cout << "[Command Terminal] Closed\n";
    return true;
}

bool CommandTerminal::Execute(const std::string& command)
{
    if(CommandRegistry::Execute(command))
        return true;

    return UnknownCommand(command);
}

bool CommandTerminal::VerifySystem()
{
    std::cout << "Verifying GlassOS system files...\n";
    return true;
}

bool CommandTerminal::RepairSystem()
{
    std::cout << "Repairing GlassOS...\n";
    return true;
}

bool CommandTerminal::ScanSystem()
{
    std::cout << "Scanning GlassOS...\n";
    return true;
}

bool CommandTerminal::UpdateSystem()
{
    std::cout << "Checking for updates...\n";
    return true;
}

bool CommandTerminal::ShowHelp()
{
    std::cout << "\n";

    std::cout << "/verify\n";
    std::cout << "/repair\n";
    std::cout << "/scan\n";
    std::cout << "/update\n";
    std::cout << "/help\n";

    std::cout << "\n";

    return true;
}

bool CommandTerminal::UnknownCommand(
    const std::string& command)
{
    std::cout
        << "Unknown command: "
        << command
        << std::endl;

    std::cout
        << "Searching for similar commands..."
        << std::endl;

    return false;
}
