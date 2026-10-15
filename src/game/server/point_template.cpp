
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointTemplate::CEntityInstanceEntityClass::InitOptionalTables  (line 37, @0x0000000002334070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, SetClassInfo, SetFlag, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPointTemplate::InitScriptDesc, CPointTemplate::SetupEntClassInputs, CPointTemplate::SetupEntClassComponentOverrides, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CServerOnlyEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort (13 total)
// strings: "point_template", "CPointTemplate", "CLogicalEntity"
// globals: `guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass, CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo, CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo, `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo (9 total)
bool __cdecl CPointTemplate::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass) != 0 )
  {
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_designerName.u.m_Id = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass._vptr_CEntityClass = off_3F79390;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Size = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_requiredEHandle.m_Index = -1;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_hNetworkSerializer = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pBaseClassInfo = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pClassInfo = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_flags = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nAllHelpersFlags = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pScriptClassDesc = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pInputs = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nInputCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pOutputs = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_nOutputCount = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pGameClass = 0;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass._vptr_CEntityClass = off_3FDFF50;
    __cxa_guard_release(&`guard variable for'CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass);
    __cxa_atexit(
      CPointTemplate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointTemplateClass == 0 )
  {
    if ( `guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo) != 0 )
    {
      if ( `guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo) != 0 )
      {
        EntityClassInfo = CServerOnlyEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo,
          "CLogicalEntity",
          0,
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo,
        "CPointTemplate",
        "point_template",
        0,
        &CLogicalEntity::GetEntityClassInfo(void)::g_EntityCLogicalEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo);
    }
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pClassInfo = &CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pBaseClassInfo = CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo.m_pBaseClassInfo;
    g_pEntityCPointTemplateClass = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
    CPointTemplate::GetEntityClassInfo(void)::g_EntityCPointTemplateClassInfo.m_pClass = &CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass;
    CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_pScriptClassDesc = CPointTemplate::InitScriptDesc();
    CPointTemplate::SetupEntClassInputs(g_pEntityCPointTemplateClass);
    CPointTemplate::SetupEntClassComponentOverrides(g_pEntityCPointTemplateClass);
  }
  CPointTemplate::GetEntityClassInternal(void)::g_EntityCPointTemplateClass.m_flags |= 0x80u;
  return 1;
}


// CPointTemplate::GetDataDescMap  (line 44, @0x000000000231ecc0, libserver.so)
// globals: CPointTemplate::m_DataMap
datamap_t *__fastcall CPointTemplate::GetDataDescMap(CPointTemplate *const this)
{
  return &CPointTemplate::m_DataMap;
}


// CPointTemplate::AddDatadescMetadataKeys  (line 44, @0x0000000002329cf0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointTemplate::GetEntityClass(void)
void __fastcall CPointTemplate::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointTemplate::GetEntityClass);
}


// CPointTemplate::GetBaseMap  (line 44, @0x0000000002329d10, libserver.so)
datamap_t *__cdecl CPointTemplate::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPointTemplate>  (line 44, @0x0000000002329d20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointTemplate"
// globals: `guard variable for'DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder, `guard variable for'DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc, CPointTemplate::GetEntityClass(void), CPointTemplate::m_DataMap, DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointTemplate>(CPointTemplate *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder) != 0 )
  {
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_pszBase = "CPointTemplate";
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointTemplate>(CPointTemplate *)::nameHolder,
      &_dso_handle);
  }
  CPointTemplate::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc) != 0 )
  {
    DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc);
  }
  CPointTemplate::m_DataMap.dataNumFields = 14;
  CPointTemplate::m_DataMap.dataDesc = &DataMapInit<CPointTemplate>(CPointTemplate *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointTemplate::m_DataMap, CPointTemplate::GetEntityClass);
  return &CPointTemplate::m_DataMap;
}


