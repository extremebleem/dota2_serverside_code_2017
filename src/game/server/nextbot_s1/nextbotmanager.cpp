// Reconstructed from DWARF by pahole; not original source.

// src/game/server/nextbot_s1/nextbotmanager.cpp:361
class NextBotKilledNotifyScan {
	NextBotKilledNotifyScan(CBaseCombatCharacter *, const CTakeDamageInfo &);
	bool operator()(INextBot *);
	~NextBotKilledNotifyScan();

	// sizeof = 152
};

// src/game/server/nextbot_s1/nextbotmanager.cpp:394
class NextBotSoundNotifyScan {
	const const Vector & m_pos;  // +0x8
	NextBotSoundNotifyScan(CBaseEntity *, const Vector &, KeyValues *);
	bool operator()(INextBot *);

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotmanager.cpp:437
class NextBotResponseNotifyScan {
	AIConcept_t m_concept;  // +0x8
	AI_Response * m_response;  // +0x10
	NextBotResponseNotifyScan(CBaseCombatCharacter *, AIConcept_t, AI_Response *);
	bool operator()(INextBot *);

	// sizeof = 24
};

// src/game/server/nextbot_s1/nextbotmanager.cpp:475
class NextBotWeaponFiredNotifyScan {
	NextBotWeaponFiredNotifyScan(CBaseCombatCharacter *, CBaseCombatWeapon *);
	bool operator()(INextBot *);

	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NextBotManager::NextBotManager  (line 40, @0x0000000002f1bcf0, libserver.so)  // inlines: CUtlLinkedList, CUtlMemory, CUtlVector, CUtlVectorBase, ConstructList, ResetDbgInfo
// callers: _GLOBAL__sub_I__unity_nextbot_01.cpp
void __fastcall NextBotManager::NextBotManager(NextBotManager *const this)
{
  this->_vptr_NextBotManager = off_47B2A10;
  this->m_botList.m_Head = -1;
  this->m_botList.m_Tail = -1;
  this->m_botList.m_FirstFree = -1;
  this->m_botList.m_ElementCount = 0;
  this->m_botList.m_Memory.m_pMemory = 0;
  this->m_botList.m_Memory.m_nAllocationCount = 0;
  this->m_botList.m_Memory.m_nGrowSize = 0;
  this->m_botList.m_LastAlloc.index = -1;
  this->m_botList.m_NumAlloced = 0;
  this->m_botList.m_pElements = 0;
  this->m_debugFilterList.m_Size = 0;
  this->m_debugFilterList.m_Memory.m_pMemory = 0;
  this->m_debugFilterList.m_Memory.m_nAllocationCount = 0;
  this->m_debugFilterList.m_Memory.m_nGrowSize = 0;
  this->m_debugType = 0;
  this->m_pSelectedBot = 0;
  this->m_iUpdateTickrate = 0;
  this->m_pLodManager = 0;
}


// NextBotManager::~NextBotManager  (line 50, @0x0000000002f1bd90, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlLinkedList, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int>::Purge, CUtlMemory<NextBotManager::DebugFilter, int>::Purge
// callers: NextBotManager::~NextBotManager
void __fastcall NextBotManager::~NextBotManager(NextBotManager *const this)
{
  bool v2; // zf
  CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *p_m_botList; // rbx
  CUtlVectorBase<NextBotManager::DebugFilter,CUtlMemory<NextBotManager::DebugFilter,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_debugFilterList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_NextBotManager = off_47B2A10;
  this->m_debugFilterList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_debugFilterList.m_Memory;
    CUtlMemory<NextBotManager::DebugFilter,int>::Purge(&this->m_debugFilterList.m_Memory);
    if ( (this->m_debugFilterList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NextBotManager::DebugFilter,int>::Purge(p_m_Memory);
  }
  p_m_botList = &this->m_botList;
  CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::RemoveAll(p_m_botList);
  CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>::Purge(&p_m_botList->m_Memory);
}


// NextBotManager::~NextBotManager  (line 50, @0x0000000002f1bdf0, libserver.so)
// calls: NextBotManager::~NextBotManager, operator delete
void __fastcall NextBotManager::~NextBotManager(NextBotManager *const this)
{
  NextBotManager::~NextBotManager(this);
  operator delete(this);
}


// NextBotManager::Reset  (line 56, @0x0000000002f18e30, libserver.so)  // inlines: InternalElement, Next, operator[]
// calls: UTIL_Remove
void __fastcall NextBotManager::Reset(NextBotManager *const this)
{
  int m_Head; // r12d
  __int64 v3; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v4; // rax
  CEntityInstance *v5; // rax

  m_Head = this->m_botList.m_Head;
  while ( m_Head != 0xFFFF )
  {
    while ( 1 )
    {
      v3 = m_Head;
      v4 = &this->m_botList.m_Memory.m_pMemory[v3];
      m_Head = v4->m_Next;
      if ( (*(v4->m_Element->_vptr_INextBotEventResponder + 65))(v4->m_Element) == 0
        || (*(*((*(this->m_botList.m_Memory.m_pMemory[v3].m_Element->_vptr_INextBotEventResponder + 66))(this->m_botList.m_Memory.m_pMemory[v3].m_Element)
              + 8)
            + 49LL)
          & 2) != 0 )
      {
        break;
      }
      v5 = (*(this->m_botList.m_Memory.m_pMemory[v3].m_Element->_vptr_INextBotEventResponder + 66))(this->m_botList.m_Memory.m_pMemory[v3].m_Element);
      UTIL_Remove(v5);
      if ( m_Head == 0xFFFF )
        goto LABEL_6;
    }
  }
LABEL_6:
  this->m_pSelectedBot = 0;
}


// NextBotManager::Update  (line 107, @0x0000000002f18ed0, libserver.so)  // inlines: FlagForUpdate, GetBool, GetFloat, GetInt, IsDead, NetworkStateChanged, Set, SetSimulatedEveryTick, operator=<bool>, operator[]
// calls: Msg, ceilf, CBaseEntity::GetLifeState
// strings: "NextBot tickrate changed from %d (%.3fms) to %d (%.3fms)\n", "Frame %8d/tick %8d: %3d run of %3d, %3d sliders, %3d blocked slides, scheduled %3d for ne
// globals: NextBotManager::Update(void)::iCurFrame, g_nSlid, g_nRun, g_nBlockedSlides
void __fastcall NextBotManager::Update(NextBotManager *const this)
{
  CNextbotLodManager *m_pLodManager; // rdi
  __int64 m_Head; // r12
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v5; // r12
  CGlobalVars *v6; // rdx
  ConVar *m_pParent; // rax
  int v8; // r13d
  __int64 m_iUpdateTickrate; // rsi
  float interval_per_tick; // xmm2_4
  int v11; // eax
  __int64 m_Next; // r12
  char v13; // r14
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v14; // rax
  __int64 v15; // r12
  _BYTE *v16; // rax
  _BYTE *v17; // r13
  __int64 i; // rax
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r13
  float v23; // xmm0_4
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v24; // rdx
  int v25; // r13d
  __int64 v26; // r12
  INextBot *m_Element; // r15
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v28; // r12
  int v29; // edi
  int v30; // ecx
  CGlobalVars *v31; // r9
  int tickcount; // edx
  __int64 v33; // rax
  __int64 v34; // r14
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v35; // rax
  INextBot *v36; // rsi
  int nScheduled; // [rsp+2Ch] [rbp-44h]
  int nDead; // [rsp+30h] [rbp-40h]
  int curtickcount; // [rsp+34h] [rbp-3Ch]
  UtlLinkedListElem_t<INextBot*,short unsigned int> *nNonResponsivea; // [rsp+38h] [rbp-38h]
  int nNonResponsive; // [rsp+38h] [rbp-38h]

  m_pLodManager = this->m_pLodManager;
  if ( m_pLodManager != 0 )
    (*m_pLodManager->_vptr_CNextbotLodManager)(m_pLodManager);
  m_Head = this->m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = this->m_botList.m_Memory.m_pMemory;
    do
    {
      v5 = m_Head;
      (*(m_pMemory[v5].m_Element->_vptr_INextBotEventResponder + 64))(m_pMemory[v5].m_Element);
      m_pMemory = this->m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v5].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  if ( this->m_botList.m_ElementCount != 0 )
  {
    v6 = gpGlobals;
    if ( gpGlobals->framecount != NextBotManager::Update(void)::iCurFrame )
    {
      NextBotManager::Update(void)::iCurFrame = gpGlobals->framecount;
      m_pParent = nb_update_frequency.m_pParent;
      v8 = 0;
      this->m_SumFrameTime = 0.0;
      m_iUpdateTickrate = this->m_iUpdateTickrate;
      interval_per_tick = v6->interval_per_tick;
      v11 = ((m_pParent->m_Value.m_fValue / interval_per_tick) + 0.5);
      if ( v11 >= 0 )
        v8 = v11;
      if ( m_iUpdateTickrate != v8 )
      {
        Msg(
          "NextBot tickrate changed from %d (%.3fms) to %d (%.3fms)\n",
          m_iUpdateTickrate,
          v8,
          (m_iUpdateTickrate * interval_per_tick),
          (v8 * interval_per_tick));
        m_Next = this->m_botList.m_Head;
        this->m_iUpdateTickrate = v8;
        v13 = v8 <= 1;
        if ( m_Next == 0xFFFF )
        {
          LODWORD(m_iUpdateTickrate) = v8;
        }
        else
        {
          v14 = this->m_botList.m_Memory.m_pMemory;
          do
          {
            v15 = m_Next;
            v16 = (*(v14[v15].m_Element->_vptr_INextBotEventResponder + 66))(v14[v15].m_Element);
            v17 = v16;
            if ( v13 != v16[562] )
            {
              (*(*v16 + 176LL))(v16, 562, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              v17[562] = v13;
            }
            v14 = this->m_botList.m_Memory.m_pMemory;
            m_Next = v14[v15].m_Next;
          }
          while ( m_Next != 0xFFFF );
          LODWORD(m_iUpdateTickrate) = this->m_iUpdateTickrate;
        }
      }
      if ( m_iUpdateTickrate <= 0 )
      {
        nDead = 0;
        nNonResponsive = 0;
        nScheduled = this->m_botList.m_ElementCount;
        i = 0;
      }
      else
      {
        i = this->m_botList.m_Head;
        if ( i == 0xFFFF )
        {
          nDead = 0;
          nNonResponsive = 0;
          nScheduled = 0;
        }
        else
        {
          v19 = this->m_botList.m_Memory.m_pMemory;
          nDead = 0;
          do
          {
            v20 = i;
            v21 = (*(v19[v20].m_Element->_vptr_INextBotEventResponder + 66))(v19[v20].m_Element);
            v22 = v21;
            if ( v21 != 0 )
            {
              if ( (*(*v21 + 1120LL))(v21) != 0 && CBaseEntity::GetLifeState(v22) == LifeState_t::LIFE_DEAD )
              {
                ++nDead;
              }
              else if ( (*(*(v22 + 8) + 49LL) & 2) != 0 || *(v22 + 208) == CBaseEntity::SUB_Remove && *(v22 + 216) == 0 )
              {
                ++nDead;
              }
            }
            v19 = this->m_botList.m_Memory.m_pMemory;
            LODWORD(i) = v19[v20].m_Next;
          }
          while ( i != 0xFFFF );
          nNonResponsivea = this->m_botList.m_Memory.m_pMemory;
          v23 = ceilf((this->m_botList.m_ElementCount - nDead) / this->m_iUpdateTickrate);
          v24 = nNonResponsivea;
          nScheduled = 0;
          v25 = v23;
          nNonResponsive = 0;
          curtickcount = gpGlobals->tickcount;
          for ( i = this->m_botList.m_Head; v25 != 0; i = v28->m_Next )
          {
            if ( i == 0xFFFF )
              break;
            v26 = i;
            m_Element = v24[v26].m_Element;
            if ( m_Element->m_bFlaggedForUpdate )
            {
              ++nNonResponsive;
              v28 = &v24[v26];
            }
            else
            {
              if ( curtickcount - m_Element->m_tickLastUpdate < this->m_iUpdateTickrate )
                break;
              v33 = (*(m_Element->_vptr_INextBotEventResponder + 66))(m_Element);
              v34 = v33;
              if ( v33 == 0 )
                goto LABEL_44;
              if ( (*(*v33 + 1120LL))(v33) != 0 && CBaseEntity::GetLifeState(v34) == LifeState_t::LIFE_DEAD )
              {
                v24 = this->m_botList.m_Memory.m_pMemory;
                v28 = &v24[v26];
                continue;
              }
              if ( (*(*(v34 + 8) + 49LL) & 2) != 0 || *(v34 + 208) == CBaseEntity::SUB_Remove && *(v34 + 216) == 0 )
              {
                v24 = this->m_botList.m_Memory.m_pMemory;
                v28 = &v24[v26];
              }
              else
              {
LABEL_44:
                ++nScheduled;
                m_Element->m_bFlaggedForUpdate = 1;
                --v25;
                v24 = this->m_botList.m_Memory.m_pMemory;
                v28 = &v24[v26];
              }
            }
          }
        }
      }
      if ( nb_update_debug.m_pParent->m_Value.m_nValue != 0 )
      {
        v29 = this->m_iUpdateTickrate;
        if ( v29 <= 0 || i == 0xFFFF )
        {
          v30 = 0;
          v31 = gpGlobals;
          tickcount = gpGlobals->tickcount;
        }
        else
        {
          v31 = gpGlobals;
          v30 = 0;
          tickcount = gpGlobals->tickcount;
          do
          {
            v35 = &this->m_botList.m_Memory.m_pMemory[i];
            v36 = v35->m_Element;
            i = v35->m_Next;
            v30 += v29 <= tickcount - v36->m_tickLastUpdate;
          }
          while ( i != 0xFFFF );
        }
        Msg(
          "Frame %8d/tick %8d: %3d run of %3d, %3d sliders, %3d blocked slides, scheduled %3d for next tick, %3d intentio"
          "nal sliders, %d nonresponsive, %d dead\n",
          v31->framecount - 1,
          tickcount - 1,
          g_nRun,
          this->m_botList.m_ElementCount - nDead,
          g_nSlid,
          g_nBlockedSlides,
          nScheduled,
          v30,
          nNonResponsive,
          nDead);
        g_nBlockedSlides = 0;
        g_nSlid = 0;
        g_nRun = 0;
      }
    }
  }
}


// NextBotManager::ShouldUpdateInternal  (line 228, @0x0000000002f19380, libserver.so)  // inlines: FlagForUpdate, GetBool, GetFloat, GetInt
// calls: Msg
// callers: INextBot::BeginUpdate
// strings: "Frame %8d/tick %8d: frame out of budget (%.2fms > %.2fms)\n"
// globals: g_nBlockedSlides, g_nSlid
bool __fastcall NextBotManager::ShouldUpdateInternal(NextBotManager *const this, INextBot *pBot)
{
  int m_iUpdateTickrate; // eax
  float m_fValue; // xmm3_4
  float v6; // xmm4_4
  int v7; // edx
  bool result; // al
  __m128d v9; // xmm0
  float v10; // [rsp+8h] [rbp-28h]
  float v11; // [rsp+Ch] [rbp-24h]

  m_iUpdateTickrate = this->m_iUpdateTickrate;
  if ( m_iUpdateTickrate <= 0 )
    return 1;
  m_fValue = nb_update_framelimit.m_pParent->m_Value.m_fValue;
  if ( pBot->m_bFlaggedForUpdate )
  {
    v9 = 0x408F400000000000uLL;
    pBot->m_bFlaggedForUpdate = 0;
    v9.m128d_f64[0] = 1000.0 * this->m_SumFrameTime;
    v6 = _mm_movedup_pd(v9).m128d_f64[0];
    if ( m_fValue <= 0.0 )
      goto LABEL_17;
    if ( m_fValue > v6 )
      return 1;
    if ( nb_update_debug.m_pParent->m_Value.m_nValue != 0 )
    {
      v10 = v6;
      v11 = m_fValue;
      Msg(
        "Frame %8d/tick %8d: frame out of budget (%.2fms > %.2fms)\n",
        gpGlobals->framecount,
        gpGlobals->tickcount,
        v6,
        m_fValue);
      m_iUpdateTickrate = this->m_iUpdateTickrate;
      m_fValue = v11;
      v6 = v10;
    }
    else
    {
LABEL_17:
      m_iUpdateTickrate = this->m_iUpdateTickrate;
    }
  }
  else
  {
    v6 = 0.0;
  }
  v7 = gpGlobals->tickcount - pBot->m_tickLastUpdate - m_iUpdateTickrate;
  if ( v7 >= nb_update_maxslide.m_pParent->m_Value.m_nValue
    && (m_fValue == 0.0
     || nb_update_framelimit.m_pParent->m_Value.m_fValue + nb_update_framelimit.m_pParent->m_Value.m_fValue > v6) )
  {
    ++g_nBlockedSlides;
    return 1;
  }
  result = 0;
  if ( nb_update_debug.m_pParent->m_Value.m_nValue != 0 && v7 > 0 )
    ++g_nSlid;
  return result;
}


// NextBotManager::NotifyBeginUpdate  (line 278, @0x0000000002f1a920, libserver.so)  // inlines: GetBool, GetInt, InternalElement, LinkBefore, LinkToTail, SetTickLastUpdate, operator[]
// calls: CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::Unlink, Plat_FloatTime
// callers: INextBot::BeginUpdate
// globals: g_nRun
void __fastcall NextBotManager::NotifyBeginUpdate(NextBotManager *const this, INextBot *pBot)
{
  int m_id_low; // r12d
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v5; // rax
  unsigned __int16 m_Tail; // dx

  if ( nb_update_debug.m_pParent->m_Value.m_nValue != 0 )
    ++g_nRun;
  CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::Unlink(
    &this->m_botList,
    pBot->m_id);
  m_id_low = LOWORD(pBot->m_id);
  CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::Unlink(
    &this->m_botList,
    pBot->m_id);
  v5 = &this->m_botList.m_Memory.m_pMemory[m_id_low];
  v5->m_Next = -1;
  m_Tail = this->m_botList.m_Tail;
  v5->m_Previous = m_Tail;
  this->m_botList.m_Tail = m_id_low;
  if ( m_Tail == 0xFFFF )
    this->m_botList.m_Head = m_id_low;
  else
    this->m_botList.m_Memory.m_pMemory[m_Tail].m_Next = m_id_low;
  ++this->m_botList.m_ElementCount;
  pBot->m_tickLastUpdate = gpGlobals->tickcount;
  this->m_CurUpdateStartTime = Plat_FloatTime();
}


// NextBotManager::NotifyEndUpdate  (line 294, @0x0000000002f19510, libserver.so)
// calls: Plat_FloatTime
// callers: INextBot::EndUpdate
void __fastcall NextBotManager::NotifyEndUpdate(NextBotManager *const this, INextBot *pBot)
{
  this->m_SumFrameTime = Plat_FloatTime() - this->m_CurUpdateStartTime + this->m_SumFrameTime;
}


// NextBotManager::Register  (line 302, @0x0000000002f1c1c0, libserver.so)  // inlines: AddToHead, CopyConstruct<INextBot*>, InsertAfter, InternalElement, IsIdxValid, IsInList, LinkAfter, operator[]
// calls: CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::AllocInternal, CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::Unlink
// callers: INextBot::INextBot
int __fastcall NextBotManager::Register(NextBotManager *const this, INextBot *pBot)
{
  CUtlLinkedList<INextBot*,short unsigned int,false,short unsigned int,CUtlMemory<UtlLinkedListElem_t<INextBot*,short unsigned int>,short unsigned int> > *p_m_botList; // r14
  unsigned __int16 v5; // r12
  int result; // eax
  __int64 v7; // r15
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v8; // rdx
  __int64 m_Next; // rdx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v10; // r15

  p_m_botList = &this->m_botList;
  v5 = CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::AllocInternal(
         &this->m_botList,
         0);
  result = 0xFFFF;
  if ( v5 != 0xFFFF )
  {
    result = v5;
    if ( v5 >= this->m_botList.m_Memory.m_nAllocationCount || v5 > this->m_botList.m_LastAlloc.index )
    {
      v7 = v5;
    }
    else
    {
      v7 = v5;
      if ( v5 != this->m_botList.m_Memory.m_pMemory[v7].m_Previous )
      {
        CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::Unlink(
          p_m_botList,
          v5);
        result = v5;
      }
    }
    v8 = &this->m_botList.m_Memory.m_pMemory[v7];
    v8->m_Previous = -1;
    v8->m_Next = this->m_botList.m_Head;
    this->m_botList.m_Head = v5;
    m_Next = v8->m_Next;
    if ( m_Next == 0xFFFF )
      this->m_botList.m_Tail = v5;
    else
      this->m_botList.m_Memory.m_pMemory[m_Next].m_Previous = v5;
    ++this->m_botList.m_ElementCount;
    v10 = &this->m_botList.m_Memory.m_pMemory[v7];
    if ( v10 != 0 )
      v10->m_Element = pBot;
  }
  return result;
}


// NextBotManager::UnRegister  (line 309, @0x0000000002f1a9e0, libserver.so)  // inlines: Free, InternalElement, Remove, operator[]
// calls: CUtlLinkedList<INextBot*, short unsigned int, false, short unsigned int, CUtlMemory<UtlLinkedListElem_t<INextBot*, short unsigned int>, short unsigned int> >::Unlink
// callers: INextBot::~INextBot
void __fastcall NextBotManager::UnRegister(NextBotManager *const this, INextBot *pBot)
{
  int m_id_low; // r12d
  bool v5; // zf

  m_id_low = LOWORD(pBot->m_id);
  CUtlLinkedList<INextBot *,unsigned short,false,unsigned short,CUtlMemory<UtlLinkedListElem_t<INextBot *,unsigned short>,unsigned short>>::Unlink(
    &this->m_botList,
    pBot->m_id);
  this->m_botList.m_Memory.m_pMemory[m_id_low].m_Next = this->m_botList.m_FirstFree;
  v5 = this->m_pSelectedBot == pBot;
  this->m_botList.m_FirstFree = m_id_low;
  if ( v5 )
    this->m_pSelectedBot = 0;
}


// NextBotManager::DeleteAllByTeamIndex  (line 322, @0x0000000002f19c40, libserver.so)  // inlines: ForEachBot<NextBotDestroyer>, NextBotDestroyer, operator[]
// calls: NextBotDestroyer::operator()
void __fastcall NextBotManager::DeleteAllByTeamIndex(NextBotManager *const this, int nTeam)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v4; // rbx
  NextBotDestroyer destroyer; // [rsp+0h] [rbp-30h] BYREF

  destroyer.m_nTeam = nTeam;
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v4 = m_Head;
      if ( !NextBotDestroyer::operator()(&destroyer, m_pMemory[v4].m_Element) )
        break;
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v4].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// NextBotManager::DeleteAll  (line 335, @0x0000000002f19af0, libserver.so)  // inlines: DeleteAllByTeamIndex, FStrEq, ForEachBot<NextBotDestroyer>, GetTeamNumber, NextBotDestroyer, _V_strcmp, operator[]
// calls: Warning, NextBotDestroyer::operator(), strcmp
// callers: nb_delete_all
// strings: "Invalid team '%s'\n"
void __fastcall NextBotManager::DeleteAll(NextBotManager *const this, const char *pTeamName)
{
  __int64 v3; // rbx
  int v4; // r12d
  int m_Value; // eax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v8; // rbx
  const char *v9; // rax
  CTeam *v10; // rax
  NextBotDestroyer v11; // [rsp+0h] [rbp-30h] BYREF

  if ( pTeamName == 0 || pTeamName == "" || *pTeamName == 0 )
    goto LABEL_6;
  v3 = 0;
  v4 = 0;
  if ( g_Teams.m_Size <= 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v9 = (*(g_Teams.m_Memory.m_pMemory[v3]->_vptr_IHandleEntity + 208))(g_Teams.m_Memory.m_pMemory[v3]);
    if ( pTeamName == v9 || strcmp(pTeamName, v9) == 0 )
      break;
    ++v4;
    ++v3;
    if ( g_Teams.m_Size <= v4 )
      goto LABEL_5;
  }
  v10 = g_Teams.m_Memory.m_pMemory[v3];
  if ( v10 == 0 )
  {
LABEL_5:
    Warning("Invalid team '%s'\n", pTeamName);
LABEL_6:
    m_Value = -1;
    goto LABEL_7;
  }
  m_Value = v10->m_iTeamNum.m_Value;
LABEL_7:
  v11.m_nTeam = m_Value;
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v8 = m_Head;
      if ( !NextBotDestroyer::operator()(&v11, m_pMemory[v8].m_Element) )
        break;
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v8].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
}


// NextBotManager::OnKilled  (line 385, @0x0000000002f19540, libserver.so)  // inlines: ForEachBot<NextBotKilledNotifyScan>, NextBotKilledNotifyScan, operator(), operator[], ~NextBotKilledNotifyScan
// calls: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::operator=, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall NextBotManager::OnKilled(
        NextBotManager *const this,
        CBaseCombatCharacter *pVictim,
        const CTakeDamageInfo *const info)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v7; // rbx
  INextBot *m_Element; // r12
  __int64 v9; // rax
  NextBotKilledNotifyScan notify; // [rsp+0h] [rbp-D0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&notify.m_info);
  CTakeDamageInfo::operator=(&notify.m_info, info);
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v7 = m_Head;
      m_Element = m_pMemory[v7].m_Element;
      v9 = (*(m_Element->_vptr_INextBotEventResponder + 66))(m_Element);
      if ( (*(*v9 + 1112LL))(v9) != 0 && (*(m_Element->_vptr_INextBotEventResponder + 76))(m_Element, pVictim) == 0 )
        (*(m_Element->_vptr_INextBotEventResponder + 19))(m_Element, pVictim, &notify.m_info);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v7].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  CTakeDamageInfo::~CTakeDamageInfo(&notify.m_info);
}


