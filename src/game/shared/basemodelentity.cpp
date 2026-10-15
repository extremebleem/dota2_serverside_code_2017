// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/basemodelentity.cpp:32
class CEntityComponentHelperFactory_CBodyComponentBaseModelEntity : CEntityComponentHelpers {
	CEntityComponentHelperFactory_CBodyComponentBaseModelEntity();

	// sizeof = 1
};

// src/game/shared/basemodelentity.cpp:34
class C_CBaseModelEntity_MapInstall {
	C_CBaseModelEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/basemodelentity.cpp:878
class C_CModelPointEntity_MapInstall {
	C_CModelPointEntity_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CModelPointEntity::GetDataDescMap  (line 28, @0x0000000002058ac0, libserver.so)
// globals: CModelPointEntity::m_DataMap
datamap_t *__fastcall CModelPointEntity::GetDataDescMap(CModelPointEntity *const this)
{
  return &CModelPointEntity::m_DataMap;
}


// CModelPointEntity::AddDatadescMetadataKeys  (line 28, @0x000000000206d7c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CModelPointEntity::GetEntityClass(void)
void __fastcall CModelPointEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CModelPointEntity::GetEntityClass);
}


// CModelPointEntity::GetBaseMap  (line 28, @0x000000000206d7e0, libserver.so)
// globals: CBaseModelEntity::m_DataMap
datamap_t *__cdecl CModelPointEntity::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CModelPointEntity>  (line 28, @0x000000000206d7f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CModelPointEntity"
// globals: `guard variable for'DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder, CBaseModelEntity::m_DataMap, CModelPointEntity::GetEntityClass(void), DataMapInit<CModelPointEntity>(CModelPointEntity *)::dataDesc, CModelPointEntity::m_DataMap, DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CModelPointEntity>(CModelPointEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_pszBase = "CModelPointEntity";
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CModelPointEntity>(CModelPointEntity *)::nameHolder,
      &_dso_handle);
  }
  CModelPointEntity::m_DataMap.dataNumFields = 1;
  CModelPointEntity::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CModelPointEntity::m_DataMap.dataDesc = DataMapInit<CModelPointEntity>(CModelPointEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CModelPointEntity::m_DataMap, CModelPointEntity::GetEntityClass);
  return &CModelPointEntity::m_DataMap;
}


