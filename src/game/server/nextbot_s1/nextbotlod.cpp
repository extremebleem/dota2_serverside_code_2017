
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNextbotLodManager::CNextbotLodManager  (line 37, @0x0000000002f1a760, libserver.so)  // inlines: CUtlMemory, CUtlScalarHash, CUtlVector, CUtlVectorBase, EnsureCapacity, Init, Purge, RemoveAll, SetLodManager, memcpy, ~CUtlMemory, ~CUtlScalarHash, ~CUtlVector, ~CUtlVectorBase
// calls: memcpy, operator delete [], CUtlVectorBase<CNextbotLodManager::NextBotDistSqPair, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int> >::RemoveAll, _Unwind_Resume, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int>::Purge, CUtlMemory<CNextbotLodManager::SourceInfo_t, int>::Purge
void __fastcall CNextbotLodManager::CNextbotLodManager(
        CNextbotLodManager *const this,
        NextBotManager *const rNextbotManager)
{
  bool v3; // cc
  uint32 m_nGrowSize; // eax
  CNextbotLodManager::NextBotDistSqPair *v5; // rsi
  __int64 v6; // rax
  CNextbotLodManager::NextBotDistSqPair *v7; // rax
  CNextbotLodManager::NextBotDistSqPair *m_pMemory; // r12
  CNextbotLodManager::NextBotDistSqPair *v9; // rax

  this->m_NextBotDistSqList.m_Memory.m_nAllocationCount = 0;
  this->_vptr_CNextbotLodManager = &off_47B29D0;
  this->m_rNextbotManager = rNextbotManager;
  this->m_Sources.m_Size = 0;
  this->m_Sources.m_Memory.m_pMemory = 0;
  this->m_Sources.m_Memory.m_nAllocationCount = 0;
  this->m_Sources.m_Memory.m_nGrowSize = 0;
  this->m_NextBotDistSqList.m_Size = 0;
  this->m_NextBotDistSqList.m_Memory.m_pMemory = 0;
  this->m_NextBotDistSqList.m_Memory.m_nGrowSize = 0;
  this->m_MapLodSourceIdToIndex.m_pData = 0;
  this->m_MapLodSourceIdToIndex.m_uiBucketMask = 0;
  this->m_MapLodSourceIdToIndex.m_maxData = 0;
  this->m_MapLodSourceIdToIndex.m_dataCount = 0;
  rNextbotManager->m_pLodManager = this;
  v3 = this->m_NextBotDistSqList.m_Memory.m_nAllocationCount <= 1023;
  this->m_nMaxLodSources = 8;
  this->m_flSourceDecayTime = 2.0;
  this->m_nLimits.m_Memory[0] = 0;
  this->m_flRanges.m_Memory[0] = 0.0;
  this->m_nLimits.m_Memory[1] = 0;
  this->m_flRanges.m_Memory[1] = 0.0;
  if ( v3 )
  {
    m_nGrowSize = this->m_NextBotDistSqList.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_NextBotDistSqList.m_Memory.m_pMemory;
        v9 = (**g_pMemAlloc)(g_pMemAlloc, 0x4000);
        this->m_NextBotDistSqList.m_Memory.m_pMemory = v9;
        if ( m_pMemory != 0 )
          memcpy(v9, m_pMemory, 16LL * this->m_NextBotDistSqList.m_Memory.m_nAllocationCount);
        this->m_NextBotDistSqList.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_NextBotDistSqList.m_Memory.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          v7 = (*(v6 + 8))(g_pMemAlloc, v5, 0x4000);
        else
          v7 = (*v6)(g_pMemAlloc, 0x4000);
        this->m_NextBotDistSqList.m_Memory.m_pMemory = v7;
      }
      this->m_NextBotDistSqList.m_Memory.m_nAllocationCount = 1024;
    }
  }
}


// CNextbotLodManager::Init  (line 49, @0x0000000002f18a30, libserver.so)
void __fastcall CNextbotLodManager::Init(CNextbotLodManager *const this)
{
  this->m_nLimits.m_Memory[0] = 0;
  this->m_flRanges.m_Memory[0] = 0.0;
  this->m_nLimits.m_Memory[1] = 0;
  this->m_flRanges.m_Memory[1] = 0.0;
}