// NextBotManager::OnSound  (line 417, @0x0000000002f19650, libserver.so)  // inlines: ForEachBot<NextBotSoundNotifyScan>, Vector, operator(), operator[]
// calls: NDebugOverlay::Circle
void __fastcall NextBotManager::OnSound(
        NextBotManager *const this,
        CBaseEntity *pSource,
        const Vector *const vPos,
        KeyValues *pKeys)
{
  int m_Head; // r8d
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v8; // r14
  INextBot *m_Element; // r15
  __int64 v10; // rax
  unsigned __int8 m_Value; // al
  int v12; // ecx
  int v13; // r8d
  Vector xAxis; // [rsp+20h] [rbp-50h] BYREF
  Vector yAxis; // [rsp+30h] [rbp-40h] BYREF

  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v8 = m_Head;
      m_Element = m_pMemory[v8].m_Element;
      v10 = (*(m_Element->_vptr_INextBotEventResponder + 66))(m_Element);
      if ( (*(*v10 + 1112LL))(v10) != 0 && (*(m_Element->_vptr_INextBotEventResponder + 76))(m_Element, pSource) == 0 )
        (*(m_Element->_vptr_INextBotEventResponder + 22))(m_Element, pSource, vPos, pKeys);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v8].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  if ( pSource != 0 && (this->m_debugType & 0x40) != 0 )
  {
    m_Value = pSource->m_iTeamNum.m_Value;
    v12 = 0;
    v13 = 255;
    if ( m_Value != 2 )
    {
      v12 = 255;
      if ( m_Value == 3 )
        v13 = 0;
    }
    yAxis.x = 0.0;
    yAxis.y = -1.0;
    yAxis.z = 0.0;
    xAxis.x = 1.0;
    xAxis.y = 0.0;
    xAxis.z = 0.0;
    NDebugOverlay::Circle(vPos, &xAxis, &yAxis, 5.0, v12, v13, 0, 255, 1, 3.0);
  }
}