// CBodyComponentBaseModelEntity::GetEntComponentInfo  (line 32, @0x000000000206d8c0, libserver.so)  // inlines: HashStringFastCaseless, HashToShort
// calls: __cxa_guard_acquire, HashString, MurmurHash2LowerCase, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperInit_CBodyComponentBaseModelEntity
// strings: "CBodyComponentBaseModelEntity", "CBodyComponentBaseModelEntityReferenced", "CBodyComponentBaseModelEntityReferencedPtr"
// globals: CBodyComponentBaseModelEntity::s_EntComponentInfo, `guard variable for'CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity, CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity
EntComponentInfo_t *__cdecl CBodyComponentBaseModelEntity::GetEntComponentInfo()
{
  unsigned int v1; // eax
  uint32 v2; // eax

  if ( CBodyComponentBaseModelEntity::s_EntComponentInfo.m_pName != 0 )
    return &CBodyComponentBaseModelEntity::s_EntComponentInfo;
  if ( `guard variable for'CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity == 0
    && __cxa_guard_acquire(&`guard variable for'CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity) != 0 )
  {
    CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity.Data1 = -594134044;
    v1 = HashString("CBodyComponentBaseModelEntity");
    CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity.Data2 = HIWORD(v1) ^ v1;
    v2 = MurmurHash2LowerCase("CBodyComponentBaseModelEntity", 0x3501A674u);
    CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity.Data3 = HIWORD(v2) ^ v2;
    __cxa_guard_release(&`guard variable for'CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity);
  }
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_nRuntimeIndex = -1;
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_nFlags = 2;
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_id = CBodyComponentBaseModelEntity::GetEntComponentInfo(void)::UUID_CBodyComponentBaseModelEntity;
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_pName = "BodyComponentBaseModelEntity";
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_pCPPClassname = "CBodyComponentBaseModelEntity";
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_pNetworkDataReferencedDescription = "CBodyComponentBaseModelEntityReferenced";
  CBodyComponentBaseModelEntity::s_EntComponentInfo.m_pNetworkDataReferencedPtrPropDescription = "CBodyComponentBaseModel"
                                                                                                 "EntityReferencedPtr";
  return &CBodyComponentBaseModelEntity::s_EntComponentInfo;
}


// CEntityComponentHelperInit_CBodyComponentBaseModelEntity  (line 32, @0x000000000206d9e0, libserver.so)  // inlines: CEntityComponentHelper, CEntityComponentHelperReferenced, CEntityComponentHelperT, GetBaseComponentHelper, SetPriority
// calls: CBodyComponentBaseModelEntity::GetEntComponentInfo, CEntityComponentHelperInit_CBodyComponentSkeletonInstance, __cxa_guard_acquire, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// callers: CEntityComponentHelperFactory_CBodyComponentBaseModelEntity::CEntityComponentHelperFactory_CBodyComponentBaseModelEntity, _GLOBAL__sub_I__unity_source_files_02.cpp
// globals: `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper, CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::s_bIsInitialized, CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper
CEntityComponentHelper *__cdecl CEntityComponentHelperInit_CBodyComponentBaseModelEntity()
{
  EntComponentInfo_t *EntComponentInfo; // rbx
  CEntityComponentHelper *inited; // rax

  if ( `guard variable for'CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper == 0
    && __cxa_guard_acquire(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper) != 0 )
  {
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_flags = 0;
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_pInfo = 0;
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_nPriority = 0;
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper._vptr_CEntityComponentHelper = &off_3FEE7B0;
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_pInfo = CBodyComponentBaseModelEntity::GetEntComponentInfo();
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_bFinalized = 0;
    __cxa_guard_release(&`guard variable for'CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper);
  }
  if ( !CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::s_bIsInitialized )
  {
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::s_bIsInitialized = 1;
    EntComponentInfo = CBodyComponentBaseModelEntity::GetEntComponentInfo();
    inited = CEntityComponentHelperInit_CBodyComponentSkeletonInstance();
    EntComponentInfo->m_pScriptClassDesc = 0;
    EntComponentInfo->m_pBaseClassComponentHelper = inited;
    CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper.m_nPriority = 17407;
  }
  return &CEntityComponentHelperInit_CBodyComponentBaseModelEntity(void)::componentHelper;
}


// CEntityComponentHelperFactory_CBodyComponentBaseModelEntity::CEntityComponentHelperFactory_CBodyComponentBaseModelEntity  (line 32, @0x000000000206dac0, libserver.so)  // inlines: AddToList
// calls: CEntityComponentHelperInit_CBodyComponentBaseModelEntity
// globals: CEntityComponentHelpers::GetList(void)::g_pList
void __fastcall CEntityComponentHelperFactory_CBodyComponentBaseModelEntity::CEntityComponentHelperFactory_CBodyComponentBaseModelEntity(
        CEntityComponentHelperFactory_CBodyComponentBaseModelEntity *const this)
{
  CEntityComponentHelper *inited; // rax
  CEntityComponentHelper *v2; // rdx

  inited = CEntityComponentHelperInit_CBodyComponentBaseModelEntity();
  v2 = CEntityComponentHelpers::GetList(void)::g_pList;
  CEntityComponentHelpers::GetList(void)::g_pList = inited;
  inited->m_pNext = v2;
}


// CBaseModelEntity::YouForgotToImplementOrDeclareServerClass  (line 34, @0x0000000002058ad0, libserver.so)
int __fastcall CBaseModelEntity::YouForgotToImplementOrDeclareServerClass(CBaseModelEntity *const this)
{
  return 0;
}


// CBaseModelEntity::GetServerClass  (line 34, @0x000000000205e0b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseModelEntity::GetServerClass(CBaseModelEntity *const this)
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


// CBaseModelEntity::CBaseModelEntity  (line 43, @0x000000000206e000, libserver.so)  // inlines: BuildFlattenedSerializerInfo_t, CNetworkColorBase, CNetworkVarBase, CNetworkViewOffsetVector, CNetworkedQuantizedFloat, CUtlStringToken, ClearSolidFlags, Cm_vecViewOffsetInitializer, Color, EnsureValidValue<RenderFx_t>, EnsureValidValue<RenderMode_t>, EnsureValidValue<float>, FindOrCreateFlattenedSerializer<CBaseModelEntity>, GetElement, GetEncoder, GetQuantizedFloatEncoderByIndex, Init, Init<true>, IsUnflattenedField<CBaseModelEntity>, LatchComponent, NetworkComponentChanged, NetworkStateChanged, NetworkVar_m_Collision, NetworkVar_m_Glow, Schema_StaticBinding, Set, SetAlpha, SetBlue, SetCollisionBounds, SetCollisionGroup, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetRenderFX, SetSolid, SetUnflattened, SetVal, SetViewOffset, a, operator=, operator=<RenderFx_t>, operator=<RenderMode_t>, operator=<Vector>, operator=<float>, operator=<int>, operator[], ~NetworkVar_m_Collision, ~NetworkVar_m_Glow
// calls: CBaseEntity::CBaseEntity, CCollisionProperty::CCollisionProperty, CGlowProperty::CGlowProperty, FindOrCreateQuantizedFloatEncoder, CBaseModelEntity::SetRenderAlpha, CNetworkTransmitComponent::StateChanged, CCollisionProperty::Init, CCollisionProperty::SetCollisionGroup, CCollisionProperty::SetCollisionBounds, CCollisionProperty::SetSolidFlags, CGlowProperty::Init, CBaseModelEntity::Schema_VerifyBindingIsRegistered (16 total)
// callers: CBaseClientUIEntity::CBaseClientUIEntity, CBaseModelEntity::CEntityInstanceEntityClass::ConstructInstance, CLightEntity::CEntityInstanceEntityClass::ConstructInstance, CLightSpotEntity::CEntityInstanceEntityClass::ConstructInstance, CLightDirectionalEntity::CEntityInstanceEntityClass::ConstructInstance, CLightEnvironmentEntity::CEntityInstanceEntityClass::ConstructInstance, CEnvSky::CEnvSky, CServerOnlyModelEntity::CEntityInstanceEntityClass::ConstructInstance, CModelPointEntity::CEntityInstanceEntityClass::ConstructInstance, CEntityBlocker::CEntityInstanceEntityClass::ConstructInstance, CFuncRotating::CEntityInstanceEntityClass::ConstructInstance, CMarkupVolume::CEntityInstanceEntityClass::ConstructInstance (91 total)
// strings: "m_vecX", "m_vecY", "m_vecZ", "m_vecViewOffset"
// globals: IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseModelEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle
void __fastcall CBaseModelEntity::CBaseModelEntity(CBaseModelEntity *const this)
{
  bool v2; // zf
  __int64 v3; // rax
  CNetworkViewOffsetVector *p_m_vecViewOffset; // r15
  uint16 QuantizedFloatEncoder; // ax
  float m_Value; // xmm1_4
  __int64 v7; // rax
  float v8; // xmm0_4
  uint16 v9; // ax
  float v10; // xmm1_4
  __int64 v11; // rax
  float v12; // xmm0_4
  uint16 v13; // ax
  float v14; // xmm1_4
  __int64 v15; // rax
  float v16; // xmm0_4
  __int64 v17; // rsi
  IFlattenedSerializers *v18; // r12
  char v19; // al
  unsigned __int8 v20; // r12
  double v21; // xmm1_8
  __int64 v22; // xmm0_8
  double v23; // xmm2_8
  double v24; // xmm3_8
  double v25; // xmm4_8
  __int64 i; // r12
  double v27; // xmm0_8
  __int64 v28; // rax
  CNetworkedQuantizedFloat *p_m_vecX; // rdx
  __int64 v30; // rax
  double v31; // xmm1_8
  CNetworkedQuantizedFloat *p_m_vecY; // rdx
  INetworkStateChangedRouter *m_pStateChanged; // rdi
  signed __int64 v34; // rdx
  _QWORD v35[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v36; // [rsp+30h] [rbp-40h]
  char v37; // [rsp+38h] [rbp-38h]
  char v38; // [rsp+39h] [rbp-37h]
  char v39; // [rsp+3Ah] [rbp-36h]

  CBaseEntity::CBaseEntity(this);
  this->m_clrRender = 0;
  v2 = this->m_clrRender.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_3FEE7F0;
  this->m_nRenderMode.m_Value = RenderMode_t::kRenderNormal;
  this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x33Cu, -1, -1);
    this->m_clrRender.m_Value._color[1] = 0;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = 0;
  }
  if ( this->m_clrRender.m_Value._color[3] != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = 0;
  }
  this->m_LightGroup.m_Value.m_nHashCode = 0;
  CCollisionProperty::CCollisionProperty(&this->m_Collision);
  this->m_Collision._vptr_ICollideable = off_3FECBB0;
  CGlowProperty::CGlowProperty(&this->m_Glow);
  this->m_flGlowBackfaceMult.m_Value = 0.0;
  this->m_Glow._vptr_CGlowProperty = &off_3FECCD0;
  this->m_fadeMinDist.m_Value = 0.0;
  this->m_fadeMaxDist.m_Value = 0.0;
  v3 = *&vec3_origin.x;
  this->m_flFadeScale.m_Value = 0.0;
  this->m_vecViewOffset.m_vecX.m_Value = 0.0;
  p_m_vecViewOffset = &this->m_vecViewOffset;
  *&this->m_vecViewOffset.m_Value.x = v3;
  this->m_vecViewOffset.m_Value.z = vec3_origin.z;
  QuantizedFloatEncoder = FindOrCreateQuantizedFloatEncoder(1, "m_vecX", 2524840829LL, 10, 4, -64.0, 64.0);
  this->m_vecViewOffset.m_vecX.m_nEncoder = QuantizedFloatEncoder;
  m_Value = this->m_vecViewOffset.m_vecX.m_Value;
  v7 = g_pQuantizedFloatEncoders + 32LL * QuantizedFloatEncoder;
  v8 = *(v7 + 12);
  if ( m_Value <= v8 )
    v8 = fmaxf(*(v7 + 8), m_Value);
  this->m_vecViewOffset.m_vecX.m_Value = v8;
  this->m_vecViewOffset.m_vecY.m_Value = 0.0;
  v9 = FindOrCreateQuantizedFloatEncoder(1, "m_vecY", 2625667396LL, 10, 4, -64.0, 64.0);
  this->m_vecViewOffset.m_vecY.m_nEncoder = v9;
  v10 = this->m_vecViewOffset.m_vecY.m_Value;
  v11 = g_pQuantizedFloatEncoders + 32LL * v9;
  v12 = *(v11 + 12);
  if ( v10 <= v12 )
    v12 = fmaxf(*(v11 + 8), v10);
  this->m_vecViewOffset.m_vecY.m_Value = v12;
  this->m_vecViewOffset.m_vecZ.m_Value = 0.0;
  v13 = FindOrCreateQuantizedFloatEncoder(1, "m_vecZ", 1430821094, 20, 4, 0.0, 128.0);
  this->m_vecViewOffset.m_vecZ.m_nEncoder = v13;
  v14 = this->m_vecViewOffset.m_vecZ.m_Value;
  v15 = g_pQuantizedFloatEncoders + 32LL * v13;
  v16 = *(v15 + 12);
  if ( v14 <= v16 )
    v16 = fmaxf(*(v15 + 8), v14);
  v17 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseModelEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  this->m_vecViewOffset.m_vecZ.m_Value = v16;
  this->m_m_vecViewOffsetInitializer._vptr_INetworkStateChangedRouter = &off_3FECD10;
  this->m_vecViewOffset.m_pStateChanged = &this->m_m_vecViewOffsetInitializer;
  v18 = g_pFlattenedSerializers;
  if ( v17 == 0 )
  {
    v35[0] = 0;
    v35[1] = 0;
    v36 = 0;
    CBaseModelEntity::Schema_VerifyBindingIsRegistered();
    v38 = 0;
    v37 = 0;
    v39 = 0;
    v35[0] = CBaseModelEntity::s_pSchemaBinding->m_pClassInfo_N;
    v36 = &IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseModelEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
    (**v18)(v18, v35, 1);
    v17 = IFlattenedSerializers::FindOrCreateFlattenedSerializer<CBaseModelEntity>(INetworkSerializerBindingBuildFilter *,bool,bool)::nMessageHandle;
  }
  v19 = (*(*v18 + 296LL))(v18, v17, "m_vecViewOffset");
  v2 = this->m_nRenderMode.m_Value == RenderMode_t::kRenderNormal;
  this->m_vecViewOffset.m_vecX.m_bUnflattened = v19;
  this->m_pCollision = &this->m_Collision;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderNormal;
  }
  v20 = this->m_clrRender.m_Value._color[3];
  if ( this->m_clrRender.m_Value._color[0] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[0] = -1;
  }
  if ( this->m_clrRender.m_Value._color[1] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = -1;
  }
  if ( this->m_clrRender.m_Value._color[2] != 0xFF )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = -1;
  }
  if ( v20 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v20;
  }
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  if ( this->m_nRenderFX.m_Value != RenderFx_t::kRenderFxNone )
  {
    CNetworkTransmitComponent::StateChanged(&this->m_NetworkTransmitComponent, this, 0x32Eu, -1, -1);
    this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  }
  CCollisionProperty::Init(&this->m_Collision, this);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 4);
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vec3_origin, &vec3_origin);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, 0);
  CGlowProperty::Init(&this->m_Glow, this);
  v22 = 1065353216;
  if ( this->m_flGlowBackfaceMult.m_Value != 1.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1080, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1.0);
    this->m_flGlowBackfaceMult.m_Value = 1.0;
  }
  v23 = 0.0;
  if ( this->m_fadeMinDist.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1084, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v22, v21, 0.0);
    this->m_fadeMinDist.m_Value = 0.0;
  }
  v24 = 0.0;
  if ( this->m_fadeMaxDist.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1088, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v22, v21, v23, 0.0);
    this->m_fadeMaxDist.m_Value = 0.0;
  }
  v25 = 0.0;
  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v22, v21, v23, v24, 0.0);
    this->m_flFadeScale.m_Value = 0.0;
  }
  for ( i = 0; i != 3; ++i )
  {
    *&v27 = *(&vec3_origin.x + i);
    if ( *&v27 != *(&p_m_vecViewOffset->m_Value.x + i) )
    {
      *(&p_m_vecViewOffset->m_Value.x + i) = LODWORD(v27);
      p_m_vecX = &this->m_vecViewOffset.m_vecX;
      if ( i != 0 )
      {
        p_m_vecX = &this->m_vecViewOffset.m_vecY;
        if ( i != 1 )
          p_m_vecX = &this->m_vecViewOffset.m_vecZ;
      }
      v30 = g_pQuantizedFloatEncoders + 32LL * p_m_vecX->m_nEncoder;
      *&v31 = *(v30 + 12);
      if ( *&v27 <= *&v31 )
      {
        *&v31 = *(v30 + 8);
        *&v31 = fmaxf(*&v31, *&v27);
      }
      p_m_vecX->m_Value = *&v31;
      *(&p_m_vecViewOffset->m_Value.x + i) = LODWORD(v31);
      p_m_vecY = &this->m_vecViewOffset.m_vecX;
      if ( i != 0 )
      {
        p_m_vecY = &this->m_vecViewOffset.m_vecY;
        if ( i != 1 )
          p_m_vecY = &this->m_vecViewOffset.m_vecZ;
      }
      m_pStateChanged = this->m_vecViewOffset.m_pStateChanged;
      v34 = p_m_vecY - p_m_vecViewOffset;
      if ( m_pStateChanged != 0 )
        (*m_pStateChanged->_vptr_INetworkStateChangedRouter)(
          m_pStateChanged,
          &this->m_vecViewOffset,
          v34,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v27,
          v31,
          v23,
          v24,
          v25);
    }
  }
  this->m_vSupport.x = 0.0;
  v28 = 0;
  this->m_vSupport.y = 0.0;
  this->m_vSupport.z = 0.0;
  this->m_bHasCollision = 0;
  this->m_iViewerID = -1;
  this->m_iTeamVisibilityBitmask = 0;
  this->m_bVisibilityDirtyFlag = 1;
  do
    this->m_iFOWTempViewerID[v28++] = -1;
  while ( v28 != 10 );
}


