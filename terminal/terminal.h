#pragma once

namespace GlassOS
{
    class Terminal
    {
    public:
        static bool Initialize();
        static bool Open();
        static bool Execute(const char* command);
    };
}
