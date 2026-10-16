
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEmoteMap::AddFunction  (line 19, @0x00000000024fff80, libserver.so)  // inlines: AddRef, AddRef<CEmoteMap::IFunction>, CSmartPtr, DoAddRef, DoRelease, Element, Find, Increment, LeftChild, Node_t, Release, Release<CEmoteMap::IFunction>, RightChild, ThreadInterlockedIncrement, operator(), operator=, operator[], ~CSmartPtr, ~Node_t
// calls: CUtlDict<CSmartPtr<CEmoteMap::IFunction, CRefCountAccessor>, int>::Insert, CRefCountServiceBase<true, CRefMT>::DoRelease, _Unwind_Resume
// callers: CDOTAGamerules::FillOutHardcodedEmoteRules
bool __fastcall CEmoteMap::AddFunction(
        CEmoteMap *const this,
        const char *const pszCommandToken,
        CEmoteMap::IFunction *pFunc)
{
  __int64 m_Root; // r12
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v7; // rbx
  CRefCountServiceBase<true,CRefMT> *v8; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v9; // r12
  CEmoteMap::IFunction *v10; // rbx
  CEmoteMap::IFunction *m_pObj; // rbx
  CEmoteMap::IFunction *v13; // rbx
  CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor> element; // [rsp+10h] [rbp-40h] BYREF
  CRefCountServiceBase<true,CRefMT> *v16; // [rsp+18h] [rbp-38h]

  if ( pszCommandToken == 0 )
    goto LABEL_19;
  m_Root = this->m_strToFunc.m_Elements.m_Tree.m_Root;
  v16 = 0;
  element.m_pObj = pszCommandToken;
  if ( m_Root == -1 )
    goto LABEL_19;
  m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
  do
  {
    while ( 1 )
    {
      v7 = m_Root;
      if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&element, &m_pMemory[v7].m_Data) == 0 )
        break;
      m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
    if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
           &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data,
           &element) == 0 )
      break;
    m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v7].m_Right;
  }
  while ( m_Root != -1 );
LABEL_8:
  v8 = v16;
  if ( v16 != 0 && _InterlockedSub(&v16->m_iRefs, 1u) == 0 && (*(v8->_vptr_CRefCountServiceBase + 2))(v8) != 0 )
    (*(v8->_vptr_CRefCountServiceBase + 1))(v8);
  if ( m_Root == -1 )
  {
LABEL_19:
    element.m_pObj = 0;
    if ( pFunc != 0 )
    {
      _InterlockedAdd(&pFunc->m_iRefs, 1u);
      m_pObj = element.m_pObj;
      if ( element.m_pObj != 0
        && _InterlockedSub(&element.m_pObj->m_iRefs, 1u) == 0
        && (*(m_pObj->_vptr_CRefCountServiceBase + 2))(m_pObj) != 0 )
      {
        (*(m_pObj->_vptr_CRefCountServiceBase + 1))(m_pObj);
      }
      element.m_pObj = pFunc;
    }
    CUtlDict<CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int>::Insert(
      &this->m_strToFunc,
      pszCommandToken,
      &element);
    v13 = element.m_pObj;
    if ( element.m_pObj != 0
      && _InterlockedSub(&element.m_pObj->m_iRefs, 1u) == 0
      && (*(v13->_vptr_CRefCountServiceBase + 2))(v13) != 0 )
    {
      (*(v13->_vptr_CRefCountServiceBase + 1))(v13);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v9 = &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[m_Root];
    v10 = v9->m_Data.elem.m_pObj;
    if ( pFunc == v10 )
    {
      return 1;
    }
    else
    {
      if ( pFunc != 0 )
      {
        _InterlockedAdd(&pFunc->m_iRefs, 1u);
        v10 = v9->m_Data.elem.m_pObj;
      }
      if ( v10 != 0 && _InterlockedSub(&v10->m_iRefs, 1u) == 0 && (*(v10->_vptr_CRefCountServiceBase + 2))(v10) != 0 )
        (*(v10->_vptr_CRefCountServiceBase + 1))(v10);
      v9->m_Data.elem.m_pObj = pFunc;
      return 1;
    }
  }
}


