
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_TeamCommander::~CDOTA_TeamCommander  (line 130, @0x0000000002813060, libserver.so)  // inlines: Cancel, Purge, RemoveAll, ~CCallResult, ~CUtlMemory, ~CUtlReferenceList, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::FreeMemoryBlock, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<unsigned char, int>::Purge, CUtlMemory<sItemPickupInfo, int>::Purge, CUtlMemory<sBotHumanRequest, int>::Purge, CUtlMemory<sIncomingStun, int>::Purge, CUtlMemory<int, int>::Purge, SteamAPI_UnregisterCallResult, CUtlMemory<CDOTA_Bot*, int>::Purge
// callers: CDOTA_Commander::CDOTA_Commander, CDOTA_Commander::~CDOTA_Commander
void __fastcall CDOTA_TeamCommander::~CDOTA_TeamCommander(CDOTA_TeamCommander *const this)
{
  SteamAPICall_t m_hAPICall; // rsi
  bool v3; // zf
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hProposedRoamUnits; // r12
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hProposedDefendUnits; // r13
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hProposedPushUnits; // r14
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v7; // r12
  CUtlVector<unsigned char,CUtlMemory<unsigned char,int> > *v8; // r13
  EHANDLE *p_m_hRoamingUnit; // r12
  CUtlMemory<unsigned char,int> *v10; // rdi
  CUtlReference<CDOTA_TeamCommander> *m_pHead; // rax
  CUtlReference<CDOTA_TeamCommander> *m_pNext; // rdx

  m_hAPICall = this->m_hBotScriptDetailsCallback.m_hAPICall;
  this->_vptr_CDOTA_TeamCommander = &off_42B9160;
  this->m_hBotScriptDetailsCallback._vptr_CCallbackBase = off_42B6930;
  if ( m_hAPICall != 0 )
  {
    SteamAPI_UnregisterCallResult(&this->m_hBotScriptDetailsCallback);
    this->m_hBotScriptDetailsCallback.m_hAPICall = 0;
  }
  if ( this->m_sScriptDirectory.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_sScriptDirectory);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hDisabledBots);
  if ( (this->m_hDisabledBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDisabledBots.m_Memory);
    if ( (this->m_hDisabledBots.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hDisabledBots.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hCouriers);
  if ( (this->m_hCouriers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hCouriers.m_Memory);
    if ( (this->m_hCouriers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hCouriers.m_Memory);
  }
  v3 = (this->m_IncomingStuns.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_IncomingStuns.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<sIncomingStun,int>::Purge(&this->m_IncomingStuns.m_Memory);
    if ( (this->m_IncomingStuns.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sIncomingStun,int>::Purge(&this->m_IncomingStuns.m_Memory);
  }
  v3 = (this->m_RequestList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_RequestList.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<sBotHumanRequest,int>::Purge(&this->m_RequestList.m_Memory);
    if ( (this->m_RequestList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sBotHumanRequest,int>::Purge(&this->m_RequestList.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_ThinkerUnits);
  if ( (this->m_ThinkerUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ThinkerUnits.m_Memory);
    if ( (this->m_ThinkerUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ThinkerUnits.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllNeutralCreeps);
  if ( (this->m_AllNeutralCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllNeutralCreeps.m_Memory);
    if ( (this->m_AllNeutralCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllNeutralCreeps.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyWards);
  if ( (this->m_AllEnemyWards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyWards.m_Memory);
    if ( (this->m_AllEnemyWards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyWards.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyCreeps);
  if ( (this->m_AllEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyCreeps.m_Memory);
    if ( (this->m_AllEnemyCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyCreeps.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyHeroes);
  if ( (this->m_AllEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyHeroes.m_Memory);
    if ( (this->m_AllEnemyHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyHeroes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllEnemyUnits);
  if ( (this->m_AllEnemyUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyUnits.m_Memory);
    if ( (this->m_AllEnemyUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllEnemyUnits.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedWards);
  if ( (this->m_AllAlliedWards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedWards.m_Memory);
    if ( (this->m_AllAlliedWards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedWards.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedCreeps);
  if ( (this->m_AllAlliedCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedCreeps.m_Memory);
    if ( (this->m_AllAlliedCreeps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedCreeps.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedHeroes);
  if ( (this->m_AllAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedHeroes.m_Memory);
    if ( (this->m_AllAlliedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedHeroes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllAlliedUnits);
  if ( (this->m_AllAlliedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedUnits.m_Memory);
    if ( (this->m_AllAlliedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllAlliedUnits.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_AllUnits);
  if ( (this->m_AllUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllUnits.m_Memory);
    if ( (this->m_AllUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_AllUnits.m_Memory);
  }
  v3 = (this->m_ItemPickupInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ItemPickupInfos.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<sItemPickupInfo,int>::Purge(&this->m_ItemPickupInfos.m_Memory);
    if ( (this->m_ItemPickupInfos.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sItemPickupInfo,int>::Purge(&this->m_ItemPickupInfos.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hProposedRoshanUnits);
  if ( (this->m_hProposedRoshanUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProposedRoshanUnits.m_Memory);
    if ( (this->m_hProposedRoshanUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProposedRoshanUnits.m_Memory);
  }
  p_m_hProposedRoamUnits = &this->m_hProposedRoamUnits;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hProposedRoamUnits);
  if ( (this->m_hProposedRoamUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProposedRoamUnits.m_Memory);
    if ( (this->m_hProposedRoamUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hProposedRoamUnits.m_Memory);
  }
  m_hProposedDefendUnits = this->m_hProposedDefendUnits;
  while ( m_hProposedDefendUnits != p_m_hProposedRoamUnits )
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--p_m_hProposedRoamUnits);
      if ( (p_m_hProposedRoamUnits->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_m_hProposedRoamUnits->m_Memory);
        if ( (p_m_hProposedRoamUnits->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_hProposedDefendUnits == p_m_hProposedRoamUnits )
        goto LABEL_29;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&p_m_hProposedRoamUnits->m_Memory);
  }
LABEL_29:
  m_hProposedPushUnits = this->m_hProposedPushUnits;
  v7 = this->m_hProposedDefendUnits;
  do
  {
    while ( 1 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(--v7);
      if ( (v7->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v7->m_Memory);
        if ( (v7->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          break;
      }
      if ( m_hProposedPushUnits == v7 )
        goto LABEL_34;
    }
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v7->m_Memory);
  }
  while ( m_hProposedPushUnits != v7 );
LABEL_34:
  v8 = this->m_PotentialLocationGrid[0];
  p_m_hRoamingUnit = &this->m_hRoamingUnit;
  do
  {
    while ( 1 )
    {
      v3 = (p_m_hRoamingUnit[-1].m_Index & 0xC0000000) == 0;
      p_m_hRoamingUnit[-6].m_Index = 0;
      if ( v3 )
      {
        CUtlMemory<unsigned char,int>::Purge(&p_m_hRoamingUnit[-4]);
        if ( (p_m_hRoamingUnit[-1].m_Index & 0xC0000000) == 0 )
          break;
      }
      p_m_hRoamingUnit -= 6;
      if ( v8 == p_m_hRoamingUnit )
        goto LABEL_39;
    }
    v10 = &p_m_hRoamingUnit[-4];
    p_m_hRoamingUnit -= 6;
    CUtlMemory<unsigned char,int>::Purge(v10);
  }
  while ( v8 != p_m_hRoamingUnit );
LABEL_39:
  v3 = (this->m_AvoidanceGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_AvoidanceGrid.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<int,int>::Purge(&this->m_AvoidanceGrid.m_Memory);
    if ( (this->m_AvoidanceGrid.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&this->m_AvoidanceGrid.m_Memory);
  }
  v3 = (this->m_BotList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_BotList.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CDOTA_Bot *,int>::Purge(&this->m_BotList.m_Memory);
    if ( (this->m_BotList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Bot *,int>::Purge(&this->m_BotList.m_Memory);
  }
  m_pHead = this->m_References.m_pHead;
  if ( m_pHead != 0 )
  {
    while ( 1 )
    {
      m_pNext = m_pHead->m_pNext;
      m_pHead->m_pPrev = 0;
      m_pHead->m_pNext = 0;
      m_pHead->m_pObject = 0;
      if ( m_pNext == 0 )
        break;
      m_pHead = m_pNext;
    }
  }
  this->m_References.m_pHead = 0;
}


// CDOTA_TeamCommander::CDOTA_TeamCommander  (line 130, @0x0000000002813e60, libserver.so)  // inlines: CCallResult, CCallbackBase, CEntityHandle, CHandle, CUtlIntrusiveDList, CUtlIntrusiveList, CUtlMemory, CUtlReferenceList, CUtlString, CUtlVector, CUtlVectorBase, ~CUtlReferenceList
// calls: CDOTA_TeamCommander::CLaningSpeech::CLaningSpeech, CountdownTimer::CountdownTimer, _Unwind_Resume
// callers: CDOTA_Commander::CDOTA_Commander
void __fastcall CDOTA_TeamCommander::CDOTA_TeamCommander(CDOTA_TeamCommander *const this)
{
  CDOTA_TeamCommander::CLaningSpeech *p_m_LaningSpeech; // rdi
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *p_m_Memory; // rsi
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v4; // rax
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v5; // rdx
  CUtlVectorBase<unsigned char,CUtlMemory<unsigned char,int> >::CAllocator *v6; // rcx
  signed __int64 v7; // rcx
  CDOTA_TeamCommander *v8; // rax
  CDOTA_TeamCommander *v9; // rcx
  signed __int64 v10; // rcx
  CDOTA_TeamCommander *m_Buildings; // rax
  CDOTA_TeamCommander *p_m_nLastSeenLane; // rdx
  CDOTA_TeamCommander *p_m_vLastSeenLocation; // rdx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hProposedDefendUnits; // rsi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *m_hProposedPushUnits; // rax
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *v16; // rcx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v17; // rdx
  signed __int64 v18; // rdx
  CDOTA_TeamCommander *v19; // rax
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> >::CAllocator *v20; // rcx
  CDOTA_TeamCommander *v21; // rdx
  signed __int64 v22; // rdx

  p_m_LaningSpeech = &this->m_LaningSpeech;
  *&p_m_LaningSpeech[-1].m_fLaneMissingCalled[2] = 0;
  *p_m_LaningSpeech[-1].m_fLaneMissingCalled = &off_42B9160;
  CDOTA_TeamCommander::CLaningSpeech::CLaningSpeech(p_m_LaningSpeech);
  CountdownTimer::CountdownTimer(&this->m_LaneFrontUpdate);
  CountdownTimer::CountdownTimer(&this->m_AvoidanceGridTimer);
  CountdownTimer::CountdownTimer(&this->m_EnemyVisibilityGridTimer);
  CountdownTimer::CountdownTimer(&this->m_LaneStatusTimer);
  CountdownTimer::CountdownTimer(&this->m_ChatThrottleTimer);
  p_m_Memory = &this->m_PotentialLocationGrid[0][0].m_Memory;
  this->m_BotList.m_Size = 0;
  this->m_BotList.m_Memory.m_pMemory = 0;
  v4 = &this->m_PotentialLocationGrid[0][0].m_Memory;
  this->m_BotList.m_Memory.m_nAllocationCount = 0;
  this->m_BotList.m_Memory.m_nGrowSize = 0;
  v5 = &this->m_PotentialLocationGrid[1][0].m_Memory;
  this->m_AvoidanceGrid.m_Size = 0;
  this->m_AvoidanceGrid.m_Memory.m_pMemory = 0;
  this->m_AvoidanceGrid.m_Memory.m_nAllocationCount = 0;
  this->m_AvoidanceGrid.m_Memory.m_nGrowSize = 0;
  do
  {
    v4[-1].m_nAllocationCount = 0;
    v6 = v4;
    v4 = (v4 + 24);
    v7 = v6 - this->m_PotentialLocationGrid;
    *(p_m_Memory + v7 - 8) = 0;
    *(&p_m_Memory->m_pMemory + v7) = 0;
    *(&p_m_Memory->m_pMemory + v7 + 4) = 0;
  }
  while ( v4 != v5 );
  v8 = &this->m_PotentialLocationGrid[1][0].m_Memory;
  do
  {
    LODWORD(v8[-1].m_hBotScriptDetailsCallback.m_Func.__delta) = 0;
    v9 = v8;
    v8 = (v8 + 24);
    v10 = v9 - this->m_PotentialLocationGrid[1];
    *(v5 + v10 - 8) = 0;
    *(&v5->m_pMemory + v10) = 0;
    *(&v5->m_pMemory + v10 + 4) = 0;
  }
  while ( v8 != &this->m_pRuneDibsBot );
  this->m_hRoamingUnit.m_Index = -1;
  m_Buildings = this->m_Buildings;
  do
  {
    p_m_nLastSeenLane = &m_Buildings->m_LaningSpeech.m_Opponents[0].m_nLastSeenLane;
    do
    {
      LODWORD(m_Buildings->_vptr_CDOTA_TeamCommander) = -1;
      m_Buildings = (m_Buildings + 4);
    }
    while ( m_Buildings != p_m_nLastSeenLane );
  }
  while ( m_Buildings != this->m_LaneNodes );
  while ( 1 )
  {
    p_m_vLastSeenLocation = &m_Buildings->m_LaningSpeech.m_Opponents[0].m_vLastSeenLocation;
    do
    {
      LODWORD(m_Buildings->_vptr_CDOTA_TeamCommander) = -1;
      m_Buildings = (m_Buildings + 4);
    }
    while ( p_m_vLastSeenLocation != m_Buildings );
    if ( p_m_vLastSeenLocation == this->m_fPushLaneDesire )
      break;
    m_Buildings = p_m_vLastSeenLocation;
  }
  m_hProposedDefendUnits = this->m_hProposedDefendUnits;
  m_hProposedPushUnits = this->m_hProposedPushUnits;
  v16 = &this->m_hProposedPushUnits[0].m_Memory;
  do
  {
    m_hProposedPushUnits->m_Size = 0;
    v17 = m_hProposedPushUnits++;
    v18 = v17 - this->m_hProposedPushUnits;
    *(&v16->m_pMemory + v18) = 0;
    *(&v16->m_nAllocationCount + v18) = 0;
    *(&v16->m_nGrowSize + v18) = 0;
  }
  while ( m_hProposedPushUnits != m_hProposedDefendUnits );
  v19 = this->m_hProposedDefendUnits;
  v20 = &this->m_hProposedDefendUnits[0].m_Memory;
  do
  {
    LODWORD(v19->_vptr_CDOTA_TeamCommander) = 0;
    v21 = v19;
    v19 = (v19 + 24);
    v22 = v21 - m_hProposedDefendUnits;
    *(&v20->m_pMemory + v22) = 0;
    *(&v20->m_nAllocationCount + v22) = 0;
    *(&v20->m_nGrowSize + v22) = 0;
  }
  while ( v19 != &this->m_hProposedRoamUnits );
  this->m_hProposedRoamUnits.m_Size = 0;
  this->m_hProposedRoamUnits.m_Memory.m_pMemory = 0;
  this->m_hProposedRoamUnits.m_Memory.m_nAllocationCount = 0;
  this->m_hProposedRoamUnits.m_Memory.m_nGrowSize = 0;
  this->m_hProposedRoshanUnits.m_Size = 0;
  this->m_hProposedRoshanUnits.m_Memory.m_pMemory = 0;
  this->m_hProposedRoshanUnits.m_Memory.m_nAllocationCount = 0;
  this->m_hProposedRoshanUnits.m_Memory.m_nGrowSize = 0;
  this->m_hRoamTarget.m_Index = -1;
  this->m_ItemPickupInfos.m_Size = 0;
  this->m_ItemPickupInfos.m_Memory.m_pMemory = 0;
  this->m_ItemPickupInfos.m_Memory.m_nAllocationCount = 0;
  this->m_ItemPickupInfos.m_Memory.m_nGrowSize = 0;
  this->m_AllUnits.m_Size = 0;
  this->m_AllUnits.m_Memory.m_pMemory = 0;
  this->m_AllUnits.m_Memory.m_nAllocationCount = 0;
  this->m_AllUnits.m_Memory.m_nGrowSize = 0;
  this->m_AllAlliedUnits.m_Size = 0;
  this->m_AllAlliedUnits.m_Memory.m_pMemory = 0;
  this->m_AllAlliedUnits.m_Memory.m_nAllocationCount = 0;
  this->m_AllAlliedUnits.m_Memory.m_nGrowSize = 0;
  this->m_AllAlliedHeroes.m_Size = 0;
  this->m_AllAlliedHeroes.m_Memory.m_pMemory = 0;
  this->m_AllAlliedHeroes.m_Memory.m_nAllocationCount = 0;
  this->m_AllAlliedHeroes.m_Memory.m_nGrowSize = 0;
  this->m_AllAlliedCreeps.m_Size = 0;
  this->m_AllAlliedCreeps.m_Memory.m_pMemory = 0;
  this->m_AllAlliedCreeps.m_Memory.m_nAllocationCount = 0;
  this->m_AllAlliedCreeps.m_Memory.m_nGrowSize = 0;
  this->m_AllAlliedWards.m_Size = 0;
  this->m_AllAlliedWards.m_Memory.m_pMemory = 0;
  this->m_AllAlliedWards.m_Memory.m_nAllocationCount = 0;
  this->m_AllAlliedWards.m_Memory.m_nGrowSize = 0;
  this->m_AllEnemyUnits.m_Size = 0;
  this->m_AllEnemyUnits.m_Memory.m_pMemory = 0;
  this->m_AllEnemyUnits.m_Memory.m_nAllocationCount = 0;
  this->m_AllEnemyUnits.m_Memory.m_nGrowSize = 0;
  this->m_AllEnemyHeroes.m_Size = 0;
  this->m_AllEnemyHeroes.m_Memory.m_pMemory = 0;
  this->m_AllEnemyHeroes.m_Memory.m_nAllocationCount = 0;
  this->m_AllEnemyHeroes.m_Memory.m_nGrowSize = 0;
  this->m_AllEnemyCreeps.m_Size = 0;
  this->m_AllEnemyCreeps.m_Memory.m_pMemory = 0;
  this->m_AllEnemyCreeps.m_Memory.m_nAllocationCount = 0;
  this->m_AllEnemyCreeps.m_Memory.m_nGrowSize = 0;
  this->m_AllEnemyWards.m_Size = 0;
  this->m_AllEnemyWards.m_Memory.m_pMemory = 0;
  this->m_AllEnemyWards.m_Memory.m_nAllocationCount = 0;
  this->m_AllEnemyWards.m_Memory.m_nGrowSize = 0;
  this->m_AllNeutralCreeps.m_Size = 0;
  this->m_AllNeutralCreeps.m_Memory.m_pMemory = 0;
  this->m_AllNeutralCreeps.m_Memory.m_nAllocationCount = 0;
  this->m_AllNeutralCreeps.m_Memory.m_nGrowSize = 0;
  this->m_ThinkerUnits.m_Size = 0;
  this->m_ThinkerUnits.m_Memory.m_pMemory = 0;
  this->m_ThinkerUnits.m_Memory.m_nAllocationCount = 0;
  this->m_ThinkerUnits.m_Memory.m_nGrowSize = 0;
  this->m_RequestList.m_Size = 0;
  this->m_RequestList.m_Memory.m_pMemory = 0;
  this->m_RequestList.m_Memory.m_nAllocationCount = 0;
  this->m_RequestList.m_Memory.m_nGrowSize = 0;
  this->m_IncomingStuns.m_Size = 0;
  this->m_IncomingStuns.m_Memory.m_pMemory = 0;
  this->m_IncomingStuns.m_Memory.m_nAllocationCount = 0;
  this->m_IncomingStuns.m_Memory.m_nGrowSize = 0;
  this->m_hCouriers.m_Size = 0;
  this->m_hCouriers.m_Memory.m_pMemory = 0;
  this->m_hCouriers.m_Memory.m_nAllocationCount = 0;
  this->m_hCouriers.m_Memory.m_nGrowSize = 0;
  this->m_hDisabledBots.m_Size = 0;
  this->m_hDisabledBots.m_Memory.m_pMemory = 0;
  this->m_hDisabledBots.m_Memory.m_nAllocationCount = 0;
  this->m_hDisabledBots.m_Memory.m_nGrowSize = 0;
  this->m_sScriptDirectory.m_pString = 0;
  this->m_hBotScriptDetailsCallback.m_nCallbackFlags = 0;
  this->m_hBotScriptDetailsCallback._vptr_CCallbackBase = off_42B6930;
  this->m_hBotScriptDetailsCallback.m_hAPICall = 0;
  this->m_hBotScriptDetailsCallback.m_pObj = 0;
  this->m_hBotScriptDetailsCallback.m_Func.__pfn = 0;
  this->m_hBotScriptDetailsCallback.m_Func.__delta = 0;
  this->m_hBotScriptDetailsCallback.m_iCallback = 3401;
}


