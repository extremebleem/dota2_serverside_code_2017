
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAEventSchema::Get  (line 19, @0x00000000024de9d0, libserver.so)
// calls: __cxa_guard_acquire, CDOTAEventSchema::CDOTAEventSchema, __cxa_guard_release, __cxa_atexit
// callers: CIngameEvent_Base::GetPlayerCompendiumLevel, CIngameEvent_WM2016::OnPreGameStarted, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob, CIngameEvent_WM2016::GetWagerSizeAmount, CIngameEvent_WM2016::GetTotalTipsForPlayerID, CIngameEvent_WM2016::DoEndGameCoinWagerCalculations, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CIngameEvent_WM2016::GiveTip, CDOTA_PlayerResource::GetEventLevelForPlayerID, CalculateCardFantasyStatScoreForMatch, ParseChallengeQuests, CDOTA_BaseNPC_Hero::BuildWearableSpawnList (13 total)
// globals: `guard variable for'CDOTAEventSchema::Get(void)::s_instance, CDOTAEventSchema::Get(void)::s_instance, __dso_handle, CDOTAEventSchema::~CDOTAEventSchema()
CDOTAEventSchema *__cdecl CDOTAEventSchema::Get()
{
  if ( `guard variable for'CDOTAEventSchema::Get(void)::s_instance != 0 )
    return &CDOTAEventSchema::Get(void)::s_instance;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTAEventSchema::Get(void)::s_instance) != 0 )
  {
    CDOTAEventSchema::CDOTAEventSchema(&CDOTAEventSchema::Get(void)::s_instance);
    __cxa_guard_release(&`guard variable for'CDOTAEventSchema::Get(void)::s_instance);
    __cxa_atexit(CDOTAEventSchema::~CDOTAEventSchema, &CDOTAEventSchema::Get(void)::s_instance, &_dso_handle);
  }
  return &CDOTAEventSchema::Get(void)::s_instance;
}


// CDOTAEventSchema::CDOTAEventSchema  (line 25, @0x00000000024de920, libserver.so)  // inlines: CUtlMap, CUtlMemory, CUtlRBTree, ResetDbgInfo, SetLessFunc
// callers: CDOTAEventSchema::Get
// globals: CDefOps<EEvent>::LessFunc(EEvent const&,EEvent const&), CDefOps<uint>::LessFunc(uint const&,uint const&)
void __fastcall CDOTAEventSchema::CDOTAEventSchema(CDOTAEventSchema *const this)
{
  this->m_mapEventDefinitions.m_Tree.m_Root = -1;
  this->m_mapEventDefinitions.m_Tree.m_NumElements = 0;
  this->m_mapEventDefinitions.m_Tree.m_FirstFree = -1;
  this->m_mapEventDefinitions.m_Tree.m_LastAlloc.index = -1;
  this->m_mapEventDefinitions.m_Tree.m_LessFunc.m_LessFunc = CDefOps<EEvent>::LessFunc;
  this->m_pkvEventDefinitions = 0;
  this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapEventDefinitions.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapEventDefinitions.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapEventDefinitions.m_Tree.m_pElements = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_Root = -1;
  this->m_mapLeagueIDToEvent.m_Tree.m_NumElements = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_FirstFree = -1;
  this->m_mapLeagueIDToEvent.m_Tree.m_LastAlloc.index = -1;
  this->m_mapLeagueIDToEvent.m_Tree.m_pElements = 0;
  this->m_mapLeagueIDToEvent.m_Tree.m_LessFunc.m_LessFunc = CDefOps<unsigned int>::LessFunc;
}


