
// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityLumpRequest::Start  (line 13, @0x0000000002f654d0, libserver.so)  // inlines: CUtlStringToken, SetToIdentity, SpawnGroupDesc_t, operator=
// calls: CUtlString::operator=, CGameEntitySystem::FindEntityByName, __dynamic_cast, CBaseEntity::GetAbsOrigin, LoggingSystem_IsChannelEnabled, SetIdentityMatrix, CEntityLumpRequest::IsResidentOrStreaming, LoggingSystem_Log
// callers: CInfoSpawnGroupLoadUnload::InputStartSpawnGroupLoad
// strings: "mapload", "SV:  CInfoSpawnGroupLoadUnload:  LOAD START %s\n", "CEntityLumpRequest::Start:  InputStartSpawnGroupLoad %s, couldn't find landmark named '%s
// globals: `typeinfo for'CInfoSpawnGroupLandmark
__int64 __fastcall CEntityLumpRequest::Start(
        CEntityLumpRequest *const this,
        const char *pLevelName,
        const char *pSpawnGroupFilterName,
        float flTimeoutInterval,
        const char *pLandmarkName,
        SpawnGroupHandle_t hOwner)
{
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  CBaseEntity *EntityByName; // rax
  const CBaseEntity *v13; // rax
  const Vector *AbsOrigin; // rax
  __int64 v15; // rdi
  vec_t z; // xmm0_4
  SpawnGroupHandle_t v18; // eax
  SpawnGroupDesc_t desc; // [rsp+10h] [rbp-D0h] BYREF

  CUtlString::operator=(&this->m_sLevelName, pLevelName);
  CUtlString::operator=(&this->m_sLandmarkName, pLandmarkName);
  if ( pSpawnGroupFilterName != 0 )
  {
    if ( *pSpawnGroupFilterName == 0 )
      pSpawnGroupFilterName = "mapload";
  }
  else
  {
    pSpawnGroupFilterName = "mapload";
  }
  if ( pLevelName != 0 && *pLevelName != 0 )
  {
    v18 = (*(*engine + 696LL))(engine, pLevelName);
    if ( v18 != 0 && CEntityLumpRequest::IsResidentOrStreaming(this, v18) )
      return 0;
  }
  m_hSpawnGroup = this->m_hSpawnGroup;
  if ( m_hSpawnGroup != 0 && CEntityLumpRequest::IsResidentOrStreaming(this, m_hSpawnGroup) )
    return 0;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pLandmarkName, 0, 0, 0, 0);
  if ( EntityByName != 0
    && (v13 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CInfoSpawnGroupLandmark, 0)) != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
    this->m_vecLandmarkInThisMap.x = AbsOrigin->x;
    v15 = LOG_SERVER;
    this->m_vecLandmarkInThisMap.y = AbsOrigin->y;
    z = AbsOrigin->z;
    this->m_bStillPending = 1;
    this->m_vecLandmarkInThisMap.z = z;
    if ( LoggingSystem_IsChannelEnabled(v15, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  CInfoSpawnGroupLoadUnload:  LOAD START %s\n", pLevelName);
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
    desc.m_hOwner = hOwner;
    desc.m_pWorldOffsetCallback = this;
    desc.m_pWorldName = pLevelName;
    desc.m_pEntityFilterName = pSpawnGroupFilterName;
    desc.m_flTimeoutInterval = flTimeoutInterval;
    desc.m_bCreateClientEntitiesOnLaterConnectingClients = 1;
    this->m_hSpawnGroup = (*(*g_pEngineServer + 456LL))(g_pEngineServer, &desc);
    return 1;
  }
  else
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) == 0 )
      return 0;
    LoggingSystem_Log(
      LOG_SERVER,
      2,
      "CEntityLumpRequest::Start:  InputStartSpawnGroupLoad %s, couldn't find landmark named '%s' in this map!!!\n",
      pLevelName,
      pLandmarkName);
    return 0;
  }
}


// CEntityLumpRequest::IsResidentOrStreaming  (line 71, @0x0000000002f65480, libserver.so)
// callers: CEntityLumpRequest::Start
bool __fastcall CEntityLumpRequest::IsResidentOrStreaming(
        CEntityLumpRequest *const this,
        SpawnGroupHandle_t hSpawnGroup)
{
  return (*(*engine + 472LL))(engine) != 0 || (*(*engine + 480LL))(engine, hSpawnGroup);
}


