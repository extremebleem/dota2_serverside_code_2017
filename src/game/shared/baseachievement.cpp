
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseAchievement::GetDataDescMap  (line 36, @0x0000000001eae100, libserver.so)
// globals: CBaseAchievement::m_DataMap
datamap_t *__fastcall CBaseAchievement::GetDataDescMap(CBaseAchievement *const this)
{
  return &CBaseAchievement::m_DataMap;
}


// CBaseAchievement::AddDatadescMetadataKeys  (line 36, @0x0000000001eaefc0, libserver.so)
void __fastcall CBaseAchievement::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CBaseAchievement::GetBaseMap  (line 36, @0x0000000001eaefd0, libserver.so)
datamap_t *__cdecl CBaseAchievement::GetBaseMap()
{
  return 0;
}


// DataMapInit<CBaseAchievement>  (line 36, @0x0000000001eaefe0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_achievements_01.cpp
// strings: "CBaseAchievement"
// globals: `guard variable for'DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder, CBaseAchievement::m_DataMap, DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseAchievement>(CBaseAchievement *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_pszBase = "CBaseAchievement";
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseAchievement>(CBaseAchievement *)::nameHolder,
      &_dso_handle);
  }
  CBaseAchievement::m_DataMap.baseMap = 0;
  CBaseAchievement::m_DataMap.dataDesc = &DataMapInit<CBaseAchievement>(CBaseAchievement *)::dataDesc[1];
  CBaseAchievement::m_DataMap.dataNumFields = 1;
  return &CBaseAchievement::m_DataMap;
}


// CFailableAchievement::AddDatadescMetadataKeys  (line 40, @0x0000000001eaf0a0, libserver.so)
void __fastcall CFailableAchievement::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// CFailableAchievement::GetBaseMap  (line 40, @0x0000000001eaf0b0, libserver.so)
datamap_t *__cdecl CFailableAchievement::GetBaseMap()
{
  return 0;
}


// DataMapInit<CFailableAchievement>  (line 40, @0x0000000001eaf0c0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_achievements_01.cpp
// strings: "CFailableAchievement"
// globals: `guard variable for'DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder, CFailableAchievement::m_DataMap, DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFailableAchievement>(CFailableAchievement *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder) != 0 )
  {
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_pszBase = "CFailableAchievement";
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFailableAchievement>(CFailableAchievement *)::nameHolder,
      &_dso_handle);
  }
  CFailableAchievement::m_DataMap.baseMap = 0;
  CFailableAchievement::m_DataMap.dataDesc = &DataMapInit<CFailableAchievement>(CFailableAchievement *)::dataDesc[1];
  CFailableAchievement::m_DataMap.dataNumFields = 2;
  return &CFailableAchievement::m_DataMap;
}


// CBaseAchievement::CBaseAchievement  (line 48, @0x0000000001eaf180, libserver.so)  // inlines: CGameEventListener
// callers: CFailableAchievement::CFailableAchievement
void __fastcall CBaseAchievement::CBaseAchievement(CBaseAchievement *const this)
{
  this->_vptr_IGameEventListener2 = off_3FB3370;
  this->m_bRegisteredForEvents = 0;
  this->_vptr_IAchievement = off_3FB34E0;
  this->m_iFlags = 0;
  this->m_iGoal = 0;
  this->m_iProgressMsgIncrement = 0;
  this->m_iProgressMsgMinimum = 0;
  this->m_iAchievementID = 0;
  this->m_iPointValue = 0;
  this->m_bHideUntilAchieved = 0;
  this->m_bStoreProgressInSteam = 0;
  this->m_pVictimClassNameFilter = 0;
  this->m_pAttackerClassNameFilter = 0;
  this->m_pInflictorClassNameFilter = 0;
  this->m_pInflictorEntityNameFilter = 0;
  this->m_pMapNameFilter = 0;
  this->m_pGameDirFilter = 0;
  this->m_pszComponentNames = 0;
  this->m_pszComponentDisplayNames = 0;
  this->m_pszComponentPrefix = 0;
  this->m_iNumComponents = 0;
  this->m_iComponentPrefixLen = 0;
  this->m_iComponentBits = 0;
  this->m_iCount = 0;
  this->m_iProgressShown = 0;
  this->m_bAchieved = 0;
  this->m_pAchievementMgr = 0;
  this->m_nUserSlot = 0;
  this->m_iAssetAwardID = 0;
  this->m_bShowOnHUD = 0;
}


