// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_projectedtexture.cpp:66
class C_CEnvProjectedTexture_MapInstall {
	C_CEnvProjectedTexture_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvProjectedTexture::GetDataDescMap  (line 14, @0x00000000021bb040, libserver.so)
// globals: CEnvProjectedTexture::m_DataMap
datamap_t *__fastcall CEnvProjectedTexture::GetDataDescMap(CEnvProjectedTexture *const this)
{
  return &CEnvProjectedTexture::m_DataMap;
}


// CEnvProjectedTexture::AddDatadescMetadataKeys  (line 14, @0x00000000021d2620, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvProjectedTexture::GetEntityClass(void)
void __fastcall CEnvProjectedTexture::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvProjectedTexture::GetEntityClass);
}


// CEnvProjectedTexture::GetBaseMap  (line 14, @0x00000000021d2640, libserver.so)
datamap_t *__cdecl CEnvProjectedTexture::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CEnvProjectedTexture>  (line 14, @0x00000000021d8b90, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvProjectedTexture"
// globals: `guard variable for'DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder, `guard variable for'DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc, CEnvProjectedTexture::GetEntityClass(void), CEnvProjectedTexture::m_DataMap, DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_pszBase = "CEnvProjectedTexture";
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder,
      &_dso_handle);
  }
  CEnvProjectedTexture::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc[11].fieldSize = 260;
    v2 = operator new[](DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v2, DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_pszBase), "InitialThink");
    m_Size = DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size == DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc[35].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc);
  }
  CEnvProjectedTexture::m_DataMap.dataNumFields = 46;
  CEnvProjectedTexture::m_DataMap.dataDesc = &DataMapInit<CEnvProjectedTexture>(CEnvProjectedTexture *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvProjectedTexture::m_DataMap, CEnvProjectedTexture::GetEntityClass);
  return &CEnvProjectedTexture::m_DataMap;
}


// CEnvProjectedTexture::YouForgotToImplementOrDeclareServerClass  (line 66, @0x00000000021bb050, libserver.so)
int __fastcall CEnvProjectedTexture::YouForgotToImplementOrDeclareServerClass(CEnvProjectedTexture *const this)
{
  return 0;
}


// CEnvProjectedTexture::GetServerClass  (line 66, @0x00000000021c4a20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvProjectedTexture::GetServerClass(CEnvProjectedTexture *const this)
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


