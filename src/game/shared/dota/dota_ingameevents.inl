
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CIngameEvent_FM2015::~CIngameEvent_FM2015  (line 55, @0x00000000025d8680, libserver.so)  // inlines: Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CIngameEvent_Base, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlSlot::~CUtlSlot, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_FM2015::~CIngameEvent_FM2015(CIngameEvent_FM2015 *const this)
{
  bool v2; // zf
  CUtlVectorBase<IClientMessageDelegateHook*,CUtlMemory<IClientMessageDelegateHook*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4107DD0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ClientMessageContainer.m_Memory;
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(p_m_Memory);
  }
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v2 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_FM2015::~CIngameEvent_FM2015  (line 55, @0x00000000025d87b0, libserver.so)  // inlines: Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CIngameEvent_Base, ~CIngameEvent_FM2015, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlSlot::~CUtlSlot, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, operator delete, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_FM2015::~CIngameEvent_FM2015(CIngameEvent_FM2015 *const this)
{
  bool v2; // zf
  CUtlVectorBase<IClientMessageDelegateHook*,CUtlMemory<IClientMessageDelegateHook*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4107DD0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_ClientMessageContainer.m_Memory;
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(p_m_Memory);
  }
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v2 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_FM2015::Schema_DynamicBinding  (line 57, @0x00000000025c4a60, libserver.so)
// globals: CIngameEvent_FM2015::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_FM2015::Schema_DynamicBinding(
        const CIngameEvent_FM2015 *const this)
{
  return CIngameEvent_FM2015::s_pSchemaBinding;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 57, @0x00000000025c4a70, libserver.so)
// globals: CIngameEvent_FM2015::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_FM2015::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::DestructInstance  (line 57, @0x00000000025c4a80, libserver.so)  // inlines: Destruct<CIngameEvent_FM2015>
void __fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::FreeInstance  (line 57, @0x00000000025c4aa0, libserver.so)
void __fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::CanAllocate  (line 57, @0x00000000025c4ac0, libserver.so)
bool __fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 57, @0x00000000025c4ad0, libserver.so)
// globals: CIngameEvent_FM2015::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_FM2015::s_pSchemaBinding;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::AllocateInstance  (line 57, @0x00000000025c7030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4808);
  memset(v1, 0, 0x12C8u);
  return v1;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x00000000025cb380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 57, @0x00000000025cb3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_FM2015::GetEntityClassInternal  (line 57, @0x00000000025ce8b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CIngameEvent_Base::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_ingameevent_fm2015", "CIngameEvent_FM2015"
// globals: `guard variable for'CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class, CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class, __dso_handle, CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo, CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo
CEntityClass *__cdecl CIngameEvent_FM2015::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class);
    CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class._vptr_CEntityClass = off_4100AB0;
    __cxa_guard_release(&`guard variable for'CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class);
    __cxa_atexit(
      CIngameEvent_FM2015::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_FM2015Class != 0 )
    return &CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class;
  if ( `guard variable for'CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo) != 0 )
  {
    EntityClassInfo = CIngameEvent_Base::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo,
      "CIngameEvent_FM2015",
      "dota_ingameevent_fm2015",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo);
  }
  CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class.m_pClassInfo = &CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo;
  CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class.m_pBaseClassInfo = CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_FM2015Class = &CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class;
  CIngameEvent_FM2015::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2015ClassInfo.m_pClass = &CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class;
  CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_FM2015Class->m_pComponentOverrides = 0;
  return &CIngameEvent_FM2015::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2015Class;
}


// CIngameEvent_FM2015::CEntityInstanceEntityClass::ConstructInstance  (line 57, @0x00000000025d8ac0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CEntityOwnerPtr, CFieldPath, CIngameEvent_Base, CIngameEvent_FM2015, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryFixed, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, CUtlVectorMT, Clear, ClosurePtr, Construct<CIngameEvent_FM2015>, EnsureValidValue<float>, FastDelegate2, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CIngameEvent_FM2015::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_FM2015::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v5; // rdi
  unsigned int *v6; // r12
  CEntityInstance *v7; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v9; // rdx
  size_t v10; // rdx
  void **v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  char *v14; // rsi
  int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 m_nCount; // rax
  __int64 v21; // rax
  CEntityInstance *v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v36; // [rsp+10h] [rbp-110h]
  void (__fastcall *v37)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, char *); // [rsp+20h] [rbp-100h]
  void **dest; // [rsp+28h] [rbp-F8h]
  CFieldPath path; // [rsp+30h] [rbp-F0h] BYREF
  LeafCodeInfo_t v40; // [rsp+50h] [rbp-D0h] BYREF
  LeafCodeInfo_t v41; // [rsp+70h] [rbp-B0h] BYREF
  LeafCodeInfo_t v42; // [rsp+90h] [rbp-90h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v44; // [rsp+C0h] [rbp-60h]
  char v45; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v46; // [rsp+D0h] [rbp-50h] BYREF

  if ( p != 0 )
  {
    v3 = (p + 1512);
    CBaseEntity::CBaseEntity(p);
    *p = &off_410A870;
    v36 = (p + 1504);
    *(p + 376) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 3458) = 0;
    *(p + 3472) = 0;
    *(p + 433) = 0;
    *(p + 3473) = 0;
    *(p + 429) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 1728) = 0;
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &v36->m_Vector,
      24);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v36);
    if ( *(p + 3472) == 0 && *(p + 376) > 0 )
    {
      LODWORD(v6) = 0;
      dest = (p + 3440);
      while ( 1 )
      {
        if ( *(p + 3473) == 0 )
        {
          v7 = *(p + 429);
          *(p + 3473) = 1;
          if ( v7 != 0 )
          {
            v37 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v7);
            v37(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v7, v36, p + 3472);
            if ( dest != src )
            {
              v9 = v44;
              *(p + 3458) = 0;
              if ( v9 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_55;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_55:
                  v46.m_szFile = "../../public/tier2/fieldpath.h";
                  v46.m_nLine = 442;
                  v46.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v46,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1728) = v9;
              if ( v9 > 0 )
              {
                v10 = 2 * v9;
                v11 = src;
                if ( v45 != 0 )
                  v11 = src[0];
                memcpy(dest, v11, v10);
              }
            }
          }
          else
          {
            if ( *(p + 3458) != 0 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v5);
            v5 = 0;
            *(p + 1728) = 0;
          }
        }
        if ( *(p + 3472) == 0 )
          break;
LABEL_31:
        LODWORD(v6) = v6 + 1;
        v3 += 40;
        if ( v6 >= *(p + 376) )
          goto LABEL_32;
      }
      v12 = *(p + 1728);
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v12 > 6 )
        goto LABEL_46;
      path.m_nCount = v12;
      if ( v12 > 0 )
      {
        v13 = 2 * v12;
        if ( *(p + 3458) != 0 )
          v14 = *(p + 430);
        else
          v14 = p + 3440;
        __memcpy_chk(&path, v14, v13, 24);
        v15 = v6;
        if ( !path.m_bUsingExternalPaths )
          goto LABEL_26;
        v6 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v40.m_szFile = "../../public/tier2/fieldpath.h";
          v40.m_szFunction = "Path_AddToTail";
          v40.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v40,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v15 = v6;
LABEL_26:
      m_nCount = path.m_nCount;
      if ( path.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v41.m_szFile = "../../public/tier2/fieldpath.h";
          v41.m_szFunction = "Path_AddToTail";
          v41.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v41,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v26, v27, v24, v25) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_46:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_50;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v30, v31, v28, v29) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_50:
          v42.m_szFile = "../../public/tier2/fieldpath.h";
          v42.m_szFunction = "Path_SetCount";
          v42.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v42,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      v5 = *(p + 429);
      ++path.m_nCount;
      path.u.m_FixedPaths[m_nCount].m_nValue = v15;
      if ( v5 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v5, &path).m_Value;
      else
        v3[8].m_Value = -1;
      v21 = *(p + 429);
      if ( v21 != *&v3[4].m_Value )
        *&v3[4].m_Value = v21;
      goto LABEL_31;
    }
