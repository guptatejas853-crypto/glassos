#pragma once

namespace GlassOS
{
    class AutoSaveManager
    {
    public:
        static bool Initialize();

        static bool Start();

        static bool Stop();

        static bool SaveNow();

        static bool SaveApplications();

        static bool SaveOpenFiles();

        static bool SaveBrowserTabs();

        static bool SaveWindowPositions();

        static bool SaveClipboard();

        static bool SaveDownloads();

        static bool SaveTerminalSessions();

        static bool SaveNotebook();

        static bool SaveDesktopLayout();

        static bool SaveOfflineGames();
    };
}
