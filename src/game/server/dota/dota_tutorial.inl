
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// NPCSpeechData_t::NPCSpeechData_t  (line 27, @0x000000000279ff50, libserver.so)  // inlines: CCopyableUtlVector, CUtlMemory, CUtlVector, CUtlVectorBase
// callers: CDOTA_Tutorial::ParseLessonKeys
void __fastcall NPCSpeechData_t::NPCSpeechData_t(NPCSpeechData_t *const this)
{
  this->vecSpeech.m_Size = 0;
  this->vecSpeech.m_Memory.m_pMemory = 0;
  this->vecSpeech.m_Memory.m_nAllocationCount = 0;
  this->vecSpeech.m_Memory.m_nGrowSize = 0;
  this->vecVO.m_Size = 0;
  this->vecVO.m_Memory.m_pMemory = 0;
  this->vecVO.m_Memory.m_nAllocationCount = 0;
  this->vecVO.m_Memory.m_nGrowSize = 0;
}


// CDotaTutorialNetworker::~CDotaTutorialNetworker  (line 78, @0x00000000027a3ce0, libserver.so)  // inlines: Purge, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll, CBaseEntity::~CBaseEntity
void __fastcall CDotaTutorialNetworker::~CDotaTutorialNetworker(CDotaTutorialNetworker *const this)
{
  this->_vptr_IHandleEntity = &off_42AE7B0;
  operator delete(this->m_SpeechBubbles.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::RemoveAll(&this->m_SpeechBubbles.m_Vector);
  CBaseEntity::~CBaseEntity(this);
}


// CDotaTutorialNetworker::~CDotaTutorialNetworker  (line 78, @0x00000000027a4bf0, libserver.so)  // inlines: Purge, ~CDotaTutorialNetworker, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: operator delete, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDotaTutorialNetworker::~CDotaTutorialNetworker(CDotaTutorialNetworker *const this)
{
  this->_vptr_IHandleEntity = &off_42AE7B0;
  operator delete(this->m_SpeechBubbles.m_pArraySizeChangedDelegate);
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::RemoveAll(&this->m_SpeechBubbles.m_Vector);
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDotaTutorialNetworker::Schema_DynamicBinding  (line 80, @0x0000000002728810, libserver.so)
// globals: CDotaTutorialNetworker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaTutorialNetworker::Schema_DynamicBinding(
        const CDotaTutorialNetworker *const this)
{
  return CDotaTutorialNetworker::s_pSchemaBinding;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 80, @0x0000000002728820, libserver.so)
// globals: CDotaTutorialNetworker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  return CDotaTutorialNetworker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::DestructInstance  (line 80, @0x0000000002728830, libserver.so)  // inlines: Destruct<CDotaTutorialNetworker>
void __fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::DestructInstance(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::FreeInstance  (line 80, @0x0000000002728850, libserver.so)
void __fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::FreeInstance(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::CanAllocate  (line 80, @0x0000000002728870, libserver.so)
bool __fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::CanAllocate(
        const CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 80, @0x0000000002728880, libserver.so)
// globals: CDotaTutorialNetworker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  return CDotaTutorialNetworker::s_pSchemaBinding;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::AllocateInstance  (line 80, @0x0000000002736a40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::AllocateInstance(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2576);
  memset(v1, 0, 0xA10u);
  return v1;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x000000000274d370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x000000000274d390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDotaTutorialNetworker::GetEntityClassInternal  (line 80, @0x000000000279f120, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "tutorial_networker", "CDotaTutorialNetworker"
// globals: `guard variable for'CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass, CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass, __dso_handle, CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo, CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo
CEntityClass *__cdecl CDotaTutorialNetworker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass);
    CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass._vptr_CEntityClass = off_42AE6D0;
    __cxa_guard_release(&`guard variable for'CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass);
    __cxa_atexit(
      CDotaTutorialNetworker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDotaTutorialNetworkerClass != 0 )
    return &CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass;
  if ( `guard variable for'CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo,
      "CDotaTutorialNetworker",
      "tutorial_networker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo);
  }
  CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass.m_pClassInfo = &CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo;
  CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass.m_pBaseClassInfo = CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo.m_pBaseClassInfo;
  g_pEntityCDotaTutorialNetworkerClass = &CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass;
  CDotaTutorialNetworker::GetEntityClassInfo(void)::g_EntityCDotaTutorialNetworkerClassInfo.m_pClass = &CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass;
  CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDotaTutorialNetworkerClass->m_pComponentOverrides = 0;
  return &CDotaTutorialNetworker::GetEntityClassInternal(void)::g_EntityCDotaTutorialNetworkerClass;
}


// CDotaTutorialNetworker::CEntityInstanceEntityClass::ConstructInstance  (line 80, @0x00000000027a4470, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, AssignPathIdToElement, CDotaTutorialNetworker, CEntityOwnerPtr, CFieldPath, CNetworkUtlVector_MemoryType, CNetworkVarBase, CSmartPtr, CUtlMemoryFixed, CUtlVector, CUtlVectorBase, CUtlVectorEmbeddedNetworkVar, CUtlVectorEmbeddedNetworkVar_ChainingHelper, CUtlVectorEmbeddedNetworkVar_Vector, Clear, Construct<CDotaTutorialNetworker>, EnsureValidValue, EnsureValidValue<int>, Get, GetPathData, IsUsingFixedPaths, LeafCodeInfo_t, Path_AddToTail, Path_RemoveAll, Path_SetCount, Purge, Push, ReassignPathIds, Resolve, Set, V_memcpy, Zero, memcpy, operator CEntityInstance*, operator=, ~CUtlVector, ~CUtlVectorBase, ~CUtlVectorEmbeddedNetworkVar_ChainingHelper, ~CUtlVectorEmbeddedNetworkVar_Vector
// calls: CBaseEntity::CBaseEntity, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::SetCount, GetNetworkSerializerForEntityInstance, memcpy, __memcpy_chk, LoggingSystem_IsChannelEnabled, Plat_ShouldCollectMiniDumpsForFatalErrors, Plat_ExitProcess, EntityInstanceAddChangeAccessorPath, Plat_IsInDebugSessionRaw, CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo, CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles, 4>::Resolve, CUtlVectorBase<CSpeechBubbleInfo, CNetworkUtlVector_MemoryType<CSpeechBubbleInfo, 4> >::RemoveAll (15 total)
// strings: "../../public/tier2/fieldpath.h", "Path_SetCount", "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail", "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)", "Path_AddToTail failed for read only CFieldPath"
CEntityInstance *__fastcall CDotaTutorialNetworker::CEntityInstanceEntityClass::ConstructInstance(
        CDotaTutorialNetworker::CEntityInstanceEntityClass *const this,
        void *p)
{
  ChangeAccessorFieldPathIndex_t *v3; // r13
  __int64 v4; // rdi
  CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles,4> *v5; // rdi
  CEntityInstance *v6; // r12
  FlattenedSerializerHandle_t NetworkSerializerForEntityInstance; // rdx
  __int64 v8; // rax
  void **v9; // rsi
  unsigned int *v10; // r12
  CEntityInstance *v11; // r14
  FlattenedSerializerHandle_t v12; // rdx
  __int64 v13; // rdx
  size_t v14; // rdx
  void **v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  char *v18; // rsi
  int16 v19; // cx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 m_nCount; // rax
  __int64 v25; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> > *v43; // [rsp+8h] [rbp-158h]
  void (__fastcall *v44)(void **, IFlattenedSerializers *, FlattenedSerializerHandle_t, CEntityInstance *, CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4> > *, char *); // [rsp+18h] [rbp-148h]
  void **dest; // [rsp+20h] [rbp-140h]
  CFieldPath *path; // [rsp+28h] [rbp-138h]
  LeafCodeInfo_t v47; // [rsp+30h] [rbp-130h] BYREF
  void *src[2]; // [rsp+50h] [rbp-110h] BYREF
  __int16 v49; // [rsp+60h] [rbp-100h]
  char v50; // [rsp+62h] [rbp-FEh]
  CFieldPath v51; // [rsp+70h] [rbp-F0h] BYREF
  LeafCodeInfo_t v52; // [rsp+90h] [rbp-D0h] BYREF
  LeafCodeInfo_t v53; // [rsp+B0h] [rbp-B0h] BYREF
  LeafCodeInfo_t v54; // [rsp+D0h] [rbp-90h] BYREF
  LeafCodeInfo_t v55; // [rsp+F0h] [rbp-70h] BYREF
  void *v56[2]; // [rsp+110h] [rbp-50h] BYREF
  __int16 v57; // [rsp+120h] [rbp-40h]
  char v58; // [rsp+122h] [rbp-3Eh]

  if ( p != 0 )
  {
    v3 = (p + 824);
    CBaseEntity::CBaseEntity(p);
    *p = &off_42AE7B0;
    *(p + 194) = 0;
    *(p + 195) = 0;
    *(p + 196) = 0;
    *(p + 197) = 0;
    *(p + 198) = 0;
    *(p + 199) = 0;
    *(p + 202) = 0;
    *(p + 201) = 0;
    *(p + 200) = 0;
    v43 = (p + 816);
    *(p + 204) = 0;
    if ( (v3 & 7) != 0 && Plat_IsInDebugSessionRaw(v4) != 0 )
      __debugbreak();
    *(p + 2034) = 0;
    *(p + 2048) = 0;
    *(p + 255) = 0;
    *(p + 2049) = 0;
    *(p + 251) = CEntitySpawnHelper::gm_pCurEntityPtr;
    *(p + 1016) = 0;
    CUtlVectorBase<CSpeechBubbleInfo,CNetworkUtlVector_MemoryType<CSpeechBubbleInfo,4>>::SetCount(v43, 4);
    if ( *(p + 2049) == 0 )
    {
      v6 = *(p + 251);
      *(p + 2049) = 1;
      if ( v6 != 0 )
      {
        path = *(*g_pFlattenedSerializers + 272LL);
        NetworkSerializerForEntityInstance = GetNetworkSerializerForEntityInstance(v6);
        (path)(src, g_pFlattenedSerializers, NetworkSerializerForEntityInstance, v6, v43, p + 2048);
        v5 = (p + 2016);
        if ( p + 2016 != src )
        {
          v8 = v49;
          *(p + 2034) = 0;
          if ( v8 > 6 )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_71;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v41, v42, v39, v40) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_71:
              v47.m_szFile = "../../public/tier2/fieldpath.h";
              v47.m_szFunction = "Path_SetCount";
              v47.m_nLine = 442;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v47,
                "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                6);
            }
          }
          *(p + 1016) = v8;
          if ( v8 > 0 )
          {
            v9 = src;
            if ( v50 != 0 )
              v9 = src[0];
            memcpy(v5, v9, 2 * v8);
          }
        }
      }
      else
      {
        if ( *(p + 2034) != 0 )
          CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles,4>::Resolve(v5);
        *(p + 1016) = 0;
      }
    }
    if ( *(p + 2048) == 0 && *(p + 204) > 0 )
    {
      LODWORD(v10) = 0;
      dest = (p + 2016);
      while ( 1 )
      {
        if ( *(p + 2049) == 0 )
        {
          v11 = *(p + 251);
          *(p + 2049) = 1;
          if ( v11 != 0 )
          {
            v44 = *(*g_pFlattenedSerializers + 272LL);
            v12 = GetNetworkSerializerForEntityInstance(v11);
            v44(v56, g_pFlattenedSerializers, v12, v11, v43, p + 2048);
            if ( dest != v56 )
            {
              v13 = v57;
              *(p + 2034) = 0;
              if ( v13 > 6 )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_66;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v37, v38, v35, v36) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_66:
                  v55.m_szFile = "../../public/tier2/fieldpath.h";
                  v55.m_nLine = 442;
                  v55.m_szFunction = "Path_SetCount";
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v55,
                    "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
                    6);
                }
              }
              *(p + 1016) = v13;
              if ( v13 > 0 )
              {
                v14 = 2 * v13;
                v15 = v56;
                if ( v58 != 0 )
                  v15 = v56[0];
                memcpy(dest, v15, v14);
              }
            }
          }
          else
          {
            if ( *(p + 2034) != 0 )
              CUtlVectorEmbeddedNetworkVar<CSpeechBubbleInfo,CDotaTutorialNetworker::NetworkVar_m_SpeechBubbles,4>::Resolve(v5);
            *(p + 1016) = 0;
          }
        }
        if ( *(p + 2048) == 0 )
          break;
