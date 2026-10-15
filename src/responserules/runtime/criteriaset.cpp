
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// _GLOBAL__sub_I_criteriaset.cpp  (line 0, @0x0000000001a6a7c0, libserver.so)  // inlines: Color, SetColor, __static_initialization_and_destruction_0
// globals: UNSPECIFIED_LOGGING_COLOR
void __cdecl GLOBAL__sub_I_criteriaset_cpp()
{
  UNSPECIFIED_LOGGING_COLOR._color[0] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[1] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[2] = 0;
  UNSPECIFIED_LOGGING_COLOR._color[3] = 0;
}


// SplitContext  (line 31, @0x000000000310c290, libserver.so)  // inlines: V_strlen, V_strncpy<int>, _V_strstr, atof, strstr
// calls: strchr, _V_strncpy, strtod, strlen, DevMsg(char const*,...)
// callers: CBaseEntity::AddContext, CResponseCriteriaSet::Merge
// strings: "SplitContext:  warning, ignoring context '%s', missing comma separator!  Entire context w, "SplitContext:  warning, ignoring context '%s', missing colon separator!\n"
const char *__fastcall SplitContext(
        const char *raw,
        char *key,
        int keylen,
        char *value,
        int valuelen,
        float *duration,
        const char *entireContext)
{
  char *v9; // rax
  const char *v10; // r14
  int v11; // r12d
  __int64 v12; // rdx
  int v13; // ebx
  const char *v14; // rbx
  char v15; // r15
  char *v16; // r12
  char *v17; // rax
  float *v18; // r14
  __m128d v19; // xmm0
  char *v20; // rax
  __int64 v21; // r13
  const char *v22; // r12
  float *durationb; // [rsp+8h] [rbp-48h]

  v9 = strchr(raw, 58);
  v10 = v9;
  if ( v9 == 0 )
  {
    DevMsg("SplitContext:  warning, ignoring context '%s', missing colon separator!\n", raw);
    *value = 0;
    *key = 0;
    return v10;
  }
  v11 = v9 - raw;
  v12 = (v9 - raw + 1);
  if ( v12 > keylen )
    v12 = keylen;
  v13 = keylen - 1;
  _V_strncpy(key, raw, v12);
  if ( v11 <= v13 )
    v13 = v11;
  key[v13] = 0;
  v14 = v10 + 1;
  v15 = 0;
  v16 = strchr(v10 + 1, 44);
  if ( v16 == 0 )
  {
    if ( v10 != -1LL )
      v16 = &v10[strlen(v10 + 1) + 1];
    v15 = 1;
  }
  v17 = strchr(v10 + 1, 58);
  if ( v16 > v17 && v17 != 0 )
  {
    v18 = duration;
    if ( duration != 0 )
    {
      durationb = v17;
      v19.m128d_f64[0] = strtod(v17 + 1, 0);
      v17 = durationb;
      *v18 = _mm_movedup_pd(v19).m128d_f64[0];
    }
    if ( (v17[1] - 48) > 9u )
    {
      v10 = 0;
      DevMsg(
        "SplitContext:  warning, ignoring context '%s', missing comma separator!  Entire context was '%s'.\n",
        raw,
        entireContext);
      *value = 0;
      *key = 0;
      return v10;
    }
  }
  else
  {
    if ( duration != 0 )
      *duration = 0.0;
    v17 = v16;
  }
  v20 = (v17 - v14);
  v21 = valuelen - 1;
  if ( v20 <= v21 )
    LODWORD(v21) = v20;
  v10 = 0;
  v22 = v16 + 1;
  _V_strncpy(value, v14, (v21 + 1));
  value[v21] = 0;
  if ( v15 == 0 )
    return v22;
  return v10;
}


// CResponseCriteriaSet::CResponseCriteriaSet  (line 89, @0x000000000310c460, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, ResetDbgInfo
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::Script_CommitAIResponse, CAI_Expresser::FindResponse, CResponseQueue::DispatchOneResponse_ThenANY, CBaseEntity::DispatchResponse, CBaseEntity::ScriptGatherCriteria, CBaseEntity::DumpResponseCriteria, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CResponseQueue::DispatchOneResponse, CAI_Expresser::SpeakIfAllowed, CResponseQueue::Add (131 total)
// globals: CResponseCriteriaSet::CritEntry_t::LessFunc(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&)
void __fastcall CResponseCriteriaSet::CResponseCriteriaSet(CResponseCriteriaSet *const this)
{
  this->_vptr_CResponseCriteriaSet = &off_47C4CD0;
  this->m_Lookup.m_LessFunc = CResponseCriteriaSet::CritEntry_t::LessFunc;
  this->m_Lookup.m_Elements.m_pMemory = 0;
  this->m_Lookup.m_Elements.m_nAllocationCount = 0;
  this->m_Lookup.m_Elements.m_nGrowSize = 0;
  this->m_Lookup.m_Root = -1;
  this->m_Lookup.m_NumElements = 0;
  this->m_Lookup.m_FirstFree = -1;
  this->m_Lookup.m_LastAlloc.index = -1;
  this->m_Lookup.m_pElements = 0;
  this->m_nNumPrefixedContexts = 0;
  this->m_bOverrideOnAppend = 1;
}


