
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CHintMessage::CHintMessage  (line 27, @0x000000000226f510, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CloneString, CopyConstruct<char*>, Element, GrowMemory, Purge, RemoveAll, V_memcpy, V_strlen, memcpy, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: strlen, memcpy, CUtlMemory<char*, int>::Grow, _Unwind_Resume, CUtlMemory<char*, int>::Purge
// callers: CHintMessageQueue::AddMessage
void __fastcall CHintMessage::CHintMessage(
        CHintMessage *const this,
        const char *hintString,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *args,
        float duration)
{
  __int64 v6; // r12
  char *v7; // rax
  char *v8; // r14
  __int64 m_Size; // r13
  int v10; // eax
  char **v11; // rax
  const char **m_pMemory; // rax
  const char *v13; // r13
  CUtlVectorBase<char*,CUtlMemory<char*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-48h]
  int v15; // [rsp+14h] [rbp-3Ch]
  size_t n; // [rsp+18h] [rbp-38h]

  this->_vptr_CHintMessage = &off_404EEC0;
  this->m_args.m_Size = 0;
  this->m_args.m_Memory.m_pMemory = 0;
  this->m_args.m_Memory.m_nAllocationCount = 0;
  this->m_args.m_Memory.m_nGrowSize = 0;
  this->m_hintString = hintString;
  this->m_duration = duration;
  if ( args != 0 && args->m_Size > 0 )
  {
    v6 = 0;
    p_m_Memory = &this->m_args.m_Memory;
    do
    {
      m_pMemory = args->m_Memory.m_pMemory;
      v13 = m_pMemory[v6];
      if ( v13 != 0 )
      {
        v15 = strlen(m_pMemory[v6]) + 1;
        n = v15;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, v15);
      }
      else
      {
        n = 1;
        v15 = 1;
        v7 = (**g_pMemAlloc)(g_pMemAlloc, 1);
      }
      v8 = v7;
      if ( v15 < 0 )
        __debugbreak();
      memcpy(v7, v13, n);
      m_Size = this->m_args.m_Size;
      v10 = this->m_args.m_Size;
      if ( m_Size == this->m_args.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<char *,int>::Grow(p_m_Memory, 1);
        v10 = this->m_args.m_Size;
      }
      this->m_args.m_Size = v10 + 1;
      v11 = &this->m_args.m_Memory.m_pMemory[m_Size];
      if ( v11 != 0 )
        *v11 = v8;
      ++v6;
    }
    while ( v6 < args->m_Size );
  }
}