// CBaseAchievement::SetFlags  (line 82, @0x0000000001eaf280, libserver.so)
void __fastcall CBaseAchievement::SetFlags(CBaseAchievement *const this, int iFlags)
{
  this->m_iFlags = iFlags;
}


// CBaseAchievement::FireGameEvent  (line 93, @0x0000000001eae900, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
// strings: "teamplay_round_win", "full_round"
void __fastcall CBaseAchievement::FireGameEvent(CBaseAchievement *const this, IGameEvent *event)
{
  const char *m_pMapNameFilter; // r13
  const char *v5; // rax

  if ( (*(this->_vptr_IGameEventListener2 + 20))(this) != 0 )
  {
    m_pMapNameFilter = this->m_pMapNameFilter;
    if ( m_pMapNameFilter == 0
      || (v5 = (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 14))(this->m_pAchievementMgr),
          strcmp(v5, m_pMapNameFilter) == 0) )
    {
      if ( strcmp((*(event->_vptr_IGameEvent + 2))(event), "teamplay_round_win") != 0
        || (this->m_iFlags & 0x400) == 0
        || (*(event->_vptr_IGameEvent + 7))(event, "full_round", 0) != 0 )
      {
        (*(this->_vptr_IGameEventListener2 + 40))(this, event);
      }
    }
  }
}


// CBaseAchievement::SetVictimFilter  (line 129, @0x0000000001eaf290, libserver.so)
void __fastcall CBaseAchievement::SetVictimFilter(CBaseAchievement *const this, const char *pClassName)
{
  this->m_pVictimClassNameFilter = pClassName;
}


// CBaseAchievement::SetAttackerFilter  (line 137, @0x0000000001eaf2a0, libserver.so)
void __fastcall CBaseAchievement::SetAttackerFilter(CBaseAchievement *const this, const char *pClassName)
{
  this->m_pAttackerClassNameFilter = pClassName;
}


// CBaseAchievement::SetInflictorFilter  (line 145, @0x0000000001eaf2b0, libserver.so)
void __fastcall CBaseAchievement::SetInflictorFilter(CBaseAchievement *const this, const char *pClassName)
{
  this->m_pInflictorClassNameFilter = pClassName;
}


// CBaseAchievement::SetInflictorEntityNameFilter  (line 153, @0x0000000001eaf2c0, libserver.so)
void __fastcall CBaseAchievement::SetInflictorEntityNameFilter(CBaseAchievement *const this, const char *pEntityName)
{
  this->m_pInflictorEntityNameFilter = pEntityName;
}


// CBaseAchievement::SetMapNameFilter  (line 161, @0x0000000001eaf2d0, libserver.so)
void __fastcall CBaseAchievement::SetMapNameFilter(CBaseAchievement *const this, const char *pMapName)
{
  this->m_pMapNameFilter = pMapName;
}


// CBaseAchievement::SetGameDirFilter  (line 173, @0x0000000001eaf2e0, libserver.so)
void __fastcall CBaseAchievement::SetGameDirFilter(CBaseAchievement *const this, const char *pGameDir)
{
  this->m_pGameDirFilter = pGameDir;
}


// CBaseAchievement::SetComponentPrefix  (line 182, @0x0000000001eaf2f0, libserver.so)  // inlines: V_strlen
// calls: strlen
void __fastcall CBaseAchievement::SetComponentPrefix(CBaseAchievement *const this, const char *pPrefix)
{
  this->m_pszComponentPrefix = pPrefix;
  if ( pPrefix != 0 )
    this->m_iComponentPrefixLen = strlen(pPrefix);
  else
    this->m_iComponentPrefixLen = 0;
}


// CBaseAchievement::Event_EntityKilled  (line 193, @0x0000000001eae720, libserver.so)
void __fastcall CBaseAchievement::Event_EntityKilled(
        CBaseAchievement *const this,
        CBaseEntity *pVictim,
        CBaseEntity *pAttacker,
        CBaseEntity *pInflictor,
        IGameEvent *event)
{
  if ( ((*(this->_vptr_IGameEventListener2 + 9))(this, pVictim, pAttacker, pInflictor, event) & 1) != 0 )
    (*(this->_vptr_IGameEventListener2 + 41))(this);
}