// CEnvProjectedTexture::CEnvProjectedTexture  (line 72, @0x00000000021d2650, libserver.so)  // inlines: CEntityHandle, CModelPointEntity, CNetworkColorBase, CNetworkHandleBase, CNetworkVarBase, Color, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, EnsureValidValue<unsigned int>, GetForModify, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetRed, SetVal, V_strncpy<int>, _V_strcpy, operator=<bool>, operator=<double>, operator=<float>, operator=<int>, strcpy, ~CModelPointEntity
// calls: CBaseModelEntity::CBaseModelEntity, _V_strncpy, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CEnvProjectedTexture::CEntityInstanceEntityClass::ConstructInstance
// strings: "effects/flashlight001"
void __fastcall CEnvProjectedTexture::CEnvProjectedTexture(CEnvProjectedTexture *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  bool m_Value; // zf
  double v4; // xmm0_8
  __int64 v5; // xmm1_8
  float v6; // xmm0_4
  double v7; // xmm0_8
  double v8; // xmm2_8
  double v9; // xmm0_8
  double v10; // xmm3_8
  double v11; // xmm0_8
  double v12; // xmm4_8
  __int64 v13; // xmm5_8
  double v14; // xmm6_8
  float v15; // xmm0_4
  double v16; // xmm0_8
  double v17; // xmm0_8

  CBaseModelEntity::CBaseModelEntity(this);
  vptr_IHandleEntity = &off_4028950;
  this->m_LightColor = 0;
  m_Value = this->m_LightColor.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_4028950;
  this->m_hTargetEntity.m_Value.m_Index = -1;
  this->m_bState.m_Value = 0;
  this->m_bAlwaysUpdate.m_Value = 0;
  this->m_flLightFOV.m_Value = 0.0;
  this->m_bEnableShadows.m_Value = 0;
  this->m_bSimpleProjection.m_Value = 0;
  this->m_bLightOnlyTarget.m_Value = 0;
  this->m_bLightWorld.m_Value = 0;
  this->m_bCameraSpace.m_Value = 0;
  this->m_flBrightnessScale.m_Value = 0.0;
  if ( !m_Value )
  {
    CBaseEntity::NetworkStateChanged(this, 0x498u, -1, -1);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_LightColor.m_Value._color[1] = 0;
  }
  if ( this->m_LightColor.m_Value._color[2] != 0 )
  {
    vptr_IHandleEntity[22](this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_LightColor.m_Value._color[2] = 0;
  }
  if ( this->m_LightColor.m_Value._color[3] != 0 )
  {
    vptr_IHandleEntity[22](this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_LightColor.m_Value._color[3] = 0;
  }
  m_Value = this->m_bState.m_Value;
  this->m_flIntensity.m_Value = 0.0;
  this->m_flLinearAttenuation.m_Value = 0.0;
  this->m_flQuadraticAttenuation.m_Value = 0.0;
  this->m_bVolumetric.m_Value = 0;
  this->m_flNoiseStrength.m_Value = 0.0;
  this->m_flFlashlightTime.m_Value = 0.0;
  this->m_nNumPlanes.m_Value = 0;
  this->m_flPlaneOffset.m_Value = 0.0;
  this->m_flVolumetricIntensity.m_Value = 0.0;
  this->m_flColorTransitionTime.m_Value = 0.0;
  this->m_flAmbient.m_Value = 0.0;
  this->m_nSpotlightTextureFrame.m_Value = 0;
  this->m_nShadowQuality.m_Value = 0;
  this->m_flNearZ.m_Value = 0.0;
  this->m_flFarZ.m_Value = 0.0;
  this->m_flProjectionSize.m_Value = 0.0;
  this->m_flRotation.m_Value = 0.0;
  this->m_bFlipHorizontal.m_Value = 0;
  if ( !m_Value )
  {
    vptr_IHandleEntity[22](this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bState.m_Value = 1;
  }
  if ( this->m_bAlwaysUpdate.m_Value )
  {
    vptr_IHandleEntity[22](this, 1157, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysUpdate.m_Value = 0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
  }
  if ( this->m_flLightFOV.m_Value != 45.0 )
  {
    vptr_IHandleEntity[22](this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLightFOV.m_Value = 45.0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
  }
  if ( this->m_bEnableShadows.m_Value )
  {
    vptr_IHandleEntity[22](this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnableShadows.m_Value = 0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
  }
  if ( this->m_bSimpleProjection.m_Value )
  {
    vptr_IHandleEntity[22](this, 1165, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bSimpleProjection.m_Value = 0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
  }
  if ( this->m_bLightOnlyTarget.m_Value )
  {
    vptr_IHandleEntity[22](this, 1166, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLightOnlyTarget.m_Value = 0;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
  }
  if ( !this->m_bLightWorld.m_Value )
  {
    vptr_IHandleEntity[22](this, 1167, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bLightWorld.m_Value = 1;
  }
  if ( this->m_bCameraSpace.m_Value )
  {
    vptr_IHandleEntity[22](this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_bCameraSpace.m_Value = 0;
  }
  vptr_IHandleEntity[22](this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  strcpy(this->m_SpotlightTextureName.m_Value, "effects/flashlight_border");
  (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_SpotlightTextureName, "effects/flashlight001", 260);
  if ( this->m_nSpotlightTextureFrame.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1484, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nSpotlightTextureFrame.m_Value = 0;
  }
  v5 = 1065353216;
  if ( this->m_flBrightnessScale.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1172, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, 1.0);
    this->m_flBrightnessScale.m_Value = 1.0;
  }
  if ( this->m_LightColor.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, *&v5);
    this->m_LightColor.m_Value._color[0] = -1;
  }
  if ( this->m_LightColor.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, *&v5);
    this->m_LightColor.m_Value._color[1] = -1;
  }
  if ( this->m_LightColor.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, *&v5);
    this->m_LightColor.m_Value._color[2] = -1;
  }
  if ( this->m_LightColor.m_Value._color[3] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, *&v5);
    this->m_LightColor.m_Value._color[3] = -1;
  }
  v6 = this->m_flIntensity.m_Value;
  if ( v6 != 255.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v6, *&v5);
    this->m_flIntensity.m_Value = 255.0;
  }
  *&v7 = LODWORD(this->m_flColorTransitionTime.m_Value);
  if ( *&v7 != 0.5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v7, *&v5);
    this->m_flColorTransitionTime.m_Value = 0.5;
  }
  v8 = 0.0;
  if ( this->m_flFlashlightTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v7, *&v5, 0.0);
    this->m_flFlashlightTime.m_Value = 0.0;
  }
  *&v9 = LODWORD(this->m_flLinearAttenuation.m_Value);
  if ( *&v9 != 100.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v9, *&v5, v8);
    this->m_flLinearAttenuation.m_Value = 100.0;
  }
  v10 = 0.0;
  if ( this->m_flQuadraticAttenuation.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, *&v5, v8, 0.0);
    this->m_flQuadraticAttenuation.m_Value = 0.0;
  }
  if ( this->m_bVolumetric.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v9, *&v5, v8, v10);
    this->m_bVolumetric.m_Value = 0;
  }
  *&v11 = LODWORD(this->m_flNoiseStrength.m_Value);
  if ( *&v11 != 0.80000001 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v11, *&v5, v8, v10);
    this->m_flNoiseStrength.m_Value = 0.80000001;
  }
  if ( this->m_nNumPlanes.m_Value != 64 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v11, *&v5, v8, v10);
    this->m_nNumPlanes.m_Value = 64;
  }
  v12 = 0.0;
  if ( this->m_flPlaneOffset.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v11, *&v5, v8, v10, 0.0);
    this->m_flPlaneOffset.m_Value = 0.0;
  }
  v13 = 1065353216;
  if ( this->m_flVolumetricIntensity.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v11, *&v5, v8, v10, v12, 1.0);
    this->m_flVolumetricIntensity.m_Value = 1.0;
  }
  v14 = 0.0;
  if ( this->m_flAmbient.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v11, *&v5, v8, v10, v12, *&v13, 0.0);
    this->m_flAmbient.m_Value = 0.0;
  }
  v15 = this->m_flNearZ.m_Value;
  if ( v15 != 4.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1492, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v15, *&v5, v8, v10, v12, *&v13, v14);
    this->m_flNearZ.m_Value = 4.0;
  }
  *&v16 = LODWORD(this->m_flFarZ.m_Value);
  if ( *&v16 != 750.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1496, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v16, *&v5, v8, v10, v12, *&v13, v14);
    this->m_flFarZ.m_Value = 750.0;
  }
  if ( this->m_nShadowQuality.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1488, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v16, *&v5, v8, v10, v12, *&v13, v14);
    this->m_nShadowQuality.m_Value = 0;
  }
  *&v17 = LODWORD(this->m_flProjectionSize.m_Value);
  if ( *&v17 != 500.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1500, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v17, *&v5, v8, v10, v12, *&v13, v14);
    this->m_flProjectionSize.m_Value = 500.0;
  }
  if ( this->m_flRotation.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(
      this,
      1504,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v17,
      *&v5,
      v8,
      v10,
      v12,
      *&v13,
      v14,
      0.0);
    this->m_flRotation.m_Value = 0.0;
  }
}


