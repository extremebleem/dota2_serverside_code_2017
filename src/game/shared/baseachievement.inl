
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAchievement::~CBaseAchievement  (line 28, @0x0000000001eb33b0, libserver.so)  // inlines: StopListeningForAllEvents, ~CGameEventListener, ~IGameEventListener2
void __fastcall CBaseAchievement::~CBaseAchievement(CBaseAchievement *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CBaseAchievement::~CBaseAchievement  (line 28, @0x0000000001eb35f0, libserver.so)  // inlines: StopListeningForAllEvents, ~CBaseAchievement, ~CGameEventListener, ~IGameEventListener2
// calls: operator delete
void __fastcall CBaseAchievement::~CBaseAchievement(CBaseAchievement *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


// CBaseAchievement::Init  (line 33, @0x0000000001eb2d80, libserver.so)
void __fastcall CBaseAchievement::Init(CBaseAchievement *const this)
{
  ;
}


// CBaseAchievement::ListenForEvents  (line 34, @0x0000000001eb2d90, libserver.so)
void __fastcall CBaseAchievement::ListenForEvents(CBaseAchievement *const this)
{
  ;
}


// CBaseAchievement::GetAchievementID  (line 39, @0x0000000001eb2da0, libserver.so)
int __fastcall CBaseAchievement::GetAchievementID(CBaseAchievement *const this)
{
  return this->m_iAchievementID;
}


// CBaseAchievement::GetName  (line 42, @0x0000000001eb2dc0, libserver.so)
const char *__fastcall CBaseAchievement::GetName(CBaseAchievement *const this)
{
  return this->m_pszName;
}


// CBaseAchievement::GetFlags  (line 44, @0x0000000001eb2de0, libserver.so)
int __fastcall CBaseAchievement::GetFlags(CBaseAchievement *const this)
{
  return this->m_iFlags;
}


// CBaseAchievement::GetGoal  (line 46, @0x0000000001eb2e00, libserver.so)
int __fastcall CBaseAchievement::GetGoal(CBaseAchievement *const this)
{
  return this->m_iGoal;
}


// CBaseAchievement::GetPointValue  (line 51, @0x0000000001eb2e20, libserver.so)
int __fastcall CBaseAchievement::GetPointValue(CBaseAchievement *const this)
{
  return this->m_iPointValue;
}


// CBaseAchievement::ShouldHideUntilAchieved  (line 52, @0x0000000001eb2e40, libserver.so)
bool __fastcall CBaseAchievement::ShouldHideUntilAchieved(CBaseAchievement *const this)
{
  return this->m_bHideUntilAchieved;
}


// CBaseAchievement::ShouldShowProgressNotification  (line 58, @0x0000000001eb2e60, libserver.so)
bool __fastcall CBaseAchievement::ShouldShowProgressNotification(CBaseAchievement *const this)
{
  return 1;
}


// CBaseAchievement::OnPlayerStatsUpdate  (line 59, @0x0000000001eb2e70, libserver.so)
void __fastcall CBaseAchievement::OnPlayerStatsUpdate(CBaseAchievement *const this)
{
  ;
}


// CBaseAchievement::GetCount  (line 66, @0x0000000001eb2e80, libserver.so)
int __fastcall CBaseAchievement::GetCount(CBaseAchievement *const this)
{
  return this->m_iCount;
}


// CBaseAchievement::IsAchieved  (line 69, @0x0000000001eb2ea0, libserver.so)
bool __fastcall CBaseAchievement::IsAchieved(CBaseAchievement *const this)
{
  return this->m_bAchieved;
}


// CBaseAchievement::CheckAssetAwards  (line 73, @0x0000000001eb2ec0, libserver.so)
void __fastcall CBaseAchievement::CheckAssetAwards(CBaseAchievement *const this, int nSlotId)
{
  ;
}


// CBaseAchievement::GetComponentBits  (line 74, @0x0000000001eb2ed0, libserver.so)
uint64 __fastcall CBaseAchievement::GetComponentBits(CBaseAchievement *const this)
{
  return this->m_iComponentBits;
}


// CBaseAchievement::GetNumComponents  (line 75, @0x0000000001eb2ef0, libserver.so)
int __fastcall CBaseAchievement::GetNumComponents(CBaseAchievement *const this)
{
  return this->m_iNumComponents;
}


// CBaseAchievement::PrintAdditionalStatus  (line 83, @0x0000000001eb2f10, libserver.so)
void __fastcall CBaseAchievement::PrintAdditionalStatus(CBaseAchievement *const this)
{
  ;
}


// CBaseAchievement::OnSteamUserStatsStored  (line 84, @0x0000000001eb2f20, libserver.so)
void __fastcall CBaseAchievement::OnSteamUserStatsStored(CBaseAchievement *const this)
{
  ;
}


// CBaseAchievement::UpdateAchievement  (line 85, @0x0000000001eb2f30, libserver.so)
void __fastcall CBaseAchievement::UpdateAchievement(CBaseAchievement *const this, int nData)
{
  ;
}


// CBaseAchievement::ShouldShowOnHUD  (line 86, @0x0000000001eb2f40, libserver.so)
bool __fastcall CBaseAchievement::ShouldShowOnHUD(CBaseAchievement *const this)
{
  return this->m_bShowOnHUD;
}


// CBaseAchievement::SetUserSlot  (line 88, @0x0000000001eb2f60, libserver.so)
void __fastcall CBaseAchievement::SetUserSlot(CBaseAchievement *const this, int nUserSlot)
{
  this->m_nUserSlot = nUserSlot;
}


// CBaseAchievement::GetUserSlot  (line 89, @0x0000000001eb2f70, libserver.so)
int __fastcall CBaseAchievement::GetUserSlot(CBaseAchievement *const this)
{
  return this->m_nUserSlot;
}


// CBaseAchievement::GetIconPath  (line 91, @0x0000000001eb2f80, libserver.so)
const char *__fastcall CBaseAchievement::GetIconPath(CBaseAchievement *const this)
{
  return 0;
}


// CBaseAchievement::GetDisplayOrder  (line 93, @0x0000000001eb2fa0, libserver.so)
int __fastcall CBaseAchievement::GetDisplayOrder(CBaseAchievement *const this)
{
  return this->m_iDisplayOrder;
}


// CBaseAchievement::ReadProgress  (line 95, @0x0000000001eb2fc0, libserver.so)
void __fastcall CBaseAchievement::ReadProgress(CBaseAchievement *const this, IPlayerLocal *pPlayer)
{
  ;
}


// CBaseAchievement::WriteProgress  (line 96, @0x0000000001eb2fd0, libserver.so)
bool __fastcall CBaseAchievement::WriteProgress(CBaseAchievement *const this, IPlayerLocal *pPlayer)
{
  return 0;
}


// CBaseAchievement::FireGameEvent_Internal  (line 115, @0x0000000001eb2fe0, libserver.so)
void __fastcall CBaseAchievement::FireGameEvent_Internal(CBaseAchievement *const this, IGameEvent *event)
{
  ;
}


// CFailableAchievement::~CFailableAchievement  (line 167, @0x0000000001eb3470, libserver.so)  // inlines: StopListeningForAllEvents, ~CBaseAchievement, ~CGameEventListener, ~IGameEventListener2
void __fastcall CFailableAchievement::~CFailableAchievement(CFailableAchievement *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CFailableAchievement::~CFailableAchievement  (line 167, @0x0000000001eb3530, libserver.so)  // inlines: StopListeningForAllEvents, ~CBaseAchievement, ~CFailableAchievement, ~CGameEventListener, ~IGameEventListener2
// calls: operator delete
void __fastcall CFailableAchievement::~CFailableAchievement(CFailableAchievement *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


// CFailableAchievement::IsAchieved  (line 177, @0x0000000001eb2ff0, libserver.so)  // inlines: IsAchieved
bool __fastcall CFailableAchievement::IsAchieved(CFailableAchievement *const this)
{
  bool result; // al

  result = 0;
  if ( !this->m_bFailed )
    return this->m_bAchieved;
  return result;
}


// CFailableAchievement::IsActive  (line 178, @0x0000000001eb32e0, libserver.so)
// calls: CBaseAchievement::IsActive
bool __fastcall CFailableAchievement::IsActive(CFailableAchievement *const this)
{
  return this->m_bActivated && !this->m_bFailed && CBaseAchievement::IsActive(this);
}


// CFailableAchievement::OnActivationEvent  (line 182, @0x0000000001eb3650, libserver.so)
// calls: CFailableAchievement::Activate
void __fastcall CFailableAchievement::OnActivationEvent(CFailableAchievement *const this)
{
  CFailableAchievement::Activate(this);
}


// CAchievement_AchievedCount::~CAchievement_AchievedCount  (line 208, @0x0000000001eb3410, libserver.so)  // inlines: StopListeningForAllEvents, ~CBaseAchievement, ~CGameEventListener, ~IGameEventListener2
void __fastcall CAchievement_AchievedCount::~CAchievement_AchievedCount(CAchievement_AchievedCount *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
}


// CAchievement_AchievedCount::~CAchievement_AchievedCount  (line 208, @0x0000000001eb3590, libserver.so)  // inlines: StopListeningForAllEvents, ~CAchievement_AchievedCount, ~CBaseAchievement, ~CGameEventListener, ~IGameEventListener2
// calls: operator delete
void __fastcall CAchievement_AchievedCount::~CAchievement_AchievedCount(CAchievement_AchievedCount *const this)
{
  bool v2; // zf

  this->_vptr_IAchievement = off_3FB34E0;
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, this);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  operator delete(this);
}