// NextBotManager::OnSpokeConcept  (line 461, @0x0000000002f197a0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CHandle, CRR_Concept, CUtlSymbol, ForEachBot<NextBotResponseNotifyScan>, GetDebugName, operator(), operator[]
// calls: CRR_Concept::GetStringConcept, CEntityIdentity::GetDebugName, CGlobalVarsBase::curtime, DevMsg(char const*,...)
// strings: "%3.2f: OnSpokeConcept( %s, %s )\n"
// local variable allocation has failed, the output may be wrong!
void __fastcall NextBotManager::OnSpokeConcept(
        NextBotManager *const this,
        CBaseCombatCharacter *who,
        const CRR_Concept *concept,
        AI_Response *response)
{
  UtlSymId_t m_Id; // r13
  int v5; // r14d
  int m_Head; // r8d
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v8; // r15
  INextBot *m_Element; // r12
  __int64 v10; // rax
  int (**vptr_INextBotEventResponder)(...); // rax
  const char *StringConcept; // r13
  const char *DebugName; // rbx
  float v14; // xmm0_4
  UtlSymId_t v19[2]; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+34h] [rbp-3Ch]

  m_Id = concept->m_iConcept.m_Id;
  v5 = *&concept[2].m_iConcept.m_Id;
  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v8 = m_Head;
      m_Element = m_pMemory[v8].m_Element;
      v10 = (*(m_Element->_vptr_INextBotEventResponder + 66))(m_Element);
      if ( (*(*v10 + 1112LL))(v10) != 0 )
      {
        vptr_INextBotEventResponder = m_Element->_vptr_INextBotEventResponder;
        v19[0] = m_Id;
        v20 = v5;
        vptr_INextBotEventResponder[23](m_Element, who, v19, response);
      }
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v8].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  if ( (this->m_debugType & 0x40) != 0 )
  {
    StringConcept = CRR_Concept::GetStringConcept(concept);
    DebugName = CEntityIdentity::GetDebugName(who->m_pEntity);
    v14 = CGlobalVarsBase::curtime(gpGlobals, 0);
    DevMsg("%3.2f: OnSpokeConcept( %s, %s )\n", DebugName, StringConcept, v14);
  }
}