// CEntityLumpRequest::GetLandmarkOffset  (line 76, @0x0000000002f65790, libserver.so)
const Vector *__fastcall CEntityLumpRequest::GetLandmarkOffset(const CEntityLumpRequest *const this)
{
  return &this->m_vecLandmarkOffset;
}


// CEntityLumpRequest::ComputeWorldOrigin  (line 83, @0x0000000002f64d50, libserver.so)  // inlines: AssignTo, Base, CUtlMemory, CUtlVector, CUtlVectorBase, Element, FindKeyHash, GetLevelName, GetValue, GetValue<Vector>, LeafCodeInfo_t, Purge, RemoveAll, SetOrigin, SetToIdentity, String, VectorSubtract, operator-, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlString::Get, CEntityKeyValues::HasValue, VariantFieldTypeName, Warning, LoggingSystem_IsChannelEnabled, SetIdentityMatrix, LoggingSystem_Log(int,LoggingSeverity_t,LeafCodeInfo_t const&,char const*,...), LoggingSystem_Log, V_sscanf, CUtlMemory<const CEntityKeyValues*, int>::Purge, _Unwind_Resume
// strings: "No free conversion of %s variant to Vector right now\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/info_spaw, "ComputeWorldOrigin", "SV:  Found info_spawngroup_landmark(%s) but it doesn't have an origin in the next map!!!\, "info_spawngroup_landmark(%s) in %s: %f %f %f\n"
// globals: CEntityKeyValues::sm_EmptyVariant
matrix3x4a_t *__fastcall CEntityLumpRequest::ComputeWorldOrigin(
        matrix3x4a_t *__return_ptr retstr,
        CEntityLumpRequest *const this,
        const char *pWorldName,
        SpawnGroupHandle_t hSpawnGroup,
        IWorld *pWorld)
{
  __int64 v7; // rax
  void (__fastcall *v8)(IWorld *, const char *, _QWORD); // r13
  const char *v9; // rax
  bool v10; // zf
  CUtlVector<const CEntityKeyValues*,CUtlMemory<const CEntityKeyValues*,int> > list; // [rsp+60h] [rbp-70h] BYREF

  v7 = *pWorld;
  list.m_Memory.m_pMemory = 0;
  list.m_Memory.m_nAllocationCount = 0;
  list.m_Memory.m_nGrowSize = 0;
  v8 = *(v7 + 136);
  v9 = CUtlString::Get(&this->m_sLandmarkName);
  v8(pWorld, v9, 0);
  this->m_bStillPending = 0;
  SetIdentityMatrix(retstr);
  v10 = (list.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  retstr->m_flMatVal[0][3] = this->m_vecLandmarkOffset.x;
  retstr->m_flMatVal[1][3] = this->m_vecLandmarkOffset.y;
  retstr->m_flMatVal[2][3] = this->m_vecLandmarkOffset.z;
  if ( v10 )
  {
    CUtlMemory<CEntityKeyValues const*,int>::Purge(&list.m_Memory);
    if ( (list.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CEntityKeyValues const*,int>::Purge(&list.m_Memory);
  }
  return retstr;
}


// CInfoSpawnGroupLoadUnload::GetDataDescMap  (line 116, @0x0000000002f643a0, libserver.so)
// globals: CInfoSpawnGroupLoadUnload::m_DataMap
datamap_t *__fastcall CInfoSpawnGroupLoadUnload::GetDataDescMap(CInfoSpawnGroupLoadUnload *const this)
{
  return &CInfoSpawnGroupLoadUnload::m_DataMap;
}


// CInfoSpawnGroupLoadUnload::AddDatadescMetadataKeys  (line 116, @0x0000000002f657a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoSpawnGroupLoadUnload::GetEntityClass(void)
void __fastcall CInfoSpawnGroupLoadUnload::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoSpawnGroupLoadUnload::GetEntityClass);
}


// CInfoSpawnGroupLoadUnload::GetBaseMap  (line 116, @0x0000000002f657c0, libserver.so)
datamap_t *__cdecl CInfoSpawnGroupLoadUnload::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CInfoSpawnGroupLoadUnload>  (line 116, @0x0000000002f66860, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source2_stuff_01.cpp
// strings: "CInfoSpawnGroupLoadUnload"
// globals: `guard variable for'DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder, `guard variable for'DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc, CInfoSpawnGroupLoadUnload::GetEntityClass(void), CInfoSpawnGroupLoadUnload::m_DataMap, DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_pszBase = "CInfoSpawnGroupLoadUnload";
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder,
      &_dso_handle);
  }
  CInfoSpawnGroupLoadUnload::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_nLenBase + 23);
    strcpy(
      stpcpy(v2, DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_pszBase),
      "SpawnGroupLoadingThink");
    m_Size = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size == DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[5].fieldName = v2;
    v6 = operator new[](DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_nLenBase + 25);
    strcpy(
      stpcpy(v6, DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_pszBase),
      "SpawnGroupUnloadingThink");
    v7 = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size == DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory,
        1);
      v8 = DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[6].fieldName = v6;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc);
  }
  CInfoSpawnGroupLoadUnload::m_DataMap.dataNumFields = 17;
  CInfoSpawnGroupLoadUnload::m_DataMap.dataDesc = &DataMapInit<CInfoSpawnGroupLoadUnload>(CInfoSpawnGroupLoadUnload *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoSpawnGroupLoadUnload::m_DataMap, CInfoSpawnGroupLoadUnload::GetEntityClass);
  return &CInfoSpawnGroupLoadUnload::m_DataMap;
}


// CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload  (line 146, @0x0000000002f657d0, libserver.so)  // inlines: CEntityIOOutput, CEntityLumpRequest, CLogicalEntity, CServerOnlyEntity, CUtlString, CUtlSymbolLarge, Vector
// calls: CBaseEntity::CBaseEntity
// callers: CInfoSpawnGroupLoadUnload::CEntityInstanceEntityClass::ConstructInstance, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_load::CEntityInstanceEntityClass::ConstructInstance, CInfoSpawnGroupLoadUnloadAlias_info_spawngroup_unload::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CInfoSpawnGroupLoadUnload::CInfoSpawnGroupLoadUnload(CInfoSpawnGroupLoadUnload *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_47BDE70;
  this->m_OnSpawnGroupLoadStarted._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnSpawnGroupLoadFinished._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnSpawnGroupUnloadStarted._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnSpawnGroupUnloadFinished._vptr_CEntityIOOutput = off_3F7C190;
  this->m_iszSpawnGroupName.u.m_Id = 0;
  this->m_iszSpawnGroupFilterName.u.m_Id = 0;
  this->m_iszLandmarkName.u.m_Id = 0;
  this->m_sFixedSpawnGroupName.m_pString = 0;
  this->m_Request._vptr_IComputeWorldOriginCallback = &off_47BDE40;
  this->m_Request.m_bStillPending = 1;
  this->m_Request.m_bLandmarkLocated = 0;
  this->m_Request.m_hSpawnGroup = 0;
  this->m_Request.m_sLevelName.m_pString = 0;
  this->m_Request.m_sLandmarkName.m_pString = 0;
  this->m_Request.m_vecLandmarkOffset.x = 0.0;
  this->m_Request.m_vecLandmarkOffset.y = 0.0;
  this->m_Request.m_vecLandmarkOffset.z = 0.0;
  this->m_Request.m_vecLandmarkInThisMap.x = 0.0;
  this->m_Request.m_vecLandmarkInThisMap.y = 0.0;
  this->m_Request.m_vecLandmarkInThisMap.z = 0.0;
  this->m_flTimeoutInterval = 0.0;
}


// CInfoSpawnGroupLoadUnload::GetSpawnGroupName  (line 151, @0x0000000002f658c0, libserver.so)  // inlines: String, ToCStr
// callers: CMapSpawnGroup::OnSpawnGroupLoad
const char *__fastcall CInfoSpawnGroupLoadUnload::GetSpawnGroupName(const CInfoSpawnGroupLoadUnload *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
    return this->m_iszSpawnGroupName.u.m_pAsString;
  return result;
}


// CInfoSpawnGroupLoadUnload::GetLandmarkName  (line 156, @0x0000000002f658e0, libserver.so)  // inlines: String, ToCStr
// callers: CMapSpawnGroup::OnSpawnGroupLoad
const char *__fastcall CInfoSpawnGroupLoadUnload::GetLandmarkName(const CInfoSpawnGroupLoadUnload *const this)
{
  const char *result; // rax

  result = "";
  if ( this->m_iszLandmarkName.u.m_Id != 0 )
    return this->m_iszLandmarkName.u.m_pAsString;
  return result;
}


