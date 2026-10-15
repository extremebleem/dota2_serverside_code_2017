// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fire_smoke.cpp:90
class C_CFireSmoke_MapInstall {
	C_CFireSmoke_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFire::GetDataDescMap  (line 17, @0x00000000021ee910, libserver.so)
// globals: CBaseFire::m_DataMap
datamap_t *__fastcall CBaseFire::GetDataDescMap(CBaseFire *const this)
{
  return &CBaseFire::m_DataMap;
}


// CBaseFire::AddDatadescMetadataKeys  (line 17, @0x00000000021fe7f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseFire::GetEntityClass(void)
void __fastcall CBaseFire::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseFire::GetEntityClass);
}


// CBaseFire::GetBaseMap  (line 17, @0x00000000021fe810, libserver.so)
datamap_t *__cdecl CBaseFire::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CBaseFire>  (line 17, @0x00000000021fe820, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CBaseFire"
// globals: `guard variable for'DataMapInit<CBaseFire>(CBaseFire *)::nameHolder, CBaseFire::GetEntityClass(void), CBaseFire::m_DataMap, DataMapInit<CBaseFire>(CBaseFire *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseFire>(CBaseFire *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseFire>(CBaseFire *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseFire>(CBaseFire *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_pszBase = "CBaseFire";
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseFire>(CBaseFire *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseFire>(CBaseFire *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseFire>(CBaseFire *)::nameHolder,
      &_dso_handle);
  }
  CBaseFire::m_DataMap.dataNumFields = 4;
  CBaseFire::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CBaseFire::m_DataMap.dataDesc = &DataMapInit<CBaseFire>(CBaseFire *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseFire::m_DataMap, CBaseFire::GetEntityClass);
  return &CBaseFire::m_DataMap;
}


// CBaseFire::CBaseFire  (line 30, @0x00000000021fe8f0, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<float>, EnsureValidValue<unsigned int>
// calls: CBaseEntity::CBaseEntity
// callers: CBaseFire::CEntityInstanceEntityClass::ConstructInstance, CFireSmoke::CFireSmoke, CPlasma::CPlasma
void __fastcall CBaseFire::CBaseFire(CBaseFire *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_403AEF0;
  this->m_flScale.m_Value = 0.0;
  this->m_flStartScale.m_Value = 0.0;
  *&this->m_flScaleTime.m_Value = 0;
}


// CBaseFire::~CBaseFire  (line 38, @0x00000000021ef1c0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
// callers: CPlasma::~CPlasma, CPlasma::CPlasma
void __fastcall CBaseFire::~CBaseFire(CBaseFire *const this)
{
  this->_vptr_IHandleEntity = &off_403AEF0;
  CBaseEntity::~CBaseEntity(this);
}


// CBaseFire::~CBaseFire  (line 38, @0x00000000021ef1e0, libserver.so)  // inlines: ~CBaseFire
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBaseFire::~CBaseFire(CBaseFire *const this)
{
  this->_vptr_IHandleEntity = &off_403AEF0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseFire::Scale  (line 47, @0x00000000021f1440, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CBaseFire::Scale(CBaseFire *const this, double a2, double size, double time)
{
  unsigned int timea; // [rsp+8h] [rbp-18h]
  float sizeb; // [rsp+Ch] [rbp-14h]
  float sizea; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flScale.m_Value )
  {
    timea = LODWORD(size);
    sizea = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, *&size, *&time);
    *&a2 = LODWORD(sizea);
    *&size = timea;
    this->m_flScale.m_Value = sizea;
  }
  if ( *&size != this->m_flScaleTime.m_Value )
  {
    sizeb = *&size;
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, size, time);
    this->m_flScaleTime.m_Value = sizeb;
  }
}


// CBaseFire::Scale  (line 60, @0x00000000021f14f0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
void __fastcall CBaseFire::Scale(CBaseFire *const this, double a2, double start, double size, double time)
{
  unsigned int timea; // [rsp+4h] [rbp-1Ch]
  unsigned int sizeb; // [rsp+8h] [rbp-18h]
  unsigned int sizea; // [rsp+8h] [rbp-18h]
  float startc; // [rsp+Ch] [rbp-14h]
  float startb; // [rsp+Ch] [rbp-14h]
  float starta; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flStartScale.m_Value )
  {
    timea = LODWORD(size);
    sizea = LODWORD(start);
    starta = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, *&start, *&size, *&time);
    *&a2 = LODWORD(starta);
    *&size = timea;
    this->m_flStartScale.m_Value = starta;
    *&start = sizea;
  }
  if ( *&start != this->m_flScale.m_Value )
  {
    sizeb = LODWORD(size);
    startb = *&start;
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, start, size, time);
    *&start = LODWORD(startb);
    *&size = sizeb;
    this->m_flScale.m_Value = startb;
  }
  if ( *&size != this->m_flScaleTime.m_Value )
  {
    startc = *&size;
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, start, size, time);
    this->m_flScaleTime.m_Value = startc;
  }
}


