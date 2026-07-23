#include "document_manager.h"

#include <fstream>
#include <sstream>

using namespace GlassOS;

bool DocumentManager::Save(
    const std::string& file,
    const std::string& text)
{
    std::ofstream out(file);

    if(!out.is_open())
        return false;

    out << text;

    return true;
}

std::string DocumentManager::Load(
    const std::string& file)
{
    std::ifstream in(file);

    if(!in.is_open())
        return "";

    std::stringstream buffer;

    buffer << in.rdbuf();

    return buffer.str();
}