// NextBotManager::OnWeaponFired  (line 497, @0x0000000002f198d0, libserver.so)  // inlines: ForEachBot<NextBotWeaponFiredNotifyScan>, GetDebugName, operator(), operator[]
// calls: CEntityIdentity::GetDebugName, CGlobalVarsBase::curtime, DevMsg(char const*,...)
// strings: "%3.2f: OnWeaponFired( %s, %s )\n"
void __fastcall NextBotManager::OnWeaponFired(
        NextBotManager *const this,
        CBaseCombatCharacter *whoFired,
        CBaseCombatWeapon *weapon)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v7; // rbx
  INextBot *m_Element; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  const char *DebugName; // rbx
  float v12; // xmm0_4

  m_Head = g_NextBotManager.m_botList.m_Head;
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
    do
    {
      v7 = m_Head;
      m_Element = m_pMemory[v7].m_Element;
      v9 = (*(m_Element->_vptr_INextBotEventResponder + 66))(m_Element);
      if ( (*(*v9 + 1112LL))(v9) != 0 )
        (*(m_Element->_vptr_INextBotEventResponder + 24))(m_Element, whoFired, weapon);
      m_pMemory = g_NextBotManager.m_botList.m_Memory.m_pMemory;
      m_Head = m_pMemory[v7].m_Next;
    }
    while ( m_Head != 0xFFFF );
  }
  if ( SLOBYTE(this->m_debugType) < 0 )
  {
    v10 = (*(weapon->_vptr_IHandleEntity + 347))(weapon);
    DebugName = CEntityIdentity::GetDebugName(whoFired->m_pEntity);
    v12 = CGlobalVarsBase::curtime(gpGlobals, 0);
    DevMsg("%3.2f: OnWeaponFired( %s, %s )\n", DebugName, v10, v12);
  }
}


// NextBotManager::DebugFilterAdd  (line 510, @0x0000000002f1be10, libserver.so)  // inlines: AddToTail, CopyConstruct<NextBotManager::DebugFilter>, Element, GrowMemory, operator[]
// calls: CUtlMemory<NextBotManager::DebugFilter, int>::Grow
void __fastcall NextBotManager::DebugFilterAdd(NextBotManager *const this, CEntityIndex index)
{
  __int64 m_Size; // r12
  int v5; // eax
  NextBotManager::DebugFilter *v6; // rax

  m_Size = this->m_debugFilterList.m_Size;
  v5 = this->m_debugFilterList.m_Size;
  if ( m_Size == this->m_debugFilterList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<NextBotManager::DebugFilter,int>::Grow(&this->m_debugFilterList.m_Memory, 1);
    v5 = this->m_debugFilterList.m_Size;
  }
  this->m_debugFilterList.m_Size = v5 + 1;
  v6 = &this->m_debugFilterList.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
  {
    v6->index = index;
    v6->name[0] = 0;
  }
}


// NextBotManager::DebugFilterAdd  (line 522, @0x0000000002f1be80, libserver.so)  // inlines: AddToTail, CEntityIndex, CopyConstruct<NextBotManager::DebugFilter>, DebugFilter, Element, GrowMemory, V_strcpy_safe<128ul>, operator[]
// calls: _V_strncpy, memcpy, CUtlMemory<NextBotManager::DebugFilter, int>::Grow, __stack_chk_fail
// callers: CC_SetDebugFilter
void __fastcall NextBotManager::DebugFilterAdd(NextBotManager *const this, const char *pName)
{
  __int64 m_Size; // r12
  int v4; // eax
  NextBotManager::DebugFilter *v5; // rdi
  NextBotManager::DebugFilter filter; // [rsp+0h] [rbp-B0h] BYREF
  unsigned __int64 v7; // [rsp+88h] [rbp-28h]

  filter.index.m_Data = -1;
  v7 = __readfsqword(0x28u);
  _V_strncpy(filter.name, pName, 128);
  m_Size = this->m_debugFilterList.m_Size;
  v4 = this->m_debugFilterList.m_Size;
  if ( m_Size == this->m_debugFilterList.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<NextBotManager::DebugFilter,int>::Grow(&this->m_debugFilterList.m_Memory, 1);
    v4 = this->m_debugFilterList.m_Size;
  }
  this->m_debugFilterList.m_Size = v4 + 1;
  v5 = &this->m_debugFilterList.m_Memory.m_pMemory[m_Size];
  if ( v5 != 0 )
    memcpy(v5, &filter, sizeof(NextBotManager::DebugFilter));
}


// NextBotManager::DebugFilterRemove  (line 534, @0x0000000002f1aa50, libserver.so)
// calls: CUtlVectorBase<NextBotManager::DebugFilter, CUtlMemory<NextBotManager::DebugFilter, int> >::Remove
void __fastcall NextBotManager::DebugFilterRemove(NextBotManager *const this, CEntityIndex index)
{
  int m_Size; // ecx
  NextBotManager::DebugFilter *m_pMemory; // rdx
  int v4; // eax

  m_Size = this->m_debugFilterList.m_Size;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_debugFilterList.m_Memory.m_pMemory;
    v4 = 0;
    if ( index.m_Data == m_pMemory->index.m_Data )
    {
      v4 = 0;
LABEL_7:
      CUtlVectorBase<NextBotManager::DebugFilter,CUtlMemory<NextBotManager::DebugFilter,int>>::Remove(
        &this->m_debugFilterList,
        v4);
    }
    else
    {
      while ( ++v4 != m_Size )
      {
        ++m_pMemory;
        if ( index.m_Data == m_pMemory->index.m_Data )
          goto LABEL_7;
      }
    }
  }
}


