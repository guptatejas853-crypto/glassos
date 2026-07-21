#pragma once

#include <string>

namespace GlassOS
{
    class PreviewPane
    {
    public:
        static bool Initialize();

        static bool ShowPreview(
            const std::string& filePath);

        static bool Clear();

        static std::string CurrentFile();

    private:
        static std::string currentFile;
    };
}
