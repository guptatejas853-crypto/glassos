#pragma once

#include <string>
#include <vector>

namespace GlassOS
{
    struct Notification
    {
        std::string title;
        std::string message;
    };

    class NotificationManager
    {
    public:
        static bool Initialize();

        static bool Send(
            const std::string& title,
            const std::string& message);

        static bool Clear();

        static const std::vector<Notification>&
            GetNotifications();

        static bool Enable();

        static bool Disable();

        static bool IsEnabled();

    private:
        static std::vector<Notification> notifications;

        static bool enabled;
    };
}
