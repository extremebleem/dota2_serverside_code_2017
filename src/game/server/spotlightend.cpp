// Reconstructed from DWARF by pahole; not original source.

// src/game/server/spotlightend.cpp:16
class C_CSpotlightEnd_MapInstall {
	C_CSpotlightEnd_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CSpotlightEnd::YouForgotToImplementOrDeclareServerClass  (line 16, @0x00000000023badd0, libserver.so)
int __fastcall CSpotlightEnd::YouForgotToImplementOrDeclareServerClass(CSpotlightEnd *const this)
{
  return 0;
}


// CSpotlightEnd::GetServerClass  (line 16, @0x00000000023c3040, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CSpotlightEnd::GetServerClass(CSpotlightEnd *const this)
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


// CSpotlightEnd::GetDataDescMap  (line 23, @0x00000000023bade0, libserver.so)
// globals: CSpotlightEnd::m_DataMap
datamap_t *__fastcall CSpotlightEnd::GetDataDescMap(CSpotlightEnd *const this)
{
  return &CSpotlightEnd::m_DataMap;
}


// CSpotlightEnd::AddDatadescMetadataKeys  (line 23, @0x00000000023c30c0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CSpotlightEnd::GetEntityClass(void)
void __fastcall CSpotlightEnd::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CSpotlightEnd::GetEntityClass);
}


// CSpotlightEnd::GetBaseMap  (line 23, @0x00000000023c30e0, libserver.so)
datamap_t *__cdecl CSpotlightEnd::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CSpotlightEnd>  (line 23, @0x00000000023c30f0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CSpotlightEnd"
// globals: `guard variable for'DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder, CSpotlightEnd::GetEntityClass(void), CSpotlightEnd::m_DataMap, DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CSpotlightEnd>(CSpotlightEnd *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder) != 0 )
  {
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_pszBase = "CSpotlightEnd";
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::nameHolder,
      &_dso_handle);
  }
  CSpotlightEnd::m_DataMap.dataNumFields = 4;
  CSpotlightEnd::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CSpotlightEnd::m_DataMap.dataDesc = &DataMapInit<CSpotlightEnd>(CSpotlightEnd *)::dataDesc[1];
  AddDatadescMetadataKeys(&CSpotlightEnd::m_DataMap, CSpotlightEnd::GetEntityClass);
  return &CSpotlightEnd::m_DataMap;
}


// CSpotlightEnd::Spawn  (line 38, @0x00000000023bf430, libserver.so)  // inlines: AddEFlags, NetworkStateChanged, Set, operator=<int>
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CSpotlightEnd::Spawn(CSpotlightEnd *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( this->m_flLightScale.m_Value != 100.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLightScale.m_Value = 100.0;
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


