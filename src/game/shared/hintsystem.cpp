
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHintSystem::CHintSystem  (line 30, @0x0000000002269e80, libserver.so)  // inlines: CBitVecT, CUtlMemory, CUtlVector, CUtlVectorBase, CVarBitVec, CVarBitVecBase, CVarBitVecT, ClearAll, FreeInts, Purge, RemoveAll, memset, ~CBitVecT, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVec, ~CVarBitVecBase, ~CVarBitVecT
// calls: memset, CHintSystem::Init, _Unwind_Resume, CUtlMemory<CHintSystem::onresethints_t, int>::Purge
void __fastcall CHintSystem::CHintSystem(CHintSystem *const this)
{
  *&this->m_HintHistory.m_numBits = 0;
  this->m_HintHistory.m_pInt = 0;
  *this->m_HintHistory.m_FixedStorage = 0;
  memset(0, 0, 0);
  this->m_RegisteredResetHints.m_Size = 0;
  this->m_RegisteredResetHints.m_Memory.m_pMemory = 0;
  this->m_RegisteredResetHints.m_Memory.m_nAllocationCount = 0;
  this->m_RegisteredResetHints.m_Memory.m_nGrowSize = 0;
  CHintSystem::Init(this, 0, 0, 0);
  this->m_pHintMessageQueue = 0;
  this->m_pHintMessageTimers = 0;
  this->m_flLastHintPlayedAt = 0.0;
}


