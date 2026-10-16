
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>::EnsureCapacity  (line 79, @0x000000000199aa08, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CEntityKeyValues::Unserialize
// strings: "../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
void __fastcall CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>::EnsureCapacity(
        CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int> *const this,
        int nCapacity,
        bool bConservative)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v7.m_szFile = "../public/tier1/utlleanvector.h";
    v7.m_szFunction = "EnsureCapacity";
    v7.m_nLine = 104;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v7, "%s allocation count overflow", "EnsureCapacity");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AA7F);
}


// CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>::EnsureCapacity  (line 79, @0x000000000199ac38, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
void __fastcall CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>::EnsureCapacity(
        CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int> *const this,
        int nCapacity,
        bool bConservative)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v7.m_szFile = "../../public/tier1/utlleanvector.h";
    v7.m_szFunction = "EnsureCapacity";
    v7.m_nLine = 104;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v7, "%s allocation count overflow", "EnsureCapacity");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199ACAF);
}


// CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t, 3u, short int>::EnsureCapacity  (line 79, @0x000000000199add6, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CFieldPathList::ReserveCounts
// strings: "../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
void __fastcall CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,(unsigned short)3,short>::EnsureCapacity(
        CUtlLeanVectorFixedGrowableBase<CFieldPathReconstruct_t,3u,short int> *const this,
        int nCapacity,
        bool bConservative)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v7.m_szFile = "../public/tier1/utlleanvector.h";
    v7.m_szFunction = "EnsureCapacity";
    v7.m_nLine = 104;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v7, "%s allocation count overflow", "EnsureCapacity");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AE4D);
}


// CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t, 6u, short int>::EnsureCapacity  (line 79, @0x000000000199ae4e, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CFieldPathList::ReserveCounts
// strings: "../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
void __fastcall CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,(unsigned short)6,short>::EnsureCapacity(
        CUtlLeanVectorFixedGrowableBase<CFieldPath::Path_t,6u,short int> *const this,
        int nCapacity,
        bool bConservative)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v7.m_szFile = "../public/tier1/utlleanvector.h";
    v7.m_szFunction = "EnsureCapacity";
    v7.m_nLine = 104;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v7, "%s allocation count overflow", "EnsureCapacity");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AEC5);
}


// CUtlLeanVectorFixedGrowableBase<unsigned int, 3u, short int>::Purge  (line 213, @0x0000000001ec5730, libserver.so)  // inlines: Base, RemoveAll
// callers: CNetworkTransmitComponent::GetChangeAccessorFieldPathIndexInfo, CNetworkTransmitComponent::AddChangeAccessorPath, CNetworkTransmitComponent::ValidateChangeOffset
void __fastcall CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)3,short>::Purge(
        CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int> *const this)
{
  CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned int,3u,short int>::ElemType_t *); // rdx

  this->m_nCount = 0;
  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->m_pElements);
    else
      v3(g_pMemAlloc, 0);
  }
  this->m_nAllocated = 3;
}


// CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t, 3u, short int>::Purge  (line 213, @0x0000000001f918e0, libserver.so)  // inlines: Base, RemoveAll
// callers: CSoundOpGameSystem::DoSetSoundEventParams, CSoundOpGameSystem::DoStartSoundEvent, CSoundOpGameSystem::DoSetLibraryStackFields
void __fastcall CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,(unsigned short)3,short>::Purge(
        CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int> *const this)
{
  CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CSosPackedFieldData::Entry_t,3u,short int>::ElemType_t *); // rdx

  this->m_nCount = 0;
  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated > 3 )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->m_pElements);
    else
      v3(g_pMemAlloc, 0);
    this->m_nAllocated = 3;
  }
  else
  {
    this->m_nAllocated = 3;
  }
}


// CUtlLeanVectorFixedGrowableBase<unsigned char, 200u, short int>::Purge  (line 213, @0x0000000002573d70, libserver.so)  // inlines: Base, RemoveAll
// callers: CGridNav::CanFindPath, CGridNav::FindPathLength, TimePathBuilding
void __fastcall CUtlLeanVectorFixedGrowableBase<unsigned char,(unsigned short)200,short>::Purge(
        CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int> *const this)
{
  CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<unsigned char,200u,short int>::ElemType_t *); // rdx

  this->m_nCount = 0;
  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated > 0xCC )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->m_pElements);
    else
      v3(g_pMemAlloc, 0);
    this->m_nAllocated = 204;
  }
  else
  {
    this->m_nAllocated = 204;
  }
}


// CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t, 8u, short int>::Purge  (line 213, @0x0000000002eaa650, libserver.so)  // inlines: Base, RemoveAll
// callers: CEconItemDefinition::GetAssetModifiersActiveForStyle, CEconItemView::CacheAssetModifiers
void __fastcall CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,(unsigned short)8,short>::Purge(
        CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int> *const this)
{
  CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<CAssetModifierCriteria::CriteriaVal_t,8u,short int>::ElemType_t *); // rdx

  this->m_nCount = 0;
  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated > 8 )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->m_pElements);
    else
      v3(g_pMemAlloc, 0);
    this->m_nAllocated = 8;
  }
  else
  {
    this->m_nAllocated = 8;
  }
}


// CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>::Purge  (line 213, @0x00000000030f7b50, libserver.so)  // inlines: Base, RemoveAll
// callers: Criteria::Criteria, Rule::Rule
void __fastcall CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>::Purge(
        CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int> *const this)
{
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t m_nAllocated; // ax
  void (__fastcall *v3)(_QWORD *, CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *); // rdx

  this->m_nCount = 0;
  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated > 6 )
  {
    v3 = *(*g_pMemAlloc + 16LL);
    if ( m_nAllocated != 0 )
      v3(g_pMemAlloc, this->m_pElements);
    else
      v3(g_pMemAlloc, 0);
    this->m_nAllocated = 6;
  }
  else
  {
    this->m_nAllocated = 6;
  }
}


// CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>::EnsureCapacity  (line 309, @0x000000000199aaf8, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CEntityKeyValues::Unserialize
// strings: "../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow"
void __fastcall CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>::EnsureCapacity(
        CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int> *const this,
        int nCapacity,
        bool bConservative)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  LeafCodeInfo_t v7; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v7.m_szFile = "../public/tier1/utlleanvector.h";
    v7.m_szFunction = "EnsureCapacity";
    v7.m_nLine = 327;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v7, "%s allocation count overflow", "EnsureCapacity");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v5, v6, v3, v4) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AB6F);
}


// CUtlLeanVectorBase<ParserResponse, short int>::Purge  (line 397, @0x00000000020956f0, libserver.so)  // inlines: Base, Destruct<ParserResponse>, RemoveAll
// calls: ParserResponse::~ParserResponse
// callers: CResponseSystemSaveRestoreOps::Restore, CDefaultResponseSystemSaveRestoreBlockHandler::Restore, ResponseGroup::ResponseGroup, CResponseSystem::ResolveResponse, CUtlRBTree<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int, CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<char const*, ResponseGroup, short int, bool (*)(char const* const&, char const* const&)>::Node_t, short int>, short int> >::NewNode, CResponseSystem::CopyResponsesFrom, CResponseFileParser::ParseRule_Response, CResponseFileParser::ParseResponse
void __fastcall CUtlLeanVectorBase<ParserResponse,short>::Purge(
        CUtlLeanVectorBase<ParserResponse,short int> *const this)
{
  CUtlLeanVectorBase<ParserResponse,short int>::IndexType_t m_nAllocated; // ax
  CUtlLeanVectorBase<ParserResponse,short int>::ElemType_t *m_pElements; // r13
  int v4; // ebx
  __int64 v5; // rax

  m_nAllocated = this->m_nAllocated;
  if ( m_nAllocated != 0 )
    m_pElements = this->m_pElements;
  else
    m_pElements = 0;
  if ( this->m_nCount > 0 )
  {
    v4 = 0;
    do
    {
      v5 = v4++;
      ParserResponse::~ParserResponse(&m_pElements[v5]);
    }
    while ( this->m_nCount > v4 );
    m_nAllocated = this->m_nAllocated;
  }
  this->m_nCount = 0;
  if ( m_nAllocated > 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pElements);
    this->m_pElements = 0;
  }
  this->m_nAllocated = 0;
}


// CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr  (line 552, @0x000000000199aa80, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CEntityKeyValues::UnserializeKeys, CEntityKeyValues::AddKeyValue<char [260]>
// strings: "../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>,unsigned int,short int> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  LeafCodeInfo_t v5; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v5.m_szFile = "../public/tier1/utlleanvector.h";
    v5.m_szFunction = "AddToTailGetPtr";
    v5.m_nLine = 557;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v5, "%s allocation count overflow", "AddToTailGetPtr");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AAF7);
}


// CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr  (line 552, @0x000000000199ab70, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// strings: "../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>,CEntityKeyValues::KeyValueInfo_t,short int> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  LeafCodeInfo_t v5; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v5.m_szFile = "../public/tier1/utlleanvector.h";
    v5.m_szFunction = "AddToTailGetPtr";
    v5.m_nLine = 557;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v5, "%s allocation count overflow", "AddToTailGetPtr");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199ABE7);
}


// CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse, short int>, ParserResponse, short int>::AddToTailGetPtr  (line 552, @0x000000000199acb0, libserver.so)  // inlines: LeafCodeInfo_t
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CResponseFileParser::ParseOneResponse
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
void __fastcall CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse,short>,ParserResponse,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorBase<ParserResponse,short int>,ParserResponse,short int> *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rsi
  LeafCodeInfo_t v5; // [rsp+0h] [rbp-30h] BYREF

  if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
  {
    v5.m_szFile = "../../public/tier1/utlleanvector.h";
    v5.m_szFunction = "AddToTailGetPtr";
    v5.m_nLine = 557;
    LoggingSystem_Log(LOG_GENERAL, LoggingSeverity_t::LS_ERROR, &v5, "%s allocation count overflow", "AddToTailGetPtr");
  }
  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v3, v4, v1, v2) != 0 )
    loc_0 = -559038737;
  Plat_ExitProcess(1);
  JUMPOUT(0x199AD27);
}


// CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr  (line 552, @0x0000000001ea4a70, libserver.so)  // inlines: Base, EnsureCapacity, LeafCodeInfo_t, memcpy
// calls: memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, SetupEntityKeyValuesFromTable, CBreakableProp::SetEnableMotionPosition, CGameEntitySystem::UniqueifyEntityNames, CBaseEntity::Create, CC_Ent_Create, CCommentarySystem::ReplaceQuotesInEntityKeyValues, CEntityDissolve::Create, CEntityKeyValues::SetValue<CEntityHandle> (87 total)
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
unsigned int *__fastcall CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>,unsigned int,short int> *const this)
{
  __int64 m_nCount; // r13
  unsigned __int64 m_nAllocated; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v4; // ax
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rdx
  int v10; // esi
  void *v11; // rcx
  unsigned __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-40h] BYREF

  m_nCount = this->m_nCount;
  if ( m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_29;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_29:
      v18.m_szFile = "../../public/tier1/utlleanvector.h";
      v18.m_szFunction = "AddToTailGetPtr";
      v18.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v18,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
  }
  m_nAllocated = this->m_nAllocated;
  v4 = this->m_nCount;
  v5 = m_nCount + 1;
  if ( v5 > m_nAllocated )
  {
    LOWORD(v6) = m_nCount + 1;
    if ( v5 > 9 )
    {
      v6 = this->m_nAllocated;
      while ( 1 )
      {
        v7 = v6;
        if ( v5 <= v6 )
          break;
        if ( v6 <= 16382 )
        {
          v10 = 2 * v6;
          v6 = 8;
          if ( 2 * v7 > 7 )
            v6 = v10;
        }
        else
        {
          v6 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 9 )
    {
      this->m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_pElements, 4LL * v6);
      v4 = this->m_nCount;
    }
    else
    {
      v4 = this->m_nCount;
      if ( v6 > 9 )
      {
        v11 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v6);
        v12 = this->m_nAllocated;
        if ( v12 != 0 )
        {
          m_pElements = (&this->m_nAllocAllocated + 1);
          if ( v12 > 9 )
            m_pElements = this->m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        this->m_pElements = memcpy(v11, m_pElements, 4LL * this->m_nCount);
        v4 = this->m_nCount;
      }
    }
    this->m_nAllocated = v6;
    m_nAllocated = v6;
  }
  if ( m_nAllocated != 0 )
  {
    v8 = (&this->m_nAllocAllocated + 1);
    if ( m_nAllocated > 9 )
      v8 = this->m_pElements;
  }
  else
  {
    v8 = 0;
  }
  this->m_nCount = v4 + 1;
  return &v8[m_nCount];
}


// CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr  (line 552, @0x0000000001ea4c40, libserver.so)  // inlines: Allocate, Allocate<QAngle>, Allocate<Quaternion>, Allocate<Vector2D>, AssignTo<CEntityVariantAllocator>, Base, CVariantBase, Construct<CEntityKeyValues::KeyValueInfo_t>, CopyData, CopyData<QAngle>, CopyData<Quaternion>, CopyData<Vector2D>, CopyData<Vector4D>, Destruct<CEntityKeyValues::KeyValueInfo_t>, EnsureCapacity, Free, KeyValueInfo_t, LeafCodeInfo_t, V_strlen, memcpy, operator=, ~CVariantBase, ~KeyValueInfo_t
// calls: CEntityVariantAllocator::Allocate, strlen, memcpy, LoggingSystem_IsChannelEnabled, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess
// callers: CEntityKeyValues::SetValue, CDevtestHierarchy2::Spawn, CreateTriggerInternal, Script_CreateTriggerRadiusApproximate, CScriptEntityIterator::CreateByClassname, CEntityKeyValues::AddKeyValue<CVariantBase<CEntityVariantAllocator> >, SetupEntityKeyValuesFromTable, CBreakableProp::SetEnableMotionPosition, UTIL_PrecacheOther, DispatchSpawn, ConvertOldKeyValuesToNew, CGameEntitySystem::UniqueifyEntityNames (100 total)
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
// globals: jpt_1EA4D43
// write access to const memory has been detected, the output may be wrong!
CEntityKeyValues::KeyValueInfo_t *__fastcall CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>,CEntityKeyValues::KeyValueInfo_t,short int> *const this)
{
  __int16 m_nAllocated; // r14
  int v3; // edx
  int v4; // eax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t m_nCount; // ax
  __int16 v6; // r12
  __int64 v7; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rbx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rcx
  int16 m_type; // dx
  uint16 v11; // ax
  _DWORD *v12; // rdx
  _DWORD *v13; // rax
  uint16 v14; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t v15; // ax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rax
  CEntityKeyValues::KeyValueInfo_t *result; // rax
  uint16 v18; // ax
  const char *v19; // rsi
  void *v20; // rax
  uint16 v21; // ax
  _DWORD *v22; // rdx
  _DWORD *v23; // rax
  uint16 v24; // ax
  _DWORD *v25; // rdx
  _DWORD *v26; // rax
  uint16 v27; // ax
  _DWORD *v28; // rdx
  uint16 m_flags; // ax
  _DWORD *m_uint64; // rdx
  bool v31; // cc
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v36; // [rsp+0h] [rbp-80h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *src; // [rsp+8h] [rbp-78h]
  const char *srcb; // [rsp+8h] [rbp-78h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *srca; // [rsp+8h] [rbp-78h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *srcc; // [rsp+8h] [rbp-78h]
  _DWORD *v41; // [rsp+10h] [rbp-70h]
  signed int v42; // [rsp+10h] [rbp-70h]
  _DWORD *v43; // [rsp+10h] [rbp-70h]
  _DWORD *v44; // [rsp+10h] [rbp-70h]
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>,CEntityKeyValues::KeyValueInfo_t,short int>::IndexType_t nIdx; // [rsp+1Eh] [rbp-62h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // [rsp+20h] [rbp-60h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // [rsp+28h] [rbp-58h]
  LeafCodeInfo_t v48; // [rsp+30h] [rbp-50h] BYREF

  nIdx = this->m_nCount;
  if ( this->m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
    {
      v48.m_szFile = "../../public/tier1/utlleanvector.h";
      v48.m_szFunction = "AddToTailGetPtr";
      v48.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v48,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
    if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
      loc_0 = -559038737;
    Plat_ExitProcess(1);
    JUMPOUT(0x1EA50CE);
  }
  m_nAllocated = this->m_nAllocated;
  v3 = nIdx + 1;
  v4 = m_nAllocated;
  if ( v3 > m_nAllocated )
  {
    while ( v3 > v4 )
    {
      if ( m_nAllocated <= 16382 )
      {
        m_nAllocated *= 2;
        v31 = 2 * v4 <= 1;
        v4 = m_nAllocated;
        if ( v31 )
        {
          m_nAllocated = 2;
          v4 = 2;
        }
      }
      else
      {
        m_nAllocated = 0x7FFF;
        v4 = 0x7FFF;
      }
    }
    v47 = (**g_pMemAlloc)(g_pMemAlloc, 24LL * m_nAllocated);
    if ( this->m_nAllocated != 0 )
      m_pElements = this->m_pElements;
    else
      m_pElements = 0;
    m_nCount = this->m_nCount;
    if ( m_nAllocated <= this->m_nCount )
      m_nCount = m_nAllocated;
    v6 = 0;
    if ( m_nCount > 0 )
    {
      do
      {
        v7 = v6;
        v8 = &v47[v7];
        if ( &v47[v7] != 0 )
        {
          v9 = &m_pElements[v7];
          v8->m_value.m_uint64 = 0;
          v8->m_value.m_flags = 0;
        }
        else
        {
          v9 = &m_pElements[v7];
        }
        v8->m_value.m_uint64 = 0;
        v8->m_value.m_type = 0;
        m_type = v9->m_value.m_type;
        switch ( m_type )
        {
          case 3:
            m_flags = v8->m_value.m_flags;
            m_uint64 = v9->m_value.m_uint64;
            if ( (m_flags & 1) != 0 )
              v8->m_value.m_flags = m_flags & 0xFFFE;
            src = v9;
            v41 = m_uint64;
            v8->m_value.m_type = 3;
            goto LABEL_18;
          case 4:
            v27 = v8->m_value.m_flags;
            v28 = v9->m_value.m_uint64;
            if ( (v27 & 1) != 0 )
              v8->m_value.m_flags = v27 & 0xFFFE;
            srca = v9;
            v43 = v28;
            v8->m_value.m_type = 4;
            goto LABEL_37;
          case 25:
            v24 = v8->m_value.m_flags;
            v25 = v9->m_value.m_uint64;
            if ( (v24 & 1) != 0 )
              v8->m_value.m_flags = v24 & 0xFFFE;
            srcc = v9;
            v8->m_value.m_type = 25;
            v44 = v25;
            v26 = CEntityVariantAllocator::Allocate(8u);
            v8->m_value.m_uint64 = v26;
            v9 = srcc;
            *v26 = *v44;
            v26[1] = v44[1];
            v8->m_value.m_flags |= 1u;
            break;
          case 27:
            v21 = v8->m_value.m_flags;
            v22 = v9->m_value.m_uint64;
            if ( (v21 & 1) != 0 )
              v8->m_value.m_flags = v21 & 0xFFFE;
            srca = v9;
            v43 = v22;
            v8->m_value.m_type = 27;
LABEL_37:
            v23 = CEntityVariantAllocator::Allocate(0x10u);
            v8->m_value.m_uint64 = v23;
            *v23 = *v43;
            v23[1] = v43[1];
            v23[2] = v43[2];
            v23[3] = v43[3];
            v8->m_value.m_flags |= 1u;
            v9 = srca;
            break;
          case 30:
            v18 = v8->m_value.m_flags;
            v19 = v9->m_value.m_uint64;
            if ( (v18 & 1) != 0 )
              v8->m_value.m_flags = v18 & 0xFFFE;
            v8->m_value.m_type = 30;
            if ( v19 != 0 )
            {
              v36 = v9;
              srcb = v19;
              v42 = strlen(v19) + 1;
              v20 = CEntityVariantAllocator::Allocate(v42);
              v8->m_value.m_uint64 = v20;
              memcpy(v20, srcb, v42);
              v9 = v36;
              v8->m_value.m_flags |= 1u;
            }
            break;
          case 39:
            v11 = v8->m_value.m_flags;
            v12 = v9->m_value.m_uint64;
            if ( (v11 & 1) != 0 )
              v8->m_value.m_flags = v11 & 0xFFFE;
            src = v9;
            v41 = v12;
            v8->m_value.m_type = 39;
LABEL_18:
            v13 = CEntityVariantAllocator::Allocate(0xCu);
            v8->m_value.m_uint64 = v13;
            *v13 = *v41;
            v13[1] = v41[1];
            v13[2] = v41[2];
            v8->m_value.m_flags |= 1u;
            v9 = src;
            break;
          default:
            v8->m_value.m_type = m_type;
            v8->m_value.m_uint64 = v9->m_value.m_uint64;
            break;
        }
        v8->m_pAttributeName = v9->m_pAttributeName;
        v14 = v9->m_value.m_flags;
        if ( (v14 & 1) != 0 )
          v9->m_value.m_flags = v14 & 0xFFFE;
        v9->m_value.m_uint64 = 0;
        ++v6;
        v9->m_value.m_type = 0;
        v15 = this->m_nCount;
        if ( m_nAllocated <= this->m_nCount )
          v15 = m_nAllocated;
      }
      while ( v15 > v6 );
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this->m_pElements);
    this->m_nAllocated = m_nAllocated;
    this->m_pElements = v47;
  }
  if ( m_nAllocated != 0 )
    v16 = this->m_pElements;
  else
    v16 = 0;
  result = &v16[nIdx];
  if ( result != 0 )
  {
    result->m_value.m_uint64 = 0;
    result->m_value.m_type = 0;
    result->m_value.m_flags = 0;
  }
  ++this->m_nCount;
  return result;
}


// CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int, 6u, short int>, short unsigned int, short int>::AddToTailGetPtr  (line 552, @0x0000000003108910, libserver.so)  // inlines: Base, EnsureCapacity, LeafCodeInfo_t, memcpy
// calls: memcpy, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...)
// callers: CResponseFileParser::ParseRule_Response, CResponseFileParser::ParseRule_Criteria, CResponseFileParser::ParseOneCriterion, CResponseFileParser::ParseRule
// strings: "../../public/tier1/utlleanvector.h", "AddToTailGetPtr", "%s allocation count overflow"
unsigned __int16 *__fastcall CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned short,(unsigned short)6,short>,unsigned short,short>::AddToTailGetPtr(
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>,short unsigned int,short int> *const this)
{
  __int64 m_nCount; // r13
  unsigned __int64 m_nAllocated; // rcx
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::IndexType_t v4; // ax
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *v8; // rdx
  int v10; // esi
  void *v11; // rcx
  unsigned __int64 v12; // rax
  CUtlLeanVectorFixedGrowableBase<short unsigned int,6u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  LeafCodeInfo_t v18; // [rsp+0h] [rbp-40h] BYREF

  m_nCount = this->m_nCount;
  if ( m_nCount == 0x7FFF )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_29;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v16, v17, v14, v15) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_29:
      v18.m_szFile = "../../public/tier1/utlleanvector.h";
      v18.m_szFunction = "AddToTailGetPtr";
      v18.m_nLine = 557;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        &v18,
        "%s allocation count overflow",
        "AddToTailGetPtr");
    }
  }
  m_nAllocated = this->m_nAllocated;
  v4 = this->m_nCount;
  v5 = m_nCount + 1;
  if ( v5 > m_nAllocated )
  {
    LOWORD(v6) = m_nCount + 1;
    if ( v5 > 6 )
    {
      v6 = this->m_nAllocated;
      while ( 1 )
      {
        v7 = v6;
        if ( v5 <= v6 )
          break;
        if ( v6 <= 16382 )
        {
          v10 = 2 * v6;
          v6 = 16;
          if ( 2 * v7 > 15 )
            v6 = v10;
        }
        else
        {
          v6 = 0x7FFF;
        }
      }
    }
    if ( m_nAllocated > 6 )
    {
      this->m_pElements = (*(*g_pMemAlloc + 8LL))(g_pMemAlloc, this->m_pElements, 2LL * v6);
      v4 = this->m_nCount;
    }
    else
    {
      v4 = this->m_nCount;
      if ( v6 > 6 )
      {
        v11 = (**g_pMemAlloc)(g_pMemAlloc, 2LL * v6);
        v12 = this->m_nAllocated;
        if ( v12 != 0 )
        {
          m_pElements = (&this->m_nAllocAllocated + 1);
          if ( v12 > 6 )
            m_pElements = this->m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        this->m_pElements = memcpy(v11, m_pElements, 2LL * this->m_nCount);
        v4 = this->m_nCount;
      }
    }
    this->m_nAllocated = v6;
    m_nAllocated = v6;
  }
  if ( m_nAllocated != 0 )
  {
    v8 = (&this->m_nAllocAllocated + 1);
    if ( m_nAllocated > 6 )
      v8 = this->m_pElements;
  }
  else
  {
    v8 = 0;
  }
  this->m_nCount = v4 + 1;
  return &v8[m_nCount];
}


