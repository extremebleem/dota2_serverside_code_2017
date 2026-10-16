
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSpeechBubbleManager::~CSpeechBubbleManager  (line 17, @0x00000000027a3ca0, libserver.so)  // inlines: Purge, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll, CBaseEntity::~CBaseEntity
void __fastcall CSpeechBubbleManager::~CSpeechBubbleManager(CSpeechBubbleManager *const this)
{
  this->_vptr_IHandleEntity = &off_42AA5D0;
  operator delete(this->m_SpeechBubbles.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::RemoveAll(&this->m_SpeechBubbles.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CSpeechBubbleManager::~CSpeechBubbleManager  (line 17, @0x00000000027a4ba0, libserver.so)  // inlines: Purge, ~CSpeechBubbleManager, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CSpeechBubbleManager::~CSpeechBubbleManager(CSpeechBubbleManager *const this)
{
  this->_vptr_IHandleEntity = &off_42AA5D0;
  operator delete(this->m_SpeechBubbles.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::RemoveAll(&this->m_SpeechBubbles.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CSpeechBubbleManager::Schema_DynamicBinding  (line 19, @0x0000000002728580, libserver.so)
// globals: CSpeechBubbleManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpeechBubbleManager::Schema_DynamicBinding(
        const CSpeechBubbleManager *const this)
{
  return CSpeechBubbleManager::s_pSchemaBinding;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x0000000002728590, libserver.so)
// globals: CSpeechBubbleManager::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  return CSpeechBubbleManager::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x00000000027285a0, libserver.so)  // inlines: Destruct<CSpeechBubbleManager>
void __fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::DestructInstance(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x00000000027285c0, libserver.so)
void __fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::FreeInstance(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x00000000027285e0, libserver.so)
bool __fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::CanAllocate(
        const CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x00000000027285f0, libserver.so)
// globals: CSpeechBubbleManager::s_pSchemaBinding
const ISchemaBinding *__fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  return CSpeechBubbleManager::s_pSchemaBinding;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x0000000002736900, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::AllocateInstance(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2024);
  memset(v1, 0, 0x7E8u);
  return v1;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000274d2d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000274d2f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSpeechBubbleManager::GetEntityClassInternal  (line 19, @0x000000000279e580, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "speechbubble_manager", "CSpeechBubbleManager"
// globals: `guard variable for'CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass, CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass, __dso_handle, CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo, CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo
CEntityClass *__cdecl CSpeechBubbleManager::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass);
    CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass._vptr_CEntityClass = off_42AA550;
    __cxa_guard_release(&`guard variable for'CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass);
    __cxa_atexit(
      CSpeechBubbleManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass,
      &_dso_handle);
  }
  if ( g_pEntityCSpeechBubbleManagerClass != 0 )
    return &CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass;
  if ( `guard variable for'CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo,
      "CSpeechBubbleManager",
      "speechbubble_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo);
  }
  CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass.m_pClassInfo = &CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo;
  CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass.m_pBaseClassInfo = CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo.m_pBaseClassInfo;
  g_pEntityCSpeechBubbleManagerClass = &CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass;
  CSpeechBubbleManager::GetEntityClassInfo(void)::g_EntityCSpeechBubbleManagerClassInfo.m_pClass = &CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass;
  CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCSpeechBubbleManagerClass->m_pComponentOverrides = 0;
  return &CSpeechBubbleManager::GetEntityClassInternal(void)::g_EntityCSpeechBubbleManagerClass;
}


// CSpeechBubbleManager::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x00000000027a3da0, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CSmartPtr, CSpeechBubbleManager, CUtlMemoryFixed, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Clear, Construct<CSpeechBubbleManager>, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, Resolve, Set, V_memcpy, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::SetCount, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CSpeechBubbleManager::NetworkVar_m_SpeechBubbles, 4>::Resolve, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CSpeechBubbleManager::CEntityInstanceEntityClass::ConstructInstance(
        CSpeechBubbleManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CEntityInstance *v5; // rax
  CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CSpeechBubbleManager::NetworkVar_m_SpeechBubbles,4> *v6; // rdi
  CEntityInstance *v7; // r12
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v9; // rax
  void **v10; // rsi
  unsigned int *v11; // r12
  CEntityInstance *v12; // r14
  FlattenedSerializerHandle_t v13; // rdx
  __int64 v14; // rdx
  size_t v15; // rdx
  void **v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  char *v19; // rsi
  int16 v20; // cx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 m_nCount; // rax
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> > *v44; // [rsp+8h] [rbp-158h]
  void (__fastcall *v45)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> > *, char *); // [rsp+18h] [rbp-148h]
  void **dest; // [rsp+20h] [rbp-140h]
  CFieldPath *path; // [rsp+28h] [rbp-138h]
  LeafCodeInfo_t v48; // [rsp+30h] [rbp-130h] BYREF
  void *src[2]; // [rsp+50h] [rbp-110h] BYREF
  __int16 v50; // [rsp+60h] [rbp-100h]
  char v51; // [rsp+62h] [rbp-FEh]
  CFieldPath v52; // [rsp+70h] [rbp-F0h] BYREF
  LeafCodeInfo_t v53; // [rsp+90h] [rbp-D0h] BYREF
  LeafCodeInfo_t v54; // [rsp+B0h] [rbp-B0h] BYREF
  LeafCodeInfo_t v55; // [rsp+D0h] [rbp-90h] BYREF
  LeafCodeInfo_t v56; // [rsp+F0h] [rbp-70h] BYREF
  void *v57[2]; // [rsp+110h] [rbp-50h] BYREF
  __int16 v58; // [rsp+120h] [rbp-40h]
  char v59; // [rsp+122h] [rbp-3Eh]

  if ( p != 0 )
  {
    v3 = (p + 784);
    CBaseEntity::CBaseEntity(p);
    *p = &off_42AA5D0;
    v44 = (p + 776);
    *(p + 194) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 996) = 0;
    *(p + 1994) = 0;
    *(p + 250) = 0;
    v5 = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 2008) = 0;
    *(p + 2009) = 0;
    *(p + 246) = v5;
    CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::SetCount(v44, 4);
    if ( *(p + 2009) == 0 )
    {
      v7 = *(p + 246);
      *(p + 2009) = 1;
      if ( v7 != 0 )
      {
        path = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v7);
        (path)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v7, v44, p + 2008);
        v6 = (p + 1976);
        if ( p + 1976 != src )
        {
          v9 = v50;
          *(p + 1994) = 0;
          if ( v9 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_70;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v42, v43, v40, v41) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_70:
              v48.m_szFile = "../../public/tier2/fieldpath.h";
              v48.m_szFunction = "Path_SetCount";
              v48.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v48,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          *(p + 996) = v9;
          if ( v9 > 0 )
          {
            v10 = src;
            if ( v51 != 0 )
              v10 = src[0];
            memcpy(v6, v10, 2 * v9);
          }
        }
      }
      else
      {
        if ( *(p + 1994) != 0 )
          CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CSpeechBubbleManager::NetworkVar_m_SpeechBubbles,4>::Resolve(v6);
        *(p + 996) = 0;
      }
    }
    if ( *(p + 2008) == 0 && *(p + 194) > 0 )
    {
      LODWORD(v11) = 0;
      dest = (p + 1976);
      while ( 1 )
      {
        if ( *(p + 2009) == 0 )
        {
          v12 = *(p + 246);
          *(p + 2009) = 1;
          if ( v12 != 0 )
          {
            v45 = *(*g_pFlattenedSerializers + 272LL);
            v13 = GetNetworkSerializerForEntityInstance(v12);
            v45(v57, g_pFlattenedSerializers, v13, v12, v44, p + 2008);
            if ( dest != v57 )
            {
              v14 = v58;
              *(p + 1994) = 0;
              if ( v14 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_65;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v38, v39, v36, v37) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_65:
                  v56.m_szFile = "../../public/tier2/fieldpath.h";
                  v56.m_nLine = 442;
                  v56.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v56,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 996) = v14;
              if ( v14 > 0 )
              {
                v15 = 2 * v14;
                v16 = v57;
                if ( v59 != 0 )
                  v16 = v57[0];
                memcpy(dest, v16, v15);
              }
            }
          }
          else
          {
            if ( *(p + 1994) != 0 )
              CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CSpeechBubbleManager::NetworkVar_m_SpeechBubbles,4>::Resolve(v6);
            v6 = 0;
            *(p + 996) = 0;
          }
        }
        if ( *(p + 2008) == 0 )
          break;
LABEL_39:
        LODWORD(v11) = v11 + 1;
        v3 += 148;
        if ( v11 >= *(p + 194) )
          return p;
      }
      v17 = *(p + 996);
      v52.m_bUsingExternalPaths = 0;
      v52.m_nCount = 0;
      if ( v17 > 6 )
        goto LABEL_56;
      v52.m_nCount = v17;
      if ( v17 > 0 )
      {
        v18 = 2 * v17;
        if ( *(p + 1994) != 0 )
          v19 = *(p + 247);
        else
          v19 = p + 1976;
        __memcpy_chk(&v52, v19, v18, 24);
        v20 = v11;
        if ( !v52.m_bUsingExternalPaths )
          goto LABEL_34;
        v11 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v53.m_szFile = "../../public/tier2/fieldpath.h";
          v53.m_szFunction = "Path_AddToTail";
          v53.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v53,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v23, v24, v21, v22) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v20 = v11;
LABEL_34:
      m_nCount = v52.m_nCount;
      if ( v52.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v54.m_szFile = "../../public/tier2/fieldpath.h";
          v54.m_szFunction = "Path_AddToTail";
          v54.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v54,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v30, v31, v28, v29) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_56:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_60;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v34, v35, v32, v33) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_60:
          v55.m_szFile = "../../public/tier2/fieldpath.h";
          v55.m_szFunction = "Path_SetCount";
          v55.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v55,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      ++v52.m_nCount;
      v52.u.m_FixedPaths[m_nCount].m_nValue = v20;
      v6 = *(p + 246);
      if ( v6 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v6, &v52).m_Value;
      else
        v3[8].m_Value = -1;
      v26 = *(p + 246);
      if ( v26 != *&v3[4].m_Value )
        *&v3[4].m_Value = v26;
      goto LABEL_39;
    }
  }
  return p;
}


// CSpeechBubbleManager::UpdateTransmitState  (line 27, @0x0000000002736cc0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CSpeechBubbleManager::UpdateTransmitState(CSpeechBubbleManager *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CSpeechBubbleManager::ObjectCaps  (line 28, @0x0000000002736c70, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CSpeechBubbleManager::ObjectCaps(CSpeechBubbleManager *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x80000000;
}