// CHintSystem::~CHintSystem  (line 41, @0x0000000002269a40, libserver.so)  // inlines: FreeInts, Purge, RemoveAll, ~CBitVecT, ~CHintMessageQueue, ~CHintMessageTimers, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVarBitVec, ~CVarBitVecBase, ~CVarBitVecT
// calls: operator delete, CUtlMemory<CHintSystem::onresethints_t, int>::Purge, CUtlMemory<CHintMessage*, int>::Purge, CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int>::Purge
void __fastcall CHintSystem::~CHintSystem(CHintSystem *const this)
{
  CHintMessageTimers *m_pHintMessageTimers; // r12
  bool v3; // zf
  CHintMessageQueue *m_pHintMessageQueue; // r12

  m_pHintMessageTimers = this->m_pHintMessageTimers;
  if ( m_pHintMessageTimers != 0 )
  {
    v3 = (m_pHintMessageTimers->m_Timers.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pHintMessageTimers->m_Timers.m_Size = 0;
    if ( v3 )
    {
      CUtlMemory<CHintMessageTimers::hintmessagetime_t *,int>::Purge(&m_pHintMessageTimers->m_Timers.m_Memory);
      if ( (m_pHintMessageTimers->m_Timers.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHintMessageTimers::hintmessagetime_t *,int>::Purge(&m_pHintMessageTimers->m_Timers.m_Memory);
    }
    operator delete(m_pHintMessageTimers);
    this->m_pHintMessageTimers = 0;
  }
  m_pHintMessageQueue = this->m_pHintMessageQueue;
  if ( m_pHintMessageQueue != 0 )
  {
    v3 = (m_pHintMessageQueue->m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    m_pHintMessageQueue->m_messages.m_Size = 0;
    m_pHintMessageQueue->_vptr_CHintMessageQueue = &off_404EEE0;
    if ( v3 )
    {
      CUtlMemory<CHintMessage *,int>::Purge(&m_pHintMessageQueue->m_messages.m_Memory);
      if ( (m_pHintMessageQueue->m_messages.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHintMessage *,int>::Purge(&m_pHintMessageQueue->m_messages.m_Memory);
    }
    operator delete(m_pHintMessageQueue);
    this->m_pHintMessageQueue = 0;
  }
  v3 = (this->m_RegisteredResetHints.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_RegisteredResetHints.m_Size = 0;
  if ( v3 )
  {
    CUtlMemory<CHintSystem::onresethints_t,int>::Purge(&this->m_RegisteredResetHints.m_Memory);
    if ( (this->m_RegisteredResetHints.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHintSystem::onresethints_t,int>::Purge(&this->m_RegisteredResetHints.m_Memory);
  }
  if ( this->m_HintHistory.m_numInts > 1u )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_HintHistory.m_pInt);
  this->m_HintHistory.m_pInt = 0;
}


// CHintSystem::Init  (line 59, @0x0000000002269b80, libserver.so)  // inlines: AllocInts, CHintMessageQueue, CHintMessageTimers, CUtlMemory, CUtlVector, CUtlVectorBase, CalcNumIntsForBits, ClearAll, FreeInts, GetEndMask, GetNumBits, GetNumDWords, ReallocInts, Resize, V_memcpy, memcpy, memset
// calls: memset, operator new, memcpy
// callers: CHintSystem::CHintSystem
// globals: GetEndMask(int)::bitStringEndMasks
void __fastcall CHintSystem::Init(
        CHintSystem *const this,
        CBasePlayer *pPlayer,
        int iMaxHintTypes,
        const char **pszHintStrings)
{
  int v6; // r12d
  __int64 m_numInts; // rax
  int v9; // r12d
  CHintSystem *m_pInt; // r13
  uint32 *v11; // rax
  unsigned __int16 v12; // ax
  bool v13; // zf
  CHintMessageQueue *v14; // rax
  CBasePlayer *m_pPlayer; // rdx
  CHintMessageTimers *v16; // rax
  CHintMessageQueue *m_pHintMessageQueue; // rdx
  unsigned __int16 m_numBits; // dx
  uint32 *v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rdi
  uint32 *v22; // rax
  unsigned int *m_FixedStorage; // [rsp+8h] [rbp-38h]

  v6 = iMaxHintTypes + 62;
  this->m_pPlayer = pPlayer;
  if ( iMaxHintTypes + 31 >= 0 )
    v6 = iMaxHintTypes + 31;
  m_numInts = this->m_HintHistory.m_numInts;
  this->m_bShowHints = 1;
  v9 = v6 >> 5;
  if ( v9 == m_numInts )
  {
    m_numBits = this->m_HintHistory.m_numBits;
    m_pInt = this->m_HintHistory.m_pInt;
    if ( iMaxHintTypes >= m_numBits && m_pInt != 0 )
    {
      *(m_pInt + m_numInts - 1) &= GetEndMask(int)::bitStringEndMasks[m_numBits & 0x1F];
      LOWORD(v9) = this->m_HintHistory.m_numInts;
      m_pInt = this->m_HintHistory.m_pInt;
    }
    else
    {
      LOWORD(v9) = m_numInts;
    }
  }
  else
  {
    m_pInt = this->m_HintHistory.m_pInt;
    if ( m_pInt != 0 )
    {
      if ( v9 != 0 )
      {
        if ( m_pInt == this->m_HintHistory.m_FixedStorage )
        {
          if ( v9 > 1 )
          {
            v22 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
            this->m_HintHistory.m_pInt = v22;
            *v22 = m_pInt->m_pPlayer;
            m_pInt = this->m_HintHistory.m_pInt;
          }
        }
        else if ( v9 <= 1 )
        {
          m_FixedStorage = this->m_HintHistory.m_FixedStorage;
          memcpy(this->m_HintHistory.m_FixedStorage, m_pInt, 4LL * v9);
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_HintHistory.m_pInt);
          this->m_HintHistory.m_pInt = m_FixedStorage;
          m_pInt = m_FixedStorage;
        }
        else
        {
          v11 = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_HintHistory.m_pInt, 4LL * v9);
          this->m_HintHistory.m_pInt = v11;
          m_pInt = v11;
        }
      }
      else
      {
        if ( m_numInts > 1u )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_HintHistory.m_pInt);
        this->m_HintHistory.m_pInt = 0;
        m_pInt = 0;
      }
      v12 = this->m_HintHistory.m_numBits;
      if ( iMaxHintTypes >= v12 )
      {
        *(m_pInt + this->m_HintHistory.m_numInts - 1) &= GetEndMask(int)::bitStringEndMasks[v12 & 0x1F];
        memset(
          &this->m_HintHistory.m_pInt[this->m_HintHistory.m_numInts],
          0,
          4LL * (v9 - this->m_HintHistory.m_numInts));
        m_pInt = this->m_HintHistory.m_pInt;
      }
      this->m_HintHistory.m_numInts = v9;
    }
    else if ( v9 != 0 )
    {
      if ( v9 <= 1 )
      {
        v21 = this->m_HintHistory.m_FixedStorage;
        this->m_HintHistory.m_numInts = v9;
        v20 = v9;
        this->m_HintHistory.m_pInt = v21;
      }
      else
      {
        v19 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v9);
        this->m_HintHistory.m_numInts = v9;
        v20 = v9;
        this->m_HintHistory.m_pInt = v19;
        if ( v19 == 0 )
          goto LABEL_12;
        v21 = v19;
      }
      memset(v21, 0, 4 * v20);
      LOWORD(v9) = this->m_HintHistory.m_numInts;
      m_pInt = this->m_HintHistory.m_pInt;
    }
    else
    {
      LOWORD(v9) = 0;
      this->m_HintHistory.m_numInts = 0;
    }
  }
LABEL_12:
  this->m_HintHistory.m_numBits = iMaxHintTypes;
  memset(m_pInt, 0, 4LL * v9);
  v13 = this->m_pPlayer == 0;
  this->m_pszHintMessages = pszHintStrings;
  if ( !v13 )
  {
    v14 = operator new(0x30u);
    m_pPlayer = this->m_pPlayer;
    v14->_vptr_CHintMessageQueue = &off_404EEE0;
    v14->m_messages.m_Size = 0;
    v14->m_messages.m_Memory.m_pMemory = 0;
    v14->m_pPlayer = m_pPlayer;
    v14->m_messages.m_Memory.m_nAllocationCount = 0;
    v14->m_messages.m_Memory.m_nGrowSize = 0;
    this->m_pHintMessageQueue = v14;
    v16 = operator new(0x28u);
    m_pHintMessageQueue = this->m_pHintMessageQueue;
    v16->m_Timers.m_Size = 0;
    v16->m_Timers.m_Memory.m_pMemory = 0;
    v16->m_Timers.m_Memory.m_nAllocationCount = 0;
    v16->m_Timers.m_Memory.m_nGrowSize = 0;
    v16->m_pHintSystem = this;
    v16->m_pQueue = m_pHintMessageQueue;
    this->m_pHintMessageTimers = v16;
  }
}


// CHintSystem::Update  (line 79, @0x0000000002277450, libserver.so)
// calls: CHintMessageQueue::Update, CHintMessageTimers::Update
// callers: CBasePlayer::PreThink
void __fastcall CHintSystem::Update(CHintSystem *const this)
{
  CHintMessageQueue *m_pHintMessageQueue; // rdi
  CHintMessageTimers *m_pHintMessageTimers; // rdi

  m_pHintMessageQueue = this->m_pHintMessageQueue;
  if ( m_pHintMessageQueue != 0 )
    CHintMessageQueue::Update(m_pHintMessageQueue);
  m_pHintMessageTimers = this->m_pHintMessageTimers;
  if ( m_pHintMessageTimers != 0 )
    CHintMessageTimers::Update(m_pHintMessageTimers);
}


// CHintSystem::HintMessage  (line 96, @0x00000000022761c0, libserver.so)  // inlines: Bitvec_Set, HasPlayedHint, PlayedAHint, Set, curtime, operator uint32
// calls: CHintSystem::HintMessage
// callers: CHintMessageTimers::Update
bool __fastcall CHintSystem::HintMessage(CHintSystem *const this, int hint, bool bForce, bool bOnlyIfClear)
{
  int v5; // r12d
  __int64 v6; // r14
  CGlobalVars *v7; // r13
  FnGlobalVarsWarningFunc v8; // rax
  float v9; // xmm0_4
  const char **m_pszHintMessages; // rax
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  bool v15; // [rsp+8h] [rbp-28h]
  int hinta; // [rsp+Ch] [rbp-24h]
  int hintb; // [rsp+Ch] [rbp-24h]

  if ( bOnlyIfClear )
  {
    m_flCurrentTime = 0.0;
    v13 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v15 = bForce;
          hintb = hint;
          (m_pfnWarningFunc)(1, 0.0);
          bForce = v15;
          hint = hintb;
        }
      }
      m_flCurrentTime = v13->m_flCurrentTime;
    }
    if ( (m_flCurrentTime - this->m_flLastHintPlayedAt) < 11.0 )
      return 0;
  }
  if ( !bForce && ((1 << hint) & this->m_HintHistory.m_pInt[hint >> 5]) != 0 )
    return 0;
  v5 = 1 << hint;
  v6 = hint >> 5;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v8 = gpGlobals->m_pfnWarningFunc;
      if ( v8 != 0 )
      {
        hinta = hint;
        v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        hint = hinta;
      }
    }
    v9 = v7->m_flCurrentTime;
  }
  else
  {
    v9 = 0.0;
  }
  m_pszHintMessages = this->m_pszHintMessages;
  this->m_flLastHintPlayedAt = v9;
  CHintSystem::HintMessage(this, m_pszHintMessages[hint]);
  this->m_HintHistory.m_pInt[v6] |= v5;
  return 1;
}