// CBaseFire::Enable  (line 72, @0x00000000021f1880, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
void __fastcall CBaseFire::Enable(CBaseFire *const this, int state)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_nFlags.m_Value;
  if ( state != 0 )
  {
    v4 = m_Value | 1;
    if ( m_Value == (m_Value | 1) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFFFFFFFE;
    if ( m_Value == (m_Value & 0xFFFFFFFE) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nFlags.m_Value = v4;
}


// CFireSmoke::YouForgotToImplementOrDeclareServerClass  (line 90, @0x00000000021ee920, libserver.so)
int __fastcall CFireSmoke::YouForgotToImplementOrDeclareServerClass(CFireSmoke *const this)
{
  return 0;
}


// CFireSmoke::GetServerClass  (line 90, @0x00000000021f4670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFireSmoke::GetServerClass(CFireSmoke *const this)
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


// CFireSmoke::GetDataDescMap  (line 94, @0x00000000021ee930, libserver.so)
// globals: CFireSmoke::m_DataMap
datamap_t *__fastcall CFireSmoke::GetDataDescMap(CFireSmoke *const this)
{
  return &CFireSmoke::m_DataMap;
}


// CFireSmoke::AddDatadescMetadataKeys  (line 94, @0x00000000021fe940, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFireSmoke::GetEntityClass(void)
void __fastcall CFireSmoke::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFireSmoke::GetEntityClass);
}


// CFireSmoke::GetBaseMap  (line 94, @0x00000000021fe960, libserver.so)
// globals: CBaseFire::m_DataMap
datamap_t *__cdecl CFireSmoke::GetBaseMap()
{
  return &CBaseFire::m_DataMap;
}


// DataMapInit<CFireSmoke>  (line 94, @0x00000000021fe970, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFireSmoke"
// globals: `guard variable for'DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder, CBaseFire::m_DataMap, CFireSmoke::GetEntityClass(void), CFireSmoke::m_DataMap, DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFireSmoke>(CFireSmoke *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder) != 0 )
  {
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_pszBase = "CFireSmoke";
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFireSmoke>(CFireSmoke *)::nameHolder,
      &_dso_handle);
  }
  CFireSmoke::m_DataMap.dataNumFields = 2;
  CFireSmoke::m_DataMap.baseMap = &CBaseFire::m_DataMap;
  CFireSmoke::m_DataMap.dataDesc = &DataMapInit<CFireSmoke>(CFireSmoke *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFireSmoke::m_DataMap, CFireSmoke::GetEntityClass);
  return &CFireSmoke::m_DataMap;
}


// CFireSmoke::CFireSmoke  (line 109, @0x00000000021fea40, libserver.so)  // inlines: AddEFlags, CNetworkVarBase, EnsureValidValue<int>, NetworkStateChanged, Set, operator=<float>, operator=<int>, ~CBaseFire
// calls: CBaseFire::CBaseFire, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CFireSmoke::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFireSmoke::CFireSmoke(CFireSmoke *const this)
{
  bool v2; // zf

  CBaseFire::CBaseFire(this);
  v2 = this->m_flScale.m_Value == 0.0;
  this->m_nFlameModelIndex.m_Value = 0;
  this->_vptr_IHandleEntity = &off_403B590;
  this->m_nFlameFromAboveModelIndex.m_Value = 0;
  if ( !v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
    this->m_flScale.m_Value = 0.0;
  }
  if ( this->m_flScaleTime.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 784, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flScaleTime.m_Value = 0.0;
  }
  if ( this->m_nFlags.m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFlags.m_Value = 0;
  }
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CFireSmoke::~CFireSmoke  (line 123, @0x00000000021ef210, libserver.so)  // inlines: ~CBaseFire
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFireSmoke::~CFireSmoke(CFireSmoke *const this)
{
  this->_vptr_IHandleEntity = &off_403AEF0;
  CBaseEntity::~CBaseEntity(this);
}


// CFireSmoke::~CFireSmoke  (line 123, @0x00000000021ef230, libserver.so)  // inlines: ~CBaseFire, ~CFireSmoke
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFireSmoke::~CFireSmoke(CFireSmoke *const this)
{
  this->_vptr_IHandleEntity = &off_403AEF0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFireSmoke::EnableSmoke  (line 129, @0x00000000021feb50, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
// callers: CFire::SpawnEffect
void __fastcall CFireSmoke::EnableSmoke(CFireSmoke *const this, int state)
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


// CFireSmoke::EnableGlow  (line 145, @0x00000000021febb0, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
// callers: CFire::SpawnEffect
void __fastcall CFireSmoke::EnableGlow(CFireSmoke *const this, int state)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_nFlags.m_Value;
  if ( state != 0 )
  {
    v4 = m_Value | 8;
    if ( m_Value == (m_Value | 8) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFFFFFFF7;
    if ( m_Value == (m_Value & 0xFFFFFFF7) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nFlags.m_Value = v4;
}


// CFireSmoke::EnableVisibleFromAbove  (line 157, @0x00000000021fec10, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>, operator|=<int>
// callers: CFire::SpawnEffect
void __fastcall CFireSmoke::EnableVisibleFromAbove(CFireSmoke *const this, int state)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_nFlags.m_Value;
  if ( state != 0 )
  {
    v4 = m_Value | 0x10;
    if ( m_Value == (m_Value | 0x10) )
      return;
  }
  else
  {
    v4 = m_Value & 0xFFFFFFEF;
    if ( m_Value == (m_Value & 0xFFFFFFEF) )
      return;
  }
  (*(this->_vptr_IHandleEntity + 22))(this, 788, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_nFlags.m_Value = v4;
}