// CResponseCriteriaSet::CResponseCriteriaSet  (line 97, @0x000000000310c860, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, Element, EnsureCapacity, FirstInorder, LeftChild, ResetDbgInfo, operator[]
// calls: CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>::EnsureCapacity, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::Insert, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::NextInorder, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::~CUtlRBTree, _Unwind_Resume
// globals: CResponseCriteriaSet::CritEntry_t::LessFunc(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&)
void __fastcall CResponseCriteriaSet::CResponseCriteriaSet(
        CResponseCriteriaSet *const this,
        const CResponseCriteriaSet *const src)
{
  CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int>,short int> *p_m_Elements; // rdi
  __int16 m_Root; // bx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *m_pMemory; // rdx
  __int64 v7; // rax
  __int16 m_Left; // si
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short int,bool (*)(const CResponseCriteriaSet::CritEntry_t&,const CResponseCriteriaSet::CritEntry_t&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int>,short int> > *p_m_Lookup; // r13

  p_m_Elements = &this->m_Lookup.m_Elements;
  p_m_Elements[-1].m_pMemory = &off_47C4CD0;
  *&p_m_Elements[-1].m_nAllocationCount = CResponseCriteriaSet::CritEntry_t::LessFunc;
  WORD2(p_m_Elements[1].m_pMemory) = -1;
  p_m_Elements->m_pMemory = 0;
  p_m_Elements->m_nAllocationCount = 0;
  p_m_Elements->m_nGrowSize = 0;
  LOWORD(p_m_Elements[1].m_pMemory) = -1;
  WORD1(p_m_Elements[1].m_pMemory) = 0;
  HIWORD(p_m_Elements[1].m_pMemory) = -1;
  *&p_m_Elements[1].m_nAllocationCount = 0;
  LODWORD(p_m_Elements[2].m_pMemory) = src->m_nNumPrefixedContexts;
  CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>::EnsureCapacity(
    p_m_Elements,
    src->m_Lookup.m_NumElements);
  m_Root = src->m_Lookup.m_Root;
  if ( m_Root != -1 )
  {
    m_pMemory = src->m_Lookup.m_Elements.m_pMemory;
    v7 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        v7 = m_Left;
        if ( m_pMemory[m_Left].m_Left == -1 )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    p_m_Lookup = &this->m_Lookup;
    while ( 1 )
    {
      CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::Insert(
        p_m_Lookup,
        &m_pMemory[v7].m_Data,
        ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
      m_Root = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::NextInorder(
                 &src->m_Lookup,
                 m_Root);
      if ( m_Root == -1 )
        break;
      m_pMemory = src->m_Lookup.m_Elements.m_pMemory;
      v7 = m_Root;
    }
  }
}


// CResponseCriteriaSet::CResponseCriteriaSet  (line 108, @0x000000000310cb20, libserver.so)  // inlines: CUtlMemory, CUtlRBTree, ResetDbgInfo
// calls: CResponseCriteriaSet::AppendCriteria, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::~CUtlRBTree, _Unwind_Resume
// globals: CResponseCriteriaSet::CritEntry_t::LessFunc(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&)
void __fastcall CResponseCriteriaSet::CResponseCriteriaSet(
        CResponseCriteriaSet *const this,
        const char *criteria,
        const char *value)
{
  this->_vptr_CResponseCriteriaSet = &off_47C4CD0;
  this->m_Lookup.m_LessFunc = CResponseCriteriaSet::CritEntry_t::LessFunc;
  this->m_Lookup.m_Root = -1;
  this->m_Lookup.m_NumElements = 0;
  this->m_Lookup.m_FirstFree = -1;
  this->m_Lookup.m_Elements.m_pMemory = 0;
  this->m_Lookup.m_Elements.m_nAllocationCount = 0;
  this->m_Lookup.m_Elements.m_nGrowSize = 0;
  this->m_Lookup.m_LastAlloc.index = -1;
  this->m_Lookup.m_pElements = 0;
  this->m_bOverrideOnAppend = 1;
  CResponseCriteriaSet::AppendCriteria(this, criteria, value, 1.0);
}


// CResponseCriteriaSet::~CResponseCriteriaSet  (line 117, @0x000000000310c820, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>::Purge
// callers: CSpeechScriptBridge::Script_FindBestResponse, CSpeechScriptBridge::Script_CommitAIResponse, CAI_Expresser::FindResponse, CResponseQueue::DispatchOneResponse_ThenANY, CBaseEntity::DispatchResponse, CBaseEntity::ScriptGatherCriteria, CBaseEntity::DumpResponseCriteria, CAI_ExpresserWithFollowup::Speak, CAI_Expresser::Speak, CResponseQueue::DispatchOneResponse, CUtlLinkedList<CResponseQueue::CDeferredResponse, long long int, true, long long int, CUtlFixedMemory<UtlLinkedListElem_t<CResponseQueue::CDeferredResponse, long long int> > >::RemoveAll, CAI_Expresser::SpeakIfAllowed (133 total)
void __fastcall CResponseCriteriaSet::~CResponseCriteriaSet(CResponseCriteriaSet *const this)
{
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short int,bool (*)(const CResponseCriteriaSet::CritEntry_t&,const CResponseCriteriaSet::CritEntry_t&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int>,short int> > *p_m_Lookup; // rdi

  p_m_Lookup = &this->m_Lookup;
  p_m_Lookup[-1].m_pElements = &off_47C4CD0;
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::Purge(p_m_Lookup);
  if ( (this->m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>::Purge(&this->m_Lookup.m_Elements);
}


// CResponseCriteriaSet::ComputeCriteriaSymbol  (line 124, @0x000000000310c4d0, libserver.so)
// calls: CUtlSymbolTable::AddString
// callers: CSpeechScriptBridge::MapOldToNewQuery, CDOTABaseAbility::GetCastExecuteCriteria, CEmotePlayConcept::Do, CDOTAGamerules::SetGamePaused, CDOTAGamerules::State_Think_POST_GAME, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_Speech::ModifyOrAppendGlobalCriteria, CResponseQueryNetworking::NetworkIdxToCritSymbol, CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::Event_Killed, CAnnouncerSharedThinker::CheckAndSendIdleSpeech (19 total)
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
unsigned __int16 *__fastcall CResponseCriteriaSet::ComputeCriteriaSymbol(unsigned __int16 *a1, const char *criteria)
{
  CUtlSymbolTable::AddString(a1, CResponseCriteriaSet::sm_pCriteriaSymbols, criteria);
  return a1;
}


// CResponseCriteriaSet::AppendCriteria  (line 133, @0x000000000310c990, libserver.so)  // inlines: CUtlSymbol, CritEntry_t, Element, SetValue, V_strncpy<long unsigned int>, operator=, operator[]
// calls: CResponseCriteriaSet::FindCriterionIndex, _V_strncpy, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::Insert, CUtlSymbolTable::String, __stack_chk_fail
// callers: CDOTABaseAbility::GetCastExecuteCriteria, CEmotePlayConcept::Do, CDOTAGamerules::SetGamePaused, CDOTAGamerules::State_Think_POST_GAME, CDOTAGamerules::PlayerSpawn, CDOTAGamerules::ClientDisconnected, CDOTA_BaseNPC::Event_Killed, CAnnouncerSharedThinker::CheckAndSendIdleSpeech, CResponseCriteriaSet::AppendCriteria, CResponseCriteriaSet::Merge, CResponseCriteriaSet::InterceptWorldSetContexts
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::AppendCriteria(
        CResponseCriteriaSet *const this,
        UtlSymId_t *criteria,
        const char *value,
        float weight)
{
  int CriterionIndex; // eax
  float v8; // xmm0_4
  __int16 v9; // bx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v10; // rbx
  UtlSymId_t v11; // ax
  char *v12; // rax
  float weightb; // [rsp+Ch] [rbp-94h]
  CResponseCriteriaSet::CritSymbol_t criteriaa; // [rsp+10h] [rbp-90h] BYREF
  CResponseCriteriaSet::CritEntry_t entry; // [rsp+20h] [rbp-80h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  criteriaa.m_Id = *criteria;
  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(this, &criteriaa.m_Id);
  v8 = weight;
  v9 = CriterionIndex;
  if ( CriterionIndex == -1 )
  {
    v11 = *criteria;
    entry.weight = 0.0;
    entry.value[0] = 0;
    entry.criterianame.m_Id = v11;
    v9 = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::Insert(
           &this->m_Lookup,
           &entry,
           ERBTreeInsertBehavior::k_eInsertAssertAboutDupes);
    criteriaa.m_Id = *criteria;
    v12 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &criteriaa.m_Id);
    v8 = weight;
    if ( *v12 == 36 )
      ++this->m_nNumPrefixedContexts;
  }
  else if ( !this->m_bOverrideOnAppend )
  {
    return;
  }
  v10 = &this->m_Lookup.m_Elements.m_pMemory[v9];
  if ( value != 0 )
  {
    weightb = v8;
    _V_strncpy(v10->m_Data.value, value, 64);
    v8 = weightb;
  }
  else
  {
    v10->m_Data.value[0] = 0;
  }
  v10->m_Data.weight = v8;
}


// CResponseCriteriaSet::AppendCriteria  (line 166, @0x000000000310cad0, libserver.so)  // inlines: CUtlSymbol, ComputeCriteriaSymbol
// calls: CUtlSymbolTable::AddString, CResponseCriteriaSet::AppendCriteria
// callers: CBaseEntity::ModifyOrAppendCriteria, CSpeechScriptBridge::ScriptToAICriteriaSet, CAI_Expresser::GatherCriteria, CResponseQueue::DispatchOneResponse_ThenANY, CBaseEntity::DispatchResponse, CResponseQueue::DispatchOneResponse, CBaseEntity::AppendContextToCriteria, CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CBasePlayer::ModifyOrAppendPlayerCriteria, CRagdollProp::ModifyOrAppendCriteria, CPropDoorRotatingBreakable::Event_Killed (99 total)
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::AppendCriteria(
        CResponseCriteriaSet *const this,
        const char *pCriteriaName,
        const char *value,
        float weight)
{
  CUtlSymbol criteria; // [rsp+10h] [rbp-30h] BYREF
  CResponseCriteriaSet::CritSymbol_t v8; // [rsp+20h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(&criteria.m_Id, CResponseCriteriaSet::sm_pCriteriaSymbols, pCriteriaName);
  v8.m_Id = criteria.m_Id;
  CResponseCriteriaSet::AppendCriteria(this, &v8.m_Id, value, weight);
}


// CResponseCriteriaSet::AppendCriteria  (line 179, @0x000000000310cd40, libserver.so)  // inlines: ComputeCriteriaSymbol
// calls: CUtlSymbolTable::AddString, CResponseCriteriaSet::AppendCriteria
// callers: CDOTABaseAbility::CastAbility, CDOTAGamerules::SetGameWinner, CDOTAGamerules::AddTeamCompToCriteria, CDOTA_Item::TryToComment, CDOTA_Modifier_Hexed::SpeakMorphConcept, CDOTA_BaseNPC_Hero::UpgradeAbility, CDOTAHeroList::GameEnded, CDOTA_BaseNPC_Hero::COtherHeroTalk::SpeakToOtherHero, CDOTA_BaseNPC_Hero::OnHeroEnterShopSpeech, CDOTA_BaseNPC_Hero::OnHeroLeaveShopSpeech, CDOTA_BaseNPC_Hero::TestHeroDawdlingInShop, CDOTA_BaseNPC_Hero::ThinkSpeech (70 total)
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::AppendCriteria(
        CResponseCriteriaSet *const this,
        const char *criteria,
        float a3,
        float value,
        float weight)
{
  CResponseCriteriaSet::CritSymbol_t v8; // [rsp+10h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(&v8.m_Id, CResponseCriteriaSet::sm_pCriteriaSymbols, criteria);
  CResponseCriteriaSet::AppendCriteria(this, &v8.m_Id, a3, value);
}


// CResponseCriteriaSet::AppendCriteria  (line 185, @0x000000000310ccb0, libserver.so)  // inlines: CUtlSymbol
// calls: V_snprintf, CResponseCriteriaSet::AppendCriteria, __stack_chk_fail
// callers: CDOTABaseAbility::GetCastExecuteCriteria, CDOTA_Speech::ModifyOrAppendGlobalCriteria, CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::Event_Killed, CDOTA_Ability_Oracle_FatesEdict::ModifyOrAppendCriteria, CDOTA_Ability_Oracle_PurifyingFlames::ModifyOrAppendCriteria, CDOTA_Unit_Hero_Meepo::ModifyOrAppendCriteria, CDOTA_Modifier_Oracle_FalsePromise::OnDestroy, CResponseCriteriaSet::AppendCriteria
void __fastcall CResponseCriteriaSet::AppendCriteria(
        CResponseCriteriaSet *const this,
        UtlSymId_t *criteria,
        float value,
        float weight)
{
  UtlSymId_t v7; // [rsp-4h] [rbp-68h] BYREF
  char v8[8]; // [rsp+Ch] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+34h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  V_snprintf(v8, 32, "%f", value);
  v7 = *criteria;
  CResponseCriteriaSet::AppendCriteria(this, &v7, v8, weight);
}


// CResponseCriteriaSet::RemoveCriteria  (line 195, @0x000000000310d350, libserver.so)  // inlines: RemoveCriteria
// calls: CResponseCriteriaSet::FindCriterionIndex, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::RemoveAt
// callers: CRagdollProp::ModifyOrAppendCriteria, CDOTA_BaseNPC_Building::AnnounceBuildingEvent, CDOTAHeroList::DistributeRewardsForKill
void __fastcall CResponseCriteriaSet::RemoveCriteria(CResponseCriteriaSet *const this, const char *criteria)
{
  int CriterionIndex; // eax
  int m_nNumPrefixedContexts; // ecx
  int v6; // edx

  CriterionIndex = CResponseCriteriaSet::FindCriterionIndex(this, criteria);
  if ( CriterionIndex != -1 )
  {
    if ( *criteria == 36 )
    {
      m_nNumPrefixedContexts = this->m_nNumPrefixedContexts;
      v6 = 0;
      if ( m_nNumPrefixedContexts > 0 )
        v6 = m_nNumPrefixedContexts - 1;
      this->m_nNumPrefixedContexts = v6;
      CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::RemoveAt(
        &this->m_Lookup,
        CriterionIndex);
    }
    else
    {
      CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::RemoveAt(
        &this->m_Lookup,
        CriterionIndex);
    }
  }
}


// CResponseCriteriaSet::RemoveCriteria  (line 212, @0x000000000310d2d0, libserver.so)  // inlines: CUtlSymbol, Element, operator[]
// calls: CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::RemoveAt, CUtlSymbolTable::String
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::RemoveCriteria(CResponseCriteriaSet *const this, int idx, bool bTestForPrefix)
{
  __int16 v3; // r13
  __int16 v5; // r12
  int m_nNumPrefixedContexts; // edx
  int v7; // eax
  CUtlSymbol id; // [rsp+0h] [rbp-30h] BYREF

  v3 = idx;
  if ( bTestForPrefix
    && (v5 = idx,
        id.m_Id = this->m_Lookup.m_Elements.m_pMemory[idx].m_Data.criterianame.m_Id,
        *CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id.m_Id) == 36) )
  {
    m_nNumPrefixedContexts = this->m_nNumPrefixedContexts;
    v7 = 0;
    if ( m_nNumPrefixedContexts > 0 )
      v7 = m_nNumPrefixedContexts - 1;
    this->m_nNumPrefixedContexts = v7;
  }
  else
  {
    v5 = v3;
  }
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::RemoveAt(
    &this->m_Lookup,
    v5);
}


// CResponseCriteriaSet::GetCount  (line 230, @0x000000000310c500, libserver.so)
// callers: CSpeechScriptBridge::MapOldToNewQuery, CSpeechScriptBridge::AICriteriaSetToScript, CAI_Expresser::GatherCriteria, CAI_Expresser::FindResponse, CResponseQueryNetworking::PopulateNetworkedQuery, Crr2LibPort::MapOldToNewQuery
int __fastcall CResponseCriteriaSet::GetCount(const CResponseCriteriaSet *const this)
{
  return this->m_Lookup.m_NumElements;
}


// CResponseCriteriaSet::FindCriterionIndex  (line 241, @0x000000000310c510, libserver.so)  // inlines: CritEntry_t, Element, Find, LeftChild, RightChild, operator=, operator[]
// calls: __stack_chk_fail
// callers: CResponseSystem::LookForCriteria, CResponseSystem::ScoreCriteriaAgainstRuleCriteria, CResponseCriteriaSet::FindCriterionIndex, CResponseCriteriaSet::AppendCriteria
__int64 __fastcall CResponseCriteriaSet::FindCriterionIndex(
        const CResponseCriteriaSet *const this,
        UtlSymId_t *criteria)
{
  __int16 m_Root; // r12
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  CResponseCriteriaSet::CritEntry_t search; // [rsp+0h] [rbp-70h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-28h]

  search.weight = 0.0;
  v8 = __readfsqword(0x28u);
  m_Root = this->m_Lookup.m_Root;
  search.value[0] = 0;
  search.criterianame.m_Id = *criteria;
  if ( m_Root == -1 )
    return 0xFFFFFFFFLL;
  m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( !this->m_Lookup.m_LessFunc(&search, &m_pMemory[v5].m_Data) )
        break;
      m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        return 0xFFFFFFFFLL;
    }
    if ( !this->m_Lookup.m_LessFunc(&this->m_Lookup.m_Elements.m_pMemory[v5].m_Data, &search) )
      break;
    m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
    m_Root = m_pMemory[v5].m_Right;
    if ( m_Root == -1 )
      return 0xFFFFFFFFLL;
  }
  result = m_Root;
  if ( result == -1 )
    return 0xFFFFFFFFLL;
  return result;
}


// CResponseCriteriaSet::FindCriterionIndex  (line 249, @0x000000000310c5f0, libserver.so)  // inlines: CUtlSymbol, ComputeCriteriaSymbol
// calls: CUtlSymbolTable::AddString, CResponseCriteriaSet::FindCriterionIndex
// callers: CSpeechScriptBridge::AIConceptFromCriteriaSet, AscertainSpeechSubjectFromContext, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CResponseSystem::PassesClassnameDebugFilter, CResponseSystem::SpewDebugInfo, CResponseCriteriaSet::RemoveCriteria, ResponseRulePartition::GetDictsForCriteria
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
int __fastcall CResponseCriteriaSet::FindCriterionIndex(const CResponseCriteriaSet *const this, const char *name)
{
  CUtlSymbol criteria; // [rsp+0h] [rbp-30h] BYREF
  CResponseCriteriaSet::CritSymbol_t v5; // [rsp+10h] [rbp-20h] BYREF

  CUtlSymbolTable::AddString(&criteria.m_Id, CResponseCriteriaSet::sm_pCriteriaSymbols, name);
  v5.m_Id = criteria.m_Id;
  return CResponseCriteriaSet::FindCriterionIndex(this, &v5.m_Id);
}


// CResponseCriteriaSet::GetNameSymbol  (line 259, @0x000000000310c630, libserver.so)  // inlines: CUtlSymbol, Element, operator[]
// callers: CSpeechScriptBridge::MapOldToNewQuery, CResponseQueryNetworking::PopulateNetworkedQuery, Crr2LibPort::MapOldToNewQuery
UtlSymId_t *__fastcall CResponseCriteriaSet::GetNameSymbol(
        UtlSymId_t *a1,
        const CResponseCriteriaSet *const this,
        int nIndex)
{
  UtlSymId_t *result; // rax

  result = a1;
  if ( nIndex >= 0 && nIndex < this->m_Lookup.m_NumElements )
    *a1 = this->m_Lookup.m_Elements.m_pMemory[nIndex].m_Data.criterianame.m_Id;
  else
    *a1 = -1;
  return result;
}


// CResponseCriteriaSet::GetName  (line 274, @0x000000000310c670, libserver.so)  // inlines: CUtlSymbol, Element, operator[]
// calls: CUtlSymbolTable::String
// callers: CSpeechScriptBridge::AICriteriaSetToScript, CResponseCriteriaSet::InterceptWorldSetContexts
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
const char *__fastcall CResponseCriteriaSet::GetName(const CResponseCriteriaSet *const this, int index)
{
  const char *v2; // rbx
  char *v4; // rax
  CUtlSymbol id; // [rsp+0h] [rbp-20h] BYREF

  v2 = "";
  if ( index < 0 || index >= this->m_Lookup.m_NumElements )
    return "";
  id.m_Id = this->m_Lookup.m_Elements.m_pMemory[index].m_Data.criterianame.m_Id;
  v4 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, &id.m_Id);
  if ( v4 != 0 )
    return v4;
  return v2;
}