// CHintMessage::~CHintMessage  (line 42, @0x00000000022695e0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete [], CUtlMemory<char*, int>::Purge
// callers: CHintMessageQueue::Reset, CHintMessageQueue::Update
void __fastcall CHintMessage::~CHintMessage(CHintMessage *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  char *v4; // rdi
  bool v5; // zf

  v2 = 0;
  v3 = 0;
  for ( this->_vptr_CHintMessage = &off_404EEC0; this->m_args.m_Size > v3; ++v2 )
  {
    v4 = this->m_args.m_Memory.m_pMemory[v2];
    if ( v4 != 0 )
      operator delete[](v4);
    ++v3;
  }
  v5 = (this->m_args.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_args.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<char *,int>::Purge(&this->m_args.m_Memory);
    if ( (this->m_args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char *,int>::Purge(&this->m_args.m_Memory);
  }
}


// CHintMessage::IsEquivalent  (line 52, @0x0000000002269680, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: strcmp
// callers: CHintMessageQueue::AddMessage
bool __fastcall CHintMessage::IsEquivalent(
        const CHintMessage *const this,
        const char *hintString,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *args)
{
  const char *m_hintString; // rsi
  int v7; // eax
  bool v8; // cl
  int m_Size; // r12d
  const char **m_pMemory; // r14
  char **v12; // r13
  __int64 v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi

  m_hintString = this->m_hintString;
  if ( m_hintString != hintString )
  {
    v7 = strcmp(hintString, m_hintString);
    v8 = 0;
    if ( v7 != 0 )
      return v8;
  }
  if ( args == 0 )
    return this->m_args.m_Size == 0;
  m_Size = args->m_Size;
  v8 = 0;
  if ( args->m_Size != this->m_args.m_Size || m_Size <= 0 )
    return v8;
  m_pMemory = args->m_Memory.m_pMemory;
  v12 = this->m_args.m_Memory.m_pMemory;
  v13 = 0;
  do
  {
    v14 = v12[v13];
    v15 = m_pMemory[v13];
    if ( v14 != v15 && strcmp(v15, v14) != 0 )
      break;
    ++v13;
  }
  while ( m_Size > v13 );
  return 0;
}


// CHintMessage::Send  (line 79, @0x00000000022771c0, libserver.so)  // inlines: CEventPosterBase, CNetMessagePB, CSingleUserRecipientFilter, CUserMessageHintText_t, CUserMessagePB, FindGameEvent<CUserMessageHintText_t>, FindOrCreateGameEvent<CUserMessageHintText_t>, PostEvent<CUserMessageHintText_t>, assign, length, set_has_message, set_message, ~CEventPosterBase, ~CNetMessagePB, ~CSingleUserRecipientFilter, ~CUserMessageHintText_t, ~CUserMessagePB
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CRecipientFilter::MakeReliable, CUserMessageHintText::CUserMessageHintText, strlen, std::string::assign(char const*,ulong), CUserMessageHintText::~CUserMessageHintText, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CEventPosterBase<CUserMessageHintText_t, 255>::~CEventPosterBase, _Unwind_Resume
// callers: CHintMessageQueue::Update
// globals: IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent
void __fastcall CHintMessage::Send(CHintMessage *const this, CBasePlayer *client)
{
  const char *m_hintString; // r13
  size_t v5; // rax
  IGameEventSystem *v6; // r13
  void (__fastcall *v7)(IGameEventSystem *, _QWORD, _QWORD, CSingleUserRecipientFilter *, __int64, _QWORD *, __int64); // r14
  __int64 v8; // [rsp+10h] [rbp-1B0h]
  unsigned int v9; // [rsp+1Ch] [rbp-1A4h]
  _QWORD v10[2]; // [rsp+28h] [rbp-198h] BYREF
  int v11; // [rsp+38h] [rbp-188h]
  std::string *v12; // [rsp+40h] [rbp-180h]
  unsigned int v13; // [rsp+48h] [rbp-178h]
  CSingleUserRecipientFilter user; // [rsp+50h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+188h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( client != 0 )
  {
    CRecipientFilter::CRecipientFilter(&user);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::AddRecipient(&user, client);
    CRecipientFilter::MakeReliable(&user);
    CUserMessageHintText::CUserMessageHintText(v10);
    m_hintString = this->m_hintString;
    v13 = 0;
    v11 |= 1u;
    v10[0] = off_404F090;
    v5 = strlen(m_hintString);
    std::string::assign(v12, m_hintString, v5);
    v6 = g_pGameEventSystem;
    v8 = IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent;
    v9 = v13;
    v7 = *(*g_pGameEventSystem + 128LL);
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CUserMessageHintText_t>(bool)::s_hEvent);
    v7(v6, v9, 0, &user, v8, v10, 32);
    v10[0] = &off_404EF10;
    CUserMessageHintText::~CUserMessageHintText(v10);
    user._vptr_IRecipientFilter = &off_3FCB0D0;
    CRecipientFilter::~CRecipientFilter(&user);
  }
}


// CHintMessageQueue::CHintMessageQueue  (line 98, @0x0000000002269720, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CHintMessageQueue::CHintMessageQueue(CHintMessageQueue *const this, CBasePlayer *pPlayer)
{
  this->_vptr_CHintMessageQueue = &off_404EEE0;
  this->m_messages.m_Size = 0;
  this->m_messages.m_Memory.m_pMemory = 0;
  this->m_messages.m_Memory.m_nAllocationCount = 0;
  this->m_messages.m_Memory.m_nGrowSize = 0;
  this->m_pPlayer = pPlayer;
}


// CHintMessageQueue::Reset  (line 104, @0x0000000002269760, libserver.so)  // inlines: RemoveAll
// calls: CHintMessage::~CHintMessage, operator delete
// callers: CHintSystem::ResetHints
void __fastcall CHintMessageQueue::Reset(CHintMessageQueue *const this)
{
  __int64 v2; // r13
  int v3; // r12d
  int m_Size; // r8d
  CHintMessage **m_pMemory; // rax
  CHintMessage *v6; // rbx

  v2 = 0;
  v3 = 0;
  m_Size = this->m_messages.m_Size;
  this->m_tmMessageEnd = 0.0;
  if ( m_Size > 0 )
  {
    do
    {
      m_pMemory = this->m_messages.m_Memory.m_pMemory;
      v6 = m_pMemory[v2];
      if ( v6 != 0 )
      {
        CHintMessage::~CHintMessage(m_pMemory[v2]);
        operator delete(v6);
      }
      ++v3;
      ++v2;
    }
    while ( this->m_messages.m_Size > v3 );
  }
  this->m_messages.m_Size = 0;
}


// CHintMessageQueue::Update  (line 115, @0x0000000002277380, libserver.so)  // inlines: Remove, ShiftElementsLeft, V_memmove, curtime, memmove
// calls: CHintMessage::Send, CHintMessage::~CHintMessage, operator delete, memmove
// callers: CHintSystem::Update
void __fastcall CHintMessageQueue::Update(CHintMessageQueue *const this)
{
  CBasePlayer *m_pPlayer; // rsi
  float m_flCurrentTime; // xmm0_4
  CHintMessage *v4; // r12
  CGlobalVars *v5; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v7; // edx

  m_pPlayer = this->m_pPlayer;
  if ( m_pPlayer != 0 && this->m_messages.m_Size != 0 )
  {
    m_flCurrentTime = 0.0;
    v4 = *this->m_messages.m_Memory.m_pMemory;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          (m_pfnWarningFunc)(1, 0.0);
          m_pPlayer = this->m_pPlayer;
        }
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    this->m_tmMessageEnd = m_flCurrentTime + v4->m_duration;
    CHintMessage::Send(v4, m_pPlayer);
    CHintMessage::~CHintMessage(v4);
    operator delete(v4);
    v7 = this->m_messages.m_Size - 1;
    if ( v7 > 0 )
    {
      memmove(this->m_messages.m_Memory.m_pMemory, this->m_messages.m_Memory.m_pMemory + 1, 8LL * v7);
      v7 = this->m_messages.m_Size - 1;
    }
    this->m_messages.m_Size = v7;
  }
}