// CInfoSpawnGroupLoadUnload::Spawn  (line 161, @0x0000000002f643b0, libserver.so)  // inlines: String, ToCStr, operator char const*, operator=
// calls: CUtlString::operator=, CUtlString::GetForModify, V_FixSlashes, CUtlString::Get, MakeEntitySystemString, CLogicalEntity::Spawn
void __fastcall CInfoSpawnGroupLoadUnload::Spawn(
        CInfoSpawnGroupLoadUnload *const this,
        const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rsi
  char *v5; // rax
  const char *v6; // rax
  UtlSymLargeId_t v7; // [rsp+0h] [rbp-30h]

  m_pAsString = "";
  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
    m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
  CUtlString::operator=(&this->m_sFixedSpawnGroupName, m_pAsString);
  v5 = CUtlString::GetForModify(&this->m_sFixedSpawnGroupName);
  V_FixSlashes(v5, 47);
  v6 = CUtlString::Get(&this->m_sFixedSpawnGroupName);
  MakeEntitySystemString(v6);
  this->m_iszSpawnGroupName.u.m_Id = v7;
  CLogicalEntity::Spawn(this, pKeyValues);
  if ( this->m_flTimeoutInterval <= 0.0 )
    this->m_flTimeoutInterval = 30.0;
}


// CInfoSpawnGroupLoadUnload::Activate  (line 177, @0x0000000002f64450, libserver.so)  // inlines: String, ToCStr, V_strlen
// calls: CBaseEntity::Activate, LoggingSystem_IsChannelEnabled, UTIL_Remove, strlen, LoggingSystem_Log
// strings: "info_spawngroup_load_unload w/o specifying map name, removing entity!!!\n"
void __fastcall CInfoSpawnGroupLoadUnload::Activate(CInfoSpawnGroupLoadUnload *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rdi

  CBaseEntity::Activate(this, activateType);
  m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
  if ( m_pAsString == 0 || strlen(m_pAsString) <= 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
      LoggingSystem_Log(LOG_SERVER, 2, "info_spawngroup_load_unload w/o specifying map name, removing entity!!!\n");
    UTIL_Remove(this);
  }
}


// CInfoSpawnGroupLoadUnload::InputSetSpawnGroup  (line 188, @0x0000000002f651e0, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: MakeEntitySystemString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2F65211, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CInfoSpawnGroupLoadUnload::InputSetSpawnGroup(
        CInfoSpawnGroupLoadUnload *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8
  UtlSymLargeId_t v8; // [rsp+10h] [rbp-20h]

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_15;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_15;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_15:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_iszSpawnGroupName.u.m_Id = v8;
}


// CInfoSpawnGroupLoadUnload::InputStartSpawnGroupLoad  (line 193, @0x0000000002f66280, libserver.so)  // inlines: CVariantBase, FireOutput, Free, String, ToCStr, V_strlen, curtime, ~CVariantBase
// calls: LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityLumpRequest::Start, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "InputStartSpawnGroupLoad(%s) w/o specifying landmark name, ignoring!!!\n", "SV:  InputStartSpawnGroupLoad called with empty spawn group name, ignoring!!!\n", "SV:  InputStartSpawnGroupLoad(%s)\n"
// globals: CInfoSpawnGroupLoadUnload::SpawnGroupLoadingThink(void)
void __fastcall CInfoSpawnGroupLoadUnload::InputStartSpawnGroupLoad(
        CInfoSpawnGroupLoadUnload *const this,
        inputdata_t *const inputdata)
{
  const char *m_pAsString; // r12
  bool v4; // zf
  const char *v5; // rcx
  const char *v6; // rdx
  double v7; // xmm1_8
  double v8; // xmm0_8
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
    v4 = this->m_iszLandmarkName.u.m_Id == 0;
    if ( this->m_iszLandmarkName.u.m_Id == 0 )
      goto LABEL_3;
  }
  else
  {
    v4 = this->m_iszLandmarkName.u.m_Id == 0;
    m_pAsString = "";
    if ( this->m_iszLandmarkName.u.m_Id == 0 )
      goto LABEL_3;
  }
  if ( v4 || strlen(this->m_iszLandmarkName.u.m_pAsString) <= 0 )
  {
LABEL_3:
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
    {
      v5 = "";
      if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
        v5 = this->m_iszSpawnGroupName.u.m_pAsString;
      LoggingSystem_Log(LOG_SERVER, 2, "InputStartSpawnGroupLoad(%s) w/o specifying landmark name, ignoring!!!\n", v5);
    }
    return;
  }
  v6 = "";
  if ( this->m_iszSpawnGroupFilterName.u.m_Id != 0 )
    v6 = this->m_iszSpawnGroupFilterName.u.m_pAsString;
  if ( CEntityLumpRequest::Start(
         &this->m_Request,
         m_pAsString,
         v6,
         this->m_flTimeoutInterval,
         this->m_iszLandmarkName.u.m_pAsString,
         0) != 0 )
  {
    this->m_bStreamingStarted = 1;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnSpawnGroupLoadStarted, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  InputStartSpawnGroupLoad(%s)\n", m_pAsString);
    v8 = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v8 = LODWORD(v9->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v8, v7, 0);
    CBaseEntity::ThinkSet(this, CInfoSpawnGroupLoadUnload::SpawnGroupLoadingThink, 0.0, 0, 0);
  }
}