LABEL_32:
    *(p + 870) = 0;
    *(p + 436) = 0;
    v22 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 874) = 0;
    *(p + 875) = 0;
    *(p + 1764) = 0;
    *(p + 3530) = 0;
    *(p + 438) = v22;
    *p = &off_4107DD0;
    *(p + 442) = 0;
    *(p + 3544) = 0;
    *(p + 3545) = 0;
    *(p + 554) = 0;
    *(p + 555) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 0;
    *(p + 2228) = -1;
    *(p + 2229) = 0;
    *(p + 2230) = -1;
    *(p + 2231) = -1;
    *(p + 558) = 0;
    *(p + 1120) = 0;
    *(p + 561) = 0;
    *(p + 1124) = 0;
    *(p + 1125) = 0;
    *(p + 563) = 0;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 559) = off_4100B30;
    *(p + 567) = 0;
    *(p + 568) = 0;
    *(p + 569) = 0;
    *(p + 4560) = 0;
    *(p + 4561) = 1;
    *(p + 1142) = 0;
    *(p + 572) = 0;
    *(p + 1146) = 0;
    *(p + 1147) = 0;
    *(p + 4592) = 1;
    *(p + 1198) = 0;
    *(p + 1199) = 0;
    *(p + 1200) = 0;
  }
  return p;
}


// CIngameEvent_FM2015::IsActive  (line 62, @0x00000000025c4ae0, libserver.so)
bool __fastcall CIngameEvent_FM2015::IsActive(CIngameEvent_FM2015 *const this)
{
  return 1;
}


// CIngameEvent_FM2015::IsComplete  (line 63, @0x00000000025c4af0, libserver.so)
bool __fastcall CIngameEvent_FM2015::IsComplete(CIngameEvent_FM2015 *const this)
{
  return 0;
}


// CIngameEvent_FM2015::GetEventID  (line 64, @0x00000000025c4b00, libserver.so)
EEvent __fastcall CIngameEvent_FM2015::GetEventID(CIngameEvent_FM2015 *const this)
{
  return EEvent::EVENT_ID_FALL_MAJOR_2015;
}


// CIngameEvent_FM2015::GetEventPointID  (line 65, @0x00000000025c4b10, libserver.so)
EEvent __fastcall CIngameEvent_FM2015::GetEventPointID(CIngameEvent_FM2015 *const this)
{
  return EEvent::EVENT_ID_FALL_MAJOR_2015;
}


// CIngameEvent_FM2015::ChallengesEnabled  (line 66, @0x00000000025c4b20, libserver.so)
bool __fastcall CIngameEvent_FM2015::ChallengesEnabled(CIngameEvent_FM2015 *const this)
{
  return 1;
}


// CIngameEvent_WM2016::~CIngameEvent_WM2016  (line 125, @0x00000000025d88e0, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_WM2016::~CIngameEvent_WM2016(CIngameEvent_WM2016 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_WM2016::~CIngameEvent_WM2016  (line 125, @0x00000000025db760, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_WM2016::~CIngameEvent_WM2016(CIngameEvent_WM2016 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_WM2016::Schema_DynamicBinding  (line 127, @0x00000000025c4b30, libserver.so)
// globals: CIngameEvent_WM2016::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_WM2016::Schema_DynamicBinding(
        const CIngameEvent_WM2016 *const this)
{
  return CIngameEvent_WM2016::s_pSchemaBinding;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 127, @0x00000000025c4b40, libserver.so)
// globals: CIngameEvent_WM2016::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_WM2016::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::DestructInstance  (line 127, @0x00000000025c4b50, libserver.so)  // inlines: Destruct<CIngameEvent_WM2016>
void __fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::FreeInstance  (line 127, @0x00000000025c4b70, libserver.so)
void __fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::CanAllocate  (line 127, @0x00000000025c4b90, libserver.so)
bool __fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 127, @0x00000000025c4ba0, libserver.so)
// globals: CIngameEvent_WM2016::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_WM2016::s_pSchemaBinding;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::AllocateInstance  (line 127, @0x00000000025c7070, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4912);
  memset(v1, 0, 0x1330u);
  return v1;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x00000000025cb3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 127, @0x00000000025cb3f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_WM2016::GetEntityClassInfo  (line 127, @0x00000000025cea00, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CIngameEvent_TI6::GetEntityClassInternal, CIngameEvent_FM2016::GetEntityClassInternal, CIngameEvent_WM2017::GetEntityClassInternal
// strings: "dota_ingameevent_wm2016", "CIngameEvent_WM2016", "CIngameEvent_Base"
// globals: `guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo, CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo, `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo, CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo
CEntityClassInfo *__cdecl CIngameEvent_WM2016::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo != 0 )
    return &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo) == 0 )
    return &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo;
  if ( `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo,
      "CIngameEvent_Base",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo,
    "CIngameEvent_WM2016",
    "dota_ingameevent_wm2016",
    0,
    &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
  __cxa_guard_release(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo);
  return &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo;
}


// CIngameEvent_WM2016::GetEntityClassInternal  (line 127, @0x00000000025ceac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_ingameevent_wm2016", "CIngameEvent_WM2016", "CIngameEvent_Base"
// globals: `guard variable for'CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class, CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class, __dso_handle, CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo, CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo, `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo, CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo
CEntityClass *__cdecl CIngameEvent_WM2016::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class);
    CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class._vptr_CEntityClass = off_4100B50;
    __cxa_guard_release(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class);
    __cxa_atexit(
      CIngameEvent_WM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_WM2016Class != 0 )
    return &CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class;
  if ( `guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo) != 0 )
  {
    if ( `guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo,
        "CIngameEvent_Base",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo,
      "CIngameEvent_WM2016",
      "dota_ingameevent_wm2016",
      0,
      &CIngameEvent_Base::GetEntityClassInfo(void)::g_EntityCIngameEvent_BaseClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo);
  }
  CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class.m_pClassInfo = &CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo;
  CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class.m_pBaseClassInfo = CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_WM2016Class = &CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class;
  CIngameEvent_WM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2016ClassInfo.m_pClass = &CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class;
  CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_WM2016Class->m_pComponentOverrides = 0;
  return &CIngameEvent_WM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2016Class;
}