// CHintSystem::HintMessage  (line 121, @0x0000000002276170, libserver.so)
// calls: CHintMessageQueue::AddMessage
// callers: CHintSystem::HintMessage
void __fastcall CHintSystem::HintMessage(CHintSystem *const this, const char *pMessage)
{
  CHintMessageQueue *m_pHintMessageQueue; // rdi

  if ( (*(this->m_pPlayer->_vptr_IHandleEntity + 100))(this->m_pPlayer) != 0 )
  {
    m_pHintMessageQueue = this->m_pHintMessageQueue;
    if ( m_pHintMessageQueue != 0 && this->m_bShowHints )
      CHintMessageQueue::AddMessage(m_pHintMessageQueue, pMessage, 6.0, 0);
  }
}


// CHintSystem::ResetHints  (line 152, @0x00000000022766d0, libserver.so)  // inlines: operator[]
// calls: CHintMessageTimers::Reset, CHintSystem::ReAddHintTimerIfNotDisplayed, CHintMessageQueue::Reset
// callers: CBasePlayer::SetOrResetInitialState
void __fastcall CHintSystem::ResetHints(CHintSystem *const this)
{
  CHintMessageTimers *m_pHintMessageTimers; // rdi
  float v3; // xmm1_4
  __int64 v4; // r13
  int i; // r12d
  CHintSystem::onresethints_t *v6; // rax
  CHintMessageQueue *m_pHintMessageQueue; // rdi

  m_pHintMessageTimers = this->m_pHintMessageTimers;
  if ( m_pHintMessageTimers != 0 )
  {
    CHintMessageTimers::Reset(m_pHintMessageTimers);
    v4 = 0;
    for ( i = 0; this->m_RegisteredResetHints.m_Size > i; ++i )
    {
      v6 = &this->m_RegisteredResetHints.m_Memory.m_pMemory[v4++];
      CHintSystem::ReAddHintTimerIfNotDisplayed(this, v6->iHintID, v6->flTimer, v3);
    }
    m_pHintMessageQueue = this->m_pHintMessageQueue;
    if ( m_pHintMessageQueue != 0 )
      CHintMessageQueue::Reset(m_pHintMessageQueue);
  }
}


