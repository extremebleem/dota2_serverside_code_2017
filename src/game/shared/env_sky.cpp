// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_sky.cpp:194
class C_CEnvSky_MapInstall {
	C_CEnvSky_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvSky::GetDataDescMap  (line 25, @0x0000000001ecbf90, libserver.so)
// globals: CEnvSky::m_DataMap
datamap_t *__fastcall CEnvSky::GetDataDescMap(CEnvSky *const this)
{
  return &CEnvSky::m_DataMap;
}


// CEnvSky::AddDatadescMetadataKeys  (line 25, @0x0000000001eda930, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvSky::GetEntityClass(void)
void __fastcall CEnvSky::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvSky::GetEntityClass);
}


// CEnvSky::GetBaseMap  (line 25, @0x0000000001eda950, libserver.so)
datamap_t *__cdecl CEnvSky::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CEnvSky>  (line 25, @0x0000000001eda960, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CEnvSky"
// globals: `guard variable for'DataMapInit<CEnvSky>(CEnvSky *)::nameHolder, CEnvSky::GetEntityClass(void), CEnvSky::m_DataMap, DataMapInit<CEnvSky>(CEnvSky *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvSky>(CEnvSky *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvSky>(CEnvSky *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvSky>(CEnvSky *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_pszBase = "CEnvSky";
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvSky>(CEnvSky *)::nameHolder.m_nLenBase = 7;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvSky>(CEnvSky *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvSky>(CEnvSky *)::nameHolder,
      &_dso_handle);
  }
  CEnvSky::m_DataMap.dataNumFields = 10;
  CEnvSky::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CEnvSky::m_DataMap.dataDesc = &DataMapInit<CEnvSky>(CEnvSky *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvSky::m_DataMap, CEnvSky::GetEntityClass);
  return &CEnvSky::m_DataMap;
}