// CIngameEvent_WM2016::CEntityInstanceEntityClass::ConstructInstance  (line 127, @0x00000000025d91d0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CEntityOwnerPtr, CFieldPath, CIngameEvent_Base, CIngameEvent_WM2016, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryFixed, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, CUtlVectorMT, Clear, ClosurePtr, Construct<CIngameEvent_WM2016>, EnsureValidValue<float>, FastDelegate2, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CIngameEvent_WM2016::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_WM2016::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CEntityInstance *v5; // rax
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v6; // rdi
  unsigned int *v7; // r12
  CEntityInstance *v8; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v10; // rdx
  size_t v11; // rdx
  void **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 m_nCount; // rax
  __int64 v22; // rax
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v38; // [rsp+10h] [rbp-110h]
  void (__fastcall *v39)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, char *); // [rsp+20h] [rbp-100h]
  void **dest; // [rsp+28h] [rbp-F8h]
  CFieldPath path; // [rsp+30h] [rbp-F0h] BYREF
  LeafCodeInfo_t v42; // [rsp+50h] [rbp-D0h] BYREF
  LeafCodeInfo_t v43; // [rsp+70h] [rbp-B0h] BYREF
  LeafCodeInfo_t v44; // [rsp+90h] [rbp-90h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v46; // [rsp+C0h] [rbp-60h]
  char v47; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v48; // [rsp+D0h] [rbp-50h] BYREF

  if ( p != 0 )
  {
    v3 = (p + 1512);
    CBaseEntity::CBaseEntity(p);
    *p = &off_410A870;
    v38 = (p + 1504);
    *(p + 376) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 1728) = 0;
    *(p + 3458) = 0;
    *(p + 433) = 0;
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 3472) = 0;
    *(p + 3473) = 0;
    *(p + 429) = v5;
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &v38->m_Vector,
      24);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v38);
    if ( *(p + 3472) == 0 && *(p + 376) > 0 )
    {
      LODWORD(v7) = 0;
      dest = (p + 3440);
      while ( 1 )
      {
        if ( *(p + 3473) == 0 )
        {
          v8 = *(p + 429);
          *(p + 3473) = 1;
          if ( v8 != 0 )
          {
            v39 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v8);
            v39(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v8, v38, p + 3472);
            if ( dest != src )
            {
              v10 = v46;
              *(p + 3458) = 0;
              if ( v10 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_55;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v36, v37, v34, v35) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_55:
                  v48.m_szFile = "../../public/tier2/fieldpath.h";
                  v48.m_nLine = 442;
                  v48.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v48,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1728) = v10;
              if ( v10 > 0 )
              {
                v11 = 2 * v10;
                v12 = src;
                if ( v47 != 0 )
                  v12 = src[0];
                memcpy(dest, v12, v11);
              }
            }
          }
          else
          {
            if ( *(p + 3458) != 0 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v6);
            *(p + 1728) = 0;
          }
        }
        if ( *(p + 3472) == 0 )
          break;
LABEL_31:
        LODWORD(v7) = v7 + 1;
        v3 += 40;
        if ( v7 >= *(p + 376) )
          goto LABEL_32;
      }
      v13 = *(p + 1728);
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v13 > 6 )
        goto LABEL_46;
      path.m_nCount = v13;
      if ( v13 > 0 )
      {
        v14 = 2 * v13;
        if ( *(p + 3458) != 0 )
          v15 = *(p + 430);
        else
          v15 = p + 3440;
        __memcpy_chk(&path, v15, v14, 24);
        v16 = v7;
        if ( !path.m_bUsingExternalPaths )
          goto LABEL_26;
        v7 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v42.m_szFile = "../../public/tier2/fieldpath.h";
          v42.m_szFunction = "Path_AddToTail";
          v42.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v42,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v16 = v7;
LABEL_26:
      m_nCount = path.m_nCount;
      if ( path.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v43.m_szFile = "../../public/tier2/fieldpath.h";
          v43.m_szFunction = "Path_AddToTail";
          v43.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v43,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_46:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_50;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v32, v33, v30, v31) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_50:
          v44.m_szFile = "../../public/tier2/fieldpath.h";
          v44.m_szFunction = "Path_SetCount";
          v44.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      v6 = *(p + 429);
      ++path.m_nCount;
      path.u.m_FixedPaths[m_nCount].m_nValue = v16;
      if ( v6 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v6, &path).m_Value;
      else
        v3[8].m_Value = -1;
      v22 = *(p + 429);
      if ( v22 != *&v3[4].m_Value )
        *&v3[4].m_Value = v22;
      goto LABEL_31;
    }
LABEL_32:
    *(p + 3530) = 0;
    *(p + 870) = 0;
    *(p + 436) = 0;
    v23 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 874) = 0;
    *(p + 875) = 0;
    *(p + 442) = 0;
    *(p + 3544) = 0;
    *(p + 438) = v23;
    *(p + 1764) = 0;
    *(p + 2228) = -1;
    *p = &off_4108530;
    *(p + 559) = off_4100B30;
    *(p + 3545) = 0;
    *(p + 554) = 0;
    *(p + 555) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 0;
    *(p + 2229) = 0;
    *(p + 2230) = -1;
    *(p + 2231) = -1;
    *(p + 558) = 0;
    *(p + 1120) = 0;
    *(p + 561) = 0;
    *(p + 1124) = 0;
    *(p + 1125) = 0;
    *(p + 563) = 0;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 567) = 0;
    *(p + 568) = 0;
    *(p + 569) = 0;
    *(p + 571) = off_4100BD0;
    *(p + 4560) = 0;
    *(p + 4561) = 1;
    *(p + 1144) = 0;
    v24 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 573) = 0;
    *(p + 1148) = 0;
    *(p + 1149) = 0;
    *(p + 575) = 0;
    *(p + 1152) = 0;
    *(p + 577) = 0;
    *(p + 1156) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 4656) = 0;
    *(p + 4657) = 1;
    *(p + 1166) = 0;
    *(p + 584) = 0;
    *(p + 1170) = 0;
    *(p + 1171) = 0;
    *(p + 4688) = 1;
    *(p + 1174) = 0;
    *(p + 588) = 0;
    *(p + 1178) = 0;
    *(p + 1179) = 0;
    *(p + 590) = v24;
    *(p + 2372) = 0;
    *(p + 4746) = 0;
    *(p + 594) = 0;
    *(p + 4760) = 0;
    *(p + 4761) = 0;
    *(p + 1225) = 0;
    *(p + 1226) = 0;
  }
  return p;
}


// CIngameEvent_WM2016::IsActive  (line 135, @0x00000000025c4bb0, libserver.so)
bool __fastcall CIngameEvent_WM2016::IsActive(CIngameEvent_WM2016 *const this)
{
  return 1;
}


// CIngameEvent_WM2016::IsComplete  (line 136, @0x00000000025c4bc0, libserver.so)
bool __fastcall CIngameEvent_WM2016::IsComplete(CIngameEvent_WM2016 *const this)
{
  return 0;
}


// CIngameEvent_WM2016::GetEventID  (line 137, @0x00000000025c4bd0, libserver.so)
EEvent __fastcall CIngameEvent_WM2016::GetEventID(CIngameEvent_WM2016 *const this)
{
  return EEvent::EVENT_ID_WINTER_MAJOR_2016;
}


