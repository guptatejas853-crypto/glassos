#include "glass_sync.h"

using namespace GlassOS;

bool GlassSync::syncEnabled = false;

bool GlassSync::Initialize()
{
    syncEnabled = false;
    return true;
}

bool GlassSync::EnableSync()
{
    syncEnabled = true;
    return true;
}

bool GlassSync::DisableSync()
{
    syncEnabled = false;
    return true;
}

bool GlassSync::SyncNow()
{
    if (!syncEnabled)
        return false;

    UploadData();
    DownloadData();

    return true;
}

bool GlassSync::UploadData()
{
    return true;
}

bool GlassSync::DownloadData()
{
    return true;
}

bool GlassSync::IsSyncEnabled()
{
    return syncEnabled;
}
