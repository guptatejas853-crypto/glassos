#pragma once

#include <string>

namespace GlassOS
{
    class NotificationCenter
    {
    public:
        static bool Initialize();

        static bool Show();

        static bool Hide();

        static bool Toggle();

        static bool AddNotification(
            const std::string& title,
            const std::string& message);

        static bool ClearAll();

    private:
        static bool visible;

        static bool DrawHeader();

        static bool DrawNotificationList();

        static bool DrawFooter();
    };
}
