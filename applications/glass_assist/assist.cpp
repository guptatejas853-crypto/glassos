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

    return ResponseGenerator::Generate(command);
}