// CBaseModelEntity::~CBaseModelEntity  (line 95, @0x0000000002059980, libserver.so)  // inlines: ~NetworkVar_m_Collision, ~NetworkVar_m_Glow
// calls: CGlowProperty::~CGlowProperty, CCollisionProperty::~CCollisionProperty, CBaseEntity::~CBaseEntity
// callers: CBaseClientUIEntity::~CBaseClientUIEntity, CBaseClientUIEntity::CBaseClientUIEntity, CBreakableProp::~CBreakableProp, CDevtestHierarchy2::~CDevtestHierarchy2, CDevtestHierarchyChild::~CDevtestHierarchyChild, CDevtestHierarchy::~CDevtestHierarchy, CLightEntity::~CLightEntity, CLightSpotEntity::~CLightSpotEntity, CLightDirectionalEntity::~CLightDirectionalEntity, CLightEnvironmentEntity::~CLightEnvironmentEntity, CTonemapTrigger::~CTonemapTrigger, CFogTrigger::~CFogTrigger (227 total)
void __fastcall CBaseModelEntity::~CBaseModelEntity(CBaseModelEntity *const this)
{
  CBaseModelEntity::NetworkVar_m_Glow *p_m_Glow; // rdi

  p_m_Glow = &this->m_Glow;
  p_m_Glow[-14]._vptr_CGlowProperty = &off_3FEE7F0;
  p_m_Glow->_vptr_CGlowProperty = &off_3FECCD0;
  CGlowProperty::~CGlowProperty(p_m_Glow);
  this->m_Collision._vptr_ICollideable = off_3FECBB0;
  CCollisionProperty::~CCollisionProperty(&this->m_Collision);
  CBaseEntity::~CBaseEntity(this);
}