// CDOTAEventSchema::~CDOTAEventSchema  (line 32, @0x0000000002543da0, libserver.so)  // inlines: FirstInorder, LeftChild, Purge, PurgeAndDeleteElements, operator[], ~CUtlMap, ~CUtlMemory, ~CUtlRBTree
// calls: CDOTAEventDefinition::~CDOTAEventDefinition, operator delete, CUtlRBTree<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int, CUtlMap<EEvent, CDOTAEventDefinition*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlRBTree<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int, CUtlMap<EEvent, CDOTAEventDefinition*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int> >::Purge, KeyValues::~KeyValues, KeyValues::operator delete, CUtlRBTree<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int, CUtlMap<unsigned int, EEvent>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, EEvent>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int>::Purge
void __fastcall CDOTAEventSchema::~CDOTAEventSchema(CDOTAEventSchema *const this)
{
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)> *p_m_mapEventDefinitions; // r14
  unsigned __int16 m_Root; // bx
  UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition*>::Node_t,short unsigned int> *m_pMemory; // rdx
  __int64 v5; // rax
  unsigned __int16 m_Left; // si
  __int64 v7; // rax
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)>::ElemType_t elem; // r12
  KeyValues *m_pkvEventDefinitions; // rbx

  p_m_mapEventDefinitions = &this->m_mapEventDefinitions;
  m_Root = this->m_mapEventDefinitions.m_Tree.m_Root;
  if ( m_Root != 0xFFFF )
  {
    m_pMemory = this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory;
    v5 = m_Root;
    m_Left = m_pMemory[m_Root].m_Left;
    if ( m_Left != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = m_Left;
        if ( m_pMemory[m_Left].m_Left == 0xFFFF )
          break;
        m_Left = m_pMemory[m_Left].m_Left;
      }
      m_Root = m_Left;
    }
    while ( 1 )
    {
      v7 = v5;
      elem = m_pMemory[v7].m_Data.elem;
      if ( elem != 0 )
      {
        CDOTAEventDefinition::~CDOTAEventDefinition(m_pMemory[v7].m_Data.elem);
        operator delete(elem);
      }
      m_Root = CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::NextInorder(
                 &p_m_mapEventDefinitions->m_Tree,
                 m_Root);
      if ( m_Root == 0xFFFF )
        break;
      m_pMemory = this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory;
      v5 = m_Root;
    }
  }
  CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_mapEventDefinitions->m_Tree);
  m_pkvEventDefinitions = this->m_pkvEventDefinitions;
  if ( this->m_pkvEventDefinitions != 0 )
  {
    KeyValues::~KeyValues(this->m_pkvEventDefinitions);
    KeyValues::operator delete(m_pkvEventDefinitions);
  }
  CUtlRBTree<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapLeagueIDToEvent.m_Tree);
  if ( (this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapLeagueIDToEvent.m_Tree.m_Elements);
  CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&p_m_mapEventDefinitions->m_Tree);
  if ( (this->m_mapEventDefinitions.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapEventDefinitions.m_Tree.m_Elements);
}


// CDOTAEventSchema::Initialize  (line 38, @0x0000000002543710, libserver.so)  // inlines: CUtlString, LeafCodeInfo_t, String, ~CUtlString
// calls: CDOTAEventSchema::Initialize, IsAppDota2Experimental, CUtlString::FreeMemoryBlock, LoggingSystem_IsChannelEnabled, CUtlString::Get, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, _Unwind_Resume
// callers: CDOTAGCServerSystem::PostInit
// strings: "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/dota/dota, "Initialize", "Failed to initialize event schema.  %s"
void __fastcall CDOTAEventSchema::Initialize(CDOTAEventSchema *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  const char *v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  int v9; // r8d
  int v10; // r9d
  int v11; // r12d
  CUtlString sErrMsg; // [rsp+0h] [rbp-40h] BYREF
  LeafCodeInfo_t v13; // [rsp+10h] [rbp-30h] BYREF

  sErrMsg.m_pString = 0;
  if ( !CDOTAEventSchema::Initialize(this, &sErrMsg) )
  {
    if ( g_pFullFileSystem != 0 )
      (*(g_pFullFileSystem->_vptr_IAppSystem + 146))(g_pFullFileSystem, 0, 0);
    if ( !IsAppDota2Experimental() )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      {
        v5 = CUtlString::Get(&sErrMsg);
        v13.m_nLine = 49;
        v13.m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/shared/dota/dota_event_schema.cpp";
        v13.m_szFunction = "Initialize";
        LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v13, "Failed to initialize event schema.  %s", v5);
      }
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
        loc_0 = -559038737;
      v11 = Plat_ExitProcess(1);
      if ( sErrMsg.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sErrMsg);
      Unwind_Resume(v11, v8, v6, v7, v9, v10);
    }
  }
  if ( sErrMsg.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&sErrMsg);
}


