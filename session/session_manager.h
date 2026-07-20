#pragma once

#include "recovery_database.h"

namespace GlassOS
{
    class SessionManager
    {
    public:
        static bool CreateSession(const std::string& userId);

        static bool LoadSession();

        static bool SaveSession();

        static bool CloseSession();

        static bool DeleteSession();

        static RecoverySession& CurrentSession();

    private:
        static RecoverySession currentSession;
    };
}