// CBaseModelEntity::~CBaseModelEntity  (line 95, @0x00000000020599e0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBaseModelEntity::~CBaseModelEntity(CBaseModelEntity *const this)
{
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseModelEntity::Connect  (line 113, @0x0000000002059a80, libserver.so)
// calls: CBaseEntity::Connect, CRenderComponent::Connect
// callers: CBaseMultiplayerPlayer::Connect, CDOTA_BaseNPC::Connect
void __fastcall CBaseModelEntity::Connect(CBaseModelEntity *const this)
{
  CBaseEntity::Connect(this);
  CRenderComponent::Connect(this->m_CRenderComponent, this);
}


// CBaseModelEntity::SpawnShared  (line 131, @0x0000000002080590, libserver.so)  // inlines: AssignTo, Base, CCollisionAttributeWriter, CNetworkVarBase, Color, Element, EmptyValue<Vector>, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FindKeyHash, FromUint32, Get<Color>, Get<Vector>, Get<int>, GetValue, GetValue<Color>, GetValue<Vector>, GetValue<int>, GetValueString, Init, NetworkStateChanged, Release, Set, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRawColor, SetRed, SetRenderColor, SetRenderColorAndAlpha, SetVal, TempString, VPhysicsCollisionAttribute_t, VariantFieldTypeName, a, atoi, operator=, operator[], ~CCollisionAttributeWriter
// calls: CBaseEntity::SpawnShared, CCollisionProperty::CollisionAttributeChanged, CEntityKeyValues::HasValue, CCollisionProperty::SetCollisionBounds, CDOTAFogOfWarSystem::AddFOWEntity, VPhysicsCollisionAttribute_t::Compare, V_StringToColor, CBaseModelEntity::SetRenderAlpha, VariantFieldTypeName, Warning, V_sscanf, strtol (14 total)
// strings: "No free conversion of %s variant to Color right now\n", "No free conversion of %s variant to Vector right now\n", "js_raw_args", "No conversion from %s to int now\n", "js_array", "js_object" (22 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2080E96, jpt_2081248
void __fastcall CBaseModelEntity::SpawnShared(CBaseModelEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rdx
  __int64 m_nAllocated; // rcx
  __int64 v6; // r8
  int m_nCount; // esi
  __int64 v8; // rax
  uint64 m_uint64; // rsi
  CEntityVariant *p_m_value; // rax
  __int64 v11; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // r13
  __int64 v17; // rax
  uint64 v18; // rsi
  CEntityVariant *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v22; // rcx
  __int64 v23; // r8
  int v24; // esi
  __int64 v25; // r14
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rax
  uint64 v27; // rsi
  CEntityVariant *v28; // rax
  __int64 v29; // rax
  unsigned __int64 m_Value; // rdx
  unsigned __int64 v31; // rdx
  CCollisionProperty *m_pCollisionProp; // rdx
  char v33; // si
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // cx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v42; // rdx
  CEntityVariant *v43; // rdi
  int v44; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v45; // cx
  __int64 v46; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v47; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rdx
  CEntityVariant *v49; // rdi
  int v50; // esi
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rdx
  CEntityVariant *v54; // rdx
  int v55; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v56; // cx
  __int64 v57; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v58; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rdx
  CEntityVariant *v60; // rcx
  int v61; // esi
  __int64 v62; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rdx
  CEntityVariant *v65; // rdx
  int16 v66; // ax
  unsigned int v67; // r8d
  unsigned __int8 v68; // r13
  unsigned int v69; // r14d
  unsigned __int8 v70; // al
  int16 v71; // ax
  uint64 v72; // rsi
  int16 m_type; // ax
  CNetworkColorBase<Color,CBaseModelEntity::NetworkVar_m_clrRender> m_int; // r13d
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  int16 v78; // ax
  vec_t v79; // xmm2_4
  vec_t v80; // xmm0_4
  vec_t v81; // xmm1_4
  int16 v82; // ax
  const char *v83; // rax
  const char *v84; // rax
  const char *v85; // rax
  const char *v86; // rax
  int v87; // eax
  int v88; // eax
  const char *v89; // rsi
  float v90; // [rsp+0h] [rbp-B0h]
  float v91; // [rsp+0h] [rbp-B0h]
  unsigned __int8 v92; // [rsp+4h] [rbp-ACh]
  vec_t v93; // [rsp+4h] [rbp-ACh]
  vec_t v94; // [rsp+4h] [rbp-ACh]
  uint64 nInteractsExcludeb; // [rsp+8h] [rbp-A8h]
  uint64 nInteractsExcludec; // [rsp+8h] [rbp-A8h]
  uint64 nInteractsExcluded; // [rsp+8h] [rbp-A8h]
  uint64 nInteractsExcludee; // [rsp+8h] [rbp-A8h]
  uint64 nInteractsExcludef; // [rsp+8h] [rbp-A8h]
  unsigned __int8 nInteractsExclude; // [rsp+8h] [rbp-A8h]
  unsigned __int8 nInteractsExcludea; // [rsp+8h] [rbp-A8h]
  vec_t nInteractsExcludeg; // [rsp+8h] [rbp-A8h]
  vec_t nInteractsExcludeh; // [rsp+8h] [rbp-A8h]
  Vector mins; // [rsp+10h] [rbp-A0h] BYREF
  Vector maxs; // [rsp+20h] [rbp-90h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+30h] [rbp-80h] BYREF
  CNetworkColorBase<Color,CBaseModelEntity::NetworkVar_m_clrRender> v107; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v108; // [rsp+78h] [rbp-38h]

  v108 = __readfsqword(0x28u);
  CBaseEntity::SpawnShared(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v8 = 0;
  v6 = m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    m_pElements = 0;
    if ( *(4 * v8) == 1119890347 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v8 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( *(&m_pElements->m_value.m_int + v8) != 1119890347 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    m_pElements = pKeyValues->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  m_uint64 = 0;
  p_m_value = &m_pElements[v8].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  v11 = (*(g_pVPhysics2->_vptr_IAppSystem + 60))(g_pVPhysics2, m_uint64, m_pElements, m_nAllocated, v6);
  v15 = pKeyValues->m_keyHashes.m_nCount;
  v16 = v11;
  if ( v15 <= 0 )
  {
LABEL_26:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    v18 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_25;
    goto LABEL_27;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v17 = 0;
  v14 = v13;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      v12 = 0;
      if ( *(4 * v17) == -228795792 )
        break;
      goto LABEL_19;
    }
    v12 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v12 = pKeyValues->m_keyHashes.m_pElements;
    if ( *(&v12->m_value.m_int + v17) != -228795792 )
    {
LABEL_19:
      if ( v15 <= ++v17 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  v18 = 0;
  v19 = &v12[v17].m_value;
  if ( v19->m_type == 30 )
LABEL_25:
    v18 = v19->m_uint64;
LABEL_27:
  v20 = (*(g_pVPhysics2->_vptr_IAppSystem + 60))(g_pVPhysics2, v18, v12, v13, v14);
  v24 = pKeyValues->m_keyHashes.m_nCount;
  v25 = v20;
  if ( v24 <= 0 )
  {
LABEL_39:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    v27 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_38;
    goto LABEL_40;
  }
  v22 = pKeyValues->m_keyHashes.m_nAllocated;
  v21 = 0;
  v23 = v22;
  while ( 2 )
  {
    if ( v22 == 0 )
    {
      if ( *(4 * v21) == 1989282678 )
        break;
      goto LABEL_32;
    }
    v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v22 > 9 )
      v26 = pKeyValues->m_keyHashes.m_pElements;
    if ( v26[v21] != 1989282678 )
    {
LABEL_32:
      if ( v24 <= ++v21 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v22 = pKeyValues->m_keyValues.m_pElements;
  else
    v22 = 0;
  v27 = 0;
  v28 = &v22[v21].m_value;
  if ( v28->m_type == 30 )
LABEL_38:
    v27 = v28->m_uint64;
LABEL_40:
  v29 = (*(g_pVPhysics2->_vptr_IAppSystem + 60))(g_pVPhysics2, v27, v21, v22, v23);
  if ( (v29 | v16 | v25) != 0 )
  {
    writer.m_pCollisionProp = &this->m_Collision;
    m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
    writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
    memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
    if ( m_Value != 0 )
      writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
    v31 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    if ( v31 != 0 )
    {
      writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
      v31 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
    }
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v31 )
    {
      nInteractsExcludeb = v29;
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v29 = nInteractsExcludeb;
      writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
    }
    if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
    {
      nInteractsExcludec = v29;
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v29 = nInteractsExcludec;
      writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
    }
    if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
    {
      nInteractsExcluded = v29;
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v29 = nInteractsExcluded;
      writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
    {
      nInteractsExcludee = v29;
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v29 = nInteractsExcludee;
      writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
    {
      nInteractsExcludef = v29;
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      v29 = nInteractsExcludef;
      writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
    }
    m_pCollisionProp = writer.m_pCollisionProp;
    v33 = 0;
    if ( (~writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value & v16) != 0 )
    {
      v33 = 1;
      writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value |= v16;
    }
    if ( (~m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value & v25) != 0 )
    {
      v34 = m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value;
      m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value |= v25;
      if ( (~v34 & v29) != 0 )
        goto LABEL_59;
      goto LABEL_60;
    }
    v34 = m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value;
    if ( (~v34 & v29) != 0 )
    {
LABEL_59:
      m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value = v34 | v29;
      goto LABEL_60;
    }
    if ( v33 != 0 )
    {
LABEL_60:
      CCollisionProperty::CollisionAttributeChanged(&this->m_Collision);
      if ( !writer.m_bReleased )
        goto LABEL_72;
    }
    else if ( !writer.m_bReleased )
    {
LABEL_72:
      writer.m_bReleased = 1;
      VPhysicsCollisionAttribute_t::Compare(&writer.m_pCollisionProp->m_collisionAttribute, &writer.m_OriginalState);
    }
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, 1738247524) )
  {
    v50 = pKeyValues->m_keyHashes.m_nCount;
    if ( v50 > 0 )
    {
      v35 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v50 > i; ++i )
      {
        if ( v35 != 0 )
        {
          v52 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v35 > 9 )
            v52 = pKeyValues->m_keyHashes.m_pElements;
          if ( v52[i] == 1738247524 )
          {
LABEL_103:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v53 = pKeyValues->m_keyValues.m_pElements;
            else
              v53 = 0;
            v54 = &v53[i].m_value;
            goto LABEL_145;
          }
        }
        else if ( *(4 * i) == 1738247524 )
        {
          goto LABEL_103;
        }
      }
    }
    v54 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_145:
    m_type = v54->m_type;
    m_int = 0;
    if ( m_type == 9 )
    {
      m_int = v54->m_int;
    }
    else if ( m_type == 30 )
    {
      v107 = 0;
      V_StringToColor(&v107, v54->m_uint64, v54, v35, v36);
      m_int = v107;
    }
    else
    {
      v84 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to Color right now\n", v84);
    }
    if ( *&this->m_clrRender != m_int )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_clrRender = m_int;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 588463423) )
    goto LABEL_63;
  v61 = pKeyValues->m_keyHashes.m_nCount;
  if ( v61 <= 0 )
  {
LABEL_128:
    v65 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_129;
  }
  v37 = pKeyValues->m_keyHashes.m_nAllocated;
  v62 = 0;
  while ( 2 )
  {
    if ( v37 == 0 )
    {
      if ( *(4 * v62) == 588463423 )
        break;
      goto LABEL_122;
    }
    v63 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v37 > 9 )
      v63 = pKeyValues->m_keyHashes.m_pElements;
    if ( v63[v62] != 588463423 )
    {
LABEL_122:
      if ( v61 <= ++v62 )
        goto LABEL_128;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v64 = pKeyValues->m_keyValues.m_pElements;
  else
    v64 = 0;
  v65 = &v64[v62].m_value;
LABEL_129:
  v66 = v65->m_type;
  if ( v66 == 9 )
  {
    v67 = v65->m_int;
  }
  else if ( v66 == 30 )
  {
    v107 = 0;
    V_StringToColor(&v107, v65->m_uint64, v65, v37, 0);
    v67 = v107;
  }
  else
  {
    v83 = VariantFieldTypeName(v66);
    Warning("No free conversion of %s variant to Color right now\n", v83);
    v67 = 0;
  }
  nInteractsExclude = v67;
  v68 = this->m_clrRender.m_Value._color[3];
  v69 = HIWORD(v67);
  v70 = BYTE1(v67);
  if ( this->m_clrRender.m_Value._color[0] != v67 )
  {
    v92 = BYTE1(v67);
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v70 = v92;
    this->m_clrRender.m_Value._color[0] = nInteractsExclude;
  }
  nInteractsExcludea = v70;
  if ( this->m_clrRender.m_Value._color[1] != v70 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = nInteractsExcludea;
  }
  if ( this->m_clrRender.m_Value._color[2] != v69 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = v69;
  }
  if ( v68 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v68;
  }
LABEL_63:
  if ( !CEntityKeyValues::HasValue(pKeyValues, 921822459) )
    goto LABEL_64;
  v55 = pKeyValues->m_keyHashes.m_nCount;
  if ( v55 <= 0 )
  {
LABEL_140:
    v60 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_141;
  }
  v56 = pKeyValues->m_keyHashes.m_nAllocated;
  v57 = 0;
  while ( 2 )
  {
    if ( v56 == 0 )
    {
      if ( *(4 * v57) == 921822459 )
        break;
      goto LABEL_111;
    }
    v58 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v56 > 9 )
      v58 = pKeyValues->m_keyHashes.m_pElements;
    if ( v58[v57] != 921822459 )
    {
LABEL_111:
      if ( v55 <= ++v57 )
        goto LABEL_140;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v59 = pKeyValues->m_keyValues.m_pElements;
  else
    v59 = 0;
  v60 = &v59[v57].m_value;
LABEL_141:
  v71 = v60->m_type;
  switch ( v71 )
  {
    case 0:
      LOBYTE(v72) = 0;
      break;
    case 1:
      LOBYTE(v72) = v60->m_float;
      break;
    case 5:
    case 6:
      LOBYTE(v72) = v60->m_char;
      break;
    case 26:
      LOBYTE(v72) = -1;
      if ( v60->m_int64 <= 0x7FFFFFFF )
      {
        LOBYTE(v72) = 0;
        if ( v60->m_uint64 >= 0xFFFFFFFF80000000LL )
          v72 = v60->m_uint64;
      }
      break;
    case 30:
      LOBYTE(v72) = strtol(v60->m_pszString, 0, 10);
      break;
    case 33:
      LOBYTE(v72) = -1;
      if ( v60->m_uint64 <= 0x7FFFFFFE )
        LOBYTE(v72) = v60->m_uint64;
      break;
    case 34:
      LOBYTE(v72) = v60->m_float64;
      break;
    case 37:
      LOBYTE(v72) = -1;
      if ( v60->m_int <= 0x7FFFFFFEu )
        LOBYTE(v72) = v60->m_int;
      break;
    default:
      switch ( v71 )
      {
        case 0:
          v89 = "void";
          break;
        case 1:
          v89 = "float";
          break;
        case 3:
          v89 = "vector";
          break;
        case 4:
          v89 = "quaternion";
          break;
        case 5:
          v89 = "integer";
          break;
        case 6:
          v89 = "boolean";
          break;
        case 8:
          v89 = "character";
          break;
        case 9:
          v89 = "color";
          break;
        case 13:
          v89 = "ehandle";
          break;
        case 25:
          v89 = "vector2d";
          break;
        case 26:
          v89 = "int64";
          break;
        case 27:
          v89 = "vector4d";
          break;
        case 28:
          v89 = "resourcehandle";
          break;
        case 30:
          v89 = "cstring";
          break;
        case 31:
          v89 = "hscript";
          break;
        case 32:
          v89 = "variant";
          break;
        case 33:
          v89 = "uint64";
          break;
        case 34:
          v89 = "float64";
          break;
        case 37:
          v89 = "unsigned";
          break;
        case 38:
          v89 = "utlstringtoken";
          break;
        case 39:
          v89 = "qangle";
          break;
        case 48:
          v89 = "hscript_lightbinding";
          break;
        case 49:
          v89 = "js_value";
          break;
        case 50:
          v89 = "js_object";
          break;
        case 51:
          v89 = "js_array";
          break;
        case 52:
          v89 = "js_raw_args";
          break;
        default:
          v89 = "unknown_variant_type";
          break;
      }
      Warning("No conversion from %s to int now\n", v89);
      LOBYTE(v72) = 0;
      break;
  }
  CBaseModelEntity::SetRenderAlpha(this, v72);
LABEL_64:
  mins = *(*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  maxs = *(*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1307688131) )
    goto LABEL_65;
  v44 = pKeyValues->m_keyHashes.m_nCount;
  if ( v44 <= 0 )
  {
LABEL_150:
    v49 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_151;
  }
  v45 = pKeyValues->m_keyHashes.m_nAllocated;
  v46 = 0;
  while ( 2 )
  {
    if ( v45 == 0 )
    {
      if ( *(4 * v46) == -1307688131 )
        break;
      goto LABEL_89;
    }
    v47 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v45 > 9 )
      v47 = pKeyValues->m_keyHashes.m_pElements;
    if ( v47[v46] != -1307688131 )
    {
LABEL_89:
      if ( v44 <= ++v46 )
        goto LABEL_150;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v48 = pKeyValues->m_keyValues.m_pElements;
  else
    v48 = 0;
  v49 = &v48[v46].m_value;
LABEL_151:
  x = vec3_origin.x;
  y = vec3_origin.y;
  z = vec3_origin.z;
  writer.m_pCollisionProp = __PAIR64__(LODWORD(y), LODWORD(vec3_origin.x));
  *&writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = z;
  v78 = v49->m_type;
  if ( v78 == 3 )
  {
LABEL_155:
    x = *v49->m_pszString;
    y = *(v49->m_uint64 + 4);
    z = *(v49->m_uint64 + 8);
  }
  else if ( v78 <= 3 )
  {
    if ( v78 != 0 )
      goto LABEL_172;
  }
  else if ( v78 == 30 )
  {
    v91 = z;
    v94 = y;
    nInteractsExcludeh = vec3_origin.x;
    v88 = V_sscanf(v49->m_uint64, "%g %g %g", &writer, &writer.m_pCollisionProp + 4, &writer.m_OriginalState);
    x = nInteractsExcludeh;
    y = v94;
    z = v91;
    if ( v88 == 3 )
      goto LABEL_173;
  }
  else
  {
    if ( v78 == 39 )
      goto LABEL_155;
LABEL_172:
    v86 = VariantFieldTypeName(v78);
    Warning("No free conversion of %s variant to Vector right now\n", v86);
LABEL_173:
    z = *&writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t;
    y = *(&writer.m_pCollisionProp + 1);
    x = *&writer.m_pCollisionProp;
  }
  mins.x = x;
  mins.y = y;
  mins.z = z;
LABEL_65:
  if ( !CEntityKeyValues::HasValue(pKeyValues, 361620063) )
    goto LABEL_66;
  v38 = pKeyValues->m_keyHashes.m_nCount;
  if ( v38 <= 0 )
  {
LABEL_157:
    v43 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_158;
  }
  v39 = pKeyValues->m_keyHashes.m_nAllocated;
  v40 = 0;
  while ( 2 )
  {
    if ( v39 == 0 )
    {
      if ( *(4 * v40) == 361620063 )
        break;
      goto LABEL_78;
    }
    v41 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v39 > 9 )
      v41 = pKeyValues->m_keyHashes.m_pElements;
    if ( v41[v40] != 361620063 )
    {
LABEL_78:
      if ( v38 <= ++v40 )
        goto LABEL_157;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v42 = pKeyValues->m_keyValues.m_pElements;
  else
    v42 = 0;
  v43 = &v42[v40].m_value;
LABEL_158:
  v79 = vec3_origin.x;
  v80 = vec3_origin.y;
  v81 = vec3_origin.z;
  writer.m_pCollisionProp = __PAIR64__(LODWORD(v80), LODWORD(vec3_origin.x));
  *&writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = v81;
  v82 = v43->m_type;
  if ( v82 == 3 )
  {
LABEL_162:
    v79 = *v43->m_pszString;
    v81 = *(v43->m_uint64 + 8);
    v80 = *(v43->m_uint64 + 4);
  }
  else if ( v82 <= 3 )
  {
    if ( v82 != 0 )
      goto LABEL_169;
  }
  else if ( v82 == 30 )
  {
    v90 = v81;
    v93 = v80;
    nInteractsExcludeg = vec3_origin.x;
    v87 = V_sscanf(v43->m_uint64, "%g %g %g", &writer, &writer.m_pCollisionProp + 4, &writer.m_OriginalState);
    v79 = nInteractsExcludeg;
    v80 = v93;
    v81 = v90;
    if ( v87 == 3 )
      goto LABEL_170;
  }
  else
  {
    if ( v82 == 39 )
      goto LABEL_162;
LABEL_169:
    v85 = VariantFieldTypeName(v82);
    Warning("No free conversion of %s variant to Vector right now\n", v85);
LABEL_170:
    v80 = *(&writer.m_pCollisionProp + 1);
    v81 = *&writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t;
    v79 = *&writer.m_pCollisionProp;
  }
  maxs.x = v79;
  maxs.y = v80;
  maxs.z = v81;
LABEL_66:
  CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &maxs);
  if ( (*(this->_vptr_IHandleEntity + 212))(this) != 0 )
    CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, this);
}


// CBaseModelEntity::Activate  (line 219, @0x0000000002059ab0, libserver.so)
// calls: CBaseEntity::Activate, CCollisionProperty::UpdateLocateHandle
// callers: CEnvSky::Activate, CLightEntity::Activate, CParticleSystem::Activate, CBeam::Activate, CFuncVPhysicsClip::Activate, CFuncRotating::Activate, CEnvProjectedTexture::Activate, CBaseDoor::Activate, CFire::Activate, CFunc_Dust::Activate, CFunc_LOD::Activate, CAreaPortal::Activate (28 total)
void __fastcall CBaseModelEntity::Activate(CBaseModelEntity *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  CCollisionProperty::UpdateLocateHandle(&this->m_Collision);
}


// CBaseModelEntity::OnRestore  (line 254, @0x000000000205b890, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<RenderFx_t>
// calls: CBaseEntity::OnRestore, CCollisionProperty::UpdatePartition
// callers: CBaseAnimatingOverlay::OnRestore, CShatterGlassShardPhysics::OnRestore, CFuncShatterglass::OnRestore, CRagdollProp::OnRestore, CPropVRHand::OnRestore, CPropDoorRotating::OnRestore, CSprite::OnRestore, CFuncTrain::OnRestore, CFuncTrackTrain::OnRestore, CVGuiScreen::OnRestore, CPropVehicleDriveable::OnRestore
void __fastcall CBaseModelEntity::OnRestore(CBaseModelEntity *const this)
{
  CBaseEntity::OnRestore(this);
  CCollisionProperty::UpdatePartition(&this->m_Collision);
  if ( (this->m_fFlags.m_Value & 0x20000000) != 0 && this->m_nRenderFX.m_Value != RenderFx_t::kRenderFxNone )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 814, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderFX.m_Value = RenderFx_t::kRenderFxNone;
  }
}


// CBaseModelEntity::UpdateOnRemove  (line 269, @0x0000000002059b10, libserver.so)
// calls: CDOTAFogOfWarSystem::RemoveFOWEntity, CBaseEntity::UpdateOnRemove
// callers: CPointClientUIWorldPanel::UpdateOnRemove, CEnvSky::UpdateOnRemove, CLightEntity::UpdateOnRemove, CBaseAnimating::UpdateOnRemove, CParticleSystem::UpdateOnRemove, CWorld::UpdateOnRemove, CBeam::UpdateOnRemove, CBaseDoor::UpdateOnRemove, CFire::UpdateOnRemove, CFuncDistanceOccluder::UpdateOnRemove, CMarkupVolumeTagged::UpdateOnRemove, CRopeKeyframe::UpdateOnRemove (15 total)
void __fastcall CBaseModelEntity::UpdateOnRemove(CBaseModelEntity *const this)
{
  if ( (*(this->_vptr_IHandleEntity + 212))(this) != 0 )
    CDOTAFogOfWarSystem::RemoveFOWEntity(&g_DOTAFogOfWarSystem, this);
  CBaseEntity::UpdateOnRemove(this);
}


// CBaseModelEntity::SetFadeDistance  (line 340, @0x000000000206dae0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CBreakableProp::CBreakableProp, BreakModelCreateSingle
void __fastcall CBaseModelEntity::SetFadeDistance(
        CBaseModelEntity *const this,
        double a2,
        double flMinFadeDist,
        double flMaxFadeDist)
{
  unsigned int flMaxFadeDista; // [rsp+8h] [rbp-18h]
  float flMinFadeDistb; // [rsp+Ch] [rbp-14h]
  float flMinFadeDista; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_fadeMinDist.m_Value )
  {
    flMaxFadeDista = LODWORD(flMinFadeDist);
    flMinFadeDista = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1084, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, *&flMinFadeDist, *&flMaxFadeDist);
    *&a2 = LODWORD(flMinFadeDista);
    *&flMinFadeDist = flMaxFadeDista;
    this->m_fadeMinDist.m_Value = flMinFadeDista;
  }
  if ( *&flMinFadeDist != this->m_fadeMaxDist.m_Value )
  {
    flMinFadeDistb = *&flMinFadeDist;
    (*(this->_vptr_IHandleEntity + 22))(this, 1088, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flMinFadeDist, flMaxFadeDist);
    this->m_fadeMaxDist.m_Value = flMinFadeDistb;
  }
}


// CBaseModelEntity::DamageDecal  (line 384, @0x0000000002058ae0, libserver.so)  // inlines: operator==<RenderMode_t>
// callers: CBreakable::DamageDecal
// strings: "BulletProof", "ManhackCut", "Impact.Concrete"
const char *__fastcall CBaseModelEntity::DamageDecal(
        CBaseModelEntity *const this,
        int bitsDamageType,
        int gameMaterial)
{
  RenderMode_t m_Value; // cl
  const char *result; // rax

  m_Value = this->m_nRenderMode.m_Value;
  result = "";
  if ( m_Value != RenderMode_t::kRenderTransAlpha )
  {
    if ( m_Value == RenderMode_t::kRenderNormal || (result = "BulletProof", gameMaterial != 71) )
    {
      result = "ManhackCut";
      if ( bitsDamageType != 4 )
        return "Impact.Concrete";
    }
  }
  return result;
}


// CBaseModelEntity::SetCollisionBoundsFromCurrentModel  (line 407, @0x000000000206db90, libserver.so)  // inlines: CWeakHandle, Init, SetCollisionBounds
// calls: CBaseEntity::GetModel, CCollisionProperty::SetCollisionBounds
// callers: CBaseModelEntity::SetModel, CModelState::DoSetupPhysics
void __fastcall CBaseModelEntity::SetCollisionBoundsFromCurrentModel(CBaseModelEntity *const this)
{
  unsigned __int8 (__fastcall *v2)(IGameModelInfo *, Vector *); // rax
  int (**vptr_IAppSystem)(...); // rax
  HModel hModel; // [rsp+0h] [rbp-60h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+10h] [rbp-50h] BYREF
  Vector mins; // [rsp+20h] [rbp-40h] BYREF
  Vector maxs; // [rsp+30h] [rbp-30h] BYREF

  CBaseEntity::GetModel(&hModel, this);
  v2 = *(modelinfo->_vptr_IAppSystem + 14);
  *&maxs.x = hModel;
  if ( v2(modelinfo, &maxs) != 0 )
  {
    vptr_IAppSystem = modelinfo->_vptr_IAppSystem;
    m_pBinding = hModel.m_pBinding;
    vptr_IAppSystem[16](modelinfo, &m_pBinding, &mins, &maxs);
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &mins, &maxs);
  }
  else
  {
    CCollisionProperty::SetCollisionBounds(&this->m_Collision, &vec3_origin, &vec3_origin);
  }
}


// CBaseModelEntity::SetModel  (line 426, @0x000000000206dc40, libserver.so)  // inlines: CWeakHandle, GetComponent<CBodyComponent>, Init, operator[]
// calls: CBodyComponent::SetModel, CBaseModelEntity::SetCollisionBoundsFromCurrentModel
// callers: CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::SwitchChildModelThink, CLightEntity::Spawn, CBaseAnimating::CopyAnimationDataFrom, CBaseModelEntity::SetModel, CRulePointEntity::Spawn, OnCreateIllusionsSpawnCompletion, CDOTA_BaseNPC_Hero::SetWearableModelIndex, CDOTA_BaseNPC_Hero::ReplicateModelFromOtherHero, CDOTA_Ability_Meepo_DividedWeStand::CreateClone, CDOTA_Ability_ArcWarden_TempestDouble::OnSpellStart
void __fastcall CBaseModelEntity::SetModel(CBaseModelEntity *const this, HModel hModel)
{
  CEntityIdentity *m_pEntity; // rax
  CBodyComponent *v4; // rdi
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  HModel hModela; // [rsp+0h] [rbp-20h] BYREF

  m_pEntity = this->m_pEntity;
  v4 = 0;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v4 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  CBodyComponent::SetModel(v4, &hModela);
  CBaseModelEntity::SetCollisionBoundsFromCurrentModel(this);
  (*(this->_vptr_IHandleEntity + 209))(this);
}


// CBaseModelEntity::SetModel  (line 455, @0x000000000206dda0, libserver.so)  // inlines: CWeakHandle, Init
// calls: CBaseEntity::FixupPrecacheModelName, CBaseModelEntity::SetModel, __stack_chk_fail
// callers: CDevtestHierarchy2::Spawn, CBaseModelEntity::ScriptSetModel, CBaseModelEntity::SetModelFromKeyValues, CBaseProp::Spawn, CBaseCombatWeapon::FallInit, CBaseCombatWeapon::Equip, CBaseCombatWeapon::Spawn, CC_Player_SetModel, CBaseViewModel::SetWeaponModel, CItemSoda::Spawn, CEnvAirStrikeIndoorEffect::Spawn, CFish::Initialize (40 total)
void __fastcall CBaseModelEntity::SetModel(CBaseModelEntity *const this, const char *pModelName)
{
  HModel hModel; // [rsp+0h] [rbp-140h] BYREF
  HModel v4; // [rsp+10h] [rbp-130h] BYREF
  char pNameOut[264]; // [rsp+20h] [rbp-120h] BYREF
  unsigned __int64 v6; // [rsp+128h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  CBaseEntity::FixupPrecacheModelName(pModelName, pNameOut, 260);
  (*(modelinfo->_vptr_IAppSystem + 13))(&hModel, modelinfo, pNameOut);
  v4.m_pBinding = hModel.m_pBinding;
  CBaseModelEntity::SetModel(this, &v4);
}


// CBaseModelEntity::ScriptSetModel  (line 466, @0x000000000206de30, libserver.so)
// calls: CBaseModelEntity::SetModel
void __fastcall CBaseModelEntity::ScriptSetModel(CBaseModelEntity *const this, const char *pModelName)
{
  CBaseModelEntity::SetModel(this, pModelName);
}


// CBaseModelEntity::SetModelAsync  (line 473, @0x000000000206de40, libserver.so)  // inlines: GetComponent<CBodyComponent>, operator[]
// calls: CBaseEntity::FixupPrecacheModelName, CBodyComponent::SetModelAsync, __stack_chk_fail
void __fastcall CBaseModelEntity::SetModelAsync(CBaseModelEntity *const this, const char *pModelName)
{
  CBodyComponent *v2; // r12
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rax
  char pNameOut[264]; // [rsp+0h] [rbp-120h] BYREF
  unsigned __int64 v7; // [rsp+108h] [rbp-18h]

  v2 = 0;
  v7 = __readfsqword(0x28u);
  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    if ( m_nBaseOffset != 0xFFFF )
      v2 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  CBaseEntity::FixupPrecacheModelName(pModelName, pNameOut, 260);
  CBodyComponent::SetModelAsync(v2, pNameOut);
}


// CBaseModelEntity::SetModelFromKeyValues  (line 489, @0x000000000206dee0, libserver.so)  // inlines: GetModelNameFromKeyValues
// calls: GetModelNameFromKeyValues, CBaseModelEntity::SetModel
// callers: CPointClientUIDialog::Spawn, CDevtestHierarchy::Spawn, CFuncIllusionary::Spawn, CFuncWall::Spawn, CFuncVehicleClip::Spawn, CFuncVPhysicsClip::Spawn, CFuncInteractionLayerClip::Spawn, CFuncRotating::Spawn, CBaseButton::Spawn, CRotButton::Spawn, CColorCorrectionVolume::Spawn, CPointCommentaryNode::Spawn (50 total)
void __fastcall CBaseModelEntity::SetModelFromKeyValues(
        CBaseModelEntity *const this,
        const CEntityKeyValues *pKeyValues,
        const char *pDefaultModelName)
{
  const char *ModelNameFromKeyValues; // rax

  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  if ( ModelNameFromKeyValues == 0 || *ModelNameFromKeyValues == 0 )
  {
    ModelNameFromKeyValues = "";
    if ( pDefaultModelName != 0 )
      ModelNameFromKeyValues = pDefaultModelName;
  }
  CBaseModelEntity::SetModel(this, ModelNameFromKeyValues);
}


// CBaseModelEntity::SetRenderMode  (line 505, @0x000000000206df30, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<RenderMode_t>
// callers: CBaseModelEntity::ScriptSetRenderMode, CBeam::FirstSetup, CBeam::BeamInit, CGibShooter::InitPointGib, CEnvEffectsScript::SpriteEffectEvent, CEnvShooter::CreateGib, ExplosionCreate, CEnvLaser::Spawn
void __fastcall CBaseModelEntity::SetRenderMode(CBaseModelEntity *const this, RenderMode_t nRenderMode)
{
  if ( this->m_nRenderMode.m_Value != nRenderMode )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = nRenderMode;
  }
}


// CBaseModelEntity::SetRenderColorAndAlpha  (line 537, @0x000000000206df70, libserver.so)  // inlines: GetRawColor, NetworkStateChanged, Set, SetRawColor, operator=
// callers: CEnvShooter::CreateGib
void __fastcall CBaseModelEntity::SetRenderColorAndAlpha(
        CBaseModelEntity *const this,
        const Color *const newColorAndAlpha)
{
  if ( *&this->m_clrRender != *newColorAndAlpha )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value = *newColorAndAlpha;
  }
}


// CBaseModelEntity::GetRenderAlpha  (line 548, @0x000000000206dfb0, libserver.so)
// callers: CBaseModelEntity::ScriptGetRenderAlpha, CSprite::ExpandThink, CSprite::PreFirstNetworkUpdate, CSprite::Spawn
uint8 __fastcall CBaseModelEntity::GetRenderAlpha(const CBaseModelEntity *const this)
{
  return this->m_clrRender.m_Value._color[3];
}


// CBaseModelEntity::SetRenderAlpha  (line 559, @0x000000000206dfc0, libserver.so)  // inlines: NetworkStateChanged, SetAlpha, SetComponent, SetVal
// callers: CBaseModelEntity::ScriptSetRenderAlpha, CBaseModelEntity::CBaseModelEntity, CBaseModelEntity::SUB_StartFadeOut, CBaseModelEntity::InputAlpha, CBaseModelEntity::SUB_PerformFadeOut, CBaseModelEntity::SUB_FadeOut, CBaseModelEntity::SpawnShared, CBaseVRHandAttachment::UpdatePose, CBaseViewModel::CBaseViewModel, CBeam::BeamInit, CBubbling::Spawn, CEntityDissolve::DissolveThink (22 total)
void __fastcall CBaseModelEntity::SetRenderAlpha(CBaseModelEntity *const this, uint8 a)
{
  if ( a != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = a;
  }
}


// CBaseModelEntity::SUB_StartFadeOut  (line 579, @0x000000000206e910, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<RenderMode_t>
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseModelEntity::SetRenderAlpha, CBaseEntity::SetLocalAngularVelocity
// callers: CBaseModelEntity::SUB_StartFadeOutInstant, CBaseCombatCharacter::CorpseFade, CRagGib::Init, CRagdollLRURetirement::CleanRagdolls, BreakModelCreateSingle, CRagdollLRURetirement::Update, CRagdollLRURetirement::MoveToTopOfLRU
// globals: CBaseModelEntity::SUB_FadeOut(void)
void __fastcall CBaseModelEntity::SUB_StartFadeOut(CBaseModelEntity *const this, float a2, float delay, bool notSolid)
{
  double v6; // xmm1_8
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CBaseModelEntity::SUB_FadeOut, 0.0, 0, 0);
  v7 = 0.0;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v7 = LODWORD(v8->m_flCurrentTime);
  }
  *&v7 = *&v7 + a2;
  CBaseEntity::SetNextThink(this, v7, v6, 0);
  CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderNormal )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderNormal;
  }
  if ( notSolid )
  {
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  }
}


