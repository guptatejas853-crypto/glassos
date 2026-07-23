#include "assist.h"
#include "command_parser.h"
#include "response_generator.h"
#include "memory_manager.h"

using namespace GlassOS;

bool Assist::Initialize()
{
    MemoryManager::Initialize();

    return true;
}

std::string Assist::Process(
    const std::string& input)
{
    MemoryManager::Add(input);

    auto command =
        CommandParser::Parse(input);

    if(command == "explorer")
    {
        // ApplicationLauncher::LaunchExplorer();
    }
    else if(command == "browser")
    {
        // ApplicationLauncher::LaunchBrowser();
    }
    else if(command == "settings")
    {
        // ApplicationLauncher::LaunchSettings();
    }
    else if(command == "notebook")
    {
        // ApplicationLauncher::LaunchNotebook();
    }
    else if(command == "terminal")
    {
        // ApplicationLauncher::LaunchTerminal();
    }

    return ResponseGenerator::Generate(command);
}
