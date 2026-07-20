#pragma once

namespace GlassOS
{
    class CrashDetector
    {
    public:
        static bool IsUnexpectedShutdown();

        static bool MarkBootStarted();

        static bool MarkBootCompleted();

        static bool Reset();
    };
}