// CBaseModelEntity::SUB_StartFadeOutInstant  (line 597, @0x000000000206ea10, libserver.so)
// calls: CBaseModelEntity::SUB_StartFadeOut
void __fastcall CBaseModelEntity::SUB_StartFadeOutInstant(CBaseModelEntity *const this)
{
  float v1; // xmm1_4

  CBaseModelEntity::SUB_StartFadeOut(this, 0.0, v1, 1);
}


// CBaseModelEntity::SUB_PerformFadeOut  (line 606, @0x000000000206eaa0, libserver.so)  // inlines: Approach, NetworkStateChanged, Set, UTIL_Approach, operator=<RenderMode_t>
// calls: CBaseModelEntity::SetRenderAlpha
// callers: CBaseModelEntity::SUB_FadeOut
void __fastcall CBaseModelEntity::SUB_PerformFadeOut(CBaseModelEntity *const this)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm2
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  uint8 v8; // si
  float dt; // [rsp+Ch] [rbp-14h]

  v2.m128_i32[0] = LODWORD(gpGlobals->frametime);
  v3 = _mm_cmpge_ss(0x3DCCCCCDu, v2);
  LODWORD(v4) = _mm_andnot_ps(v3, 0x3DCCCCCDu).m128_u32[0] | v2.m128_i32[0] & v3.m128_i32[0];
  if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderTransTexture )
  {
    dt = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = dt;
    this->m_nRenderMode.m_Value = RenderMode_t::kRenderTransTexture;
  }
  v5 = v4 * 256.0;
  v6 = 1.0;
  if ( v5 >= 1.0 )
    v6 = v5;
  v7 = this->m_clrRender.m_Value._color[3];
  if ( (0.0 - v7) > v6 )
  {
    CBaseModelEntity::SetRenderAlpha(this, (v6 + v7));
  }
  else
  {
    v8 = 0;
    if ( -v6 > (0.0 - v7) )
      v8 = (v7 - v6);
    CBaseModelEntity::SetRenderAlpha(this, v8);
  }
}