// CBaseAchievement::Event_EntityHurt  (line 207, @0x0000000001eae760, libserver.so)
void __fastcall CBaseAchievement::Event_EntityHurt(
        CBaseAchievement *const this,
        CBaseEntity *pVictim,
        CBaseEntity *pAttacker,
        CBaseEntity *pInflictor,
        IGameEvent *event)
{
  if ( ((*(this->_vptr_IGameEventListener2 + 9))(this, pVictim, pAttacker, pInflictor, event) & 0x1000) != 0 )
    (*(this->_vptr_IGameEventListener2 + 41))(this);
}


// CBaseAchievement::IncrementCount  (line 221, @0x0000000001eaf920, libserver.so)  // inlines: GetInt
// calls: DevMsg(char const*,...), CBaseAchievement::HandleProgressUpdate, CBaseAchievement::AwardAchievement, Msg
// strings: "Achievements disabled, ignoring achievement progress for %s\n", "Achievement count increased for %s: %d/%d\n"
// globals: g_nAchivementBitchCount
void __fastcall CBaseAchievement::IncrementCount(CBaseAchievement *const this)
{
  const char *v3; // rax
  int v4; // eax
  int m_iGoal; // r13d
  int m_iCount; // r12d
  const char *v7; // rax

  if ( (*(this->_vptr_IGameEventListener2 + 19))(this) == 0 )
  {
    if ( (*(this->_vptr_IGameEventListener2 + 39))(this) != 0 )
    {
      ++this->m_iCount;
      if ( (*(this->_vptr_IGameEventListener2 + 9))(this) < 0 )
        (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 12))(this->m_pAchievementMgr, 1, this->m_nUserSlot);
      if ( cc_achievement_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        m_iGoal = this->m_iGoal;
        m_iCount = this->m_iCount;
        v7 = (*(this->_vptr_IGameEventListener2 + 8))(this);
        Msg("Achievement count increased for %s: %d/%d\n", v7, m_iCount, m_iGoal);
      }
      if ( this->m_bStoreProgressInSteam )
        (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 16))(this->m_pAchievementMgr, this);
      v4 = this->m_iGoal;
      if ( v4 > 0 )
      {
        if ( v4 <= this->m_iCount )
          CBaseAchievement::AwardAchievement(this);
        else
          CBaseAchievement::HandleProgressUpdate(this);
      }
    }
    else if ( g_nAchivementBitchCount++ <= 9 )
    {
      v3 = (*(this->_vptr_IGameEventListener2 + 8))(this);
      DevMsg("Achievements disabled, ignoring achievement progress for %s\n", v3);
    }
  }
}


// CBaseAchievement::SetShowOnHUD  (line 316, @0x0000000001eae110, libserver.so)
void __fastcall CBaseAchievement::SetShowOnHUD(CBaseAchievement *const this, bool bShow)
{
  if ( this->m_bShowOnHUD != bShow )
    (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 12))(this->m_pAchievementMgr, 1, this->m_nUserSlot);
  this->m_bShowOnHUD = bShow;
}


// CBaseAchievement::HandleProgressUpdate  (line 326, @0x0000000001eaf8b0, libserver.so)
// calls: CBaseAchievement::ShowProgressNotification
// callers: CBaseAchievement::IncrementCount
void __fastcall CBaseAchievement::HandleProgressUpdate(CBaseAchievement *const this)
{
  int m_iProgressMsgIncrement; // ecx
  int m_iCount; // eax
  int v4; // eax
  int v5; // edx
  IAchievementMgr *m_pAchievementMgr; // rdi
  __int64 m_nUserSlot; // rdx
  int iProgress; // [rsp+Ch] [rbp-14h]

  m_iProgressMsgIncrement = this->m_iProgressMsgIncrement;
  if ( m_iProgressMsgIncrement > 0 )
  {
    m_iCount = this->m_iCount;
    if ( m_iCount >= this->m_iProgressMsgMinimum )
    {
      v5 = m_iCount % m_iProgressMsgIncrement;
      v4 = m_iCount / m_iProgressMsgIncrement;
      if ( v5 == 0 && v4 > this->m_iProgressShown )
      {
        iProgress = v4;
        CBaseAchievement::ShowProgressNotification(this);
        m_pAchievementMgr = this->m_pAchievementMgr;
        m_nUserSlot = this->m_nUserSlot;
        this->m_iProgressShown = iProgress;
        (*(m_pAchievementMgr->_vptr_IAchievementMgr + 12))(m_pAchievementMgr, 1, m_nUserSlot);
      }
    }
  }
}