// CDOTAEventSchema::Initialize  (line 54, @0x00000000025430e0, libserver.so)  // inlines: CUtlString, EEvent_Parse, Element, Find, FindInsertionPosition, Insert, InsertAt, Internal_GetDataType, IsString, LeftChild, ParseNamedEnum<EEvent>, RightChild, String, operator(), operator[], ~CUtlString, ~basic_string
// calls: KeyValues::operator new, KeyValues::KeyValues, KeyValues::LoadFromFile, KeyValues::GetFirstSubKey, KeyValues::GetName, std::string::string(char const*,std::allocator<char> const&), EEvent_descriptor, google::protobuf::internal::ParseNamedEnum(google::protobuf::EnumDescriptor const*,std::string const&,int *), std::string::_Rep::_M_dispose(std::allocator<char> const&), CUtlRBTree<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int, CUtlMap<EEvent, CDOTAEventDefinition*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int> >::Find, operator new, CDOTAEventDefinition::CDOTAEventDefinition (28 total)
// callers: CDOTAEventSchema::Initialize
// strings: "Failed to parse event definition for '%s'. Unknown event.", "Failed to load event definitions file '%s'.", "Multiple event definitions for '%s'.", "Error parsing event '%s'.  %s", "Failed to load single event definition file '%s' for event '%s'."
bool __fastcall CDOTAEventSchema::Initialize(CDOTAEventSchema *const this, CUtlString *const sErrMsg)
{
  KeyValues *v3; // r12
  IBaseFileSystem *v4; // rsi
  const char *Name; // rax
  google::protobuf::internal *v6; // rax
  int *v7; // rcx
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)>::KeyType_t M_p; // r13d
  unsigned __int16 m_Root; // r14
  unsigned __int16 m_Right; // ax
  bool v11; // zf
  UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition*>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int16 v13; // ax
  const char *v15; // rax
  KeyValues *v16; // r12
  const char *String; // rax
  IBaseFileSystem *v18; // rsi
  unsigned __int16 v19; // r13
  unsigned __int16 m_Left; // ax
  UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent>::Node_t,short unsigned int> *v21; // rax
  unsigned __int16 v22; // ax
  bool v23; // r12
  bool v24; // r12
  const char *v25; // rax
  const char *v26; // rbx
  const char *v27; // rax
  const char *v28; // rbx
  const char *v29; // rax
  CUtlMap<unsigned int,EEvent,short unsigned int,bool (*)(unsigned int const&,unsigned int const&)> *p_m_mapLeagueIDToEvent; // [rsp+8h] [rbp-E8h]
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)> *p_m_mapEventDefinitions; // [rsp+18h] [rbp-D8h]
  CDOTAEventDefinition *pEventDef; // [rsp+30h] [rbp-C0h]
  bool v34; // [rsp+3Bh] [rbp-B5h]
  EEvent eEvent; // [rsp+3Ch] [rbp-B4h]
  KeyValues *pkvEventDefinition; // [rsp+48h] [rbp-A8h]
  char v37; // [rsp+5Fh] [rbp-91h] BYREF
  CUtlString sEventErrMsg; // [rsp+60h] [rbp-90h] BYREF
  std::string v39[2]; // [rsp+70h] [rbp-80h] BYREF
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)>::Node_t search; // [rsp+80h] [rbp-70h] BYREF
  char szFilename[40]; // [rsp+90h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+B8h] [rbp-38h]

  v42 = __readfsqword(0x28u);
  strcpy(szFilename, "scripts/event_definitions.txt");
  v3 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v3, "");
  this->m_pkvEventDefinitions = v3;
  v4 = 0;
  if ( g_pFullFileSystem != 0 )
    v4 = &g_pFullFileSystem->IBaseFileSystem;
  v34 = KeyValues::LoadFromFile(v3, v4, szFilename, "GAME", 0);
  if ( !v34 )
  {
    CUtlString::Format(sErrMsg, "Failed to load event definitions file '%s'.", szFilename);
    return v34;
  }
  pkvEventDefinition = KeyValues::GetFirstSubKey(this->m_pkvEventDefinitions);
  if ( pkvEventDefinition != 0 )
  {
    p_m_mapEventDefinitions = &this->m_mapEventDefinitions;
    p_m_mapLeagueIDToEvent = &this->m_mapLeagueIDToEvent;
    do
    {
      Name = KeyValues::GetName(pkvEventDefinition);
      std::string::string(&search, Name, &v37);
      v6 = EEvent_descriptor();
      if ( google::protobuf::internal::ParseNamedEnum(v6, &search, v39, v7) == 0 )
      {
        std::string::_Rep::_M_dispose(*&search.key - 24LL, v39);
        v15 = KeyValues::GetName(pkvEventDefinition);
        CUtlString::Format(sErrMsg, "Failed to parse event definition for '%s'. Unknown event.", v15);
        return 0;
      }
      M_p = v39[0]._M_dataplus._M_p;
      eEvent = v39[0]._M_dataplus._M_p;
      std::string::_Rep::_M_dispose(*&search.key - 24LL, v39);
      search.key = M_p;
      if ( CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::Find(
             &p_m_mapEventDefinitions->m_Tree,
             &search) != 0xFFFF )
      {
        v25 = KeyValues::GetName(pkvEventDefinition);
        CUtlString::Format(sErrMsg, "Multiple event definitions for '%s'.", v25);
        return 0;
      }
      if ( (*(&pkvEventDefinition->CKeyValues_Data + 11) & 7) == 1 )
      {
        v16 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v16, "");
        String = KeyValues::GetString(pkvEventDefinition, 0, "", 0, 0);
        v18 = 0;
        if ( g_pFullFileSystem != 0 )
          v18 = &g_pFullFileSystem->IBaseFileSystem;
        if ( !KeyValues::LoadFromFile(v16, v18, String, "GAME", 0) )
        {
          v28 = KeyValues::GetName(pkvEventDefinition);
          v29 = KeyValues::GetString(pkvEventDefinition, 0, "", 0, 0);
          CUtlString::Format(sErrMsg, "Failed to load single event definition file '%s' for event '%s'.", v29, v28);
          if ( v16 != 0 )
          {
            KeyValues::~KeyValues(v16);
            KeyValues::operator delete(v16);
          }
          return 0;
        }
        KeyValues::SwapSubKey(this->m_pkvEventDefinitions, pkvEventDefinition, v16);
        KeyValues::~KeyValues(pkvEventDefinition);
        KeyValues::operator delete(pkvEventDefinition);
        pkvEventDefinition = v16;
      }
      pEventDef = operator new(0x4B0u);
      CDOTAEventDefinition::CDOTAEventDefinition(pEventDef, eEvent);
      sEventErrMsg.m_pString = 0;
      if ( !CDOTAEventDefinition::InitFromKeyValues(pEventDef, pkvEventDefinition, &sEventErrMsg) )
      {
        v26 = CUtlString::Get(&sEventErrMsg);
        v27 = KeyValues::GetName(pkvEventDefinition);
        CUtlString::Format(sErrMsg, "Error parsing event '%s'.  %s", v27, v26);
        if ( sEventErrMsg.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&sEventErrMsg);
        return 0;
      }
      m_Root = this->m_mapEventDefinitions.m_Tree.m_Root;
      search.key = eEvent;
      search.elem = pEventDef;
      if ( m_Root != 0xFFFF )
      {
        while ( 1 )
        {
          v11 = !this->m_mapEventDefinitions.m_Tree.m_LessFunc.m_LessFunc(
                   &search,
                   &this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory[m_Root].m_Data);
          m_pMemory = this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory;
          if ( v11 )
          {
            m_Right = m_pMemory[m_Root].m_Right;
            v23 = 0;
            if ( m_Right == 0xFFFF )
              goto LABEL_16;
          }
          else
          {
            m_Right = m_pMemory[m_Root].m_Left;
            v23 = 1;
            if ( m_Right == 0xFFFF )
              goto LABEL_16;
          }
          m_Root = m_Right;
        }
      }
      v23 = 0;
LABEL_16:
      v13 = CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
              &p_m_mapEventDefinitions->m_Tree,
              &search);
      CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
        &p_m_mapEventDefinitions->m_Tree,
        v13,
        m_Root,
        v23);
      ++this->m_mapEventDefinitions.m_Tree.m_NumElements;
      if ( *(pEventDef + 4) != 0 )
      {
        v19 = this->m_mapLeagueIDToEvent.m_Tree.m_Root;
        LODWORD(v39[0]._M_dataplus._M_p) = *(pEventDef + 4);
        HIDWORD(v39[0]._M_dataplus._M_p) = eEvent;
        if ( v19 != 0xFFFF )
        {
          while ( 1 )
          {
            v11 = !this->m_mapLeagueIDToEvent.m_Tree.m_LessFunc.m_LessFunc(
                     v39,
                     &this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory[v19].m_Data);
            v21 = this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory;
            if ( v11 )
            {
              m_Left = v21[v19].m_Right;
              v24 = 0;
              if ( m_Left == 0xFFFF )
                goto LABEL_33;
            }
            else
            {
              m_Left = v21[v19].m_Left;
              v24 = 1;
              if ( m_Left == 0xFFFF )
                goto LABEL_33;
            }
            v19 = m_Left;
          }
        }
        v24 = 0;
LABEL_33:
        v22 = CUtlRBTree<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::NewNode(
                &p_m_mapLeagueIDToEvent->m_Tree,
                v39);
        CUtlRBTree<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::LinkToParent(
          &p_m_mapLeagueIDToEvent->m_Tree,
          v22,
          v19,
          v24);
        ++this->m_mapLeagueIDToEvent.m_Tree.m_NumElements;
      }
      if ( sEventErrMsg.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&sEventErrMsg);
      pkvEventDefinition = KeyValues::GetNextKey(pkvEventDefinition);
    }
    while ( pkvEventDefinition != 0 );
  }
  return v34;
}