// CResponseCriteriaSet::GetValue  (line 291, @0x000000000310c6e0, libserver.so)  // inlines: Element, operator[]
// callers: CSpeechScriptBridge::AIConceptFromCriteriaSet, CSpeechScriptBridge::MapOldToNewQuery, CSpeechScriptBridge::AICriteriaSetToScript, AscertainSpeechSubjectFromContext, CResponseQueryNetworking::PopulateNetworkedQuery, CResponseSystem::LookForCriteria, CResponseSystem::ScoreCriteriaAgainstRuleCriteria, CResponseSystem::PassesClassnameDebugFilter, CResponseSystem::SpewDebugInfo, Crr2LibPort::MapOldToNewQuery, ResponseRulePartition::GetDictsForCriteria
const char *__fastcall CResponseCriteriaSet::GetValue(const CResponseCriteriaSet *const this, int index)
{
  const char *result; // rax

  result = "";
  if ( index >= 0 && index < this->m_Lookup.m_NumElements )
    return this->m_Lookup.m_Elements.m_pMemory[index].m_Data.value;
  return result;
}


// CResponseCriteriaSet::GetWeight  (line 305, @0x000000000310c720, libserver.so)  // inlines: Element, operator[]
// callers: CResponseSystem::ScoreCriteriaAgainstRuleCriteria
float __fastcall CResponseCriteriaSet::GetWeight(const CResponseCriteriaSet *const this, int index)
{
  if ( index >= 0 && index < this->m_Lookup.m_NumElements )
    return this->m_Lookup.m_Elements.m_pMemory[index].m_Data.weight;
  else
    return 1.0;
}