// CBaseModelEntity::SUB_AllowedToFade  (line 622, @0x0000000002059bb0, libserver.so)  // inlines: AI_GetSinglePlayer
// calls: CBaseEntity::VPhysicsGetObject, UTIL_GetLocalPlayer
bool __fastcall CBaseModelEntity::SUB_AllowedToFade(CBaseModelEntity *const this)
{
  IPhysicsObject *Object; // rax
  bool result; // al
  CBasePlayer *LocalPlayer; // rax

  result = 0;
  if ( CBaseEntity::VPhysicsGetObject(this) == 0
    || (Object = CBaseEntity::VPhysicsGetObject(this), ((*(*Object + 1296LL))(Object) & 4) == 0)
    && (this->m_iEFlags & 0x100000) == 0 )
  {
    if ( gpGlobals->maxClients > 1 )
      return 1;
    LocalPlayer = UTIL_GetLocalPlayer();
    if ( LocalPlayer == 0 || (*(LocalPlayer->_vptr_IHandleEntity + 264))(LocalPlayer, this) == 0 )
      return 1;
  }
  return result;
}


// CBaseModelEntity::SUB_FadeOut  (line 647, @0x000000000206eb90, libserver.so)  // inlines: curtime
// calls: CBaseModelEntity::SUB_PerformFadeOut, CBaseEntity::SetNextThink, UTIL_Remove, CBaseModelEntity::SetRenderAlpha
// callers: CEnvAirStrikeOutdoorEffect::CrumbleThink
void __fastcall CBaseModelEntity::SUB_FadeOut(CBaseModelEntity *const this)
{
  double v2; // xmm1_8
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v7; // r12
  FnGlobalVarsWarningFunc v8; // rax
  double v9; // xmm0_8

  if ( (*(this->_vptr_IHandleEntity + 210))(this) != 0 )
  {
    CBaseModelEntity::SUB_PerformFadeOut(this);
    if ( this->m_clrRender.m_Value._color[3] != 0 )
    {
      v4 = 0.0;
      v5 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            (m_pfnWarningFunc)(1, 0.0);
        }
        *&v4 = LODWORD(v5->m_flCurrentTime);
      }
      CBaseEntity::SetNextThink(this, v4, v3, 0);
    }
    else
    {
      UTIL_Remove(this);
    }
  }
  else
  {
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v9) = 0;
      *&v9 = v7->m_flCurrentTime + 1.0;
    }
    else
    {
      *&v9 = 1065353216;
    }
    CBaseEntity::SetNextThink(this, v9, v2, 0);
    CBaseModelEntity::SetRenderAlpha(this, 0xFFu);
  }
}