// CDOTAEventSchema::GetEventDefinition  (line 171, @0x00000000024dea40, libserver.so)  // inlines: Element, Find, FindElement, operator[]
// calls: CUtlRBTree<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int, CUtlMap<EEvent, CDOTAEventDefinition*>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent, CDOTAEventDefinition*>::Node_t, short unsigned int>, short unsigned int> >::Find
// callers: CDOTAEventSchema::GetLeagueIDForEvent, CIngameEvent_Base::GetPlayerCompendiumLevel, CIngameEvent_WM2016::OnPreGameStarted, GCSDK::GCClientJobLambda<CIngameEvent_WM2016::GiveTip(int, int)::__lambda11>::BYieldingRunJob, CIngameEvent_WM2016::GetWagerSizeAmount, CIngameEvent_WM2016::GetTotalTipsForPlayerID, CIngameEvent_WM2016::DoEndGameCoinWagerCalculations, CIngameEvent_WM2016::GenerateWeeklyAndDailyChallenges, CIngameEvent_WM2016::GiveTip, CDOTA_PlayerResource::GetEventLevelForPlayerID, CalculateCardFantasyStatScoreForMatch, ParseChallengeQuests (13 total)
const CDOTAEventDefinition *__fastcall CDOTAEventSchema::GetEventDefinition(
        const CDOTAEventSchema *const this,
        EEvent eEvent)
{
  unsigned __int16 v3; // ax
  CUtlMap<EEvent,CDOTAEventDefinition*,short unsigned int,bool (*)(const EEvent&,const EEvent&)>::Node_t search; // [rsp+0h] [rbp-20h] BYREF

  search.key = eEvent;
  v3 = CUtlRBTree<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short,CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<EEvent,CDOTAEventDefinition *,unsigned short,bool (*)(EEvent const&,EEvent const&)>::Node_t,unsigned short>,unsigned short>>::Find(
         &this->m_mapEventDefinitions.m_Tree,
         &search);
  if ( v3 == 0xFFFF )
    return 0;
  else
    return this->m_mapEventDefinitions.m_Tree.m_Elements.m_pMemory[v3].m_Data.elem;
}