// CIngameEvent_WM2016::GetEventPointID  (line 138, @0x00000000025c4be0, libserver.so)
EEvent __fastcall CIngameEvent_WM2016::GetEventPointID(CIngameEvent_WM2016 *const this)
{
  return EEvent::EVENT_ID_WINTER_MAJOR_2016;
}


// CIngameEvent_WM2016::ChallengesEnabled  (line 139, @0x00000000025c4bf0, libserver.so)
bool __fastcall CIngameEvent_WM2016::ChallengesEnabled(CIngameEvent_WM2016 *const this)
{
  return 1;
}


// CIngameEvent_TI6::~CIngameEvent_TI6  (line 214, @0x00000000025db580, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_TI6::~CIngameEvent_TI6(CIngameEvent_TI6 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_TI6::~CIngameEvent_TI6  (line 214, @0x00000000025dbb20, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_TI6, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_TI6::~CIngameEvent_TI6(CIngameEvent_TI6 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_TI6::Schema_DynamicBinding  (line 216, @0x00000000025c4c00, libserver.so)
// globals: CIngameEvent_TI6::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_TI6::Schema_DynamicBinding(const CIngameEvent_TI6 *const this)
{
  return CIngameEvent_TI6::s_pSchemaBinding;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 216, @0x00000000025c4c10, libserver.so)
// globals: CIngameEvent_TI6::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_TI6::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::DestructInstance  (line 216, @0x00000000025c4c20, libserver.so)  // inlines: Destruct<CIngameEvent_TI6>
void __fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::FreeInstance  (line 216, @0x00000000025c4c40, libserver.so)
void __fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::CanAllocate  (line 216, @0x00000000025c4c60, libserver.so)
bool __fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 216, @0x00000000025c4c70, libserver.so)
// globals: CIngameEvent_TI6::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_TI6::s_pSchemaBinding;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::AllocateInstance  (line 216, @0x00000000025c70b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4912);
  memset(v1, 0, 0x1330u);
  return v1;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 216, @0x00000000025cb420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 216, @0x00000000025cb440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_TI6::GetEntityClassInternal  (line 216, @0x00000000025cec50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CIngameEvent_WM2016::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_ingameevent_ti6", "CIngameEvent_TI6"
// globals: `guard variable for'CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class, CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class, __dso_handle, CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo, CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo
CEntityClass *__cdecl CIngameEvent_TI6::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class);
    CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class._vptr_CEntityClass = off_4100BF0;
    __cxa_guard_release(&`guard variable for'CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class);
    __cxa_atexit(
      CIngameEvent_TI6::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_TI6Class != 0 )
    return &CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class;
  if ( `guard variable for'CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo) != 0 )
  {
    EntityClassInfo = CIngameEvent_WM2016::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo,
      "CIngameEvent_TI6",
      "dota_ingameevent_ti6",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo);
  }
  CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class.m_pClassInfo = &CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo;
  CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class.m_pBaseClassInfo = CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_TI6Class = &CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class;
  CIngameEvent_TI6::GetEntityClassInfo(void)::g_EntityCIngameEvent_TI6ClassInfo.m_pClass = &CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class;
  CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_TI6Class->m_pComponentOverrides = 0;
  return &CIngameEvent_TI6::GetEntityClassInternal(void)::g_EntityCIngameEvent_TI6Class;
}


// CIngameEvent_TI6::CEntityInstanceEntityClass::ConstructInstance  (line 216, @0x00000000025d99c0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CEntityOwnerPtr, CFieldPath, CIngameEvent_Base, CIngameEvent_TI6, CIngameEvent_WM2016, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryFixed, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, CUtlVectorMT, Clear, ClosurePtr, Construct<CIngameEvent_TI6>, EnsureValidValue<float>, FastDelegate2, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CIngameEvent_TI6::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_TI6::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CEntityInstance *v5; // rax
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v6; // rdi
  unsigned int *v7; // r12
  CEntityInstance *v8; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v10; // rdx
  size_t v11; // rdx
  void **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 m_nCount; // rax
  __int64 v22; // rax
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v38; // [rsp+10h] [rbp-110h]
  void (__fastcall *v39)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, char *); // [rsp+20h] [rbp-100h]
  void **dest; // [rsp+28h] [rbp-F8h]
  CFieldPath path; // [rsp+30h] [rbp-F0h] BYREF
  LeafCodeInfo_t v42; // [rsp+50h] [rbp-D0h] BYREF
  LeafCodeInfo_t v43; // [rsp+70h] [rbp-B0h] BYREF
  LeafCodeInfo_t v44; // [rsp+90h] [rbp-90h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v46; // [rsp+C0h] [rbp-60h]
  char v47; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v48; // [rsp+D0h] [rbp-50h] BYREF

  if ( p != 0 )
  {
    v3 = (p + 1512);
    CBaseEntity::CBaseEntity(p);
    *p = &off_410A870;
    v38 = (p + 1504);
    *(p + 376) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 3458) = 0;
    *(p + 1728) = 0;
    *(p + 433) = 0;
    *(p + 3472) = 0;
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 3473) = 0;
    *(p + 429) = v5;
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &v38->m_Vector,
      24);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v38);
    if ( *(p + 3472) == 0 && *(p + 376) > 0 )
    {
      LODWORD(v7) = 0;
      dest = (p + 3440);
      while ( 1 )
      {
        if ( *(p + 3473) == 0 )
        {
          v8 = *(p + 429);
          *(p + 3473) = 1;
          if ( v8 != 0 )
          {
            v39 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v8);
            v39(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v8, v38, p + 3472);
            if ( dest != src )
            {
              v10 = v46;
              *(p + 3458) = 0;
              if ( v10 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_55;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v36, v37, v34, v35) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_55:
                  v48.m_szFile = "../../public/tier2/fieldpath.h";
                  v48.m_nLine = 442;
                  v48.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v48,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1728) = v10;
              if ( v10 > 0 )
              {
                v11 = 2 * v10;
                v12 = src;
                if ( v47 != 0 )
                  v12 = src[0];
                memcpy(dest, v12, v11);
              }
            }
          }
          else
          {
            if ( *(p + 3458) != 0 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v6);
            *(p + 1728) = 0;
          }
        }
        if ( *(p + 3472) == 0 )
          break;
LABEL_31:
        LODWORD(v7) = v7 + 1;
        v3 += 40;
        if ( v7 >= *(p + 376) )
          goto LABEL_32;
      }
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      v13 = *(p + 1728);
      if ( v13 > 6 )
        goto LABEL_46;
      path.m_nCount = *(p + 1728);
      if ( v13 > 0 )
      {
        v14 = 2 * v13;
        if ( *(p + 3458) != 0 )
          v15 = *(p + 430);
        else
          v15 = p + 3440;
        __memcpy_chk(&path, v15, v14, 24);
        v16 = v7;
        if ( !path.m_bUsingExternalPaths )
          goto LABEL_26;
        v7 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v42.m_szFile = "../../public/tier2/fieldpath.h";
          v42.m_szFunction = "Path_AddToTail";
          v42.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v42,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v16 = v7;
LABEL_26:
      m_nCount = path.m_nCount;
      if ( path.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v43.m_szFile = "../../public/tier2/fieldpath.h";
          v43.m_szFunction = "Path_AddToTail";
          v43.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v43,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_46:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_50;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v32, v33, v30, v31) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_50:
          v44.m_szFile = "../../public/tier2/fieldpath.h";
          v44.m_szFunction = "Path_SetCount";
          v44.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      v6 = *(p + 429);
      ++path.m_nCount;
      path.u.m_FixedPaths[m_nCount].m_nValue = v16;
      if ( v6 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v6, &path).m_Value;
      else
        v3[8].m_Value = -1;
      v22 = *(p + 429);
      if ( v22 != *&v3[4].m_Value )
        *&v3[4].m_Value = v22;
      goto LABEL_31;
    }
