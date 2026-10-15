// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/skycamera.cpp:23
class C_CSkyCamera_MapInstall {
	C_CSkyCamera_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSkyCamera::YouForgotToImplementOrDeclareServerClass  (line 23, @0x0000000002380ed0, libserver.so)
int __fastcall CSkyCamera::YouForgotToImplementOrDeclareServerClass(CSkyCamera *const this)
{
  return 0;
}


// CSkyCamera::GetServerClass  (line 23, @0x0000000002385dd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSkyCamera::GetServerClass(CSkyCamera *const this)
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


// GetCurrentSkyCamera  (line 59, @0x0000000002391820, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetSkyCameraList, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator=
// callers: ClientData_Update
// globals: g_hActiveSkybox, CEntityHandle::gm_pEntityList, CEntityClassList<CSkyCamera>::m_pClassList
CSkyCamera *__cdecl GetCurrentSkyCamera()
{
  uint32 m_Index; // eax
  CEntityIdentity *v1; // rdx
  CEntityIdentity *v2; // rsi
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // si
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  m_Index = g_hActiveSkybox.m_Index;
  if ( g_hActiveSkybox.m_Index + 2 > 1
    && (v1 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hActiveSkybox.m_Index) >> 9) & 0x3F]) != 0
    && (v2 = &v1[g_hActiveSkybox.m_Index & 0x1FF]) != 0
    && g_hActiveSkybox.m_Index == v2->m_EHandle.m_Index
    && v2->m_pInstance != 0 )
  {
    v7 = &v1[g_hActiveSkybox.m_Index & 0x1FF];
  }
  else
  {
    if ( CEntityClassList<CSkyCamera>::m_pClassList == 0
      || (m_pEntity = CEntityClassList<CSkyCamera>::m_pClassList->m_pEntity) == 0 )
    {
      g_hActiveSkybox.m_Index = -1;
      return 0;
    }
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v5 = 0x7FFF;
    else
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(g_hActiveSkybox.m_Index) = v5 | g_hActiveSkybox.m_Index & 0x8000;
    m_Index = (v4 << 15) | g_hActiveSkybox.m_Index & 0x7FFF;
    g_hActiveSkybox.m_Index = m_Index;
    if ( m_Index + 2 <= 1 )
      return 0;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(g_hActiveSkybox.m_Index) >> 9) & 0x3F];
    if ( v6 == 0 )
      return 0;
    v7 = &v6[g_hActiveSkybox.m_Index & 0x1FF];
    if ( v7 == 0 )
      return 0;
  }
  if ( m_Index != v7->m_EHandle.m_Index )
    return 0;
  return v7->m_pInstance;
}


// GetSkyCameraList  (line 68, @0x0000000002391970, libserver.so)
// callers: CBaseEntity::GetEntitySkybox
// globals: CEntityClassList<CSkyCamera>::m_pClassList
CSkyCamera *__cdecl GetSkyCameraList()
{
  return CEntityClassList<CSkyCamera>::m_pClassList;
}


// GetSkyCamera  (line 75, @0x0000000002391980, libserver.so)
// globals: CEntityClassList<CSkyCamera>::m_pClassList
CSkyCamera *__fastcall GetSkyCamera(CUtlStringToken nSkyboxSlot)
{
  CSkyCamera *result; // rax

  result = CEntityClassList<CSkyCamera>::m_pClassList;
  if ( CEntityClassList<CSkyCamera>::m_pClassList == 0 )
    return 0;
  do
  {
    if ( nSkyboxSlot.m_nHashCode == result->m_skyboxSlotToken.m_Value.m_nHashCode )
      break;
    result = result->m_pNext;
  }
  while ( result != 0 );
  return result;
}


// CSkyCamera::GetDataDescMap  (line 92, @0x0000000002380ee0, libserver.so)
// globals: CSkyCamera::m_DataMap
datamap_t *__fastcall CSkyCamera::GetDataDescMap(CSkyCamera *const this)
{
  return &CSkyCamera::m_DataMap;
}