// CHintSystem::RegisterHintTimer  (line 176, @0x0000000002276750, libserver.so)  // inlines: AddToTail, CopyConstruct<CHintSystem::onresethints_t>, Element, GrowMemory, operator[]
// calls: CUtlMemory<CHintSystem::onresethints_t, int>::Grow
void __fastcall CHintSystem::RegisterHintTimer(
        CHintSystem *const this,
        int iHintID,
        float flTimerDuration,
        bool bOnlyIfClear,
        HintTimerCallback pfnCallback)
{
  __int64 m_Size; // r12
  int v8; // eax
  CHintSystem::onresethints_t *v9; // rax
  bool (*pfnCallbacka)(CBasePlayer *); // [rsp+0h] [rbp-30h]
  bool v11; // [rsp+8h] [rbp-28h]
  float flTimerDurationa; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_RegisteredResetHints.m_Size;
  v8 = this->m_RegisteredResetHints.m_Size;
  if ( m_Size == this->m_RegisteredResetHints.m_Memory.m_nAllocationCount )
  {
    pfnCallbacka = pfnCallback;
    v11 = bOnlyIfClear;
    flTimerDurationa = flTimerDuration;
    CUtlMemory<CHintSystem::onresethints_t,int>::Grow(&this->m_RegisteredResetHints.m_Memory, 1);
    v8 = this->m_RegisteredResetHints.m_Size;
    pfnCallback = pfnCallbacka;
    bOnlyIfClear = v11;
    flTimerDuration = flTimerDurationa;
  }
  this->m_RegisteredResetHints.m_Size = v8 + 1;
  v9 = &this->m_RegisteredResetHints.m_Memory.m_pMemory[m_Size];
  if ( v9 != 0 )
  {
    v9->iHintID = iHintID;
    v9->flTimer = flTimerDuration;
    v9->bOnlyIfClear = bOnlyIfClear;
    v9->pfnCallback = pfnCallback;
  }
}