LABEL_39:
        LODWORD(v10) = v10 + 1;
        v3 += 148;
        if ( v10 >= *(p + 204) )
          goto LABEL_40;
      }
      v16 = *(p + 1016);
      v51.m_bUsingExternalPaths = 0;
      v51.m_nCount = 0;
      if ( v16 > 6 )
        goto LABEL_57;
      v51.m_nCount = v16;
      if ( v16 > 0 )
      {
        v17 = 2 * v16;
        if ( *(p + 2034) != 0 )
          v18 = *(p + 252);
        else
          v18 = p + 2016;
        __memcpy_chk(&v51, v18, v17, 24);
        v19 = v10;
        if ( !v51.m_bUsingExternalPaths )
          goto LABEL_34;
        v10 = &LOG_GENERAL;
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v52.m_szFile = "../../public/tier2/fieldpath.h";
          v52.m_szFunction = "Path_AddToTail";
          v52.m_nLine = 428;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v52,
            "Path_AddToTail failed for read only CFieldPath");
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v22, v23, v20, v21) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
      }
      v19 = v10;
LABEL_34:
      m_nCount = v51.m_nCount;
      if ( v51.m_nCount > 5 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
        {
          v53.m_szFile = "../../public/tier2/fieldpath.h";
          v53.m_szFunction = "Path_AddToTail";
          v53.m_nLine = 425;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v53,
            "Path_AddToTail failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
        if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v29, v30, v27, v28) != 0 )
          loc_0 = -559038737;
        Plat_ExitProcess(1);