// CHintMessageQueue::AddMessage  (line 136, @0x0000000002276080, libserver.so)  // inlines: AddToTail, CopyConstruct<CHintMessage*>, Element, GrowMemory, operator[]
// calls: CHintMessage::IsEquivalent, operator new, CHintMessage::CHintMessage, CUtlMemory<CHintMessage*, int>::Grow, operator delete, _Unwind_Resume
// callers: CHintSystem::HintMessage
__int64 __fastcall CHintMessageQueue::AddMessage(
        CHintMessageQueue *const this,
        const char *message,
        float duration,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *args)
{
  int m_Size; // eax
  CHintMessage **m_pMemory; // r15
  __int64 v9; // r13
  CHintMessage *v11; // r13
  __int64 v12; // rbx
  int v13; // eax
  CHintMessage **v14; // rax

  if ( this->m_pPlayer == 0 )
    return 0;
  m_Size = this->m_messages.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_7:
    v11 = operator new(0x30u);
    CHintMessage::CHintMessage(v11, message, args, duration);
    v12 = this->m_messages.m_Size;
    v13 = this->m_messages.m_Size;
    if ( v12 == this->m_messages.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHintMessage *,int>::Grow(&this->m_messages.m_Memory, 1);
      v13 = this->m_messages.m_Size;
    }
    this->m_messages.m_Size = v13 + 1;
    v14 = &this->m_messages.m_Memory.m_pMemory[v12];
    if ( v14 != 0 )
      *v14 = v11;
  }
  else
  {
    m_pMemory = this->m_messages.m_Memory.m_pMemory;
    v9 = &m_pMemory[(m_Size - 1) + 1];
    while ( !CHintMessage::IsEquivalent(*m_pMemory, message, args) )
    {
      if ( ++m_pMemory == v9 )
        goto LABEL_7;
    }
  }
  return 1;
}


// CHintMessageTimers::CHintMessageTimers  (line 162, @0x00000000022697d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
void __fastcall CHintMessageTimers::CHintMessageTimers(
        CHintMessageTimers *const this,
        CHintSystem *pSystem,
        CHintMessageQueue *pQueue)
{
  this->m_Timers.m_Size = 0;
  this->m_Timers.m_Memory.m_pMemory = 0;
  this->m_Timers.m_Memory.m_nAllocationCount = 0;
  this->m_Timers.m_Memory.m_nGrowSize = 0;
  this->m_pHintSystem = pSystem;
  this->m_pQueue = pQueue;
}


