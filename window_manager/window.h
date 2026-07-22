#pragma once

#include <string>

namespace GlassOS
{
    enum class WindowState
    {
        Normal,
        Minimized,
        Maximized,
        Fullscreen
    };

    class Window
    {
    public:

        Window();

        Window(
            const std::string& title,
            int width,
            int height);

        void Show();
        void Hide();

        void Minimize();
        void Maximize();
        void Restore();

        bool IsVisible() const;

        const std::string& GetTitle() const;

        int GetWidth() const;
        int GetHeight() const;

        WindowState GetState() const;

    private:

        std::string title;

        int width;
        int height;

        bool visible;

        WindowState state;
    };
}