// CResponseCriteriaSet::Merge  (line 318, @0x000000000310cd90, libserver.so)  // inlines: CUtlSymbol, Element, EnsureCapacity, GetCount, GetNameSymbol, GetValue, GetWeight, memcpy, operator[]
// calls: CResponseCriteriaSet::AppendCriteria, memcpy
// callers: CResponseQueue::DeferContextsFromCriteriaSet, CResponseQueue::DispatchOneResponse_ThenANY, CResponseQueue::DispatchOneResponse, CDOTA_Speech::PopulateQueuedConceptStruct, CDOTA_BaseNPC_Hero::SetKillCriteria
void __fastcall CResponseCriteriaSet::Merge(
        CResponseCriteriaSet *const this,
        const CResponseCriteriaSet *otherCriteria)
{
  int m_NumElements; // r14d
  int v5; // ebx
  uint32 m_nGrowSize; // eax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v7; // rsi
  __int64 v8; // r15
  int i; // ebx
  float weight; // xmm0_4
  const char *value; // rdx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v12; // rcx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *m_pMemory; // r15
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v14; // rax
  UtlSymId_t v15[32]; // [rsp+10h] [rbp-40h] BYREF

  if ( otherCriteria != 0 )
  {
    m_NumElements = otherCriteria->m_Lookup.m_NumElements;
    v5 = m_NumElements + this->m_Lookup.m_NumElements;
    if ( v5 > this->m_Lookup.m_Elements.m_nAllocationCount )
    {
      m_nGrowSize = this->m_Lookup.m_Elements.m_nGrowSize;
      if ( (m_nGrowSize & 0x40000000) == 0 )
      {
        if ( (m_nGrowSize & 0xC0000000) != 0 )
        {
          m_pMemory = this->m_Lookup.m_Elements.m_pMemory;
          v14 = (**g_pMemAlloc)(g_pMemAlloc, 80LL * v5);
          this->m_Lookup.m_Elements.m_pMemory = v14;
          if ( m_pMemory != 0 )
            memcpy(v14, m_pMemory, 80LL * this->m_Lookup.m_Elements.m_nAllocationCount);
          this->m_Lookup.m_Elements.m_nGrowSize &= 0x3FFFFFFFu;
        }
        else
        {
          v7 = this->m_Lookup.m_Elements.m_pMemory;
          if ( v7 != 0 )
            this->m_Lookup.m_Elements.m_pMemory = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, v7, 80LL * v5);
          else
            this->m_Lookup.m_Elements.m_pMemory = (**g_pMemAlloc)(g_pMemAlloc, 80LL * v5);
        }
        this->m_Lookup.m_Elements.m_nAllocationCount = v5;
      }
    }
    if ( m_NumElements > 0 )
    {
      v8 = 0;
      for ( i = 0; i < m_NumElements; ++i )
      {
        if ( otherCriteria->m_Lookup.m_NumElements <= i )
        {
          weight = 1.0;
          v15[0] = -1;
          value = "";
        }
        else
        {
          v12 = &otherCriteria->m_Lookup.m_Elements.m_pMemory[v8];
          weight = v12->m_Data.weight;
          value = v12->m_Data.value;
          v15[0] = v12->m_Data.criterianame.m_Id;
        }
        ++v8;
        CResponseCriteriaSet::AppendCriteria(this, v15, value, weight);
      }
    }
  }
}


