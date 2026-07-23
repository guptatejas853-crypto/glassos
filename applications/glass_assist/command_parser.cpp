#include "command_parser.h"

using namespace GlassOS;

std::string CommandParser::Parse(
    const std::string& input)
{
    if(input == "open explorer")
        return "explorer";

    if(input == "open settings")
        return "settings";

    if(input == "open notebook")
        return "notebook";

    if(input == "open terminal")
        return "terminal";

    if(input == "help")
        return "help";

    return "unknown";
}