// CEnvSky::CEnvSky  (line 39, @0x0000000001ee0fa0, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, CStrongHandle, Color, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, Init, NetworkStateChanged, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CEnvSky::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvSky::CEnvSky(CEnvSky *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  bool v3; // zf

  CBaseModelEntity::CBaseModelEntity(this);
  vptr_IHandleEntity = &off_3FBA090;
  this->m_vTintColor = 0;
  v3 = this->m_vTintColor.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_3FBA090;
  this->m_hSkyMaterial.m_Value.m_pBinding = 0;
  this->m_bStartDisabled.m_Value = 0;
  if ( !v3 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x489u, -1, -1);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_vTintColor.m_Value._color[1] = 0;
  }
  if ( this->m_vTintColor.m_Value._color[2] != 0 )
  {
    vptr_IHandleEntity[22](this, 1161, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_vTintColor.m_Value._color[2] = 0;
  }
  if ( this->m_vTintColor.m_Value._color[3] != 0 )
  {
    vptr_IHandleEntity[22](this, 1161, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_vTintColor.m_Value._color[3] = 0;
  }
  this->m_nFogType.m_Value = 0;
  this->m_flFogMinStart.m_Value = 0.0;
  this->m_flFogMinEnd.m_Value = 0.0;
  this->m_flFogMaxStart.m_Value = 0.0;
  this->m_flFogMaxEnd.m_Value = 0.0;
  this->m_bEnabled.m_Value = 1;
  vptr_IHandleEntity[22](this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_hSceneObjectUpdater = 0;
  this->m_pSceneSkyBoxObject = 0;
  this->m_bHasAngleOverride = 0;
}


// CEnvSky::~CEnvSky  (line 48, @0x0000000001ee0f20, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvSky::~CEnvSky(CEnvSky *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CEnvSky::NetworkVar_m_hSkyMaterial> *p_m_hSkyMaterial; // rdi

  p_m_hSkyMaterial = &this->m_hSkyMaterial;
  p_m_hSkyMaterial[-144].m_Value.m_pBinding = &off_3FBA090;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSkyMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvSky::~CEnvSky  (line 48, @0x0000000001ee0f60, libserver.so)  // inlines: ~CEnvSky, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvSky::~CEnvSky(CEnvSky *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CEnvSky::NetworkVar_m_hSkyMaterial> *p_m_hSkyMaterial; // rdi

  p_m_hSkyMaterial = &this->m_hSkyMaterial;
  p_m_hSkyMaterial[-144].m_Value.m_pBinding = &off_3FBA090;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_hSkyMaterial->m_Value);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvSky::Activate  (line 54, @0x0000000001eccc00, libserver.so)
// calls: CBaseModelEntity::Activate
void __fastcall CEnvSky::Activate(CEnvSky *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CEnvSky::UpdateOnRemove  (line 67, @0x0000000001ecc1a0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Init, SetGlobalLight
// calls: CBaseModelEntity::UpdateOnRemove
void __fastcall CEnvSky::UpdateOnRemove(CEnvSky *const this)
{
  int v1; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v3; // cx

  v1 = -1;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v3 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v3 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v1 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v3 & 0x7FFF;
  }
  if ( g_pLightQueryGameSystem->m_hGlobalLights[1].m_Index == v1 )
    g_pLightQueryGameSystem->m_hGlobalLights[1].m_Index = -1;
  CBaseModelEntity::UpdateOnRemove(this);
}


// CEnvSky::Spawn  (line 92, @0x0000000001ecec10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn
void __fastcall CEnvSky::Spawn(CEnvSky *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  v3 = !this->m_bStartDisabled.m_Value;
  if ( v3 != this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = v3;
  }
}


// CEnvSky::UpdateTransmitState  (line 100, @0x0000000001ecc240, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CEnvSky::UpdateTransmitState(CEnvSky *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CEnvSky::ShouldDraw  (line 106, @0x0000000001ecbfa0, libserver.so)
bool __fastcall CEnvSky::ShouldDraw(CEnvSky *const this)
{
  return 1;
}


// CEnvSky::SetSkyParams  (line 112, @0x0000000001ee81d0, libserver.so)  // inlines: CStrongHandle, NetworkStateChanged, Set, SetRawColor, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<float>, operator=<int>, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, _Unwind_Resume
void __fastcall CEnvSky::SetSkyParams(
        CEnvSky *const this,
        HMaterial hSkyMaterial,
        QAngle angles,
        Color tintColor,
        int nFogType,
        float flFogMinStart,
        float flFogMinEnd,
        float flFogMaxStart,
        __m128i flFogMaxEnd)
{
  float v9; // r15d
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *m_pData; // rsi
  double v14; // xmm1_8
  double v15; // xmm2_8
  double v16; // xmm3_8
  double v17; // xmm4_8
  double v18; // xmm5_8
  bool v19; // zf
  double v20; // xmm0_8
  double v21; // xmm6_8
  double v22; // xmm7_8
  double v23; // xmm1_8
  double v24; // xmm2_8
  CStrongHandle<InfoForResourceTypeIMaterial2> src; // [rsp+1Ch] [rbp-40h] BYREF

  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(flFogMaxEnd));
  m_pData = hSkyMaterial.m_pBinding->m_pData;
  src.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&src, m_pData);
  if ( this->m_hSkyMaterial.m_Value.m_pBinding != src.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_hSkyMaterial.m_Value, &src);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&src);
  this->m_bHasAngleOverride = 1;
  v19 = this->m_nFogType.m_Value == nFogType;
  this->m_overrideAngles = angles;
  *&v20 = LODWORD(angles.z);
  if ( !v19 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFogType.m_Value = nFogType;
  }
  if ( *&this->m_vTintColor != tintColor )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1161, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_vTintColor.m_Value = tintColor;
  }
  *&v21 = LODWORD(flFogMinStart);
  if ( flFogMinStart != this->m_flFogMinStart.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(
      this,
      1172,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v20,
      v14,
      v15,
      v16,
      v17,
      v18,
      flFogMinStart);
    *&v17 = LODWORD(flFogMinStart);
    this->m_flFogMinStart.m_Value = flFogMinStart;
  }
  *&v22 = LODWORD(flFogMinEnd);
  if ( flFogMinEnd != this->m_flFogMinEnd.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(
      this,
      1176,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v20,
      v14,
      v15,
      v16,
      v17,
      v18,
      v21,
      flFogMinEnd);
    *&v18 = LODWORD(flFogMinEnd);
    this->m_flFogMinEnd.m_Value = flFogMinEnd;
  }
  *&v23 = LODWORD(flFogMaxStart);
  if ( flFogMaxStart != this->m_flFogMaxStart.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(
      this,
      1180,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v20,
      flFogMaxStart,
      v15,
      v16,
      v17,
      v18,
      v21,
      v22);
    *&v17 = LODWORD(flFogMaxStart);
    this->m_flFogMaxStart.m_Value = flFogMaxStart;
  }
  *&v24 = _mm_cvtsi32_si128(LODWORD(v9)).m128i_u64[0];
  if ( *&v24 != this->m_flFogMaxEnd.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v20, v23, v24, v16, v17, v18, v21, v22);
    this->m_flFogMaxEnd.m_Value = v9;
  }
}


