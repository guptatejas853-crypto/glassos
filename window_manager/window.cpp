#include "window.h"

using namespace GlassOS;

Window::Window()
    : title("Window"),
      width(800),
      height(600),
      visible(false),
      state(WindowState::Normal)
{
}

Window::Window(
    const std::string& title,
    int width,
    int height)
    : title(title),
      width(width),
      height(height),
      visible(false),
      state(WindowState::Normal)
{
}

void Window::Show()
{
    visible = true;
}

void Window::Hide()
{
    visible = false;
}

void Window::Minimize()
{
    state = WindowState::Minimized;
}

void Window::Maximize()
{
    state = WindowState::Maximized;
}

void Window::Restore()
{
    state = WindowState::Normal;
}

bool Window::IsVisible() const
{
    return visible;
}

const std::string&
Window::GetTitle() const
{
    return title;
}

int Window::GetWidth() const
{
    return width;
}

int Window::GetHeight() const
{
    return height;
}

WindowState
Window::GetState() const
{
    return state;
}
