
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CCallbackImpl<12>::Run  (line 271, @0x0000000001eb3270, libserver.so)
void __fastcall CCallbackImpl<12>::Run(CCallbackImpl<12> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<140>::Run  (line 271, @0x00000000025549f0, libserver.so)
void __fastcall CCallbackImpl<140>::Run(CCallbackImpl<140> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<8>::Run  (line 271, @0x00000000027294c0, libserver.so)
void __fastcall CCallbackImpl<8>::Run(CCallbackImpl<8> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<16>::Run  (line 271, @0x00000000029a7e10, libserver.so)
void __fastcall CCallbackImpl<16>::Run(CCallbackImpl<16> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<1>::Run  (line 271, @0x0000000002ea2b80, libserver.so)
void __fastcall CCallbackImpl<1>::Run(CCallbackImpl<1> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<4>::Run  (line 271, @0x00000000032175d0, libserver.so)
void __fastcall CCallbackImpl<4>::Run(CCallbackImpl<4> *const this, void *pvParam, bool a3, SteamAPICall_t a4)
{
  (*this->_vptr_CCallbackBase)(this, pvParam, a3, a4);
}


// CCallbackImpl<12>::GetCallbackSizeBytes  (line 272, @0x0000000001eb3280, libserver.so)
int __fastcall CCallbackImpl<12>::GetCallbackSizeBytes(CCallbackImpl<12> *const this)
{
  return 12;
}


// CCallbackImpl<140>::GetCallbackSizeBytes  (line 272, @0x0000000002554a00, libserver.so)
int __fastcall CCallbackImpl<140>::GetCallbackSizeBytes(CCallbackImpl<140> *const this)
{
  return 140;
}


// CCallbackImpl<8>::GetCallbackSizeBytes  (line 272, @0x00000000027294d0, libserver.so)
int __fastcall CCallbackImpl<8>::GetCallbackSizeBytes(CCallbackImpl<8> *const this)
{
  return 8;
}


// CCallbackImpl<16>::GetCallbackSizeBytes  (line 272, @0x00000000029a7e20, libserver.so)
int __fastcall CCallbackImpl<16>::GetCallbackSizeBytes(CCallbackImpl<16> *const this)
{
  return 16;
}


// CCallbackImpl<1>::GetCallbackSizeBytes  (line 272, @0x0000000002ea2b90, libserver.so)
int __fastcall CCallbackImpl<1>::GetCallbackSizeBytes(CCallbackImpl<1> *const this)
{
  return 1;
}


// CCallbackImpl<4>::GetCallbackSizeBytes  (line 272, @0x00000000032175e0, libserver.so)
int __fastcall CCallbackImpl<4>::GetCallbackSizeBytes(CCallbackImpl<4> *const this)
{
  return 4;
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionClosed_t>::GetCallbackSizeBytes  (line 297, @0x0000000002037b20, libserver.so)
int __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t>::GetCallbackSizeBytes(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t> *const this)
{
  return 16;
}


// CCallResult<CSteamWorksGameStatsUploader, GameStatsSessionIssued_t>::GetCallbackSizeBytes  (line 297, @0x0000000002037b60, libserver.so)
int __fastcall CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t>::GetCallbackSizeBytes(
        CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t> *const this)
{
  return 16;
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsStored_t>::GetCallbackSizeBytes  (line 297, @0x0000000002729510, libserver.so)
int __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t>::GetCallbackSizeBytes(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsStored_t> *const this)
{
  return 12;
}


// CCallResult<CDotaStatManager::CPlayerStatState, GSStatsReceived_t>::GetCallbackSizeBytes  (line 297, @0x0000000002729550, libserver.so)
int __fastcall CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t>::GetCallbackSizeBytes(
        CCallResult<CDotaStatManager::CPlayerStatState,GSStatsReceived_t> *const this)
{
  return 12;
}


// CCallResult<CScriptHTTPRequest, HTTPRequestCompleted_t>::GetCallbackSizeBytes  (line 297, @0x00000000027ced20, libserver.so)
int __fastcall CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t>::GetCallbackSizeBytes(
        CCallResult<CScriptHTTPRequest,HTTPRequestCompleted_t> *const this)
{
  return 24;
}


// CCallResult<CDOTA_TeamCommander, SteamUGCQueryCompleted_t>::GetCallbackSizeBytes  (line 297, @0x0000000002812210, libserver.so)
int __fastcall CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t>::GetCallbackSizeBytes(
        CCallResult<CDOTA_TeamCommander,SteamUGCQueryCompleted_t> *const this)
{
  return 24;
}


// CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>, SteamUGCQueryCompleted_t>::GetCallbackSizeBytes  (line 297, @0x00000000029a7dd0, libserver.so)
int __fastcall CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t>::GetCallbackSizeBytes(
        CCallResult<CJobCallResult<SteamUGCQueryCompleted_t>,SteamUGCQueryCompleted_t> *const this)
{
  return 24;
}


// CCallResult<CGCUpdateItemSchema, HTTPRequestCompleted_t>::GetCallbackSizeBytes  (line 297, @0x0000000002ea2490, libserver.so)
int __fastcall CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t>::GetCallbackSizeBytes(
        CCallResult<CGCUpdateItemSchema,HTTPRequestCompleted_t> *const this)
{
  return 24;
}