// CHintSystem::ReAddHintTimerIfNotDisplayed  (line 192, @0x0000000002276690, libserver.so)  // inlines: operator uint32
// calls: CHintMessageTimers::AddTimer
// callers: CHintSystem::ResetHints
void __fastcall CHintSystem::ReAddHintTimerIfNotDisplayed(
        CHintSystem *const this,
        int iHintID,
        float a3,
        float flTimerDuration)
{
  if ( ((1 << iHintID) & this->m_HintHistory.m_pInt[iHintID >> 5]) == 0 )
    CHintMessageTimers::AddTimer(this->m_pHintMessageTimers, iHintID, a3, 6.0, 0);
}


// CHintSystem::StartHintTimer  (line 204, @0x0000000002269f60, libserver.so)
// calls: CHintMessageTimers::StartTimer
void __fastcall CHintSystem::StartHintTimer(CHintSystem *const this, int iHintID)
{
  CHintMessageTimers::StartTimer(this->m_pHintMessageTimers, iHintID);
}


// CHintSystem::StopHintTimer  (line 215, @0x0000000002269f70, libserver.so)
// calls: CHintMessageTimers::StopTimer
void __fastcall CHintSystem::StopHintTimer(CHintSystem *const this, int iHintID)
{
  CHintMessageTimers::StopTimer(this->m_pHintMessageTimers, iHintID);
}


// CHintSystem::ResetHintTimers  (line 226, @0x0000000002269f80, libserver.so)
// calls: CHintMessageTimers::Reset
// callers: CBasePlayer::Event_Killed
void __fastcall CHintSystem::ResetHintTimers(CHintSystem *const this)
{
  CHintMessageTimers::Reset(this->m_pHintMessageTimers);
}


// CHintSystem::RemoveHintTimer  (line 236, @0x0000000002269f90, libserver.so)  // inlines: Bitvec_Set, Set
// calls: CHintMessageTimers::RemoveTimer
void __fastcall CHintSystem::RemoveHintTimer(CHintSystem *const this, int iHintID)
{
  CHintMessageTimers::RemoveTimer(this->m_pHintMessageTimers, iHintID);
  this->m_HintHistory.m_pInt[iHintID >> 5] |= 1 << iHintID;
}