// NextBotManager::DebugFilterRemove  (line 548, @0x0000000002f1aaa0, libserver.so)  // inlines: V_strlen, V_strnicmp_fast<long unsigned int>, operator[]
// calls: strlen, _V_strnicmp_fast, CUtlVectorBase<NextBotManager::DebugFilter, CUtlMemory<NextBotManager::DebugFilter, int> >::Remove
void __fastcall NextBotManager::DebugFilterRemove(NextBotManager *const this, const char *pName)
{
  __int64 v4; // r12
  int i; // ebx
  unsigned int v6; // eax
  __int64 v7; // rdx
  NextBotManager::DebugFilter *v8; // r13

  if ( this->m_debugFilterList.m_Size > 0 )
  {
    v4 = 0;
    for ( i = 0; this->m_debugFilterList.m_Size > i; ++i )
    {
      v8 = &this->m_debugFilterList.m_Memory.m_pMemory[v4];
      if ( v8->name[0] != 0 )
      {
        if ( pName != 0 )
        {
          v6 = strlen(pName);
          v7 = 128;
          if ( v6 < 0x80 )
            v7 = v6;
          if ( _V_strnicmp_fast(pName, v8->name, v7) == 0 )
          {
LABEL_10:
            CUtlVectorBase<NextBotManager::DebugFilter,CUtlMemory<NextBotManager::DebugFilter,int>>::Remove(
              &this->m_debugFilterList,
              i);
            return;
          }
        }
        else if ( _V_strnicmp_fast(0, v8->name, 0) == 0 )
        {
          goto LABEL_10;
        }
      }
      ++v4;
    }
  }
}


// NextBotManager::IsDebugFilterMatch  (line 563, @0x0000000002f13390, libserver.so)  // inlines: V_strlen, V_strnicmp_fast<int>, entindex, operator[]
// calls: strlen, _V_strnicmp_fast, UTIL_GetListenServerHost, CEntityInstance::GetEntityIndex
// callers: NextBotGroundLocomotion::OnLandOnGround, NextBotGroundLocomotion::OnLeaveGround, CSimpleBotRoam::Update, Action<CSimpleBot>::InvokeOnEnd, CPathFollower::UpdatePathAndFollow, NextBotGroundLocomotion::ResolveCollision, INextBot::IsDebugging, nb_move_to_cursor, NextBotGroundLocomotion::UpdateGroundConstraint, NextBotManager::IsDebugFilterMatch, Action<CSimpleBot>::InvokeOnSuspend, Action<CSimpleBot>::ApplyResult (71 total)
// strings: "lookat"
bool __fastcall NextBotManager::IsDebugFilterMatch(const NextBotManager *const this, const INextBot *pBot)
{
  __int64 v4; // rbx
  int i; // r14d
  const char *name; // r15
  __int64 v7; // rdx
  CBasePlayer *ListenServerHost; // rax
  __int64 v9; // rax
  NextBotManager::DebugFilter *v10; // rdi
  bool v11; // zf
  const char *v12; // rdi
  const char *v13; // r15
  __int64 v14; // rdx
  INextBot *m_pSelectedBot; // rdi
  unsigned __int8 (__fastcall *v16)(const INextBot *, __int64); // r15
  __int64 v17; // rax
  const CEntityInstance *v18; // rax
  CEntityIndex v19; // eax
  NextBotManager::DebugFilter *v20; // rdx
  NextBotManager::DebugFilter *v21; // rax

  if ( this->m_debugFilterList.m_Size > 0 )
  {
    v4 = 0;
    for ( i = 0; i < this->m_debugFilterList.m_Size; ++i )
    {
      v18 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
      v19.m_Data = CEntityInstance::GetEntityIndex(v18).m_Data;
      v20 = &this->m_debugFilterList.m_Memory.m_pMemory[v4];
      if ( v19.m_Data == v20->index.m_Data )
        return 1;
      if ( v20->name[0] != 0 )
      {
        if ( (*(pBot->_vptr_INextBotEventResponder + 98))(pBot, this->m_debugFilterList.m_Memory.m_pMemory[v4].name) != 0 )
          return 1;
        v21 = &this->m_debugFilterList.m_Memory.m_pMemory[v4];
        name = v21->name;
        if ( v21 != -4LL )
        {
LABEL_4:
          v7 = strlen(name);
          goto LABEL_5;
        }
      }
      else
      {
        name = v20->name;
        if ( v20 != -4LL )
          goto LABEL_4;
      }
      v7 = 0;
LABEL_5:
      if ( _V_strnicmp_fast(name, "lookat", v7) == 0 )
      {
        ListenServerHost = UTIL_GetListenServerHost();
        if ( ListenServerHost != 0 )
        {
          v9 = (*(ListenServerHost->_vptr_IHandleEntity + 439))(ListenServerHost);
          if ( v9 != 0 && (*(pBot->_vptr_INextBotEventResponder + 76))(pBot, v9) != 0 )
            return 1;
        }
      }
      v10 = &this->m_debugFilterList.m_Memory.m_pMemory[v4];
      v11 = v10->name == 0;
      v12 = v10->name;
      v13 = v12;
      v14 = v11 ? 0LL : strlen(v12);
      if ( _V_strnicmp_fast(v13, "selected", v14) == 0 )
      {
        m_pSelectedBot = this->m_pSelectedBot;
        if ( m_pSelectedBot != 0 )
        {
          v16 = *(pBot->_vptr_INextBotEventResponder + 76);
          v17 = (*(m_pSelectedBot->_vptr_INextBotEventResponder + 66))(m_pSelectedBot);
          if ( v16(pBot, v17) != 0 )
            return 1;
        }
      }
      ++v4;
    }
  }
  return 0;
}


// NextBotManager::IsDebugFilterMatch  (line 563, @0x0000000002f199d0, libserver.so)
// calls: NextBotManager::IsDebugFilterMatch
// callers: Action<CDOTA_BaseNPC>::InvokeOnEnd, Action<CDOTA_BaseNPC>::InvokeOnSuspend, Action<CDOTA_BaseNPC>::ApplyResult, Action<CDOTA_BaseNPC>::InvokeOnStart, Action<CDOTA_BaseNPC>::InvokeOnResume, Behavior<CDOTA_BaseNPC>::Update, Action<CDOTA_BaseNPC>::DebugReceivedEvent, Action<CDOTA_BaseNPC>::StorePendingEventResult, Action<CDOTA_BaseNPC>::OnMoveToSuccess, Action<CDOTA_BaseNPC>::OnStuck, Action<CDOTA_BaseNPC>::OnUnStuck, Action<CDOTA_BaseNPC>::OnPostureChanged (37 total)
bool __fastcall NextBotManager::IsDebugFilterMatch(const NextBotManager *const this, const INextBot *pBot)
{
  return this->m_debugFilterList.m_Size == 0 || NextBotManager::IsDebugFilterMatch(this, pBot);
}


