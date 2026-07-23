#pragma once

#include <string>

namespace GlassOS
{
    class NotebookWindow
    {
    public:

        static bool Initialize();

        static bool NewDocument();

        static bool OpenDocument(
            const std::string& file);

        static bool SaveDocument(
            const std::string& file);
    };
}