// CPointTemplate::CPointTemplate  (line 75, @0x0000000002329e40, libserver.so)  // inlines: CEntityIOOutput, CLogicalEntity, CServerOnlyEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase
// calls: CBaseEntity::CBaseEntity
// callers: CPointTemplate::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointTemplate::CPointTemplate(CPointTemplate *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_iszWorldName.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_408FB70;
  this->m_iszSource2EntityLumpName.u.m_Id = 0;
  this->m_iszEntityFilterName.u.m_Id = 0;
  this->m_bAsynchronouslySpawnEntities = 0;
  this->m_pOutputOnSpawned._vptr_CEntityIOOutput = off_3F7C190;
  this->m_createdSpawnGroupHandles.m_Size = 0;
  this->m_createdSpawnGroupHandles.m_Memory.m_pMemory = 0;
  this->m_createdSpawnGroupHandles.m_Memory.m_nAllocationCount = 0;
  this->m_createdSpawnGroupHandles.m_Memory.m_nGrowSize = 0;
  this->m_SpawnedEntityHandles.m_Size = 0;
  this->m_SpawnedEntityHandles.m_Memory.m_pMemory = 0;
  this->m_SpawnedEntityHandles.m_Memory.m_nAllocationCount = 0;
  this->m_SpawnedEntityHandles.m_Memory.m_nGrowSize = 0;
  this->m_ownerSpawnGroupType = PointTemplateOwnerSpawnGroupType_t::INSERT_INTO_POINT_TEMPLATE_SPAWN_GROUP;
  this->m_flTimeoutInterval = 0.0;
  this->m_clientOnlyEntityBehavior = PointTemplateClientOnlyEntityBehavior_t::CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY;
  this->m_ScriptSpawnCallback = 0;
  this->m_ScriptCallbackScope = 0;
}


