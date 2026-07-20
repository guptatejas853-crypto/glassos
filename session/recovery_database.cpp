#include "recovery_database.h"

#include <fstream>
#include <iostream>

using namespace GlassOS;

static const std::string RECOVERY_FILE = "glass_recovery.dat";

bool RecoveryDatabase::Save(const RecoverySession& session)
{
    std::ofstream file(RECOVERY_FILE);

    if (!file.is_open())
        return false;

    file << session.sessionId << "\n";
    file << session.userId << "\n";

    file << session.applications.size() << "\n";

    for (const auto& app : session.applications)
    {
        file << app.name << "\n";
        file << app.executable << "\n";
        file << app.workingDirectory << "\n";
        file << app.supportsRecovery << "\n";
    }

    file.close();

    return true;
}

bool RecoveryDatabase::Load(RecoverySession& session)
{
    std::ifstream file(RECOVERY_FILE);

    if (!file.is_open())
        return false;

    std::getline(file, session.sessionId);
    std::getline(file, session.userId);

    size_t appCount = 0;
    file >> appCount;
    file.ignore();

    session.applications.clear();

    for (size_t i = 0; i < appCount; i++)
    {
        RecoveryApplication app;

        std::getline(file, app.name);
        std::getline(file, app.executable);
        std::getline(file, app.workingDirectory);

        file >> app.supportsRecovery;
        file.ignore();

        session.applications.push_back(app);
    }

    file.close();

    return true;
}

bool RecoveryDatabase::Delete()
{
    return std::remove(RECOVERY_FILE.c_str()) == 0;
}

bool RecoveryDatabase::Exists()
{
    std::ifstream file(RECOVERY_FILE);

    bool exists = file.good();

    file.close();

    return exists;
}