LABEL_32:
    *(p + 870) = 0;
    *(p + 436) = 0;
    *(p + 874) = 0;
    *(p + 875) = 0;
    v23 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 1764) = 0;
    *(p + 3530) = 0;
    *(p + 442) = 0;
    *(p + 3544) = 0;
    *(p + 438) = v23;
    *(p + 2228) = -1;
    *(p + 2229) = 0;
    *(p + 2230) = -1;
    *(p + 2231) = -1;
    *p = &off_4108530;
    *(p + 559) = off_4100B30;
    *(p + 3545) = 0;
    *(p + 554) = 0;
    *(p + 555) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 0;
    *(p + 558) = 0;
    *(p + 1120) = 0;
    *(p + 561) = 0;
    *(p + 1124) = 0;
    *(p + 1125) = 0;
    *(p + 563) = 0;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 567) = 0;
    *(p + 568) = 0;
    *(p + 569) = 0;
    *(p + 571) = off_4100BD0;
    *(p + 4560) = 0;
    *(p + 4561) = 1;
    *(p + 1144) = 0;
    v24 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 573) = 0;
    *(p + 1148) = 0;
    *(p + 1149) = 0;
    *(p + 575) = 0;
    *(p + 590) = v24;
    *(p + 2372) = 0;
    *(p + 1152) = 0;
    *(p + 577) = 0;
    *(p + 1156) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 4656) = 0;
    *(p + 4657) = 1;
    *(p + 1166) = 0;
    *(p + 584) = 0;
    *(p + 1170) = 0;
    *(p + 1171) = 0;
    *(p + 4688) = 1;
    *(p + 1174) = 0;
    *(p + 588) = 0;
    *(p + 1178) = 0;
    *(p + 1179) = 0;
    *(p + 4746) = 0;
    *(p + 594) = 0;
    *(p + 4760) = 0;
    *(p + 4761) = 0;
    *(p + 1225) = 0;
    *(p + 1226) = 0;
    *p = &off_4108CD0;
  }
  return p;
}


// CIngameEvent_TI6::GetEventID  (line 222, @0x00000000025c4c80, libserver.so)
EEvent __fastcall CIngameEvent_TI6::GetEventID(CIngameEvent_TI6 *const this)
{
  return EEvent::EVENT_ID_INTERNATIONAL_2016;
}


// CIngameEvent_TI6::GetEventPointID  (line 223, @0x00000000025c4c90, libserver.so)
EEvent __fastcall CIngameEvent_TI6::GetEventPointID(CIngameEvent_TI6 *const this)
{
  return EEvent::EVENT_ID_INTERNATIONAL_2016;
}


// CIngameEvent_FM2016::~CIngameEvent_FM2016  (line 230, @0x00000000025db3a0, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_FM2016::~CIngameEvent_FM2016(CIngameEvent_FM2016 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_FM2016::~CIngameEvent_FM2016  (line 230, @0x00000000025db940, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_FM2016, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_FM2016::~CIngameEvent_FM2016(CIngameEvent_FM2016 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_FM2016::Schema_DynamicBinding  (line 232, @0x00000000025c4ca0, libserver.so)
// globals: CIngameEvent_FM2016::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_FM2016::Schema_DynamicBinding(
        const CIngameEvent_FM2016 *const this)
{
  return CIngameEvent_FM2016::s_pSchemaBinding;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 232, @0x00000000025c4cb0, libserver.so)
// globals: CIngameEvent_FM2016::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_FM2016::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::DestructInstance  (line 232, @0x00000000025c4cc0, libserver.so)  // inlines: Destruct<CIngameEvent_FM2016>
void __fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::FreeInstance  (line 232, @0x00000000025c4ce0, libserver.so)
void __fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::CanAllocate  (line 232, @0x00000000025c4d00, libserver.so)
bool __fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 232, @0x00000000025c4d10, libserver.so)
// globals: CIngameEvent_FM2016::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_FM2016::s_pSchemaBinding;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::AllocateInstance  (line 232, @0x00000000025c70f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4912);
  memset(v1, 0, 0x1330u);
  return v1;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 232, @0x00000000025cb470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 232, @0x00000000025cb490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_FM2016::GetEntityClassInternal  (line 232, @0x00000000025ceda0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CIngameEvent_WM2016::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_ingameevent_fm2016", "CIngameEvent_FM2016"
// globals: `guard variable for'CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class, CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class, __dso_handle, CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo, CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo
CEntityClass *__cdecl CIngameEvent_FM2016::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class);
    CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class._vptr_CEntityClass = off_4100C70;
    __cxa_guard_release(&`guard variable for'CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class);
    __cxa_atexit(
      CIngameEvent_FM2016::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_FM2016Class != 0 )
    return &CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class;
  if ( `guard variable for'CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo) != 0 )
  {
    EntityClassInfo = CIngameEvent_WM2016::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo,
      "CIngameEvent_FM2016",
      "dota_ingameevent_fm2016",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo);
  }
  CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class.m_pClassInfo = &CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo;
  CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class.m_pBaseClassInfo = CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_FM2016Class = &CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class;
  CIngameEvent_FM2016::GetEntityClassInfo(void)::g_EntityCIngameEvent_FM2016ClassInfo.m_pClass = &CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class;
  CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_FM2016Class->m_pComponentOverrides = 0;
  return &CIngameEvent_FM2016::GetEntityClassInternal(void)::g_EntityCIngameEvent_FM2016Class;
}