// CPointTemplate::~CPointTemplate  (line 84, @0x0000000002320070, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CEntityHandle, int>::Purge, CUtlMemory<unsigned int, int>::Purge
// callers: CPointTemplate::~CPointTemplate
void __fastcall CPointTemplate::~CPointTemplate(CPointTemplate *const this)
{
  bool v2; // zf
  CUtlMemory<CEntityHandle,int> *p_m_Memory; // r12

  v2 = (this->m_SpawnedEntityHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_408FB70;
  this->m_SpawnedEntityHandles.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_SpawnedEntityHandles.m_Memory;
    CUtlMemory<CEntityHandle,int>::Purge(&this->m_SpawnedEntityHandles.m_Memory);
    if ( (this->m_SpawnedEntityHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityHandle,int>::Purge(p_m_Memory);
  }
  v2 = (this->m_createdSpawnGroupHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_createdSpawnGroupHandles.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<unsigned int,int>::Purge(&this->m_createdSpawnGroupHandles.m_Memory);
    if ( (this->m_createdSpawnGroupHandles.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<unsigned int,int>::Purge(&this->m_createdSpawnGroupHandles.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPointTemplate::~CPointTemplate  (line 84, @0x0000000002320120, libserver.so)
// calls: CPointTemplate::~CPointTemplate, CBaseEntity::operator delete
void __fastcall CPointTemplate::~CPointTemplate(CPointTemplate *const this)
{
  CPointTemplate::~CPointTemplate(this);
  CBaseEntity::operator delete(this);
}


// CPointTemplate::Spawn  (line 91, @0x000000000231f170, libserver.so)
// calls: CLogicalEntity::Spawn, CEntityInstance::ValidatePrivateScriptScope
void __fastcall CPointTemplate::Spawn(CPointTemplate *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // zf

  CLogicalEntity::Spawn(this, pKeyValues);
  CEntityInstance::ValidatePrivateScriptScope(this);
  if ( this->m_flTimeoutInterval <= 0.0 )
  {
    v3 = this->m_clientOnlyEntityBehavior == PointTemplateClientOnlyEntityBehavior_t::CREATE_FOR_CLIENTS_WHO_CONNECT_LATER;
    this->m_flTimeoutInterval = 60.0;
    if ( !v3 )
      return;
  }
  else if ( this->m_clientOnlyEntityBehavior != PointTemplateClientOnlyEntityBehavior_t::CREATE_FOR_CLIENTS_WHO_CONNECT_LATER )
  {
    return;
  }
  if ( (*(this->_vptr_IHandleEntity + 207))(this) != 2 )
    this->m_clientOnlyEntityBehavior = PointTemplateClientOnlyEntityBehavior_t::CREATE_FOR_CURRENTLY_CONNECTED_CLIENTS_ONLY;
}


// CPointTemplate::UpdateOnRemove  (line 114, @0x000000000232a0b0, libserver.so)
// calls: CBaseEntity::UpdateOnRemove, CPointTemplate::DeleteCreatedSpawnGroups
void __fastcall CPointTemplate::UpdateOnRemove(CPointTemplate *const this)
{
  CBaseEntity::UpdateOnRemove(this);
  CPointTemplate::DeleteCreatedSpawnGroups(this);
}


// CPointTemplate::Precache  (line 126, @0x000000000231fea0, libserver.so)  // inlines: String, ToCStr
// calls: __stack_chk_fail
// callers: CPointTemplate::Precache
// strings: "defaultSession"
void __fastcall CPointTemplate::Precache(CPointTemplate *const this, const CEntityPrecacheContext *pContext)
{
  IEntityResourceManifest *m_pManifest; // rdi
  const char *m_pAsString; // r8
  const char *v6; // rcx
  UtlSymLargeId_t m_Id; // rax
  const char *v8; // rdx
  char pEntityLumpResourceName[520]; // [rsp+10h] [rbp-220h] BYREF
  unsigned __int64 v10; // [rsp+218h] [rbp-18h]

  m_pManifest = pContext->m_pManifest;
  v10 = __readfsqword(0x28u);
  m_pAsString = this->m_iszEntityFilterName.u.m_pAsString;
  v6 = this->m_iszSource2EntityLumpName.u.m_pAsString;
  m_Id = this->m_iszWorldName.u.m_Id;
  v8 = "";
  if ( m_pAsString == 0 )
    m_pAsString = "";
  if ( v6 == 0 )
    v6 = "";
  if ( m_Id != 0 )
    v8 = m_Id;
  (*(*m_pManifest + 24LL))(m_pManifest, "defaultSession", v8, v6, m_pAsString, pEntityLumpResourceName, 512);
  (**pContext->m_pManifest)(pContext->m_pManifest, pEntityLumpResourceName);
}


// CPointTemplate::Precache  (line 126, @0x0000000002339620, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CPointTemplate::Precache
void __fastcall CPointTemplate::Precache(CPointTemplate *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( !this->m_bAsynchronouslySpawnEntities || (*(this->_vptr_IHandleEntity + 208))(this) != 0 )
    CPointTemplate::Precache(this, pContext);
}


// CPointTemplate::GetEntityLumpForTemplate  (line 167, @0x0000000002329f20, libserver.so)  // inlines: String, ToCStr
// callers: CPointTemplate::CreateInstance
// strings: "defaultSession"
const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *__fastcall CPointTemplate::GetEntityLumpForTemplate(
        const CPointTemplate *const this,
        bool bLoadLump)
{
  const char *m_pAsString; // rcx
  const char *v3; // r8

  m_pAsString = "";
  if ( this->m_iszWorldName.u.m_Id != 0 )
    m_pAsString = this->m_iszWorldName.u.m_pAsString;
  v3 = "";
  if ( this->m_iszSource2EntityLumpName.u.m_Id != 0 )
    v3 = this->m_iszSource2EntityLumpName.u.m_pAsString;
  return (*(*g_pSource2Engine + 112LL))(g_pSource2Engine, "defaultSession", bLoadLump, m_pAsString, v3, 0);
}


// CPointTemplate::ListenForSpawnGroupToFinish  (line 175, @0x0000000002329f80, libserver.so)  // inlines: CUtlDelegate<CPointTemplate, CPointTemplate>, Convert<CPointTemplate, void (CPointTemplate::*)(unsigned int, const CUtlVector<CEntityHandle>&), void (detail::GenericClass::*)()>, FastDelegate2<CPointTemplate, CPointTemplate>, UtlMakeDelegate<CPointTemplate, CPointTemplate, unsigned int, const CUtlVector<CEntityHandle>&, void>, bindmemfunc<CPointTemplate, void (CPointTemplate::*)(unsigned int, const CUtlVector<CEntityHandle>&)>
// calls: CGameEntitySystem::ListenForSpawnGroupToFinish
// callers: CreateInstanceFromLump
// globals: CPointTemplate::CreationComplete(uint,CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int>> const&)
void __fastcall CPointTemplate::ListenForSpawnGroupToFinish(
        CPointTemplate *const this,
        SpawnGroupHandle_t nSpawnGroupHandle)
{
  __int64 v2[4]; // [rsp+0h] [rbp-20h] BYREF

  v2[1] = CPointTemplate::CreationComplete;
  v2[0] = this;
  v2[2] = 0;
  CGameEntitySystem::ListenForSpawnGroupToFinish(g_pGameEntitySystem, nSpawnGroupHandle, this, v2);
}


// CPointTemplate::AddCreatedSpawnGroupHandle  (line 180, @0x0000000002333860, libserver.so)  // inlines: AddToTail, CopyConstruct<unsigned int>, Element, GrowMemory, operator[]
// calls: CUtlMemory<unsigned int, int>::Grow
void __fastcall CPointTemplate::AddCreatedSpawnGroupHandle(
        CPointTemplate *const this,
        SpawnGroupHandle_t nSpawnGroupHandle)
{
  __int64 m_Size; // r12
  int v5; // eax
  unsigned int *v6; // rax

  m_Size = this->m_createdSpawnGroupHandles.m_Size;
  v5 = this->m_createdSpawnGroupHandles.m_Size;
  if ( m_Size == this->m_createdSpawnGroupHandles.m_Memory.m_nAllocationCount )
  {
    CUtlMemory<unsigned int,int>::Grow(&this->m_createdSpawnGroupHandles.m_Memory, 1);
    v5 = this->m_createdSpawnGroupHandles.m_Size;
  }
  this->m_createdSpawnGroupHandles.m_Size = v5 + 1;
  v6 = &this->m_createdSpawnGroupHandles.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = nSpawnGroupHandle;
}


// CPointTemplate::CreateInstance  (line 193, @0x0000000002333680, libserver.so)  // inlines: CUtlDelegate, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, FastDelegate2, GetSpawnFlags, GetSpawnGroupHandle, SetMementoFrom, String, ToCStr
// calls: CPointTemplate::GetEntityLumpForTemplate, CreateInstanceFromLump
// callers: CEnvEntityMaker::SpawnEntity, CPointTemplate::ForceSpawn
__int64 __fastcall CPointTemplate::CreateInstance(
        CPointTemplate *const this,
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        CBaseEntity *pListener,
        __int64 a5)
{
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *EntityLumpForTemplate; // rax
  const char *m_pAsString; // r8
  void (*v10)(detail::GenericClass *); // rax
  bool v11; // zf
  float m_flTimeoutInterval; // xmm0_4
  const char *pchSource2EntityLumpName; // r15
  const char *pchWorldName; // r14
  CEntityIdentity *m_pEntity; // rax
  PointTemplateClientOnlyEntityBehavior_t nClientOnlyEntityBehavior; // r12d
  SpawnGroupHandle_t m_hSpawnGroup; // r9d
  PointTemplateOwnerSpawnGroupType_t v18; // eax
  char *pchEntityFilterName; // [rsp+50h] [rbp-80h]
  SpawnGroupHandle_t nSpawnGroupHandle; // [rsp+58h] [rbp-78h]
  bool bAsynchronouslySpawnEntities; // [rsp+5Ch] [rbp-74h]
  float flTimeoutInterval; // [rsp+70h] [rbp-60h]
  unsigned int nSpawnFlags; // [rsp+74h] [rbp-5Ch]
  const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pLumpEntities; // [rsp+78h] [rbp-58h]
  SpawnGroupCompletionDelegate_t p_completionDelegate; // [rsp+80h] [rbp-50h] BYREF

  EntityLumpForTemplate = CPointTemplate::GetEntityLumpForTemplate(this, 0);
  m_pAsString = "";
  pLumpEntities = EntityLumpForTemplate;
  v10 = *(a5 + 8);
  v11 = this->m_iszEntityFilterName.u.m_Id == 0;
  m_flTimeoutInterval = this->m_flTimeoutInterval;
  p_completionDelegate.m_Closure.m_pFunction.__delta = *(a5 + 16);
  p_completionDelegate.m_Closure.m_pFunction.__pfn = v10;
  p_completionDelegate.m_Closure.m_pthis = *a5;
  if ( !v11 )
    m_pAsString = this->m_iszEntityFilterName.u.m_pAsString;
  pchSource2EntityLumpName = "";
  if ( this->m_iszSource2EntityLumpName.u.m_Id != 0 )
    pchSource2EntityLumpName = this->m_iszSource2EntityLumpName.u.m_pAsString;
  pchWorldName = "";
  if ( this->m_iszWorldName.u.m_Id != 0 )
    pchWorldName = this->m_iszWorldName.u.m_pAsString;
  m_pEntity = this->m_pEntity;
  nClientOnlyEntityBehavior = this->m_clientOnlyEntityBehavior;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  nSpawnGroupHandle = m_hSpawnGroup;
  pchEntityFilterName = m_pAsString;
  bAsynchronouslySpawnEntities = this->m_bAsynchronouslySpawnEntities;
  flTimeoutInterval = m_flTimeoutInterval;
  nSpawnFlags = this->m_spawnflags.m_Value;
  v18 = (*(this->_vptr_IHandleEntity + 207))(this);
  return CreateInstanceFromLump(
           vecOrigin,
           vecAngles,
           pLumpEntities,
           v18,
           nSpawnFlags,
           nSpawnGroupHandle,
           flTimeoutInterval,
           bAsynchronouslySpawnEntities,
           nClientOnlyEntityBehavior,
           pchWorldName,
           pchSource2EntityLumpName,
           pchEntityFilterName,
           pListener,
           &p_completionDelegate,
           this,
           -1);
}


// GetNextUniqueTemplateInstanceId  (line 207, @0x0000000002329fc0, libserver.so)
// globals: GetNextUniqueTemplateInstanceId(void)::s_iUniqueTemplateInstance
int __cdecl GetNextUniqueTemplateInstanceId()
{
  return ++GetNextUniqueTemplateInstanceId(void)::s_iUniqueTemplateInstance;
}


// CPointTemplate::CreationComplete  (line 218, @0x00000000023393e0, libserver.so)  // inlines: AddMultipleToTail, CEntityHandle, CVariantBase, Call<HSCRIPT__*>, Construct<CEntityHandle>, CopyConstruct<CEntityHandle>, FireOutput, Free, GrowMemory, GrowVector, InsertMultipleBefore, ShiftElementsRight, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CPointTemplate::ScriptGetSpawnedEntities, CUtlMemory<CEntityHandle, int>::Grow, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPointTemplate::CreationComplete(
        CPointTemplate *const this,
        SpawnGroupHandle_t hSpawnGroup,
        const CUtlVector<CEntityHandle,CUtlMemory<CEntityHandle,int> > *const entities)
{
  int m_Size; // r12d
  CEntityHandle *m_pMemory; // r13
  int v6; // r14d
  HSCRIPT m_ScriptCallbackScope; // r9
  HSCRIPT m_ScriptSpawnCallback; // rsi
  int m_nAllocationCount; // eax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 i; // rax
  CEntityHandle *v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  CEntityHandle *v16; // rcx
  CVariant value; // [rsp+10h] [rbp-40h] BYREF

  m_Size = entities->m_Size;
  m_pMemory = entities->m_Memory.m_pMemory;
  v6 = this->m_SpawnedEntityHandles.m_Size;
  if ( entities->m_Size != 0 )
  {
    m_nAllocationCount = this->m_SpawnedEntityHandles.m_Memory.m_nAllocationCount;
    v10 = m_Size + v6;
    if ( m_Size + v6 > m_nAllocationCount )
      CUtlMemory<CEntityHandle,int>::Grow(&this->m_SpawnedEntityHandles.m_Memory, v10 - m_nAllocationCount);
    this->m_SpawnedEntityHandles.m_Size = v10;
    if ( m_pMemory != 0 )
    {
      v11 = 0;
      for ( i = v6; m_Size > v11; ++i )
      {
        v13 = &this->m_SpawnedEntityHandles.m_Memory.m_pMemory[i];
        if ( v13 != 0 )
          v13->m_Index = m_pMemory[v11];
        ++v11;
      }
    }
    else if ( m_Size > 0 )
    {
      v14 = 0;
      v15 = v6;
      do
      {
        v16 = &this->m_SpawnedEntityHandles.m_Memory.m_pMemory[v15];
        if ( v16 != 0 )
          v16->m_Index = -1;
        ++v14;
        ++v15;
      }
      while ( m_Size > v14 );
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_pOutputOnSpawned, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  if ( this->m_ScriptSpawnCallback != 0 && this->m_ScriptCallbackScope != 0 )
  {
    value.m_uint64 = CPointTemplate::ScriptGetSpawnedEntities(this);
    m_ScriptCallbackScope = this->m_ScriptCallbackScope;
    value.m_flags = 0;
    m_ScriptSpawnCallback = this->m_ScriptSpawnCallback;
    value.m_type = 31;
    (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_ScriptSpawnCallback, &value, 1, 0, m_ScriptCallbackScope, 1);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CPointTemplate::ScriptGetSpawnedEntities  (line 235, @0x000000000232eb90, libserver.so)  // inlines: AssignTo, CVariantBase, EntityToHScript, Free, Get, Get<HSCRIPT__*>, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, VariantFieldTypeName, Warning, CEntityInstance::CreatePublicScriptScope, _Unwind_Resume
// callers: CPointTemplate::CreationComplete
// strings: "No free conversion of %s variant to HSCRIPT right now\n"
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CPointTemplate::ScriptGetSpawnedEntities(const CPointTemplate *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CEntityHandle *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r15
  IScriptVM *v10; // rdi
  void (__fastcall *v11)(IScriptVM *, uint64, HSCRIPT *); // r14
  HSCRIPT m_hScope; // rax
  HSCRIPT m_uint64; // rbx
  const char *v15; // rax
  ScriptVariant_t returnArray; // [rsp+10h] [rbp-50h] BYREF
  HSCRIPT v17; // [rsp+20h] [rbp-40h] BYREF
  __int16 v18; // [rsp+28h] [rbp-38h]
  __int16 v19; // [rsp+2Ah] [rbp-36h]

  returnArray.m_flags = 0;
  returnArray.m_type = 0;
  returnArray.m_uint64 = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, &returnArray);
  v2 = 0;
  for ( i = 0; this->m_SpawnedEntityHandles.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &this->m_SpawnedEntityHandles.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 )
            {
              v10 = g_pScriptVM;
              v11 = *(*g_pScriptVM + 384LL);
              m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
              if ( m_hScope == 0 )
              {
                CEntityInstance::CreatePublicScriptScope(v8->m_pInstance, 0);
                v10 = g_pScriptVM;
                m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
              }
              v18 = 31;
              v19 = 0;
              v17 = m_hScope;
              v11(v10, returnArray.m_uint64, &v17);
              if ( (v19 & 1) != 0 )
                break;
            }
          }
        }
      }
      ++i;
      ++v2;
      if ( this->m_SpawnedEntityHandles.m_Size <= i )
        goto LABEL_13;
    }
    ++v2;
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17);
  }
LABEL_13:
  m_uint64 = returnArray.m_uint64;
  if ( returnArray.m_type == 0 )
    goto LABEL_17;
  if ( returnArray.m_type != 31 )
  {
    v15 = VariantFieldTypeName(returnArray.m_type);
    Warning("No free conversion of %s variant to HSCRIPT right now\n", v15);
LABEL_17:
    m_uint64 = 0;
  }
  CVariantBase<CVariantDefaultAllocator>::Free(&returnArray);
  return m_uint64;
}


// CPointTemplate::ScriptSetSpawnCallback  (line 255, @0x0000000002329fe0, libserver.so)
void __fastcall CPointTemplate::ScriptSetSpawnCallback(
        CPointTemplate *const this,
        HSCRIPT hCallbackFunc,
        HSCRIPT hCallbackScope)
{
  HSCRIPT v5; // rax
  IScriptVM *v6; // rdi

  v5 = (*(*g_pScriptVM + 128LL))(g_pScriptVM, hCallbackFunc);
  v6 = g_pScriptVM;
  this->m_ScriptSpawnCallback = v5;
  this->m_ScriptCallbackScope = (*(*v6 + 128LL))(v6, hCallbackScope);
}


// CPointTemplate::InputForceSpawn  (line 266, @0x0000000002333840, libserver.so)
// calls: CPointTemplate::ForceSpawn
void __fastcall CPointTemplate::InputForceSpawn(CPointTemplate *const this, inputdata_t *const inputdata)
{
  CPointTemplate::ForceSpawn(this);
}


// CPointTemplate::ScriptForceSpawn  (line 275, @0x0000000002333850, libserver.so)
// calls: CPointTemplate::ForceSpawn
void __fastcall CPointTemplate::ScriptForceSpawn(CPointTemplate *const this)
{
  CPointTemplate::ForceSpawn(this);
}


// CPointTemplate::ForceSpawn  (line 284, @0x00000000023337e0, libserver.so)  // inlines: CUtlAbstractDelegate, CUtlDelegate, ClosurePtr, FastDelegate2
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin, CPointTemplate::CreateInstance
// callers: CPointTemplate::InputForceSpawn, CPointTemplate::ScriptForceSpawn
void __fastcall CPointTemplate::ForceSpawn(CPointTemplate *const this)
{
  const QAngle *AbsAngles; // r12
  const Vector *AbsOrigin; // rax
  _QWORD v4[6]; // [rsp+0h] [rbp-30h] BYREF

  memset(v4, 0, 24);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CPointTemplate::CreateInstance(this, AbsOrigin, AbsAngles, 0, v4);
}


// CPointTemplate::InputDeleteCreatedSpawnGroups  (line 294, @0x000000000232a0d0, libserver.so)
// calls: CPointTemplate::DeleteCreatedSpawnGroups
void __fastcall CPointTemplate::InputDeleteCreatedSpawnGroups(CPointTemplate *const this, inputdata_t *const inputdata)
{
  CPointTemplate::DeleteCreatedSpawnGroups(this);
}


// CPointTemplate::ScriptDeleteCreatedSpawnGroups  (line 303, @0x000000000232a0e0, libserver.so)
// calls: CPointTemplate::DeleteCreatedSpawnGroups
void __fastcall CPointTemplate::ScriptDeleteCreatedSpawnGroups(CPointTemplate *const this)
{
  CPointTemplate::DeleteCreatedSpawnGroups(this);
}


// CPointTemplate::DeleteCreatedSpawnGroups  (line 312, @0x000000000232a030, libserver.so)  // inlines: RemoveAll
// callers: CPointTemplate::UpdateOnRemove, CPointTemplate::InputDeleteCreatedSpawnGroups, CPointTemplate::ScriptDeleteCreatedSpawnGroups
void __fastcall CPointTemplate::DeleteCreatedSpawnGroups(CPointTemplate *const this)
{
  int m_Size; // eax
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rsi

  m_Size = this->m_createdSpawnGroupHandles.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 4LL * (m_Size - 1) + 4;
    do
    {
      v5 = this->m_createdSpawnGroupHandles.m_Memory.m_pMemory[v3 / 4];
      v3 += 4LL;
      (*(*g_pEngineServer + 448LL))(g_pEngineServer, v5, 0);
    }
    while ( v3 != v4 );
  }
  this->m_createdSpawnGroupHandles.m_Size = 0;
  this->m_SpawnedEntityHandles.m_Size = 0;
}


// CreateInstanceFromLump  (line 324, @0x00000000023331b0, libserver.so)  // inlines: AddCreatedSpawnGroupHandle, AddToTail, CUtlDelegate, CUtlString, CUtlStringToken, CopyConstruct<unsigned int>, CopyFrom<FastDelegate2<unsigned int, const CUtlVector<CEntityHandle>&, void> >, Element, FastDelegate2, GetNextUniqueTemplateInstanceId, GrowMemory, IsEmpty, NameFixupSettings_t, SetMementoFrom, SetToIdentity, SpawnGroupDesc_t, operator!, operator[], ~CUtlString
// calls: AngleMatrix, CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup, CUtlString::Set, CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup, CUtlString::Format, SetIdentityMatrix, CUtlString::Get, CGameEntitySystem::CreateSpawnGroupEntities, CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup, CGameEntitySystem::ListenForSpawnGroupToFinish, CPointTemplate::ListenForSpawnGroupToFinish, CUtlString::FreeMemoryBlock (15 total)
// callers: CPointTemplate::CreateInstance
// strings: "%s_%d", "point_template"
// globals: GetNextUniqueTemplateInstanceId(void)::s_iUniqueTemplateInstance
__int64 __fastcall CreateInstanceFromLump(
        const Vector *const vecOrigin,
        const QAngle *const vecAngles,
        const CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > *pLumpEntities,
        PointTemplateOwnerSpawnGroupType_t nDesiredSpawnGroupType,
        char nSpawnFlags,
        SpawnGroupHandle_t nSpawnGroupHandle,
        float flTimeoutInterval,
        bool bAsynchronouslySpawnEntities,
        PointTemplateClientOnlyEntityBehavior_t nClientOnlyEntityBehavior,
        const char *pchWorldName,
        const char *pchSource2EntityLumpName,
        const char *pchEntityFilterName,
        CBaseEntity *pListener,
        SpawnGroupCompletionDelegate_t *p_completionDelegate,
        CPointTemplate *pPointTemplate,
        int nTemplateInstanceIdOverride)
{
  SpawnGroupHandle_t v19; // ebx
  const char *SpawnGroupParentNameFixup; // rax
  const char *v21; // rax
  SpawnGroupHandle_t v22; // eax
  SpawnGroupHandle_t v23; // r12d
  ILoadingSpawnGroup *v24; // rax
  void (*pfn)(detail::GenericClass *); // rax
  const char *SpawnGroupLocalNameFixup; // rax
  __int64 m_Size; // rbx
  int v29; // eax
  unsigned int *v30; // rax
  CUtlString parentNameFixup; // [rsp+30h] [rbp-140h] BYREF
  CUtlString localNameFixup; // [rsp+40h] [rbp-130h] BYREF
  NameFixupSettings_t nameFixupSettings; // [rsp+50h] [rbp-120h] BYREF
  __int64 delta; // [rsp+60h] [rbp-110h]
  matrix3x4a_t mTemplateToWorld; // [rsp+70h] [rbp-100h] BYREF
  SpawnGroupDesc_t desc; // [rsp+A0h] [rbp-D0h] BYREF

  v19 = -1;
  AngleMatrix(vecAngles, vecOrigin, &mTemplateToWorld);
  if ( nDesiredSpawnGroupType != PointTemplateOwnerSpawnGroupType_t::INSERT_INTO_CURRENTLY_ACTIVE_SPAWN_GROUP )
  {
    v19 = 0;
    if ( nDesiredSpawnGroupType != PointTemplateOwnerSpawnGroupType_t::INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP )
      v19 = nSpawnGroupHandle;
  }
  SpawnGroupParentNameFixup = CSpawnGroupMgrGameSystem::GetSpawnGroupParentNameFixup(
                                g_pSpawnGroupMgr,
                                nSpawnGroupHandle);
  parentNameFixup.m_pString = 0;
  CUtlString::Set(&parentNameFixup, SpawnGroupParentNameFixup);
  localNameFixup.m_pString = 0;
  if ( (nSpawnFlags & 2) != 0 )
  {
    SpawnGroupLocalNameFixup = CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup(
                                 g_pSpawnGroupMgr,
                                 nSpawnGroupHandle);
    CUtlString::operator=(&localNameFixup, SpawnGroupLocalNameFixup);
  }
  else
  {
    if ( nTemplateInstanceIdOverride == -1 )
      nTemplateInstanceIdOverride = ++GetNextUniqueTemplateInstanceId(void)::s_iUniqueTemplateInstance;
    v21 = CSpawnGroupMgrGameSystem::GetSpawnGroupLocalNameFixup(g_pSpawnGroupMgr, nSpawnGroupHandle);
    CUtlString::Format(&localNameFixup, "%s_%d", v21, nTemplateInstanceIdOverride);
  }
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
  desc.m_hOwner = v19;
  desc.m_pWorldName = pchWorldName;
  desc.m_bCreateClientEntitiesOnLaterConnectingClients = nClientOnlyEntityBehavior == PointTemplateClientOnlyEntityBehavior_t::CREATE_FOR_CLIENTS_WHO_CONNECT_LATER;
  desc.m_flTimeoutInterval = flTimeoutInterval;
  desc.m_pEntityLumpName = pchSource2EntityLumpName;
  desc.m_pEntityFilterName = pchEntityFilterName;
  desc.m_pDescriptiveName = "point_template";
  desc.m_vecWorldOffset = mTemplateToWorld;
  desc.m_pParentNameFixup = CUtlString::Get(&parentNameFixup);
  desc.m_pLocalNameFixup = CUtlString::Get(&localNameFixup);
  v22 = (*(*engine + 456LL))(engine, &desc);
  v23 = v22;
  if ( nDesiredSpawnGroupType == PointTemplateOwnerSpawnGroupType_t::INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP )
    v19 = v22;
  if ( pLumpEntities != 0 )
  {
    nameFixupSettings.m_pParentNameFixup = 0;
    nameFixupSettings.m_pLocalNameFixup = 0;
    nameFixupSettings.m_pParentNameFixup = CUtlString::Get(&parentNameFixup);
    nameFixupSettings.m_pLocalNameFixup = CUtlString::Get(&localNameFixup);
    v24 = CGameEntitySystem::CreateSpawnGroupEntities(
            g_pGameEntitySystem,
            v19,
            pLumpEntities,
            &mTemplateToWorld,
            pchEntityFilterName,
            (2 - bAsynchronouslySpawnEntities),
            &nameFixupSettings,
            0);
    if ( v24 != 0 )
      CSpawnGroupMgrGameSystem::SetLoadingSpawnGroup(g_pSpawnGroupMgr, v23, v24);
  }
  if ( p_completionDelegate->m_Closure.m_pthis != 0 || p_completionDelegate->m_Closure.m_pFunction.__pfn != 0 )
  {
    nameFixupSettings.m_pParentNameFixup = p_completionDelegate->m_Closure.m_pthis;
    pfn = p_completionDelegate->m_Closure.m_pFunction.__pfn;
    delta = p_completionDelegate->m_Closure.m_pFunction.__delta;
    nameFixupSettings.m_pLocalNameFixup = pfn;
    CGameEntitySystem::ListenForSpawnGroupToFinish(g_pGameEntitySystem, v23, pListener, &nameFixupSettings);
  }
  if ( pPointTemplate != 0 )
  {
    CPointTemplate::ListenForSpawnGroupToFinish(pPointTemplate, v23);
    if ( nDesiredSpawnGroupType == PointTemplateOwnerSpawnGroupType_t::INSERT_INTO_NEWLY_CREATED_SPAWN_GROUP )
    {
      m_Size = pPointTemplate->m_createdSpawnGroupHandles.m_Size;
      v29 = pPointTemplate->m_createdSpawnGroupHandles.m_Size;
      if ( m_Size == pPointTemplate->m_createdSpawnGroupHandles.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<unsigned int,int>::Grow(&pPointTemplate->m_createdSpawnGroupHandles.m_Memory, 1);
        v29 = pPointTemplate->m_createdSpawnGroupHandles.m_Size;
      }
      pPointTemplate->m_createdSpawnGroupHandles.m_Size = v29 + 1;
      v30 = &pPointTemplate->m_createdSpawnGroupHandles.m_Memory.m_pMemory[m_Size];
      if ( v30 != 0 )
        *v30 = v23;
    }
  }
  if ( !bAsynchronouslySpawnEntities )
    (*(*engine + 496LL))(engine, v23);
  if ( localNameFixup.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&localNameFixup);
  if ( parentNameFixup.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&parentNameFixup);
  return 1;
}


