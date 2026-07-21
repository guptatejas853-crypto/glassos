#pragma once

#include <string>

namespace GlassOS
{
    class DocumentManager
    {
    public:
        static bool Initialize();

        static bool New();

        static bool Open(
            const std::string& filePath);

        static bool Save(
            const std::string& filePath);

        static bool SaveAs(
            const std::string& filePath);

        static std::string CurrentFile();

        static bool IsOpened();

    private:
        static std::string currentFile;

        static bool opened;
    };
}
