#include "natural_language_parser.h"

#include <algorithm>

using namespace GlassOS;


bool NaturalLanguageParser::Initialize()
{
    return true;
}


std::string
NaturalLanguageParser::ToLower(
    const std::string& value)
{
    std::string text = value;

    std::transform(
        text.begin(),
        text.end(),
        text.begin(),
        ::tolower);

    return text;
}


bool NaturalLanguageParser::CanParse(
    const std::string& sentence)
{
    return !sentence.empty();
}


std::string
NaturalLanguageParser::Parse(
    const std::string& sentence)
{
    std::string text =
        ToLower(sentence);

    if(text.find("backup")
        != std::string::npos)
    {
        return "/backup";
    }

    if(text.find("shutdown")
        != std::string::npos)
    {
        return "/shutdown";
    }

    if(text.find("restart")
        != std::string::npos)
    {
        return "/restart";
    }

    if(text.find("settings")
        != std::string::npos)
    {
        return "/settings";
    }

    if(text.find("downloads")
        != std::string::npos)
    {
        return "explorer Downloads";
    }

    if(text.find("documents")
        != std::string::npos)
    {
        return "explorer Documents";
    }

    if(text.find("desktop")
        != std::string::npos)
    {
        return "explorer Desktop";
    }

    if(text.find("clear")
        != std::string::npos)
    {
        return "clear";
    }

    return sentence;
}
