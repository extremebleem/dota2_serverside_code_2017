
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_responsedb.cpp  (line 0, @0x0000000001a6a8d0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_responsedb_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// rr2::IResponseDB::CreateDB  (line 22, @0x0000000003112540, libserver.so)  // inlines: CResponseDB, CUtlMemory, CUtlVector, CUtlVectorBase, IResponseDB
// calls: operator new, CUtlSymbolTable::CUtlSymbolTable, operator delete, _Unwind_Resume
// callers: CRuleScriptBridge::InitDB, CSpeechScriptBridge::Init, Crr2LibPort::Crr2LibPort, Crr2LibPort::CreateNewRRDBFromOld
rr2::IResponseDB *__cdecl rr2::IResponseDB::CreateDB()
{
  rr2::IResponseDB *v0; // rbx

  v0 = operator new(0x70u);  // new rr2::CResponseDB  [vptr stores: rr2::IResponseDB, rr2::CResponseDB]
  v0->_vptr_IResponseDB = off_47C4DF0;  // vptr: rr2::IResponseDB
  CUtlSymbolTable::CUtlSymbolTable(&v0->m_SymTab, 0, 64, 1);
  LODWORD(v0[1]._vptr_IResponseDB) = 0;
  v0->_vptr_IResponseDB = off_47C4E50;  // vptr: rr2::CResponseDB
  *&v0[1].m_SymTab.m_Lookup.m_LessFunc.gap0 = 0;
  LODWORD(v0[1].m_SymTab.m_Lookup.m_Elements.m_pMemory) = 0;
  HIDWORD(v0[1].m_SymTab.m_Lookup.m_Elements.m_pMemory) = 0;
  return v0;
}


// rr2::IResponseDB::DestroyDB  (line 27, @0x00000000031125c0, libserver.so)
void __fastcall rr2::IResponseDB::DestroyDB(rr2::IResponseDB *pdb)
{
  if ( pdb != 0 )
    (*(pdb->_vptr_IResponseDB + 1))(pdb);
}


// rr2::CResponseDB::FindMatches  (line 35, @0x00000000031125f0, libserver.so)  // inlines: AddToTail, End, EnsureCapacity, FastRemove, GrowMemory, GuessMatchListSize, PLAT_CPU_TIME, RemoveAll, Sample, Start, Tail, memcpy, operator[]
// calls: rr2::CResponseQuery::Sort, Q_log2, rr2::CRule::Match, CUtlMemory<rr2::MatchInfo_t, int>::Grow, rr2::MatchList_t::SortByScoreDescending, memcpy
int __fastcall rr2::CResponseDB::FindMatches(
        rr2::CResponseDB *const this,
        rr2::CResponseQuery *const query,
        rr2::MatchList_t *const matchlist,
        bool bSortByScore,
        rr2::IResponseDB::MatchProfilingData_t *pProfileInfo)
{
  unsigned __int64 v8; // r13
  unsigned int m_Size; // edi
  signed int v10; // r13d
  __int64 m_nAllocationCount; // rcx
  uint32 m_nGrowSize; // eax
  rr2::MatchInfo_t *v13; // rsi
  int v14; // edx
  int v15; // edx
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  float v18; // xmm0_4
  unsigned __int64 v19; // rax
  uint64 v20; // rdx
  int v21; // eax
  rr2::MatchInfo_t *m_pMemory; // r15
  rr2::MatchInfo_t *v24; // rax
  int v27; // [rsp+1Ch] [rbp-44h]
  CFastTimer matchTimer; // [rsp+20h] [rbp-40h]
  uint64 querySortTimer; // [rsp+28h] [rbp-38h]

  v8 = __rdtsc();
  rr2::CResponseQuery::Sort(query);
  matchlist->m_Size = 0;
  m_Size = this->m_Rules.m_Size;
  querySortTimer = __rdtsc() - v8;
  v10 = Q_log2(m_Size);
  m_nAllocationCount = matchlist->m_Memory.m_nAllocationCount;
  if ( v10 > matchlist->m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = matchlist->m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = matchlist->m_Memory.m_pMemory;
        v24 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v10, *g_pMemAlloc, m_nAllocationCount);
        matchlist->m_Memory.m_pMemory = v24;
        if ( m_pMemory != 0 )
          memcpy(v24, m_pMemory, 24LL * matchlist->m_Memory.m_nAllocationCount);
        matchlist->m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v13 = matchlist->m_Memory.m_pMemory;
        if ( v13 != 0 )
          matchlist->m_Memory.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v13, 24LL * v10);
        else
          matchlist->m_Memory.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 24LL * v10, *g_pMemAlloc, m_nAllocationCount);
      }
      matchlist->m_Memory.m_nAllocationCount = v10;
      LODWORD(m_nAllocationCount) = v10;
    }
  }
  v27 = this->m_Rules.m_Size;
  v14 = matchlist->m_Size;
  matchTimer.m_Duration.m_Int64 = __rdtsc();
  if ( v14 == m_nAllocationCount )
  {
    CUtlMemory<rr2::MatchInfo_t,int>::Grow(&matchlist->m_Memory, 1);
    v14 = matchlist->m_Size;
  }
  v15 = v14 + 1;
  matchlist->m_Size = v15;
  if ( v27 <= 0 )
  {
    v27 = 0;
  }
  else
  {
    v16 = 0;
    v17 = 120 * ((v27 - 1) + 1LL);
    do
    {
      while ( 1 )
      {
        v18 = rr2::CRule::Match(
                &this->m_Rules.m_Memory.m_pMemory[v16 / 0x78],
                query,
                &matchlist->m_Memory.m_pMemory[v15 - 1]);
        v15 = matchlist->m_Size;
        if ( v18 != 0.0 )
          break;
        v16 += 120LL;
        if ( v16 == v17 )
          goto LABEL_17;
      }
      if ( v15 == matchlist->m_Memory.m_nAllocationCount )
      {
        CUtlMemory<rr2::MatchInfo_t,int>::Grow(&matchlist->m_Memory, 1);
        v15 = matchlist->m_Size;
      }
      v16 += 120LL;
      matchlist->m_Size = ++v15;
    }
    while ( v16 != v17 );
  }