// CHintMessageTimers::Reset  (line 171, @0x0000000002269800, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~hintmessagetime_t
// calls: operator delete [], operator delete, CUtlMemory<char*, int>::Purge
// callers: CHintSystem::ResetHintTimers, CHintSystem::ResetHints
void __fastcall CHintMessageTimers::Reset(CHintMessageTimers *const this)
{
  __int64 v2; // r14
  CHintMessageTimers::hintmessagetime_t *v3; // r13
  __int64 v4; // r12
  int j; // ebx
  char *v6; // rdi
  bool v7; // zf
  int i; // [rsp+Ch] [rbp-34h]

  v2 = 0;
  for ( i = 0; this->m_Timers.m_Size > i; ++v2 )
  {
    v3 = this->m_Timers.m_Memory.m_pMemory[v2];
    if ( v3 != 0 )
    {
      v4 = 0;
      for ( j = 0; j < v3->args.m_Size; ++v4 )
      {
        v6 = v3->args.m_Memory.m_pMemory[v4];
        if ( v6 != 0 )
          operator delete[](v6);
        ++j;
      }
      v7 = (v3->args.m_Memory.m_nGrowSize & 0xC0000000) == 0;
      v3->args.m_Size = 0;
      if ( v7 )
      {
        CUtlMemory<char *,int>::Purge(&v3->args.m_Memory);
        if ( (v3->args.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<char *,int>::Purge(&v3->args.m_Memory);
      }
      operator delete(v3);
    }
    ++i;
  }
  this->m_Timers.m_Size = 0;
}


// CHintMessageTimers::Update  (line 183, @0x0000000002276310, libserver.so)  // inlines: Expired, Start, curtime
// calls: CHintSystem::TimerShouldFire, CHintSystem::HintMessage, CHintMessageTimers::RemoveTimer
// callers: CHintSystem::Update
void __fastcall CHintMessageTimers::Update(CHintMessageTimers *const this)
{
  __int64 v2; // rbx
  int v3; // r12d
  CHintMessageTimers::hintmessagetime_t *v4; // r15
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v6; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  float v8; // xmm1_4
  CGlobalVars *v9; // r14
  CHintMessageTimers::hintmessagetime_t *v10; // r15
  float m_interval; // xmm0_4
  void (__fastcall *v12)(__int64, float, double); // rax
  CGlobalVars *v13; // [rsp+8h] [rbp-38h]
  float v14; // [rsp+8h] [rbp-38h]

  if ( this->m_pHintSystem != 0 && this->m_Timers.m_Size > 0 )
  {
    v2 = 0;
    v3 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = this->m_Timers.m_Memory.m_pMemory[v2];
        if ( v4->timer.m_fIsRunning )
        {
          m_flCurrentTime = 0.0;
          v6 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
              {
                v13 = gpGlobals;
                (m_pfnWarningFunc)(1, 0.0);
                v6 = v13;
              }
            }
            m_flCurrentTime = v6->m_flCurrentTime;
          }
          if ( (m_flCurrentTime - v4->timer.m_next) > -0.001 )
            break;
        }
        ++v3;
        ++v2;
        if ( this->m_Timers.m_Size <= v3 )
          return;
      }
      if ( CHintSystem::TimerShouldFire(this->m_pHintSystem, this->m_Timers.m_Memory.m_pMemory[v2]->iHintID) )
        break;
      v8 = 0.0;
      v9 = gpGlobals;
      v10 = this->m_Timers.m_Memory.m_pMemory[v2];
      m_interval = v10->timer.m_interval;
      v10->timer.m_fIsRunning = 1;
      if ( v9 != 0 )
      {
        if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
        {
          v12 = v9->m_pfnWarningFunc;
          if ( v12 != 0 )
          {
            v14 = m_interval;
            v12(1, m_interval, 0.0);
            m_interval = v14;
          }
        }
        v8 = v9->m_flCurrentTime;
      }
      ++v3;
      ++v2;
      v10->timer.m_next = m_interval + v8;
      if ( this->m_Timers.m_Size <= v3 )
        return;
    }
    CHintSystem::HintMessage(this->m_pHintSystem, this->m_Timers.m_Memory.m_pMemory[v2]->iHintID, 0, 0);
    CHintMessageTimers::RemoveTimer(this, this->m_Timers.m_Memory.m_pMemory[v2]->iHintID);
  }
}


