#include "recycle_bin.h"

#include <iostream>

using namespace GlassOS;

std::vector<RecycleItem>
RecycleBin::items;

bool RecycleBin::Initialize()
{
    items.clear();
    return true;
}

bool RecycleBin::Delete(
    const std::string& path)
{
    RecycleItem item;

    item.originalPath = path;
    item.recyclePath = ".glass/recycle/" + path;
    item.deletedTime = "Current Time";

    items.push_back(item);

    std::cout
        << "[Recycle Bin] "
        << path
        << " moved to recycle bin."
        << std::endl;

    return true;
}

bool RecycleBin::Restore(
    const std::string& recyclePath)
{
    for(auto it = items.begin();
        it != items.end();
        ++it)
    {
        if(it->recyclePath == recyclePath)
        {
            std::cout
                << "[Recycle Bin] Restored "
                << recyclePath
                << std::endl;

            items.erase(it);

            return true;
        }
    }

    return false;
}

bool RecycleBin::Empty()
{
    items.clear();

    std::cout
        << "[Recycle Bin] Emptied"
        << std::endl;

    return true;
}

const std::vector<RecycleItem>&
RecycleBin::GetItems()
{
    return items;
}
