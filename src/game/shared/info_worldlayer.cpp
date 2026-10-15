// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/info_worldlayer.cpp:13
class C_CInfoWorldLayer_MapInstall {
	C_CInfoWorldLayer_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoWorldLayer::YouForgotToImplementOrDeclareServerClass  (line 13, @0x0000000001ecc040, libserver.so)
int __fastcall CInfoWorldLayer::YouForgotToImplementOrDeclareServerClass(CInfoWorldLayer *const this)
{
  return 0;
}


// CInfoWorldLayer::GetServerClass  (line 13, @0x0000000001ed1460, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoWorldLayer::GetServerClass(CInfoWorldLayer *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
      return CEntityClass::GetGameClass(m_pBaseClassInfo->m_pClass, 0);
  }
  return result;
}


// CInfoWorldLayer::CEntityInstanceEntityClass::InitOptionalTables  (line 16, @0x0000000001ee60b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// strings: "info_world_layer", "CInfoWorldLayer"
// globals: `guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass, CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo, CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo
bool __cdecl CInfoWorldLayer::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass) != 0 )
  {
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_designerName.u.m_Id = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass._vptr_CEntityClass = off_3F79390;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Size = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_requiredEHandle.m_Index = -1;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_hNetworkSerializer = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pBaseClassInfo = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pClassInfo = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_flags = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nAllHelpersFlags = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pScriptClassDesc = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pInputs = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nInputCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pOutputs = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_nOutputCount = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pGameClass = 0;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass._vptr_CEntityClass = off_3FBE570;
    __cxa_guard_release(&`guard variable for'CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass);
    __cxa_atexit(
      CInfoWorldLayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoWorldLayerClass == 0 )
  {
    if ( `guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo,
        "CInfoWorldLayer",
        "info_world_layer",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo);
    }
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pClassInfo = &CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pBaseClassInfo = CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo.m_pBaseClassInfo;
    g_pEntityCInfoWorldLayerClass = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
    CInfoWorldLayer::GetEntityClassInfo(void)::g_EntityCInfoWorldLayerClassInfo.m_pClass = &CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass;
    CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
    g_pEntityCInfoWorldLayerClass->m_pComponentOverrides = 0;
  }
  CInfoWorldLayer::GetEntityClassInternal(void)::g_EntityCInfoWorldLayerClass.m_flags |= 0x80u;
  return 1;
}


// CInfoWorldLayer::GetDataDescMap  (line 23, @0x0000000001ecc050, libserver.so)
// globals: CInfoWorldLayer::m_DataMap
datamap_t *__fastcall CInfoWorldLayer::GetDataDescMap(CInfoWorldLayer *const this)
{
  return &CInfoWorldLayer::m_DataMap;
}


// CInfoWorldLayer::AddDatadescMetadataKeys  (line 23, @0x0000000001ede060, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoWorldLayer::GetEntityClass(void)
void __fastcall CInfoWorldLayer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoWorldLayer::GetEntityClass);
}


// CInfoWorldLayer::GetBaseMap  (line 23, @0x0000000001ede080, libserver.so)
datamap_t *__cdecl CInfoWorldLayer::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CInfoWorldLayer>  (line 23, @0x0000000001ede090, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CInfoWorldLayer"
// globals: `guard variable for'DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder, `guard variable for'DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc, CInfoWorldLayer::GetEntityClass(void), CInfoWorldLayer::m_DataMap, DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_pszBase = "CInfoWorldLayer";
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::nameHolder,
      &_dso_handle);
  }
  CInfoWorldLayer::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc) != 0 )
  {
    DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc);
  }
  CInfoWorldLayer::m_DataMap.dataNumFields = 13;
  CInfoWorldLayer::m_DataMap.dataDesc = &DataMapInit<CInfoWorldLayer>(CInfoWorldLayer *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoWorldLayer::m_DataMap, CInfoWorldLayer::GetEntityClass);
  return &CInfoWorldLayer::m_DataMap;
}


// CInfoWorldLayer::CInfoWorldLayer  (line 46, @0x0000000001ede1b0, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<bool>
// calls: CBaseEntity::CBaseEntity
// callers: CInfoWorldLayer::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CInfoWorldLayer::CInfoWorldLayer(CInfoWorldLayer *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_worldName.m_Value.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_3FBE5F0;
  this->m_pOutputOnEntitiesSpawned._vptr_CEntityIOOutput = off_3F7C190;
  this->m_layerName.m_Value.u.m_Id = 0;
  this->m_bWorldLayerVisible.m_Value = 0;
  this->m_bEntitiesSpawned.m_Value = 0;
  this->m_bCreateAsChildSpawnGroup = 0;
  this->m_hLayerSpawnGroup = 0;
}