// CHintMessageTimers::AddTimer  (line 218, @0x0000000002276490, libserver.so)  // inlines: AddToTail, CSimpleSimTimer, CStopwatch, CStopwatchBase, CUtlMemory, CUtlVector, CUtlVectorBase, CloneString, CopyConstruct<CHintMessageTimers::hintmessagetime_t*>, CopyConstruct<char*>, Element, GrowMemory, Set, V_memcpy, V_strlen, hintmessagetime_t, memcpy, operator[]
// calls: CHintMessageTimers::GetTimerIndex, operator new, strlen, memcpy, CUtlMemory<char*, int>::Grow, CUtlMemory<CHintMessageTimers::hintmessagetime_t*, int>::Grow
// callers: CHintSystem::ReAddHintTimerIfNotDisplayed
void __fastcall CHintMessageTimers::AddTimer(
        CHintMessageTimers *const this,
        int iHintID,
        float timer_duration,
        float message_duration,
        CUtlVector<char const*,CUtlMemory<char const*,int> > *args)
{
  int TimerIndex; // eax
  float v8; // xmm0_4
  CHintMessageTimers::hintmessagetime_t *v9; // rax
  CHintMessageTimers::hintmessagetime_t *v10; // r15
  __int64 v11; // rbx
  void *v12; // r13
  size_t v13; // rdx
  int m_Size; // r14d
  int v15; // eax
  char **v16; // rdx
  const char **m_pMemory; // rax
  const char *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  CHintMessageTimers::hintmessagetime_t **v21; // rax
  CUtlMemory<char*,int> *p_m_Memory; // [rsp+0h] [rbp-50h]
  float timer_durationb; // [rsp+14h] [rbp-3Ch]
  int timer_durationc; // [rsp+14h] [rbp-3Ch]
  float message_durationb; // [rsp+18h] [rbp-38h]

  TimerIndex = CHintMessageTimers::GetTimerIndex(this, iHintID);
  v8 = timer_duration;
  if ( TimerIndex == -1 )
  {
    timer_durationb = message_duration;
    message_durationb = v8;
    v9 = operator new(0x40u);
    v10 = v9;
    v9->timer.m_next = -1.0;
    v9->timer.m_fIsRunning = 0;
    v9->timer._vptr_CStopwatchBase = &off_404EEA0;
    v9->timer.m_interval = message_durationb;
    v9->args.m_Size = 0;
    v9->args.m_Memory.m_pMemory = 0;
    v9->args.m_Memory.m_nAllocationCount = 0;
    v9->args.m_Memory.m_nGrowSize = 0;
    v9->iHintID = iHintID;
    v9->flMessageDuration = timer_durationb;
    if ( args != 0 && args->m_Size > 0 )
    {
      v11 = 0;
      p_m_Memory = &v9->args.m_Memory;
      do
      {
        m_pMemory = args->m_Memory.m_pMemory;
        v18 = m_pMemory[v11];
        if ( v18 != 0 )
        {
          timer_durationc = strlen(m_pMemory[v11]) + 1;
          v12 = (**g_pMemAlloc)(g_pMemAlloc, timer_durationc);
          v13 = timer_durationc;
          if ( timer_durationc < 0 )
            __debugbreak();
        }
        else
        {
          v19 = (**g_pMemAlloc)(g_pMemAlloc, 1);
          v13 = 1;
          v12 = v19;
        }
        memcpy(v12, v18, v13);
        m_Size = v10->args.m_Size;
        v15 = m_Size;
        if ( m_Size == v10->args.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<char *,int>::Grow(p_m_Memory, 1);
          v15 = v10->args.m_Size;
        }
        v10->args.m_Size = v15 + 1;
        v16 = &v10->args.m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
          *v16 = v12;
        ++v11;
      }
      while ( args->m_Size > v11 );
    }
    v20 = this->m_Timers.m_Size;
    if ( v20 == this->m_Timers.m_Memory.m_nAllocationCount )
      CUtlMemory<CHintMessageTimers::hintmessagetime_t *,int>::Grow(&this->m_Timers.m_Memory, 1);
    ++this->m_Timers.m_Size;
    v21 = &this->m_Timers.m_Memory.m_pMemory[v20];
    if ( v21 != 0 )
      *v21 = v10;
  }
}