// CEmoteMap::RemoveFunction  (line 38, @0x0000000002528db0, libserver.so)  // inlines: CSmartPtr, Destruct<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t>, DoRelease, Element, Find, FreeNode, Key, LeftChild, Node_t, Release, Release<CEmoteMap::IFunction>, RemoveAt, RightChild, SetLeftChild, SetRightChild, operator(), operator[], ~CSmartPtr, ~Node_t
// calls: CUtlRBTree<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int, CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, CSmartPtr<CEmoteMap::IFunction>, int, bool (*)(char const* const&, char const* const&)>::Node_t, int>, int> >::Unlink, CRefCountServiceBase<true, CRefMT>::DoRelease, _Unwind_Resume
bool __fastcall CEmoteMap::RemoveFunction(CEmoteMap *const this, const char *const pszCommandToken)
{
  int m_Root; // r12d
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v8; // rax
  volatile signed __int32 *m_pObj; // r14
  const char *v11; // [rsp-38h] [rbp-38h] BYREF
  __int64 v12; // [rsp-30h] [rbp-30h]

  if ( pszCommandToken == 0 )
    return 0;
  v12 = 0;
  m_Root = this->m_strToFunc.m_Elements.m_Tree.m_Root;
  v11 = pszCommandToken;
  if ( m_Root == -1 )
    return 0;
  m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
  do
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v11, &m_pMemory[v5].m_Data) == 0 )
        break;
      m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[m_Root].m_Left;
      if ( m_Root == -1 )
        goto LABEL_8;
    }
    if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
           &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v5].m_Data,
           &v11) == 0 )
      break;
    m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = m_pMemory[v5].m_Right;
  }
  while ( m_Root != -1 );
LABEL_8:
  v6 = v12;
  if ( v12 != 0 && _InterlockedSub((v12 + 8), 1u) == 0 && (*(*v6 + 16LL))(v6) != 0 )
    (*(*v6 + 8LL))(v6);
  if ( m_Root == -1 )
    return 0;
  v7 = m_Root;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Data.key);
  CUtlRBTree<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int,CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction,CRefCountAccessor>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int>,int>>::Unlink(
    &this->m_strToFunc.m_Elements.m_Tree,
    m_Root);
  v8 = &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7];
  m_pObj = v8->m_Data.elem.m_pObj;
  if ( m_pObj != 0 )
  {
    if ( _InterlockedSub(m_pObj + 2, 1u) != 0 || (*(*m_pObj + 16LL))(m_pObj) == 0 )
    {
      v8 = &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7];
    }
    else
    {
      (*(*m_pObj + 8LL))(m_pObj);
      v8 = &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7];
    }
  }
  v8->m_Left = m_Root;
  this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v7].m_Right = this->m_strToFunc.m_Elements.m_Tree.m_FirstFree;
  --this->m_strToFunc.m_Elements.m_Tree.m_NumElements;
  this->m_strToFunc.m_Elements.m_Tree.m_FirstFree = m_Root;
  return 1;
}


// CEmoteMap::ParseAndRunChat  (line 55, @0x00000000024dcd70, libserver.so)  // inlines: CSmartPtr, DoRelease, Element, Find, GetBool, GetInt, GetTeamNumber, IsIdxValid, IsValidIndex, LeftChild, Node_t, Release, Release<CEmoteMap::IFunction>, RightChild, memcpy, operator(), operator->, operator[], ~CSmartPtr, ~Node_t
// calls: CCommand::CCommand, CCommand::Tokenize, memcpy, __stack_chk_fail, CRefCountServiceBase<true, CRefMT>::DoRelease, _Unwind_Resume
// callers: CDOTAGamerules::OnPlayerChatted
bool __fastcall CEmoteMap::ParseAndRunChat(
        CEmoteMap *const this,
        CDOTAPlayer *pSpeaker,
        const int nTeamOnly,
        const char *const szText)
{
  const char *v4; // rax
  int m_Root; // ebx
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *m_pMemory; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  CRefCountServiceBase<true,CRefMT> *v10; // r13
  __int64 v11; // r13
  CEmoteMap::IFunction *m_pObj; // rdi
  _BOOL8 v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rbx
  void *v17; // rsp
  const char *v18; // rax
  UtlRBTreeNode_t<CUtlMap<char const*,CSmartPtr<CEmoteMap::IFunction>,int,bool (*)(char const* const&,char const* const&)>::Node_t,int> *v19; // rax
  unsigned __int64 v20; // r13
  CDOTAPlayer *pSpeakera; // [rsp+10h] [rbp-660h] BYREF
  const char *szTexta; // [rsp+18h] [rbp-658h]
  const char *v24; // [rsp+20h] [rbp-650h] BYREF
  CRefCountServiceBase<true,CRefMT> *v25; // [rsp+28h] [rbp-648h]
  CCommand args; // [rsp+30h] [rbp-640h] BYREF
  unsigned __int64 v27; // [rsp+638h] [rbp-38h]

  pSpeakera = pSpeaker;
  v27 = __readfsqword(0x28u);
  szTexta = szText;
  if ( dota_speech_emotes.m_pParent->m_Value.m_nValue == 0 )
    return 0;
  v4 = szTexta;
  if ( (*szTexta & 0xDF) == 0 )
    return 0;
  do
    ++v4;
  while ( (*v4 & 0xDF) != 0 );
  if ( szTexta == v4 )
    return 0;
  if ( *v4 == 0 )
  {
    m_Root = this->m_strToFunc.m_Elements.m_Tree.m_Root;
    v24 = szTexta;
    v25 = 0;
    if ( m_Root != -1 )
    {
      m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = m_Root;
          v9 = m_Root;
          if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v24, &m_pMemory[v9].m_Data) == 0 )
            break;
          m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
          m_Root = m_pMemory[m_Root].m_Left;
          if ( m_Root == -1 )
            goto LABEL_12;
        }
        if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
               &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v9].m_Data,
               &v24) == 0 )
          break;
        m_pMemory = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
        m_Root = m_pMemory[v9].m_Right;
        if ( m_Root == -1 )
        {
LABEL_12:
          v10 = v25;
          v8 = -1;
          goto LABEL_13;
        }
      }
      v10 = v25;