// CEnvSky::Input_Enable  (line 129, @0x0000000001ece9b0, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvSky::Input_Enable(
        CEnvSky *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 1;
  }
}


// CEnvSky::Input_Disable  (line 137, @0x0000000001eceb30, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvSky::Input_Disable(
        CEnvSky *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 0;
  }
}


// CEnvSky::OnSkyStateChanged  (line 144, @0x0000000001edaa30, libserver.so)
void __fastcall CEnvSky::OnSkyStateChanged(CEnvSky *const this)
{
  ;
}


// CEnvSky::UpdateSceneObjects  (line 152, @0x0000000001ee32c0, libserver.so)  // inlines: FromUntypedHandleUnchecked, GetCurrentMeshGroupMask, GetData, GetSceneObjectData, GetSpawnGroupHandle, InitUntypedUnchecked, IsValid, MirrorFlags, SetAngularFogParams, SetBounds, SetFogType, SetMaterial, SetRenderingEnabled, SetSkyTint, SetTransform, ToMatrix, UpdateBoundingBoxToMatchTransform, Vector, VectorMax, VectorMin, fpmax, fpmin, memcpy, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator=, operator[]
// calls: SRGBColorToLinearColor, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, AngleMatrix, CModel::HasMesh, TransformAABB, CSpawnGroupMgrGameSystem::GetWorldReference, CModel::GetMeshData, CRenderGameSystem::GetSceneWorld
SceneObjectUpdaterRetval_t __fastcall CEnvSky::UpdateSceneObjects(
        CEnvSky *const this,
        const EventClientPreOutput_t *const output,
        bool bIsRenderingEnabled)
{
  CSceneSkyBoxObject *m_pSceneSkyBoxObject; // rdi
  CSceneSkyBoxObject *v5; // r14
  CSceneObjectExtraData_t *v6; // rax
  CSceneSkyBoxObject *v7; // rax
  float m_Value; // xmm1_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  CSceneSkyBoxObject *v11; // rsi
  ESceneObjectFlags m_nRenderableFlags; // rdx
  unsigned __int64 v13; // rax
  ISceneSystem *v14; // rdi
  CMeshInstance *v16; // r15
  uint8 v17; // al
  __int64 v18; // rdx
  CSceneObjectExtraData_t *v19; // rax
  const CModel *const *v20; // rax
  const Vector *v21; // rsi
  ISceneObjectDesc *m_pDesc; // rdi
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  IWorldReference *WorldReference; // rax
  ISceneWorld *SceneWorld; // rax
  __int64 (__fastcall *v27)(ISceneSystem *, matrix3x4_t *, ISceneWorld *); // rcx
  CMeshInstance *m_pMeshInstanceData; // r15
  uint8 m_nMeshGroupMaskSmall; // al
  __int64 m_nCurrentMeshGroupMask; // rdx
  CSceneObjectExtraData_t *m_pExtraData; // rax
  const CModel *const *m_pBinding; // rax
  const Vector *p_m_vMinBounds; // rsi
  vec_t v34; // xmm1_4
  vec_t v35; // xmm0_4
  const CModel *const *v36; // rax
  const CRenderMesh *MeshData; // rax
  const CModel *const *v38; // rax
  const CRenderMesh *v39; // rax
  char v40; // [rsp+1Fh] [rbp-B1h]
  float v41; // [rsp+30h] [rbp-A0h] BYREF
  float v42; // [rsp+34h] [rbp-9Ch]
  float v43; // [rsp+38h] [rbp-98h]
  float v44; // [rsp+40h] [rbp-90h] BYREF
  float v45; // [rsp+44h] [rbp-8Ch]
  float v46; // [rsp+48h] [rbp-88h]
  Vector v47; // [rsp+50h] [rbp-80h] BYREF
  Vector v48; // [rsp+60h] [rbp-70h] BYREF
  matrix3x4_t matrix; // [rsp+70h] [rbp-60h] BYREF
  Vector v50; // 0:kr00_12.12

  if ( this->m_hSkyMaterial.m_Value.m_pBinding == 0 )
  {
    (*(*g_pSceneSystem + 136LL))(g_pSceneSystem, this->m_pSceneSkyBoxObject, bIsRenderingEnabled);
    this->m_pSceneSkyBoxObject = 0;
    return SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_DONE;
  }
  v50 = SRGBColorToLinearColor(&this->m_vTintColor.m_Value);
  m_pSceneSkyBoxObject = this->m_pSceneSkyBoxObject;
  if ( m_pSceneSkyBoxObject != 0 )
  {
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(
      &m_pSceneSkyBoxObject->m_hMaterial,
      this->m_hSkyMaterial.m_Value.m_pBinding);
  }
  else
  {
    m_pEntity = this->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    WorldReference = CSpawnGroupMgrGameSystem::GetWorldReference(g_pSpawnGroupMgr, m_hSpawnGroup);
    SceneWorld = (*(*WorldReference + 88LL))(WorldReference);
    if ( SceneWorld == 0 )
      SceneWorld = CRenderGameSystem::GetSceneWorld(g_pRenderGameSystem, this->m_worldGroupId);
    v27 = *(*g_pSceneSystem + 280LL);
    *&matrix.m_flMatVal[0][0] = this->m_hSkyMaterial.m_Value.m_pBinding;
    this->m_pSceneSkyBoxObject = v27(g_pSceneSystem, &matrix, SceneWorld);
  }
  if ( this->m_bHasAngleOverride )
  {
    AngleMatrix(&this->m_overrideAngles, &matrix);
    v5 = this->m_pSceneSkyBoxObject;
    v5->m_transform = matrix;
    if ( (v5->m_nObjectTypeFlags & 4) != 0 )
    {
      if ( (*(&v5->CSceneObject + 48) & 0x10) != 0 )
        goto LABEL_7;
      v41 = 3.4028235e38;
      v42 = 3.4028235e38;
      v43 = 3.4028235e38;
      v44 = -3.4028235e38;
      v45 = -3.4028235e38;
      v46 = -3.4028235e38;
      m_pMeshInstanceData = v5->m_pMeshInstanceData;
      v40 = 0;
      if ( m_pMeshInstanceData == 0 )
        goto LABEL_50;
      while ( 1 )
      {
        m_nMeshGroupMaskSmall = v5->m_nMeshGroupMaskSmall;
        m_nCurrentMeshGroupMask = m_nMeshGroupMaskSmall;
        if ( m_nMeshGroupMaskSmall == 0 )
        {
          m_pExtraData = v5->m_pExtraData;
          m_nCurrentMeshGroupMask = -1;
          if ( m_pExtraData != 0 )
            m_nCurrentMeshGroupMask = m_pExtraData->m_nCurrentMeshGroupMask;
        }
        if ( (m_pMeshInstanceData->m_nMeshGroupMask & m_nCurrentMeshGroupMask) == 0 )
          goto LABEL_37;
        m_pBinding = m_pMeshInstanceData->m_hRenderMesh.m_hModel.m_pBinding;
        if ( m_pBinding != 0 && CModel::HasMesh(*m_pBinding, m_pMeshInstanceData->m_hRenderMesh.m_iMesh) )
        {
          v36 = m_pMeshInstanceData->m_hRenderMesh.m_hModel.m_pBinding;
          if ( v36 == 0 )
            goto LABEL_37;
          MeshData = CModel::GetMeshData(*v36, m_pMeshInstanceData->m_hRenderMesh.m_iMesh);
          if ( MeshData == 0 )
            goto LABEL_37;
          p_m_vMinBounds = &m_pMeshInstanceData->m_pFixedMeshDataOverride->m_vMinBounds;
          if ( p_m_vMinBounds != 0 )
          {
LABEL_46:
            TransformAABB(&v5->m_transform, p_m_vMinBounds, p_m_vMinBounds + 1, &v47, &v48);
            v40 = 1;
            v41 = fminf(v47.x, v41);
            v42 = fminf(v47.y, v42);
            v43 = fminf(v47.z, v43);
            v44 = fmaxf(v48.x, v44);
            v45 = fmaxf(v48.y, v45);
            v46 = fmaxf(v48.z, v46);
            goto LABEL_37;
          }
          p_m_vMinBounds = &MeshData->m_sceneObjects.m_Memory.m_pMemory[m_pMeshInstanceData->m_nSceneObjectIndex].m_vMinBounds;
        }
        else
        {
          p_m_vMinBounds = &m_pMeshInstanceData->m_pFixedMeshDataOverride->m_vMinBounds;
        }
        if ( p_m_vMinBounds != 0 )
          goto LABEL_46;
LABEL_37:
        m_pMeshInstanceData = m_pMeshInstanceData->m_pNext;
        if ( m_pMeshInstanceData == 0 )
          goto LABEL_47;
      }
    }
LABEL_28:
    m_pDesc = v5->m_pDesc;
    if ( m_pDesc != 0 )
      (*(m_pDesc->_vptr_ISceneObjectDesc + 14))(m_pDesc, v5);
    goto LABEL_7;
  }
  AngleMatrix(&this->m_pGameSceneNode->m_angRotation.m_Value, &matrix);
  v5 = this->m_pSceneSkyBoxObject;
  v5->m_transform = matrix;
  if ( (v5->m_nObjectTypeFlags & 4) == 0 )
    goto LABEL_28;
  if ( (*(&v5->CSceneObject + 48) & 0x10) == 0 )
  {
    v41 = 3.4028235e38;
    v42 = 3.4028235e38;
    v43 = 3.4028235e38;
    v44 = -3.4028235e38;
    v45 = -3.4028235e38;
    v46 = -3.4028235e38;
    v16 = v5->m_pMeshInstanceData;
    v40 = 0;
    if ( v16 == 0 )
      goto LABEL_50;
    while ( 1 )
    {
      v17 = v5->m_nMeshGroupMaskSmall;
      v18 = v17;
      if ( v17 == 0 )
      {
        v19 = v5->m_pExtraData;
        v18 = -1;
        if ( v19 != 0 )
          v18 = v19->m_nCurrentMeshGroupMask;
      }
      if ( (v16->m_nMeshGroupMask & v18) == 0 )
        goto LABEL_18;
      v20 = v16->m_hRenderMesh.m_hModel.m_pBinding;
      if ( v20 != 0 && CModel::HasMesh(*v20, v16->m_hRenderMesh.m_iMesh) )
      {
        v38 = v16->m_hRenderMesh.m_hModel.m_pBinding;
        if ( v38 == 0 )
          goto LABEL_18;
        v39 = CModel::GetMeshData(*v38, v16->m_hRenderMesh.m_iMesh);
        if ( v39 == 0 )
          goto LABEL_18;
        v21 = &v16->m_pFixedMeshDataOverride->m_vMinBounds;
        if ( v21 != 0 )
        {
LABEL_27:
          TransformAABB(&v5->m_transform, v21, v21 + 1, &v47, &v48);
          v40 = 1;
          v41 = fminf(v47.x, v41);
          v42 = fminf(v47.y, v42);
          v43 = fminf(v47.z, v43);
          v44 = fmaxf(v48.x, v44);
          v45 = fmaxf(v48.y, v45);
          v46 = fmaxf(v48.z, v46);
          goto LABEL_18;
        }
        v21 = &v39->m_sceneObjects.m_Memory.m_pMemory[v16->m_nSceneObjectIndex].m_vMinBounds;
      }
      else
      {
        v21 = &v16->m_pFixedMeshDataOverride->m_vMinBounds;
      }
      if ( v21 != 0 )
        goto LABEL_27;
LABEL_18:
      v16 = v16->m_pNext;
      if ( v16 == 0 )
      {
LABEL_47:
        if ( v40 != 0 )
        {
          (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, v5, &v41, &v44);
          break;
        }
LABEL_50:
        v34 = v5->m_transform.m_flMatVal[2][3];
        v35 = v5->m_transform.m_flMatVal[0][3];
        v48.y = v5->m_transform.m_flMatVal[1][3];
        v48.z = v34;
        v48.x = v35;
        (*(*g_pSceneSystem + 232LL))(g_pSceneSystem, v5, &v48, &v48);
        break;
      }
    }
  }
LABEL_7:
  v6 = v5->m_pExtraData;
  if ( v6 != 0 && v6->m_childObjects.m_Size != 0 )
    (*(*g_pSceneSystem + 1040LL))(g_pSceneSystem, v5);
  this->m_pSceneSkyBoxObject->m_vTint = v50;
  this->m_pSceneSkyBoxObject->m_nFogType = this->m_nFogType.m_Value;
  v7 = this->m_pSceneSkyBoxObject;
  m_Value = this->m_flFogMaxEnd.m_Value;
  v9 = this->m_flFogMinEnd.m_Value;
  v10 = this->m_flFogMinStart.m_Value;
  v7->m_flFogMaxStart = this->m_flFogMaxStart.m_Value;
  v7->m_flFogMinEnd = v9;
  v7->m_flFogMinStart = v10;
  v7->m_flFogMaxEnd = m_Value;
  v11 = this->m_pSceneSkyBoxObject;
  m_nRenderableFlags = v11->m_nRenderableFlags;
  v13 = m_nRenderableFlags | 0x1000000000000000LL;
  if ( this->m_bEnabled.m_Value )
    v13 = m_nRenderableFlags & 0xEFFFFFFFFFFFFFFFLL;
  v14 = g_pSceneSystem;
  v11->m_nRenderableFlags = v13;
  (*(*v14 + 1080LL))(v14);
  return SceneObjectUpdaterRetval_t::SCENE_OBJECT_UPDATER_DONE;
}


// CEnvSky::YouForgotToImplementOrDeclareServerClass  (line 194, @0x0000000001ecbfb0, libserver.so)
int __fastcall CEnvSky::YouForgotToImplementOrDeclareServerClass(CEnvSky *const this)
{
  return 0;
}


// CEnvSky::GetServerClass  (line 194, @0x0000000001ed1530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvSky::GetServerClass(CEnvSky *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


