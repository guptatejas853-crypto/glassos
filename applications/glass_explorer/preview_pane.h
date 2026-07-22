#pragma once

#include <string>

namespace GlassOS
{
    class PreviewPane
    {
    public:

        static bool Initialize();

        static void ShowFile(
            const std::string& path);

        static std::string CurrentFile();

        static void Clear();

    private:

        static std::string currentFile;
    };
}
