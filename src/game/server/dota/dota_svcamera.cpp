// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/dota_svcamera.cpp:16
class C_CDOTACameraBounds_MapInstall {
	C_CDOTACameraBounds_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTACameraBounds::YouForgotToImplementOrDeclareServerClass  (line 16, @0x00000000026bd020, libserver.so)
int __fastcall CDOTACameraBounds::YouForgotToImplementOrDeclareServerClass(CDOTACameraBounds *const this)
{
  return 0;
}


// CDOTACameraBounds::GetServerClass  (line 16, @0x00000000026cc9c0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTACameraBounds::GetServerClass(CDOTACameraBounds *const this)
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


// CDOTACameraBounds::GetDataDescMap  (line 23, @0x00000000026bd030, libserver.so)
// globals: CDOTACameraBounds::m_DataMap
datamap_t *__fastcall CDOTACameraBounds::GetDataDescMap(CDOTACameraBounds *const this)
{
  return &CDOTACameraBounds::m_DataMap;
}


// CDOTACameraBounds::AddDatadescMetadataKeys  (line 23, @0x00000000026f4e80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTACameraBounds::GetEntityClass(void)
void __fastcall CDOTACameraBounds::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTACameraBounds::GetEntityClass);
}


// CDOTACameraBounds::GetBaseMap  (line 23, @0x00000000026f4ea0, libserver.so)
datamap_t *__cdecl CDOTACameraBounds::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CDOTACameraBounds>  (line 23, @0x00000000026f4eb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_07.cpp
// strings: "CDOTACameraBounds"
// globals: `guard variable for'DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder, CDOTACameraBounds::GetEntityClass(void), CDOTACameraBounds::m_DataMap, DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_pszBase = "CDOTACameraBounds";
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::nameHolder,
      &_dso_handle);
  }
  CDOTACameraBounds::m_DataMap.dataNumFields = 2;
  CDOTACameraBounds::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CDOTACameraBounds::m_DataMap.dataDesc = &DataMapInit<CDOTACameraBounds>(CDOTACameraBounds *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTACameraBounds::m_DataMap, CDOTACameraBounds::GetEntityClass);
  return &CDOTACameraBounds::m_DataMap;
}


// CDOTACameraBounds::CDOTACameraBounds  (line 30, @0x00000000026f4f80, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue, NetworkStateChanged, Set, Zero, operator!=, operator=, operator=<Vector>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CDOTACameraBounds::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTACameraBounds::CDOTACameraBounds(CDOTACameraBounds *const this)
{
  __m128i x_low; // xmm1
  __m128i y_low; // xmm2
  __m128i z_low; // xmm3
  vec_t v5; // r13d
  vec_t v6; // r15d
  vec_t v7; // r14d
  float v8; // r15d
  int v9; // r13d
  float z; // r12d
  __m128i v11; // xmm5
  __m128i v12; // xmm5

  CBaseEntity::CBaseEntity(this);
  this->m_vecBoundsMin.m_Value.z = 0.0;
  this->_vptr_IHandleEntity = &off_42AB090;
  this->m_vecBoundsMin.m_Value.y = 0.0;
  x_low = LODWORD(vec3_origin.x);
  this->m_vecBoundsMin.m_Value.x = 0.0;
  y_low = LODWORD(vec3_origin.y);
  this->m_vecBoundsMax.m_Value.z = 0.0;
  z_low = LODWORD(vec3_origin.z);
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  this->m_vecBoundsMax.m_Value.y = 0.0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  this->m_vecBoundsMax.m_Value.x = 0.0;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
  if ( *x_low.m128i_i32 == 0.0 && *y_low.m128i_i32 == 0.0 && *z_low.m128i_i32 == 0.0 )
  {
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v9 = _mm_cvtsi128_si32(x_low);
    z = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
  }
  else
  {
    CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
    v11 = LODWORD(vec3_origin.y);
    this->m_vecBoundsMin.m_Value.y = v6;
    this->m_vecBoundsMin.m_Value.x = v5;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    v12 = LODWORD(vec3_origin.x);
    this->m_vecBoundsMin.m_Value.z = v7;
    z = vec3_origin.z;
    v9 = _mm_cvtsi128_si32(v12);
    if ( *v12.m128i_i32 != this->m_vecBoundsMax.m_Value.x )
      goto LABEL_9;
  }
  if ( v8 != this->m_vecBoundsMax.m_Value.y || z != this->m_vecBoundsMax.m_Value.z )
  {
LABEL_9:
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    LODWORD(this->m_vecBoundsMax.m_Value.x) = v9;
    this->m_vecBoundsMax.m_Value.y = v8;
    this->m_vecBoundsMax.m_Value.z = z;
  }
}


