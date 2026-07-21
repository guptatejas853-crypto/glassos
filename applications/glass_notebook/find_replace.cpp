#include "find_replace.h"

using namespace GlassOS;

bool FindReplace::Initialize()
{
    return true;
}

int FindReplace::Find(
    const std::string& text,
    const std::string& keyword)
{
    std::size_t position =
        text.find(keyword);

    if(position == std::string::npos)
        return -1;

    return static_cast<int>(position);
}

std::string FindReplace::ReplaceFirst(
    const std::string& text,
    const std::string& find,
    const std::string& replace)
{
    std::string result = text;

    std::size_t position =
        result.find(find);

    if(position != std::string::npos)
    {
        result.replace(
            position,
            find.length(),
            replace);
    }

    return result;
}

std::string FindReplace::ReplaceAll(
    const std::string& text,
    const std::string& find,
    const std::string& replace)
{
    std::string result = text;

    std::size_t position = 0;

    while((position = result.find(find, position))
            != std::string::npos)
    {
        result.replace(
            position,
            find.length(),
            replace);

        position += replace.length();
    }

    return result;
}