// CSkyCamera::AddDatadescMetadataKeys  (line 92, @0x00000000023919c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSkyCamera::GetEntityClass(void)
void __fastcall CSkyCamera::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSkyCamera::GetEntityClass);
}


// CSkyCamera::GetBaseMap  (line 92, @0x00000000023919e0, libserver.so)
datamap_t *__cdecl CSkyCamera::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CSkyCamera>  (line 92, @0x00000000023919f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_11.cpp
// strings: "CSkyCamera"
// globals: `guard variable for'DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder, CSkyCamera::GetEntityClass(void), CSkyCamera::m_DataMap, DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSkyCamera>(CSkyCamera *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder) != 0 )
  {
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_pszBase = "CSkyCamera";
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSkyCamera>(CSkyCamera *)::nameHolder,
      &_dso_handle);
  }
  CSkyCamera::m_DataMap.dataNumFields = 18;
  CSkyCamera::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CSkyCamera::m_DataMap.dataDesc = &DataMapInit<CSkyCamera>(CSkyCamera *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSkyCamera::m_DataMap, CSkyCamera::GetEntityClass);
  return &CSkyCamera::m_DataMap;
}


// CSkyCamera::CSkyCamera  (line 155, @0x0000000002391ac0, libserver.so)  // inlines: CNetworkVarBase, CNetworkVectorBase, CUtlStringToken, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<short int>, EnsureValidValue<unsigned char>, Insert, NetworkStateChanged, NetworkVar_fog, NetworkVar_m_skyboxData, Set, Zero, operator=<float>, sky3dparams_t
// calls: CBaseEntity::CBaseEntity, fogparams_t::fogparams_t, sky3dparams_t::NetworkVar_fog::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CSkyCamera::CEntityInstanceEntityClass::ConstructInstance
// globals: CEntityClassList<CSkyCamera>::m_pClassList
void __fastcall CSkyCamera::CSkyCamera(CSkyCamera *const this)
{
  __int64 v2; // xmm0_8
  CSkyCamera *v3; // rax
  bool v4; // zf

  CBaseEntity::CBaseEntity(this);
  this->m_skyboxData.origin.m_Value.z = 0.0;
  this->_vptr_IHandleEntity = &off_40A99F0;
  this->m_skyboxData._vptr_sky3dparams_t = off_3FC50D0;
  this->m_skyboxData.scale.m_Value = 0;
  this->m_skyboxData.origin.m_Value.y = 0.0;
  this->m_skyboxData.origin.m_Value.x = 0.0;
  this->m_skyboxData.area.m_Value = 0;
  this->m_skyboxData.bClip3DSkyBoxNearToWorldFar.m_Value = 0;
  this->m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset.m_Value = 0.0;
  fogparams_t::fogparams_t(&this->m_skyboxData.fog);
  v2 = 1065353216;
  this->m_skyboxSlotToken.m_Value.m_nHashCode = 0;
  this->m_skyboxData.fog._vptr_fogparams_t = &off_3FC5090;
  this->m_skyboxData._vptr_sky3dparams_t = &off_40A99B0;
  v3 = CEntityClassList<CSkyCamera>::m_pClassList;
  v4 = this->m_skyboxData.fog.maxdensity.m_Value == 1.0;
  CEntityClassList<CSkyCamera>::m_pClassList = this;
  this->m_pNext = v3;
  if ( !v4 )
  {
    sky3dparams_t::NetworkVar_fog::NetworkStateChanged(&this->m_skyboxData.fog, 0x30u, -1, -1);
    this->m_skyboxData.fog.maxdensity.m_Value = 1.0;
  }
  if ( this->m_skyboxData.fog.HDRColorScale.m_Value != 1.0 )
  {
    (*(this->m_skyboxData.fog._vptr_fogparams_t + 1))(
      &this->m_skyboxData.fog,
      56,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      *&v2,
      1.0);
    this->m_skyboxData.fog.HDRColorScale.m_Value = 1.0;
  }
}


