
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues  (line 73, @0x0000000001d2ee20, libserver.so)
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify
// callers: CNetMessagePB<549, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CDOTA_CustomUIManager::Script_Hud_SetVisible, CDOTA_CustomUIManager::Script_Hud_SetDialogVariables
void __fastcall CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9AD30;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(this);
}


// CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>::~CBaseCmdKeyValues  (line 73, @0x0000000001d2ee70, libserver.so)
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create
// callers: CNetMessagePB<548, CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CDOTA_CustomUIManager::Script_Hud_Create
void __fastcall CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9ABF0;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create(this);
}


// CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues  (line 73, @0x0000000001d35e80, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify, operator delete
void __fastcall CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Modify> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9AD30;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Modify::~CDOTAUserMsg_CustomHudElement_Modify(this);
  operator delete(this);
}


// CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>::~CBaseCmdKeyValues  (line 73, @0x0000000001d35ed0, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create, operator delete
void __fastcall CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CDOTAUserMsg_CustomHudElement_Create> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3F9ABF0;
  v2 = *(this + 6);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 6) = 0;
  }
  CDOTAUserMsg_CustomHudElement_Create::~CDOTAUserMsg_CustomHudElement_Create(this);
  operator delete(this);
}


// CBaseCmdKeyValues<CUserMsg_CustomGameEvent>::~CBaseCmdKeyValues  (line 73, @0x0000000001f742f0, libserver.so)
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent
// callers: CNetMessagePB<148, CBaseCmdKeyValues<CUserMsg_CustomGameEvent>, (SignonGroup_t)13u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName, CCustomGameEventManager::Script_Send_ServerToAllClients, CCustomGameEventManager::Script_Send_ServerToTeam, CCustomGameEventManager::Script_Send_ServerToPlayer
void __fastcall CBaseCmdKeyValues<CUserMsg_CustomGameEvent>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CUserMsg_CustomGameEvent> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
}


// CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues  (line 73, @0x0000000001f765e0, libserver.so)
// calls: KeyValues::deleteThis, CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent
// callers: CNetMessagePB<280, CBaseCmdKeyValues<CClientMsg_CustomGameEvent>, (SignonGroup_t)14u, (NetChannelBufType_t)1, true>::CProtobufBinding::GetName
void __fastcall CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CClientMsg_CustomGameEvent> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCAF90;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent(this);
}


// CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues  (line 73, @0x0000000001f77e80, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent, operator delete
void __fastcall CBaseCmdKeyValues<CClientMsg_CustomGameEvent>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CClientMsg_CustomGameEvent> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCAF90;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CClientMsg_CustomGameEvent::~CClientMsg_CustomGameEvent(this);
  operator delete(this);
}


// CBaseCmdKeyValues<CUserMsg_CustomGameEvent>::~CBaseCmdKeyValues  (line 73, @0x0000000001f78500, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent, operator delete
void __fastcall CBaseCmdKeyValues<CUserMsg_CustomGameEvent>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CUserMsg_CustomGameEvent> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FCB1F0;
  v2 = *(this + 5);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 5) = 0;
  }
  CUserMsg_CustomGameEvent::~CUserMsg_CustomGameEvent(this);
  operator delete(this);
}


// CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues  (line 73, @0x00000000020f5f20, libserver.so)
// calls: KeyValues::deleteThis, CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration
// callers: CLoopModeGame::LoopInit
void __fastcall CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FF8270;
  v2 = *(this + 14);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 14) = 0;
  }
  CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(this);
}


// CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues  (line 73, @0x00000000020fbf00, libserver.so)  // inlines: ~CBaseCmdKeyValues
// calls: KeyValues::deleteThis, CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration, operator delete
void __fastcall CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration>::~CBaseCmdKeyValues(
        CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> *const this)
{
  KeyValues *v2; // rdi

  *this = &off_3FF8270;
  v2 = *(this + 14);
  if ( v2 != 0 )
  {
    KeyValues::deleteThis(v2);
    *(this + 14) = 0;
  }
  CSVCMsg_GameSessionConfiguration::~CSVCMsg_GameSessionConfiguration(this);
  operator delete(this);
}


// CSVCMsg_HLTVStatus_t::~CSVCMsg_HLTVStatus_t  (line 478, @0x0000000002247a90, libserver.so)  // inlines: ~CNetMessagePB
// calls: CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus
void __fastcall CSVCMsg_HLTVStatus_t::~CSVCMsg_HLTVStatus_t(CSVCMsg_HLTVStatus_t *const this)
{
  *this = &off_403F9F0;
  CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus(this);
}


// CSVCMsg_HLTVStatus_t::~CSVCMsg_HLTVStatus_t  (line 478, @0x0000000002247ab0, libserver.so)  // inlines: ~CNetMessagePB, ~CSVCMsg_HLTVStatus_t
// calls: CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus, operator delete
void __fastcall CSVCMsg_HLTVStatus_t::~CSVCMsg_HLTVStatus_t(CSVCMsg_HLTVStatus_t *const this)
{
  *this = &off_403F9F0;
  CSVCMsg_HLTVStatus::~CSVCMsg_HLTVStatus(this);
  operator delete(this);
}