// NextBotManager::GetBotUnderCrosshair  (line 616, @0x0000000002f1b3d0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseCombatCharacter*>, DistTo, DotProduct, Element, FastSqrt, ForEachCombatCharacter<TargetScan>, GetTeamNumber, GrowMemory, IsPotentialTarget, IsTargetVisible, Length, NormalizeInPlace, Purge, RemoveAll, TargetScan, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, ViewDot, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator(), operator*, operator+, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~TargetScan
// calls: AngleVectors, CalcClosestPointOnLineSegment, CBaseEntity::GetAbsOrigin, VectorNormalize, CCollisionProperty::CalcNearestPoint, CBaseCombatCharacter::IsAbleToSee, NDebugOverlay::Cross3D, NDebugOverlay::Line, CUtlMemory<CBaseCombatCharacter*, int>::Purge, CUtlMemory<CBaseCombatCharacter*, int>::Grow, CUtlVectorBase<CBaseCombatCharacter*, CUtlMemory<CBaseCombatCharacter*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: nb_dump_debug_history
INextBot *__fastcall NextBotManager::GetBotUnderCrosshair(NextBotManager *const this, CBasePlayer *picker)
{
  int (**vptr_IHandleEntity)(...); // rax
  const QAngle *v4; // rax
  __int64 m_Head; // r12
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v7; // r12
  int (**v8)(...); // rax
  CBaseCombatCharacter *v9; // rbx
  double v10; // xmm0_8
  float v11; // xmm1_4
  vec_t v12; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int (**vptr_ICollideable)(...); // rax
  __int64 v17; // rax
  float v18; // xmm1_4
  __int64 m_target_low; // r13
  int m_target; // eax
  CBaseCombatCharacter **v21; // rax
  __int64 v22; // rbx
  INextBot *result; // rax
  int v24; // [rsp-B0h] [rbp-140h]
  INextBot *v25; // [rsp-A0h] [rbp-130h]
  Vector v26; // [rsp-98h] [rbp-128h] BYREF
  Vector v27; // [rsp-88h] [rbp-118h] BYREF
  Vector v28; // [rsp-78h] [rbp-108h] BYREF
  Vector v29; // [rsp-68h] [rbp-F8h] BYREF
  Vector v30; // [rsp-58h] [rbp-E8h] BYREF
  Vector v31; // [rsp-48h] [rbp-D8h] BYREF
  Vector v32; // [rsp-38h] [rbp-C8h] BYREF
  double v33; // [rsp-28h] [rbp-B8h]
  float v34; // [rsp-20h] [rbp-B0h]
  Vector v35; // [rsp-18h] [rbp-A8h] BYREF
  __int64 (__fastcall **v36)(TargetScan *__hidden, CBaseCombatCharacter *); // [rsp-8h] [rbp-98h]
  TargetScan scan; // [rsp+0h] [rbp-90h] BYREF

  if ( picker == 0 )
    return 0;
  v36 = off_47B2430;
  vptr_IHandleEntity = picker->_vptr_IHandleEntity;
  LODWORD(scan.m_target) = 0;
  *&scan.m_allTargets.m_Size = 0;
  scan.m_allTargets.m_Memory.m_pMemory = 0;
  scan._vptr_TargetScan = picker;
  v4 = (vptr_IHandleEntity[165])(picker);
  AngleVectors(v4, &scan.m_me, 0, 0);
  m_Head = this->m_botList.m_Head;
  scan.m_viewForward.y = NAN;
  strcpy(&scan.m_viewForward.z, "333?333?");
  BYTE1(scan.m_closeDot) = 0;
  HIWORD(scan.m_closeDot) = 17786;
  *&scan.m_debug = 0;
  scan.m_bestDot = 50.0;
  LOBYTE(scan.m_maxRange) = 0;
  if ( m_Head == 0xFFFF )
    goto LABEL_26;
  m_pMemory = this->m_botList.m_Memory.m_pMemory;
  do
  {
    v7 = m_Head;
    v8 = (*(m_pMemory[v7].m_Element->_vptr_INextBotEventResponder + 66))(m_pMemory[v7].m_Element);
    v9 = v8;
    if ( v8 != scan._vptr_TargetScan
      && (*(*v8 + 139))(v8) != 0
      && (LODWORD(scan.m_viewForward.y) == -1 || LODWORD(scan.m_viewForward.y) == v9->m_iTeamNum.m_Value)
      && (*(v9->_vptr_IHandleEntity + 369))(v9) == 0 )
    {
      v10 = (*(*scan._vptr_TargetScan + 164))(scan._vptr_TargetScan);
      v27.z = v11;
      *&v27.x = v10;
      v28.y = (*(&scan.m_me + 1) * scan.m_bestDot) + *(&v10 + 1);
      v28.z = (scan.m_viewForward.x * scan.m_bestDot) + v11;
      v28.x = (scan.m_bestDot * *&scan.m_me) + *&v10;
      *&v35.x = (*(v9->_vptr_IHandleEntity + 62))(v9);
      v35.z = v12;
      CalcClosestPointOnLineSegment(&v35, &v27, &v28, &v29, 0);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      y = AbsOrigin->y;
      z = AbsOrigin->z;
      v27.x = AbsOrigin->x;
      vptr_ICollideable = v9->m_Collision._vptr_ICollideable;
      v27.y = y;
      v27.z = z;
      v28 = v27;
      v17 = (vptr_ICollideable[2])(&v9->m_Collision);
      v28.z = v28.z + *(v17 + 8);
      CalcClosestPointOnLineSegment(&v29, &v27, &v28, &v26, 0);
      if ( LOBYTE(scan.m_maxRange) != 0 )
      {
        NDebugOverlay::Cross3D(&v26, 1.0, 255, 255, 255, 1, -1.0);
        NDebugOverlay::Line(&v28, &v27, 255, 0, 0, 1, -1.0);
      }
      v33 = (*(*scan._vptr_TargetScan + 164))(scan._vptr_TargetScan);
      v34 = v18;
      v30.z = v26.z - v18;
      v30.y = v26.y - *(&v33 + 1);
      v30.x = v26.x - *&v33;
      VectorNormalize(&v30);
      CCollisionProperty::CalcNearestPoint(scan._vptr_TargetScan + 5, &v26, &v31);
      CCollisionProperty::CalcNearestPoint(&v9->m_Collision, &v31, &v32);
      if ( fsqrt(
             (((v31.x - v32.x) * (v31.x - v32.x)) + ((v31.y - v32.y) * (v31.y - v32.y)))
           + ((v31.z - v32.z) * (v31.z - v32.z))) <= scan.m_closeDot )
      {
        *&v24 = (scan.m_viewForward.x * v30.z) + ((*(&scan.m_me + 1) * v30.y) + (*&scan.m_me * v30.x));
        if ( *&v24 > scan.m_viewForward.z
          && CBaseCombatCharacter::IsAbleToSee(
               scan._vptr_TargetScan,
               v9,
               CBaseCombatCharacter::FieldOfViewCheckType::DISREGARD_FOV) )
        {
          if ( *&v24 >= *&scan.m_team )
          {
            *&scan.m_debug = v9;
            scan.m_team = v24;
          }
          m_target_low = SLODWORD(scan.m_target);
          m_target = scan.m_target;
          if ( LODWORD(scan.m_target) == LODWORD(scan.m_allTargets.m_Memory.m_pMemory) )
          {
            CUtlMemory<CBaseCombatCharacter *,int>::Grow(&scan.m_allTargets, 1);
            m_target = scan.m_target;
          }
          LODWORD(scan.m_target) = m_target + 1;
          v21 = (*&scan.m_allTargets.m_Size + 8 * m_target_low);
          if ( v21 != 0 )
            *v21 = v9;
        }
      }
    }
    m_pMemory = this->m_botList.m_Memory.m_pMemory;
    m_Head = m_pMemory[v7].m_Next;
  }
  while ( m_Head != 0xFFFF );
  v22 = *&scan.m_debug;
  if ( *&scan.m_debug != 0 && (*(**&scan.m_debug + 1224LL))(*&scan.m_debug) != 0 )
    result = (*(*v22 + 1224LL))(v22);
  else
LABEL_26:
    result = 0;
  LODWORD(scan.m_target) = 0;
  v36 = off_47B2430;
  if ( (HIDWORD(scan.m_allTargets.m_Memory.m_pMemory) & 0xC0000000) == 0 )
  {
    v25 = result;
    CUtlMemory<CBaseCombatCharacter *,int>::Purge(&scan.m_allTargets);
    result = v25;
    if ( (HIDWORD(scan.m_allTargets.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseCombatCharacter *,int>::Purge(&scan.m_allTargets);
      return v25;
    }
  }
  return result;
}


// NextBotManager::CollectAllBots  (line 634, @0x0000000002f1c020, libserver.so)  // inlines: AddToTail, CopyConstruct<INextBot*>, Element, GrowMemory, RemoveAll, operator[]
// calls: CUtlMemory<INextBot*, int>::Grow
// callers: CFish::Update, CDOTAGamerules::SetGameWinner, PerformDOTALoadGame, CDOTA_UnitFilterCache::UpdateUnitsThisFrame
void __fastcall NextBotManager::CollectAllBots(
        NextBotManager *const this,
        CUtlVector<INextBot*,CUtlMemory<INextBot*,int> > *pBotVector)
{
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  __int64 v6; // r13
  INextBot **v7; // rdx
  __int64 v8; // rbx
  int m_Size; // edx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v10; // r14
  CUtlVectorBase<INextBot*,CUtlMemory<INextBot*,int> >::CAllocator *p_m_Memory; // [rsp+8h] [rbp-38h]

  if ( pBotVector != 0 )
  {
    pBotVector->m_Size = 0;
    m_Head = this->m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      m_pMemory = this->m_botList.m_Memory.m_pMemory;
      v6 = 0;
      p_m_Memory = &pBotVector->m_Memory;
      while ( 1 )
      {
        v8 = m_Head;
        m_Size = v6;
        v10 = &m_pMemory[v8];
        if ( pBotVector->m_Memory.m_nAllocationCount == v6 )
        {
          CUtlMemory<INextBot *,int>::Grow(p_m_Memory, 1);
          m_Size = pBotVector->m_Size;
        }
        pBotVector->m_Size = m_Size + 1;
        v7 = &pBotVector->m_Memory.m_pMemory[v6];
        if ( v7 != 0 )
          *v7 = v10->m_Element;
        m_pMemory = this->m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v8].m_Next;
        if ( m_Head == 0xFFFF )
          break;
        v6 = pBotVector->m_Size;
      }
    }
  }
}


// NextBotDestroyer::NextBotDestroyer  (line 653, @0x0000000002f199f0, libserver.so)
void __fastcall NextBotDestroyer::NextBotDestroyer(NextBotDestroyer *const this, int nTeam)
{
  this->m_nTeam = nTeam;
}


