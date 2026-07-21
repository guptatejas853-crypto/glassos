#include "terminal_manager.h"

#include <iostream>

using namespace GlassOS;

bool TerminalManager::commandMode = true;

bool TerminalManager::Initialize()
{
    commandMode = true;

    return true;
}

bool TerminalManager::Start()
{
    std::cout << "[Terminal] Started\n";

    return true;
}

bool TerminalManager::Shutdown()
{
    std::cout << "[Terminal] Closed\n";

    return true;
}

bool TerminalManager::OpenCommandTerminal()
{
    commandMode = true;

    std::cout << "[Terminal] Command Mode\n";

    return true;
}

bool TerminalManager::OpenAITerminal()
{
    commandMode = false;

    std::cout << "[Terminal] AI Mode\n";

    return true;
}
