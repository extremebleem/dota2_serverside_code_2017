// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_occluder.cpp:17
class C_CFuncOccluder_MapInstall {
	C_CFuncOccluder_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncOccluder::GetDataDescMap  (line 10, @0x000000000221a550, libserver.so)
// globals: CFuncOccluder::m_DataMap
datamap_t *__fastcall CFuncOccluder::GetDataDescMap(CFuncOccluder *const this)
{
  return &CFuncOccluder::m_DataMap;
}


// CFuncOccluder::AddDatadescMetadataKeys  (line 10, @0x000000000222c8a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncOccluder::GetEntityClass(void)
void __fastcall CFuncOccluder::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncOccluder::GetEntityClass);
}


// CFuncOccluder::GetBaseMap  (line 10, @0x000000000222c8c0, libserver.so)
datamap_t *__cdecl CFuncOccluder::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncOccluder>  (line 10, @0x000000000222c8d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncOccluder"
// globals: `guard variable for'DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder, CFuncOccluder::GetEntityClass(void), CFuncOccluder::m_DataMap, DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncOccluder>(CFuncOccluder *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_pszBase = "CFuncOccluder";
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncOccluder>(CFuncOccluder *)::nameHolder,
      &_dso_handle);
  }
  CFuncOccluder::m_DataMap.dataNumFields = 3;
  CFuncOccluder::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncOccluder::m_DataMap.dataDesc = &DataMapInit<CFuncOccluder>(CFuncOccluder *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncOccluder::m_DataMap, CFuncOccluder::GetEntityClass);
  return &CFuncOccluder::m_DataMap;
}


// CFuncOccluder::YouForgotToImplementOrDeclareServerClass  (line 17, @0x000000000221a560, libserver.so)
int __fastcall CFuncOccluder::YouForgotToImplementOrDeclareServerClass(CFuncOccluder *const this)
{
  return 0;
}


// CFuncOccluder::GetServerClass  (line 17, @0x0000000002221a80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncOccluder::GetServerClass(CFuncOccluder *const this)
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


// CFuncOccluder::CFuncOccluder  (line 22, @0x000000000222c9a0, libserver.so)
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CFuncOccluder::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncOccluder::CFuncOccluder(CFuncOccluder *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_bStartDisabled = 0;
  this->_vptr_IHandleEntity = &off_4049C30;
}


// CFuncOccluder::Precache  (line 29, @0x000000000223cbe0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
// callers: CFuncDistanceOccluder::Precache
void __fastcall CFuncOccluder::Precache(CFuncOccluder *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncOccluder::Spawn  (line 36, @0x000000000221eee0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects, SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects
// callers: CFuncDistanceOccluder::Spawn
void __fastcall CFuncOccluder::Spawn(CFuncOccluder *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_bStartDisabled )
  {
    CBaseEntity::AddEffects(this, 32);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CFuncOccluder::InputEnable  (line 58, @0x000000000221e870, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CFuncOccluder::InputEnable(CFuncOccluder *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CFuncOccluder::InputDisable  (line 63, @0x000000000221aed0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CFuncOccluder::InputDisable(CFuncOccluder *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddEffects(this, 32);
}