// CIngameEvent_FM2016::CEntityInstanceEntityClass::ConstructInstance  (line 232, @0x00000000025da9c0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CEntityOwnerPtr, CFieldPath, CIngameEvent_Base, CIngameEvent_FM2016, CIngameEvent_WM2016, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryFixed, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, CUtlVectorMT, Clear, ClosurePtr, Construct<CIngameEvent_FM2016>, EnsureValidValue<float>, FastDelegate2, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CIngameEvent_FM2016::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_FM2016::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CEntityInstance *v5; // rax
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v6; // rdi
  unsigned int *v7; // r12
  CEntityInstance *v8; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v10; // rdx
  size_t v11; // rdx
  void **v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  char *v15; // rsi
  int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 m_nCount; // rax
  __int64 v22; // rax
  CEntityInstance *v23; // rax
  CEntityInstance *v24; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rsi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v38; // [rsp+10h] [rbp-110h]
  void (__fastcall *v39)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, char *); // [rsp+20h] [rbp-100h]
  void **dest; // [rsp+28h] [rbp-F8h]
  CFieldPath path; // [rsp+30h] [rbp-F0h] BYREF
  LeafCodeInfo_t v42; // [rsp+50h] [rbp-D0h] BYREF
  LeafCodeInfo_t v43; // [rsp+70h] [rbp-B0h] BYREF
  LeafCodeInfo_t v44; // [rsp+90h] [rbp-90h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v46; // [rsp+C0h] [rbp-60h]
  char v47; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v48; // [rsp+D0h] [rbp-50h] BYREF

  if ( p != 0 )
  {
    v3 = (p + 1512);
    CBaseEntity::CBaseEntity(p);
    *p = &off_410A870;
    v38 = (p + 1504);
    *(p + 376) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 1728) = 0;
    *(p + 3458) = 0;
    *(p + 433) = 0;
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 3472) = 0;
    *(p + 3473) = 0;
    *(p + 429) = v5;
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &v38->m_Vector,
      24);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v38);
    if ( *(p + 3472) == 0 && *(p + 376) > 0 )
    {
      LODWORD(v7) = 0;
      dest = (p + 3440);
      while ( 1 )
      {
        if ( *(p + 3473) == 0 )
        {
          v8 = *(p + 429);
          *(p + 3473) = 1;
          if ( v8 != 0 )
          {
            v39 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v8);
            v39(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v8, v38, p + 3472);
            if ( dest != src )
            {
              v10 = v46;
              *(p + 3458) = 0;
              if ( v10 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_55;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v36, v37, v34, v35) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_55:
                  v48.m_szFile = "../../public/tier2/fieldpath.h";
                  v48.m_nLine = 442;
                  v48.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v48,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1728) = v10;
              if ( v10 > 0 )
              {
                v11 = 2 * v10;
                v12 = src;
                if ( v47 != 0 )
                  v12 = src[0];
                memcpy(dest, v12, v11);
              }
            }
          }
          else
          {
            if ( *(p + 3458) != 0 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v6);
            *(p + 1728) = 0;
          }
        }
        if ( *(p + 3472) == 0 )
          break;
LABEL_31:
        LODWORD(v7) = v7 + 1;
        v3 += 40;
        if ( v7 >= *(p + 376) )
          goto LABEL_32;
      }
      v13 = *(p + 1728);
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v13 > 6 )
        goto LABEL_46;
      path.m_nCount = v13;
      if ( v13 > 0 )
      {
        v14 = 2 * v13;
        if ( *(p + 3458) != 0 )
          v15 = *(p + 430);
        else
          v15 = p + 3440;
        __memcpy_chk(&path, v15, v14, 24);
        v16 = v7;
        if ( !path.m_bUsingExternalPaths )
          goto LABEL_26;
        v7 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v42.m_szFile = "../../public/tier2/fieldpath.h";
          v42.m_szFunction = "Path_AddToTail";
          v42.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v42,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v19, v20, v17, v18) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v16 = v7;
LABEL_26:
      m_nCount = path.m_nCount;
      if ( path.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v43.m_szFile = "../../public/tier2/fieldpath.h";
          v43.m_szFunction = "Path_AddToTail";
          v43.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v43,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v28, v29, v26, v27) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_46:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_50;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v32, v33, v30, v31) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_50:
          v44.m_szFile = "../../public/tier2/fieldpath.h";
          v44.m_szFunction = "Path_SetCount";
          v44.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v44,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      v6 = *(p + 429);
      ++path.m_nCount;
      path.u.m_FixedPaths[m_nCount].m_nValue = v16;
      if ( v6 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v6, &path).m_Value;
      else
        v3[8].m_Value = -1;
      v22 = *(p + 429);
      if ( v22 != *&v3[4].m_Value )
        *&v3[4].m_Value = v22;
      goto LABEL_31;
    }
LABEL_32:
    *(p + 3530) = 0;
    *(p + 870) = 0;
    *(p + 436) = 0;
    v23 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 874) = 0;
    *(p + 875) = 0;
    *(p + 442) = 0;
    *(p + 3544) = 0;
    *(p + 438) = v23;
    *(p + 1764) = 0;
    *(p + 2228) = -1;
    *p = &off_4108530;
    *(p + 559) = off_4100B30;
    *(p + 3545) = 0;
    *(p + 554) = 0;
    *(p + 555) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 0;
    *(p + 2229) = 0;
    *(p + 2230) = -1;
    *(p + 2231) = -1;
    *(p + 558) = 0;
    *(p + 1120) = 0;
    *(p + 561) = 0;
    *(p + 1124) = 0;
    *(p + 1125) = 0;
    *(p + 563) = 0;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 567) = 0;
    *(p + 568) = 0;
    *(p + 569) = 0;
    *(p + 571) = off_4100BD0;
    *(p + 4560) = 0;
    *(p + 4561) = 1;
    *(p + 1144) = 0;
    v24 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 573) = 0;
    *(p + 1148) = 0;
    *(p + 1149) = 0;
    *(p + 575) = 0;
    *(p + 590) = v24;
    *(p + 1152) = 0;
    *(p + 577) = 0;
    *(p + 1156) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 4656) = 0;
    *(p + 4657) = 1;
    *(p + 1166) = 0;
    *(p + 584) = 0;
    *(p + 1170) = 0;
    *(p + 1171) = 0;
    *(p + 4688) = 1;
    *(p + 1174) = 0;
    *(p + 588) = 0;
    *(p + 1178) = 0;
    *(p + 1179) = 0;
    *(p + 2372) = 0;
    *(p + 4746) = 0;
    *(p + 594) = 0;
    *(p + 4760) = 0;
    *(p + 4761) = 0;
    *(p + 1225) = 0;
    *(p + 1226) = 0;
    *p = &off_41093F0;
  }
  return p;
}


// CIngameEvent_FM2016::GetEventID  (line 238, @0x00000000025c4d20, libserver.so)
EEvent __fastcall CIngameEvent_FM2016::GetEventID(CIngameEvent_FM2016 *const this)
{
  return EEvent::EVENT_ID_FALL_MAJOR_2016;
}


// CIngameEvent_FM2016::GetEventPointID  (line 239, @0x00000000025c4d30, libserver.so)
EEvent __fastcall CIngameEvent_FM2016::GetEventPointID(CIngameEvent_FM2016 *const this)
{
  return EEvent::EVENT_ID_FALL_MAJOR_2016;
}