// CEnvProjectedTexture::ScriptSetLinearAttenuation  (line 110, @0x00000000021d2ff0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CEnvProjectedTexture::ScriptSetLinearAttenuation(
        CEnvProjectedTexture *const this,
        double a2,
        float flAtten)
{
  float flAttena; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flLinearAttenuation.m_Value )
  {
    flAttena = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flAtten);
    this->m_flLinearAttenuation.m_Value = flAttena;
  }
}


// CEnvProjectedTexture::ScriptSetQuadraticAttenuation  (line 115, @0x00000000021d3050, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CEnvProjectedTexture::ScriptSetQuadraticAttenuation(
        CEnvProjectedTexture *const this,
        double a2,
        float flAtten)
{
  float flAttena; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flQuadraticAttenuation.m_Value )
  {
    flAttena = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flAtten);
    this->m_flQuadraticAttenuation.m_Value = flAttena;
  }
}


// CEnvProjectedTexture::ScriptSetNearZ  (line 120, @0x00000000021d30b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CEnvProjectedTexture::ScriptSetNearZ(CEnvProjectedTexture *const this, double a2, float flRange)
{
  float flRangea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flNearZ.m_Value )
  {
    flRangea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1492, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flRange);
    this->m_flNearZ.m_Value = flRangea;
  }
}