// CResponseCriteriaSet::Merge  (line 333, @0x000000000310cbb0, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: _V_strncpy, SplitContext, CResponseCriteriaSet::AppendCriteria, __stack_chk_fail
// callers: CAI_Expresser::GatherCriteria, CAI_ExpresserWithFollowup::DispatchFollowupThroughQueue, CAI_ExpresserWithFollowup::SpeakDispatchFollowup, CC_RR_ForceConcept_f, Script_ForceConcept
void __fastcall CResponseCriteriaSet::Merge(CResponseCriteriaSet *const this, const char *modifiers)
{
  const char *v4; // rax
  const char *pCopy; // [rsp+8h] [rbp-348h]
  char copy_modifiers[255]; // [rsp+10h] [rbp-340h] BYREF
  char key[256]; // [rsp+110h] [rbp-240h] BYREF
  char value[264]; // [rsp+210h] [rbp-140h] BYREF
  unsigned __int64 v9; // [rsp+318h] [rbp-38h]

  v9 = __readfsqword(0x28u);
  if ( modifiers != 0 )
  {
    memset(key, 0, sizeof(key));
    memset(value, 0, 0x100u);
    _V_strncpy(copy_modifiers, modifiers, 255);
    v4 = copy_modifiers;
    do
    {
      while ( 1 )
      {
        v4 = SplitContext(v4, key, 256, value, 256, 0, modifiers);
        if ( key[0] != 0 && value[0] != 0 )
          break;
        if ( v4 == 0 )
          return;
      }
      pCopy = v4;
      CResponseCriteriaSet::AppendCriteria(this, key, value, 1.0);
      v4 = pCopy;
    }
    while ( pCopy != 0 );
  }
}


