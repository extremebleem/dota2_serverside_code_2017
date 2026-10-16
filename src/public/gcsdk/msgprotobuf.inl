
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// GCSDK::CProtoBufNetPacket::GetEMsgFormatType  (line 50, @0x0000000003236510, libserver.so)
GCSDK::EMsgFormatType __fastcall GCSDK::CProtoBufNetPacket::GetEMsgFormatType(
        const GCSDK::CProtoBufNetPacket *const this)
{
  return GCSDK::EMsgFormatType::k_EMsgFormatTypeProtocolBuffer;
}


// GCSDK::CProtoBufNetPacket::GetCNetPacket  (line 51, @0x0000000003236520, libserver.so)
GCSDK::CNetPacket *__fastcall GCSDK::CProtoBufNetPacket::GetCNetPacket(const GCSDK::CProtoBufNetPacket *const this)
{
  return this->m_pNetPacket;
}


// GCSDK::CProtoBufNetPacket::PubData  (line 52, @0x0000000003236530, libserver.so)
uint8 *__fastcall GCSDK::CProtoBufNetPacket::PubData(const GCSDK::CProtoBufNetPacket *const this)
{
  return this->m_pNetPacket->m_pubData;
}


// GCSDK::CProtoBufNetPacket::CubData  (line 53, @0x0000000003236540, libserver.so)
uint __fastcall GCSDK::CProtoBufNetPacket::CubData(const GCSDK::CProtoBufNetPacket *const this)
{
  return this->m_pNetPacket->m_cubData;
}


// GCSDK::CProtoBufNetPacket::GetEMsg  (line 55, @0x0000000003236550, libserver.so)
GCSDK::MsgType_t __fastcall GCSDK::CProtoBufNetPacket::GetEMsg(const GCSDK::CProtoBufNetPacket *const this)
{
  return this->m_msgType;
}


// GCSDK::CProtoBufNetPacket::GetSourceJobID  (line 56, @0x0000000003236560, libserver.so)
JobID_t __fastcall GCSDK::CProtoBufNetPacket::GetSourceJobID(const GCSDK::CProtoBufNetPacket *const this)
{
  return *(this->m_pHeader + 5);
}


// GCSDK::CProtoBufNetPacket::GetTargetJobID  (line 57, @0x0000000003236570, libserver.so)
JobID_t __fastcall GCSDK::CProtoBufNetPacket::GetTargetJobID(const GCSDK::CProtoBufNetPacket *const this)
{
  return *(this->m_pHeader + 6);
}


// GCSDK::CProtoBufNetPacket::SetTargetJobID  (line 58, @0x0000000003236580, libserver.so)  // inlines: set_has_job_id_target, set_job_id_target
void __fastcall GCSDK::CProtoBufNetPacket::SetTargetJobID(GCSDK::CProtoBufNetPacket *const this, JobID_t ulJobID)
{
  CMsgProtoBufHeader *m_pHeader; // rax

  m_pHeader = this->m_pHeader;
  *(m_pHeader + 4) |= 0x10u;
  *(m_pHeader + 6) = ulJobID;
}


// GCSDK::CProtoBufNetPacket::GetSteamID  (line 60, @0x00000000032365a0, libserver.so)
CSteamID __fastcall GCSDK::CProtoBufNetPacket::GetSteamID(const GCSDK::CProtoBufNetPacket *const this)
{
  return this->m_steamID.m_steamid.m_unAll64Bits;
}


// GCSDK::CProtoBufNetPacket::SetSteamID  (line 61, @0x00000000032365b0, libserver.so)
void __fastcall GCSDK::CProtoBufNetPacket::SetSteamID(GCSDK::CProtoBufNetPacket *const this, CSteamID steamID)
{
  this->m_steamID = steamID;
}


// GCSDK::CProtoBufNetPacket::GetSourceAppID  (line 63, @0x00000000032365c0, libserver.so)
AppId_t __fastcall GCSDK::CProtoBufNetPacket::GetSourceAppID(const GCSDK::CProtoBufNetPacket *const this)
{
  return *(this->m_pHeader + 9);
}


// GCSDK::CProtoBufNetPacket::SetSourceAppID  (line 64, @0x00000000032365d0, libserver.so)  // inlines: set_has_source_app_id, set_source_app_id
void __fastcall GCSDK::CProtoBufNetPacket::SetSourceAppID(GCSDK::CProtoBufNetPacket *const this, AppId_t appId)
{
  CMsgProtoBufHeader *m_pHeader; // rax

  m_pHeader = this->m_pHeader;
  *(m_pHeader + 4) |= 4u;
  *(m_pHeader + 9) = appId;
}


// GCSDK::CProtoBufNetPacket::BHasTargetJobName  (line 66, @0x00000000032365f0, libserver.so)  // inlines: has_target_job_name
bool __fastcall GCSDK::CProtoBufNetPacket::BHasTargetJobName(const GCSDK::CProtoBufNetPacket *const this)
{
  return (*(this->m_pHeader + 4) & 0x20) != 0;
}