// CEnvProjectedTexture::ScriptSetFarZ  (line 125, @0x00000000021d3110, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CEnvProjectedTexture::ScriptSetFarZ(CEnvProjectedTexture *const this, double a2, float flRange)
{
  float flRangea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flFarZ.m_Value )
  {
    flRangea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1496, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flRange);
    this->m_flFarZ.m_Value = flRangea;
  }
}


// CEnvProjectedTexture::ScriptSetVolumetrics  (line 131, @0x00000000021d3170, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>, operator=<float>, operator=<int>
void __fastcall CEnvProjectedTexture::ScriptSetVolumetrics(
        CEnvProjectedTexture *const this,
        bool bOn,
        float flIntensity,
        float flNoise,
        unsigned int nPlanes,
        float flPlaneOffset)
{
  bool v9; // zf
  float flPlaneOffseta; // [rsp+4h] [rbp-2Ch]
  float flPlaneOffsetb; // [rsp+4h] [rbp-2Ch]
  float flNoisea; // [rsp+8h] [rbp-28h]
  float flNoisec; // [rsp+8h] [rbp-28h]
  float flNoiseb; // [rsp+8h] [rbp-28h]
  float flIntensitya; // [rsp+Ch] [rbp-24h]
  float flIntensityc; // [rsp+Ch] [rbp-24h]
  float flIntensityd; // [rsp+Ch] [rbp-24h]
  float flIntensitye; // [rsp+Ch] [rbp-24h]
  float flIntensityb; // [rsp+Ch] [rbp-24h]

  if ( this->m_bVolumetric.m_Value != bOn )
  {
    flPlaneOffseta = flPlaneOffset;
    flNoisea = flNoise;
    flIntensitya = flIntensity;
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    flPlaneOffset = flPlaneOffseta;
    this->m_bVolumetric.m_Value = bOn;
    flNoise = flNoisea;
    flIntensity = flIntensitya;
  }
  if ( bOn )
  {
    if ( flIntensity == this->m_flVolumetricIntensity.m_Value )
    {
      v9 = flNoise == this->m_flNoiseStrength.m_Value;
    }
    else
    {
      flPlaneOffsetb = flPlaneOffset;
      flNoisec = flNoise;
      flIntensitye = flIntensity;
      (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      flNoise = flNoisec;
      v9 = flNoisec == this->m_flNoiseStrength.m_Value;
      this->m_flVolumetricIntensity.m_Value = flIntensitye;
      flPlaneOffset = flPlaneOffsetb;
    }
    if ( !v9 )
    {
      flNoiseb = flPlaneOffset;
      flIntensityb = flNoise;
      (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      flPlaneOffset = flNoiseb;
      this->m_flNoiseStrength.m_Value = flIntensityb;
    }
    if ( nPlanes != this->m_nNumPlanes.m_Value )
    {
      flIntensityc = flPlaneOffset;
      (*(this->_vptr_IHandleEntity + 22))(this, 1204, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      flPlaneOffset = flIntensityc;
      this->m_nNumPlanes.m_Value = nPlanes;
    }
    if ( flPlaneOffset != this->m_flPlaneOffset.m_Value )
    {
      flIntensityd = flPlaneOffset;
      (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flPlaneOffset.m_Value = flIntensityd;
    }
  }
}


// CEnvProjectedTexture::InputTurnOn  (line 144, @0x00000000021be9d0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputTurnOn(CEnvProjectedTexture *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bState.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bState.m_Value = 1;
  }
}


// CEnvProjectedTexture::InputTurnOff  (line 149, @0x00000000021bea50, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputTurnOff(CEnvProjectedTexture *const this, inputdata_t *const inputdata)
{
  if ( this->m_bState.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bState.m_Value = 0;
  }
}


// CEnvProjectedTexture::InputAlwaysUpdateOn  (line 154, @0x00000000021bea10, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputAlwaysUpdateOn(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  if ( !this->m_bAlwaysUpdate.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1157, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysUpdate.m_Value = 1;
  }
}


// CEnvProjectedTexture::InputAlwaysUpdateOff  (line 159, @0x00000000021bea90, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputAlwaysUpdateOff(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  if ( this->m_bAlwaysUpdate.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1157, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysUpdate.m_Value = 0;
  }
}