// CInfoSpawnGroupLoadUnload::InputActivateSpawnGroup  (line 222, @0x0000000002f644c0, libserver.so)  // inlines: String, ToCStr
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log
// strings: "SV:  InputActivateSpawnGroup called while request is still pending, ignoring!!!\n", "SV:  InputActivateSpawnGroup called with empty spawn group name, ignoring!!!\n", "SV:  InputActivateSpawnGroup called with invalid spawn group, ignoring!!!\n"
void __fastcall CInfoSpawnGroupLoadUnload::InputActivateSpawnGroup(
        CInfoSpawnGroupLoadUnload *const this,
        inputdata_t *const inputdata)
{
  const char *m_pAsString; // rsi
  SpawnGroupHandle_t SpawnGroupByName; // eax
  SpawnGroupHandle_t v4; // ebx

  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
    m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
  else
    m_pAsString = "";
  SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, m_pAsString);
  v4 = SpawnGroupByName;
  if ( SpawnGroupByName != 0 )
  {
    if ( (*(*engine + 480LL))(engine, SpawnGroupByName) != 0 )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
        LoggingSystem_Log(
          LOG_SERVER,
          2,
          "SV:  InputActivateSpawnGroup called while request is still pending, ignoring!!!\n");
    }
    else if ( (*(*engine + 472LL))(engine, v4) != 0 )
    {
      (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 8))(g_pSpawnGroupMgr, v4);
    }
  }
  else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) != 0 )
  {
    LoggingSystem_Log(LOG_SERVER, 2, "SV:  InputActivateSpawnGroup called with invalid spawn group, ignoring!!!\n");
  }
}


// CInfoSpawnGroupLoadUnload::SpawnGroupLoadingThink  (line 250, @0x0000000002f660e0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, String, ToCStr, curtime, ~CVariantBase
// calls: CBaseEntity::SetNextThink, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "SV:  CInfoSpawnGroupLoadUnload:  LOAD FINISH %s/%s]\n"
void __fastcall CInfoSpawnGroupLoadUnload::SpawnGroupLoadingThink(CInfoSpawnGroupLoadUnload *const this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  char v6; // r13
  double v7; // xmm1_8
  const char *m_pAsString; // r8
  const char *v9; // rcx
  CVariant v10; // [rsp-30h] [rbp-38h] BYREF

  v2 = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v2, v1, 0);
  v6 = (*(*engine + 472LL))(engine, this->m_Request.m_hSpawnGroup);
  (*(*engine + 480LL))(engine, this->m_Request.m_hSpawnGroup);
  if ( v6 != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      m_pAsString = "";
      if ( this->m_iszSpawnGroupFilterName.u.m_Id != 0 )
        m_pAsString = this->m_iszSpawnGroupFilterName.u.m_pAsString;
      v9 = "";
      if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
        v9 = this->m_iszSpawnGroupName.u.m_pAsString;
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  CInfoSpawnGroupLoadUnload:  LOAD FINISH %s/%s]\n", v9, m_pAsString);
    }
    this->m_bStreamingStarted = 0;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v7, 0);
    v10.m_type = 0;
    v10.m_flags = 0;
    v10.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnSpawnGroupLoadFinished, this, this, &v10, 0.0);
    if ( (v10.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v10.m_uint64);
  }
}