// GCSDK::CProtoBufNetPacket::GetTargetJobName  (line 67, @0x0000000003236610, libserver.so)  // inlines: _M_data, c_str
const char *__fastcall GCSDK::CProtoBufNetPacket::GetTargetJobName(const GCSDK::CProtoBufNetPacket *const this)
{
  return **(this->m_pHeader + 7);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d4c0, libserver.so)  // inlines: Destruct<CMsgGCBanStatusRequest>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB50;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d540, libserver.so)  // inlines: Destruct<CMsgTournamentItemEventResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD90;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d5c0, libserver.so)  // inlines: Destruct<CMsgTournamentItemEvent>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD50;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d640, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermissionResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD10;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d6c0, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermission>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDCD0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d740, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquips>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC90;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d7c0, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquipsResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC50;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d840, libserver.so)  // inlines: Destruct<CMsgResponseTeamFanfare>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC10;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d8c0, libserver.so)  // inlines: Destruct<CMsgTeamFanfare>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDBD0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255d940, libserver.so)  // inlines: Destruct<CMsgGCBanStatusResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB90;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255f890, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermissionResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD10;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255f920, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquips>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC90;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255f9b0, libserver.so)  // inlines: Destruct<CMsgResponseTeamFanfare>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC10;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fa40, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquipsResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDC50;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fad0, libserver.so)  // inlines: Destruct<CMsgGCBanStatusResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB90;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fb60, libserver.so)  // inlines: Destruct<CMsgGCBanStatusRequest>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDB50;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fbf0, libserver.so)  // inlines: Destruct<CMsgTournamentItemEvent>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD50;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fc80, libserver.so)  // inlines: Destruct<CMsgTeamFanfare>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDBD0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fd10, libserver.so)  // inlines: Destruct<CMsgTournamentItemEventResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDD90;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool  (line 243, @0x000000000255fda0, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermission>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_40FDCD0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9a20, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTipResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110B10;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9aa0, libserver.so)  // inlines: Destruct<CMsgServerToGCCloseCompendiumInGamePredictionVoting>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110950;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9b20, libserver.so)  // inlines: Destruct<CMsgDOTAAwardEventPoints>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41108B0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9ba0, libserver.so)  // inlines: Destruct<CMsgServerToGCGetIngameEventData>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A50;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9c20, libserver.so)  // inlines: Destruct<CMsgServerToGCCompendiumInGamePredictionResults>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A10;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9ca0, libserver.so)  // inlines: Destruct<CMsgServerToGCStartCompendiumInGamePredictions>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41109D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9d20, libserver.so)  // inlines: Destruct<CMsgServerToGCEndCompendiumInGamePredictions>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110990;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9da0, libserver.so)  // inlines: Destruct<CMsgDOTAFrostivusTimeElapsed>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110870;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9e20, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTip>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110AD0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025c9ea0, libserver.so)  // inlines: Destruct<CMsgServerToGCHoldEventPoints>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A90;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca6e0, libserver.so)  // inlines: Destruct<CMsgServerToGCEndCompendiumInGamePredictions>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110990;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca770, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTipResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110B10;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca800, libserver.so)  // inlines: Destruct<CMsgDOTAFrostivusTimeElapsed>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110870;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca890, libserver.so)  // inlines: Destruct<CMsgDOTAAwardEventPoints>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41108B0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca920, libserver.so)  // inlines: Destruct<CMsgServerToGCCloseCompendiumInGamePredictionVoting>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110950;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025ca9b0, libserver.so)  // inlines: Destruct<CMsgServerToGCHoldEventPoints>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A90;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025caa40, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTip>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110AD0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025caad0, libserver.so)  // inlines: Destruct<CMsgServerToGCStartCompendiumInGamePredictions>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41109D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025cab60, libserver.so)  // inlines: Destruct<CMsgServerToGCGetIngameEventData>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A50;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000025cabf0, libserver.so)  // inlines: Destruct<CMsgServerToGCCompendiumInGamePredictionResults>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4110A10;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a3f10, libserver.so)  // inlines: Destruct<CMsgLeaverDetectedResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178690;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a3f90, libserver.so)  // inlines: Destruct<CMsgLeaverDetected>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178650;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a4010, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResourcesResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178610;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a4090, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResources>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41785D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a57b0, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResourcesResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178610;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a5840, libserver.so)  // inlines: Destruct<CMsgLeaverDetected>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178650;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a58d0, libserver.so)  // inlines: Destruct<CMsgLeaverDetectedResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4178690;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000026a5960, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResources>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_41785D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aa990, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscriptionRefresh>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306450;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aaa10, libserver.so)  // inlines: Destruct<CMsgGCToServerRealtimeStatsStartStop>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306410;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aaa90, libserver.so)  // inlines: Destruct<CMsgServerToGCRealtimeStats>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43063D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aab10, libserver.so)  // inlines: Destruct<CMsgDOTAPlayerFailedToConnect>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306390;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aab90, libserver.so)  // inlines: Destruct<CMsgGameServerInfo>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306350;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aac10, libserver.so)  // inlines: Destruct<CMsgLANServerAvailable>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306310;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aac90, libserver.so)  // inlines: Destruct<CMsgGenericResult>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43062D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aad10, libserver.so)  // inlines: Destruct<CMsgGameserverCrash>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306290;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aad90, libserver.so)  // inlines: Destruct<CMsgGCToServerPingRequest>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306850;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aae10, libserver.so)  // inlines: Destruct<CMsgItemAcknowledged>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306810;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aae90, libserver.so)  // inlines: Destruct<CMsgGCGCToLANServerRelayConnect>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43067D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aaf10, libserver.so)  // inlines: Destruct<CMsgGCToRelayConnect>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306790;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aaf90, libserver.so)  // inlines: Destruct<CMsgDOTABroadcastNotification>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306750;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab010, libserver.so)  // inlines: Destruct<CMsgGCServerVersionUpdated>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306710;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab090, libserver.so)  // inlines: Destruct<CMsgClientWelcome>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43066D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab110, libserver.so)  // inlines: Destruct<CMsgDOTALiveScoreboardUpdate>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306690;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab190, libserver.so)  // inlines: Destruct<CMsgConnectedPlayers>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306650;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab210, libserver.so)  // inlines: Destruct<CMsgServerGCUpdateSpectatorCount>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306610;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab290, libserver.so)  // inlines: Destruct<CMsgServerToGCMatchConnectionStats>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43065D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab310, libserver.so)  // inlines: Destruct<CMsgGameMatchSignoutResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306590;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab390, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306550;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab410, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionRequest>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306510;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab490, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOut>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43064D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab510, libserver.so)  // inlines: Destruct<CMsgServerAvailable>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306490;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab590, libserver.so)  // inlines: Destruct<CMsgGCToServerConsoleCommand>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43068D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab610, libserver.so)  // inlines: Destruct<CMsgGCToServerPingResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306890;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ab690, libserver.so)  // inlines: Destruct<CMsgGCToServerPredictionResult>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306910;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac200, libserver.so)  // inlines: Destruct<CMsgServerAvailable>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306490;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac290, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscriptionRefresh>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306450;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac320, libserver.so)  // inlines: Destruct<CMsgGCServerVersionUpdated>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306710;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac3b0, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionRequest>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306510;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac440, libserver.so)  // inlines: Destruct<CMsgDOTABroadcastNotification>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306750;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac4d0, libserver.so)  // inlines: Destruct<CMsgGCToServerRealtimeStatsStartStop>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306410;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac560, libserver.so)  // inlines: Destruct<CMsgConnectedPlayers>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306650;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac5f0, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306550;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac680, libserver.so)  // inlines: Destruct<CMsgServerToGCMatchConnectionStats>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43065D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac710, libserver.so)  // inlines: Destruct<CMsgGCToServerPingResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306890;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac7a0, libserver.so)  // inlines: Destruct<CMsgGCToServerPingRequest>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306850;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac830, libserver.so)  // inlines: Destruct<CMsgServerToGCRealtimeStats>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43063D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac8c0, libserver.so)  // inlines: Destruct<CMsgGCGCToLANServerRelayConnect>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43067D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac950, libserver.so)  // inlines: Destruct<CMsgGCToServerPredictionResult>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306910;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ac9e0, libserver.so)  // inlines: Destruct<CMsgGameServerInfo>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306350;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029aca70, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOut>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43064D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acb00, libserver.so)  // inlines: Destruct<CMsgGenericResult>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43062D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acb90, libserver.so)  // inlines: Destruct<CMsgDOTALiveScoreboardUpdate>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306690;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acc20, libserver.so)  // inlines: Destruct<CMsgItemAcknowledged>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306810;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029accb0, libserver.so)  // inlines: Destruct<CMsgGameMatchSignoutResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306590;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acd40, libserver.so)  // inlines: Destruct<CMsgClientWelcome>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43066D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acdd0, libserver.so)  // inlines: Destruct<CMsgGCToServerConsoleCommand>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_43068D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ace60, libserver.so)  // inlines: Destruct<CMsgServerGCUpdateSpectatorCount>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306610;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acef0, libserver.so)  // inlines: Destruct<CMsgGCToRelayConnect>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306790;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029acf80, libserver.so)  // inlines: Destruct<CMsgLANServerAvailable>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306310;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ad010, libserver.so)  // inlines: Destruct<CMsgGameserverCrash>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306290;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000029ad0a0, libserver.so)  // inlines: Destruct<CMsgDOTAPlayerFailedToConnect>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306390;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e534d0, libserver.so)  // inlines: Destruct<CMsgServerUseItem>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4590;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e53550, libserver.so)  // inlines: Destruct<CMsgServerToGCLockCharmTrading>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4610;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e535d0, libserver.so)  // inlines: Destruct<CMsgConsumableExhausted>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A45D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e53b20, libserver.so)  // inlines: Destruct<CMsgServerToGCLockCharmTrading>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4610;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e53bb0, libserver.so)  // inlines: Destruct<CMsgServerUseItem>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A4590;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002e53c40, libserver.so)  // inlines: Destruct<CMsgConsumableExhausted>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47A45D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002ea45b0, libserver.so)  // inlines: Destruct<CMsgUpdateItemSchema>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47AAE90;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000002ea5000, libserver.so)  // inlines: Destruct<CMsgUpdateItemSchema>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47AAE90;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032185e0, libserver.so)  // inlines: Destruct<CMsgSOSingleObject>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF1D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003218660, libserver.so)  // inlines: Destruct<CMsgGCClientPing>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0350;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032186e0, libserver.so)  // inlines: Destruct<CMsgClientHello>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0310;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003218760, libserver.so)  // inlines: Destruct<CMsgConnectionStatus>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D02D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032187e0, libserver.so)  // inlines: Destruct<CMsgSOMultipleObjects>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF190;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003218860, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribed>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF150;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032188e0, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarRequest>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF090;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003218960, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribedUpToDate>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF110;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032189e0, libserver.so)  // inlines: Destruct<CMsgSOCacheUnsubscribed>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF0D0;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003218a60, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarResponse>, InternalFree
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *pObject; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0390;
  pObject = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
  {
    while ( 1 )
    {
      v2 = pObject;
      if ( pObject == 0 )
        break;
      (**pObject)(pObject);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, &pObject) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219490, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribed>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF150;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219520, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarRequest>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF090;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032195b0, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribedUpToDate>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF110;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219640, libserver.so)  // inlines: Destruct<CMsgConnectionStatus>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D02D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032196d0, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarResponse>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0390;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219760, libserver.so)  // inlines: Destruct<CMsgSOSingleObject>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF1D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032197f0, libserver.so)  // inlines: Destruct<CMsgClientHello>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0310;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219880, libserver.so)  // inlines: Destruct<CMsgSOMultipleObjects>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF190;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003219910, libserver.so)  // inlines: Destruct<CMsgSOCacheUnsubscribed>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47CF0D0;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::~CProtoBufMsgMemoryPool  (line 243, @0x00000000032199a0, libserver.so)  // inlines: Destruct<CMsgGCClientPing>, InternalFree, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::PopItem, GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *const this)
{
  google::protobuf::Message *v2; // rbx
  google::protobuf::Message *ppMsg[5]; // [rsp+8h] [rbp-28h] BYREF

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0350;
  ppMsg[0] = 0;
  while ( GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
  {
    while ( 1 )
    {
      v2 = ppMsg[0];
      if ( ppMsg[0] == 0 )
        break;
      (**ppMsg[0])(ppMsg[0]);
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v2);
      if ( !GCSDK::CProtoBufMsgMemoryPoolBase::PopItem(this, ppMsg) )
        goto LABEL_5;
    }
  }
LABEL_5:
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003236750, libserver.so)  // inlines: Destruct<CMsgProtoBufHeader>, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, InternalFree, Pop, PopItem, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase
// callers: GCSDK::CProtoBufMsgMemoryPoolMgr::CProtoBufMsgMemoryPoolMgr
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> *const this)
{
  unsigned __int64 v1; // r14
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // r8
  signed __int64 *pNode; // rdi
  signed __int64 pNext; // r9
  void (__fastcall ***v6)(_QWORD, volatile signed __int64 *, __int64, unsigned __int64); // r15
  __int128 v7; // rt0
  volatile signed __int64 *p_m_FreeNodes; // rsi
  TSLHead_t m_Head; // rax
  __int64 v10; // rdx
  TSLHead_t v11; // rt0
  unsigned __int8 v12; // tt
  __int128 v13; // rt0
  intp *p_sequence; // [rsp+18h] [rbp-38h]

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0730;
LABEL_2:
  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
        pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode == m_pTSQueueFreeObjects->m_Tail.value.pNode )
        break;
      if ( m_pTSQueueFreeObjects != pNext )
      {
        v6 = *(pNext + 8);
        *&v7 = m_pTSQueueFreeObjects->m_Head.value.pNode;
        *(&v7 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, *p_sequence + 1, pNext, &v7) != 0 )
        {
          _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
          pNode[1] = v6;
          p_m_FreeNodes = &m_pTSQueueFreeObjects->m_FreeNodes;
          v1 = v1;
          while ( 1 )
          {
            m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
            v1 = (m_Head.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
            *pNode = m_Head.value.Next;
            v11 = m_Head;
            v12 = _InterlockedCompareExchange128(p_m_FreeNodes, v1, pNode, &v11);
            v10 = *(&v11.value64x128 + 1);
            if ( v12 != 0 )
              break;
            _mm_pause();
          }
          if ( v6 != 0 )
          {
            (**v6)(v6, p_m_FreeNodes, v10, v1);
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
          }
          goto LABEL_2;
        }
      }
    }
    if ( m_pTSQueueFreeObjects == pNext )
      break;
    *&v13 = m_pTSQueueFreeObjects->m_Head.value.pNode;
    *(&v13 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
    _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, *(&v13 + 1) + 1LL, pNext, &v13);
  }
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::~CProtoBufMsgMemoryPool  (line 243, @0x0000000003236890, libserver.so)  // inlines: Destruct<CMsgProtoBufHeader>, FinishPush, FreeNode, InterlockedCompareExchangeNodeLink, InternalFree, Pop, PopItem, Push, ThreadInterlockedAssignIf128, ThreadInterlockedAssignIf64x128, ThreadInterlockedDecrement, ThreadPause, operator--, ~CProtoBufMsgMemoryPool
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase, operator delete
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::~CProtoBufMsgMemoryPool(
        GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> *const this)
{
  unsigned __int64 v1; // r14
  CTSQueue<google::protobuf::Message*,false> *m_pTSQueueFreeObjects; // r8
  signed __int64 *pNode; // rdi
  signed __int64 pNext; // r9
  void (__fastcall ***v6)(_QWORD, volatile signed __int64 *, __int64, unsigned __int64); // r15
  __int128 v7; // rt0
  volatile signed __int64 *p_m_FreeNodes; // rsi
  TSLHead_t m_Head; // rax
  __int64 v10; // rdx
  TSLHead_t v11; // rt0
  unsigned __int8 v12; // tt
  __int128 v13; // rt0
  intp *p_sequence; // [rsp+18h] [rbp-38h]

  this->_vptr_CProtoBufMsgMemoryPoolBase = &off_47D0730;
LABEL_2:
  m_pTSQueueFreeObjects = this->m_pTSQueueFreeObjects;
  p_sequence = &m_pTSQueueFreeObjects->m_Head.value.sequence;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        pNode = m_pTSQueueFreeObjects->m_Head.value.pNode;
        pNext = m_pTSQueueFreeObjects->m_Head.value.pNode->pNext;
      }
      while ( pNext == 0 );
      if ( pNode == m_pTSQueueFreeObjects->m_Tail.value.pNode )
        break;
      if ( m_pTSQueueFreeObjects != pNext )
      {
        v6 = *(pNext + 8);
        *&v7 = m_pTSQueueFreeObjects->m_Head.value.pNode;
        *(&v7 + 1) = *p_sequence;
        if ( _InterlockedCompareExchange128(m_pTSQueueFreeObjects, *p_sequence + 1, pNext, &v7) != 0 )
        {
          _InterlockedSub(&m_pTSQueueFreeObjects->m_Count.m_value, 1u);
          pNode[1] = v6;
          p_m_FreeNodes = &m_pTSQueueFreeObjects->m_FreeNodes;
          v1 = v1;
          while ( 1 )
          {
            m_Head = m_pTSQueueFreeObjects->m_FreeNodes.m_Head;
            v1 = (m_Head.value32.DepthAndSequence + 65537) | v1 & 0xFFFFFFFF00000000LL;
            *pNode = m_Head.value.Next;
            v11 = m_Head;
            v12 = _InterlockedCompareExchange128(p_m_FreeNodes, v1, pNode, &v11);
            v10 = *(&v11.value64x128 + 1);
            if ( v12 != 0 )
              break;
            _mm_pause();
          }
          if ( v6 != 0 )
          {
            (**v6)(v6, p_m_FreeNodes, v10, v1);
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6);
          }
          goto LABEL_2;
        }
      }
    }
    if ( m_pTSQueueFreeObjects == pNext )
      break;
    *&v13 = m_pTSQueueFreeObjects->m_Head.value.pNode;
    *(&v13 + 1) = m_pTSQueueFreeObjects->m_Tail.value.sequence;
    _InterlockedCompareExchange128(&m_pTSQueueFreeObjects->m_Tail, *(&v13 + 1) + 1LL, pNext, &v13);
  }
  GCSDK::CProtoBufMsgMemoryPoolBase::~CProtoBufMsgMemoryPoolBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::GetName  (line 252, @0x0000000002563c30, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgTournamentItemEventResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse> *const this)
{
  const CMsgTournamentItemEventResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgTournamentItemEventResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::GetName  (line 252, @0x0000000002563cd0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCGetAdditionalEquipsResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  const CMsgServerToGCGetAdditionalEquipsResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCGetAdditionalEquipsResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::GetName  (line 252, @0x0000000002563d70, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgResponseTeamFanfare::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare> *const this)
{
  const CMsgResponseTeamFanfare *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgResponseTeamFanfare::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::GetName  (line 252, @0x0000000002563e10, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgTeamFanfare::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare> *const this)
{
  const CMsgTeamFanfare *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgTeamFanfare::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::GetName  (line 252, @0x0000000002563eb0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCBanStatusResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *const this)
{
  const CMsgGCBanStatusResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCBanStatusResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::GetName  (line 252, @0x0000000002563f50, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCBanStatusRequest::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *const this)
{
  const CMsgGCBanStatusRequest *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCBanStatusRequest::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::GetName  (line 252, @0x0000000002563ff0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgTournamentItemEvent::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent> *const this)
{
  const CMsgTournamentItemEvent *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgTournamentItemEvent::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::GetName  (line 252, @0x0000000002564090, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerGrantSurveyPermissionResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  const CMsgServerGrantSurveyPermissionResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerGrantSurveyPermissionResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::GetName  (line 252, @0x0000000002564130, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerGrantSurveyPermission::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission> *const this)
{
  const CMsgServerGrantSurveyPermission *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerGrantSurveyPermission::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::GetName  (line 252, @0x00000000025641d0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCGetAdditionalEquips::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips> *const this)
{
  const CMsgServerToGCGetAdditionalEquips *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCGetAdditionalEquips::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::GetName  (line 252, @0x00000000025cb8c0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCPostMatchTipResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *const this)
{
  const CMsgServerToGCPostMatchTipResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCPostMatchTipResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::GetName  (line 252, @0x00000000025cb960, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCGetIngameEventData::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *const this)
{
  const CMsgServerToGCGetIngameEventData *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCGetIngameEventData::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::GetName  (line 252, @0x00000000025cba00, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCCompendiumInGamePredictionResults::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  const CMsgServerToGCCompendiumInGamePredictionResults *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCCompendiumInGamePredictionResults::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::GetName  (line 252, @0x00000000025cbaa0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCStartCompendiumInGamePredictions::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  const CMsgServerToGCStartCompendiumInGamePredictions *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCStartCompendiumInGamePredictions::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::GetName  (line 252, @0x00000000025cbb40, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCEndCompendiumInGamePredictions::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  const CMsgServerToGCEndCompendiumInGamePredictions *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCEndCompendiumInGamePredictions::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::GetName  (line 252, @0x00000000025cbbe0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCCloseCompendiumInGamePredictionVoting::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  const CMsgServerToGCCloseCompendiumInGamePredictionVoting *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCCloseCompendiumInGamePredictionVoting::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::GetName  (line 252, @0x00000000025cbc80, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTAAwardEventPoints::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *const this)
{
  const CMsgDOTAAwardEventPoints *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTAAwardEventPoints::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::GetName  (line 252, @0x00000000025cbd20, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTAFrostivusTimeElapsed::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  const CMsgDOTAFrostivusTimeElapsed *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTAFrostivusTimeElapsed::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::GetName  (line 252, @0x00000000025cbdc0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCPostMatchTip::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *const this)
{
  const CMsgServerToGCPostMatchTip *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCPostMatchTip::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::GetName  (line 252, @0x00000000025cbe60, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCHoldEventPoints::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *const this)
{
  const CMsgServerToGCHoldEventPoints *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCHoldEventPoints::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::GetName  (line 252, @0x00000000026a6780, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgLeaverDetectedResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *const this)
{
  const CMsgLeaverDetectedResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgLeaverDetectedResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::GetName  (line 252, @0x00000000026a6820, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTARequestBatchPlayerResourcesResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  const CMsgDOTARequestBatchPlayerResourcesResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTARequestBatchPlayerResourcesResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::GetName  (line 252, @0x00000000026a68c0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTARequestBatchPlayerResources::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *const this)
{
  const CMsgDOTARequestBatchPlayerResources *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTARequestBatchPlayerResources::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::GetName  (line 252, @0x00000000026a6960, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgLeaverDetected::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *const this)
{
  const CMsgLeaverDetected *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgLeaverDetected::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::GetName  (line 252, @0x00000000029ad770, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToServerPredictionResult::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *const this)
{
  const CMsgGCToServerPredictionResult *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToServerPredictionResult::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::GetName  (line 252, @0x00000000029ad810, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToServerConsoleCommand::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *const this)
{
  const CMsgGCToServerConsoleCommand *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToServerConsoleCommand::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::GetName  (line 252, @0x00000000029ad8b0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToServerPingResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *const this)
{
  const CMsgGCToServerPingResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToServerPingResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::GetName  (line 252, @0x00000000029ad950, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToServerPingRequest::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *const this)
{
  const CMsgGCToServerPingRequest *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToServerPingRequest::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::GetName  (line 252, @0x00000000029ad9f0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgItemAcknowledged::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *const this)
{
  const CMsgItemAcknowledged *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgItemAcknowledged::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::GetName  (line 252, @0x00000000029ada90, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCGCToLANServerRelayConnect::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *const this)
{
  const CMsgGCGCToLANServerRelayConnect *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCGCToLANServerRelayConnect::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::GetName  (line 252, @0x00000000029adb30, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToRelayConnect::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *const this)
{
  const CMsgGCToRelayConnect *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToRelayConnect::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::GetName  (line 252, @0x00000000029adbd0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTABroadcastNotification::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *const this)
{
  const CMsgDOTABroadcastNotification *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTABroadcastNotification::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::GetName  (line 252, @0x00000000029adc70, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCServerVersionUpdated::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *const this)
{
  const CMsgGCServerVersionUpdated *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCServerVersionUpdated::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::GetName  (line 252, @0x00000000029add10, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgClientWelcome::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *const this)
{
  const CMsgClientWelcome *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgClientWelcome::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::GetName  (line 252, @0x00000000029addb0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTALiveScoreboardUpdate::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *const this)
{
  const CMsgDOTALiveScoreboardUpdate *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTALiveScoreboardUpdate::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::GetName  (line 252, @0x00000000029ade50, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgConnectedPlayers::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *const this)
{
  const CMsgConnectedPlayers *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgConnectedPlayers::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::GetName  (line 252, @0x00000000029adef0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerGCUpdateSpectatorCount::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *const this)
{
  const CMsgServerGCUpdateSpectatorCount *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerGCUpdateSpectatorCount::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::GetName  (line 252, @0x00000000029adf90, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCMatchConnectionStats::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *const this)
{
  const CMsgServerToGCMatchConnectionStats *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCMatchConnectionStats::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::GetName  (line 252, @0x00000000029ae030, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameMatchSignoutResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *const this)
{
  const CMsgGameMatchSignoutResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameMatchSignoutResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::GetName  (line 252, @0x00000000029ae0d0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameMatchSignOutPermissionResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  const CMsgGameMatchSignOutPermissionResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameMatchSignOutPermissionResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::GetName  (line 252, @0x00000000029ae170, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameMatchSignOutPermissionRequest::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  const CMsgGameMatchSignOutPermissionRequest *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameMatchSignOutPermissionRequest::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::GetName  (line 252, @0x00000000029ae210, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameMatchSignOut::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *const this)
{
  const CMsgGameMatchSignOut *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameMatchSignOut::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::GetName  (line 252, @0x00000000029ae2b0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerAvailable::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *const this)
{
  const CMsgServerAvailable *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerAvailable::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::GetName  (line 252, @0x00000000029ae350, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOCacheSubscriptionRefresh::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *const this)
{
  const CMsgSOCacheSubscriptionRefresh *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOCacheSubscriptionRefresh::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::GetName  (line 252, @0x00000000029ae3f0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToServerRealtimeStatsStartStop::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  const CMsgGCToServerRealtimeStatsStartStop *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToServerRealtimeStatsStartStop::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::GetName  (line 252, @0x00000000029ae490, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCRealtimeStats::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *const this)
{
  const CMsgServerToGCRealtimeStats *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCRealtimeStats::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::GetName  (line 252, @0x00000000029ae530, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgDOTAPlayerFailedToConnect::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *const this)
{
  const CMsgDOTAPlayerFailedToConnect *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgDOTAPlayerFailedToConnect::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::GetName  (line 252, @0x00000000029ae5d0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameServerInfo::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *const this)
{
  const CMsgGameServerInfo *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameServerInfo::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::GetName  (line 252, @0x00000000029ae670, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgLANServerAvailable::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *const this)
{
  const CMsgLANServerAvailable *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgLANServerAvailable::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::GetName  (line 252, @0x00000000029ae710, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGenericResult::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *const this)
{
  const CMsgGenericResult *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGenericResult::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::GetName  (line 252, @0x00000000029ae7b0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGameserverCrash::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *const this)
{
  const CMsgGameserverCrash *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGameserverCrash::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::GetName  (line 252, @0x0000000002e53dd0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerToGCLockCharmTrading::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *const this)
{
  const CMsgServerToGCLockCharmTrading *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerToGCLockCharmTrading::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::GetName  (line 252, @0x0000000002e53e70, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgConsumableExhausted::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *const this)
{
  const CMsgConsumableExhausted *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgConsumableExhausted::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::GetName  (line 252, @0x0000000002e53f10, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgServerUseItem::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *const this)
{
  const CMsgServerUseItem *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgServerUseItem::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::GetName  (line 252, @0x0000000002ea50e0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgUpdateItemSchema::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *const this)
{
  const CMsgUpdateItemSchema *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgUpdateItemSchema::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::GetName  (line 252, @0x0000000003219bc0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgClientHello::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *const this)
{
  const CMsgClientHello *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgClientHello::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::GetName  (line 252, @0x0000000003219c60, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgConnectionStatus::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *const this)
{
  const CMsgConnectionStatus *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgConnectionStatus::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::GetName  (line 252, @0x0000000003219d00, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOCacheUnsubscribed::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *const this)
{
  const CMsgSOCacheUnsubscribed *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOCacheUnsubscribed::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::GetName  (line 252, @0x0000000003219da0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToClientPollConvarRequest::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *const this)
{
  const CMsgGCToClientPollConvarRequest *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToClientPollConvarRequest::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::GetName  (line 252, @0x0000000003219e40, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOSingleObject::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *const this)
{
  const CMsgSOSingleObject *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOSingleObject::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::GetName  (line 252, @0x0000000003219ee0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOMultipleObjects::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *const this)
{
  const CMsgSOMultipleObjects *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOMultipleObjects::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::GetName  (line 252, @0x0000000003219f80, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOCacheSubscribed::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *const this)
{
  const CMsgSOCacheSubscribed *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOCacheSubscribed::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::GetName  (line 252, @0x000000000321a020, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgSOCacheSubscribedUpToDate::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *const this)
{
  const CMsgSOCacheSubscribedUpToDate *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgSOCacheSubscribedUpToDate::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::GetName  (line 252, @0x000000000321a0c0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCToClientPollConvarResponse::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *const this)
{
  const CMsgGCToClientPollConvarResponse *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCToClientPollConvarResponse::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::GetName  (line 252, @0x000000000321a160, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgGCClientPing::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *const this)
{
  const CMsgGCClientPing *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgGCClientPing::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::GetName  (line 252, @0x00000000032366b0, libserver.so)  // inlines: CUtlString, _M_data, _M_dispose, _M_rep, __exchange_and_add, __exchange_and_add_dispatch, __exchange_and_add_single, ~basic_string
// calls: CMsgProtoBufHeader::default_instance, CUtlString::Set, std::string::_Rep::_M_destroy(std::allocator<char> const&), std::string::_Rep::_M_dispose(std::allocator<char> const&), _Unwind_Resume
CUtlString __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::GetName(
        CUtlString *a1,
        GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> *const this)
{
  const CMsgProtoBufHeader *v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  int v7; // eax
  int v8; // edx
  char v9; // [rsp+Fh] [rbp-21h] BYREF
  char *pValue; // [rsp+10h] [rbp-20h] BYREF

  v3 = CMsgProtoBufHeader::default_instance();
  (*(*v3 + 16LL))(&pValue, v3);
  v4 = pValue;
  a1->m_pString = 0;
  CUtlString::Set(a1, v4);
  v5 = pValue - 24;
  if ( pValue - 24 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create != 0 )
    {
      v7 = _InterlockedExchangeAdd(v5 + 4, 0xFFFFFFFF);
    }
    else
    {
      v8 = *(pValue - 2);
      *(pValue - 2) = v8 - 1;
      v7 = v8;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy(v5, &v9);
  }
  return a1;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::InternalAlloc  (line 258, @0x00000000025575a0, libserver.so)  // inlines: Construct<CMsgTournamentItemEvent>
// calls: CMsgTournamentItemEvent::CMsgTournamentItemEvent
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent> *const this)
{
  CMsgTournamentItemEvent *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 96);
  v2 = v1;
  if ( v1 != 0 )
    CMsgTournamentItemEvent::CMsgTournamentItemEvent(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::InternalAlloc  (line 258, @0x0000000002557d00, libserver.so)  // inlines: Construct<CMsgTournamentItemEventResponse>
// calls: CMsgTournamentItemEventResponse::CMsgTournamentItemEventResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse> *const this)
{
  CMsgTournamentItemEventResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgTournamentItemEventResponse::CMsgTournamentItemEventResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::InternalAlloc  (line 258, @0x0000000002557d40, libserver.so)  // inlines: Construct<CMsgServerGrantSurveyPermissionResponse>
// calls: CMsgServerGrantSurveyPermissionResponse::CMsgServerGrantSurveyPermissionResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  CMsgServerGrantSurveyPermissionResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerGrantSurveyPermissionResponse::CMsgServerGrantSurveyPermissionResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::InternalAlloc  (line 258, @0x0000000002557d80, libserver.so)  // inlines: Construct<CMsgServerGrantSurveyPermission>
// calls: CMsgServerGrantSurveyPermission::CMsgServerGrantSurveyPermission
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission> *const this)
{
  CMsgServerGrantSurveyPermission *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerGrantSurveyPermission::CMsgServerGrantSurveyPermission(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::InternalAlloc  (line 258, @0x0000000002557dc0, libserver.so)  // inlines: Construct<CMsgServerToGCGetAdditionalEquips>
// calls: CMsgServerToGCGetAdditionalEquips::CMsgServerToGCGetAdditionalEquips
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips> *const this)
{
  CMsgServerToGCGetAdditionalEquips *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCGetAdditionalEquips::CMsgServerToGCGetAdditionalEquips(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::InternalAlloc  (line 258, @0x0000000002557e00, libserver.so)  // inlines: Construct<CMsgServerToGCGetAdditionalEquipsResponse>
// calls: CMsgServerToGCGetAdditionalEquipsResponse::CMsgServerToGCGetAdditionalEquipsResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  CMsgServerToGCGetAdditionalEquipsResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCGetAdditionalEquipsResponse::CMsgServerToGCGetAdditionalEquipsResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::InternalAlloc  (line 258, @0x0000000002557e40, libserver.so)  // inlines: Construct<CMsgResponseTeamFanfare>
// calls: CMsgResponseTeamFanfare::CMsgResponseTeamFanfare
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare> *const this)
{
  CMsgResponseTeamFanfare *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgResponseTeamFanfare::CMsgResponseTeamFanfare(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::InternalAlloc  (line 258, @0x0000000002557e80, libserver.so)  // inlines: Construct<CMsgTeamFanfare>
// calls: CMsgTeamFanfare::CMsgTeamFanfare
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare> *const this)
{
  CMsgTeamFanfare *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgTeamFanfare::CMsgTeamFanfare(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::InternalAlloc  (line 258, @0x0000000002557ec0, libserver.so)  // inlines: Construct<CMsgGCBanStatusResponse>
// calls: CMsgGCBanStatusResponse::CMsgGCBanStatusResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *const this)
{
  CMsgGCBanStatusResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCBanStatusResponse::CMsgGCBanStatusResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::InternalAlloc  (line 258, @0x0000000002557f00, libserver.so)  // inlines: Construct<CMsgGCBanStatusRequest>
// calls: CMsgGCBanStatusRequest::CMsgGCBanStatusRequest
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *const this)
{
  CMsgGCBanStatusRequest *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCBanStatusRequest::CMsgGCBanStatusRequest(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::InternalAlloc  (line 258, @0x00000000025c7b00, libserver.so)  // inlines: Construct<CMsgDOTAAwardEventPoints>
// calls: CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *const this)
{
  CMsgDOTAAwardEventPoints *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTAAwardEventPoints::CMsgDOTAAwardEventPoints(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::InternalAlloc  (line 258, @0x00000000025c7c30, libserver.so)  // inlines: Construct<CMsgServerToGCPostMatchTip>
// calls: CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *const this)
{
  CMsgServerToGCPostMatchTip *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCPostMatchTip::CMsgServerToGCPostMatchTip(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::InternalAlloc  (line 258, @0x00000000025c83b0, libserver.so)  // inlines: Construct<CMsgServerToGCPostMatchTipResponse>
// calls: CMsgServerToGCPostMatchTipResponse::CMsgServerToGCPostMatchTipResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *const this)
{
  CMsgServerToGCPostMatchTipResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCPostMatchTipResponse::CMsgServerToGCPostMatchTipResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::InternalAlloc  (line 258, @0x00000000025c83f0, libserver.so)  // inlines: Construct<CMsgServerToGCHoldEventPoints>
// calls: CMsgServerToGCHoldEventPoints::CMsgServerToGCHoldEventPoints
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *const this)
{
  CMsgServerToGCHoldEventPoints *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCHoldEventPoints::CMsgServerToGCHoldEventPoints(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::InternalAlloc  (line 258, @0x00000000025c8430, libserver.so)  // inlines: Construct<CMsgServerToGCGetIngameEventData>
// calls: CMsgServerToGCGetIngameEventData::CMsgServerToGCGetIngameEventData
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *const this)
{
  CMsgServerToGCGetIngameEventData *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCGetIngameEventData::CMsgServerToGCGetIngameEventData(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::InternalAlloc  (line 258, @0x00000000025c8470, libserver.so)  // inlines: Construct<CMsgServerToGCCompendiumInGamePredictionResults>
// calls: CMsgServerToGCCompendiumInGamePredictionResults::CMsgServerToGCCompendiumInGamePredictionResults
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  CMsgServerToGCCompendiumInGamePredictionResults *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCCompendiumInGamePredictionResults::CMsgServerToGCCompendiumInGamePredictionResults(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::InternalAlloc  (line 258, @0x00000000025c84b0, libserver.so)  // inlines: Construct<CMsgServerToGCStartCompendiumInGamePredictions>
// calls: CMsgServerToGCStartCompendiumInGamePredictions::CMsgServerToGCStartCompendiumInGamePredictions
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  CMsgServerToGCStartCompendiumInGamePredictions *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCStartCompendiumInGamePredictions::CMsgServerToGCStartCompendiumInGamePredictions(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::InternalAlloc  (line 258, @0x00000000025c84f0, libserver.so)  // inlines: Construct<CMsgServerToGCEndCompendiumInGamePredictions>
// calls: CMsgServerToGCEndCompendiumInGamePredictions::CMsgServerToGCEndCompendiumInGamePredictions
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  CMsgServerToGCEndCompendiumInGamePredictions *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCEndCompendiumInGamePredictions::CMsgServerToGCEndCompendiumInGamePredictions(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::InternalAlloc  (line 258, @0x00000000025c8530, libserver.so)  // inlines: Construct<CMsgServerToGCCloseCompendiumInGamePredictionVoting>
// calls: CMsgServerToGCCloseCompendiumInGamePredictionVoting::CMsgServerToGCCloseCompendiumInGamePredictionVoting
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  CMsgServerToGCCloseCompendiumInGamePredictionVoting *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCCloseCompendiumInGamePredictionVoting::CMsgServerToGCCloseCompendiumInGamePredictionVoting(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::InternalAlloc  (line 258, @0x00000000025c8570, libserver.so)  // inlines: Construct<CMsgDOTAFrostivusTimeElapsed>
// calls: CMsgDOTAFrostivusTimeElapsed::CMsgDOTAFrostivusTimeElapsed
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  CMsgDOTAFrostivusTimeElapsed *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTAFrostivusTimeElapsed::CMsgDOTAFrostivusTimeElapsed(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::InternalAlloc  (line 258, @0x00000000026a1e00, libserver.so)  // inlines: Construct<CMsgLeaverDetectedResponse>
// calls: CMsgLeaverDetectedResponse::CMsgLeaverDetectedResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *const this)
{
  CMsgLeaverDetectedResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgLeaverDetectedResponse::CMsgLeaverDetectedResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::InternalAlloc  (line 258, @0x00000000026a1e40, libserver.so)  // inlines: Construct<CMsgLeaverDetected>
// calls: CMsgLeaverDetected::CMsgLeaverDetected
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *const this)
{
  CMsgLeaverDetected *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  v2 = v1;
  if ( v1 != 0 )
    CMsgLeaverDetected::CMsgLeaverDetected(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::InternalAlloc  (line 258, @0x00000000026a1e80, libserver.so)  // inlines: Construct<CMsgDOTARequestBatchPlayerResourcesResponse>
// calls: CMsgDOTARequestBatchPlayerResourcesResponse::CMsgDOTARequestBatchPlayerResourcesResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  CMsgDOTARequestBatchPlayerResourcesResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTARequestBatchPlayerResourcesResponse::CMsgDOTARequestBatchPlayerResourcesResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::InternalAlloc  (line 258, @0x00000000026a1ec0, libserver.so)  // inlines: Construct<CMsgDOTARequestBatchPlayerResources>
// calls: CMsgDOTARequestBatchPlayerResources::CMsgDOTARequestBatchPlayerResources
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *const this)
{
  CMsgDOTARequestBatchPlayerResources *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTARequestBatchPlayerResources::CMsgDOTARequestBatchPlayerResources(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::InternalAlloc  (line 258, @0x00000000029a88c0, libserver.so)  // inlines: Construct<CMsgGameserverCrash>
// calls: CMsgGameserverCrash::CMsgGameserverCrash
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *const this)
{
  CMsgGameserverCrash *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 88);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameserverCrash::CMsgGameserverCrash(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::InternalAlloc  (line 258, @0x00000000029a8900, libserver.so)  // inlines: Construct<CMsgGameServerInfo>
// calls: CMsgGameServerInfo::CMsgGameServerInfo
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *const this)
{
  CMsgGameServerInfo *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 136);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameServerInfo::CMsgGameServerInfo(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::InternalAlloc  (line 258, @0x00000000029a8a30, libserver.so)  // inlines: Construct<CMsgGenericResult>
// calls: CMsgGenericResult::CMsgGenericResult
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *const this)
{
  CMsgGenericResult *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGenericResult::CMsgGenericResult(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::InternalAlloc  (line 258, @0x00000000029a98b0, libserver.so)  // inlines: Construct<CMsgGCToServerPredictionResult>
// calls: CMsgGCToServerPredictionResult::CMsgGCToServerPredictionResult
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *const this)
{
  CMsgGCToServerPredictionResult *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToServerPredictionResult::CMsgGCToServerPredictionResult(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::InternalAlloc  (line 258, @0x00000000029a98f0, libserver.so)  // inlines: Construct<CMsgGCToServerConsoleCommand>
// calls: CMsgGCToServerConsoleCommand::CMsgGCToServerConsoleCommand
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *const this)
{
  CMsgGCToServerConsoleCommand *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToServerConsoleCommand::CMsgGCToServerConsoleCommand(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::InternalAlloc  (line 258, @0x00000000029a9930, libserver.so)  // inlines: Construct<CMsgGCToServerPingResponse>
// calls: CMsgGCToServerPingResponse::CMsgGCToServerPingResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *const this)
{
  CMsgGCToServerPingResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToServerPingResponse::CMsgGCToServerPingResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::InternalAlloc  (line 258, @0x00000000029a9970, libserver.so)  // inlines: Construct<CMsgGCToServerPingRequest>
// calls: CMsgGCToServerPingRequest::CMsgGCToServerPingRequest
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *const this)
{
  CMsgGCToServerPingRequest *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToServerPingRequest::CMsgGCToServerPingRequest(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::InternalAlloc  (line 258, @0x00000000029a99b0, libserver.so)  // inlines: Construct<CMsgItemAcknowledged>
// calls: CMsgItemAcknowledged::CMsgItemAcknowledged
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *const this)
{
  CMsgItemAcknowledged *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgItemAcknowledged::CMsgItemAcknowledged(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::InternalAlloc  (line 258, @0x00000000029a99f0, libserver.so)  // inlines: Construct<CMsgGCGCToLANServerRelayConnect>
// calls: CMsgGCGCToLANServerRelayConnect::CMsgGCGCToLANServerRelayConnect
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *const this)
{
  CMsgGCGCToLANServerRelayConnect *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCGCToLANServerRelayConnect::CMsgGCGCToLANServerRelayConnect(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::InternalAlloc  (line 258, @0x00000000029a9a30, libserver.so)  // inlines: Construct<CMsgGCToRelayConnect>
// calls: CMsgGCToRelayConnect::CMsgGCToRelayConnect
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *const this)
{
  CMsgGCToRelayConnect *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 64);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToRelayConnect::CMsgGCToRelayConnect(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::InternalAlloc  (line 258, @0x00000000029a9a70, libserver.so)  // inlines: Construct<CMsgDOTABroadcastNotification>
// calls: CMsgDOTABroadcastNotification::CMsgDOTABroadcastNotification
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *const this)
{
  CMsgDOTABroadcastNotification *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTABroadcastNotification::CMsgDOTABroadcastNotification(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::InternalAlloc  (line 258, @0x00000000029a9ab0, libserver.so)  // inlines: Construct<CMsgGCServerVersionUpdated>
// calls: CMsgGCServerVersionUpdated::CMsgGCServerVersionUpdated
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *const this)
{
  CMsgGCServerVersionUpdated *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCServerVersionUpdated::CMsgGCServerVersionUpdated(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::InternalAlloc  (line 258, @0x00000000029a9af0, libserver.so)  // inlines: Construct<CMsgClientWelcome>
// calls: CMsgClientWelcome::CMsgClientWelcome
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *const this)
{
  CMsgClientWelcome *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 120);
  v2 = v1;
  if ( v1 != 0 )
    CMsgClientWelcome::CMsgClientWelcome(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::InternalAlloc  (line 258, @0x00000000029a9b30, libserver.so)  // inlines: Construct<CMsgDOTALiveScoreboardUpdate>
// calls: CMsgDOTALiveScoreboardUpdate::CMsgDOTALiveScoreboardUpdate
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *const this)
{
  CMsgDOTALiveScoreboardUpdate *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTALiveScoreboardUpdate::CMsgDOTALiveScoreboardUpdate(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::InternalAlloc  (line 258, @0x00000000029a9b70, libserver.so)  // inlines: Construct<CMsgConnectedPlayers>
// calls: CMsgConnectedPlayers::CMsgConnectedPlayers
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *const this)
{
  CMsgConnectedPlayers *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 112);
  v2 = v1;
  if ( v1 != 0 )
    CMsgConnectedPlayers::CMsgConnectedPlayers(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::InternalAlloc  (line 258, @0x00000000029a9bb0, libserver.so)  // inlines: Construct<CMsgServerGCUpdateSpectatorCount>
// calls: CMsgServerGCUpdateSpectatorCount::CMsgServerGCUpdateSpectatorCount
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *const this)
{
  CMsgServerGCUpdateSpectatorCount *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerGCUpdateSpectatorCount::CMsgServerGCUpdateSpectatorCount(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::InternalAlloc  (line 258, @0x00000000029a9bf0, libserver.so)  // inlines: Construct<CMsgServerToGCMatchConnectionStats>
// calls: CMsgServerToGCMatchConnectionStats::CMsgServerToGCMatchConnectionStats
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *const this)
{
  CMsgServerToGCMatchConnectionStats *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCMatchConnectionStats::CMsgServerToGCMatchConnectionStats(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::InternalAlloc  (line 258, @0x00000000029a9c30, libserver.so)  // inlines: Construct<CMsgGameMatchSignoutResponse>
// calls: CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *const this)
{
  CMsgGameMatchSignoutResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 152);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameMatchSignoutResponse::CMsgGameMatchSignoutResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::InternalAlloc  (line 258, @0x00000000029a9c70, libserver.so)  // inlines: Construct<CMsgGameMatchSignOutPermissionResponse>
// calls: CMsgGameMatchSignOutPermissionResponse::CMsgGameMatchSignOutPermissionResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  CMsgGameMatchSignOutPermissionResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameMatchSignOutPermissionResponse::CMsgGameMatchSignOutPermissionResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::InternalAlloc  (line 258, @0x00000000029a9cb0, libserver.so)  // inlines: Construct<CMsgGameMatchSignOutPermissionRequest>
// calls: CMsgGameMatchSignOutPermissionRequest::CMsgGameMatchSignOutPermissionRequest
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  CMsgGameMatchSignOutPermissionRequest *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameMatchSignOutPermissionRequest::CMsgGameMatchSignOutPermissionRequest(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::InternalAlloc  (line 258, @0x00000000029a9cf0, libserver.so)  // inlines: Construct<CMsgGameMatchSignOut>
// calls: CMsgGameMatchSignOut::CMsgGameMatchSignOut
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *const this)
{
  CMsgGameMatchSignOut *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 360);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGameMatchSignOut::CMsgGameMatchSignOut(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::InternalAlloc  (line 258, @0x00000000029a9d30, libserver.so)  // inlines: Construct<CMsgServerAvailable>
// calls: CMsgServerAvailable::CMsgServerAvailable
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *const this)
{
  CMsgServerAvailable *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerAvailable::CMsgServerAvailable(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::InternalAlloc  (line 258, @0x00000000029a9d70, libserver.so)  // inlines: Construct<CMsgSOCacheSubscriptionRefresh>
// calls: CMsgSOCacheSubscriptionRefresh::CMsgSOCacheSubscriptionRefresh
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *const this)
{
  CMsgSOCacheSubscriptionRefresh *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOCacheSubscriptionRefresh::CMsgSOCacheSubscriptionRefresh(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::InternalAlloc  (line 258, @0x00000000029a9db0, libserver.so)  // inlines: Construct<CMsgGCToServerRealtimeStatsStartStop>
// calls: CMsgGCToServerRealtimeStatsStartStop::CMsgGCToServerRealtimeStatsStartStop
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  CMsgGCToServerRealtimeStatsStartStop *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToServerRealtimeStatsStartStop::CMsgGCToServerRealtimeStatsStartStop(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::InternalAlloc  (line 258, @0x00000000029a9df0, libserver.so)  // inlines: Construct<CMsgServerToGCRealtimeStats>
// calls: CMsgServerToGCRealtimeStats::CMsgServerToGCRealtimeStats
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *const this)
{
  CMsgServerToGCRealtimeStats *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCRealtimeStats::CMsgServerToGCRealtimeStats(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::InternalAlloc  (line 258, @0x00000000029a9e30, libserver.so)  // inlines: Construct<CMsgDOTAPlayerFailedToConnect>
// calls: CMsgDOTAPlayerFailedToConnect::CMsgDOTAPlayerFailedToConnect
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *const this)
{
  CMsgDOTAPlayerFailedToConnect *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  v2 = v1;
  if ( v1 != 0 )
    CMsgDOTAPlayerFailedToConnect::CMsgDOTAPlayerFailedToConnect(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::InternalAlloc  (line 258, @0x00000000029a9e70, libserver.so)  // inlines: Construct<CMsgLANServerAvailable>
// calls: CMsgLANServerAvailable::CMsgLANServerAvailable
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *const this)
{
  CMsgLANServerAvailable *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgLANServerAvailable::CMsgLANServerAvailable(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::InternalAlloc  (line 258, @0x0000000002e51700, libserver.so)  // inlines: Construct<CMsgServerToGCLockCharmTrading>
// calls: CMsgServerToGCLockCharmTrading::CMsgServerToGCLockCharmTrading
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *const this)
{
  CMsgServerToGCLockCharmTrading *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerToGCLockCharmTrading::CMsgServerToGCLockCharmTrading(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::InternalAlloc  (line 258, @0x0000000002e51740, libserver.so)  // inlines: Construct<CMsgConsumableExhausted>
// calls: CMsgConsumableExhausted::CMsgConsumableExhausted
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *const this)
{
  CMsgConsumableExhausted *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgConsumableExhausted::CMsgConsumableExhausted(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::InternalAlloc  (line 258, @0x0000000002e51780, libserver.so)  // inlines: Construct<CMsgServerUseItem>
// calls: CMsgServerUseItem::CMsgServerUseItem
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *const this)
{
  CMsgServerUseItem *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgServerUseItem::CMsgServerUseItem(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::InternalAlloc  (line 258, @0x0000000002ea3e50, libserver.so)  // inlines: Construct<CMsgUpdateItemSchema>
// calls: CMsgUpdateItemSchema::CMsgUpdateItemSchema
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *const this)
{
  CMsgUpdateItemSchema *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgUpdateItemSchema::CMsgUpdateItemSchema(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::InternalAlloc  (line 258, @0x0000000003218080, libserver.so)  // inlines: Construct<CMsgGCToClientPollConvarResponse>
// calls: CMsgGCToClientPollConvarResponse::CMsgGCToClientPollConvarResponse
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *const this)
{
  CMsgGCToClientPollConvarResponse *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToClientPollConvarResponse::CMsgGCToClientPollConvarResponse(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::InternalAlloc  (line 258, @0x00000000032180c0, libserver.so)  // inlines: Construct<CMsgGCClientPing>
// calls: CMsgGCClientPing::CMsgGCClientPing
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *const this)
{
  CMsgGCClientPing *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 24);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCClientPing::CMsgGCClientPing(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::InternalAlloc  (line 258, @0x0000000003218100, libserver.so)  // inlines: Construct<CMsgClientHello>
// calls: CMsgClientHello::CMsgClientHello
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *const this)
{
  CMsgClientHello *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 80);
  v2 = v1;
  if ( v1 != 0 )
    CMsgClientHello::CMsgClientHello(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::InternalAlloc  (line 258, @0x0000000003218140, libserver.so)  // inlines: Construct<CMsgConnectionStatus>
// calls: CMsgConnectionStatus::CMsgConnectionStatus
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *const this)
{
  CMsgConnectionStatus *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 48);
  v2 = v1;
  if ( v1 != 0 )
    CMsgConnectionStatus::CMsgConnectionStatus(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::InternalAlloc  (line 258, @0x0000000003218190, libserver.so)  // inlines: Construct<CMsgSOSingleObject>
// calls: CMsgSOSingleObject::CMsgSOSingleObject
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *const this)
{
  CMsgSOSingleObject *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 56);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOSingleObject::CMsgSOSingleObject(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::InternalAlloc  (line 258, @0x00000000032181d0, libserver.so)  // inlines: Construct<CMsgSOMultipleObjects>
// calls: CMsgSOMultipleObjects::CMsgSOMultipleObjects
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *const this)
{
  CMsgSOMultipleObjects *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 120);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOMultipleObjects::CMsgSOMultipleObjects(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::InternalAlloc  (line 258, @0x0000000003218210, libserver.so)  // inlines: Construct<CMsgSOCacheSubscribed>
// calls: CMsgSOCacheSubscribed::CMsgSOCacheSubscribed
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *const this)
{
  CMsgSOCacheSubscribed *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 96);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOCacheSubscribed::CMsgSOCacheSubscribed(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::InternalAlloc  (line 258, @0x0000000003218250, libserver.so)  // inlines: Construct<CMsgSOCacheSubscribedUpToDate>
// calls: CMsgSOCacheSubscribedUpToDate::CMsgSOCacheSubscribedUpToDate
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *const this)
{
  CMsgSOCacheSubscribedUpToDate *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 72);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOCacheSubscribedUpToDate::CMsgSOCacheSubscribedUpToDate(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::InternalAlloc  (line 258, @0x0000000003218290, libserver.so)  // inlines: Construct<CMsgSOCacheUnsubscribed>
// calls: CMsgSOCacheUnsubscribed::CMsgSOCacheUnsubscribed
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *const this)
{
  CMsgSOCacheUnsubscribed *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 32);
  v2 = v1;
  if ( v1 != 0 )
    CMsgSOCacheUnsubscribed::CMsgSOCacheUnsubscribed(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::InternalAlloc  (line 258, @0x00000000032182d0, libserver.so)  // inlines: Construct<CMsgGCToClientPollConvarRequest>
// calls: CMsgGCToClientPollConvarRequest::CMsgGCToClientPollConvarRequest
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *const this)
{
  CMsgGCToClientPollConvarRequest *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 40);
  v2 = v1;
  if ( v1 != 0 )
    CMsgGCToClientPollConvarRequest::CMsgGCToClientPollConvarRequest(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::InternalAlloc  (line 258, @0x0000000003236670, libserver.so)  // inlines: Construct<CMsgProtoBufHeader>
// calls: CMsgProtoBufHeader::CMsgProtoBufHeader
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::InternalAlloc(
        GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> *const this)
{
  CMsgProtoBufHeader *v1; // rax
  google::protobuf::Message *v2; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 88);
  v2 = v1;
  if ( v1 != 0 )
    CMsgProtoBufHeader::CMsgProtoBufHeader(v1);
  return v2;
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::InternalFree  (line 265, @0x0000000002553450, libserver.so)  // inlines: Destruct<CMsgTournamentItemEventResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEventResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::InternalFree  (line 265, @0x0000000002553490, libserver.so)  // inlines: Destruct<CMsgTournamentItemEvent>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTournamentItemEvent> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::InternalFree  (line 265, @0x00000000025534d0, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermissionResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermissionResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::InternalFree  (line 265, @0x0000000002553510, libserver.so)  // inlines: Destruct<CMsgServerGrantSurveyPermission>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGrantSurveyPermission> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::InternalFree  (line 265, @0x0000000002553550, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquips>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquips> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::InternalFree  (line 265, @0x0000000002553590, libserver.so)  // inlines: Destruct<CMsgServerToGCGetAdditionalEquipsResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetAdditionalEquipsResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::InternalFree  (line 265, @0x00000000025535d0, libserver.so)  // inlines: Destruct<CMsgResponseTeamFanfare>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgResponseTeamFanfare> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::InternalFree  (line 265, @0x0000000002553610, libserver.so)  // inlines: Destruct<CMsgTeamFanfare>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgTeamFanfare> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::InternalFree  (line 265, @0x0000000002553650, libserver.so)  // inlines: Destruct<CMsgGCBanStatusResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::InternalFree  (line 265, @0x0000000002553690, libserver.so)  // inlines: Destruct<CMsgGCBanStatusRequest>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCBanStatusRequest> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::InternalFree  (line 265, @0x00000000025c5cc0, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTipResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTipResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::InternalFree  (line 265, @0x00000000025c5d00, libserver.so)  // inlines: Destruct<CMsgServerToGCPostMatchTip>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCPostMatchTip> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::InternalFree  (line 265, @0x00000000025c5d40, libserver.so)  // inlines: Destruct<CMsgServerToGCHoldEventPoints>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCHoldEventPoints> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::InternalFree  (line 265, @0x00000000025c5d80, libserver.so)  // inlines: Destruct<CMsgServerToGCGetIngameEventData>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCGetIngameEventData> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::InternalFree  (line 265, @0x00000000025c5dc0, libserver.so)  // inlines: Destruct<CMsgServerToGCCompendiumInGamePredictionResults>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCompendiumInGamePredictionResults> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::InternalFree  (line 265, @0x00000000025c5e00, libserver.so)  // inlines: Destruct<CMsgServerToGCStartCompendiumInGamePredictions>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCStartCompendiumInGamePredictions> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::InternalFree  (line 265, @0x00000000025c5e40, libserver.so)  // inlines: Destruct<CMsgServerToGCEndCompendiumInGamePredictions>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCEndCompendiumInGamePredictions> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::InternalFree  (line 265, @0x00000000025c5e80, libserver.so)  // inlines: Destruct<CMsgServerToGCCloseCompendiumInGamePredictionVoting>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::InternalFree  (line 265, @0x00000000025c5f00, libserver.so)  // inlines: Destruct<CMsgDOTAAwardEventPoints>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAAwardEventPoints> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::InternalFree  (line 265, @0x00000000025c5f40, libserver.so)  // inlines: Destruct<CMsgDOTAFrostivusTimeElapsed>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAFrostivusTimeElapsed> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::InternalFree  (line 265, @0x000000000269df90, libserver.so)  // inlines: Destruct<CMsgLeaverDetectedResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetectedResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::InternalFree  (line 265, @0x000000000269dfd0, libserver.so)  // inlines: Destruct<CMsgLeaverDetected>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLeaverDetected> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::InternalFree  (line 265, @0x000000000269e010, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResourcesResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResourcesResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::InternalFree  (line 265, @0x000000000269e050, libserver.so)  // inlines: Destruct<CMsgDOTARequestBatchPlayerResources>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTARequestBatchPlayerResources> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::InternalFree  (line 265, @0x00000000029a76e0, libserver.so)  // inlines: Destruct<CMsgGCToServerPredictionResult>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPredictionResult> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::InternalFree  (line 265, @0x00000000029a7720, libserver.so)  // inlines: Destruct<CMsgGCToServerConsoleCommand>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerConsoleCommand> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::InternalFree  (line 265, @0x00000000029a7760, libserver.so)  // inlines: Destruct<CMsgGCToServerPingResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::InternalFree  (line 265, @0x00000000029a77a0, libserver.so)  // inlines: Destruct<CMsgGCToServerPingRequest>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerPingRequest> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::InternalFree  (line 265, @0x00000000029a77e0, libserver.so)  // inlines: Destruct<CMsgItemAcknowledged>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::InternalFree  (line 265, @0x00000000029a7820, libserver.so)  // inlines: Destruct<CMsgGCGCToLANServerRelayConnect>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCGCToLANServerRelayConnect> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::InternalFree  (line 265, @0x00000000029a7860, libserver.so)  // inlines: Destruct<CMsgGCToRelayConnect>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToRelayConnect> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::InternalFree  (line 265, @0x00000000029a78a0, libserver.so)  // inlines: Destruct<CMsgDOTABroadcastNotification>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTABroadcastNotification> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::InternalFree  (line 265, @0x00000000029a78e0, libserver.so)  // inlines: Destruct<CMsgGCServerVersionUpdated>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::InternalFree  (line 265, @0x00000000029a7920, libserver.so)  // inlines: Destruct<CMsgClientWelcome>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::InternalFree  (line 265, @0x00000000029a7960, libserver.so)  // inlines: Destruct<CMsgDOTALiveScoreboardUpdate>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTALiveScoreboardUpdate> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::InternalFree  (line 265, @0x00000000029a79a0, libserver.so)  // inlines: Destruct<CMsgConnectedPlayers>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectedPlayers> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::InternalFree  (line 265, @0x00000000029a79e0, libserver.so)  // inlines: Destruct<CMsgServerGCUpdateSpectatorCount>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerGCUpdateSpectatorCount> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::InternalFree  (line 265, @0x00000000029a7a20, libserver.so)  // inlines: Destruct<CMsgServerToGCMatchConnectionStats>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCMatchConnectionStats> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::InternalFree  (line 265, @0x00000000029a7a60, libserver.so)  // inlines: Destruct<CMsgGameMatchSignoutResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignoutResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::InternalFree  (line 265, @0x00000000029a7aa0, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::InternalFree  (line 265, @0x00000000029a7ae0, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOutPermissionRequest>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOutPermissionRequest> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::InternalFree  (line 265, @0x00000000029a7b20, libserver.so)  // inlines: Destruct<CMsgGameMatchSignOut>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameMatchSignOut> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::InternalFree  (line 265, @0x00000000029a7b60, libserver.so)  // inlines: Destruct<CMsgServerAvailable>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerAvailable> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::InternalFree  (line 265, @0x00000000029a7ba0, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscriptionRefresh>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::InternalFree  (line 265, @0x00000000029a7be0, libserver.so)  // inlines: Destruct<CMsgGCToServerRealtimeStatsStartStop>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToServerRealtimeStatsStartStop> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::InternalFree  (line 265, @0x00000000029a7c20, libserver.so)  // inlines: Destruct<CMsgServerToGCRealtimeStats>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCRealtimeStats> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::InternalFree  (line 265, @0x00000000029a7c60, libserver.so)  // inlines: Destruct<CMsgDOTAPlayerFailedToConnect>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgDOTAPlayerFailedToConnect> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::InternalFree  (line 265, @0x00000000029a7ca0, libserver.so)  // inlines: Destruct<CMsgGameServerInfo>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::InternalFree  (line 265, @0x00000000029a7ce0, libserver.so)  // inlines: Destruct<CMsgLANServerAvailable>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgLANServerAvailable> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::InternalFree  (line 265, @0x00000000029a7d20, libserver.so)  // inlines: Destruct<CMsgGenericResult>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGenericResult> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::InternalFree  (line 265, @0x00000000029a7d60, libserver.so)  // inlines: Destruct<CMsgGameserverCrash>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGameserverCrash> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::InternalFree  (line 265, @0x0000000002e4f2e0, libserver.so)  // inlines: Destruct<CMsgServerToGCLockCharmTrading>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerToGCLockCharmTrading> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::InternalFree  (line 265, @0x0000000002e4f320, libserver.so)  // inlines: Destruct<CMsgConsumableExhausted>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConsumableExhausted> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::InternalFree  (line 265, @0x0000000002e4f360, libserver.so)  // inlines: Destruct<CMsgServerUseItem>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgServerUseItem> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::InternalFree  (line 265, @0x0000000002ea2180, libserver.so)  // inlines: Destruct<CMsgUpdateItemSchema>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgUpdateItemSchema> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::InternalFree  (line 265, @0x0000000003217370, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarResponse>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarResponse> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::InternalFree  (line 265, @0x00000000032173b0, libserver.so)  // inlines: Destruct<CMsgGCClientPing>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCClientPing> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::InternalFree  (line 265, @0x00000000032173f0, libserver.so)  // inlines: Destruct<CMsgClientHello>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::InternalFree  (line 265, @0x0000000003217430, libserver.so)  // inlines: Destruct<CMsgConnectionStatus>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::InternalFree  (line 265, @0x0000000003217630, libserver.so)  // inlines: Destruct<CMsgSOSingleObject>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::InternalFree  (line 265, @0x0000000003217670, libserver.so)  // inlines: Destruct<CMsgSOMultipleObjects>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::InternalFree  (line 265, @0x00000000032176b0, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribed>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::InternalFree  (line 265, @0x00000000032176f0, libserver.so)  // inlines: Destruct<CMsgSOCacheSubscribedUpToDate>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribedUpToDate> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::InternalFree  (line 265, @0x0000000003217730, libserver.so)  // inlines: Destruct<CMsgSOCacheUnsubscribed>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::InternalFree  (line 265, @0x0000000003217770, libserver.so)  // inlines: Destruct<CMsgGCToClientPollConvarRequest>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgGCToClientPollConvarRequest> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::InternalFree  (line 265, @0x0000000003236630, libserver.so)  // inlines: Destruct<CMsgProtoBufHeader>
void __fastcall GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader>::InternalFree(
        GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> *const this,
        google::protobuf::Message *pMsg)
{
  if ( pMsg != 0 )
  {
    (**pMsg)(pMsg);
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, pMsg);
  }
}


// GCSDK::CProtoBufPtrMsg::~CProtoBufPtrMsg  (line 311, @0x0000000003217810, libserver.so)
// calls: GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
void __fastcall GCSDK::CProtoBufPtrMsg::~CProtoBufPtrMsg(GCSDK::CProtoBufPtrMsg *const this)
{
  this->_vptr_CProtoBufMsgBase = off_47CF7B0;  // vptr: GCSDK::CProtoBufPtrMsg
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufPtrMsg::~CProtoBufPtrMsg  (line 311, @0x0000000003217830, libserver.so)  // inlines: ~CProtoBufPtrMsg
// calls: GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
void __fastcall GCSDK::CProtoBufPtrMsg::~CProtoBufPtrMsg(GCSDK::CProtoBufPtrMsg *const this)
{
  this->_vptr_CProtoBufMsgBase = off_47CF7B0;  // vptr: GCSDK::CProtoBufPtrMsg
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufPtrMsg::GetGenericBody  (line 318, @0x0000000003217320, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufPtrMsg::GetGenericBody(const GCSDK::CProtoBufPtrMsg *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameServerInfo>::CProtoBufMsg  (line 375, @0x00000000029b0320, libserver.so)  // inlines: Add, AllocProto, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgGameServerInfo::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfile::ExitScope (17 total)
// callers: CDOTAGCServerSystem::UpdateGCServerInfo
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameServerInfo>::CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameServerInfo> *const this,
        GCSDK::MsgType_t eMsg)
{
  int m_enabled; // eax
  bool v4; // r13
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  GCSDK::CProtoBufMsgMemoryPool<CMsgGameServerInfo> *v8; // r14
  const google::protobuf::Descriptor *v9; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v11; // rax
  uint32 v12; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v13; // rax
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v15; // rax

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(this, eMsg);
  this->_vptr_CProtoBufMsgBase = &off_4304BD0;
  this->m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v15 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v15->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_bRegisteredWithMemoryPoolMgr )
    {
      v8 = operator new(0x28u);
      v9 = CMsgGameServerInfo::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v9->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v11 = CMsgGameServerInfo::descriptor();
      v12 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v11->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v8, v12, Int32);
      v8->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306350;
      GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool = v8;
      v13 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v13, v8);
      GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  this->m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool);
  if ( v4 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::CProtoBufMsg  (line 375, @0x000000000321b250, libserver.so)  // inlines: Add, AllocProto, CMicroProfilerGuard, CMicroProfilerSample, CVProfScope, EnterScope, ExitScope, Get, GetElapsed, GetExtension<google::protobuf::internal::PrimitiveTypeTraits<int>, 5u, false>, GetTimebaseRegister, InTargetThread, IsEnabled, Lock, PLAT_CPU_TIME, Unlock, ~CMicroProfilerGuard, ~CVProfScope
// calls: GCSDK::CProtoBufMsgBase::CProtoBufMsgBase, ThreadGetCurrentId, pthread_mutex_lock, operator new, CMsgSOCacheSubscriptionRefresh::descriptor, google::protobuf::internal::ExtensionSet::GetInt32(int,int), GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase, GCSDK::GProtoBufMsgMemoryPoolMgr, GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool, pthread_mutex_unlock, GCSDK::CProtoBufMsgMemoryPoolBase::Alloc, CVProfNode::GetSubNode(char const*,int,char const*,int) (19 total)
// callers: GCSDK::CGCClient::PartialHandleCompletedCache
// strings: "CProtoBufMsg::CProtoBufMsg( MsgType_t )", "Networking"
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr, GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> *const this,
        GCSDK::MsgType_t eMsg)
{
  int m_enabled; // r14d
  bool v4; // r13
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v6; // r14
  uint64 m_numTimeBaseTicks; // rcx
  GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> *v8; // r14
  const google::protobuf::Descriptor *v9; // rax
  uint32 Int32; // r15d
  const google::protobuf::Descriptor *v11; // rax
  uint32 v12; // eax
  GCSDK::CProtoBufMsgMemoryPoolMgr *v13; // rax
  unsigned __int64 v14; // r12
  ThreadId_t v15; // r13
  uint64 v16; // rcx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v18; // rax
  CVProfNode *m_pParent; // rax

  GCSDK::CProtoBufMsgBase::CProtoBufMsgBase(this, eMsg);
  this->_vptr_CProtoBufMsgBase = &off_4304FD0;
  this->m_pProtoBufBody = 0;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v4 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v6 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId() )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CProtoBufMsg::CProtoBufMsg( MsgType_t )" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CProtoBufMsg::CProtoBufMsg( MsgType_t )",
                       0,
                       "Networking",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v18 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v18->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v6 + __rdtsc();
  }
  if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
  {
    pthread_mutex_lock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
    if ( !GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr )
    {
      v8 = operator new(0x28u);
      v9 = CMsgSOCacheSubscriptionRefresh::descriptor();
      Int32 = google::protobuf::internal::ExtensionSet::GetInt32(
                (v9->options_ + 8),
                msgpool_hard_limit.number_,
                msgpool_hard_limit.default_value_);
      v11 = CMsgSOCacheSubscriptionRefresh::descriptor();
      v12 = google::protobuf::internal::ExtensionSet::GetInt32(
              (v11->options_ + 8),
              msgpool_soft_limit.number_,
              msgpool_soft_limit.default_value_);
      GCSDK::CProtoBufMsgMemoryPoolBase::CProtoBufMsgMemoryPoolBase(v8, v12, Int32);
      v8->_vptr_CProtoBufMsgMemoryPoolBase = &off_4306450;
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool = v8;
      v13 = GCSDK::GProtoBufMsgMemoryPoolMgr();
      GCSDK::CProtoBufMsgMemoryPoolMgr::RegisterPool(v13, v8);
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_bRegisteredWithMemoryPoolMgr = 1;
    }
    pthread_mutex_unlock(&GCSDK::CProtoBufMsgBase::s_PoolRegMutex.m_Mutex);
  }
  this->m_pProtoBufBody = GCSDK::CProtoBufMsgMemoryPoolBase::Alloc(GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool);
  if ( v4 )
  {
    v14 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v15 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v15 == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
          if ( m_pParent != 0 )
            g_VProfCurrentProfile.m_pCurNode = m_pParent;
          else
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        else
        {
          m_pParent = g_VProfCurrentProfile.m_pCurNode;
        }
        g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
      }
    }
    v16 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v16 - v14 + __rdtsc();
  }
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg  (line 426, @0x00000000025579a0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40F9650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg  (line 426, @0x00000000025579f0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGetHLTVChatBanStatus::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40F9690;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg  (line 426, @0x0000000002557a40, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobTeamFanfare::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgTeamFanfare>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgTeamFanfare> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FADF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgTeamFanfare>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg  (line 426, @0x0000000002557a90, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobTeamFanfare::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FAE30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg  (line 426, @0x0000000002557ae0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCUserUpdatedAdditionalItems::BYieldingRunJobFromMsg, CGCServerJobGetAdditionalItems::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBB50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg  (line 426, @0x0000000002557b30, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCServerJobGetAdditionalItems::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBBF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg  (line 426, @0x0000000002557b80, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// globals: GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBF50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg  (line 426, @0x0000000002557bd0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGrantSurveyPermission::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBFF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg  (line 426, @0x0000000002557c20, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: TournamentItemEvent
// globals: GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgTournamentItemEvent> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FC770;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg  (line 426, @0x0000000002557c70, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCTournamentItemEventResponse::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FC810;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg  (line 426, @0x000000000255d1f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBFF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg  (line 426, @0x000000000255d240, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FAE30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg  (line 426, @0x000000000255d290, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgTeamFanfare>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTeamFanfare>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgTeamFanfare> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FADF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgTeamFanfare>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg  (line 426, @0x000000000255d2e0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBF50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg  (line 426, @0x000000000255d330, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40F9690;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg  (line 426, @0x000000000255d380, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FC810;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg  (line 426, @0x000000000255d3d0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBBF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg  (line 426, @0x000000000255d420, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgTournamentItemEvent> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FC770;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg  (line 426, @0x000000000255d470, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40F9650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg  (line 426, @0x000000000255e170, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_40FBB50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg  (line 426, @0x00000000025c8030, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// globals: GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_41067F0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::~CProtoBufMsg  (line 426, @0x00000000025c8080, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: SendFrostyPointsMessageToGC, UpdateEventPoints
// globals: GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4106830;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsg  (line 426, @0x00000000025c80d0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAInGamePredictionGameSystem::FrameUpdatePostEntityThink
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107A70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsg  (line 426, @0x00000000025c8120, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAInGamePredictionGameSystem::FireGameEvent
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107AB0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsg  (line 426, @0x00000000025c8170, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAInGamePredictionGameSystem::SelectInGamePredictions
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107B30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsg  (line 426, @0x00000000025c81c0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAInGamePredictionGameSystem::PostPredictionResults
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107B70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::~CProtoBufMsg  (line 426, @0x00000000025c8210, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: RequestIngameEventDataFromGC
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107D90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::~CProtoBufMsg  (line 426, @0x00000000025c8260, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CIngameEvent_FM2015::OnGameStarted
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_41084F0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::~CProtoBufMsg  (line 426, @0x00000000025c82b0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4108C50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsg  (line 426, @0x00000000025c8300, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4108C90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg  (line 426, @0x00000000025c9520, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_41067F0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsg  (line 426, @0x00000000025c97f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107B30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsg  (line 426, @0x00000000025c9840, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107B70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::~CProtoBufMsg  (line 426, @0x00000000025c9890, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_41084F0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::~CProtoBufMsg  (line 426, @0x00000000025c98e0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107D90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsg  (line 426, @0x00000000025c9930, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107A70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::~CProtoBufMsg  (line 426, @0x00000000025c9980, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4106830;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsg  (line 426, @0x00000000025c99d0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4107AB0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::~CProtoBufMsg  (line 426, @0x00000000025c9f20, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4108C50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsg  (line 426, @0x00000000025c9f70, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4108C90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsg  (line 426, @0x00000000026a1cc0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTA_PlayerResource::FlushPlayerResourceRequests
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FAF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsg  (line 426, @0x00000000026a1d10, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCJobRequestBatchPlayerResourcesResponse::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FB90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetected>::~CProtoBufMsg  (line 426, @0x00000000026a1d60, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobSetLeaverDetected::CGCClientJobSetLeaverDetected
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetected>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLeaverDetected> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FBD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::~CProtoBufMsg  (line 426, @0x00000000026a1db0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobSetLeaverDetected::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FC70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::~CProtoBufMsg  (line 426, @0x00000000026a3e20, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FC70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsg  (line 426, @0x00000000026a3e70, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FB90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsg  (line 426, @0x00000000026a3ec0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FAF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetected>::~CProtoBufMsg  (line 426, @0x00000000026a4480, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetected>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLeaverDetected> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_416FBD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLeaverDetected>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameserverCrash>::~CProtoBufMsg  (line 426, @0x00000000029a9040, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: sv_dota_crash_sentinel_filename_changed
// globals: GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameserverCrash>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameserverCrash> *const this)
{
  CMsgGameserverCrash *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43042B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGenericResult>::~CProtoBufMsg  (line 426, @0x00000000029a9090, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCSubmitGameserverCrashReportJob::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGenericResult>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGenericResult> *const this)
{
  CMsgGenericResult *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304350;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::~CProtoBufMsg  (line 426, @0x00000000029a90e0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::SetSessionNeed
// globals: GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLANServerAvailable> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameServerInfo>::~CProtoBufMsg  (line 426, @0x00000000029a9130, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::UpdateGCServerInfo
// globals: GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameServerInfo>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameServerInfo> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304BD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsg  (line 426, @0x00000000029a9180, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::SendLoadFailure
// globals: GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304C10;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::~CProtoBufMsg  (line 426, @0x00000000029a91d0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCServerJobSendRealtimeStats::CGCServerJobSendRealtimeStats
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304E90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsg  (line 426, @0x00000000029a9220, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304F90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsg  (line 426, @0x00000000029a9270, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::SODestroyed, GCSDK::CGCClient::PartialHandleCompletedCache, GCSDK::CGCClient::ProcessCacheSubscriptionCheckMsg
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304FD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerAvailable>::~CProtoBufMsg  (line 426, @0x00000000029a92c0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::FinishActivateServerFromLobby, CDOTAGCServerSystem::OnCustomGameInstallStatus
// globals: GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerAvailable>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerAvailable> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305010;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::~CProtoBufMsg  (line 426, @0x00000000029a9310, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *const this)
{
  CMsgGameMatchSignOut *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305350;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsg  (line 426, @0x00000000029a9360, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobUploadMatchStats::BYieldingGetPermission
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305390;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsg  (line 426, @0x00000000029a93b0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobUploadMatchStats::BYieldingGetPermission
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43053D0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::~CProtoBufMsg  (line 426, @0x00000000029a9400, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobUploadMatchStats::BYieldingRunJob
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305410;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsg  (line 426, @0x00000000029a9450, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305450;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsg  (line 426, @0x00000000029a94a0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// globals: GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305490;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::~CProtoBufMsg  (line 426, @0x00000000029a94f0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::CheckUpdateConnectedPlayers
// globals: GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConnectedPlayers> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43054D0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsg  (line 426, @0x00000000029a9540, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAGCServerSystem::SendScoreboardUpdate
// globals: GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305510;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgClientWelcome>::~CProtoBufMsg  (line 426, @0x00000000029a9590, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobServerWelcome::BYieldingRunJobFromMsg, GCSDK::CGCClient::DispatchPacket
// globals: GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgClientWelcome>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgClientWelcome> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43055B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::~CProtoBufMsg  (line 426, @0x00000000029a95e0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobServerUpdateVersion::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::~CProtoBufMsg  (line 426, @0x00000000029a9630, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobDOTABroadcastNotificationServer::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305990;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::~CProtoBufMsg  (line 426, @0x00000000029a9680, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobDOTAGCToRelayConnect::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToRelayConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305A30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsg  (line 426, @0x00000000029a96d0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobLANServerRelayConnect::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305AD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::~CProtoBufMsg  (line 426, @0x00000000029a9720, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCItemAcknowledged::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgItemAcknowledged> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305B70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::~CProtoBufMsg  (line 426, @0x00000000029a9770, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305C10;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::~CProtoBufMsg  (line 426, @0x00000000029a97c0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGCToServerPingRequest::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305C50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::~CProtoBufMsg  (line 426, @0x00000000029a9810, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGCToServerConsoleCommand::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305CF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::~CProtoBufMsg  (line 426, @0x00000000029a9860, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCClientJobGCToServerPredictionResult::BYieldingRunJobFromMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305D90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::~CProtoBufMsg  (line 426, @0x00000000029aa150, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *const this)
{
  CMsgGameMatchSignOut *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305350;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsg  (line 426, @0x00000000029aa1a0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305450;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsg  (line 426, @0x00000000029aa1f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304F90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsg  (line 426, @0x00000000029aa3f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305AD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::~CProtoBufMsg  (line 426, @0x00000000029aa440, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305C10;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::~CProtoBufMsg  (line 426, @0x00000000029aa490, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305410;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::~CProtoBufMsg  (line 426, @0x00000000029aa4e0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305C50;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsg  (line 426, @0x00000000029aa530, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304FD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::~CProtoBufMsg  (line 426, @0x00000000029aa580, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305CF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsg  (line 426, @0x00000000029aa5d0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305490;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::~CProtoBufMsg  (line 426, @0x00000000029aa620, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConnectedPlayers> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43054D0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsg  (line 426, @0x00000000029aa670, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305510;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::~CProtoBufMsg  (line 426, @0x00000000029aa6c0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::~CProtoBufMsg  (line 426, @0x00000000029aa710, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgItemAcknowledged> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305B70;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgClientWelcome>::~CProtoBufMsg  (line 426, @0x00000000029aa760, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgClientWelcome>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgClientWelcome> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43055B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientWelcome>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::~CProtoBufMsg  (line 426, @0x00000000029aa7b0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToRelayConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305A30;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::~CProtoBufMsg  (line 426, @0x00000000029aa800, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgLANServerAvailable> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304650;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameServerInfo>::~CProtoBufMsg  (line 426, @0x00000000029aa850, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameServerInfo>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameServerInfo> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304BD0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameServerInfo>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsg  (line 426, @0x00000000029aa8a0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304C10;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::~CProtoBufMsg  (line 426, @0x00000000029aa8f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305990;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::~CProtoBufMsg  (line 426, @0x00000000029aa940, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305D90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsg  (line 426, @0x00000000029ab710, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305390;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::~CProtoBufMsg  (line 426, @0x00000000029ab760, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304E90;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsg  (line 426, @0x00000000029ab7b0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43053D0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGameserverCrash>::~CProtoBufMsg  (line 426, @0x00000000029ab800, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGameserverCrash>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGameserverCrash> *const this)
{
  CMsgGameserverCrash *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_43042B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGameserverCrash>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGenericResult>::~CProtoBufMsg  (line 426, @0x00000000029ab850, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGenericResult>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGenericResult> *const this)
{
  CMsgGenericResult *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4304350;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGenericResult>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerAvailable>::~CProtoBufMsg  (line 426, @0x00000000029ab980, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerAvailable>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerAvailable> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_4305010;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerAvailable>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerUseItem>::~CProtoBufMsg  (line 426, @0x0000000002e514a0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAConsumableEconItem::NotifyGC, CDOTAConsumableEconItem::ConsumeItem
// globals: GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerUseItem>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerUseItem> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A0010;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::~CProtoBufMsg  (line 426, @0x0000000002e514f0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCConsumableExhausted::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConsumableExhausted> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A00B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::~CProtoBufMsg  (line 426, @0x0000000002e51540, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CDOTAVictoryPrediction::ApplyEffects
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A0230;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::~CProtoBufMsg  (line 426, @0x0000000002e53430, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A0230;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::~CProtoBufMsg  (line 426, @0x0000000002e53480, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConsumableExhausted> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A00B0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgServerUseItem>::~CProtoBufMsg  (line 426, @0x0000000002e53710, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgServerUseItem>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgServerUseItem> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A0010;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgServerUseItem>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::~CProtoBufMsg  (line 426, @0x0000000002ea3da0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: CGCUpdateItemSchema::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgUpdateItemSchema> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A8DF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::~CProtoBufMsg  (line 426, @0x0000000002ea4560, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgUpdateItemSchema> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = &off_47A8DF0;
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgConnectionStatus>::~CProtoBufMsg  (line 426, @0x0000000003217d60, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClient::DispatchPacket
// globals: GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConnectionStatus>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConnectionStatus> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFA50;  // vptr: GCSDK::CProtoBufMsg<CMsgConnectionStatus>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgClientHello>::~CProtoBufMsg  (line 426, @0x0000000003217db0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClient::SendHello
// globals: GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgClientHello>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgClientHello> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFA90;  // vptr: GCSDK::CProtoBufMsg<CMsgClientHello>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCClientPing>::~CProtoBufMsg  (line 426, @0x0000000003217e00, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgGCClientPing>::BYieldingRunGCJob, GCSDK::CGCPingJob::BYieldingRunJobFromProtoMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCClientPing>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgGCClientPing> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0150;  // vptr: GCSDK::CProtoBufMsg<CMsgGCClientPing>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::~CProtoBufMsg  (line 426, @0x0000000003217e50, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCToClientPollConvarJob::BYieldingRunJobFromProtoMsg
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0250;  // vptr: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::~CProtoBufMsg  (line 426, @0x0000000003217ea0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgGCToClientPollConvarRequest>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0290;  // vptr: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::~CProtoBufMsg  (line 426, @0x0000000003217ef0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgSOCacheUnsubscribed>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0050;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsg  (line 426, @0x0000000003217f40, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribedUpToDate>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFF50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::~CProtoBufMsg  (line 426, @0x0000000003217f90, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgSOCacheSubscribed>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFE50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::~CProtoBufMsg  (line 426, @0x0000000003217fe0, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgSOMultipleObjects>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOMultipleObjects> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFD50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgSOSingleObject>::~CProtoBufMsg  (line 426, @0x0000000003218030, libserver.so)  // inlines: FreeProto
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase
// callers: GCSDK::CGCClientProtoJob<CMsgSOSingleObject>::BYieldingRunGCJob
// globals: GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOSingleObject>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOSingleObject> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFB90;  // vptr: GCSDK::CProtoBufMsg<CMsgSOSingleObject>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::~CProtoBufMsg  (line 426, @0x0000000003218310, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0290;  // vptr: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::~CProtoBufMsg  (line 426, @0x0000000003218360, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0050;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOSingleObject>::~CProtoBufMsg  (line 426, @0x00000000032183b0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOSingleObject>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOSingleObject> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFB90;  // vptr: GCSDK::CProtoBufMsg<CMsgSOSingleObject>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOSingleObject>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::~CProtoBufMsg  (line 426, @0x0000000003218400, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFE50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::~CProtoBufMsg  (line 426, @0x0000000003218450, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOMultipleObjects> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFD50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsg  (line 426, @0x00000000032184a0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFF50;  // vptr: GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgConnectionStatus>::~CProtoBufMsg  (line 426, @0x00000000032184f0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgConnectionStatus>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgConnectionStatus> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFA50;  // vptr: GCSDK::CProtoBufMsg<CMsgConnectionStatus>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgConnectionStatus>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgClientHello>::~CProtoBufMsg  (line 426, @0x0000000003218540, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgClientHello>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgClientHello> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47CFA90;  // vptr: GCSDK::CProtoBufMsg<CMsgClientHello>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgClientHello>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::~CProtoBufMsg  (line 426, @0x0000000003218590, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::~CProtoBufMsg(
        GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0250;  // vptr: GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(
      GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::s_pMemoryPool,
      m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgGCClientPing>::~CProtoBufMsg  (line 426, @0x0000000003218ae0, libserver.so)  // inlines: FreeProto, ~CProtoBufMsg
// calls: GCSDK::CProtoBufMsgMemoryPoolBase::Free, GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase, operator delete
// globals: GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool
void __fastcall GCSDK::CProtoBufMsg<CMsgGCClientPing>::~CProtoBufMsg(GCSDK::CProtoBufMsg<CMsgGCClientPing> *const this)
{
  google::protobuf::Message *m_pProtoBufBody; // rsi

  this->_vptr_CProtoBufMsgBase = off_47D0150;  // vptr: GCSDK::CProtoBufMsg<CMsgGCClientPing>
  m_pProtoBufBody = this->m_pProtoBufBody;
  if ( m_pProtoBufBody != 0 )
  {
    GCSDK::CProtoBufMsgMemoryPoolBase::Free(GCSDK::CProtoBufMsg<CMsgGCClientPing>::s_pMemoryPool, m_pProtoBufBody);
    this->m_pProtoBufBody = 0;
  }
  GCSDK::CProtoBufMsgBase::~CProtoBufMsgBase(this);
  operator delete(this);
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::GetGenericBody  (line 440, @0x0000000002553ee0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgTournamentItemEventResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::GetGenericBody  (line 440, @0x0000000002553ef0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgTournamentItemEvent>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgTournamentItemEvent> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::GetGenericBody  (line 440, @0x0000000002553f00, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermissionResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::GetGenericBody  (line 440, @0x0000000002553f10, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerGrantSurveyPermission> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::GetGenericBody  (line 440, @0x0000000002554000, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquips> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::GetGenericBody  (line 440, @0x0000000002554010, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCGetAdditionalEquipsResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::GetGenericBody  (line 440, @0x0000000002554020, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgResponseTeamFanfare> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgTeamFanfare>::GetGenericBody  (line 440, @0x0000000002554030, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgTeamFanfare>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgTeamFanfare> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::GetGenericBody  (line 440, @0x0000000002554040, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCBanStatusResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::GetGenericBody  (line 440, @0x0000000002554050, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCBanStatusRequest> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::GetGenericBody  (line 440, @0x00000000025c6630, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTipResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::GetGenericBody  (line 440, @0x00000000025c6640, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCPostMatchTip> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::GetGenericBody  (line 440, @0x00000000025c6650, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCHoldEventPoints> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::GetGenericBody  (line 440, @0x00000000025c6660, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCGetIngameEventData> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::GetGenericBody  (line 440, @0x00000000025c6750, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCCompendiumInGamePredictionResults> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::GetGenericBody  (line 440, @0x00000000025c6760, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCStartCompendiumInGamePredictions> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::GetGenericBody  (line 440, @0x00000000025c6770, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCEndCompendiumInGamePredictions> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::GetGenericBody  (line 440, @0x00000000025c6780, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCCloseCompendiumInGamePredictionVoting> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::GetGenericBody  (line 440, @0x00000000025c6a90, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTAAwardEventPoints> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::GetGenericBody  (line 440, @0x00000000025c6aa0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTAFrostivusTimeElapsed> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::GetGenericBody  (line 440, @0x000000000269f1e0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgLeaverDetectedResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgLeaverDetected>::GetGenericBody  (line 440, @0x000000000269f1f0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgLeaverDetected>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgLeaverDetected> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::GetGenericBody  (line 440, @0x000000000269f200, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResourcesResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::GetGenericBody  (line 440, @0x000000000269f210, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTARequestBatchPlayerResources> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::GetGenericBody  (line 440, @0x00000000029a7f60, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToServerPredictionResult> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::GetGenericBody  (line 440, @0x00000000029a7f70, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToServerConsoleCommand> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::GetGenericBody  (line 440, @0x00000000029a7f80, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToServerPingResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::GetGenericBody  (line 440, @0x00000000029a7f90, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToServerPingRequest> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::GetGenericBody  (line 440, @0x00000000029a7fa0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgItemAcknowledged>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgItemAcknowledged> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::GetGenericBody  (line 440, @0x00000000029a7fb0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCGCToLANServerRelayConnect> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::GetGenericBody  (line 440, @0x00000000029a7fc0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToRelayConnect>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToRelayConnect> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::GetGenericBody  (line 440, @0x00000000029a7fd0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTABroadcastNotification> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::GetGenericBody  (line 440, @0x00000000029a7fe0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgClientWelcome>::GetGenericBody  (line 440, @0x00000000029a7ff0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgClientWelcome>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgClientWelcome> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::GetGenericBody  (line 440, @0x00000000029a8000, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTALiveScoreboardUpdate> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::GetGenericBody  (line 440, @0x00000000029a8010, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgConnectedPlayers>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgConnectedPlayers> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::GetGenericBody  (line 440, @0x00000000029a8020, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerGCUpdateSpectatorCount> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::GetGenericBody  (line 440, @0x00000000029a8030, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCMatchConnectionStats> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::GetGenericBody  (line 440, @0x00000000029a8040, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameMatchSignoutResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::GetGenericBody  (line 440, @0x00000000029a8050, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::GetGenericBody  (line 440, @0x00000000029a8060, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameMatchSignOutPermissionRequest> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::GetGenericBody  (line 440, @0x00000000029a8070, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameMatchSignOut>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameMatchSignOut> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerAvailable>::GetGenericBody  (line 440, @0x00000000029a8080, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerAvailable>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerAvailable> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::GetGenericBody  (line 440, @0x00000000029a8090, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::GetGenericBody  (line 440, @0x00000000029a80a0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToServerRealtimeStatsStartStop> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::GetGenericBody  (line 440, @0x00000000029a80b0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCRealtimeStats> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::GetGenericBody  (line 440, @0x00000000029a80c0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgDOTAPlayerFailedToConnect> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameServerInfo>::GetGenericBody  (line 440, @0x00000000029a80d0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameServerInfo>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameServerInfo> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::GetGenericBody  (line 440, @0x00000000029a80e0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgLANServerAvailable>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgLANServerAvailable> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGenericResult>::GetGenericBody  (line 440, @0x00000000029a80f0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGenericResult>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGenericResult> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGameserverCrash>::GetGenericBody  (line 440, @0x00000000029a8100, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGameserverCrash>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGameserverCrash> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::GetGenericBody  (line 440, @0x0000000002e4f7e0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerToGCLockCharmTrading> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::GetGenericBody  (line 440, @0x0000000002e4f7f0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgConsumableExhausted>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgConsumableExhausted> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgServerUseItem>::GetGenericBody  (line 440, @0x0000000002e4f800, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgServerUseItem>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgServerUseItem> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::GetGenericBody  (line 440, @0x0000000002ea2450, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgUpdateItemSchema>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgUpdateItemSchema> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::GetGenericBody  (line 440, @0x0000000003217470, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarResponse> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCClientPing>::GetGenericBody  (line 440, @0x0000000003217480, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCClientPing>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCClientPing> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgClientHello>::GetGenericBody  (line 440, @0x0000000003217490, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgClientHello>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgClientHello> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgConnectionStatus>::GetGenericBody  (line 440, @0x00000000032174a0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgConnectionStatus>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgConnectionStatus> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::GetGenericBody  (line 440, @0x00000000032177b0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgGCToClientPollConvarRequest> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::GetGenericBody  (line 440, @0x00000000032177c0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::GetGenericBody  (line 440, @0x00000000032177d0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOCacheSubscribedUpToDate> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::GetGenericBody  (line 440, @0x00000000032177e0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::GetGenericBody  (line 440, @0x00000000032177f0, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOMultipleObjects>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOMultipleObjects> *const this)
{
  return this->m_pProtoBufBody;
}


// GCSDK::CProtoBufMsg<CMsgSOSingleObject>::GetGenericBody  (line 440, @0x0000000003217800, libserver.so)
google::protobuf::Message *__fastcall GCSDK::CProtoBufMsg<CMsgSOSingleObject>::GetGenericBody(
        const GCSDK::CProtoBufMsg<CMsgSOSingleObject> *const this)
{
  return this->m_pProtoBufBody;
}