// CEnvProjectedTexture::InputSetFOV  (line 164, @0x00000000021be4c0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvProjectedTexture::InputSetFOV(CEnvProjectedTexture *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flLightFOV.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLightFOV.m_Value = v4;
  }
}


// CEnvProjectedTexture::InputSetTarget  (line 169, @0x00000000021bed60, libserver.so)  // inlines: CEntityHandle, Entity, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEntityInstance*, operator!=, operator=
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvProjectedTexture::InputSetTarget(CEnvProjectedTexture *const this, inputdata_t *const inputdata)
{
  CEntityInstance *m_pInstance; // r12
  int m_int; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 m_Index; // eax
  CEntityInstance *v8; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx

  m_pInstance = 0;
  m_int = inputdata->value.m_int;
  if ( (m_int + 2) > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_int >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_int & 0x1FF];
      if ( v6 != 0 && m_int == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  m_Index = this->m_hTargetEntity.m_Value.m_Index;
  v8 = 0;
  if ( m_Index + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Value.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hTargetEntity.m_Value.m_Index & 0x1FF];
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        v8 = v10->m_pInstance;
    }
  }
  if ( m_pInstance != v8 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
    {
      v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v13 = 0x7FFF;
      else
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEntity.m_Value.m_Index) = v13 | this->m_hTargetEntity.m_Value.m_Index & 0x8000;
      this->m_hTargetEntity.m_Value.m_Index = (v12 << 15) | this->m_hTargetEntity.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Value.m_Index = -1;
    }
  }
}


// CEnvProjectedTexture::InputSetCameraSpace  (line 174, @0x00000000021be300, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputSetCameraSpace(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  char m_char; // r12

  m_char = inputdata->value.m_char;
  if ( m_char != this->m_bCameraSpace.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCameraSpace.m_Value = m_char;
  }
}


// CEnvProjectedTexture::InputSetLightOnlyTarget  (line 179, @0x00000000021be340, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputSetLightOnlyTarget(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  char m_char; // r12

  m_char = inputdata->value.m_char;
  if ( m_char != this->m_bLightOnlyTarget.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1166, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLightOnlyTarget.m_Value = m_char;
  }
}


// CEnvProjectedTexture::InputSetLightWorld  (line 184, @0x00000000021be2c0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputSetLightWorld(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  char m_char; // r12

  m_char = inputdata->value.m_char;
  if ( m_char != this->m_bLightWorld.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1167, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLightWorld.m_Value = m_char;
  }
}


// CEnvProjectedTexture::InputSetEnableShadows  (line 189, @0x00000000021be280, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CEnvProjectedTexture::InputSetEnableShadows(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  char m_char; // r12

  m_char = inputdata->value.m_char;
  if ( m_char != this->m_bEnableShadows.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnableShadows.m_Value = m_char;
  }
}


// CEnvProjectedTexture::InputSetLightColor  (line 194, @0x00000000021be380, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=
void __fastcall CEnvProjectedTexture::InputSetLightColor(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_LightColor )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1176, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LightColor = m_int;
  }
}


// CEnvProjectedTexture::InputSetLightIntensity  (line 199, @0x00000000021be440, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvProjectedTexture::InputSetLightIntensity(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flIntensity.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flIntensity.m_Value = v4;
  }
}


// CEnvProjectedTexture::InputSetAmbient  (line 204, @0x00000000021be3c0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvProjectedTexture::InputSetAmbient(CEnvProjectedTexture *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flAmbient.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1220, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flAmbient.m_Value = v4;
  }
}


// CEnvProjectedTexture::InputSetSpotlightTexture  (line 209, @0x00000000021c3b70, libserver.so)  // inlines: AssignTo, GetForModify, NetworkStateChanged, TempString, ToString, V_strncpy<int>
// calls: _V_strncpy, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_21C3BA3, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvProjectedTexture::InputSetSpotlightTexture(
        CEnvProjectedTexture *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // di
  const char *m_pszString; // r12
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
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
  (*(this->_vptr_IHandleEntity + 22))(this, 1224, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  _V_strncpy(&this->m_SpotlightTextureName, m_pszString, 260);
}


