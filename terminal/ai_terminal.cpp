#include "ai_terminal.h"

#include <array>
#include <cstdio>

using namespace GlassOS;

std::string
AITerminal::Execute(
    const std::string& command)
{
    std::array<char,256> buffer;

    std::string result;

#ifdef _WIN32
    FILE* pipe =
        _popen(command.c_str(),"r");
#else
    FILE* pipe =
        popen(command.c_str(),"r");
#endif

    if(pipe == nullptr)
        return "";

    while(fgets(
        buffer.data(),
        buffer.size(),
        pipe))
    {
        result += buffer.data();
    }

#ifdef _WIN32
    _pclose(pipe);
#else
    pclose(pipe);
#endif

    return result;
}

bool AITerminal::Initialize()
{
    return true;
}
