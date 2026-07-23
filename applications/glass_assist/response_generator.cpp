#include "response_generator.h"

using namespace GlassOS;

std::string ResponseGenerator::Generate(
    const std::string& command)
{
    if(command == "explorer")
        return "Opening Glass Explorer...";

    if(command == "settings")
        return "Opening Glass Settings...";

    if(command == "notebook")
        return "Opening Glass Notebook...";

    if(command == "terminal")
        return "Opening AI Terminal...";

    if(command == "help")
        return "Available commands: open explorer, open settings, open notebook, open terminal, help";

    return "I don't understand that command yet.";
}