// CBaseAchievement::CalcProgressMsgIncrement  (line 348, @0x0000000001eae160, libserver.so)
void __fastcall CBaseAchievement::CalcProgressMsgIncrement(CBaseAchievement *const this)
{
  int m_iGoal; // ecx
  int v2; // esi

  m_iGoal = this->m_iGoal;
  v2 = m_iGoal / 4;
  this->m_iProgressMsgIncrement = m_iGoal / 4;
  if ( (m_iGoal & 3) != 0 )
  {
    if ( m_iGoal == 3 * (m_iGoal / 3) )
    {
      v2 = m_iGoal / 3;
      this->m_iProgressMsgIncrement = m_iGoal / 3;
    }
    else if ( m_iGoal == 5 * (m_iGoal / 5) )
    {
      v2 = m_iGoal / 5;
      this->m_iProgressMsgIncrement = m_iGoal / 5;
    }
  }
  if ( v2 <= 4 )
    this->m_iProgressMsgIncrement = 0;
}


// CBaseAchievement::EvaluateNewAchievement  (line 378, @0x0000000001eaf330, libserver.so)
// callers: CBaseAchievement::EvaluateIsAlreadyAchieved
void __fastcall CBaseAchievement::EvaluateNewAchievement(CBaseAchievement *const this)
{
  int m_iGoal; // eax

  if ( (*(this->_vptr_IGameEventListener2 + 19))(this) == 0 )
  {
    m_iGoal = this->m_iGoal;
    if ( m_iGoal > 0 && m_iGoal <= this->m_iCount )
      (*(this->_vptr_IGameEventListener2 + 22))(this, this->m_nUserSlot);
  }
}


// CBaseAchievement::EvaluateIsAlreadyAchieved  (line 395, @0x0000000001eaf380, libserver.so)  // inlines: SetAchieved
// calls: CBaseAchievement::EvaluateNewAchievement
// callers: CBaseAchievement::PostRestoreSavedGame, CPlayerAchievementState::Steam_OnGSStatsReceived, CFailableAchievement::PostRestoreSavedGame
void __fastcall CBaseAchievement::EvaluateIsAlreadyAchieved(CBaseAchievement *const this)
{
  ISteamUserStats *m_pSteamUserStats; // r12
  void (__fastcall *v3)(ISteamUserStats *, __int64, bool *); // r13
  __int64 v4; // rax
  bool bAchieved[33]; // [rsp+Fh] [rbp-21h] BYREF

  m_pSteamUserStats = steamapicontext->m_pSteamUserStats;
  v3 = *(*m_pSteamUserStats + 48LL);
  v4 = (*(this->_vptr_IGameEventListener2 + 8))(this);
  v3(m_pSteamUserStats, v4, bAchieved);
  this->m_bAchieved = bAchieved[0];
  CBaseAchievement::EvaluateNewAchievement(this);
}


// CBaseAchievement::OnMapEvent  (line 411, @0x0000000001eae8b0, libserver.so)
// calls: V_stricmp_fast
void __fastcall CBaseAchievement::OnMapEvent(CBaseAchievement *const this, const char *pEventName)
{
  __int64 v4; // rax

  v4 = (*(this->_vptr_IGameEventListener2 + 8))(this);
  if ( V_stricmp_fast(pEventName, v4) == 0 )
    (*(this->_vptr_IGameEventListener2 + 41))(this);
}


// CBaseAchievement::AwardAchievement  (line 424, @0x0000000001eaf7b0, libserver.so)
// callers: CBaseAchievement::IncrementCount, CBaseAchievement::EnsureComponentBitSetAndEvaluate
void __fastcall CBaseAchievement::AwardAchievement(CBaseAchievement *const this)
{
  if ( (*(this->_vptr_IGameEventListener2 + 19))(this) == 0 )
    (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 6))(
      this->m_pAchievementMgr,
      this->m_iAchievementID,
      this->m_nUserSlot);
}


// CBaseAchievement::OnComponentEvent  (line 450, @0x0000000001eafc10, libserver.so)  // inlines: _V_strcmp
// calls: strcmp, CBaseAchievement::EnsureComponentBitSetAndEvaluate
// callers: CPlayerAchievementState::OnMapEvent
void __fastcall CBaseAchievement::OnComponentEvent(CBaseAchievement *const this, const char *pchComponentName)
{
  int m_iNumComponents; // r12d
  const char **m_pszComponentNames; // r15
  __int64 v6; // rbx

  m_iNumComponents = this->m_iNumComponents;
  if ( m_iNumComponents > 0 )
  {
    m_pszComponentNames = this->m_pszComponentNames;
    v6 = 0;
    while ( strcmp(pchComponentName, m_pszComponentNames[v6]) != 0 )
    {
      if ( m_iNumComponents <= ++v6 )
        return;
    }
    CBaseAchievement::EnsureComponentBitSetAndEvaluate(this, v6);
  }
}


