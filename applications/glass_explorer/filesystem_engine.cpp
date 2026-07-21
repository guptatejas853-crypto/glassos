#include "filesystem_engine.h"

#include <filesystem>

using namespace GlassOS;

namespace fs = std::filesystem;

bool FileSystemEngine::Initialize()
{
    return true;
}

std::vector<std::string>
FileSystemEngine::ListDirectory(
    const std::string& path)
{
    std::vector<std::string> files;

    if(!fs::exists(path))
        return files;

    for(const auto& entry :
        fs::directory_iterator(path))
    {
        files.push_back(
            entry.path().filename().string());
    }

    return files;
}

bool FileSystemEngine::CreateFolder(
    const std::string& path)
{
    return fs::create_directories(path);
}

bool FileSystemEngine::Delete(
    const std::string& path)
{
    return fs::remove_all(path) > 0;
}

bool FileSystemEngine::Copy(
    const std::string& source,
    const std::string& destination)
{
    fs::copy(
        source,
        destination,
        fs::copy_options::recursive);

    return true;
}

bool FileSystemEngine::Move(
    const std::string& source,
    const std::string& destination)
{
    fs::rename(source,destination);

    return true;
}

bool FileSystemEngine::Rename(
    const std::string& source,
    const std::string& newName)
{
    fs::rename(source,newName);

    return true;
}

bool FileSystemEngine::Exists(
    const std::string& path)
{
    return fs::exists(path);
}