// CInfoSpawnGroupLoadUnload::InputStartSpawnGroupUnload  (line 275, @0x0000000002f64c00, libserver.so)  // inlines: String, ToCStr, curtime
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, LoggingSystem_IsChannelEnabled, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, LoggingSystem_Log
// strings: "SV:  InputStartSpawnGroupUnload called with empty spawn group name, ignoring!!!\n", "SV:  InputStartSpawnGroupUnload(%s)\n"
// globals: CInfoSpawnGroupLoadUnload::SpawnGroupUnloadingThink(void)
void __fastcall CInfoSpawnGroupLoadUnload::InputStartSpawnGroupUnload(
        CInfoSpawnGroupLoadUnload *const this,
        inputdata_t *const inputdata)
{
  const char *m_pAsString; // r12
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
    m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
  else
    m_pAsString = "";
  if ( CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, m_pAsString) != 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
      LoggingSystem_Log(LOG_SERVER, 1, "SV:  InputStartSpawnGroupUnload(%s)\n", m_pAsString);
    CBaseEntity::ThinkSet(this, CInfoSpawnGroupLoadUnload::SpawnGroupUnloadingThink, 0.0, 0, 0);
    v5 = 0.0;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      *&v5 = LODWORD(v6->m_flCurrentTime);
    }
    CBaseEntity::SetNextThink(this, v5, v4, 0);
  }
}


// CInfoSpawnGroupLoadUnload::SpawnGroupUnloadingThink  (line 299, @0x0000000002f664e0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, String, ToCStr, curtime, ~CVariantBase
// calls: CSpawnGroupMgrGameSystem::FindSpawnGroupByName, LoggingSystem_IsChannelEnabled, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, LoggingSystem_Log, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "SV:  SpawnGroupUnloadingThink(%s), ignored because server doesn't know about this spawngr, "SV:  SpawnGroupUnloadingThink:  UNLOAD FINISH %s]\n", "SV:  SpawnGroupUnloadingThink:  UNLOAD START %s\n"
void __fastcall CInfoSpawnGroupLoadUnload::SpawnGroupUnloadingThink(CInfoSpawnGroupLoadUnload *const this)
{
  const char *m_pAsString; // r12
  SpawnGroupHandle_t SpawnGroupByName; // r13d
  double v4; // xmm1_8
  double v5; // xmm1_8
  double v6; // xmm0_8
  CGlobalVars *v7; // r15
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v9; // xmm1_8
  CVariant value; // [rsp+0h] [rbp-40h] BYREF

  if ( this->m_iszSpawnGroupName.u.m_Id != 0 )
    m_pAsString = this->m_iszSpawnGroupName.u.m_pAsString;
  else
    m_pAsString = "";
  SpawnGroupByName = CSpawnGroupMgrGameSystem::FindSpawnGroupByName(g_pSpawnGroupMgr, m_pAsString);
  if ( SpawnGroupByName == 0 )
  {
    if ( this->m_bUnloadingStarted )
    {
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(LOG_SERVER, 1, "SV:  SpawnGroupUnloadingThink:  UNLOAD FINISH %s]\n", m_pAsString);
      this->m_bUnloadingStarted = 0;
      value.m_flags = 0;
      value.m_type = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnSpawnGroupUnloadFinished, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    else if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
    {
      LoggingSystem_Log(
        LOG_SERVER,
        1,
        "SV:  SpawnGroupUnloadingThink(%s), ignored because server doesn't know about this spawngroup!\n",
        m_pAsString);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v5, 0);
    return;
  }
  v6 = 0.0;
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v6 = LODWORD(v7->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v6, v4, 0);
  if ( (*(g_pGameRules->_vptr_CGameRules + 150))(g_pGameRules, SpawnGroupByName) != 0 )
  {
    if ( this->m_bUnloadingStarted )
    {
      if ( (*(*engine + 472LL))(engine, SpawnGroupByName) == 0 )
      {
        if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
          LoggingSystem_Log(LOG_SERVER, 1, "SV:  SpawnGroupUnloadingThink:  UNLOAD FINISH %s]\n", m_pAsString);
        this->m_bUnloadingStarted = 0;
        CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v9, 0);
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnSpawnGroupUnloadFinished, this, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          goto LABEL_30;
      }
    }
    else
    {
      this->m_bUnloadingStarted = 1;
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 1) != 0 )
        LoggingSystem_Log(LOG_SERVER, 1, "SV:  SpawnGroupUnloadingThink:  UNLOAD START %s\n", m_pAsString);
      (*(g_pSpawnGroupMgr->_vptr_IGameSpawnGroupMgr + 9))(g_pSpawnGroupMgr, SpawnGroupByName, 0);
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnSpawnGroupUnloadStarted, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
LABEL_30:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
}