// CBaseModelEntity::CanBeSeenByTeam  (line 702, @0x000000000206ec90, libserver.so)
// callers: CDOTABaseAbility_BotScript::CanBeSeen, CDOTA_CombatLog::AddHealthEvent, CDOTA_CombatLog::AddModifierEvent, CDOTA_CombatLog::AddAbilityEvent, CDOTAGamerules::IsProjectionAbilityVisibleByEnemy, UnitFilter, CDOTAPlayer::ExecuteOrders, CDOTA_ProjectileManager::CreateTrackingProjectileFiltered, CDOTATeam::ShouldTransmitToPlayer, SendOverheadEventMessage, DOTA_EmitSound, DOTA_EmitSoundLocationWithCaster (59 total)
bool __fastcall CBaseModelEntity::CanBeSeenByTeam(CBaseModelEntity *const this, int iTeam)
{
  char v2; // r12
  char v4; // al
  __int64 v5; // rsi
  bool v6; // dl

  v2 = iTeam;
  v4 = (*(this->_vptr_IHandleEntity + 212))(this);
  v6 = 1;
  if ( v4 != 0 )
  {
    if ( this->m_bVisibilityDirtyFlag )
      (*(this->_vptr_IHandleEntity + 213))(this, v5, 1);
    return 1 << v2 == ((1 << v2) & this->m_iTeamVisibilityBitmask);
  }
  return v6;
}


// CBaseModelEntity::UpdateVisibility  (line 718, @0x0000000002059c40, libserver.so)  // inlines: ClearFOWDirtyFlag, GetTeamMapping, RemoveSeenByTeamTag, State_Get, TagAsSeenByTeam
// calls: CBaseEntity::GetAbsOrigin, FoW_TeamNumberToFoWIndex, CDOTAFogOfWarSystem::GetFoW, CFoW::GetLocationInfo
// callers: CDOTA_TempTree::UpdateVisibility
void __fastcall CBaseModelEntity::UpdateVisibility(CBaseModelEntity *const this)
{
  int v2; // eax
  int v3; // ebx
  const Vector *AbsOrigin; // r15
  unsigned int v5; // r14d
  CFoW *FoW; // rax
  uint32 LocationInfo; // eax
  char v8; // cl
  int v9; // ecx
  int v10; // eax

  v2 = *&g_pGameRules[6].m_szQuestName[28];
  this->m_iTeamVisibilityBitmask |= 0x12u;
  if ( v2 == 8 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( ++v9 == 14 )
        goto LABEL_8;
      if ( (v9 - 6) > 7 )
        goto LABEL_15;
      do
      {
        do
        {
          v10 = 1 << v9++;
          this->m_iTeamVisibilityBitmask |= v10;
          if ( v9 == 14 )
            goto LABEL_8;
        }
        while ( (v9 - 6) <= 7 );
LABEL_15:
        ;
      }
      while ( (v9 - 2) <= 1 );
    }
  }
  v3 = 0;