LABEL_17:
  if ( v15 > 0 )
    matchlist->m_Size = v15 - 1;
  if ( bSortByScore )
    rr2::MatchList_t::SortByScoreDescending(matchlist);
  v19 = __rdtsc();
  v20 = (v19 | (HIDWORD(v19) << 32)) - matchTimer.m_Duration.m_Int64;
  if ( pProfileInfo != 0 )
  {
    v21 = query->m_facts.m_Size;
    pProfileInfo->nTotalTime.m_Int64 = v20;
    pProfileInfo->nQuerySize = v21;
    pProfileInfo->nRulesTested = v27;
    pProfileInfo->nQuerySortTime.m_Int64 = querySortTimer;
  }
  return matchlist->m_Size;
}


// rr2::CResponseDB::FindBestMatch  (line 86, @0x00000000031122b0, libserver.so)  // inlines: Clear, End, PLAT_CPU_TIME, Sample, Start, operator[]
// calls: rr2::CResponseQuery::Sort, rr2::CRule::Match
rr2::MatchInfo_t *__fastcall rr2::CResponseDB::FindBestMatch(
        rr2::MatchInfo_t *__return_ptr retstr,
        rr2::CResponseDB *const this,
        rr2::CResponseQuery *const query,
        rr2::IResponseDB::MatchProfilingData_t *pProfileInfo)
{
  unsigned __int64 v7; // r12
  int m_Size; // esi
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  float i; // xmm0_4
  unsigned __int64 v12; // rax
  uint64 v13; // rdx
  int v14; // eax
  CFastTimer matchTimer; // [rsp+10h] [rbp-70h]
  uint64 querySortTimer; // [rsp+18h] [rbp-68h]
  int v19; // [rsp+28h] [rbp-58h]
  float score; // [rsp+2Ch] [rbp-54h]
  rr2::MatchInfo_t test; // [rsp+30h] [rbp-50h] BYREF

  retstr->score = -2147483600.0;
  retstr->optionalCriteriaMatched = 0;
  retstr->mandatoryCriteriaMatched = 0;
  retstr->pRulePayload = 0;
  retstr->m_pRule = 0;
  v7 = __rdtsc();
  rr2::CResponseQuery::Sort(query);
  querySortTimer = __rdtsc() - v7;
  m_Size = this->m_Rules.m_Size;
  v19 = m_Size;
  matchTimer.m_Duration.m_Int64 = __rdtsc();
  if ( m_Size <= 0 )
  {
    v19 = 0;
  }
  else
  {
    v9 = 0;
    score = -2147483600.0;
    v10 = 120 * ((m_Size - 1) + 1LL);
    for ( i = rr2::CRule::Match(this->m_Rules.m_Memory.m_pMemory, query, &test);
          ;
          i = rr2::CRule::Match(&this->m_Rules.m_Memory.m_pMemory[v9 / 0x78], query, &test) )
    {
      if ( i >= score )
        *retstr = test;
      v9 += 120LL;
      if ( v9 == v10 )
        break;
      score = retstr->score;
    }
  }
  v12 = __rdtsc();
  v13 = (v12 | (HIDWORD(v12) << 32)) - matchTimer.m_Duration.m_Int64;
  if ( pProfileInfo != 0 )
  {
    v14 = query->m_facts.m_Size;
    pProfileInfo->nTotalTime.m_Int64 = v13;
    pProfileInfo->nQuerySize = v14;
    pProfileInfo->nRulesTested = v19;
    pProfileInfo->nQuerySortTime.m_Int64 = querySortTimer;
  }
  return retstr;
}