// CInfoWorldLayer::~CInfoWorldLayer  (line 61, @0x0000000001ecc150, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoWorldLayer::~CInfoWorldLayer(CInfoWorldLayer *const this)
{
  this->_vptr_IHandleEntity = &off_3FBE5F0;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoWorldLayer::~CInfoWorldLayer  (line 61, @0x0000000001ecc170, libserver.so)  // inlines: ~CInfoWorldLayer
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoWorldLayer::~CInfoWorldLayer(CInfoWorldLayer *const this)
{
  this->_vptr_IHandleEntity = &off_3FBE5F0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoWorldLayer::Spawn  (line 69, @0x0000000001ede650, libserver.so)
// calls: CBaseEntity::Spawn, CInfoWorldLayer::SetLayerVisibility, CInfoWorldLayer::SpawnLayerEntityLump
void __fastcall CInfoWorldLayer::Spawn(CInfoWorldLayer *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    CInfoWorldLayer::SetLayerVisibility(this, 1);
    CInfoWorldLayer::SpawnLayerEntityLump(this);
  }
}


// CInfoWorldLayer::UpdateOnRemove  (line 99, @0x0000000001ede320, libserver.so)
// calls: CBaseEntity::UpdateOnRemove, CInfoWorldLayer::DeleteLayerSpawnGroup
void __fastcall CInfoWorldLayer::UpdateOnRemove(CInfoWorldLayer *const this)
{
  CBaseEntity::UpdateOnRemove(this);
  CInfoWorldLayer::DeleteLayerSpawnGroup(this);
}


// CInfoWorldLayer::Precache  (line 110, @0x0000000001ee9f50, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, __stack_chk_fail
// strings: "defaultSession"
void __fastcall CInfoWorldLayer::Precache(CInfoWorldLayer *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdx
  const char *v5; // rcx
  char pLumpResourceName[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v7; // [rsp+218h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  CEntityInstance::Precache(this, pContext);
  m_pAsString = "";
  if ( this->m_worldName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_worldName.m_Value.u.m_pAsString;
  v5 = "";
  if ( this->m_layerName.m_Value.u.m_Id != 0 )
    v5 = this->m_layerName.m_Value.u.m_pAsString;
  (*(*pContext->m_pManifest + 24LL))(
    pContext->m_pManifest,
    "defaultSession",
    m_pAsString,
    v5,
    0,
    pLumpResourceName,
    512);
  (**pContext->m_pManifest)(pContext->m_pManifest, pLumpResourceName);
}


// CInfoWorldLayer::GetEntityLumpForLayer  (line 127, @0x0000000001ede220, libserver.so)  // inlines: String, ToCStr
// callers: CInfoWorldLayer::SpawnLayerEntityLump
const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *__fastcall CInfoWorldLayer::GetEntityLumpForLayer(
        const CInfoWorldLayer *const this,
        bool bLoadLump)
{
  const char *m_pAsString; // rdx
  const char *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rax

  m_pAsString = "";
  if ( this->m_worldName.m_Value.u.m_Id != 0 )
    m_pAsString = this->m_worldName.m_Value.u.m_pAsString;
  v3 = "";
  if ( this->m_layerName.m_Value.u.m_Id != 0 )
    v3 = this->m_layerName.m_Value.u.m_pAsString;
  if ( *v3 != 0
    && *m_pAsString != 0
    && ((v4 = (*(*g_pWorldRendererMgr + 160LL))(g_pWorldRendererMgr, this->m_worldGroupId.m_nHashCode)) & 0x80000000) == 0
    && (v5 = (*(*g_pWorldRendererMgr + 136LL))(g_pWorldRendererMgr, v4)) != 0 )
  {
    return (*(*v5 + 128LL))(v5, v3);
  }
  else
  {
    return 0;
  }
}


// CInfoWorldLayer::DeleteLayerSpawnGroup  (line 158, @0x0000000001ede2c0, libserver.so)
// calls: CEntityInstance::IsAuthoritative
// callers: CInfoWorldLayer::UpdateOnRemove, CInfoWorldLayer::DestroyEntities, CInfoWorldLayer::HideWorldLayerAndDestroyEntities
void __fastcall CInfoWorldLayer::DeleteLayerSpawnGroup(CInfoWorldLayer *const this)
{
  __int64 m_hLayerSpawnGroup; // rsi

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_hLayerSpawnGroup = this->m_hLayerSpawnGroup;
    if ( m_hLayerSpawnGroup != 0 )
    {
      (*(*engine + 448LL))(engine, m_hLayerSpawnGroup, 0);
      this->m_hLayerSpawnGroup = 0;
    }
  }
}


// CInfoWorldLayer::SpawnLayerEntityLump  (line 174, @0x0000000001ede350, libserver.so)  // inlines: CUtlDelegate<CInfoWorldLayer, CInfoWorldLayer>, CUtlStringToken, Convert<CInfoWorldLayer, void (CInfoWorldLayer::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, FastDelegate2<CInfoWorldLayer, CInfoWorldLayer>, GetSpawnGroupHandle, SetToIdentity, SpawnGroupDesc_t, String, ToCStr, UtlMakeDelegate<CInfoWorldLayer, CInfoWorldLayer, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CInfoWorldLayer, void (CInfoWorldLayer::*)(unsigned int, const CUtlVector<CEntityHandle>&)>
// calls: CEntityInstance::IsAuthoritative, CInfoWorldLayer::GetEntityLumpForLayer, SetIdentityMatrix, CSpawnGroupMgrGameSystem::AddChildSpawnGroup, CGameEntitySystem::ListenForSpawnGroupToFinish
// callers: CInfoWorldLayer::SpawnEntities, CInfoWorldLayer::Spawn, CInfoWorldLayer::ShowWorldLayerAndSpawnEntities
// globals: CInfoWorldLayer::SpawnGroupCreationComplete(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
void __fastcall CInfoWorldLayer::SpawnLayerEntityLump(CInfoWorldLayer *const this)
{
  const char *m_pAsString; // rax
  bool v3; // zf
  const char *v4; // rax
  __int64 v5; // rax
  SpawnGroupHandle_t v6; // eax
  SpawnGroupHandle_t m_hLayerSpawnGroup; // esi
  CEntityIdentity *m_pEntity; // rdx
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  SpawnGroupCompletionDelegate_t v10; // [rsp+0h] [rbp-E0h]
  SpawnGroupDesc_t desc; // [rsp+20h] [rbp-C0h] BYREF

  if ( CEntityInstance::IsAuthoritative(this)
    && this->m_hLayerSpawnGroup == 0
    && CInfoWorldLayer::GetEntityLumpForLayer(this, 0) != 0 )
  {
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 0;
    desc.m_bDontSpawnEntities = 0;
    memset(&desc.m_pWorldName, 0, 72);
    desc.m_iPriorityLoader = -2;
    desc.m_manifestLoadPriority = ResourceManifestLoadPriority_t::RESOURCE_MANIFEST_LOAD_PRIORITY_DEFAULT;
    desc.m_flTimeoutInterval = 0.0;
    desc.m_pSaveFileName = 0;
    desc.m_bBlockUntilLoaded = 0;
    desc.m_bLoadStreamingData = 1;
    desc.m_bCreateNewSceneWorld = 0;
    desc.m_bManualCompletion = 0;
    desc.m_bSetActivePostLoad = 0;
    SetIdentityMatrix(&desc.m_vecWorldOffset);
    m_pAsString = "";
    if ( this->m_worldName.m_Value.u.m_Id != 0 )
      m_pAsString = this->m_worldName.m_Value.u.m_pAsString;
    v3 = this->m_layerName.m_Value.u.m_Id == 0;
    desc.m_pWorldName = m_pAsString;
    v4 = "";
    if ( !v3 )
      v4 = this->m_layerName.m_Value.u.m_pAsString;
    desc.m_pEntityLumpName = v4;
    desc.m_pDescriptiveName = "world_layer";
    desc.m_pEntityFilterName = 0;
    desc.m_flTimeoutInterval = 60.0;
    desc.m_hOwner = 0;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 1;
    desc.m_pParentNameFixup = 0;
    desc.m_pLocalNameFixup = 0;
    *&desc.m_vecWorldOffset.m_flMatVal[0][0] = *&g_MatrixIdentity.m_flMatVal[0][0];
    *&desc.m_vecWorldOffset.m_flMatVal[0][2] = *&g_MatrixIdentity.m_flMatVal[0][2];
    *&desc.m_vecWorldOffset.m_flMatVal[1][0] = *&g_MatrixIdentity.m_flMatVal[1][0];
    v5 = *&g_MatrixIdentity.m_flMatVal[2][2];
    *&desc.m_vecWorldOffset.m_flMatVal[2][0] = *&g_MatrixIdentity.m_flMatVal[2][0];
    *&desc.m_vecWorldOffset.m_flMatVal[2][2] = v5;
    v6 = (*(*engine + 456LL))(engine, &desc);
    v3 = !this->m_bCreateAsChildSpawnGroup;
    this->m_hLayerSpawnGroup = v6;
    m_hLayerSpawnGroup = v6;
    if ( !v3 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
        m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
      else
        m_hSpawnGroup = 0;
      CSpawnGroupMgrGameSystem::AddChildSpawnGroup(g_pSpawnGroupMgr, m_hSpawnGroup, v6);
      m_hLayerSpawnGroup = this->m_hLayerSpawnGroup;
    }
    v10.m_Closure.m_pthis = this;
    v10.m_Closure.m_pFunction.__pfn = CInfoWorldLayer::SpawnGroupCreationComplete;
    v10.m_Closure.m_pFunction.__delta = 0;
    CGameEntitySystem::ListenForSpawnGroupToFinish(g_pGameEntitySystem, m_hLayerSpawnGroup, this, v10);
    (*(*engine + 496LL))(engine, this->m_hLayerSpawnGroup);
  }
}


// CInfoWorldLayer::SpawnGroupCreationComplete  (line 215, @0x0000000001ee10f0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityInstance::IsAuthoritative, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CInfoWorldLayer::SpawnGroupCreationComplete(
        CInfoWorldLayer *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const entities)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_pOutputOnEntitiesSpawned, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CInfoWorldLayer::SetLayerVisibility  (line 228, @0x0000000001ede5b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CEntityInstance::IsAuthoritative
// callers: CInfoWorldLayer::ShowWorldLayer, CInfoWorldLayer::HideWorldLayer, CInfoWorldLayer::HideWorldLayerAndDestroyEntities, CInfoWorldLayer::Spawn, CInfoWorldLayer::ShowWorldLayerAndSpawnEntities
void __fastcall CInfoWorldLayer::SetLayerVisibility(CInfoWorldLayer *const this, bool bVisible)
{
  if ( CEntityInstance::IsAuthoritative(this) && bVisible != this->m_bWorldLayerVisible.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bWorldLayerVisible.m_Value = bVisible;
  }
}


// CInfoWorldLayer::ShowWorldLayer  (line 258, @0x0000000001ede600, libserver.so)
// calls: CInfoWorldLayer::SetLayerVisibility
void __fastcall CInfoWorldLayer::ShowWorldLayer(CInfoWorldLayer *const this, inputdata_t *const inputdata)
{
  CInfoWorldLayer::SetLayerVisibility(this, 1);
}


// CInfoWorldLayer::HideWorldLayer  (line 267, @0x0000000001ede610, libserver.so)
// calls: CInfoWorldLayer::SetLayerVisibility
void __fastcall CInfoWorldLayer::HideWorldLayer(CInfoWorldLayer *const this, inputdata_t *const inputData)
{
  CInfoWorldLayer::SetLayerVisibility(this, 0);
}


// CInfoWorldLayer::SpawnEntities  (line 276, @0x0000000001ede5a0, libserver.so)
// calls: CInfoWorldLayer::SpawnLayerEntityLump
void __fastcall CInfoWorldLayer::SpawnEntities(CInfoWorldLayer *const this, inputdata_t *const inputdata)
{
  CInfoWorldLayer::SpawnLayerEntityLump(this);
}


// CInfoWorldLayer::DestroyEntities  (line 285, @0x0000000001ede340, libserver.so)
// calls: CInfoWorldLayer::DeleteLayerSpawnGroup
void __fastcall CInfoWorldLayer::DestroyEntities(CInfoWorldLayer *const this, inputdata_t *const inputdata)
{
  CInfoWorldLayer::DeleteLayerSpawnGroup(this);
}


// CInfoWorldLayer::ShowWorldLayerAndSpawnEntities  (line 294, @0x0000000001ede6a0, libserver.so)
// calls: CInfoWorldLayer::SpawnLayerEntityLump, CInfoWorldLayer::SetLayerVisibility
void __fastcall CInfoWorldLayer::ShowWorldLayerAndSpawnEntities(
        CInfoWorldLayer *const this,
        inputdata_t *const inputData)
{
  CInfoWorldLayer::SpawnLayerEntityLump(this);
  CInfoWorldLayer::SetLayerVisibility(this, 1);
}


// CInfoWorldLayer::HideWorldLayerAndDestroyEntities  (line 304, @0x0000000001ede620, libserver.so)
// calls: CInfoWorldLayer::DeleteLayerSpawnGroup, CInfoWorldLayer::SetLayerVisibility
void __fastcall CInfoWorldLayer::HideWorldLayerAndDestroyEntities(
        CInfoWorldLayer *const this,
        inputdata_t *const inputData)
{
  CInfoWorldLayer::DeleteLayerSpawnGroup(this);
  CInfoWorldLayer::SetLayerVisibility(this, 0);
}