// CHintMessageTimers::RemoveTimer  (line 242, @0x00000000022699e0, libserver.so)  // inlines: Element, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CHintMessageTimers::GetTimerIndex, memmove
// callers: CHintSystem::RemoveHintTimer, CHintMessageTimers::Update
void __fastcall CHintMessageTimers::RemoveTimer(CHintMessageTimers *const this, int iHintID)
{
  int TimerIndex; // eax
  int m_Size; // ecx
  CHintMessageTimers::hintmessagetime_t **v5; // rsi

  TimerIndex = CHintMessageTimers::GetTimerIndex(this, iHintID);
  if ( TimerIndex != -1 )
  {
    m_Size = this->m_Timers.m_Size;
    if ( this->m_Timers.m_Size - TimerIndex - 1 > 0 )
    {
      v5 = &this->m_Timers.m_Memory.m_pMemory[TimerIndex + 1];
      memmove(v5 - 1, v5, 8LL * (this->m_Timers.m_Size - TimerIndex - 1));
      m_Size = this->m_Timers.m_Size;
    }
    this->m_Timers.m_Size = m_Size - 1;
  }
}


// CHintMessageTimers::StartTimer  (line 255, @0x0000000002269920, libserver.so)  // inlines: Start, curtime, operator[]
// calls: CHintMessageTimers::GetTimerIndex
// callers: CHintSystem::StartHintTimer
void __fastcall CHintMessageTimers::StartTimer(CHintMessageTimers *const this, int iHintID)
{
  int TimerIndex; // eax
  float m_flCurrentTime; // xmm1_4
  CHintMessageTimers::hintmessagetime_t *v5; // r12
  float m_interval; // xmm0_4
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // [rsp+Ch] [rbp-14h]

  TimerIndex = CHintMessageTimers::GetTimerIndex(this, iHintID);
  if ( TimerIndex != -1 )
  {
    m_flCurrentTime = 0.0;
    v5 = this->m_Timers.m_Memory.m_pMemory[TimerIndex];
    m_interval = v5->timer.m_interval;
    v5->timer.m_fIsRunning = 1;
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v9 = m_interval;
          (m_pfnWarningFunc)(1, m_interval, 0.0);
          m_interval = v9;
        }
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    v5->timer.m_next = m_interval + m_flCurrentTime;
  }
}


// CHintMessageTimers::StopTimer  (line 268, @0x00000000022699b0, libserver.so)  // inlines: Stop, operator[]
// calls: CHintMessageTimers::GetTimerIndex
// callers: CHintSystem::StopHintTimer
void __fastcall CHintMessageTimers::StopTimer(CHintMessageTimers *const this, int iHintID)
{
  int TimerIndex; // eax

  TimerIndex = CHintMessageTimers::GetTimerIndex(this, iHintID);
  if ( TimerIndex != -1 )
    this->m_Timers.m_Memory.m_pMemory[TimerIndex]->timer.m_fIsRunning = 0;
}


// CHintMessageTimers::GetTimerIndex  (line 281, @0x00000000022698d0, libserver.so)
// callers: CHintMessageTimers::StartTimer, CHintMessageTimers::StopTimer, CHintMessageTimers::RemoveTimer, CHintMessageTimers::AddTimer
int __fastcall CHintMessageTimers::GetTimerIndex(CHintMessageTimers *const this, int iHintID)
{
  int result; // eax
  CHintMessageTimers::hintmessagetime_t **m_pMemory; // rdx
  _DWORD **v4; // rdx
  _DWORD *v5; // rcx

  result = -1;
  if ( this->m_Timers.m_Size > 0 )
  {
    m_pMemory = this->m_Timers.m_Memory.m_pMemory;
    if ( (*m_pMemory)->iHintID == iHintID )
    {
      return 0;
    }
    else
    {
      v4 = (m_pMemory + 1);
      result = 0;
      while ( ++result != this->m_Timers.m_Size )
      {
        v5 = *v4++;
        if ( *v5 == iHintID )
          return result;
      }
      return -1;
    }
  }
  return result;
}