// CResponseCriteriaSet::Describe  (line 361, @0x000000000310d3b0, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, CUtlSymbol, Element, FindInsertionPosition, First, FirstInorder, Insert, InsertAt, IsIdxValid, IsValidIndex, Key, LeftChild, Next, NextInorder, Purge, RemoveAll, ResetDbgInfo, RightChild, SetLeftChild, SetRightChild, operator(), operator==, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CMemAllocSystemInitialize, CUtlSymbolTable::String, CUtlRBTree<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int, CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int, CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, short unsigned int> >::LinkToParent, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::NextInorder, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlBuffer::Printf, CUtlRBTree<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int, CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, DevMsg(char const*,...), CUtlRBTree<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int, CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, const CResponseCriteriaSet::CritEntry_t*>::Node_t, short unsigned int>, short unsigned int> >::~CUtlRBTree, _Unwind_Resume
// callers: CDefaultResponseSystem::FindBestResponse, CBaseEntity::DumpResponseCriteria, CRR_Response::Describe
// strings: "  %20s = '%s' (weight %f)\n", "  %20s = '%s'\n"
// globals: FastCaselessStringLessThan(char const* const&,char const* const&), CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::Describe(const CResponseCriteriaSet *const this, CUtlBuffer *buf)
{
  CUtlRBTree<CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*>::Node_t,short unsigned int,CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*>::Node_t,short unsigned int>,short unsigned int> >::Node_t *m_pMemory; // rdx
  int m_NumElements; // eax
  __int64 m_Root; // rax
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v6; // rbx
  __int16 m_Left; // cx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v8; // rbx
  char *v9; // rax
  unsigned __int16 v10; // r13
  unsigned __int16 m_Right; // ax
  bool v12; // bl
  unsigned __int16 v13; // ax
  unsigned __int16 index; // si
  __int64 m_nAllocationCount; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int16 Inorder; // bx
  UtlRBTreeNode_t<CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*>::Node_t,short unsigned int> *v19; // rdx
  __int64 v20; // rax
  unsigned __int16 v21; // si
  double v22; // xmm0_8
  UtlRBTreeNode_t<CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*>::Node_t,short unsigned int> *v23; // rax
  CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*,short unsigned int,bool (*)(char const* const&,char const* const&)>::ElemType_t elem; // rcx
  const char *key; // rsi
  float weight; // xmm0_4
  __int16 i; // [rsp+1Eh] [rbp-92h]
  UtlSymId_t v29[8]; // [rsp+30h] [rbp-80h] BYREF
  CUtlMap<char const*,const CResponseCriteriaSet::CritEntry_t*,short unsigned int,bool (*)(char const* const&,char const* const&)>::Node_t pCopyFrom; // [rsp+40h] [rbp-70h] BYREF
  CResponseCriteriaSet::Describe::tMap m_TempMap; // [rsp+50h] [rbp-60h] BYREF

  m_TempMap.m_Tree.m_LessFunc.m_LessFunc = FastCaselessStringLessThan;
  m_pMemory = 0;
  m_NumElements = this->m_Lookup.m_NumElements;
  m_TempMap.m_Tree.m_Elements.m_pMemory = 0;
  m_TempMap.m_Tree.m_Elements.m_nGrowSize = 0;
  m_TempMap.m_Tree.m_Elements.m_nAllocationCount = m_NumElements;
  if ( m_NumElements != 0 )
  {
    CMemAllocSystemInitialize(this);
    m_TempMap.m_Tree.m_Elements.m_pMemory = (**g_pMemAlloc)(
                                              g_pMemAlloc,
                                              24LL * m_TempMap.m_Tree.m_Elements.m_nAllocationCount);
    m_pMemory = m_TempMap.m_Tree.m_Elements.m_pMemory;
  }
  m_TempMap.m_Tree.m_pElements = m_pMemory;
  m_TempMap.m_Tree.m_Root = -1;
  m_TempMap.m_Tree.m_NumElements = 0;
  m_TempMap.m_Tree.m_FirstFree = -1;
  m_TempMap.m_Tree.m_LastAlloc.index = -1;
  m_Root = this->m_Lookup.m_Root;
  i = this->m_Lookup.m_Root;
  if ( m_Root != 0xFFFF )
  {
    v6 = this->m_Lookup.m_Elements.m_pMemory;
    m_Left = v6[m_Root].m_Left;
    if ( m_Left != -1 )
    {
      while ( 1 )
      {
        m_Root = m_Left;
        if ( v6[m_Left].m_Left == -1 )
          break;
        m_Left = v6[m_Left].m_Left;
      }
      i = m_Left;
    }
    while ( 1 )
    {
      v8 = &v6[m_Root];
      v29[0] = v8->m_Data.criterianame.m_Id;
      v9 = CUtlSymbolTable::String(CResponseCriteriaSet::sm_pCriteriaSymbols, v29);
      v10 = m_TempMap.m_Tree.m_Root;
      pCopyFrom.key = v9;
      pCopyFrom.elem = &v8->m_Data;
      if ( m_TempMap.m_Tree.m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          if ( m_TempMap.m_Tree.m_LessFunc.m_LessFunc(&pCopyFrom, &m_TempMap.m_Tree.m_Elements.m_pMemory[v10].m_Data) != 0 )
          {
            m_Right = m_TempMap.m_Tree.m_Elements.m_pMemory[v10].m_Left;
            v12 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_15;
          }
          else
          {
            m_Right = m_TempMap.m_Tree.m_Elements.m_pMemory[v10].m_Right;
            v12 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_15;
          }
          v10 = m_Right;
        }
      }
      v12 = 0;
LABEL_15:
      v13 = CUtlRBTree<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &m_TempMap.m_Tree,
              &pCopyFrom);
      CUtlRBTree<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &m_TempMap.m_Tree,
        v13,
        v10,
        v12);
      ++m_TempMap.m_Tree.m_NumElements;
      i = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::NextInorder(
            &this->m_Lookup,
            i);
      if ( i == -1 )
        break;
      v6 = this->m_Lookup.m_Elements.m_pMemory;
      m_Root = i;
    }
    Inorder = m_TempMap.m_Tree.m_Root;
    if ( m_TempMap.m_Tree.m_Root != 0xFFFF )
    {
      v19 = m_TempMap.m_Tree.m_Elements.m_pMemory;
      v20 = m_TempMap.m_Tree.m_Root;
      v21 = m_TempMap.m_Tree.m_Elements.m_pMemory[m_TempMap.m_Tree.m_Root].m_Left;
      if ( v21 != 0xFFFF )
      {
        while ( 1 )
        {
          v20 = v21;
          if ( m_TempMap.m_Tree.m_Elements.m_pMemory[v21].m_Left == 0xFFFF )
            break;
          v21 = m_TempMap.m_Tree.m_Elements.m_pMemory[v21].m_Left;
        }
        Inorder = v21;
      }
      while ( 1 )
      {
        v23 = &v19[v20];
        elem = v23->m_Data.elem;
        key = v23->m_Data.key;
        weight = elem->weight;
        if ( weight == 1.0 )
        {
          if ( buf != 0 )
            CUtlBuffer::Printf(buf, "  %20s = '%s'\n", v23->m_Data.key, elem->value);
          else
            DevMsg("  %20s = '%s'\n", key, elem->value);
        }
        else
        {
          v22 = weight;
          if ( buf != 0 )
            CUtlBuffer::Printf(buf, "  %20s = '%s' (weight %f)\n", v23->m_Data.key, elem->value, v22);
          else
            DevMsg("  %20s = '%s' (weight %f)\n", key, elem->value, v22);
        }
        Inorder = CUtlRBTree<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short,CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                    &m_TempMap.m_Tree,
                    Inorder);
        if ( Inorder == 0xFFFF )
          break;
        v19 = m_TempMap.m_Tree.m_Elements.m_pMemory;
        v20 = Inorder;
      }
    }
  }
  index = m_TempMap.m_Tree.m_LastAlloc.index;
  if ( m_TempMap.m_Tree.m_LastAlloc.index != 0xFFFF )
  {
    m_nAllocationCount = m_TempMap.m_Tree.m_Elements.m_nAllocationCount;
    v16 = 0;
    v17 = 0;
    if ( m_TempMap.m_Tree.m_Elements.m_nAllocationCount > 0 )
    {
      do
      {
        if ( v17 < m_nAllocationCount && v17 <= index && v17 != m_TempMap.m_Tree.m_Elements.m_pMemory[v16].m_Left )
        {
          m_TempMap.m_Tree.m_Elements.m_pMemory[v16].m_Right = m_TempMap.m_Tree.m_FirstFree;
          m_TempMap.m_Tree.m_Elements.m_pMemory[v16].m_Left = v17;
          index = m_TempMap.m_Tree.m_LastAlloc.index;
          m_TempMap.m_Tree.m_FirstFree = v17;
        }
        if ( v17 == index )
          break;
        m_nAllocationCount = m_TempMap.m_Tree.m_Elements.m_nAllocationCount;
        if ( (v17 + 1) >= m_TempMap.m_Tree.m_Elements.m_nAllocationCount )
          break;
        ++v17;
        ++v16;
      }
      while ( v17 != 0xFFFF );
    }
    m_TempMap.m_Tree.m_Root = -1;
    m_TempMap.m_Tree.m_NumElements = 0;
  }
  m_TempMap.m_Tree.m_FirstFree = -1;
  if ( (m_TempMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&m_TempMap.m_Tree.m_Elements);
    m_TempMap.m_Tree.m_LastAlloc.index = -1;
    if ( (m_TempMap.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CResponseCriteriaSet::CritEntry_t const*,unsigned short,bool (*)(char const* const&,char const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&m_TempMap.m_Tree.m_Elements);
  }
}


// CResponseCriteriaSet::Reset  (line 424, @0x000000000310c810, libserver.so)
// calls: CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::Purge
// callers: CResponseQueue::DeferContextsFromCriteriaSet, CDOTA_BaseNPC_Creep_Talking::ModifyOrAppendCriteria, CDOTA_Speech::PopulateQueuedConceptStruct, CDOTA_BaseNPC_Hero::ThinkSpeech
void __fastcall CResponseCriteriaSet::Reset(CResponseCriteriaSet *const this)
{
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::Purge(&this->m_Lookup);
}


// CResponseCriteriaSet::WriteToEntity  (line 429, @0x000000000310c760, libserver.so)
// callers: CAI_Expresser::FindResponse
void __fastcall CResponseCriteriaSet::WriteToEntity(CResponseCriteriaSet *const this, CEntityIdentity *pEntity)
{
  ;
}


// CResponseCriteriaSet::InterceptWorldSetContexts  (line 444, @0x000000000310cf00, libserver.so)  // inlines: CUtlSymbol, Element, EnsureCapacity, FirstInorder, GetCount, GetNameSymbol, GetValue, GetWeight, Head, IsValidIndex, LeftChild, Next, Purge, Swap, V_strncpy<long unsigned int>, V_swap<CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>::Iterator_t>, V_swap<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>*>, V_swap<bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&)>, V_swap<int>, V_swap<short int>, V_swap<unsigned int>, operator[], ~CResponseCriteriaSet, ~CUtlMemory, ~CUtlRBTree
// calls: CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>::EnsureCapacity, CResponseCriteriaSet::CResponseCriteriaSet, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int>::Purge, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::~CUtlRBTree, _Unwind_Resume, CResponseCriteriaSet::GetName, CResponseCriteriaSet::AppendCriteria, CUtlRBTree<CResponseCriteriaSet::CritEntry_t, short int, bool (*)(const CResponseCriteriaSet::CritEntry_t&, const CResponseCriteriaSet::CritEntry_t&), CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t, short int>, short int> >::NextInorder, _V_strncpy, __stack_chk_fail
// callers: CAI_Expresser::FindResponse
int __fastcall CResponseCriteriaSet::InterceptWorldSetContexts(
        CResponseCriteriaSet *pFrom,
        CResponseCriteriaSet *pSetOnWorld)
{
  int m_nNumPrefixedContexts; // r12d
  __int16 m_Root; // cx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *m_pMemory; // rax
  __int64 v8; // rdx
  int m_Left; // r12d
  __int16 v10; // dx
  __int16 m_NumElements; // dx
  uint32 m_nGrowSize; // esi
  uint32 v13; // edi
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v14; // rsi
  int m_nAllocationCount; // eax
  bool (*m_LessFunc)(const CResponseCriteriaSet::CritEntry_t *, const CResponseCriteriaSet::CritEntry_t *); // rax
  bool (*v17)(const CResponseCriteriaSet::CritEntry_t *, const CResponseCriteriaSet::CritEntry_t *); // rsi
  __int16 m_FirstFree; // dx
  CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short int,bool (*)(const CResponseCriteriaSet::CritEntry_t&,const CResponseCriteriaSet::CritEntry_t&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int>,short int> >::Node_t *m_pElements; // rax
  const char *Name; // rax
  float v21; // xmm0_4
  const char *v22; // rdx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v23; // rax
  float weight; // xmm0_4
  const char *value; // rdx
  float v26; // xmm0_4
  const char *v27; // rdx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v28; // rdx
  UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short int> *v29; // rdx
  char *v30; // [rsp+0h] [rbp-F0h]
  CResponseCriteriaSet::CritSymbol_t criteria; // [rsp+10h] [rbp-E0h] BYREF
  CResponseCriteriaSet rewrite; // [rsp+20h] [rbp-D0h] BYREF
  char buf[88]; // [rsp+60h] [rbp-90h] BYREF
  unsigned __int64 v34; // [rsp+B8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  m_nNumPrefixedContexts = pFrom->m_nNumPrefixedContexts;
  if ( m_nNumPrefixedContexts != 0 )
  {
    CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>::EnsureCapacity(
      &pSetOnWorld->m_Lookup.m_Elements,
      m_nNumPrefixedContexts);
    memset(buf, 0, 0x50u);
    qmemcpy(buf, "world", 5);
    CResponseCriteriaSet::CResponseCriteriaSet(&rewrite);
    CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>::EnsureCapacity(
      &rewrite.m_Lookup.m_Elements,
      pFrom->m_Lookup.m_NumElements + 1);
    m_Root = pFrom->m_Lookup.m_Root;
    m_pMemory = pFrom->m_Lookup.m_Elements.m_pMemory;
    if ( m_Root == -1 )
    {
      m_NumElements = pFrom->m_Lookup.m_NumElements;
    }
    else
    {
      v8 = m_Root;
      m_Left = m_pMemory[v8].m_Left;
      if ( m_pMemory[v8].m_Left == -1 )
      {
        m_Left = m_Root;
      }
      else
      {
        while ( 1 )
        {
          v10 = m_pMemory[m_Left].m_Left;
          if ( v10 == -1 )
            break;
          m_Left = v10;
        }
      }
      m_NumElements = pFrom->m_Lookup.m_NumElements;
      if ( m_Left >= 0 && m_Left < m_NumElements )
      {
        do
        {
          Name = CResponseCriteriaSet::GetName(pFrom, m_Left);
          if ( *Name == 36 )
          {
            v30 = (Name + 1);
            _V_strncpy(&buf[5], Name + 1, 75);
            if ( pFrom->m_Lookup.m_NumElements > m_Left )
            {
              v28 = &pFrom->m_Lookup.m_Elements.m_pMemory[m_Left];
              weight = v28->m_Data.weight;
              value = v28->m_Data.value;
            }
            else
            {
              weight = 1.0;
              value = "";
            }
            CResponseCriteriaSet::AppendCriteria(&rewrite, buf, value, weight);
            if ( pFrom->m_Lookup.m_NumElements > m_Left )
            {
              v29 = &pFrom->m_Lookup.m_Elements.m_pMemory[m_Left];
              v26 = v29->m_Data.weight;
              v27 = v29->m_Data.value;
            }
            else
            {
              v26 = 1.0;
              v27 = "";
            }
            CResponseCriteriaSet::AppendCriteria(pSetOnWorld, v30, v27, v26);
            buf[5] = 0;
          }
          else
          {
            if ( pFrom->m_Lookup.m_NumElements > m_Left )
            {
              v23 = &pFrom->m_Lookup.m_Elements.m_pMemory[m_Left];
              v21 = v23->m_Data.weight;
              v22 = v23->m_Data.value;
              criteria.m_Id = v23->m_Data.criterianame.m_Id;
            }
            else
            {
              v21 = 1.0;
              criteria.m_Id = -1;
              v22 = "";
            }
            CResponseCriteriaSet::AppendCriteria(&rewrite, &criteria.m_Id, v22, v21);
          }
          m_Left = CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::NextInorder(
                     &pFrom->m_Lookup,
                     m_Left);
        }
        while ( m_Left >= 0 && m_Left < pFrom->m_Lookup.m_NumElements );
        m_pMemory = pFrom->m_Lookup.m_Elements.m_pMemory;
        m_Root = pFrom->m_Lookup.m_Root;
        m_NumElements = pFrom->m_Lookup.m_NumElements;
      }
    }
    m_nGrowSize = pFrom->m_Lookup.m_Elements.m_nGrowSize;
    pFrom->m_nNumPrefixedContexts = 0;
    v13 = rewrite.m_Lookup.m_Elements.m_nGrowSize;
    rewrite.m_Lookup.m_Elements.m_nGrowSize = m_nGrowSize;
    v14 = rewrite.m_Lookup.m_Elements.m_pMemory;
    rewrite.m_Lookup.m_Elements.m_pMemory = m_pMemory;
    m_nAllocationCount = pFrom->m_Lookup.m_Elements.m_nAllocationCount;
    pFrom->m_Lookup.m_Elements.m_nGrowSize = v13;
    pFrom->m_Lookup.m_Elements.m_pMemory = v14;
    LODWORD(v14) = rewrite.m_Lookup.m_Elements.m_nAllocationCount;
    rewrite.m_Lookup.m_Elements.m_nAllocationCount = m_nAllocationCount;
    m_LessFunc = pFrom->m_Lookup.m_LessFunc;
    pFrom->m_Lookup.m_Elements.m_nAllocationCount = v14;
    v17 = rewrite.m_Lookup.m_LessFunc;
    rewrite.m_Lookup.m_LessFunc = m_LessFunc;
    LOWORD(m_LessFunc) = rewrite.m_Lookup.m_Root;
    rewrite.m_Lookup.m_Root = m_Root;
    pFrom->m_Lookup.m_LessFunc = v17;
    pFrom->m_Lookup.m_Root = m_LessFunc;
    LOWORD(m_LessFunc) = rewrite.m_Lookup.m_NumElements;
    rewrite.m_Lookup.m_NumElements = m_NumElements;
    m_FirstFree = rewrite.m_Lookup.m_FirstFree;
    pFrom->m_Lookup.m_NumElements = m_LessFunc;
    LOWORD(m_LessFunc) = pFrom->m_Lookup.m_FirstFree;
    pFrom->m_Lookup.m_FirstFree = m_FirstFree;
    rewrite.m_Lookup.m_FirstFree = m_LessFunc;
    m_pElements = pFrom->m_Lookup.m_pElements;
    pFrom->m_Lookup.m_pElements = rewrite.m_Lookup.m_pElements;
    rewrite.m_Lookup.m_pElements = m_pElements;
    LOWORD(m_pElements) = pFrom->m_Lookup.m_LastAlloc.index;
    pFrom->m_Lookup.m_LastAlloc.index = rewrite.m_Lookup.m_LastAlloc.index;
    rewrite.m_Lookup.m_LastAlloc.index = m_pElements;
    m_nNumPrefixedContexts = pSetOnWorld->m_Lookup.m_NumElements;
    rewrite._vptr_CResponseCriteriaSet = &off_47C4CD0;
    CUtlRBTree<CResponseCriteriaSet::CritEntry_t,short,bool (*)(CResponseCriteriaSet::CritEntry_t const&,CResponseCriteriaSet::CritEntry_t const&),CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>>::Purge(&rewrite.m_Lookup);
    if ( (rewrite.m_Lookup.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<UtlRBTreeNode_t<CResponseCriteriaSet::CritEntry_t,short>,short>::Purge(&rewrite.m_Lookup.m_Elements);
  }
  return m_nNumPrefixedContexts;
}


// CResponseCriteriaSet::IterateOverAllSymbols  (line 498, @0x000000000310c770, libserver.so)  // inlines: CUtlSymbol, GetNumStrings, operator()
// calls: CUtlSymbolTable::String
// callers: CResponseQueryNetworking::PrecacheKnownSymbols
// globals: CResponseCriteriaSet::sm_pCriteriaSymbols
void __fastcall CResponseCriteriaSet::IterateOverAllSymbols(
        const CUtlDelegate<bool(CUtlSymbol,char const*)> *const func)
{
  const CUtlSymbolTable *v2; // rdi
  int m_NumElements; // r13d
  int v4; // ebx
  char *v5; // rax
  void (*pfn)(detail::GenericClass *); // rcx
  _QWORD *v7; // rdi
  CUtlSymbol id; // [rsp+10h] [rbp-50h] BYREF
  _WORD v9[32]; // [rsp+20h] [rbp-40h] BYREF

  v2 = CResponseCriteriaSet::sm_pCriteriaSymbols;
  m_NumElements = CResponseCriteriaSet::sm_pCriteriaSymbols->m_Lookup.m_NumElements;
  if ( CResponseCriteriaSet::sm_pCriteriaSymbols->m_Lookup.m_NumElements != 0 )
  {
    v4 = 0;
    while ( 1 )
    {
      id.m_Id = v4;
      v5 = CUtlSymbolTable::String(v2, &id.m_Id);
      pfn = func->m_Closure.m_pFunction.__pfn;
      v7 = (func->m_Closure.m_pthis + func->m_Closure.m_pFunction.__delta);
      if ( (pfn & 1) != 0 )
        pfn = *(pfn + *v7 - 1);
      v9[0] = v4;
      if ( (pfn)(v7, v9, v5) == 0 )
        break;
      if ( ++v4 >= m_NumElements )
        break;
      v2 = CResponseCriteriaSet::sm_pCriteriaSymbols;
    }
  }
}