LABEL_13:
      if ( v10 == 0 || _InterlockedSub(&v10->m_iRefs, 1u) != 0 || (*(v10->_vptr_CRefCountServiceBase + 2))(v10) == 0 )
        goto LABEL_15;
LABEL_33:
      (*(v10->_vptr_CRefCountServiceBase + 1))(v10);
      goto LABEL_15;
    }
    return 0;
  }
  v15 = v4 - szTexta;
  v16 = v15;
  v17 = alloca(16 * ((((v15 + 32) & 0xFFFFFFF0) + 30) >> 4));
  v18 = memcpy((&pSpeakera & 0xFFFFFFFFFFFFFFEFLL), szTexta, v15 + 1);
  v18[v16] = 0;
  if ( v18 == 0 )
    return 0;
  m_Root = this->m_strToFunc.m_Elements.m_Tree.m_Root;
  v24 = v18;
  v25 = 0;
  if ( m_Root == -1 )
    return 0;
  v19 = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    v8 = m_Root;
    v20 = m_Root;
    if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(&v24, &v19[v20].m_Data) == 0 )
      break;
    v19 = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = v19[m_Root].m_Left;
LABEL_28:
    if ( m_Root == -1 )
    {
      v10 = v25;
      v8 = -1;
      goto LABEL_35;
    }
  }
  if ( this->m_strToFunc.m_Elements.m_Tree.m_LessFunc.m_LessFunc(
         &this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v20].m_Data,
         &v24) != 0 )
  {
    v19 = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory;
    m_Root = v19[v20].m_Right;
    goto LABEL_28;
  }
  v10 = v25;
LABEL_35:
  if ( v10 != 0 && _InterlockedSub(&v10->m_iRefs, 1u) == 0 && (*(v10->_vptr_CRefCountServiceBase + 2))(v10) != 0 )
    goto LABEL_33;
LABEL_15:
  if ( v8 < 0 )
    return 0;
  if ( v8 >= this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_nAllocationCount )
    return 0;
  if ( m_Root > this->m_strToFunc.m_Elements.m_Tree.m_LastAlloc.index )
    return 0;
  if ( m_Root == -1 )
    return 0;
  v11 = m_Root;
  if ( m_Root == this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v11].m_Left )
    return 0;
  CCommand::CCommand(&args);
  CCommand::Tokenize(&args, szTexta, 0);
  v13 = pSpeakera != 0 && nTeamOnly == pSpeakera->m_iTeamNum.m_Value;
  m_pObj = this->m_strToFunc.m_Elements.m_Tree.m_Elements.m_pMemory[v11].m_Data.elem.m_pObj;
  (*(m_pObj->_vptr_CRefCountServiceBase + 3))(m_pObj, pSpeakera, &args, v13);
  return 1;
}


