#pragma once

namespace GlassOS
{
    class WorkspaceRecovery
    {
    public:
        static bool Initialize();

        static bool RecoverWorkspace();

        static bool RecoverApplications();

        static bool RecoverOpenFiles();

        static bool RecoverBrowserTabs();

        static bool RecoverWindowPositions();

        static bool RecoverClipboard();

        static bool RecoverDownloads();

        static bool RecoverTerminalSessions();

        static bool RecoverNotebook();

        static bool RecoverDesktopLayout();

        static bool RecoverOfflineGames();
    };
}
