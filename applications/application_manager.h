#pragma once

#include <memory>
#include <vector>

#include "application.h"

namespace GlassOS
{
    class ApplicationManager
    {
    public:

        static bool Initialize();

        static void AddApplication(
            std::shared_ptr<Application> app);

        static const std::vector<
            std::shared_ptr<Application>>&
        GetApplications();

    private:

        static std::vector<
            std::shared_ptr<Application>> m_apps;
    };
}