// CBaseAchievement::EnsureComponentBitSetAndEvaluate  (line 467, @0x0000000001eafa80, libserver.so)  // inlines: GetInt, SetComponentBits
// calls: UTIL_CountNumBitsSet, Msg, CBaseAchievement::ShowProgressNotification, CBaseAchievement::AwardAchievement
// callers: CBaseAchievement::OnComponentEvent
// strings: "Component %d for achievement %s found\n", "Component %d for achievement %s found, but already had that component\n", "Achievements disabled, ignoring achievement component for %s\n"
void __fastcall CBaseAchievement::EnsureComponentBitSetAndEvaluate(CBaseAchievement *const this, int iBitNumber)
{
  uint64 v4; // rdi
  int m_iCount; // eax
  bool v6; // zf
  const char *v7; // rax
  const char *v8; // rax
  const char *v9; // rax

  if ( (*(this->_vptr_IGameEventListener2 + 19))(this) == 0 )
  {
    if ( ((1LL << iBitNumber) & this->m_iComponentBits) != 0 )
    {
      if ( cc_achievement_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v8 = (*(this->_vptr_IGameEventListener2 + 8))(this);
        Msg("Component %d for achievement %s found, but already had that component\n", iBitNumber, v8);
      }
    }
    else if ( (*(this->_vptr_IGameEventListener2 + 39))(this) != 0 )
    {
      v4 = this->m_iComponentBits | (1LL << iBitNumber);
      this->m_iComponentBits = v4;
      m_iCount = UTIL_CountNumBitsSet(v4);
      v6 = !this->m_bStoreProgressInSteam;
      this->m_iCount = m_iCount;
      if ( !v6 )
      {
        (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 16))(this->m_pAchievementMgr, this);
        m_iCount = this->m_iCount;
      }
      if ( this->m_iGoal == m_iCount )
      {
        CBaseAchievement::AwardAchievement(this);
      }
      else
      {
        (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 12))(this->m_pAchievementMgr, 1, this->m_nUserSlot);
        if ( cc_achievement_debug.m_pParent->m_Value.m_nValue != 0 )
        {
          v7 = (*(this->_vptr_IGameEventListener2 + 8))(this);
          Msg("Component %d for achievement %s found\n", iBitNumber, v7);
        }
        CBaseAchievement::ShowProgressNotification(this);
      }
    }
    else
    {
      v9 = (*(this->_vptr_IGameEventListener2 + 8))(this);
      Msg("Achievements disabled, ignoring achievement component for %s\n", v9);
    }
  }
}


// CBaseAchievement::ShowProgressNotification  (line 542, @0x0000000001eaf7f0, libserver.so)  // inlines: CreateEvent
// callers: CBaseAchievement::HandleProgressUpdate, CBaseAchievement::EnsureComponentBitSetAndEvaluate
// strings: "achievement_event", "achievement_name", "cur_val", "max_val"
void __fastcall CBaseAchievement::ShowProgressNotification(CBaseAchievement *const this)
{
  __int64 v2; // rax
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, const char *, __int64); // r14
  __int64 v5; // rax

  if ( (*(this->_vptr_IGameEventListener2 + 13))(this) != 0 )
  {
    v2 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "achievement_event", 0, 0);
    v3 = v2;
    if ( v2 != 0 )
    {
      v4 = *(*v2 + 136LL);
      v5 = (*(this->_vptr_IGameEventListener2 + 8))(this);
      v4(v3, "achievement_name", v5);
      (*(*v3 + 112LL))(v3, "cur_val", this->m_iCount);
      (*(*v3 + 112LL))(v3, "max_val", this->m_iGoal);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v3, 0);
    }
  }
}


// CBaseAchievement::PreRestoreSavedGame  (line 564, @0x0000000001eae1d0, libserver.so)
void __fastcall CBaseAchievement::PreRestoreSavedGame(CBaseAchievement *const this)
{
  if ( (this->m_iFlags & 0x40) != 0 )
    this->m_iCount = 0;
}


// CBaseAchievement::PostRestoreSavedGame  (line 576, @0x0000000001eaf3e0, libserver.so)
// calls: CBaseAchievement::EvaluateIsAlreadyAchieved
void __fastcall CBaseAchievement::PostRestoreSavedGame(CBaseAchievement *const this)
{
  CBaseAchievement::EvaluateIsAlreadyAchieved(this);
}