LABEL_3:
  while ( ++v3 != 14 )
  {
    while ( (v3 - 6) <= 7 || (v3 - 2) <= 1 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      v5 = FoW_TeamNumberToFoWIndex(v3);
      FoW = CDOTAFogOfWarSystem::GetFoW(&g_DOTAFogOfWarSystem, 0);
      LocationInfo = CFoW::GetLocationInfo(FoW, v5, AbsOrigin);
      v8 = v3;
      if ( (LocationInfo & 0x4000) == 0 )
      {
        this->m_iTeamVisibilityBitmask &= ~(1 << v3);
        goto LABEL_3;
      }
      ++v3;
      this->m_iTeamVisibilityBitmask |= 1 << v8;
      if ( v3 == 14 )
        goto LABEL_8;
    }
  }
LABEL_8:
  this->m_bVisibilityDirtyFlag = 0;
}


// CBaseModelEntity::InputAlpha  (line 790, @0x000000000206ea30, libserver.so)  // inlines: Int, operator int
// calls: CBaseModelEntity::SetRenderAlpha
void __fastcall CBaseModelEntity::InputAlpha(CBaseModelEntity *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float; // eax
  uint8 v4; // si

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    m_float = inputdata->value.m_float;
    if ( m_float > 255 )
      goto LABEL_8;
LABEL_10:
    v4 = 0;
    if ( m_float < 0 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( m_type == 34 )
  {
    m_float = inputdata->value.m_float64;
    if ( m_float > 255 )
      goto LABEL_8;
    goto LABEL_10;
  }
  m_float = inputdata->value.m_int;
  if ( m_float > 255 )
  {
LABEL_8:
    v4 = -1;
    goto LABEL_6;
  }
  v4 = 0;
  if ( m_float >= 0 )
LABEL_5:
    v4 = m_float;
LABEL_6:
  CBaseModelEntity::SetRenderAlpha(this, v4);
}


// CBaseModelEntity::InputColor  (line 801, @0x000000000205c5a0, libserver.so)  // inlines: Color24, Init, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a
void __fastcall CBaseModelEntity::InputColor(CBaseModelEntity *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d
  unsigned __int8 v4; // r13

  m_int = inputdata->value.m_int;
  v4 = this->m_clrRender.m_Value._color[3];
  if ( m_int != this->m_clrRender.m_Value._color[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[0] = m_int;
  }
  if ( BYTE1(m_int) != this->m_clrRender.m_Value._color[1] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[1] = BYTE1(m_int);
  }
  if ( BYTE2(m_int) != this->m_clrRender.m_Value._color[2] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[2] = BYTE2(m_int);
  }
  if ( v4 != this->m_clrRender.m_Value._color[3] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_clrRender.m_Value._color[3] = v4;
  }
}


// CServerOnlyModelEntity::GetDataDescMap  (line 808, @0x0000000002058b20, libserver.so)
// globals: CServerOnlyModelEntity::m_DataMap
datamap_t *__fastcall CServerOnlyModelEntity::GetDataDescMap(CServerOnlyModelEntity *const this)
{
  return &CServerOnlyModelEntity::m_DataMap;
}


// CServerOnlyModelEntity::AddDatadescMetadataKeys  (line 808, @0x000000000206ecf0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CServerOnlyModelEntity::GetEntityClass(void)
void __fastcall CServerOnlyModelEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CServerOnlyModelEntity::GetEntityClass);
}


// CServerOnlyModelEntity::GetBaseMap  (line 808, @0x000000000206ed10, libserver.so)
// globals: CBaseModelEntity::m_DataMap
datamap_t *__cdecl CServerOnlyModelEntity::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CServerOnlyModelEntity>  (line 808, @0x000000000206ed20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CServerOnlyModelEntity"
// globals: `guard variable for'DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder, CBaseModelEntity::m_DataMap, CServerOnlyModelEntity::GetEntityClass(void), DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::dataDesc, CServerOnlyModelEntity::m_DataMap, DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_pszBase = "CServerOnlyModelEntity";
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder.m_nLenBase = 22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::nameHolder,
      &_dso_handle);
  }
  CServerOnlyModelEntity::m_DataMap.dataNumFields = 1;
  CServerOnlyModelEntity::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CServerOnlyModelEntity::m_DataMap.dataDesc = DataMapInit<CServerOnlyModelEntity>(CServerOnlyModelEntity *)::dataDesc;
  AddDatadescMetadataKeys(&CServerOnlyModelEntity::m_DataMap, CServerOnlyModelEntity::GetEntityClass);
  return &CServerOnlyModelEntity::m_DataMap;
}


// CBaseModelEntity::GetDataDescMap  (line 827, @0x0000000002058b30, libserver.so)
// globals: CBaseModelEntity::m_DataMap
datamap_t *__fastcall CBaseModelEntity::GetDataDescMap(CBaseModelEntity *const this)
{
  return &CBaseModelEntity::m_DataMap;
}


// CBaseModelEntity::AddDatadescMetadataKeys  (line 827, @0x000000000206edf0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseModelEntity::GetEntityClass(void)
void __fastcall CBaseModelEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseModelEntity::GetEntityClass);
}


// CBaseModelEntity::GetBaseMap  (line 827, @0x000000000206ee10, libserver.so)
datamap_t *__cdecl CBaseModelEntity::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CBaseModelEntity>  (line 827, @0x000000000207e8e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_02.cpp
// strings: "CBaseModelEntity"
// globals: `guard variable for'DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder, `guard variable for'DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc, CBaseModelEntity::GetEntityClass(void), CBaseModelEntity::m_DataMap, DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseModelEntity>(CBaseModelEntity *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_pszBase = "CBaseModelEntity";
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder,
      &_dso_handle);
  }
  CBaseModelEntity::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_pszBase), "SUB_StartFadeOut");
    m_Size = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc[14].fieldName = v2;
    v6 = operator new[](DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_nLenBase + 24);
    strcpy(
      stpcpy(v6, DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_pszBase),
      "SUB_StartFadeOutInstant");
    v7 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc[15].fieldName = v6;
    v10 = operator new[](DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v10, DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_pszBase), "SUB_FadeOut");
    v11 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc[16].fieldName = v10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc);
  }
  CBaseModelEntity::m_DataMap.dataNumFields = 24;
  CBaseModelEntity::m_DataMap.dataDesc = &DataMapInit<CBaseModelEntity>(CBaseModelEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseModelEntity::m_DataMap, CBaseModelEntity::GetEntityClass);
  return &CBaseModelEntity::m_DataMap;
}


// CModelPointEntity::YouForgotToImplementOrDeclareServerClass  (line 878, @0x0000000002058b40, libserver.so)
int __fastcall CModelPointEntity::YouForgotToImplementOrDeclareServerClass(CModelPointEntity *const this)
{
  return 0;
}


// CModelPointEntity::GetServerClass  (line 878, @0x000000000205e130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CModelPointEntity::GetServerClass(CModelPointEntity *const this)
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


// CModelPointEntity::Spawn  (line 880, @0x0000000002059d60, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, String
// calls: CEntityInstance::IsAuthoritative, CEntityKeyValues::HasValue, Warning, CEntityKeyValues::RemoveKeyForSpawn, CBaseEntity::Spawn
// callers: CEnvExplosion::Spawn, CPointWorldText::Spawn, CPointSpotlight::Spawn, CTestTraceline::Spawn
// strings: "Warning! Can't specify mins/maxs for point entities! (%s)\n"
void __fastcall CModelPointEntity::Spawn(CModelPointEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v6; // rax
  const char *v7; // rsi

  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( CEntityKeyValues::HasValue(pKeyValues, -1307688131) )
    {
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", m_pAsString);
      CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, -1307688131);
    }
    if ( CEntityKeyValues::HasValue(pKeyValues, 361620063) )
    {
      v6 = this->m_pEntity;
      v7 = "";
      if ( v6->m_designerName.u.m_Id != 0 )
        v7 = v6->m_designerName.u.m_pAsString;
      Warning("Warning! Can't specify mins/maxs for point entities! (%s)\n", v7);
      CEntityKeyValues::RemoveKeyForSpawn(pKeyValues, 361620063);
    }
  }
  CBaseEntity::Spawn(this, pKeyValues);
}


// CModelPointEntity::ShouldTransmit  (line 907, @0x000000000205acc0, libserver.so)
// calls: CBaseEntity::GetModel, CBaseEntity::SetTransmitState, CBaseEntity::FirstMoveChild
int __fastcall CModelPointEntity::ShouldTransmit(CModelPointEntity *const this, const CGameCheckTransmitInfo *pInfo)
{
  _QWORD v4[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( ((this->m_fEffects.m_Value & 0x20) == 0 || CBaseEntity::FirstMoveChild(this) != 0)
    && (SLOBYTE(this->m_iEFlags) < 0 || (CBaseEntity::GetModel(v4, this), v4[0] != 0)) )
  {
    return 0;
  }
  else
  {
    return CBaseEntity::SetTransmitState(this, 8);
  }
}