// CEnvProjectedTexture::Precache  (line 215, @0x00000000021de240, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
void __fastcall CEnvProjectedTexture::Precache(
        CEnvProjectedTexture *const this,
        const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( this->m_SpotlightTextureName.m_Value[0] != 0 )
    PrecacheMaterial(this->m_SpotlightTextureName.m_Value, pContext);
}


// CEnvProjectedTexture::Activate  (line 226, @0x00000000021bf970, libserver.so)  // inlines: GetSpawnFlags, NetworkStateChanged, Set, curtime, operator=<bool>
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseModelEntity::Activate
// globals: CEnvProjectedTexture::InitialThink(void)
void __fastcall CEnvProjectedTexture::Activate(CEnvProjectedTexture *const this, ActivateType_t activateType)
{
  unsigned int m_Value; // eax
  bool v5; // r12
  bool v6; // r12
  double v7; // xmm1_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v10; // xmm0_8

  m_Value = this->m_spawnflags.m_Value;
  v5 = m_Value & 1;
  if ( (this->m_spawnflags.m_Value & 1) != this->m_bState.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_Value = this->m_spawnflags.m_Value;
    this->m_bState.m_Value = v5;
  }
  v6 = (m_Value & 2) != 0;
  if ( v6 != this->m_bAlwaysUpdate.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1157, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAlwaysUpdate.m_Value = v6;
  }
  CBaseEntity::ThinkSet(this, CEnvProjectedTexture::InitialThink, 0.0, 0, 0);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v10) = 0;
    *&v10 = v8->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v10 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v10, v7, 0);
  CBaseModelEntity::Activate(this, activateType);
}


// CEnvProjectedTexture::InitialThink  (line 238, @0x00000000021bf0b0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CGameEntitySystem::FindEntityByName
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEnvProjectedTexture::InitialThink(CEnvProjectedTexture *const this)
{
  CBaseEntity *EntityByName; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v5; // r12
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  m_Index = this->m_hTargetEntity.m_Value.m_Index;
  m_pInstance = 0;
  v5 = EntityByName;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hTargetEntity.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( v5 != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v5 != 0 && (m_pEntity = v5->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEntity.m_Value.m_Index) = v10 | this->m_hTargetEntity.m_Value.m_Index & 0x8000;
      this->m_hTargetEntity.m_Value.m_Index = (v9 << 15) | this->m_hTargetEntity.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Value.m_Index = -1;
    }
  }
}


// CEnvProjectedTexture::UpdateTransmitState  (line 244, @0x00000000021bb180, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvProjectedTexture::UpdateTransmitState(CEnvProjectedTexture *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CC_CreateFlashlight  (line 251, @0x00000000021bbc40, libserver.so)  // inlines: CUtlSymbolLarge, SetEntityName
// calls: UTIL_GetCommandClient, CreateEntityByName, __dynamic_cast, AllocPooledString, CEntityIdentity::SetEntityName
// strings: "env_projectedtexture"
// globals: `typeinfo for'CEnvProjectedTexture
void __fastcall CC_CreateFlashlight(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  CBasePlayer *v4; // rbx
  vec_t v5; // xmm1_4
  CBaseEntity *EntityByName; // rax
  _QWORD *v7; // rbx
  CEntityIdentity *v8; // rdi
  UtlSymLargeId_t v9[2]; // [rsp+0h] [rbp-50h] BYREF
  string_t name; // [rsp+10h] [rbp-40h] BYREF
  QAngle angles; // [rsp+20h] [rbp-30h] BYREF
  Vector origin; // [rsp+30h] [rbp-20h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient != 0 )
  {
    angles = *(*(CommandClient->_vptr_IHandleEntity + 165))(CommandClient);
    *&origin.x = (*(v4->_vptr_IHandleEntity + 164))(v4);
    origin.z = v5;
    EntityByName = CreateEntityByName("env_projectedtexture", -1);
    if ( EntityByName != 0 )
      v7 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CEnvProjectedTexture, 0);
    else
      v7 = 0;
    if ( args->m_nArgc > 1 )
    {
      AllocPooledString(v9, args->m_ppArgv[1]);
      v8 = v7[1];
      name.u.m_Id = v9[0];
      CEntityIdentity::SetEntityName(v8, &name);
    }
    (*(*v7 + 1024LL))(v7, &origin, &angles, 0);
  }
}