// CEmotePlayConcept::Do  (line 109, @0x00000000024bc3a0, libserver.so)  // inlines: CEntityHandle, CUtlSymbol, GetAssignedHero, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*
// calls: __cxa_guard_acquire, CResponseCriteriaSet::ComputeCriteriaSymbol, __cxa_guard_release, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume, __cxa_guard_abort
// globals: `guard variable for'CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote, CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote
void __fastcall CEmotePlayConcept::Do(
        CEmotePlayConcept *const this,
        CDOTAPlayer *const pSpeaker,
        const CCommand *const args,
        bool bChatWasToTeamOnly)
{
  unsigned __int16 v7; // dx
  int v8; // esi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *m_pInstance; // r14
  const char *m_pszName; // rdx
  CDOTA_Speech *vptr_IHandleEntity; // rdi
  CResponseCriteriaSet::CritSymbol_t v15; // [rsp+10h] [rbp-70h] BYREF
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-60h] BYREF

  if ( `guard variable for'CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote == 0
    && __cxa_guard_acquire(&`guard variable for'CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote) != 0 )
  {
    CResponseCriteriaSet::ComputeCriteriaSymbol("emote");
    __cxa_guard_release(&`guard variable for'CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote);
  }
  if ( pSpeaker != 0 )
  {
    if ( pSpeaker->m_hAssignedHero.m_Value.m_Index == -1 )
    {
      v7 = 0x7FFF;
      v8 = 0x7FFF;
    }
    else
    {
      v7 = pSpeaker->m_hAssignedHero.m_Value.m_Index & 0x7FFF;
      v8 = v7;
    }
    v9 = (pSpeaker->m_hAssignedHero.m_Value.m_Index >> 15 << 15) | v7 & 0x7FFF;
    LODWORD(criteria._vptr_CResponseCriteriaSet) = v9;
    if ( v9 + 2 > 1 )
    {
      v10 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9];
      if ( v10 != 0 )
      {
        v11 = &v10[v8 & 0x1FF];
        if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        {
          m_pInstance = v11->m_pInstance;
          if ( v11->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          {
            CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
            m_pszName = this->m_pszName;
            v15.m_Id = CEmotePlayConcept::Do(CDOTAPlayer *,CCommand const&,bool)::s_emote.m_Id;
            CResponseCriteriaSet::AppendCriteria(&criteria, &v15, m_pszName, 1.0);
            vptr_IHandleEntity = m_pInstance[70]._vptr_IHandleEntity;
            if ( vptr_IHandleEntity != 0 )
              CDOTA_Speech::SpeakConcept(
                vptr_IHandleEntity,
                this->m_nConcept,
                &criteria,
                !bChatWasToTeamOnly ? 5 : 2,
                0,
                0,
                1,
                0);
            CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
          }
        }
      }
    }
  }
}


// CDOTAGamerules::FillOutHardcodedEmoteRules  (line 128, @0x00000000025001a0, libserver.so)  // inlines: CEmotePlayConcept, CRefCountServiceBase, CRefCounted, IFunction
// calls: operator new, CEmoteMap::AddFunction
// callers: CDOTAGamerules::CDOTAGamerules
// strings: "lol", "lmao", "haha", "rofl", "hah", "jaja" (10 total)
void __fastcall CDOTAGamerules::FillOutHardcodedEmoteRules(CDOTAGamerules *const this)
{
  CEmoteMap *p_m_EmoteRules; // rbx
  CEmoteMap::IFunction *v2; // r12
  CEmoteMap::IFunction *v3; // r12

  p_m_EmoteRules = &this->m_EmoteRules;
  v2 = operator new(0x20u);  // new CEmotePlayConcept (size matches)
  v2->_vptr_CRefCountServiceBase = off_40F6990;  // vptr: CEmotePlayConcept
  v2->m_iRefs = 1;
  v2[1]._vptr_CRefCountServiceBase = "laugh";
  v2[1].m_iRefs = 30;
  CEmoteMap::AddFunction(p_m_EmoteRules, "lol", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "lmao", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "haha", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "rofl", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "hah", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "jaja", v2);
  CEmoteMap::AddFunction(p_m_EmoteRules, "/laugh", v2);
  v3 = operator new(0x20u);  // new CEmotePlayConcept (size matches)
  v3->_vptr_CRefCountServiceBase = off_40F6990;  // vptr: CEmotePlayConcept
  v3[1]._vptr_CRefCountServiceBase = "thanks";
  v3->m_iRefs = 1;
  v3[1].m_iRefs = 26;
  CEmoteMap::AddFunction(p_m_EmoteRules, "thanks", v3);
  CEmoteMap::AddFunction(p_m_EmoteRules, "thx", v3);
  CEmoteMap::AddFunction(p_m_EmoteRules, "tnx", v3);
  CEmoteMap::AddFunction(p_m_EmoteRules, "ty", v3);
  CEmoteMap::AddFunction(p_m_EmoteRules, "/thanks", v3);
}


