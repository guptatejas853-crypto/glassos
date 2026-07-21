#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    class FileSystemEngine
    {
    public:
        static bool Initialize();

        static std::vector<std::string> ListDirectory(
            const std::string& path);

        static bool CreateFolder(
            const std::string& path);

        static bool Delete(
            const std::string& path);

        static bool Copy(
            const std::string& source,
            const std::string& destination);

        static bool Move(
            const std::string& source,
            const std::string& destination);

        static bool Rename(
            const std::string& source,
            const std::string& newName);

        static bool Exists(
            const std::string& path);
    };
}