// CSkyCamera::~CSkyCamera  (line 162, @0x00000000023815a0, libserver.so)  // inlines: Remove
// calls: CBaseEntity::~CBaseEntity
// callers: CSkyCamera::~CSkyCamera
// globals: CEntityClassList<CSkyCamera>::m_pClassList
void __fastcall CSkyCamera::~CSkyCamera(CSkyCamera *const this)
{
  CSkyCamera *v1; // rdx
  CSkyCamera **p_m_pNext; // rdx
  CSkyCamera *m_pNext; // rax

  this->_vptr_IHandleEntity = &off_40A99F0;
  v1 = CEntityClassList<CSkyCamera>::m_pClassList;
  if ( CEntityClassList<CSkyCamera>::m_pClassList != 0 )
  {
    if ( this == CEntityClassList<CSkyCamera>::m_pClassList )
    {
      p_m_pNext = &CEntityClassList<CSkyCamera>::m_pClassList;
      m_pNext = this;
LABEL_9:
      *p_m_pNext = m_pNext->m_pNext;
    }
    else
    {
      while ( 1 )
      {
        m_pNext = v1->m_pNext;
        if ( m_pNext == 0 )
          break;
        if ( this == m_pNext )
        {
          p_m_pNext = &v1->m_pNext;
          goto LABEL_9;
        }
        v1 = v1->m_pNext;
      }
    }
  }
  CBaseEntity::~CBaseEntity(this);
}


// CSkyCamera::~CSkyCamera  (line 162, @0x0000000002381610, libserver.so)
// calls: CSkyCamera::~CSkyCamera, CBaseEntity::operator delete
void __fastcall CSkyCamera::~CSkyCamera(CSkyCamera *const this)
{
  CSkyCamera::~CSkyCamera(this);
  CBaseEntity::operator delete(this);
}


// CSkyCamera::Spawn  (line 168, @0x00000000023a0510, libserver.so)  // inlines: Base, Element, FindKeyHash, GetSpawnGroupHandle, GetValue, MakeStringToken, NetworkStateChanged, Set, TempString, operator!=, operator=, operator=<CUtlStringToken>, operator=<int>, operator[]
// calls: CBaseEntity::Spawn, CBaseEntity::GetLocalOrigin, CEntitySystem::GetActiveSpawnGroupHandle, IsSpawnGroupAssociatedWithPrimaryMap, MurmurHash2LowerCase, RegisterStringToken
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CSkyCamera::Spawn(CSkyCamera *const this, const CEntityKeyValues *pKeyValues)
{
  CNetworkVectorBase<Vector,sky3dparams_t::NetworkVar_origin> *p_origin; // r14
  const Vector *LocalOrigin; // rax
  __int64 (__fastcall *v6)(IPVSManager *, _QWORD, CNetworkVectorBase<Vector,sky3dparams_t::NetworkVar_origin> *); // r15
  SpawnGroupHandle_t ActiveSpawnGroupHandle; // eax
  unsigned __int8 v8; // r13
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // r13
  uint32 v18; // r12d
  uint32 v19; // eax
  vec_t *p_x; // [rsp+8h] [rbp-38h]
  uint32 v21; // [rsp+8h] [rbp-38h]

  p_origin = &this->m_skyboxData.origin;
  CBaseEntity::Spawn(this, pKeyValues);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( LocalOrigin->x != this->m_skyboxData.origin.m_Value.x
    || LocalOrigin->y != this->m_skyboxData.origin.m_Value.y
    || LocalOrigin->z != this->m_skyboxData.origin.m_Value.z )
  {
    p_x = &LocalOrigin->x;
    (*(this->m_skyboxData._vptr_sky3dparams_t + 2))(&this->m_skyboxData, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skyboxData.origin.m_Value.x = *p_x;
    this->m_skyboxData.origin.m_Value.y = p_x[1];
    this->m_skyboxData.origin.m_Value.z = p_x[2];
  }
  v6 = *(g_pPVSManager->_vptr_IPVSManager + 12);
  ActiveSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(g_pEntitySystem);
  v8 = v6(g_pPVSManager, ActiveSpawnGroupHandle, p_origin);
  if ( v8 != this->m_skyboxData.area.m_Value )
  {
    (*(this->m_skyboxData._vptr_sky3dparams_t + 2))(&this->m_skyboxData, 24, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skyboxData.area.m_Value = v8;
  }
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
    m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
  else
    m_hSpawnGroup = 0;
  if ( !IsSpawnGroupAssociatedWithPrimaryMap(m_hSpawnGroup) )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_24:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_22;
    goto LABEL_25;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v13) == -1292585575 )
      goto LABEL_19;
LABEL_16:
    if ( m_nCount <= ++v13 )
      goto LABEL_24;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v13] != -1292585575 )
    goto LABEL_16;