LABEL_57:
        if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
          goto LABEL_61;
        while ( 1 )
        {
          if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v33, v34, v31, v32) != 0 )
            loc_0 = -559038737;
          Plat_ExitProcess(1);
LABEL_61:
          v54.m_szFile = "../../public/tier2/fieldpath.h";
          v54.m_szFunction = "Path_SetCount";
          v54.m_nLine = 442;
          LoggingSystem_Log(
            LOG_GENERAL,
            LoggingSeverity_t::LS_ERROR,
            &v54,
            "Path_SetCount failed, depth already == DEFAULT_MAX_PATH_DEPTH(%d)",
            6);
        }
      }
      ++v51.m_nCount;
      v51.u.m_FixedPaths[m_nCount].m_nValue = v19;
      v5 = *(p + 251);
      if ( v5 != 0 )
        v3[8].m_Value = EntityInstanceAddChangeAccessorPath(v5, &v51).m_Value;
      else
        v3[8].m_Value = -1;
      v25 = *(p + 251);
      if ( v25 != *&v3[4].m_Value )
        *&v3[4].m_Value = v25;
      goto LABEL_39;
    }
LABEL_40:
    *(p + 514) = 0;
  }
  return p;
}


// CDotaTutorialNetworker::UpdateTransmitState  (line 88, @0x0000000002736ce0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CDotaTutorialNetworker::UpdateTransmitState(CDotaTutorialNetworker *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CDOTA_Tutorial::~CDOTA_Tutorial  (line 108, @0x00000000027a23e0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CCopyableUtlVector, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >::RemoveAll, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::RemoveAll, IGameSystem::~IGameSystem, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<ReactiveTipDescription_t, int>::Purge, CUtlMemory<NPCSpeechData_t, int>::Purge, CUtlMemory<QuestLogEntry_t, int>::Purge, CUtlMemory<char const*, int>::Purge
void __fastcall CDOTA_Tutorial::~CDOTA_Tutorial(CDOTA_Tutorial *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_TeleportTargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = &off_42AF570;
  this->_vptr_IGameEventListener2 = off_42AF6C8;
  this->m_TeleportTargetList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_TeleportTargetList.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_TeleportTargetList.m_Memory);
    if ( (this->m_TeleportTargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_LogEntries.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LogEntries.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<QuestLogEntry_t,int>::Purge(&this->m_LogEntries.m_Memory);
    if ( (this->m_LogEntries.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<QuestLogEntry_t,int>::Purge(&this->m_LogEntries.m_Memory);
  }
  v2 = (this->m_hRoquelairePerches.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hRoquelairePerches.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRoquelairePerches.m_Memory);
    if ( (this->m_hRoquelairePerches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRoquelairePerches.m_Memory);
  }
  CUtlVectorBase<NPCSpeechData_t,CUtlMemory<NPCSpeechData_t,int>>::RemoveAll(&this->m_DelayedSpeech);
  if ( (this->m_DelayedSpeech.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NPCSpeechData_t,int>::Purge(&this->m_DelayedSpeech.m_Memory);
    if ( (this->m_DelayedSpeech.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NPCSpeechData_t,int>::Purge(&this->m_DelayedSpeech.m_Memory);
  }
  CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::RemoveAll(&this->m_ReactiveTips);
  if ( (this->m_ReactiveTips.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ReactiveTipDescription_t,int>::Purge(&this->m_ReactiveTips.m_Memory);
    if ( (this->m_ReactiveTips.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ReactiveTipDescription_t,int>::Purge(&this->m_ReactiveTips.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  IGameSystem::~IGameSystem(this);
}


// CDOTA_Tutorial::~CDOTA_Tutorial  (line 108, @0x00000000027a25c0, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CCopyableUtlVector, ~CDOTA_Tutorial, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CUtlVectorBase<NPCSpeechData_t, CUtlMemory<NPCSpeechData_t, int> >::RemoveAll, CUtlVectorBase<ReactiveTipDescription_t, CUtlMemory<ReactiveTipDescription_t, int> >::RemoveAll, IGameSystem::~IGameSystem, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<ReactiveTipDescription_t, int>::Purge, CUtlMemory<NPCSpeechData_t, int>::Purge, CUtlMemory<QuestLogEntry_t, int>::Purge, CUtlMemory<char const*, int>::Purge
void __fastcall CDOTA_Tutorial::~CDOTA_Tutorial(CDOTA_Tutorial *const this)
{
  bool v2; // zf
  CUtlVectorBase<char const*,CUtlMemory<char const*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_TeleportTargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IGameSystem = &off_42AF570;
  this->_vptr_IGameEventListener2 = off_42AF6C8;
  this->m_TeleportTargetList.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_TeleportTargetList.m_Memory;
    CUtlMemory<char const*,int>::Purge(&this->m_TeleportTargetList.m_Memory);
    if ( (this->m_TeleportTargetList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<char const*,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_LogEntries.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_LogEntries.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<QuestLogEntry_t,int>::Purge(&this->m_LogEntries.m_Memory);
    if ( (this->m_LogEntries.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<QuestLogEntry_t,int>::Purge(&this->m_LogEntries.m_Memory);
  }
  v2 = (this->m_hRoquelairePerches.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hRoquelairePerches.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRoquelairePerches.m_Memory);
    if ( (this->m_hRoquelairePerches.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hRoquelairePerches.m_Memory);
  }
  CUtlVectorBase<NPCSpeechData_t,CUtlMemory<NPCSpeechData_t,int>>::RemoveAll(&this->m_DelayedSpeech);
  if ( (this->m_DelayedSpeech.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<NPCSpeechData_t,int>::Purge(&this->m_DelayedSpeech.m_Memory);
    if ( (this->m_DelayedSpeech.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<NPCSpeechData_t,int>::Purge(&this->m_DelayedSpeech.m_Memory);
  }
  CUtlVectorBase<ReactiveTipDescription_t,CUtlMemory<ReactiveTipDescription_t,int>>::RemoveAll(&this->m_ReactiveTips);
  if ( (this->m_ReactiveTips.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<ReactiveTipDescription_t,int>::Purge(&this->m_ReactiveTips.m_Memory);
    if ( (this->m_ReactiveTips.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<ReactiveTipDescription_t,int>::Purge(&this->m_ReactiveTips.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CDOTA_Tutorial::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 110, @0x0000000002728890, libserver.so)
void __fastcall CDOTA_Tutorial::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(CDOTA_Tutorial *const this)
{
  ;
}


// CDOTA_Tutorial::DoesGameSystemReallocate  (line 110, @0x00000000027288a0, libserver.so)
// globals: CDOTA_Tutorial::sm_Factory
bool __fastcall CDOTA_Tutorial::DoesGameSystemReallocate(const CDOTA_Tutorial *const this)
{
  return (*(CDOTA_Tutorial::sm_Factory->_vptr_IGameSystemFactory + 8))(CDOTA_Tutorial::sm_Factory);
}


// CDOTA_Tutorial::SetGameSystemGlobalPtrs  (line 110, @0x00000000027288c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CDOTA_Tutorial::sm_Factory
void __fastcall CDOTA_Tutorial::SetGameSystemGlobalPtrs(CDOTA_Tutorial *const this, void *pValue)
{
  if ( CDOTA_Tutorial::sm_Factory != 0 )
    (*(CDOTA_Tutorial::sm_Factory->_vptr_IGameSystemFactory + 7))(CDOTA_Tutorial::sm_Factory, pValue);
}


// CDOTA_Tutorial::SetTutorialState  (line 249, @0x000000000279f270, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetTutorialState(CDOTA_Tutorial *const this, DOTATutorial_State_t nState)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hData.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && nState != LODWORD(m_pInstance[16].m_pEntity) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(v5->m_pInstance, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(m_pInstance[16].m_pEntity) = nState;
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetTaskProgress  (line 251, @0x000000000279f310, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetTaskProgress(CDOTA_Tutorial *const this, int nProgress)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hData.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && HIDWORD(m_pInstance[16].m_pEntity) != nProgress )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(v5->m_pInstance, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          HIDWORD(m_pInstance[16].m_pEntity) = nProgress;
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetTaskSteps  (line 253, @0x000000000279f3b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetTaskSteps(CDOTA_Tutorial *const this, int nSteps)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hData.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && LODWORD(m_pInstance[16].m_hPrivateScope.m_hScope) != nSteps )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(v5->m_pInstance, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(m_pInstance[16].m_hPrivateScope.m_hScope) = nSteps;
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetTutorialUI  (line 257, @0x000000000274d600, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetTutorialUI(CDOTA_Tutorial *const this, int nUIState)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hData.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && LODWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_Id) != nUIState )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(v5->m_pInstance, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(m_pInstance[16].m_iszPrivateVScripts.u.m_Id) = nUIState;
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetTargetLocation  (line 259, @0x000000000279f450, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// callers: CDOTA_Tutorial::ParseLessonKeys
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetTargetLocation(CDOTA_Tutorial *const this, Vector vecLoc)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  vec_t *m_pInstance; // rbx
  vec_t z; // [rsp+4h] [rbp-2Ch]
  vec_t x; // [rsp+8h] [rbp-28h]
  vec_t y; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hData.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0
          && (vecLoc.x != m_pInstance[200] || vecLoc.y != m_pInstance[201] || vecLoc.z != m_pInstance[202]) )
        {
          z = vecLoc.z;
          x = vecLoc.x;
          y = vecLoc.y;
          (*(*m_pInstance + 176LL))(m_pInstance, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_pInstance[200] = x;
          m_pInstance[201] = y;
          m_pInstance[202] = z;
        }
      }
    }
  }
}


// CDOTA_Tutorial::SetItemGuide  (line 268, @0x000000000279f6e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: Msg, CDotaTutorialNetworker::SetItemGuide
// strings: "Build is %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetItemGuide(CDOTA_Tutorial *const this, const char *pszGuideName)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v7; // eax
  CDotaTutorialNetworker *m_pInstance; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hData.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        Msg("Build is %s\n", pszGuideName);
        v7 = this->m_hData.m_Index;
        m_pInstance = 0;
        if ( v7 + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[this->m_hData.m_Index & 0x1FF];
            if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
              m_pInstance = v10->m_pInstance;
          }
        }
        CDotaTutorialNetworker::SetItemGuide(m_pInstance, pszGuideName);
      }
    }
  }
}


// CDOTA_Tutorial::SetQuickBuy  (line 269, @0x000000000279f7c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDotaTutorialNetworker::SetQuickBuy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Tutorial::SetQuickBuy(CDOTA_Tutorial *const this, const char *pszItemName)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hData.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hData.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hData.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
        CDotaTutorialNetworker::SetQuickBuy(v4->m_pInstance, pszItemName);
    }
  }
}