// NextBotDestroyer::operator()  (line 660, @0x0000000002f19a00, libserver.so)  // inlines: GetTeamNumber, ToBasePlayer
// calls: UTIL_Remove, UTIL_VarArgs
// callers: NextBotManager::DeleteAll, NextBotManager::DeleteAllByTeamIndex
// strings: "kick \"%s\"\n"
bool __fastcall NextBotDestroyer::operator()(NextBotDestroyer *const this, INextBot *pBot)
{
  __int64 v4; // rax
  CEntityInstance *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // rdi
  void (__fastcall *v10)(IVEngineServer2 *, char *); // r12
  const char *v11; // rax
  char *v12; // rax

  if ( this->m_nTeam != -1 && this->m_nTeam != *((*(pBot->_vptr_INextBotEventResponder + 66))(pBot) + 383) )
    return 1;
  v4 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
  if ( (*(*v4 + 1120LL))(v4) != 0 )
  {
    v6 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
    v7 = v6;
    if ( v6 != 0 )
    {
      v8 = (*(*v6 + 1120LL))(v6);
      v9 = 0;
      if ( v8 != 0 )
        v9 = v7;
    }
    else
    {
      v9 = 0;
    }
    v10 = *(*engine + 280LL);
    v11 = (*(*v9 + 848LL))(v9);
    v12 = UTIL_VarArgs("kick \"%s\"\n", v11);
    v10(engine, v12);
    return 1;
  }
  else
  {
    v5 = (*(pBot->_vptr_INextBotEventResponder + 66))(pBot);
    UTIL_Remove(v5);
    return 1;
  }
}


// NBDebugAutocomplete  (line 700, @0x0000000002f19cb0, libserver.so)  // inlines: V_StrSlice<long unsigned int>, V_strlen, V_strnicmp_fast<int>, _V_strstr, strstr
// calls: strchr, _V_StrSlice, strlen, _V_strnicmp_fast, V_snprintf, __stack_chk_fail
// callers: CommandCompletionCallback_V1_Adaptor<NBDebugAutocomplete>
int __fastcall NBDebugAutocomplete(const char *partial, char (*commands)[64])
{
  char *v3; // rdx
  int result; // eax
  signed __int64 v5; // rdx
  __int64 v6; // r12
  const char *v7; // r12
  unsigned int v8; // r13d
  const char *const *v9; // rbx
  __int64 v10; // r14
  const char *v11; // r15
  char commandName[72]; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v3 = strchr(partial, 32);
  result = 0;
  if ( v3 != 0 )
  {
    v5 = v3 - partial;
    v6 = v5;
    _V_StrSlice(partial, 0, v5, commandName, 64);
    v7 = &partial[v6 + 1];
    if ( v7 != 0 )
      v8 = strlen(v7);
    else
      v8 = 0;
    v9 = &debugTypeName[1];
    v10 = 0;
    v11 = "BEHAVIOR";
    while ( 1 )
    {
      while ( _V_strnicmp_fast(v11, v7, v8) != 0 )
      {
        v11 = *(++v9 - 1);
        if ( v11 == 0 )
          return v10;
      }
      V_snprintf(&(*commands)[64 * v10], 64, "%s %s", commandName, v11);
      if ( v10 == 63 )
        break;
      v11 = *(++v9 - 1);
      v10 = v10 + 1;
      if ( v11 == 0 )
        return v10;
    }
    return 64;
  }
  return result;
}


// nb_delete_all  (line 736, @0x0000000002f19c00, libserver.so)  // inlines: Arg, operator[]
// calls: UTIL_IsCommandIssuedByServerAdmin, NextBotManager::DeleteAll
void __fastcall nb_delete_all(const CCommandContext *const ctx, const CCommand *const args)
{
  const char *v3; // rsi

  if ( UTIL_IsCommandIssuedByServerAdmin() )
  {
    v3 = 0;
    if ( args->m_nArgc > 1 )
      v3 = args->m_ppArgv[1];
    NextBotManager::DeleteAll(&g_NextBotManager, v3);
  }
}


// CC_SetDebug  (line 748, @0x0000000002f11c10, libserver.so)  // inlines: Arg, SetDebugTypes, V_strlen, V_strnicmp_fast<int>, operator[]
// calls: strlen, _V_strnicmp_fast, Msg
// strings: "Invalid debug type '%s'\n", "Debugging stopped\n"
// globals: debugTypeName
void __fastcall CC_SetDebug(const CCommandContext *const ctx, const CCommand *const args)
{
  int m_nArgc; // r15d
  int v4; // r12d
  char *v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rdx
  const char *v8; // rdi
  unsigned int v9; // eax
  const char *v10; // rdi
  const char *v11; // rax
  const char *v12; // rsi
  unsigned int debugType; // [rsp+Ch] [rbp-44h]
  char *v14; // [rsp+18h] [rbp-38h]

  if ( args->m_nArgc <= 1 )
  {
    Msg("Debugging stopped\n");
    g_NextBotManager.m_debugType = 0;
  }
  else
  {
    m_nArgc = args->m_nArgc;
    v4 = 1;
    debugType = 0;
    do
    {
      v5 = "BEHAVIOR";
      v6 = 0;
      while ( 1 )
      {
        v11 = "";
        if ( v4 < m_nArgc )
          v11 = args->m_ppArgv[v4];
        if ( *v11 == 42 )
        {
          debugType = 0xFFFF;
          goto LABEL_16;
        }
        v7 = 0;
        if ( m_nArgc > 1 )
        {
          v8 = args->m_ppArgv[1];
          if ( v8 != 0 )
          {
            v14 = v5;
            v9 = strlen(v8);
            v5 = v14;
            v7 = v9;
          }
        }
        v10 = "";
        if ( v4 < m_nArgc )
          v10 = args->m_ppArgv[v4];
        if ( _V_strnicmp_fast(v10, v5, v7) == 0 )
        {
          m_nArgc = args->m_nArgc;
          debugType |= 1 << v6;
          goto LABEL_16;
        }
        v5 = debugTypeName[++v6];
        if ( v5 == 0 )
          break;
        m_nArgc = args->m_nArgc;
      }
      v12 = "";
      if ( args->m_nArgc > v4 )
        v12 = args->m_ppArgv[v4];
      Msg("Invalid debug type '%s'\n", v12);
      m_nArgc = args->m_nArgc;
LABEL_16:
      ++v4;
    }
    while ( v4 < m_nArgc );
    g_NextBotManager.m_debugType = debugType;
  }
}


// CC_SetDebugFilter  (line 793, @0x0000000002f1bf30, libserver.so)  // inlines: AddToTail, Arg, CopyConstruct<NextBotManager::DebugFilter>, DebugFilterAdd, DebugFilterClear, Element, GrowMemory, RemoveAll, operator[]
// calls: NextBotManager::DebugFilterAdd, V_atoi, CUtlMemory<NextBotManager::DebugFilter, int>::Grow, Msg
// strings: "Debug filter cleared.\n"
void __fastcall CC_SetDebugFilter(const CCommandContext *const ctx, const CCommand *const args)
{
  int v3; // ebx
  const char *v4; // rsi
  char *v5; // r15
  int v6; // eax
  __int64 m_Size; // r15
  int v8; // edx
  NextBotManager::DebugFilter *v9; // rdx
  int index; // [rsp+Ch] [rbp-34h]

  if ( args->m_nArgc > 1 )
  {
    v3 = 1;
    while ( 1 )
    {
      v5 = args + 8 * v3;
      v6 = V_atoi(*(v5 + 129));
      if ( v6 <= 0 )
        break;
      m_Size = g_NextBotManager.m_debugFilterList.m_Size;
      v8 = g_NextBotManager.m_debugFilterList.m_Size;
      if ( m_Size == g_NextBotManager.m_debugFilterList.m_Memory.m_nAllocationCount )
      {
        index = v6;
        CUtlMemory<NextBotManager::DebugFilter,int>::Grow(&g_NextBotManager.m_debugFilterList.m_Memory, 1);
        v8 = g_NextBotManager.m_debugFilterList.m_Size;
        v6 = index;
      }
      g_NextBotManager.m_debugFilterList.m_Size = v8 + 1;
      v9 = &g_NextBotManager.m_debugFilterList.m_Memory.m_pMemory[m_Size];
      if ( v9 != 0 )
      {
        v9->index.m_Data = v6;
        ++v3;
        v9->name[0] = 0;
        if ( args->m_nArgc <= v3 )
          return;
      }
      else
      {
LABEL_6:
        if ( args->m_nArgc <= ++v3 )
          return;
      }
    }
    v4 = "";
    if ( args->m_nArgc > v3 )
      v4 = *(v5 + 129);
    NextBotManager::DebugFilterAdd(&g_NextBotManager, v4);
    goto LABEL_6;
  }
  Msg("Debug filter cleared.\n");
  g_NextBotManager.m_debugFilterList.m_Size = 0;
}