// CBaseAchievement::SetComponentBits  (line 584, @0x0000000001eafc90, libserver.so)
// calls: UTIL_CountNumBitsSet
void __fastcall CBaseAchievement::SetComponentBits(CBaseAchievement *const this, uint64 iComponentBits)
{
  this->m_iComponentBits = iComponentBits;
  this->m_iCount = UTIL_CountNumBitsSet(iComponentBits);
}


// CBaseAchievement::GetNumComponentBitsSet  (line 597, @0x0000000001eafcc0, libserver.so)
int __fastcall CBaseAchievement::GetNumComponentBitsSet(CBaseAchievement *const this)
{
  uint64 m_iComponentBits; // rdx
  int result; // eax

  m_iComponentBits = this->m_iComponentBits;
  for ( result = 0; m_iComponentBits != 0; m_iComponentBits >>= 1 )
    result -= ((m_iComponentBits & 1) == 0) - 1;
  return result;
}


// CBaseAchievement::ShouldSaveWithGame  (line 618, @0x0000000001eae7a0, libserver.so)
bool __fastcall CBaseAchievement::ShouldSaveWithGame(CBaseAchievement *const this)
{
  if ( (this->m_iFlags & 0x40) != 0 && (*(this->_vptr_IGameEventListener2 + 18))(this) > 0 )
    return (*(this->_vptr_IGameEventListener2 + 19))(this) ^ 1;
  else
    return 0;
}


// CBaseAchievement::ShouldSaveGlobal  (line 628, @0x0000000001eafcf0, libserver.so)
bool __fastcall CBaseAchievement::ShouldSaveGlobal(CBaseAchievement *const this)
{
  return SLOBYTE(this->m_iFlags) < 0 && (*(this->_vptr_IGameEventListener2 + 18))(this) > 0
      || (*(this->_vptr_IGameEventListener2 + 19))(this) != 0
      || this->m_iProgressShown > 0;
}


// CBaseAchievement::IsActive  (line 637, @0x0000000001eae9c0, libserver.so)  // inlines: _V_strcmp
// calls: strcmp
// callers: CFailableAchievement::IsActive
bool __fastcall CBaseAchievement::IsActive(CBaseAchievement *const this)
{
  char v2; // bl
  const char *m_pMapNameFilter; // r13
  const char *v4; // rax

  v2 = (*(this->_vptr_IGameEventListener2 + 19))(this);
  if ( v2 != 0 )
    return 0;
  m_pMapNameFilter = this->m_pMapNameFilter;
  if ( m_pMapNameFilter == 0 )
    return 1;
  v4 = (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 14))(this->m_pAchievementMgr);
  if ( strcmp(v4, m_pMapNameFilter) == 0 )
    return 1;
  return v2;
}


// CBaseAchievement::IsAvailable  (line 654, @0x0000000001eae1f0, libserver.so)
bool __fastcall CBaseAchievement::IsAvailable(CBaseAchievement *const this)
{
  return 1;
}


// CBaseAchievement::ClearAchievementData  (line 662, @0x0000000001eae510, libserver.so)  // inlines: SetAchieved, SetComponentBits, SetCount
// calls: UTIL_CountNumBitsSet
void __fastcall CBaseAchievement::ClearAchievementData(CBaseAchievement *const this)
{
  this->m_iCount = 0;
  if ( (this->m_iFlags & 0x20) != 0 )
  {
    this->m_iComponentBits = 0;
    this->m_iCount = UTIL_CountNumBitsSet(0);
  }
  this->m_bAchieved = 0;
}


// CBaseAchievement::GetComponentDisplayString  (line 675, @0x0000000001eae800, libserver.so)
const char *__fastcall CBaseAchievement::GetComponentDisplayString(CBaseAchievement *const this, int iComponent)
{
  const char *result; // rax

  result = "";
  if ( (this->m_iFlags & 0x20) != 0 && iComponent >= 0 && iComponent <= this->m_iNumComponents )
    return this->m_pszComponentDisplayNames[iComponent];
  return result;
}


