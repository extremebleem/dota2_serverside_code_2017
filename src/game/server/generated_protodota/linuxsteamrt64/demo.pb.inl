
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDemoFileHeader::GetCachedSize  (line 144, @0x0000000001b4ee00, libserver.so)
int __fastcall CDemoFileHeader::GetCachedSize(const CDemoFileHeader *const this)
{
  return *(this + 5);
}


// CGameInfo_CDotaGameInfo_CPlayerInfo::GetCachedSize  (line 343, @0x0000000001b4ee10, libserver.so)
int __fastcall CGameInfo_CDotaGameInfo_CPlayerInfo::GetCachedSize(
        const CGameInfo_CDotaGameInfo_CPlayerInfo *const this)
{
  return *(this + 5);
}


// CGameInfo_CDotaGameInfo_CHeroSelectEvent::GetCachedSize  (line 472, @0x0000000001b4ee20, libserver.so)
int __fastcall CGameInfo_CDotaGameInfo_CHeroSelectEvent::GetCachedSize(
        const CGameInfo_CDotaGameInfo_CHeroSelectEvent *const this)
{
  return *(this + 5);
}


// CGameInfo_CDotaGameInfo::GetCachedSize  (line 571, @0x0000000001b4ee30, libserver.so)
int __fastcall CGameInfo_CDotaGameInfo::GetCachedSize(const CGameInfo_CDotaGameInfo *const this)
{
  return *(this + 5);
}


// CGameInfo::GetCachedSize  (line 769, @0x0000000001b4ee40, libserver.so)
int __fastcall CGameInfo::GetCachedSize(const CGameInfo *const this)
{
  return *(this + 5);
}


// CDemoFileInfo::GetCachedSize  (line 852, @0x0000000001b4ee50, libserver.so)
int __fastcall CDemoFileInfo::GetCachedSize(const CDemoFileInfo *const this)
{
  return *(this + 5);
}


// CDemoPacket::GetCachedSize  (line 963, @0x0000000001b4ee60, libserver.so)
int __fastcall CDemoPacket::GetCachedSize(const CDemoPacket *const this)
{
  return *(this + 5);
}


// CDemoFullPacket::GetCachedSize  (line 1067, @0x0000000001b4ee70, libserver.so)
int __fastcall CDemoFullPacket::GetCachedSize(const CDemoFullPacket *const this)
{
  return *(this + 5);
}


// CDemoSaveGame::GetCachedSize  (line 1160, @0x0000000001b4ee80, libserver.so)
int __fastcall CDemoSaveGame::GetCachedSize(const CDemoSaveGame *const this)
{
  return *(this + 5);
}


// CDemoSyncTick::GetCachedSize  (line 1274, @0x0000000001b4ee90, libserver.so)
int __fastcall CDemoSyncTick::GetCachedSize(const CDemoSyncTick *const this)
{
  return *(this + 5);
}


// CDemoConsoleCmd::GetCachedSize  (line 1343, @0x0000000001b4eea0, libserver.so)
int __fastcall CDemoConsoleCmd::GetCachedSize(const CDemoConsoleCmd *const this)
{
  return *(this + 5);
}


// CDemoSendTables::GetCachedSize  (line 1427, @0x0000000001b4eeb0, libserver.so)
int __fastcall CDemoSendTables::GetCachedSize(const CDemoSendTables *const this)
{
  return *(this + 5);
}


// CDemoClassInfo_class_t::GetCachedSize  (line 1511, @0x0000000001b4eec0, libserver.so)
int __fastcall CDemoClassInfo_class_t::GetCachedSize(const CDemoClassInfo_class_t *const this)
{
  return *(this + 5);
}


// CDemoClassInfo::GetCachedSize  (line 1620, @0x0000000001b4eed0, libserver.so)
int __fastcall CDemoClassInfo::GetCachedSize(const CDemoClassInfo *const this)
{
  return *(this + 5);
}


// CDemoCustomData::GetCachedSize  (line 1704, @0x0000000001b4eee0, libserver.so)
int __fastcall CDemoCustomData::GetCachedSize(const CDemoCustomData *const this)
{
  return *(this + 5);
}


// CDemoCustomDataCallbacks::GetCachedSize  (line 1798, @0x0000000001b4eef0, libserver.so)
int __fastcall CDemoCustomDataCallbacks::GetCachedSize(const CDemoCustomDataCallbacks *const this)
{
  return *(this + 5);
}


// CDemoStringTables_items_t::GetCachedSize  (line 1884, @0x0000000001b4ef00, libserver.so)
int __fastcall CDemoStringTables_items_t::GetCachedSize(const CDemoStringTables_items_t *const this)
{
  return *(this + 5);
}


// CDemoStringTables_table_t::GetCachedSize  (line 1983, @0x0000000001b4ef10, libserver.so)
int __fastcall CDemoStringTables_table_t::GetCachedSize(const CDemoStringTables_table_t *const this)
{
  return *(this + 5);
}


// CDemoStringTables::GetCachedSize  (line 2103, @0x0000000001b4ef20, libserver.so)
int __fastcall CDemoStringTables::GetCachedSize(const CDemoStringTables *const this)
{
  return *(this + 5);
}


// CDemoStop::GetCachedSize  (line 2188, @0x0000000001b4ef30, libserver.so)
int __fastcall CDemoStop::GetCachedSize(const CDemoStop *const this)
{
  return *(this + 5);
}


// CDemoUserCmd::GetCachedSize  (line 2257, @0x0000000001b4ef40, libserver.so)
int __fastcall CDemoUserCmd::GetCachedSize(const CDemoUserCmd *const this)
{
  return *(this + 5);
}


// CDemoSpawnGroups::GetCachedSize  (line 2351, @0x0000000001b4ef50, libserver.so)
int __fastcall CDemoSpawnGroups::GetCachedSize(const CDemoSpawnGroups *const this)
{
  return *(this + 5);
}


// CGameInfo::mutable_dota  (line 3463, @0x00000000025cf7e0, libserver.so)  // inlines: set_has_dota
// calls: operator new, CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo, operator delete, _Unwind_Resume
// callers: CDOTAHLTVDirector::FinishRecording
CGameInfo_CDotaGameInfo *__fastcall CGameInfo::mutable_dota(CGameInfo *const this)
{
  CGameInfo_CDotaGameInfo *result; // rax
  CGameInfo_CDotaGameInfo *v3; // r12

  result = *(this + 3);
  *(this + 4) |= 1u;
  if ( result == 0 )
  {
    v3 = operator new(0x78u);
    CGameInfo_CDotaGameInfo::CGameInfo_CDotaGameInfo(v3);
    *(this + 3) = v3;
    return v3;
  }
  return result;
}