// CNextbotLodManager::SetLodLimit  (line 60, @0x0000000002f18a60, libserver.so)
void __fastcall CNextbotLodManager::SetLodLimit(CNextbotLodManager *const this, int nLodLevel, int nActorLimit)
{
  this->m_nLimits.m_Memory[nLodLevel] = nActorLimit;
}


// CNextbotLodManager::SetLodRange  (line 67, @0x0000000002f18a70, libserver.so)
void __fastcall CNextbotLodManager::SetLodRange(
        CNextbotLodManager *const this,
        int nLodLevel,
        float a3,
        float flDesiredRange)
{
  this->m_flRanges.m_Memory[nLodLevel] = a3;
}


// CNextbotLodManager::DebugDrawLodForCharacter  (line 74, @0x0000000002f18a80, libserver.so)  // inlines: Box, Init, VectorAdd, VectorSubtract, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin
// callers: CNextbotLodManager::DebugDraw
void __fastcall CNextbotLodManager::DebugDrawLodForCharacter(
        const CNextbotLodManager *const this,
        const NextBotCombatCharacter *const rCharacter)
{
  int m_Value; // eax
  const Vector *AbsOrigin; // rax
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm4_4
  VertexColor_t col; // [rsp+10h] [rbp-30h] BYREF
  float v8[4]; // [rsp+20h] [rbp-20h] BYREF
  float v9[4]; // [rsp+30h] [rbp-10h] BYREF

  m_Value = rCharacter->m_nLod.m_Value;
  if ( rCharacter->m_nLod.m_Value != 0 )
  {
    if ( m_Value == 1 )
    {
      col.color = -13434881;
    }
    else if ( m_Value == 2 )
    {
      col.color = -13487361;
    }
  }
  else
  {
    col.color = -13435086;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(rCharacter);
  v4 = AbsOrigin->y + 0.0;
  v5 = AbsOrigin->z + 93.0;
  v6 = AbsOrigin->x + 0.0;
  v8[0] = v6 - 2.5;
  v9[0] = v6 + 2.5;
  v9[1] = v4 + 2.5;
  v8[1] = v4 - 2.5;
  v8[2] = v5 - 2.5;
  v9[2] = v5 + 2.5;
  (*(debugoverlay->_vptr_ISceneViewDebugOverlays + 15))(
    debugoverlay,
    &vec3_origin,
    v8,
    v9,
    &quat_identity,
    &col,
    0.1000000014901161,
    0);
}


// CNextbotLodManager::InvalidateSource  (line 90, @0x0000000002f18c10, libserver.so)  // inlines: operator[]
// callers: CNextbotLodManager::UpdateLods
void __fastcall CNextbotLodManager::InvalidateSource(CNextbotLodManager *const this, int nSourceIndex)
{
  (*(this->_vptr_CNextbotLodManager + 1))(this, this->m_Sources.m_Memory.m_pMemory[nSourceIndex].m_nId, &vec3_invalid);
}


// CNextbotLodManager::DebugDisplay  (line 98, @0x0000000002f1a410, libserver.so)  // inlines: GetNextBotCount, operator!=, operator[]
// calls: V_sprintf_safe<512ul>, NDebugOverlay::ScreenTextLine, __stack_chk_fail
// strings: "-- CNextbotLodManager -- %d LODs, %d NextBots", "LOD %d, range %7.2f, limit %3d (%2d)", "LOD %d, range -------, limit --- (%2d)", "-- LOD num sources = %d", "LOD source %d, id %d, pos (invalid)", "LOD source %d, id %d, pos (%0.2f %0.2f, %0.2f)"
int __fastcall CNextbotLodManager::DebugDisplay(const CNextbotLodManager *const this)
{
  int result; // eax
  unsigned int v3; // r15d
  int v4; // r13d
  CUtlArray<int,3ul> *p_m_nCounts; // r14
  unsigned int v6; // edx
  signed __int64 v7; // rax
  const CNextbotLodManager *v8; // rax
  __int64 v9; // r12
  const CNextbotLodManager *v10; // r15
  __int64 v11; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  int nTotalNextbots; // [rsp+4h] [rbp-25Ch]
  int m_Size; // [rsp+18h] [rbp-248h]
  char textBuf[512]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v17; // [rsp+228h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  result = 0;
  if ( nb_lod_stats.m_pParent->m_Value.m_nValue > 0 )
  {
    v3 = 0;
    nTotalNextbots = this->m_rNextbotManager->m_botList.m_ElementCount;
    V_sprintf_safe<512ul>(textBuf, "-- CNextbotLodManager -- %d LODs, %d NextBots", 3, nTotalNextbots);
    NDebugOverlay::ScreenTextLine(10.0, 10.0, 0, textBuf, 255, 255, 255, 255, 0.01023);
    v4 = 0;
    p_m_nCounts = &this->m_nCounts;
    do
    {
      v6 = v3;
      v7 = p_m_nCounts - &this->m_nCounts;
      ++v3;
      p_m_nCounts = (p_m_nCounts + 4);
      V_sprintf_safe<512ul>(
        textBuf,
        "LOD %d, range %7.2f, limit %3d (%2d)",
        v6,
        *(this->m_flRanges.m_Memory + v7),
        *(this->m_nLimits.m_Memory + v7),
        p_m_nCounts[-1].m_Memory[2]);
      NDebugOverlay::ScreenTextLine(10.0, 10.0, v3, textBuf, 255, 255, 255, 255, 0.01023);
      v4 += p_m_nCounts[-1].m_Memory[2];
    }
    while ( v3 != 2 );
    V_sprintf_safe<512ul>(textBuf, "LOD %d, range -------, limit --- (%2d)", 2, nTotalNextbots - v4);
    NDebugOverlay::ScreenTextLine(10.0, 10.0, 3u, textBuf, 255, 255, 255, 255, 0.01023);
    if ( nb_lod_stats.m_pParent->m_Value.m_nValue <= 1 )
    {
      return 4;
    }
    else
    {
      V_sprintf_safe<512ul>(textBuf, "-- LOD num sources = %d", this->m_Sources.m_Size);
      NDebugOverlay::ScreenTextLine(10.0, 10.0, 4u, textBuf, 255, 255, 255, 255, 0.01023);
      m_Size = this->m_Sources.m_Size;
      if ( m_Size != 0 )
      {
        v8 = this;
        v9 = 0;
        v10 = v8;
        do
        {
          v11 = &v10->m_Sources.m_Memory.m_pMemory[v9];
          v12 = *v11;
          v13 = *(v11 + 4);
          if ( v12 == vec3_invalid.x && v13 == vec3_invalid.y && vec3_invalid.z == *(v11 + 8) )
            V_sprintf_safe<512ul>(textBuf, "LOD source %d, id %d, pos (invalid)", v9, *(v11 + 28));
          else
            V_sprintf_safe<512ul>(
              textBuf,
              "LOD source %d, id %d, pos (%0.2f %0.2f, %0.2f)",
              v9,
              *(v11 + 28),
              v12,
              v13,
              *(v11 + 8));
          NDebugOverlay::ScreenTextLine(10.0, 10.0, v9++ + 5, textBuf, 255, 255, 255, 255, 0.01023);
        }
        while ( m_Size != v9 );
        return m_Size + 5;
      }
      else
      {
        return 5;
      }
    }
  }
  return result;
}


// CNextbotLodManager::DebugDraw  (line 148, @0x0000000002f18b90, libserver.so)  // inlines: GetInt, operator[]
// calls: CNextbotLodManager::DebugDrawLodForCharacter
void __fastcall CNextbotLodManager::DebugDraw(const CNextbotLodManager *const this)
{
  NextBotManager *m_rNextbotManager; // rax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *i; // rcx
  __int64 v5; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v7; // rdx
  INextBot *m_Element; // rdi
  const NextBotCombatCharacter *v9; // rax

  if ( nb_lod_debug.m_pParent->m_Value.m_nValue > 0 )
  {
    m_rNextbotManager = this->m_rNextbotManager;
    m_Head = m_rNextbotManager->m_botList.m_Head;
    if ( m_Head != 0xFFFF )
    {
      for ( i = m_rNextbotManager->m_botList.m_Memory.m_pMemory; ; i = m_pMemory )
      {
        v5 = m_Head;
        m_pMemory = i;
        v7 = &i[v5];
        m_Element = i[v5].m_Element;
        if ( m_Element != 0 )
        {
          v9 = (*(m_Element->_vptr_INextBotEventResponder + 67))(m_Element);
          if ( v9 != 0 )
            CNextbotLodManager::DebugDrawLodForCharacter(this, v9);
          m_pMemory = this->m_rNextbotManager->m_botList.m_Memory.m_pMemory;
          v7 = &m_pMemory[v5];
        }
        m_Head = v7->m_Next;
        if ( m_Head == 0xFFFF )
          break;
      }
    }
  }
}


// CNextbotLodManager::UpdateLod  (line 167, @0x0000000002f18c40, libserver.so)  // inlines: NetworkStateChanged, Set, SetLod, Square<float>, operator=<unsigned int>
// callers: NextBotCombatCharacter::Spawn
void __fastcall CNextbotLodManager::UpdateLod(
        const CNextbotLodManager *const this,
        NextBotCombatCharacter *const rNBCC)
{
  float v4; // xmm0_4
  unsigned __int8 v5; // r12

  v4 = (*(this->_vptr_CNextbotLodManager + 4))(this);
  if ( v4 <= (this->m_flRanges.m_Memory[0] * this->m_flRanges.m_Memory[0]) )
    v5 = 0;
  else
    v5 = (v4 > (this->m_flRanges.m_Memory[1] * this->m_flRanges.m_Memory[1])) + 1;
  if ( v5 != rNBCC->m_nLod.m_Value )
  {
    (*(rNBCC->_vptr_IHandleEntity + 22))(rNBCC, 2040, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    rNBCC->m_nLod.m_Value = v5;
  }
}


// CNextbotLodManager::Update  (line 181, @0x0000000002f1c660, libserver.so)
// calls: CNextbotLodManager::UpdateLods
void __fastcall CNextbotLodManager::Update(CNextbotLodManager *const this)
{
  CNextbotLodManager::UpdateLods(this);
  (*(this->_vptr_CNextbotLodManager + 2))(this);
  (*(this->_vptr_CNextbotLodManager + 3))(this);
}


// CNextbotLodManager::UpdateLods  (line 190, @0x0000000002f1c2a0, libserver.so)  // inlines: AddToTail, CopyConstruct<CNextbotLodManager::NextBotDistSqPair>, Element, GetFloat, GetInt, GrowMemory, Max<float>, NetworkStateChanged, Set, SetLod, SetLodLimit, SetLodRange, Square<float>, __final_insertion_sort<CNextbotLodManager::NextBotDistSqPair*, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>, __lg, __unguarded_insertion_sort<CNextbotLodManager::NextBotDistSqPair*, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>, end, operator!=, operator=<unsigned int>, operator[], sort<CNextbotLodManager::NextBotDistSqPair*, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>
// calls: CGlobalVarsBase::curtime, CNextbotLodManager::InvalidateSource, CUtlVectorBase<CNextbotLodManager::NextBotDistSqPair, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int> >::RemoveAll, std::__introsort_loop<CNextbotLodManager::NextBotDistSqPair*, long int, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>, std::__insertion_sort<CNextbotLodManager::NextBotDistSqPair*, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>, std::__unguarded_linear_insert<CNextbotLodManager::NextBotDistSqPair*, bool (*)(const CNextbotLodManager::NextBotDistSqPair&, const CNextbotLodManager::NextBotDistSqPair&)>, CUtlMemory<CNextbotLodManager::NextBotDistSqPair, int>::Grow
// callers: CNextbotLodManager::Update
// globals: CNextbotLodManager::SortCharacterDistSqPair(CNextbotLodManager::NextBotDistSqPair const&,CNextbotLodManager::NextBotDistSqPair const&)
void __fastcall CNextbotLodManager::UpdateLods(CNextbotLodManager *const this)
{
  __int64 v2; // rbx
  float m_fValue; // xmm0_4
  float v4; // xmm0_4
  int m_Size; // r13d
  int v6; // esi
  CNextbotLodManager::SourceInfo_t *v7; // rax
  double v8; // xmm0_8
  NextBotManager *m_rNextbotManager; // rax
  __int64 m_Head; // rbx
  UtlLinkedListElem_t<INextBot*,short unsigned int> *m_pMemory; // rax
  UtlLinkedListElem_t<INextBot*,short unsigned int> *v12; // rdx
  __int64 v13; // rbx
  INextBot *m_Element; // rdi
  NextBotCombatCharacter *v15; // r14
  int v16; // r15d
  int v17; // eax
  CNextbotLodManager::NextBotDistSqPair *v18; // rax
  int v19; // eax
  CNextbotLodManager::NextBotDistSqPair *v20; // r14
  CNextbotLodManager::NextBotDistSqPair *v21; // r13
  CNextbotLodManager::NextBotDistSqPair *v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  CNextbotLodManager::NextBotDistSqPair *v25; // rbx
  CNextbotLodManager::NextBotDistSqPair *v26; // rdi
  unsigned __int64 v27; // r15
  int v28; // ebx
  __int64 v29; // r13
  CNextbotLodManager::NextBotDistSqPair *v30; // rax
  NextBotCombatCharacter *m_pNBCC; // r14
  double v32; // xmm1_8
  _DWORD *v33; // rax
  unsigned int flDistSq; // [rsp+8h] [rbp-38h]
  float v35; // [rsp+Ch] [rbp-34h]
  float v36; // [rsp+Ch] [rbp-34h]

  v2 = 0;
  this->m_nLimits.m_Memory[0] = nb_lod_0_limit.m_pParent->m_Value.m_nValue;
  m_fValue = nb_lod_0_range.m_pParent->m_Value.m_fValue;
  this->m_flRanges.m_Memory[0] = m_fValue;
  this->m_nLimits.m_Memory[1] = nb_lod_1_limit.m_pParent->m_Value.m_nValue;
  this->m_flRanges.m_Memory[1] = fmaxf(m_fValue, nb_lod_1_range.m_pParent->m_Value.m_fValue);
  v4 = CGlobalVarsBase::curtime(gpGlobals, 0);
  m_Size = this->m_Sources.m_Size;
  if ( m_Size != 0 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v2;
        v7 = &this->m_Sources.m_Memory.m_pMemory[v2];
        if ( (v4 - v7->m_flUpdateTime) > this->m_flSourceDecayTime
          && (vec3_invalid.x != v7->m_vPos.x || vec3_invalid.y != v7->m_vPos.y || vec3_invalid.z != v7->m_vPos.z) )
        {
          break;
        }
        if ( m_Size == ++v2 )
          goto LABEL_7;
      }
      ++v2;
      v35 = v4;
      CNextbotLodManager::InvalidateSource(this, v6);
      v4 = v35;
    }
    while ( m_Size != v2 );
  }
LABEL_7:
  this->m_nCounts.m_Memory[0] = 0;
  this->m_nCounts.m_Memory[1] = 0;
  CUtlVectorBase<CNextbotLodManager::NextBotDistSqPair,CUtlMemory<CNextbotLodManager::NextBotDistSqPair,int>>::RemoveAll(&this->m_NextBotDistSqList);
  m_rNextbotManager = this->m_rNextbotManager;
  m_Head = m_rNextbotManager->m_botList.m_Head;
  v36 = this->m_flRanges.m_Memory[1] * this->m_flRanges.m_Memory[1];
  if ( m_Head != 0xFFFF )
  {
    m_pMemory = m_rNextbotManager->m_botList.m_Memory.m_pMemory;
    while ( 1 )
    {
      v13 = m_Head;
      v12 = &m_pMemory[v13];
      m_Element = m_pMemory[v13].m_Element;
      if ( m_Element == 0 )
        goto LABEL_12;
      v15 = (*(m_Element->_vptr_INextBotEventResponder + 67))(m_Element);
      if ( v15 != 0 )
      {
        *&v8 = (*(this->_vptr_CNextbotLodManager + 4))(this, v15);
        if ( *&v8 < v36 )
        {
          v16 = this->m_NextBotDistSqList.m_Size;
          v17 = v16;
          if ( v16 == this->m_NextBotDistSqList.m_Memory.m_nAllocationCount )
          {
            flDistSq = LODWORD(v8);
            CUtlMemory<CNextbotLodManager::NextBotDistSqPair,int>::Grow(&this->m_NextBotDistSqList.m_Memory, 1);
            v17 = this->m_NextBotDistSqList.m_Size;
            *&v8 = flDistSq;
          }
          this->m_NextBotDistSqList.m_Size = v17 + 1;
          v18 = &this->m_NextBotDistSqList.m_Memory.m_pMemory[v16];
          if ( v18 != 0 )
          {
            v18->m_pNBCC = v15;
            v18->m_flDistSq = *&v8;
          }
          goto LABEL_20;
        }
        if ( v15->m_nLod.m_Value != 2 )
        {
          (*(v15->_vptr_IHandleEntity + 22))(v15, 2040, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v15->m_nLod.m_Value = 2;
        }
        ++this->m_nCounts.m_Memory[2];
        m_pMemory = this->m_rNextbotManager->m_botList.m_Memory.m_pMemory;
        v12 = &m_pMemory[v13];
LABEL_12:
        m_Head = v12->m_Next;
        if ( m_Head == 0xFFFF )
          break;
      }
      else
      {
LABEL_20:
        m_pMemory = this->m_rNextbotManager->m_botList.m_Memory.m_pMemory;
        m_Head = m_pMemory[v13].m_Next;
        if ( m_Head == 0xFFFF )
          break;
      }
    }
  }
  v19 = this->m_NextBotDistSqList.m_Size;
  v20 = this->m_NextBotDistSqList.m_Memory.m_pMemory;
  v21 = &v20[v19];
  if ( v20 != v21 )
  {
    v22 = &v20[v19];
    v23 = 16LL * v19;
    _BitScanReverse64(&v24, v23 >> 4);
    std::__introsort_loop<CNextbotLodManager::NextBotDistSqPair *,long,bool (*)(CNextbotLodManager::NextBotDistSqPair const&,CNextbotLodManager::NextBotDistSqPair const&)>(
      this->m_NextBotDistSqList.m_Memory.m_pMemory,
      v22,
      2 * (63LL - (v24 ^ 0x3F)),
      CNextbotLodManager::SortCharacterDistSqPair);
    if ( v23 <= 271 )
    {
      std::__insertion_sort<CNextbotLodManager::NextBotDistSqPair *,bool (*)(CNextbotLodManager::NextBotDistSqPair const&,CNextbotLodManager::NextBotDistSqPair const&)>(
        v20,
        v21,
        CNextbotLodManager::SortCharacterDistSqPair);
    }
    else
    {
      v25 = v20 + 16;
      std::__insertion_sort<CNextbotLodManager::NextBotDistSqPair *,bool (*)(CNextbotLodManager::NextBotDistSqPair const&,CNextbotLodManager::NextBotDistSqPair const&)>(
        v20,
        v20 + 16,
        CNextbotLodManager::SortCharacterDistSqPair);
      if ( v21 != &v20[16] )
      {
        do
        {
          v26 = v25++;
          std::__unguarded_linear_insert<CNextbotLodManager::NextBotDistSqPair *,bool (*)(CNextbotLodManager::NextBotDistSqPair const&,CNextbotLodManager::NextBotDistSqPair const&)>(
            v26,
            CNextbotLodManager::SortCharacterDistSqPair);
        }
        while ( v21 != v25 );
        v19 = this->m_NextBotDistSqList.m_Size;
        goto LABEL_26;
      }
    }
    v19 = this->m_NextBotDistSqList.m_Size;
  }
LABEL_26:
  if ( v19 != 0 )
  {
    v27 = 0;
    v28 = 0;
    v29 = 16 * ((v19 - 1) + 1LL);
    do
    {
      v30 = &this->m_NextBotDistSqList.m_Memory.m_pMemory[v27 / 0x10];
      m_pNBCC = v30->m_pNBCC;
      *&v32 = LODWORD(v30->m_flDistSq);
      if ( v30->m_pNBCC != 0 )
      {
        if ( v28 <= 1 )
        {
          do
          {
            v33 = this + v28;
            if ( v33[16] < v33[12] )
            {
              *&v8 = v33[14];
              *&v8 = *&v8 * *&v8;
              if ( *&v32 <= *&v8 )
                break;
            }
            ++v28;
          }
          while ( v28 != 2 );
        }
        if ( v28 != m_pNBCC->m_nLod.m_Value )
        {
          (*(m_pNBCC->_vptr_IHandleEntity + 22))(m_pNBCC, 2040, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v8, v32);
          m_pNBCC->m_nLod.m_Value = v28;
        }
        if ( v28 <= 1 )
          ++this->m_nCounts.m_Memory[v28];
      }
      v27 += 16LL;
    }
    while ( v27 != v29 );
  }
}


// CNextbotLodManager::GetIndexForSource  (line 287, @0x0000000002f18cc0, libserver.so)  // inlines: Element, FindByUniqueKey, HashIntConventional, HashKey32
// callers: CNextbotLodManager::UpdateLodSource
int __fastcall CNextbotLodManager::GetIndexForSource(const CNextbotLodManager *const this, int nSourceId)
{
  CUtlScalarHash<int,CDefaultHash32>::HashScalarData_t *m_pData; // rcx
  unsigned int m_uiBucketMask; // r8d
  signed int v4; // edx
  unsigned int m_uiKey; // edi
  int result; // eax

  m_pData = this->m_MapLodSourceIdToIndex.m_pData;
  m_uiBucketMask = this->m_MapLodSourceIdToIndex.m_uiBucketMask;
  if ( m_pData == 0 )
    return -1;
  v4 = m_uiBucketMask
     & (32
      * (32 * (32 * (nSourceId - 1431655766) + nSourceId - 1431655766 + BYTE1(nSourceId))
       + 32 * (nSourceId - 1431655766)
       + nSourceId
       - 1431655766
       + BYTE1(nSourceId)
       + BYTE2(nSourceId))
      + 32 * (32 * (nSourceId - 1431655766) + nSourceId - 1431655766 + BYTE1(nSourceId))
      + 32 * (nSourceId - 1431655766)
      + nSourceId
      - 1431655766
      + BYTE1(nSourceId)
      + BYTE2(nSourceId)
      + HIBYTE(nSourceId));
  m_uiKey = m_pData[v4].m_uiKey;
  result = -1;
  if ( m_uiKey != -1 )
  {
    if ( nSourceId == m_uiKey )
    {
LABEL_8:
      if ( v4 == -1 )
        return -1;
      else
        return m_pData[v4].m_Data;
    }
    else
    {
      while ( 1 )
      {
        v4 = m_uiBucketMask & (v4 + 1);
        result = m_pData[v4].m_uiKey;
        if ( result == -1 )
          break;
        if ( nSourceId == result )
          goto LABEL_8;
      }
    }
  }
  return result;
}


// CNextbotLodManager::UpdateLodSource  (line 295, @0x0000000002f1bb40, libserver.so)  // inlines: AddToTail, GrowMemory, curtime, operator=, operator[]
// calls: CNextbotLodManager::GetIndexForSource, CUtlScalarHash<int, CDefaultHash32>::Insert, CUtlMemory<CNextbotLodManager::SourceInfo_t, int>::Grow
int __fastcall CNextbotLodManager::UpdateLodSource(
        CNextbotLodManager *const this,
        int nSourceId,
        const Vector *const vNewPos)
{
  int IndexForSource; // eax
  __int64 v7; // rax
  CNextbotLodManager::SourceInfo_t *v8; // rcx
  CNextbotLodManager::SourceInfo_t *v9; // rax
  int result; // eax
  float m_flCurrentTime; // xmm0_4
  CNextbotLodManager::SourceInfo_t *v12; // r12
  CGlobalVars *v13; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  __int64 m_Size; // r14
  CNextbotLodManager::SourceInfo_t *m_pMemory; // rax
  int v17; // eax
  __int64 v18; // r14
  CNextbotLodManager::SourceInfo_t *v19; // r14
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  __int64 v23; // rax
  vec_t *v24; // rdx
  int nSourceIndex[9]; // [rsp+Ch] [rbp-24h] BYREF

  IndexForSource = CNextbotLodManager::GetIndexForSource(this, nSourceId);
  nSourceIndex[0] = IndexForSource;
  if ( IndexForSource < 0 )
  {
    m_Size = this->m_Sources.m_Size;
    if ( m_Size < this->m_nMaxLodSources )
    {
      v17 = this->m_Sources.m_Size;
      if ( m_Size == this->m_Sources.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CNextbotLodManager::SourceInfo_t,int>::Grow(&this->m_Sources.m_Memory, 1);
        v17 = this->m_Sources.m_Size;
      }
      nSourceIndex[0] = m_Size;
      v18 = m_Size;
      this->m_Sources.m_Size = v17 + 1;
      this->m_Sources.m_Memory.m_pMemory[v18].m_nId = nSourceId;
      v19 = &this->m_Sources.m_Memory.m_pMemory[v18];
      x = vec3_invalid.x;
      y = vec3_invalid.y;
      v19->m_vPos.x = vec3_invalid.x;
      z = vec3_invalid.z;
      v23 = nSourceIndex[0];
      v19->m_vPos.y = y;
      v19->m_vPos.z = z;
      v23 *= 32;
      v24 = (&this->m_Sources.m_Memory.m_pMemory->m_vPos.x + v23);
      v24[3] = x;
      v24[4] = y;
      v24[5] = z;
      *(&this->m_Sources.m_Memory.m_pMemory->m_flUpdateTime + v23) = 0.0;
      CUtlScalarHash<int,CDefaultHash32>::Insert(&this->m_MapLodSourceIdToIndex, nSourceId, nSourceIndex);
      v7 = nSourceIndex[0];
    }
    else
    {
      m_pMemory = this->m_Sources.m_Memory.m_pMemory;
      nSourceIndex[0] = 0;
      m_pMemory->m_nId = nSourceId;
      v7 = 0;
    }
  }
  else
  {
    v7 = IndexForSource;
  }
  v8 = &this->m_Sources.m_Memory.m_pMemory[v7];
  v8->m_vPosLast.x = v8->m_vPos.x;
  v8->m_vPosLast.y = v8->m_vPos.y;
  v8->m_vPosLast.z = v8->m_vPos.z;
  v9 = &this->m_Sources.m_Memory.m_pMemory[v7];
  v9->m_vPos.x = vNewPos->x;
  v9->m_vPos.y = vNewPos->y;
  v9->m_vPos.z = vNewPos->z;
  result = nSourceIndex[0];
  m_flCurrentTime = 0.0;
  v12 = &this->m_Sources.m_Memory.m_pMemory[nSourceIndex[0]];
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        (m_pfnWarningFunc)(1, 0.0);
        result = nSourceIndex[0];
      }
    }
    m_flCurrentTime = v13->m_flCurrentTime;
  }
  v12->m_flUpdateTime = m_flCurrentTime;
  return result;
}


