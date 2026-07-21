#include "command_parser.h"

using namespace GlassOS;

bool CommandParser::Initialize()
{
    return true;
}

bool CommandParser::IsCommand(
    const std::string& input)
{
    return !input.empty() &&
           input[0] == '/';
}

std::string CommandParser::Parse(
    const std::string& input)
{
    if (!IsCommand(input))
        return "";

    std::size_t space = input.find(' ');

    if (space == std::string::npos)
        return input;

    return input.substr(0, space);
}

std::string CommandParser::GetArguments(
    const std::string& input)
{
    std::size_t space = input.find(' ');

    if (space == std::string::npos)
        return "";

    return Trim(
        input.substr(space + 1));
}

std::string CommandParser::Trim(
    const std::string& text)
{
    std::size_t first =
        text.find_first_not_of(" ");

    if (first == std::string::npos)
        return "";

    std::size_t last =
        text.find_last_not_of(" ");

    return text.substr(
        first,
        last - first + 1);
}