// rr2::CResponseDB::GuessMatchListSize  (line 126, @0x00000000031125e0, libserver.so)
// calls: Q_log2
int __fastcall rr2::CResponseDB::GuessMatchListSize(rr2::CResponseDB *const this, rr2::CResponseQuery *const query)
{
  return Q_log2(this->m_Rules.m_Size);
}


// rr2::CResponseDB::AllocRule  (line 137, @0x0000000003112840, libserver.so)  // inlines: AddToTail, CRule, CUtlMemoryConservative, CUtlString, CUtlVectorBase, CUtlVectorConservative, Construct<rr2::CRule>, CriteriaList_t, Element, GrowMemory, operator[]
// calls: CUtlMemory<rr2::CRule, int>::Grow
rr2::CRule *__fastcall rr2::CResponseDB::AllocRule(rr2::CResponseDB *const this)
{
  int m_Size; // r12d
  int v3; // eax
  rr2::CRule *v4; // rdx

  m_Size = this->m_Rules.m_Size;
  v3 = m_Size;
  if ( m_Size == this->m_Rules.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<rr2::CRule,int>::Grow(&this->m_Rules.m_Memory, 1);
    v3 = this->m_Rules.m_Size;
  }
  this->m_Rules.m_Size = v3 + 1;
  v4 = &this->m_Rules.m_Memory.m_pMemory[m_Size];
  if ( v4 == 0 )
    return 0;
  v4->m_mandatoryCriteria.m_static.m_Size = 0;
  v4->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = 0;
  v4->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
  v4->m_mandatoryCriteria.m_functors.m_Size = 0;
  v4->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = 0;
  v4->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  v4->m_optionalCriteria.m_static.m_Size = 0;
  v4->m_optionalCriteria.m_static.m_Memory.m_pMemory = 0;
  v4->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = 0;
  v4->m_optionalCriteria.m_functors.m_Size = 0;
  v4->m_optionalCriteria.m_functors.m_Memory.m_pMemory = 0;
  v4->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = 0;
  v4->m_pPayload = 0;
  v4->m_SpeakerContext.m_pString = 0;
  v4->m_WorldContext.m_pString = 0;
  return &this->m_Rules.m_Memory.m_pMemory[m_Size];
}


// rr2::CResponseDB::DeleteRule  (line 142, @0x0000000003112400, libserver.so)  // inlines: Destruct<rr2::CRule>, Element, FastRemove, IsValidIndex, memcpy, operator[]
// calls: rr2::CRule::~CRule
bool __fastcall rr2::CResponseDB::DeleteRule(rr2::CResponseDB *const this, rr2::CRule *pRule)
{
  rr2::CRule *m_pMemory; // rdx
  unsigned __int64 v4; // rbx
  bool result; // al
  __int64 v6; // r13
  int m_Size; // ecx
  int v8; // ecx
  rr2::CRule *v9; // rdx
  rr2::CRule *v10; // rax
  rr2::CRule *v11; // rdx

  m_pMemory = this->m_Rules.m_Memory.m_pMemory;
  v4 = 0xEEEEEEEEEEEEEEEFLL * ((pRule - m_pMemory) >> 3);
  result = 0;
  if ( (v4 & 0x80000000) == 0LL && v4 < this->m_Rules.m_Size )
  {
    v6 = v4;
    if ( pRule == &m_pMemory[v6] )
    {
      rr2::CRule::~CRule(pRule);
      m_Size = this->m_Rules.m_Size;
      if ( m_Size <= 0 )
      {
        return 1;
      }
      else
      {
        v8 = m_Size - 1;
        if ( v4 != v8 )
        {
          v9 = this->m_Rules.m_Memory.m_pMemory;
          v10 = &v9[v6];
          v11 = &v9[v8];
          *&v10->m_mandatoryCriteria.m_static.m_Size = *&v11->m_mandatoryCriteria.m_static.m_Size;
          v10->m_mandatoryCriteria.m_static.m_Memory.m_pMemory = v11->m_mandatoryCriteria.m_static.m_Memory.m_pMemory;
          v10->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize = v11->m_mandatoryCriteria.m_static.m_Memory.m_nCurAllocSize;
          *&v10->m_mandatoryCriteria.m_functors.m_Size = *&v11->m_mandatoryCriteria.m_functors.m_Size;
          v10->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory = v11->m_mandatoryCriteria.m_functors.m_Memory.m_pMemory;
          v10->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize = v11->m_mandatoryCriteria.m_functors.m_Memory.m_nCurAllocSize;
          *&v10->m_optionalCriteria.m_static.m_Size = *&v11->m_optionalCriteria.m_static.m_Size;
          v10->m_optionalCriteria.m_static.m_Memory.m_pMemory = v11->m_optionalCriteria.m_static.m_Memory.m_pMemory;
          v10->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize = v11->m_optionalCriteria.m_static.m_Memory.m_nCurAllocSize;
          *&v10->m_optionalCriteria.m_functors.m_Size = *&v11->m_optionalCriteria.m_functors.m_Size;
          v10->m_optionalCriteria.m_functors.m_Memory.m_pMemory = v11->m_optionalCriteria.m_functors.m_Memory.m_pMemory;
          v10->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize = v11->m_optionalCriteria.m_functors.m_Memory.m_nCurAllocSize;
          v10->m_pPayload = v11->m_pPayload;
          v10->m_SpeakerContext.m_pString = v11->m_SpeakerContext.m_pString;
          v10->m_WorldContext.m_pString = v11->m_WorldContext.m_pString;
          v8 = this->m_Rules.m_Size - 1;
        }
        this->m_Rules.m_Size = v8;
        return 1;
      }
    }
  }
  return result;
}