// CNextbotLodManager::FindDistSqToClosestLodSource  (line 333, @0x0000000002f18e00, libserver.so)
// calls: CBaseEntity::GetAbsOrigin, CNextbotLodManager::FindDistSqToClosestLodSourceFromPoint
float __fastcall CNextbotLodManager::FindDistSqToClosestLodSource(
        const CNextbotLodManager *const this,
        const NextBotCombatCharacter *const rNBCC)
{
  const Vector *AbsOrigin; // rax

  AbsOrigin = CBaseEntity::GetAbsOrigin(rNBCC);
  return CNextbotLodManager::FindDistSqToClosestLodSourceFromPoint(this, AbsOrigin);
}


// CNextbotLodManager::FindDistSqToClosestLodSourceFromPoint  (line 340, @0x0000000002f18d70, libserver.so)  // inlines: DistToSqr, LengthSqr, Min<float>
// callers: CNextbotLodManager::FindDistSqToClosestLodSource
float __fastcall CNextbotLodManager::FindDistSqToClosestLodSourceFromPoint(
        const CNextbotLodManager *const this,
        const Vector *const vTestPos)
{
  int m_Size; // ecx
  CNextbotLodManager::SourceInfo_t *m_pMemory; // rax
  CNextbotLodManager::SourceInfo_t *v4; // rdx
  float result; // xmm0_4
  __int64 v6; // rcx
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4

  m_Size = this->m_Sources.m_Size;
  if ( m_Size == 0 )
    return 3.4028235e38;
  m_pMemory = this->m_Sources.m_Memory.m_pMemory;
  v4 = m_pMemory + 1;
  result = 3.4028235e38;
  v6 = &m_pMemory[(m_Size - 1) + 1];
  while ( 1 )
  {
    v7 = vTestPos->x - m_pMemory->m_vPos.x;
    v8 = vTestPos->y - m_pMemory->m_vPos.y;
    v9 = vTestPos->z - m_pMemory->m_vPos.z;
    m_pMemory = v4;
    result = fminf(((v7 * v7) + (v8 * v8)) + (v9 * v9), result);
    if ( v4 == v6 )
      break;
    ++v4;
  }
  return result;
}