// CBaseAchievement::SetAssetAward  (line 686, @0x0000000001eafd50, libserver.so)  // inlines: SetAssetAwardID
// calls: V_stricmp_fast
void __fastcall CBaseAchievement::SetAssetAward(CBaseAchievement *const this, const char *assetAwardName)
{
  __int64 v4; // rax
  __int64 v5; // rbx

  v4 = (*(*g_pMatchFramework + 112LL))(g_pMatchFramework);
  v5 = (*(*v4 + 64LL))(v4);
  if ( v5 != 0 )
  {
    while ( *v5 != 0 )
    {
      if ( V_stricmp_fast(*v5, assetAwardName) == 0 )
      {
        this->m_iAssetAwardID = *(v5 + 8);
        return;
      }
      v5 += 16;
      if ( v5 == 0 )
        break;
    }
  }
  this->m_iAssetAwardID = 0;
}


// CBaseAchievement::CheckAchievementsEnabled  (line 708, @0x0000000001eae840, libserver.so)
bool __fastcall CBaseAchievement::CheckAchievementsEnabled(CBaseAchievement *const this)
{
  unsigned __int8 (__fastcall *v2)(CGameRules *, _QWORD); // r13
  unsigned int v3; // eax
  bool result; // al

  result = (g_pGameRules == 0
         || (v2 = *(g_pGameRules->_vptr_CGameRules + 44),
             v3 = (*(this->_vptr_IGameEventListener2 + 7))(this),
             v2(g_pGameRules, v3) != 0))
        && (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 13))(this->m_pAchievementMgr);
  return result;
}


// CFailableAchievement::CFailableAchievement  (line 719, @0x0000000001eafde0, libserver.so)
// calls: CBaseAchievement::CBaseAchievement
void __fastcall CFailableAchievement::CFailableAchievement(CFailableAchievement *const this)
{
  CBaseAchievement::CBaseAchievement(this);
  this->m_bFailed = 0;
  this->_vptr_IGameEventListener2 = off_3FB3590;
  this->_vptr_IAchievement = off_3FB3720;
  this->m_bActivated = 0;
}


// CFailableAchievement::ShouldSaveWithGame  (line 728, @0x0000000001eae210, libserver.so)
bool __fastcall CFailableAchievement::ShouldSaveWithGame(CFailableAchievement *const this)
{
  bool result; // al

  result = 0;
  if ( (this->m_iFlags & 0x40) != 0 && (this->m_bActivated || this->m_bFailed) )
    return 1;
  return result;
}


// CFailableAchievement::PreRestoreSavedGame  (line 737, @0x0000000001eae250, libserver.so)  // inlines: PreRestoreSavedGame
void __fastcall CFailableAchievement::PreRestoreSavedGame(CFailableAchievement *const this)
{
  bool v1; // zf

  v1 = (this->m_iFlags & 0x40) == 0;
  this->m_bFailed = 0;
  this->m_bActivated = 0;
  if ( !v1 )
    this->m_iCount = 0;
}


// CFailableAchievement::PostRestoreSavedGame  (line 749, @0x0000000001eafe70, libserver.so)  // inlines: PostRestoreSavedGame
// calls: CBaseAchievement::EvaluateIsAlreadyAchieved, CFailableAchievement::Activate
void __fastcall CFailableAchievement::PostRestoreSavedGame(CFailableAchievement *const this)
{
  if ( this->m_bFailed || *(*(this->_vptr_IGameEventListener2 + 46))(this) != 0 )
  {
    if ( !this->m_bActivated )
    {
      CBaseAchievement::EvaluateIsAlreadyAchieved(this);
      return;
    }
  }
  else
  {
    this->m_bActivated = 1;
  }
  CFailableAchievement::Activate(this);
  CBaseAchievement::EvaluateIsAlreadyAchieved(this);
}


// CFailableAchievement::OnMapEvent  (line 768, @0x0000000001eae480, libserver.so)
// calls: V_stricmp_fast
void __fastcall CFailableAchievement::OnMapEvent(CFailableAchievement *const this, const char *pEventName)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( this->m_bActivated )
    goto LABEL_2;
  v5 = (*(this->_vptr_IGameEventListener2 + 46))(this);
  if ( V_stricmp_fast(pEventName, v5) == 0 )
  {
    (*(this->_vptr_IGameEventListener2 + 44))(this);
    return;
  }
  if ( this->m_bActivated )
  {
LABEL_2:
    v4 = (*(this->_vptr_IGameEventListener2 + 47))(this);
    if ( V_stricmp_fast(pEventName, v4) == 0 )
      (*(this->_vptr_IGameEventListener2 + 45))(this);
  }
}