// CDOTAEventSchema::GetLeagueIDForEvent  (line 177, @0x00000000024dea90, libserver.so)
// calls: CDOTAEventSchema::GetEventDefinition
uint32 __fastcall CDOTAEventSchema::GetLeagueIDForEvent(const CDOTAEventSchema *const this, EEvent eEvent)
{
  const CDOTAEventDefinition *EventDefinition; // rax

  EventDefinition = CDOTAEventSchema::GetEventDefinition(this, eEvent);
  if ( EventDefinition != 0 )
    return *(EventDefinition + 4);
  else
    return 0;
}


// CDOTAEventSchema::GetEventForLeagueID  (line 183, @0x00000000024c0200, libserver.so)  // inlines: Element, Find, FindElement, LeftChild, RightChild, operator(), operator[]
EEvent __fastcall CDOTAEventSchema::GetEventForLeagueID(const CDOTAEventSchema *const this, uint32 unLeagueID)
{
  unsigned __int64 m_Root; // rbx
  UtlRBTreeNode_t<CUtlMap<unsigned int,EEvent>::Node_t,short unsigned int> *m_pMemory; // rax
  unsigned __int64 v5; // rbx
  bool v6; // zf
  _DWORD v8[12]; // [rsp+0h] [rbp-30h] BYREF

  v8[0] = unLeagueID;
  m_Root = this->m_mapLeagueIDToEvent.m_Tree.m_Root;
  if ( m_Root == 0xFFFF )
    return EEvent::EVENT_ID_NONE;
  m_pMemory = this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = m_Root;
      if ( !this->m_mapLeagueIDToEvent.m_Tree.m_LessFunc.m_LessFunc(v8, &m_pMemory[v5].m_Data) )
        break;
      m_pMemory = this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory;
      m_Root = m_pMemory[v5].m_Left;
      if ( m_Root == 0xFFFF )
        return EEvent::EVENT_ID_NONE;
    }
    v6 = !this->m_mapLeagueIDToEvent.m_Tree.m_LessFunc.m_LessFunc(
            &this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory[v5].m_Data,
            v8);
    m_pMemory = this->m_mapLeagueIDToEvent.m_Tree.m_Elements.m_pMemory;
    if ( v6 )
      break;
    m_Root = m_pMemory[v5].m_Right;
    if ( m_Root == 0xFFFF )
      return EEvent::EVENT_ID_NONE;
  }
  return m_pMemory[v5].m_Data.elem;
}


