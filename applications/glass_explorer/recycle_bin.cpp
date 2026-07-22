#include "recycle_bin.h"

using namespace GlassOS;

std::vector<std::string> RecycleBin::files;


bool RecycleBin::Initialize()
{
    files.clear();

    return true;
}


void RecycleBin::Move(
    const std::string& path)
{
    files.push_back(path);
}


void RecycleBin::Restore(
    const std::string& path)
{
    for(auto it = files.begin();
        it != files.end();
        ++it)
    {
        if(*it == path)
        {
            files.erase(it);
            break;
        }
    }
}


void RecycleBin::Empty()
{
    files.clear();
}


std::vector<std::string>
RecycleBin::Items()
{
    return files;
}
