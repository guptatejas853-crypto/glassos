#include "command_generator.h"

#include <algorithm>

using namespace GlassOS;


bool CommandGenerator::Initialize()
{
    return true;
}


bool CommandGenerator::CanGenerate(
    const std::string& request)
{
    return !request.empty();
}


std::string CommandGenerator::Generate(
    const std::string& request)
{
    std::string text = request;

    std::transform(
        text.begin(),
        text.end(),
        text.begin(),
        ::tolower);

    if(text.find("backup") != std::string::npos)
        return "/backup";

    if(text.find("shutdown") != std::string::npos)
        return "/shutdown";

    if(text.find("restart") != std::string::npos)
        return "/restart";

    if(text.find("settings") != std::string::npos)
        return "/settings";

    if(text.find("downloads") != std::string::npos)
        return "explorer Downloads";

    return "";
}


void CommandGenerator::Reset()
{
}