LABEL_19:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  p_m_value = &v15[v13].m_value;
  m_uint64 = "";
  if ( p_m_value->m_type == 30 )
  {
LABEL_22:
    m_uint64 = p_m_value->m_uint64;
    if ( p_m_value->m_uint64 == 0 )
    {
LABEL_26:
      v18 = 0;
      goto LABEL_27;
    }
  }
LABEL_25:
  if ( *m_uint64 == 0 )
    goto LABEL_26;
  v19 = MurmurHash2LowerCase(m_uint64, 0x31415926u);
  if ( g_bUpdateStringTokenDatabase )
  {
    v21 = v19;
    RegisterStringToken(v19, m_uint64, 0, 1);
    v19 = v21;
  }
  v18 = v19;
LABEL_27:
  if ( v18 != this->m_skyboxSlotToken.m_Value.m_nHashCode )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skyboxSlotToken.m_Value.m_nHashCode = v18;
  }
}


// CSkyCamera::Activate  (line 187, @0x0000000002383670, libserver.so)  // inlines: GetForModify, NetworkStateChanged, operator*=
// calls: CBaseEntity::Activate, CBaseEntity::GetAbsAngles, AngleVectors
void __fastcall CSkyCamera::Activate(CSkyCamera *const this, ActivateType_t activateType)
{
  const QAngle *AbsAngles; // rax

  CBaseEntity::Activate(this, activateType);
  if ( this->m_bUseAngles )
  {
    (*(this->m_skyboxData.fog._vptr_fogparams_t + 1))(&this->m_skyboxData.fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AngleVectors(AbsAngles, &this->m_skyboxData.fog.dirPrimary.m_Value, 0, 0);
    (*(this->m_skyboxData.fog._vptr_fogparams_t + 1))(&this->m_skyboxData.fog, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_skyboxData.fog.dirPrimary.m_Value.x = -this->m_skyboxData.fog.dirPrimary.m_Value.x;
    this->m_skyboxData.fog.dirPrimary.m_Value.y = -this->m_skyboxData.fog.dirPrimary.m_Value.y;
    this->m_skyboxData.fog.dirPrimary.m_Value.z = -this->m_skyboxData.fog.dirPrimary.m_Value.z;
  }
}


// CSkyCamera::UpdateTransmitState  (line 223, @0x00000000023814b0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CSkyCamera::UpdateTransmitState(CSkyCamera *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CSkyCamera::InputActivateSkybox  (line 229, @0x0000000002380ef0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// globals: g_hActiveSkybox
void __fastcall CSkyCamera::InputActivateSkybox(CSkyCamera *const this, inputdata_t *const inputdata)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(g_hActiveSkybox.m_Index) = v4 | g_hActiveSkybox.m_Index & 0x8000;
    g_hActiveSkybox.m_Index = (v3 << 15) | g_hActiveSkybox.m_Index & 0x7FFF;
  }
  else
  {
    g_hActiveSkybox.m_Index = -1;
  }
}


