#pragma once

namespace GlassOS
{
    class NotificationCenter
    {
    public:

        static bool Initialize();

        static void Show();

        static void Hide();

        static bool IsVisible();

    private:

        static bool visible;
    };
}
