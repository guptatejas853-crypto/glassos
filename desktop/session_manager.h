#pragma once

namespace GlassOS
{

class SessionManager
{
public:
    static bool Initialize();

    static bool StartSession();

    static bool EndSession();

    static bool LockSession();

    static bool IsRunning();
};

}