// rr2::CResponseDB::ReserveRules  (line 159, @0x0000000003112110, libserver.so)  // inlines: EnsureCapacity, memcpy
// calls: memcpy
void __fastcall rr2::CResponseDB::ReserveRules(rr2::CResponseDB *const this, int nEnsureCapacity)
{
  uint32 m_nGrowSize; // eax
  rr2::CRule *v5; // rsi
  __int64 v6; // rax
  rr2::CRule *m_pMemory; // r13
  rr2::CRule *v8; // rax

  if ( nEnsureCapacity > this->m_Rules.m_Memory.m_nAllocationCount )
  {
    m_nGrowSize = this->m_Rules.m_Memory.m_nGrowSize;
    if ( (m_nGrowSize & 0x40000000) == 0 )
    {
      if ( (m_nGrowSize & 0xC0000000) != 0 )
      {
        m_pMemory = this->m_Rules.m_Memory.m_pMemory;
        v8 = (**g_pMemAlloc)(g_pMemAlloc, 120LL * nEnsureCapacity);
        this->m_Rules.m_Memory.m_pMemory = v8;
        if ( m_pMemory != 0 )
          memcpy(v8, m_pMemory, 120LL * this->m_Rules.m_Memory.m_nAllocationCount);
        this->m_Rules.m_Memory.m_nGrowSize &= 0x3FFFFFFFu;
      }
      else
      {
        v5 = this->m_Rules.m_Memory.m_pMemory;
        v6 = *g_pMemAlloc;
        if ( v5 != 0 )
          this->m_Rules.m_Memory.m_pMemory = (*(v6 + 8))(g_pMemAlloc, v5, 120LL * nEnsureCapacity);
        else
          this->m_Rules.m_Memory.m_pMemory = (*v6)(g_pMemAlloc, 120LL * nEnsureCapacity);
      }
      this->m_Rules.m_Memory.m_nAllocationCount = nEnsureCapacity;
    }
  }
}


// rr2::CResponseDB::GetHumanReadableStringForDebuggingOnly  (line 164, @0x0000000003112100, libserver.so)
void __fastcall rr2::CResponseDB::GetHumanReadableStringForDebuggingOnly(
        const rr2::CResponseDB *const this,
        CUtlBuffer *const buf)
{
  ;
}


// rr2::CResponseDB::GetMemStats  (line 169, @0x0000000003112240, libserver.so)  // inlines: operator[]
// calls: rr2::CRule::GetSizeInMem
size_t __fastcall rr2::CResponseDB::GetMemStats(rr2::CResponseDB *const this)
{
  int m_Size; // r13d
  __int64 v3; // rbx
  size_t v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdi

  m_Size = this->m_Rules.m_Size;
  if ( m_Size <= 0 )
    return 112;
  v3 = 0;
  v4 = 112;
  v5 = 120 * ((m_Size - 1) + 1LL);
  do
  {
    v6 = v3;
    v3 += 120;
    v4 += rr2::CRule::GetSizeInMem((this->m_Rules.m_Memory.m_pMemory + v6));
  }
  while ( v3 != v5 );
  return v4;
}


