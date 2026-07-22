#pragma once

#include <string>

namespace GlassOS
{
    class Application
    {
    public:

        Application(const std::string& name);

        void Launch();

        void Close();

        std::string GetName() const;

    private:

        std::string m_name;
    };
}