// CFailableAchievement::Activate  (line 785, @0x0000000001eafe20, libserver.so)  // inlines: GetInt
// calls: Msg
// callers: CFailableAchievement::OnActivationEvent, CFailableAchievement::PostRestoreSavedGame
// strings: "Failable achievement %s now active\n"
void __fastcall CFailableAchievement::Activate(CFailableAchievement *const this)
{
  const char *v2; // rax

  this->m_bActivated = 1;
  (*(this->_vptr_IGameEventListener2 + 4))(this);
  if ( cc_achievement_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v2 = (*(this->_vptr_IGameEventListener2 + 8))(this);
    Msg("Failable achievement %s now active\n", v2);
  }
}


// CFailableAchievement::OnEvaluationEvent  (line 798, @0x0000000001eaea70, libserver.so)  // inlines: GetInt
// calls: Msg
// strings: "AWARDED", "FAILED", "Failable achievement %s has been evaluated (%s), now inactive\n"
void __fastcall CFailableAchievement::OnEvaluationEvent(CFailableAchievement *const this)
{
  const char *v2; // r12
  const char *v3; // rax

  if ( !this->m_bFailed )
    (*(this->_vptr_IGameEventListener2 + 41))(this);
  if ( cc_achievement_debug.m_pParent->m_Value.m_nValue != 0 )
  {
    v2 = "FAILED";
    if ( !this->m_bFailed )
      v2 = "AWARDED";
    v3 = (*(this->_vptr_IGameEventListener2 + 8))(this);
    Msg("Failable achievement %s has been evaluated (%s), now inactive\n", v3, v2);
  }
}


// CFailableAchievement::SetFailed  (line 816, @0x0000000001eafed0, libserver.so)  // inlines: GetInt
// calls: Msg
// strings: "Achievement failed: %s (%s)\n"
void __fastcall CFailableAchievement::SetFailed(CFailableAchievement *const this)
{
  ConVar *m_pParent; // rax
  const char *v3; // r12
  const char *v4; // rax

  if ( !this->m_bFailed )
  {
    m_pParent = cc_achievement_debug.m_pParent;
    this->m_bFailed = 1;
    if ( m_pParent->m_Value.m_nValue != 0 )
    {
      v3 = (*(this->_vptr_IGameEventListener2 + 8))(this);
      v4 = (*(this->_vptr_IGameEventListener2 + 8))(this);
      Msg("Achievement failed: %s (%s)\n", v4, v3);
    }
  }
}


// CAchievement_AchievedCount::Init  (line 831, @0x0000000001eae280, libserver.so)  // inlines: SetAchievementsRequired, SetFlags, SetGoal
void __fastcall CAchievement_AchievedCount::Init(CAchievement_AchievedCount *const this)
{
  this->m_iFlags = 128;
  this->m_iGoal = 1;
  this->m_iNumRequired = 0;
  this->m_iLowRange = 0;
  this->m_iHighRange = 0;
}


// CAchievement_AchievedCount::OnSteamUserStatsStored  (line 839, @0x0000000001eae2c0, libserver.so)
void __fastcall CAchievement_AchievedCount::OnSteamUserStatsStored(CAchievement_AchievedCount *const this)
{
  int v2; // r14d
  unsigned int v3; // ebx
  int v4; // r15d
  __int64 v5; // r13
  int v6; // eax

  v2 = (*(this->m_pAchievementMgr->_vptr_IAchievementMgr + 4))(this->m_pAchievementMgr, 0);
  if ( v2 <= 0 )
  {
    v4 = 0;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = (*this->m_pAchievementMgr->_vptr_IAchievementMgr)(this->m_pAchievementMgr, v3, this->m_nUserSlot);
        v6 = (**v5)(v5);
        if ( v6 >= this->m_iLowRange && v6 <= this->m_iHighRange )
          break;
        if ( ++v3 == v2 )
          goto LABEL_7;
      }
      v4 -= ((*(*v5 + 40LL))(v5) == 0) - 1;
      ++v3;
    }
    while ( v3 != v2 );
  }
LABEL_7:
  if ( this->m_iNumRequired <= v4 )
    (*(this->_vptr_IGameEventListener2 + 41))(this);
}


// CAchievement_AchievedCount::SetAchievementsRequired  (line 865, @0x0000000001eaff30, libserver.so)
void __fastcall CAchievement_AchievedCount::SetAchievementsRequired(
        CAchievement_AchievedCount *const this,
        int iNumRequired,
        int iLowRange,
        int iHighRange)
{
  this->m_iNumRequired = iNumRequired;
  this->m_iLowRange = iLowRange;
  this->m_iHighRange = iHighRange;
}