// nb_dump_debug_history  (line 819, @0x0000000002f1b9c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetBool, GetInt, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: BlackBox_Record, UTIL_GetCommandClient, NextBotManager::GetBotUnderCrosshair, INextBot::GetDebugHistory, CUtlMemory<const INextBot::NextBotDebugLineType*, int>::Purge, UTIL_GetListenServerHost, _Unwind_Resume
// strings: "nb_debug_history 0", "no bot under crosshairs"
void __fastcall nb_dump_debug_history(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  INextBot *BotUnderCrosshair; // rax
  __int64 v4; // r12
  int i; // ebx
  CUtlVector<const INextBot::NextBotDebugLineType*,CUtlMemory<const INextBot::NextBotDebugLineType*,int> > lines; // [rsp+0h] [rbp-40h] BYREF

  if ( NextBotDebugHistory.m_pParent->m_Value.m_nValue != 0 )
  {
    CommandClient = UTIL_GetCommandClient();
    if ( CommandClient == 0 )
      CommandClient = UTIL_GetListenServerHost();
    BotUnderCrosshair = NextBotManager::GetBotUnderCrosshair(&g_NextBotManager, CommandClient);
    if ( BotUnderCrosshair != 0 )
    {
      lines.m_Size = 0;
      lines.m_Memory.m_pMemory = 0;
      lines.m_Memory.m_nAllocationCount = 0;
      lines.m_Memory.m_nGrowSize = 0;
      INextBot::GetDebugHistory(BotUnderCrosshair, 0xFF7Fu, &lines);
      v4 = 0;
      for ( i = 0; lines.m_Size > i; ++v4 )
      {
        BlackBox_Record("bot", "%s", lines.m_Memory.m_pMemory[v4]->data);
        ++i;
      }
      lines.m_Size = 0;
      if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<INextBot::NextBotDebugLineType const*,int>::Purge(&lines.m_Memory);
        if ( (lines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<INextBot::NextBotDebugLineType const*,int>::Purge(&lines.m_Memory);
      }
    }
    else
    {
      BlackBox_Record("bot", "no bot under crosshairs");
    }
  }
  else
  {
    BlackBox_Record("bot", "nb_debug_history 0");
  }
}


// CC_SelectBot  (line 895, @0x0000000002f12320, libserver.so)  // inlines: Select, Vector, VectorAdd, operator+
// calls: UTIL_GetListenServerHost, __dynamic_cast, NDebugOverlay::Circle
void __fastcall CC_SelectBot(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // rax
  const void *v3; // rax
  const void *v4; // rbx
  INextBot *v5; // r12
  __int64 v6; // rax
  float v7; // xmm1_4
  double v8; // [rsp+20h] [rbp-50h]
  Vector position; // [rsp+30h] [rbp-40h] BYREF
  Vector xAxis; // [rsp+40h] [rbp-30h] BYREF
  Vector yAxis; // [rsp+50h] [rbp-20h] BYREF

  ListenServerHost = UTIL_GetListenServerHost();
  if ( ListenServerHost != 0 )
  {
    v3 = (*(ListenServerHost->_vptr_IHandleEntity + 531))(ListenServerHost);
    v4 = v3;
    if ( v3 != 0
      && (v5 = __dynamic_cast(v3, &`typeinfo for'CBaseEntity, &`typeinfo for'INextBot, -2)) != 0
      && (*(*v4 + 1112LL))(v4) != 0 )
    {
      yAxis.y = -1.0;
      yAxis.x = 0.0;
      yAxis.z = 0.0;
      xAxis.y = 0.0;
      xAxis.z = 0.0;
      g_NextBotManager.m_pSelectedBot = v5;
      xAxis.x = 1.0;
      v6 = (*(v5->_vptr_INextBotEventResponder + 68))(v5);
      v8 = (*(*v6 + 784LL))(v6);
      position.z = v7 + 5.0;
      position.y = *(&v8 + 1) + 0.0;
      position.x = *&v8 + 0.0;
      NDebugOverlay::Circle(&position, &xAxis, &yAxis, 25.0, 0, 255, 0, 255, 0, 1.0);
    }
    else
    {
      g_NextBotManager.m_pSelectedBot = 0;
    }
  }
}


// CC_ForceLookAt  (line 926, @0x0000000002f12290, libserver.so)  // inlines: CHeadLookParams
// calls: UTIL_GetListenServerHost
// strings: "Aim forced"
void __fastcall CC_ForceLookAt(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *ListenServerHost; // rbx
  INextBot *m_pSelectedBot; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64 *, CBasePlayer *, _DWORD *); // rcx
  _DWORD v7[2]; // [rsp+0h] [rbp-30h] BYREF
  __int64 v8; // [rsp+8h] [rbp-28h]
  const char *v9; // [rsp+10h] [rbp-20h]
  char v10; // [rsp+18h] [rbp-18h]
  int v11; // [rsp+1Ch] [rbp-14h]

  ListenServerHost = UTIL_GetListenServerHost();
  m_pSelectedBot = g_NextBotManager.m_pSelectedBot;
  if ( ListenServerHost != 0 && m_pSelectedBot != 0 )
  {
    v4 = (*(m_pSelectedBot->_vptr_INextBotEventResponder + 69))(m_pSelectedBot);
    v5 = *v4;
    v9 = "Aim forced";
    v7[0] = 3;
    v7[1] = 1259902592;
    v8 = 0;
    v6 = *(v5 + 560);
    v10 = 1;
    v11 = 1048576000;
    v6(v4, ListenServerHost, v7);
  }
}


// CC_WarpSelectedHere  (line 939, @0x0000000002f13c60, libserver.so)  // inlines: CGameTrace, DidHit, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: UTIL_GetCommandClient, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
void __fastcall CC_WarpSelectedHere(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  INextBot *m_pSelectedBot; // r12
  double v4; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float m_fValue; // xmm3_4
  __int64 v9; // rax
  float v10; // [rsp+4h] [rbp-19Ch]
  float v11; // [rsp+4h] [rbp-19Ch]
  float v12; // [rsp+8h] [rbp-198h]
  float v13; // [rsp+8h] [rbp-198h]
  float v14; // [rsp+Ch] [rbp-194h]
  float v15; // [rsp+Ch] [rbp-194h]
  Vector forward; // [rsp+10h] [rbp-190h] BYREF
  Vector v17; // [rsp+20h] [rbp-180h]
  double v18; // [rsp+30h] [rbp-170h]
  float v19; // [rsp+38h] [rbp-168h]
  CTraceFilterSimple v20; // [rsp+40h] [rbp-160h] BYREF
  Vector spot; // [rsp+80h] [rbp-120h] BYREF
  int v22; // [rsp+8Ch] [rbp-114h]
  float v23; // [rsp+90h] [rbp-110h]
  float v24; // [rsp+94h] [rbp-10Ch]
  float v25; // [rsp+98h] [rbp-108h]
  int v26; // [rsp+9Ch] [rbp-104h]
  int v27; // [rsp+A0h] [rbp-100h]
  int v28; // [rsp+A4h] [rbp-FCh]
  int v29; // [rsp+A8h] [rbp-F8h]
  int v30; // [rsp+ACh] [rbp-F4h]
  int v31; // [rsp+B0h] [rbp-F0h]
  int v32; // [rsp+B4h] [rbp-ECh]
  int v33; // [rsp+B8h] [rbp-E8h]
  int v34; // [rsp+BCh] [rbp-E4h]
  float v35; // [rsp+C0h] [rbp-E0h]
  char v36; // [rsp+C4h] [rbp-DCh]
  bool v37; // [rsp+C5h] [rbp-DBh]
  trace_t result; // [rsp+D0h] [rbp-D0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  m_pSelectedBot = g_NextBotManager.m_pSelectedBot;
  if ( CommandClient != 0 && m_pSelectedBot != 0 )
  {
    CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
    memset(&result.m_ShapeAttributes, 0, 31);
    result.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&result);
    v10 = forward.x * 999999.88;
    v12 = forward.y * 999999.88;
    v14 = 999999.88 * forward.z;
    v4 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    vptr_IHandleEntity = CommandClient->_vptr_IHandleEntity;
    v18 = v4;
    v19 = v6;
    v11 = v10 + *&v4;
    v15 = v6 + v14;
    v13 = v12 + *(&v4 + 1);
    *&v17.x = (vptr_IHandleEntity[164])(CommandClient);
    v17.z = v7;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    v22 = 0;
    v35 = m_fValue;
    v23 = v11 - v17.x;
    v24 = v13 - v17.y;
    v26 = 0;
    v30 = 0;
    v25 = v15 - v7;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
    spot = v17;
    v37 = (((v23 * v23) + (v24 * v24)) + (v25 * v25)) != 0.0;
    v36 = 1;
    CTraceFilterSimple::CTraceFilterSimple(&v20, CommandClient, 4, 0);
    v20.m_attr.m_nInteractsWith |= 0x84041uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &spot, &v20, &result);
    if ( result.fraction < 1.0 || result.startsolid )
    {
      spot.y = result.endpos.y + 0.0;
      spot.z = result.endpos.z + 10.0;
      spot.x = result.endpos.x + 0.0;
      v9 = (*(m_pSelectedBot->_vptr_INextBotEventResponder + 66))(m_pSelectedBot);
      (*(*v9 + 1024LL))(v9, &spot, &vec3_angle, &vec3_origin);
    }
  }
}


