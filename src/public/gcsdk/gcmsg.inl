
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CStructNetPacket::GetEMsgFormatType  (line 89, @0x0000000003221580, libserver.so)
GCSDK::EMsgFormatType __fastcall GCSDK::CStructNetPacket::GetEMsgFormatType(const GCSDK::CStructNetPacket *const this)
{
  return GCSDK::EMsgFormatType::k_EMsgFormatTypeStruct;
}


// GCSDK::CStructNetPacket::GetCNetPacket  (line 90, @0x0000000003221590, libserver.so)
GCSDK::CNetPacket *__fastcall GCSDK::CStructNetPacket::GetCNetPacket(const GCSDK::CStructNetPacket *const this)
{
  return *(&this->m_cRef + 1);
}


// GCSDK::CStructNetPacket::PubData  (line 91, @0x00000000032215a0, libserver.so)
uint8 *__fastcall GCSDK::CStructNetPacket::PubData(const GCSDK::CStructNetPacket *const this)
{
  return *(*(&this->m_cRef + 1) + 8LL);
}


// GCSDK::CStructNetPacket::CubData  (line 92, @0x00000000032215b0, libserver.so)
uint __fastcall GCSDK::CStructNetPacket::CubData(const GCSDK::CStructNetPacket *const this)
{
  return *(*(&this->m_cRef + 1) + 4LL);
}


// GCSDK::CStructNetPacket::GetEMsg  (line 94, @0x00000000032215c0, libserver.so)
GCSDK::MsgType_t __fastcall GCSDK::CStructNetPacket::GetEMsg(const GCSDK::CStructNetPacket *const this)
{
  return **(&this->m_pNetPacket + 4);
}


// GCSDK::CStructNetPacket::GetSourceJobID  (line 95, @0x00000000032215d0, libserver.so)
JobID_t __fastcall GCSDK::CStructNetPacket::GetSourceJobID(const GCSDK::CStructNetPacket *const this)
{
  return *(&(*(&this->m_pNetPacket + 4))[1].m_pubData + 2);
}


// GCSDK::CStructNetPacket::GetTargetJobID  (line 96, @0x00000000032215e0, libserver.so)
JobID_t __fastcall GCSDK::CStructNetPacket::GetTargetJobID(const GCSDK::CStructNetPacket *const this)
{
  return *(&(*(&this->m_pNetPacket + 4))[1].m_cRef + 2);
}


// GCSDK::CStructNetPacket::SetTargetJobID  (line 97, @0x00000000032215f0, libserver.so)
void __fastcall GCSDK::CStructNetPacket::SetTargetJobID(GCSDK::CStructNetPacket *const this, JobID_t ulJobID)
{
  *(&(*(&this->m_pNetPacket + 4))[1].m_cRef + 2) = ulJobID;
}


// GCSDK::CStructNetPacket::GetSteamID  (line 99, @0x0000000003221600, libserver.so)
CSteamID __fastcall GCSDK::CStructNetPacket::GetSteamID(const GCSDK::CStructNetPacket *const this)
{
  return (*(&this->m_pNetPacket + 4))->m_pubData;
}


// GCSDK::CStructNetPacket::SetSteamID  (line 100, @0x0000000003221610, libserver.so)
void __fastcall GCSDK::CStructNetPacket::SetSteamID(GCSDK::CStructNetPacket *const this, CSteamID steamID)
{
  (*(&this->m_pNetPacket + 4))->m_pubData = steamID.m_steamid.m_unAll64Bits;
}


// GCSDK::CStructNetPacket::GetSourceAppID  (line 102, @0x0000000003221620, libserver.so)
AppId_t __fastcall GCSDK::CStructNetPacket::GetSourceAppID(const GCSDK::CStructNetPacket *const this)
{
  return 0;
}


// GCSDK::CStructNetPacket::SetSourceAppID  (line 103, @0x0000000003221630, libserver.so)
void __fastcall GCSDK::CStructNetPacket::SetSourceAppID(GCSDK::CStructNetPacket *const this, AppId_t appId)
{
  ;
}


// GCSDK::CStructNetPacket::BHasTargetJobName  (line 106, @0x0000000003221640, libserver.so)
bool __fastcall GCSDK::CStructNetPacket::BHasTargetJobName(const GCSDK::CStructNetPacket *const this)
{
  return 0;
}


// GCSDK::CStructNetPacket::GetTargetJobName  (line 107, @0x0000000003221650, libserver.so)
const char *__fastcall GCSDK::CStructNetPacket::GetTargetJobName(const GCSDK::CStructNetPacket *const this)
{
  return 0;
}


// GCSDK::CStructNetPacket::~CStructNetPacket  (line 110, @0x00000000032216a0, libserver.so)  // inlines: ~CRefCount, ~IMsgNetPacket
// calls: GCSDK::CNetPacket::Release
void __fastcall GCSDK::CStructNetPacket::~CStructNetPacket(GCSDK::CStructNetPacket *const this)
{
  this->_vptr_CRefCount = off_47D0510;  // vptr: GCSDK::CStructNetPacket
  GCSDK::CNetPacket::Release(*(&this->m_cRef + 1));
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
}


// GCSDK::CStructNetPacket::~CStructNetPacket  (line 110, @0x00000000032216d0, libserver.so)  // inlines: ~CRefCount, ~CStructNetPacket, ~IMsgNetPacket
// calls: GCSDK::CNetPacket::Release, operator delete
void __fastcall GCSDK::CStructNetPacket::~CStructNetPacket(GCSDK::CStructNetPacket *const this)
{
  this->_vptr_CRefCount = off_47D0510;  // vptr: GCSDK::CStructNetPacket
  GCSDK::CNetPacket::Release(*(&this->m_cRef + 1));
  this->_vptr_CRefCount = off_47D0430;  // vptr: GCSDK::CRefCount
  operator delete(this);
}


