// Reconstructed from DWARF by pahole; not original source.

// src/game/server/plasma.cpp:20
class C_CPlasma_MapInstall {
	C_CPlasma_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPlasma::YouForgotToImplementOrDeclareServerClass  (line 20, @0x0000000002f4b390, libserver.so)
int __fastcall CPlasma::YouForgotToImplementOrDeclareServerClass(CPlasma *const this)
{
  return 0;
}


// CPlasma::GetServerClass  (line 20, @0x0000000002f4b740, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPlasma::GetServerClass(CPlasma *const this)
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


// CPlasma::GetDataDescMap  (line 24, @0x0000000002f4b3a0, libserver.so)
// globals: CPlasma::m_DataMap
datamap_t *__fastcall CPlasma::GetDataDescMap(CPlasma *const this)
{
  return &CPlasma::m_DataMap;
}


// CPlasma::AddDatadescMetadataKeys  (line 24, @0x0000000002f4b880, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPlasma::GetEntityClass(void)
void __fastcall CPlasma::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPlasma::GetEntityClass);
}


// CPlasma::GetBaseMap  (line 24, @0x0000000002f4b8a0, libserver.so)
datamap_t *__cdecl CPlasma::GetBaseMap()
{
  return &CBaseFire::m_DataMap;
}


// DataMapInit<CPlasma>  (line 24, @0x0000000002f4b8b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CPlasma"
// globals: `guard variable for'DataMapInit<CPlasma>(CPlasma *)::nameHolder, CPlasma::GetEntityClass(void), CPlasma::m_DataMap, DataMapInit<CPlasma>(CPlasma *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPlasma>(CPlasma *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPlasma>(CPlasma *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPlasma>(CPlasma *)::nameHolder) != 0 )
  {
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_pszBase = "CPlasma";
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPlasma>(CPlasma *)::nameHolder.m_nLenBase = 7;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPlasma>(CPlasma *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPlasma>(CPlasma *)::nameHolder,
      &_dso_handle);
  }
  CPlasma::m_DataMap.dataNumFields = 3;
  CPlasma::m_DataMap.baseMap = &CBaseFire::m_DataMap;
  CPlasma::m_DataMap.dataDesc = &DataMapInit<CPlasma>(CPlasma *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPlasma::m_DataMap, CPlasma::GetEntityClass);
  return &CPlasma::m_DataMap;
}


// CPlasma::CPlasma  (line 41, @0x0000000002f4bd70, libserver.so)  // inlines: CNetworkVarBase, CStrongHandle, NetworkStateChanged, Set, operator=<float>, operator=<int>, ~CNetworkVarBase, ~CStrongHandle
// calls: CBaseFire::CBaseFire, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseFire::~CBaseFire, _Unwind_Resume
// callers: CPlasma::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPlasma::CPlasma(CPlasma *const this)
{
  double v2; // xmm0_8
  bool v3; // zf
  double v4; // xmm1_8

  CBaseFire::CBaseFire(this);
  v2 = 0.0;
  v3 = this->m_flScale.m_Value == 0.0;
  this->m_nPlasmaModelIndex.m_Value.m_pBinding = 0;
  this->_vptr_IHandleEntity = &off_47B7A70;
  this->m_nPlasmaModelIndex2.m_Value.m_pBinding = 0;
  this->m_nGlowModelIndex.m_Value.m_pBinding = 0;
  if ( !v3 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
    this->m_flScale.m_Value = 0.0;
  }
  v4 = 0.0;
  if ( this->m_flScaleTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2, 0.0);
    this->m_flScaleTime.m_Value = 0.0;
  }
  if ( this->m_nFlags.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v2, v4);
    this->m_nFlags.m_Value = 0;
  }
}


// CPlasma::~CPlasma  (line 53, @0x0000000002f4bd00, libserver.so)  // inlines: ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseFire::~CBaseFire
// callers: CPlasma::~CPlasma
void __fastcall CPlasma::~CPlasma(CPlasma *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeIMaterial2>,CPlasma::NetworkVar_m_nGlowModelIndex> *p_m_nGlowModelIndex; // rdi

  p_m_nGlowModelIndex = &this->m_nGlowModelIndex;
  p_m_nGlowModelIndex[-101].m_Value.m_pBinding = &off_47B7A70;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&p_m_nGlowModelIndex->m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nPlasmaModelIndex2.m_Value);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&this->m_nPlasmaModelIndex.m_Value);
  CBaseFire::~CBaseFire(this);
}


// CPlasma::~CPlasma  (line 53, @0x0000000002f4bd50, libserver.so)
// calls: CPlasma::~CPlasma, CBaseEntity::operator delete
void __fastcall CPlasma::~CPlasma(CPlasma *const this)
{
  CPlasma::~CPlasma(this);
  CBaseEntity::operator delete(this);
}


// CPlasma::EnableSmoke  (line 61, @0x0000000002f4b980, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
// callers: CFire::SpawnEffect
void __fastcall CPlasma::EnableSmoke(CPlasma *const this, int state)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_nFlags.m_Value;
  if ( state != 0 )
  {
    v4 = m_Value | 2;
    if ( m_Value == (m_Value | 2) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFFFFFFFD;
    if ( m_Value == (m_Value & 0xFFFFFFFD) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nFlags.m_Value = v4;
}


// CPlasma::Precache  (line 76, @0x0000000002f4f770, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/sprites/plasma1.vmat", "materials/sprites/fire_floor.vmat"
void __fastcall CPlasma::Precache(CPlasma *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/sprites/plasma1.vmat", pContext);
  PrecacheMaterial("materials/sprites/fire_floor.vmat", pContext);
}


// CPlasma::Spawn  (line 86, @0x0000000002f4bea0, libserver.so)  // inlines: CStrongHandle, NetworkStateChanged, Set, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, ~CStrongHandle
// calls: GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, _Unwind_Resume
// strings: "sprites/plasma1.vmat", "sprites/fire_floor.vmat"
void __fastcall CPlasma::Spawn(CPlasma *const this, const CEntityKeyValues *pKeyValues)
{
  const ResourceBindingBase_t *m_pBinding; // rax
  HMaterialStrong hMaterial; // [rsp+0h] [rbp-50h] BYREF
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t v5[2]; // [rsp+10h] [rbp-40h] BYREF
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResource[6]; // [rsp+20h] [rbp-30h] BYREF

  GetMaterialIndex(hResource, "sprites/plasma1.vmat");
  hMaterial.m_pBinding = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&hMaterial, hResource[0]);
  m_pBinding = hMaterial.m_pBinding;
  if ( this->m_nPlasmaModelIndex.m_Value.m_pBinding != hMaterial.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nPlasmaModelIndex.m_Value, &hMaterial);
    m_pBinding = hMaterial.m_pBinding;
  }
  if ( m_pBinding != this->m_nPlasmaModelIndex2.m_Value.m_pBinding )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nPlasmaModelIndex2.m_Value, &hMaterial);
  }
  GetMaterialIndex(v5, "sprites/fire_floor.vmat");
  hResource[0] = 0;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(hResource, v5[0]);
  if ( this->m_nGlowModelIndex.m_Value.m_pBinding != hResource[0] )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nGlowModelIndex.m_Value, hResource);
  }
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(hResource);
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&hMaterial);
}


