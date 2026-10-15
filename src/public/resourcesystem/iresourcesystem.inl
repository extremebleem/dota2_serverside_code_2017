
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// IResourceTypeManager::Init  (line 165, @0x000000000326ab70, libserver.so)
bool __fastcall IResourceTypeManager::Init(IResourceTypeManager *const this, IResourceSystemUtils *pUtils)
{
  return 1;
}


// IResourceTypeManager::Shutdown  (line 166, @0x000000000326ab80, libserver.so)
void __fastcall IResourceTypeManager::Shutdown(IResourceTypeManager *const this)
{
  ;
}


// IResourceTypeManager::NeedsFrameUpdate  (line 175, @0x000000000326ab90, libserver.so)
bool __fastcall IResourceTypeManager::NeedsFrameUpdate(const IResourceTypeManager *const this)
{
  return 0;
}


// IResourceTypeManager::FrameUpdate  (line 176, @0x000000000326aba0, libserver.so)
void __fastcall IResourceTypeManager::FrameUpdate(IResourceTypeManager *const this, int nFinishedFrameCount)
{
  ;
}


// IResourceTypeManager::RequiresManifestResourceFinishedCall  (line 183, @0x000000000326abb0, libserver.so)
bool __fastcall IResourceTypeManager::RequiresManifestResourceFinishedCall(const IResourceTypeManager *const this)
{
  return 0;
}


// IResourceTypeManager::NotifyManifestResourceFinished  (line 188, @0x000000000326abc0, libserver.so)
void __fastcall IResourceTypeManager::NotifyManifestResourceFinished(
        IResourceTypeManager *const this,
        ResourceHandle_t hResource,
        ResourceLoadType_t nLoadType)
{
  ;
}


// IResourceTypeManager::GetStreamingType  (line 199, @0x000000000326abd0, libserver.so)
ResourceStreamingType_t __fastcall IResourceTypeManager::GetStreamingType(const IResourceTypeManager *const this)
{
  return ResourceStreamingType_t::RESOURCE_STREAMING_TYPE_NO_DATA;
}


// IResourceTypeManager::GetNonStreamingDataLoadSize  (line 204, @0x000000000326abe0, libserver.so)
int __fastcall IResourceTypeManager::GetNonStreamingDataLoadSize(const IResourceTypeManager *const this)
{
  return -1;
}


// IResourceTypeManager::LoadStreamingData  (line 209, @0x000000000326abf0, libserver.so)
void __fastcall IResourceTypeManager::LoadStreamingData(
        IResourceTypeManager *const this,
        ResourceHandle_t hResource,
        IResourceSystemUtils *pUtils)
{
  ;
}


// IResourceTypeManager::UsesData  (line 218, @0x000000000326ac00, libserver.so)
bool __fastcall IResourceTypeManager::UsesData(const IResourceTypeManager *const this)
{
  return 1;
}


// IResourceTypeManager::IsStreamingDataAlreadyLoaded  (line 220, @0x000000000326ac10, libserver.so)
bool __fastcall IResourceTypeManager::IsStreamingDataAlreadyLoaded(
        IResourceTypeManager *const this,
        ResourceHandle_t hResource)
{
  return 1;
}