// CIngameEvent_WM2017::~CIngameEvent_WM2017  (line 246, @0x00000000025db1c0, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_WM2016, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_WM2017::~CIngameEvent_WM2017(CIngameEvent_WM2017 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CIngameEvent_WM2017::~CIngameEvent_WM2017  (line 246, @0x00000000025dbd00, libserver.so)  // inlines: Destruct<CDOTASubChallengeInfo>, Purge, RemoveAll, ~CClientMessageContainer, ~CClientMessageDelegateHook, ~CDOTASubChallengeInfo, ~CIngameEvent_Base, ~CIngameEvent_WM2016, ~CIngameEvent_WM2017, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release, CUtlSlot::~CUtlSlot, CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release, CUtlRBTree<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int, CUtlMap<unsigned int, unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int> >::Purge, CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int, unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CDOTASubChallengeInfo, int>::Purge, CUtlMemory<CDOTA_CombatLogQueryProgress, int>::Purge, CUtlMemory<IClientMessageDelegateHook*, int>::Purge
void __fastcall CIngameEvent_WM2017::~CIngameEvent_WM2017(CIngameEvent_WM2017 *const this)
{
  int v2; // eax
  __int64 v3; // rdx
  bool v4; // zf

  this->_vptr_IHandleEntity = &off_4108530;
  operator delete(this->m_SubChallenges.m_pArraySizeChangedDelegate);
  v2 = this->m_SubChallenges.m_Vector.m_Size - 1;
  v3 = v2 << 6;
  if ( v2 >= 0 )
  {
    do
    {
      --v2;
      *(&this->m_SubChallenges.m_Vector.m_Memory.m_pMemory->_vptr_CDOTASubChallengeInfo + v3) = &off_4100A00;
      v3 -= 64;
    }
    while ( v2 != -1 );
  }
  v4 = (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SubChallenges.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
    if ( (this->m_SubChallenges.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTASubChallengeInfo,int>::Purge(&this->m_SubChallenges.m_Vector.m_Memory);
  }
  v4 = (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ClientMessageContainer.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
    if ( (this->m_ClientMessageContainer.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<IClientMessageDelegateHook *,int>::Purge(&this->m_ClientMessageContainer.m_Memory);
  }
  this->m_CDOTAClientMsg_EventPointsTip_tHook._vptr_IClientMessageDelegateHook = off_4100BD0;
  CClientMessageDelegateHook<CDOTAClientMsg_EventPointsTip_t>::Release(&this->m_CDOTAClientMsg_EventPointsTip_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_EventPointsTip_tHook.CUtlSlot);
  this->m_CDOTAClientMsg_CoinWager_tHook._vptr_IClientMessageDelegateHook = off_4100B30;
  CClientMessageDelegateHook<CDOTAClientMsg_CoinWager_t>::Release(&this->m_CDOTAClientMsg_CoinWager_tHook);
  CUtlSlot::~CUtlSlot(&this->m_CDOTAClientMsg_CoinWager_tHook.CUtlSlot);
  this->_vptr_IHandleEntity = &off_410A870;
  CUtlRBTree<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short,CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree);
  if ( (this->m_mapCommunityGoalIncrements.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<unsigned int,unsigned int,unsigned short,bool (*)(unsigned int const&,unsigned int const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_mapCommunityGoalIncrements.m_Tree.m_Elements);
  operator delete(this->m_PlayerQueryIDs.m_pArraySizeChangedDelegate);
  v4 = (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_PlayerQueryIDs.m_Vector.m_Size = 0;
  if ( v4 )
  {
    CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
    if ( (this->m_PlayerQueryIDs.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_CombatLogQueryProgress,int>::Purge(&this->m_PlayerQueryIDs.m_Vector.m_Memory);
  }
  operator delete(this->m_CompendiumChallengeInfo.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::RemoveAll(&this->m_CompendiumChallengeInfo.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CIngameEvent_WM2017::Schema_DynamicBinding  (line 248, @0x00000000025c4d40, libserver.so)
// globals: CIngameEvent_WM2017::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_WM2017::Schema_DynamicBinding(
        const CIngameEvent_WM2017 *const this)
{
  return CIngameEvent_WM2017::s_pSchemaBinding;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 248, @0x00000000025c4d50, libserver.so)
// globals: CIngameEvent_WM2017::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_WM2017::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::DestructInstance  (line 248, @0x00000000025c4d60, libserver.so)  // inlines: Destruct<CIngameEvent_WM2017>
void __fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::DestructInstance(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::FreeInstance  (line 248, @0x00000000025c4d80, libserver.so)
void __fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::FreeInstance(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::CanAllocate  (line 248, @0x00000000025c4da0, libserver.so)
bool __fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::CanAllocate(
        const CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 248, @0x00000000025c4db0, libserver.so)
// globals: CIngameEvent_WM2017::s_pSchemaBinding
const ISchemaBinding *__fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  return CIngameEvent_WM2017::s_pSchemaBinding;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::AllocateInstance  (line 248, @0x00000000025c7130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::AllocateInstance(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4912);
  memset(v1, 0, 0x1330u);
  return v1;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 248, @0x00000000025cb4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 248, @0x00000000025cb4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CIngameEvent_WM2017::GetEntityClassInternal  (line 248, @0x00000000025ceef0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CIngameEvent_WM2016::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_04.cpp
// strings: "dota_ingameevent_wm2017", "CIngameEvent_WM2017"
// globals: `guard variable for'CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class, CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class, __dso_handle, CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo, CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo
CEntityClass *__cdecl CIngameEvent_WM2017::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class) != 0 )
  {
    CEntityClass::CEntityClass(&CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class);
    CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class._vptr_CEntityClass = off_4100CF0;
    __cxa_guard_release(&`guard variable for'CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class);
    __cxa_atexit(
      CIngameEvent_WM2017::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class,
      &_dso_handle);
  }
  if ( g_pEntityCIngameEvent_WM2017Class != 0 )
    return &CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class;
  if ( `guard variable for'CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo) != 0 )
  {
    EntityClassInfo = CIngameEvent_WM2016::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo,
      "CIngameEvent_WM2017",
      "dota_ingameevent_wm2017",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo);
  }
  CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class.m_pClassInfo = &CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo;
  CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class.m_pBaseClassInfo = CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo.m_pBaseClassInfo;
  g_pEntityCIngameEvent_WM2017Class = &CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class;
  CIngameEvent_WM2017::GetEntityClassInfo(void)::g_EntityCIngameEvent_WM2017ClassInfo.m_pClass = &CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class;
  CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCIngameEvent_WM2017Class->m_pComponentOverrides = 0;
  return &CIngameEvent_WM2017::GetEntityClassInternal(void)::g_EntityCIngameEvent_WM2017Class;
}


// CIngameEvent_WM2017::CEntityInstanceEntityClass::ConstructInstance  (line 248, @0x00000000025da1c0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CClientMessageContainer, CClientMessageDelegateHook, CCopyableLock, CEntityOwnerPtr, CFieldPath, CIngameEvent_Base, CIngameEvent_WM2016, CIngameEvent_WM2017, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CThreadFastMutex, CUtlAbstractDelegate, CUtlDelegate, CUtlMap, CUtlMemory, CUtlMemoryFixed, CUtlRBTree, CUtlSlot, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, CUtlVectorMT, Clear, ClosurePtr, Construct<CIngameEvent_WM2017>, EnsureValidValue<float>, FastDelegate2, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, ResetDbgInfo, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::SetCount, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo, CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo, 24>::Resolve, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorBase<CDOTA_PlayerChallengeInfo, CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo, 24> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CIngameEvent_WM2017::CEntityInstanceEntityClass::ConstructInstance(
        CIngameEvent_WM2017::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v5; // rdi
  unsigned int *v6; // r12
  CEntityInstance *v7; // r14
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v9; // rdx
  size_t v10; // rdx
  void **v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  char *v14; // rsi
  int16 v15; // cx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 m_nCount; // rax
  __int64 v21; // rax
  CEntityInstance *v22; // rax
  CEntityInstance *v23; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *v37; // [rsp+10h] [rbp-110h]
  void (__fastcall *v38)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24> *, char *); // [rsp+20h] [rbp-100h]
  void **dest; // [rsp+28h] [rbp-F8h]
  CFieldPath path; // [rsp+30h] [rbp-F0h] BYREF
  LeafCodeInfo_t v41; // [rsp+50h] [rbp-D0h] BYREF
  LeafCodeInfo_t v42; // [rsp+70h] [rbp-B0h] BYREF
  LeafCodeInfo_t v43; // [rsp+90h] [rbp-90h] BYREF
  void *src[2]; // [rsp+B0h] [rbp-70h] BYREF
  __int16 v45; // [rsp+C0h] [rbp-60h]
  char v46; // [rsp+C2h] [rbp-5Eh]
  LeafCodeInfo_t v47; // [rsp+D0h] [rbp-50h] BYREF

  if ( p != 0 )
  {
    v3 = (p + 1512);
    CBaseEntity::CBaseEntity(p);
    *p = &off_410A870;
    v37 = (p + 1504);
    *(p + 376) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 3458) = 0;
    *(p + 3472) = 0;
    *(p + 433) = 0;
    *(p + 3473) = 0;
    *(p + 429) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 1728) = 0;
    CUtlVectorBase<CDOTA_PlayerChallengeInfo,CNetworkUtlVector_MemoryType<CDOTA_PlayerChallengeInfo,24>>::SetCount(
      &v37->m_Vector,
      24);
    CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v37);
    if ( *(p + 3472) == 0 && *(p + 376) > 0 )
    {
      LODWORD(v6) = 0;
      dest = (p + 3440);
      while ( 1 )
      {
        if ( *(p + 3473) == 0 )
        {
          v7 = *(p + 429);
          *(p + 3473) = 1;
          if ( v7 != 0 )
          {
            v38 = *(*g_pFlattenedSerializers + 272LL);
            NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v7);
            v38(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v7, v37, p + 3472);
            if ( dest != src )
            {
              v9 = v45;
              *(p + 3458) = 0;
              if ( v9 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_55;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v35, v36, v33, v34) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_55:
                  v47.m_szFile = "../../public/tier2/fieldpath.h";
                  v47.m_nLine = 442;
                  v47.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v47,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1728) = v9;
              if ( v9 > 0 )
              {
                v10 = 2 * v9;
                v11 = src;
                if ( v46 != 0 )
                  v11 = src[0];
                memcpy(dest, v11, v10);
              }
            }
          }
          else
          {
            if ( *(p + 3458) != 0 )
              CUtlVectorEmbeddedNetworkVar<CDOTA_PlayerChallengeInfo,CIngameEvent_Base::NetworkVar_m_CompendiumChallengeInfo,24>::Resolve(v5);
            v5 = 0;
            *(p + 1728) = 0;
          }
        }
        if ( *(p + 3472) == 0 )
          break;
LABEL_31:
        LODWORD(v6) = v6 + 1;
        v3 += 40;
        if ( v6 >= *(p + 376) )
          goto LABEL_32;
      }
      v12 = *(p + 1728);
      path.m_bUsingExternalPaths = 0;
      path.m_nCount = 0;
      if ( v12 > 6 )
        goto LABEL_46;
      path.m_nCount = v12;
      if ( v12 > 0 )
      {
        v13 = 2 * v12;
        if ( *(p + 3458) != 0 )
          v14 = *(p + 430);
        else
          v14 = p + 3440;
        __memcpy_chk(&path, v14, v13, 24);
        v15 = v6;
        if ( !path.m_bUsingExternalPaths )
          goto LABEL_26;
        v6 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v41.m_szFile = "../../public/tier2/fieldpath.h";
          v41.m_szFunction = "Path_AddToTail";
          v41.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v41,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v18, v19, v16, v17) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v15 = v6;
LABEL_26:
      m_nCount = path.m_nCount;
      if ( path.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v42.m_szFile = "../../public/tier2/fieldpath.h";
          v42.m_szFunction = "Path_AddToTail";
          v42.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v42,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v27, v28, v25, v26) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_46:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_50;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v31, v32, v29, v30) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_50:
          v43.m_szFile = "../../public/tier2/fieldpath.h";
          v43.m_szFunction = "Path_SetCount";
          v43.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v43,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      v5 = *(p + 429);
      ++path.m_nCount;
      path.u.m_FixedPaths[m_nCount].m_nValue = v15;
      if ( v5 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v5, &path).m_Value;
      else
        v3[8].m_Value = -1;
      v21 = *(p + 429);
      if ( v21 != *&v3[4].m_Value )
        *&v3[4].m_Value = v21;
      goto LABEL_31;
    }
LABEL_32:
    *(p + 870) = 0;
    *(p + 436) = 0;
    v22 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 874) = 0;
    *(p + 875) = 0;
    *(p + 1764) = 0;
    *(p + 3530) = 0;
    *(p + 438) = v22;
    *p = &off_4108530;
    *(p + 559) = off_4100B30;
    *(p + 442) = 0;
    *(p + 3544) = 0;
    *(p + 3545) = 0;
    *(p + 554) = 0;
    *(p + 555) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 0;
    *(p + 2228) = -1;
    *(p + 2229) = 0;
    *(p + 2230) = -1;
    *(p + 2231) = -1;
    *(p + 558) = 0;
    *(p + 1120) = 0;
    *(p + 561) = 0;
    *(p + 1124) = 0;
    *(p + 1125) = 0;
    *(p + 563) = 0;
    *(p + 1128) = 0;
    *(p + 565) = 0;
    *(p + 1132) = 0;
    *(p + 567) = 0;
    *(p + 568) = 0;
    *(p + 569) = 0;
    *(p + 571) = off_4100BD0;
    *(p + 4560) = 0;
    *(p + 4561) = 1;
    *(p + 1144) = 0;
    v23 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 573) = 0;
    *(p + 1148) = 0;
    *(p + 1149) = 0;
    *(p + 575) = 0;
    *(p + 590) = v23;
    *(p + 1152) = 0;
    *(p + 577) = 0;
    *(p + 1156) = 0;
    *(p + 579) = 0;
    *(p + 580) = 0;
    *(p + 581) = 0;
    *(p + 4656) = 0;
    *(p + 4657) = 1;
    *(p + 1166) = 0;
    *(p + 584) = 0;
    *(p + 1170) = 0;
    *(p + 1171) = 0;
    *(p + 4688) = 1;
    *(p + 1174) = 0;
    *(p + 588) = 0;
    *(p + 1178) = 0;
    *(p + 1179) = 0;
    *(p + 2372) = 0;
    *(p + 4746) = 0;
    *(p + 594) = 0;
    *(p + 4760) = 0;
    *(p + 4761) = 0;
    *(p + 1225) = 0;
    *(p + 1226) = 0;
    *p = &off_4109B10;
  }
  return p;
}


// CIngameEvent_WM2017::GetEventID  (line 254, @0x00000000025c4dc0, libserver.so)
EEvent __fastcall CIngameEvent_WM2017::GetEventID(CIngameEvent_WM2017 *const this)
{
  return EEvent::EVENT_ID_WINTER_MAJOR_2017;
}


// CIngameEvent_WM2017::GetEventPointID  (line 255, @0x00000000025c4dd0, libserver.so)
EEvent __fastcall CIngameEvent_WM2017::GetEventPointID(CIngameEvent_WM2017 *const this)
{
  return EEvent::EVENT_ID_WINTER_MAJOR_2017;
}