// CHintSystem::TimerShouldFire  (line 251, @0x0000000002269fd0, libserver.so)  // inlines: HintIsCurrentlyVisible, curtime, operator[]
// callers: CHintMessageTimers::Update
bool __fastcall CHintSystem::TimerShouldFire(CHintSystem *const this, int iHintID)
{
  double v2; // xmm0_8
  __int64 v4; // rbx
  int v5; // r12d
  CHintSystem::onresethints_t *m_pMemory; // rdx
  double v7; // xmm1_8
  CHintSystem::onresethints_t *v8; // rax
  bool (__fastcall *pfnCallback)(CBasePlayer *, double, double); // rax
  CGlobalVars *v11; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int v13; // [rsp+8h] [rbp-28h]
  int v14; // [rsp+Ch] [rbp-24h]

  if ( this->m_RegisteredResetHints.m_Size <= 0 )
    return 1;
  v4 = 0;
  v5 = 0;
  m_pMemory = this->m_RegisteredResetHints.m_Memory.m_pMemory;
  *&v7 = 1093664768;
  while ( 1 )
  {
    v8 = &m_pMemory[v4];
    if ( m_pMemory[v4].iHintID == iHintID )
    {
      if ( v8->bOnlyIfClear )
        break;
LABEL_6:
      pfnCallback = v8->pfnCallback;
      if ( pfnCallback != 0 )
        return pfnCallback(this->m_pPlayer, v2, v7);
    }
    ++v5;
    ++v4;
    if ( this->m_RegisteredResetHints.m_Size <= v5 )
      return 1;
  }
  v2 = 0.0;
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v13 = LODWORD(v7);
        v14 = iHintID;
        (m_pfnWarningFunc)(1, 0.0);
        *&v7 = v13;
        iHintID = v14;
      }
    }
    *&v2 = LODWORD(v11->m_flCurrentTime);
  }
  *&v2 = *&v2 - this->m_flLastHintPlayedAt;
  if ( *&v7 <= *&v2 )
  {
    m_pMemory = this->m_RegisteredResetHints.m_Memory.m_pMemory;
    v8 = &m_pMemory[v4];
    goto LABEL_6;
  }
  return 0;
}


// CHintSystem::ShouldShowHints  (line 271, @0x000000000226a0c0, libserver.so)
bool __fastcall CHintSystem::ShouldShowHints(CHintSystem *const this)
{
  return this->m_bShowHints;
}


// CHintSystem::PlayedAHint  (line 283, @0x000000000226a0d0, libserver.so)  // inlines: curtime
void __fastcall CHintSystem::PlayedAHint(CHintSystem *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  this->m_flLastHintPlayedAt = m_flCurrentTime;
}


// CHintSystem::HasPlayedHint  (line 291, @0x000000000226a130, libserver.so)  // inlines: operator uint32
bool __fastcall CHintSystem::HasPlayedHint(CHintSystem *const this, int iHintID)
{
  return ((1 << iHintID) & this->m_HintHistory.m_pInt[iHintID >> 5]) != 0;
}


// CHintSystem::SetHintPlayed  (line 301, @0x000000000226a160, libserver.so)  // inlines: Bitvec_Set, Set
void __fastcall CHintSystem::SetHintPlayed(CHintSystem *const this, int iHintID)
{
  this->m_HintHistory.m_pInt[iHintID >> 5] |= 1 << iHintID;
}


// HintClear  (line 311, @0x0000000002256350, libserver.so)  // inlines: ClearAll, ClearHintHistory, memset
// calls: UTIL_GetCommandClient, memset
void __fastcall HintClear(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v3; // rbx
  __int64 v4; // rax

  CommandClient = UTIL_GetCommandClient();
  v3 = CommandClient;
  if ( CommandClient != 0 && (*(CommandClient->_vptr_IHandleEntity + 505))(CommandClient) != 0 )
  {
    v4 = (*(v3->_vptr_IHandleEntity + 505))(v3);
    memset(*(v4 + 24), 0, 4LL * *(v4 + 18));
  }
}


