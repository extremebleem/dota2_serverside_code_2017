// Reconstructed from DWARF by pahole; not original source.

// src/game/server/prop_door.cpp:142
class C_CBasePropDoor_MapInstall {
	C_CBasePropDoor_MapInstall();

	// sizeof = 1
};

// src/game/server/prop_door.cpp:1801
class CTraceFilterDoor : public CTraceFilterEntitiesOnly {
public:

private:

	const CBaseEntity * m_pDoor;  // +0x48
	int m_collisionGroup;  // +0x50
	CTraceFilterDoor(CTraceFilterDoor &);
	CTraceFilterDoor(const CTraceFilterDoor &);
	CTraceFilterDoor(const CBaseEntity *, const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	void AddPassEnt(CBaseEntity *);
	virtual ~CTraceFilterDoor();

	// vtable[2] ShouldHitEntity
	// sizeof = 88
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// locksound_t::AddDatadescMetadataKeys  (line 65, @0x0000000002353f40, libserver.so)
void __fastcall locksound_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// locksound_t::GetBaseMap  (line 65, @0x0000000002353f50, libserver.so)
datamap_t *__cdecl locksound_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<locksound_t>  (line 65, @0x0000000002353f60, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "locksound_t"
// globals: `guard variable for'DataMapInit<locksound_t>(locksound_t *)::nameHolder, locksound_t::m_DataMap, DataMapInit<locksound_t>(locksound_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<locksound_t>(locksound_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<locksound_t>(locksound_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<locksound_t>(locksound_t *)::nameHolder) != 0 )
  {
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_pszBase = "locksound_t";
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<locksound_t>(locksound_t *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<locksound_t>(locksound_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<locksound_t>(locksound_t *)::nameHolder,
      &_dso_handle);
  }
  locksound_t::m_DataMap.baseMap = 0;
  locksound_t::m_DataMap.dataDesc = &DataMapInit<locksound_t>(locksound_t *)::dataDesc[1];
  locksound_t::m_DataMap.dataNumFields = 10;
  return &locksound_t::m_DataMap;
}


// CBasePropDoor::GetDataDescMap  (line 80, @0x000000000234ab80, libserver.so)
// globals: CBasePropDoor::m_DataMap
datamap_t *__fastcall CBasePropDoor::GetDataDescMap(CBasePropDoor *const this)
{
  return &CBasePropDoor::m_DataMap;
}


// CBasePropDoor::AddDatadescMetadataKeys  (line 80, @0x0000000002354020, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBasePropDoor::GetEntityClass(void)
void __fastcall CBasePropDoor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBasePropDoor::GetEntityClass);
}


// CBasePropDoor::GetBaseMap  (line 80, @0x0000000002354040, libserver.so)
datamap_t *__cdecl CBasePropDoor::GetBaseMap()
{
  return &CDynamicProp::m_DataMap;
}


// DataMapInit<CBasePropDoor>  (line 80, @0x0000000002366580, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CBasePropDoor"
// globals: `guard variable for'DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder, `guard variable for'DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc, CBasePropDoor::GetEntityClass(void), CBasePropDoor::m_DataMap, DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBasePropDoor>(CBasePropDoor *a1)
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
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder) != 0 )
  {
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_pszBase = "CBasePropDoor";
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder,
      &_dso_handle);
  }
  CBasePropDoor::m_DataMap.baseMap = &CDynamicProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc) != 0 )
  {
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[36].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[37].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[38].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[39].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[40].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[41].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[42].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[43].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[44].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v2, DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_pszBase), "DoorOpenMoveDone");
    m_Size = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[46].fieldName = v2;
    v6 = operator new[](DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_nLenBase + 18);
    strcpy(stpcpy(v6, DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_pszBase), "DoorCloseMoveDone");
    v7 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[47].fieldName = v6;
    v10 = operator new[](DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_nLenBase + 19);
    strcpy(stpcpy(v10, DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_pszBase), "DoorAutoCloseThink");
    v11 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[48].fieldName = v10;
    v14 = operator new[](DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_nLenBase + 23);
    strcpy(stpcpy(v14, DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_pszBase), "DisableAreaPortalThink");
    v15 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBasePropDoor>(CBasePropDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[49].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc);
  }
  CBasePropDoor::m_DataMap.dataNumFields = 49;
  CBasePropDoor::m_DataMap.dataDesc = &DataMapInit<CBasePropDoor>(CBasePropDoor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBasePropDoor::m_DataMap, CBasePropDoor::GetEntityClass);
  return &CBasePropDoor::m_DataMap;
}


// CBasePropDoor::YouForgotToImplementOrDeclareServerClass  (line 142, @0x000000000234ab90, libserver.so)
int __fastcall CBasePropDoor::YouForgotToImplementOrDeclareServerClass(CBasePropDoor *const this)
{
  return 0;
}


// CBasePropDoor::GetServerClass  (line 142, @0x0000000002351dd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBasePropDoor::GetServerClass(CBasePropDoor *const this)
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


// CBasePropDoor::CBasePropDoor  (line 146, @0x0000000002354050, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CEntityHandle, CEntityIOOutput, CGameEventListener, CHandle, CNavDoorBlocker, CNetworkHandleBase, CNetworkVarBase, CUtlMemory, CUtlMemoryFixed, CUtlStringToken, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, CUtlVectorFixed, EnsureValidValue<DoorState_t>, EnsureValidValue<bool>, Purge, RemoveAll, locksound_t, ~CDynamicProp, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDynamicProp::CDynamicProp, CountdownTimer::CountdownTimer, Plat_IsInDebugSessionRaw, CGameEventListener::~CGameEventListener, CBreakableProp::~CBreakableProp, _Unwind_Resume, CNavDoorBlocker::~CNavDoorBlocker, CUtlMemory<CHandle<CBasePropDoor>, int>::Purge
// callers: CPropDoorRotating::CEntityInstanceEntityClass::ConstructInstance, CPropDoorRotatingBreakable::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBasePropDoor::CBasePropDoor(CBasePropDoor *const this)
{
  __int64 v2; // rdi

  CDynamicProp::CDynamicProp(this);
  this->_vptr_IHandleEntity = &off_4096C50;
  this->_vptr_IBreakableWithPropData = off_4097668;
  this->_vptr_IPlayerPickupVPhysics = &off_4097780;
  this->_vptr_IGameEventListener2 = off_40977E8;
  this->m_bRegisteredForEvents = 0;
  this->m_hDoorList.m_Size = 0;
  this->m_hDoorList.m_Memory.m_pMemory = 0;
  this->m_hDoorList.m_Memory.m_nAllocationCount = 0;
  this->m_hDoorList.m_Memory.m_nGrowSize = 0;
  this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_CLOSED;
  this->m_ls._vptr_locksound_t = &off_3FD2260;
  this->m_ls.sLockedSound.u.m_Id = 0;
  this->m_ls.sLockedSentence.u.m_Id = 0;
  this->m_ls.sUnlockedSound.u.m_Id = 0;
  this->m_ls.sUnlockedSentence.u.m_Id = 0;
  this->m_bLocked.m_Value = 0;
  this->m_hBlocker.m_Index = -1;
  this->m_hActivator.m_Index = -1;
  this->m_NavBlocker.m_nFlags = 1;
  this->m_NavBlocker.m_hBlocker.m_Index = -1;
  this->m_NavBlocker.m_bPendingAndClosed = 0;
  this->m_NavBlocker.m_blockedAreas.m_Size = 0;
  if ( (this & 3) != 0 && Plat_IsInDebugSessionRaw(v2) != 0 )
    __debugbreak();
  this->m_isRescueDoor.m_Value = 0;
  CountdownTimer::CountdownTimer(&this->m_blockedRetryTimer);
  CountdownTimer::CountdownTimer(&this->m_closedTimer);
  this->m_SoundMoving.u.m_Id = 0;
  this->m_SoundOpen.u.m_Id = 0;
  this->m_SoundClose.u.m_Id = 0;
  this->m_SoundLock.u.m_Id = 0;
  this->m_SoundUnlock.u.m_Id = 0;
  this->m_SoundPound.u.m_Id = 0;
  this->m_nPhysicsMaterial.m_nHashCode = 0;
  this->m_SlaveName.u.m_Id = 0;
  this->m_hMaster.m_Value.m_Index = -1;
  this->m_OnBlockedClosing._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnBlockedOpening._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUnblockedClosing._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUnblockedOpening._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFullyClosed._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFullyOpen._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnClose._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnOpen._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnLockedUse._vptr_CEntityIOOutput = off_3F7C190;
  this->m_numCloseAttempts = 0;
}


// CBasePropDoor::~CBasePropDoor  (line 158, @0x000000000234ea20, libserver.so)  // inlines: Purge, RemoveAll, StopListeningForAllEvents, ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp, ~CGameEventListener, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~IGameEventListener2
// calls: CNavDoorBlocker::~CNavDoorBlocker, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBasePropDoor>, int>::Purge
// callers: CBasePropDoor::~CBasePropDoor, CPropDoorRotating::~CPropDoorRotating
void __fastcall CBasePropDoor::~CBasePropDoor(CBasePropDoor *const this)
{
  bool v2; // zf

  this->_vptr_IHandleEntity = &off_4096C50;
  this->_vptr_IBreakableWithPropData = off_4097668;
  this->_vptr_IPlayerPickupVPhysics = &off_4097780;
  this->_vptr_IGameEventListener2 = off_40977E8;
  CNavDoorBlocker::~CNavDoorBlocker(&this->m_NavBlocker);
  v2 = (this->m_hDoorList.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hDoorList.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBasePropDoor>,int>::Purge(&this->m_hDoorList.m_Memory);
    if ( (this->m_hDoorList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBasePropDoor>,int>::Purge(&this->m_hDoorList.m_Memory);
  }
  v2 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;
  if ( !v2 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;
  this->_vptr_IPlayerPickupVPhysics = &off_3FF0E98;
  this->_vptr_IBreakableWithPropData = off_3FF0D80;
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBasePropDoor::~CBasePropDoor  (line 158, @0x000000000234eb60, libserver.so)
// calls: CBasePropDoor::~CBasePropDoor, CBaseEntity::operator delete
void __fastcall CBasePropDoor::~CBasePropDoor(CBasePropDoor *const this)
{
  CBasePropDoor::~CBasePropDoor(this);
  CBaseEntity::operator delete(this);
}


// CBasePropDoor::Spawn  (line 166, @0x0000000002355c90, libserver.so)  // inlines: CollisionMaxs, CollisionMins, GetDebugName, GetEHandle, GetEntryIndex, GetSerialNumber, IsDoorClosed, LeafCodeInfo_t, NetworkStateChanged, Set, TransformVector, Vector, VectorTransform, operator=, operator=<bool>, operator==<DoorState_t>
// calls: CBaseEntity::SetMoveType, CDynamicProp::Spawn, CBreakableProp::DisableAutoFade, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles, CBasePropDoor::IsHingeOnLeft, CBaseEntity::EntityToWorldTransform, VectorTransform, CBaseEntity::RemoveFlag, CBaseAnimating::SetBodygroup, CBasePropDoor::SetDoorBlocker, CBaseEntity::GetModel (22 total)
// callers: CPropDoorRotating::Spawn
// strings: "Unlocked prop_door '%s' at (%.0f %.0f %.0f) has no hardware. All openable doors must have, "prop_door with no model at %.2f %.2f %.2f\n", "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/prop_door, "Spawn"
void __fastcall CBasePropDoor::Spawn(CBasePropDoor *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty *m_pCollision; // rdi
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v6; // rdi
  float y; // r12d
  const Vector *v8; // rax
  bool IsHingeOnLeft; // al
  vec_t v10; // xmm2_4
  __m128 v11; // xmm3
  __m128d v12; // xmm0
  vec_t v13; // xmm7_4
  matrix3x4_t *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  const char *DebugName; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  double v23; // xmm0_8
  float v24; // [rsp+0h] [rbp-90h]
  float v25; // [rsp+4h] [rbp-8Ch]
  float v26; // [rsp+8h] [rbp-88h]
  double v27; // [rsp+8h] [rbp-88h]
  float x; // [rsp+10h] [rbp-80h]
  double v29; // [rsp+10h] [rbp-80h]
  double v30; // [rsp+10h] [rbp-80h]
  vec_t z; // [rsp+18h] [rbp-78h]
  double v32; // [rsp+18h] [rbp-78h]
  double v33; // [rsp+18h] [rbp-78h]
  QAngle angRotationClosed; // [rsp+20h] [rbp-70h] BYREF
  QAngle angAjarAngles; // [rsp+30h] [rbp-60h] BYREF
  Vector vecLatchLocalPosition; // [rsp+40h] [rbp-50h] BYREF
  LeafCodeInfo_t out[2]; // [rsp+50h] [rbp-40h] BYREF

  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CDynamicProp::Spawn(this, pKeyValues);
  CBreakableProp::DisableAutoFade(this);
  angRotationClosed = *CBaseEntity::GetLocalAngles(this);
  (*(this->_vptr_IHandleEntity + 315))(this);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    AbsOrigin = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
  else
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = this->m_pCollision;
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  if ( v6 != 0 )
    v8 = (*(v6->_vptr_ICollideable + 2))(v6);
  else
    v8 = CBaseEntity::GetAbsOrigin(this);
  v24 = v8->x;
  v25 = v8->y;
  v26 = v8->z;
  angAjarAngles = *CBaseEntity::GetLocalAngles(this);
  CBaseEntity::SetLocalAngles(this, &angRotationClosed);
  IsHingeOnLeft = CBasePropDoor::IsHingeOnLeft(this);
  v10 = v25;
  if ( IsHingeOnLeft )
    v10 = y;
  vecLatchLocalPosition.y = v10;
  v11 = _mm_unpacklo_ps(LODWORD(z), LODWORD(z));
  vecLatchLocalPosition.x = ((v24 - x) * 0.5) + x;
  v12 = _mm_cvtps_pd(v11);
  v12.m128d_f64[0] = v12.m128d_f64[0] + (v26 - v11.m128_f32[0]) * 0.5;
  v13 = _mm_movedup_pd(v12).m128d_f64[0];
  vecLatchLocalPosition.z = v13;
  v14 = CBaseEntity::EntityToWorldTransform(this);
  VectorTransform(&vecLatchLocalPosition.x, v14, out);
  *&this->m_vecLatchWorldPosition.x = out[0].m_szFile;
  LODWORD(this->m_vecLatchWorldPosition.z) = out[0].m_nLine;
  CBaseEntity::SetLocalAngles(this, &angAjarAngles);
  if ( (this->m_spawnflags.m_Value & 0x800) != 0 && !this->m_bLocked.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLocked.m_Value = 1;
  }
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 100.0;
  CBaseEntity::RemoveFlag(this, 0x40000);
  CBaseAnimating::SetBodygroup(this, 1, this->m_nHardwareType);
  if ( this->m_nHardwareType != 0 || (this->m_spawnflags.m_Value & 0x800) != 0 )
  {
    if ( this->m_bBlockLOSSetByPropData )
      goto LABEL_15;
  }
  else
  {
    v27 = CBaseEntity::GetAbsOrigin(this)->z;
    v29 = CBaseEntity::GetAbsOrigin(this)->y;
    v32 = CBaseEntity::GetAbsOrigin(this)->x;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevWarning(
      1,
      "Unlocked prop_door '%s' at (%.0f %.0f %.0f) has no hardware. All openable doors must have hardware!\n",
      DebugName,
      v32,
      v29,
      v27);
    if ( this->m_bBlockLOSSetByPropData )
      goto LABEL_15;
  }
  CBaseProp::CalculateBlockLOS(this);
LABEL_15:
  CBasePropDoor::SetDoorBlocker(this, 0);
  CBaseEntity::GetModel(out, this);
  if ( out[0].m_szFile == 0 )
  {
    if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
      goto LABEL_34;
    while ( 1 )
    {
      if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v21, v22, v19, v20) != 0 )
        loc_0 = -559038737;
      Plat_ExitProcess(1);
LABEL_34:
      v30 = CBaseEntity::GetAbsOrigin(this)->z;
      v33 = CBaseEntity::GetAbsOrigin(this)->y;
      v23 = CBaseEntity::GetAbsOrigin(this)->x;
      out[0].m_szFile = "/home/buildbot/buildslave/source2_dota_rel_linuxsteamrt64/build/src/game/server/prop_door.cpp";
      out[0].m_szFunction = "Spawn";
      out[0].m_nLine = 226;
      LoggingSystem_Log(
        LOG_GENERAL,
        LoggingSeverity_t::LS_ERROR,
        out,
        "prop_door with no model at %.2f %.2f %.2f\n",
        v23,
        v33,
        v30);
    }
  }
  CBaseEntity::GetModel(out, this);
  CBasePropDoor::CalcDoorSounds(this, out, pKeyValues, 0);
  if ( this->m_isRescueDoor.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1940, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_isRescueDoor.m_Value = 0;
    this->m_disabledByCheckpoint = 0;
    if ( this == 0 )
      goto LABEL_26;
  }
  else
  {
    this->m_disabledByCheckpoint = 0;
    if ( this == 0 )
    {
LABEL_26:
      this->m_NavBlocker.m_hBlocker.m_Index = -1;
      goto LABEL_22;
    }
  }
  m_pEntity = this->m_pEntity;
  if ( m_pEntity == 0 )
    goto LABEL_26;
  v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index == -1 )
    v17 = 0x7FFF;
  else
    v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  LOWORD(this->m_NavBlocker.m_hBlocker.m_Index) = v17 | this->m_NavBlocker.m_hBlocker.m_Index & 0x8000;
  this->m_NavBlocker.m_hBlocker.m_Index = (v16 << 15) | this->m_NavBlocker.m_hBlocker.m_Index & 0x7FFF;
LABEL_22:
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED);
}


// CBasePropDoor::IsDisabledByRescue  (line 241, @0x00000000023542e0, libserver.so)
bool __fastcall CBasePropDoor::IsDisabledByRescue(const CBasePropDoor *const this)
{
  return this->m_isRescueDoor.m_Value;
}


// CBasePropDoor::IsDisabledByCheckpoint  (line 250, @0x00000000023542f0, libserver.so)
bool __fastcall CBasePropDoor::IsDisabledByCheckpoint(const CBasePropDoor *const this)
{
  return this->m_disabledByCheckpoint;
}


// CBasePropDoor::IsCheckpointDoor  (line 259, @0x000000000234aba0, libserver.so)
bool __fastcall CBasePropDoor::IsCheckpointDoor(const CBasePropDoor *const this)
{
  return 0;
}


// CBasePropDoor::IsAbleToCloseAreaPortals  (line 268, @0x000000000234abb0, libserver.so)
bool __fastcall CBasePropDoor::IsAbleToCloseAreaPortals(const CBasePropDoor *const this)
{
  return 1;
}


// CBasePropDoor::RescueDisable  (line 277, @0x0000000002354300, libserver.so)  // inlines: ListenForGameEvent, NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::SetDamageOptions
// callers: CBasePropDoor::FireGameEvent
// strings: "finale_start"
void __fastcall CBasePropDoor::RescueDisable(CBasePropDoor *const this, bool state)
{
  if ( this->m_isRescueDoor.m_Value != state )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1940, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_isRescueDoor.m_Value = state;
    if ( state )
    {
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
      if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED )
        (*(this->_vptr_IHandleEntity + 308))(this);
      this->m_bRegisteredForEvents = 1;
      (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "finale_start", 1);
    }
    else
    {
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
    }
  }
}


// CBasePropDoor::FireGameEvent  (line 304, @0x00000000023543c0, libserver.so)  // inlines: FStrEq, _V_strcmp
// calls: CBasePropDoor::RescueDisable
// strings: "finale_start"
void __fastcall CBasePropDoor::FireGameEvent(CBasePropDoor *const this, IGameEvent *event)
{
  char *v3; // rax

  v3 = (*(event->_vptr_IGameEvent + 2))(event);
  if ( v3 == "finale_start" || strcmp(v3, "finale_start") == 0 )
    CBasePropDoor::RescueDisable(this, 0);
}


// CBasePropDoor::CheckpointDisable  (line 316, @0x0000000002354420, libserver.so)
// calls: CBaseEntity::SetDamageOptions
void __fastcall CBasePropDoor::CheckpointDisable(CBasePropDoor *const this, bool state)
{
  this->m_disabledByCheckpoint = state;
  if ( state )
  {
    if ( (*(this->_vptr_IHandleEntity + 297))(this) != 0 )
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
    if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED )
      (*(this->_vptr_IHandleEntity + 308))(this);
  }
}


// CBasePropDoor::OnDoorOpened  (line 335, @0x000000000234bdf0, libserver.so)
// calls: CNavDoorBlocker::UpdateNavBlocking
void __fastcall CBasePropDoor::OnDoorOpened(CBasePropDoor *const this)
{
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, 0);
}


// CBasePropDoor::OnDoorClosed  (line 343, @0x000000000234eb90, libserver.so)  // inlines: GetFloat, NetworkStateChanged, Set, Start, operator=<float>
// calls: CNavDoorBlocker::UpdateNavBlocking, CountdownTimer::Now
// callers: CPropDoorRotating::OnDoorClosed
void __fastcall CBasePropDoor::OnDoorClosed(CBasePropDoor *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  float v4; // [rsp+8h] [rbp-18h]
  float m_fValue; // [rsp+Ch] [rbp-14h]

  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, 1);
  m_fValue = ZombieDoorReopenInterval.m_pParent->m_Value.m_fValue;
  *&v2 = CountdownTimer::Now(&this->m_closedTimer) + m_fValue;
  if ( *&v2 != this->m_closedTimer.m_timestamp.m_Value )
  {
    v4 = *&v2;
    (*(this->m_closedTimer._vptr_CountdownTimer + 2))(&this->m_closedTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v2 = LODWORD(v4);
    this->m_closedTimer.m_timestamp.m_Value = v4;
  }
  if ( m_fValue != this->m_closedTimer.m_duration.m_Value )
  {
    (*(this->m_closedTimer._vptr_CountdownTimer + 2))(
      &this->m_closedTimer,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v2,
      v3,
      m_fValue);
    this->m_closedTimer.m_duration.m_Value = m_fValue;
  }
}


// CBasePropDoor::OnLockedUse  (line 351, @0x0000000002362db0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: PlayLockSounds, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBasePropDoor::OnLockedUse(CBasePropDoor *const this, CBaseEntity *pActivator, CBaseEntity *pCaller)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  PlayLockSounds(this, &this->m_ls, 1, 0, &this->m_vecLatchWorldPosition);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnLockedUse, pActivator, pCaller, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBasePropDoor::OnUnlockedUse  (line 363, @0x000000000234d990, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, PlayLatchSounds, Set, operator=
// calls: PlayLockSounds
void __fastcall CBasePropDoor::OnUnlockedUse(CBasePropDoor *const this, CBaseEntity *pActivator, CBaseEntity *pCaller)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx

  if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hActivator.m_Index) = v5 | this->m_hActivator.m_Index & 0x8000;
    this->m_hActivator.m_Index = (v4 << 15) | this->m_hActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hActivator.m_Index = -1;
  }
  if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED )
    PlayLockSounds(this, &this->m_ls, 0, 0, &this->m_vecLatchWorldPosition);
}


// CBasePropDoor::PlayLatchSounds  (line 373, @0x0000000002354480, libserver.so)
// calls: PlayLockSounds
void __fastcall CBasePropDoor::PlayLatchSounds(CBasePropDoor *const this, bool bLatched)
{
  if ( !bLatched )
    PlayLockSounds(this, &this->m_ls, 0, 0, &this->m_vecLatchWorldPosition);
}


// CBasePropDoor::EmitDoorSound  (line 386, @0x0000000002351a70, libserver.so)  // inlines: AllocateData, CPASFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], CBaseEntity::GetAbsOrigin, __stack_chk_fail, _Unwind_Resume, CSosFieldData::ClearData
void __fastcall CBasePropDoor::EmitDoorSound(CBasePropDoor *const this, const char *pszSoundName, bool bEmitAtLatch)
{
  Vector *p_m_vecLatchWorldPosition; // rax
  SndOpEventGuid_t started; // r14
  vec_t y; // xmm2_4
  __m128i z_low; // xmm1
  vec_t x; // r12d
  int v10; // r15d
  SosFieldValueMem_t *m_pData; // rax
  vec_t v12; // [rsp+Ch] [rbp-1A4h]
  Vector vecSoundPosition; // [rsp+10h] [rbp-1A0h] BYREF
  CSosFieldData fieldData; // [rsp+20h] [rbp-190h] BYREF
  CPASFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v16; // [rsp+178h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  p_m_vecLatchWorldPosition = &this->m_vecLatchWorldPosition;
  if ( !bEmitAtLatch )
    p_m_vecLatchWorldPosition = CBaseEntity::GetAbsOrigin(this);
  vecSoundPosition = *p_m_vecLatchWorldPosition;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vecSoundPosition);
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, pszSoundName, 0, -1, 0.0);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  y = this->m_vecLatchWorldPosition.y;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(this->m_vecLatchWorldPosition.z);
  v12 = y;
  x = this->m_vecLatchWorldPosition.x;
  v10 = _mm_cvtsi128_si32(z_low);
  fieldData.m_pData = 0;
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  if ( fieldData.m_nAllocSize <= 0xB )
  {
    if ( fieldData.m_pData != 0 && fieldData.m_nAllocSize > 8 )
      operator delete[](fieldData.m_pData);
    m_pData = operator new[](&stru_C);
    fieldData.m_pData = m_pData;
    fieldData.m_nAllocSize = 12;
  }
  else
  {
    m_pData = fieldData.m_pData;
  }
  *m_pData = x;
  *(m_pData + 2) = v10;
  *(m_pData + 1) = v12;
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "position", &fieldData, 0, 0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBasePropDoor::ObjectCaps  (line 397, @0x000000000234b760, libserver.so)  // inlines: HasSpawnFlags
// calls: CBaseEntity::ObjectCaps
int __fastcall CBasePropDoor::ObjectCaps(CBasePropDoor *const this)
{
  return CBaseEntity::ObjectCaps(this) | ((this->m_spawnflags.m_Value & 0x8000) == 0 ? 0x21 : 0);
}


// CBasePropDoor::Activate  (line 406, @0x000000000236a110, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlSymbolLarge, CopyConstruct<CHandle<CBasePropDoor> >, Element, GetEHandle, GetEntityIdentity, GetEntityName, GetEntryIndex, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetMaster, operator!=, operator=, operator[]
// calls: CBaseProp::Activate, CBasePropDoor::UpdateAreaPortals, CGameEntitySystem::FindEntityByName, __dynamic_cast, CUtlMemory<CHandle<CBasePropDoor>, int>::Grow
// globals: `typeinfo for'CBasePropDoor, CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::Activate(CBasePropDoor *const this, ActivateType_t activateType)
{
  UtlSymLargeId_t m_Id; // r12
  _BYTE *v4; // rax
  CBaseEntity *v5; // r15
  CBasePropDoor *EntityByName; // rax
  CBasePropDoor *v7; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v9; // edx
  __int16 v10; // si
  __int64 m_Size; // rdx
  int v12; // ecx
  CHandle<CBasePropDoor> *v13; // rdx
  uint32 m_Index; // edx
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rdx
  int v18; // ecx
  __int16 v19; // si
  int v20; // [rsp+Ch] [rbp-54h]
  CBasePropDoor *pDoor; // [rsp+18h] [rbp-48h]
  CBasePropDoor *pDoora; // [rsp+18h] [rbp-48h]
  string_t iszName; // [rsp+20h] [rbp-40h] BYREF

  CBaseProp::Activate(this, activateType);
  CBasePropDoor::UpdateAreaPortals(this, this->m_eDoorState.m_Value != DoorState_t::DOOR_STATE_CLOSED);
  m_Id = this->m_pEntity->m_name.u.m_Id;
  if ( m_Id != 0 )
  {
    v4 = this->m_SlaveName.u.m_Id;
    if ( v4 != 0 && *v4 != 0 )
      m_Id = this->m_SlaveName.u.m_Id;
    v5 = 0;
    while ( 1 )
    {
      iszName.u.m_Id = m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v5, &iszName, this, 0, 0, 0);
      v5 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( this != EntityByName )
      {
        v7 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBasePropDoor, 0);
        if ( v7 != 0 && v7->m_hDoorList.m_Size <= 0 )
        {
          LODWORD(iszName.u.m_Id) = -1;
          m_pEntity = v7->m_pEntity;
          if ( m_pEntity != 0 )
          {
            v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            v10 = 0x7FFF;
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(iszName.u.m_Id) = v10 | iszName.u.m_Id & 0x8000;
            LODWORD(iszName.u.m_Id) = (v9 << 15) | iszName.u.m_Id & 0x7FFF;
          }
          m_Size = this->m_hDoorList.m_Size;
          v12 = this->m_hDoorList.m_Size;
          if ( m_Size == this->m_hDoorList.m_Memory.m_nAllocationCount )
          {
            v20 = this->m_hDoorList.m_Size;
            pDoora = v7;
            CUtlMemory<CHandle<CBasePropDoor>,int>::Grow(&this->m_hDoorList.m_Memory, 1);
            v12 = this->m_hDoorList.m_Size;
            m_Size = v20;
            v7 = pDoora;
          }
          this->m_hDoorList.m_Size = v12 + 1;
          v13 = &this->m_hDoorList.m_Memory.m_pMemory[m_Size];
          if ( v13 != 0 )
            v13->m_Index = iszName.u.m_Id;
          m_Index = v7->m_hMaster.m_Value.m_Index;
          if ( m_Index + 2 <= 1
            || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hMaster.m_Value.m_Index) >> 9)
                                                                     & 0x3F]) == 0
            || (v16 = &v15[v7->m_hMaster.m_Value.m_Index & 0x1FF]) == 0
            || m_Index != v16->m_EHandle.m_Index
            || this != v16->m_pInstance )
          {
            pDoor = v7;
            (*(v7->_vptr_IHandleEntity + 22))(v7, 2056, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v17 = this->m_pEntity;
            v7 = pDoor;
            if ( v17 != 0 )
            {
              v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
              if ( v17->m_EHandle.m_Index == -1 )
                v19 = 0x7FFF;
              else
                v19 = v17->m_EHandle.m_Index & 0x7FFF;
              LOWORD(pDoor->m_hMaster.m_Value.m_Index) = v19 | pDoor->m_hMaster.m_Value.m_Index & 0x8000;
              pDoor->m_hMaster.m_Value.m_Index = (v18 << 15) | pDoor->m_hMaster.m_Value.m_Index & 0x7FFF;
            }
            else
            {
              pDoor->m_hMaster.m_Value.m_Index = -1;
            }
          }
          (*(v7->_vptr_IHandleEntity + 40))(v7, this);
        }
      }
    }
  }
}


// CBasePropDoor::HandleAnimEvent  (line 451, @0x00000000023645a0, libserver.so)
// calls: CDynamicProp::HandleAnimEvent, CBasePropDoor::DoorActivate
void __fastcall CBasePropDoor::HandleAnimEvent(CBasePropDoor *const this, animevent_t *pEvent)
{
  if ( pEvent->event == 1 )
    CBasePropDoor::DoorActivate(this);
  else
    CDynamicProp::HandleAnimEvent(this, pEvent);
}


// CBasePropDoor::CalcDoorSounds  (line 472, @0x00000000023544b0, libserver.so)  // inlines: AssignTo, Base, CUtlSymbolLarge, CWeakHandle, Element, FindKeyHash, GetDebugName, GetValue, GetValue<CUtlStringToken>, Init, MakeStringToken, String, ToCStr, operator->, operator=, operator[], ~CStudioHdr
// calls: CStudioHdr::CStudioHdr, KeyValues::operator new, KeyValues::KeyValues, CStudioHdr::KeyValueText, CStudioHdr::pszName, KeyValues::LoadFromBuffer, KeyValues::FindKey, KeyValues::deleteThis, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetModel, CEntityIdentity::GetDebugName, Warning (25 total)
// callers: CBasePropDoor::Spawn, CBasePropDoor::PrecacheDoorSounds
// strings: "door_options", "%s has Door model (%s) with no door_options! Verify that SKIN is valid, and has a corresp, "DoorSound.Null", "WoodenDoor.Lock", "WoodenDoor.Pound", "skin%d" (12 total)
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CBasePropDoor::CalcDoorSounds(
        CBasePropDoor *const this,
        HModel hModel,
        const CEntityKeyValues *pKeyValues,
        IEntityResourceManifest *pManifest)
{
  const char *v8; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rdx
  UtlSymLargeId_t v15; // r14
  const char *DebugName; // rax
  IPhysicsObject *v17; // rax
  const char *m_pAsString; // rdi
  const char *v19; // rdi
  const char *v20; // rdi
  const char *v21; // rdi
  const char *v22; // rdi
  const char *v23; // rdi
  const char *v24; // rdi
  const char *v25; // rdi
  IPhysicsObject *v26; // rax
  int16 m_type; // ax
  CUtlStringToken v28; // esi
  const CModel *v29; // rdi
  int MaterialGroupIndex; // eax
  int v31; // ecx
  KeyValues *Key; // rax
  KeyValues *v33; // r13
  const char *String; // rax
  const char *v35; // rax
  const char *v36; // rax
  const char *v37; // rax
  KeyValues *v38; // rax
  KeyValues *v39; // r13
  const char *v40; // rax
  const char *v41; // rax
  const char *v42; // rax
  const char *v43; // rax
  KeyValues *v44; // rax
  KeyValues *v45; // r13
  const char *v46; // r13
  uint32 v47; // eax
  IPhysicsObject *v48; // rax
  uint32 m_int; // r14d
  const char *v50; // r13
  uint32 v51; // eax
  IPhysicsObject *Object; // rax
  const char *v53; // rax
  const char *v54; // rax
  const char *m_uint64; // rax
  const char *v56; // rax
  const char *v57; // rax
  const char *v58; // rax
  const char *v59; // rax
  const char *v60; // rax
  const char *v61; // rax
  const char *v62; // rax
  KeyValues *pkvDoorSounds; // [rsp+10h] [rbp-2F0h]
  uint32 pkvDoorSoundsa; // [rsp+10h] [rbp-2F0h]
  string_t strSoundUnlock; // [rsp+18h] [rbp-2E8h]
  string_t strSoundLock; // [rsp+20h] [rbp-2E0h]
  string_t strSoundUnlocked; // [rsp+28h] [rbp-2D8h]
  const ResourceBindingBase_t *strSoundPound; // [rsp+30h] [rbp-2D0h]
  string_t strSoundLocked; // [rsp+38h] [rbp-2C8h]
  uint32 strSoundLockeda; // [rsp+38h] [rbp-2C8h]
  string_t strSoundMoving; // [rsp+40h] [rbp-2C0h]
  const char *strSoundOpenb; // [rsp+50h] [rbp-2B0h]
  string_t strSoundOpen; // [rsp+50h] [rbp-2B0h]
  string_t strSoundOpena; // [rsp+50h] [rbp-2B0h]
  KeyValues *modelKeyValues; // [rsp+58h] [rbp-2A8h]
  KeyValues *modelKeyValuesa; // [rsp+58h] [rbp-2A8h]
  UtlSymLargeId_t v77[2]; // [rsp+60h] [rbp-2A0h] BYREF
  UtlSymLargeId_t v78[2]; // [rsp+70h] [rbp-290h] BYREF
  UtlSymLargeId_t v79[2]; // [rsp+80h] [rbp-280h] BYREF
  const ResourceBindingBase_t *v80; // [rsp+90h] [rbp-270h] BYREF
  UtlSymLargeId_t v81[2]; // [rsp+A0h] [rbp-260h] BYREF
  UtlSymLargeId_t v82[2]; // [rsp+B0h] [rbp-250h] BYREF
  UtlSymLargeId_t v83[2]; // [rsp+C0h] [rbp-240h] BYREF
  UtlSymLargeId_t v84[2]; // [rsp+D0h] [rbp-230h] BYREF
  UtlSymLargeId_t v85[2]; // [rsp+E0h] [rbp-220h] BYREF
  UtlSymLargeId_t v86[2]; // [rsp+F0h] [rbp-210h] BYREF
  UtlSymLargeId_t v87[2]; // [rsp+100h] [rbp-200h] BYREF
  UtlSymLargeId_t v88[2]; // [rsp+110h] [rbp-1F0h] BYREF
  UtlSymLargeId_t v89[2]; // [rsp+120h] [rbp-1E0h] BYREF
  UtlSymLargeId_t v90[2]; // [rsp+130h] [rbp-1D0h] BYREF
  UtlSymLargeId_t v91[2]; // [rsp+140h] [rbp-1C0h] BYREF
  HModel hModela; // [rsp+150h] [rbp-1B0h] BYREF
  CStudioHdr hdr; // [rsp+160h] [rbp-1A0h] BYREF
  char szSkin[80]; // [rsp+170h] [rbp-190h] BYREF
  char modelName[264]; // [rsp+1C0h] [rbp-140h] BYREF
  unsigned __int64 v96; // [rsp+2C8h] [rbp-38h]

  v96 = __readfsqword(0x28u);
  hModela.m_pBinding = hModel.m_pBinding->m_pData;
  CStudioHdr::CStudioHdr(&hdr, &hModela, modelinfo);
  if ( hdr.m_pModel == 0 )
  {
    strSoundPound = 0;
    v15 = 0;
    strSoundUnlock.u.m_Id = 0;
    strSoundLock.u.m_Id = 0;
    strSoundUnlocked.u.m_Id = 0;
    strSoundLocked.u.m_Id = 0;
    strSoundMoving.u.m_Id = 0;
    strSoundOpen.u.m_Id = 0;
    goto LABEL_17;
  }
  modelKeyValues = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(modelKeyValues, "");
  strSoundOpenb = CStudioHdr::KeyValueText(&hdr);
  v8 = CStudioHdr::pszName(&hdr);
  if ( !KeyValues::LoadFromBuffer(modelKeyValues, v8, strSoundOpenb, 0, 0, 0, 0)
    || (pkvDoorSounds = KeyValues::FindKey(modelKeyValues, "door_options", 0)) == 0 )
  {
    strSoundPound = 0;
    v15 = 0;
    strSoundUnlock.u.m_Id = 0;
    strSoundLock.u.m_Id = 0;
    strSoundUnlocked.u.m_Id = 0;
    strSoundLocked.u.m_Id = 0;
    strSoundMoving.u.m_Id = 0;
    strSoundOpen.u.m_Id = 0;
    goto LABEL_16;
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_56:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_57;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v11 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v11) == 2020856412 )
      goto LABEL_12;
LABEL_9:
    if ( m_nCount <= ++v11 )
      goto LABEL_56;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v11] != 2020856412 )
    goto LABEL_9;
LABEL_12:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v13 = pKeyValues->m_keyValues.m_pElements;
  else
    v13 = 0;
  p_m_value = &v13[v11].m_value;
LABEL_57:
  m_type = p_m_value->m_type;
  if ( m_type != 0 )
  {
    if ( m_type == 30 )
    {
      m_uint64 = p_m_value->m_uint64;
      m_int = 0;
      strSoundOpena.u.m_Id = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 )
      {
        m_int = MurmurHash2LowerCase(m_uint64, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
          RegisterStringToken(m_int, strSoundOpena.u.m_Id, 0, 1);
      }
    }
    else
    {
      if ( m_type != 38 )
      {
        v54 = VariantFieldTypeName(m_type);
        Warning("No free conversion of %s variant to CUtlStringToken right now\n", v54);
        goto LABEL_58;
      }
      m_int = p_m_value->m_int;
    }
    v28.m_nHashCode = m_int;
  }
  else
  {
LABEL_58:
    v28.m_nHashCode = 1055040020;
  }
  if ( hModel.m_pBinding->m_pData != 0 )
    v29 = *hModel.m_pBinding->m_pData;
  else
    v29 = 0;
  MaterialGroupIndex = CModel::GetMaterialGroupIndex(v29, v28);
  v31 = 0;
  if ( MaterialGroupIndex >= 0 )
    v31 = MaterialGroupIndex;
  V_snprintf(szSkin, 80, "skin%d", v31);
  Key = KeyValues::FindKey(pkvDoorSounds, szSkin, 0);
  v33 = Key;
  if ( Key != 0 )
  {
    String = KeyValues::GetString(Key, "open", "", 0, 0);
    AllocPooledString(v77, String);
    strSoundOpen.u.m_Id = v77[0];
    v35 = KeyValues::GetString(v33, "close", "", 0, 0);
    AllocPooledString(v78, v35);
    v15 = v78[0];
    v36 = KeyValues::GetString(v33, "move", "", 0, 0);
    AllocPooledString(v79, v36);
    strSoundMoving.u.m_Id = v79[0];
    v37 = KeyValues::GetString(v33, "pound", "", 0, 0);
    AllocPooledString(&v80, v37);
    strSoundPound = v80;
    if ( this->m_nPhysicsMaterial.m_nHashCode == 0 )
    {
      v50 = KeyValues::GetString(v33, "surfaceprop", "", 0, 0);
      if ( v50 != 0 && CBaseEntity::VPhysicsGetObject(this) != 0 )
      {
        v51 = 0;
        if ( *v50 != 0 )
        {
          strSoundLockeda = MurmurHash2LowerCase(v50, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(strSoundLockeda, v50, 0, 1);
          v51 = strSoundLockeda;
        }
        this->m_nPhysicsMaterial.m_nHashCode = v51;
        Object = CBaseEntity::VPhysicsGetObject(this);
        (*(*Object + 1184LL))(Object, this->m_nPhysicsMaterial.m_nHashCode);
      }
    }
  }
  else
  {
    strSoundPound = 0;
    v15 = 0;
    strSoundMoving.u.m_Id = 0;
    strSoundOpen.u.m_Id = 0;
  }
  V_snprintf(modelName, 80, "hardware%d", this->m_nHardwareType);
  v38 = KeyValues::FindKey(pkvDoorSounds, modelName, 0);
  v39 = v38;
  if ( v38 != 0 )
  {
    v40 = KeyValues::GetString(v38, "locked", "", 0, 0);
    AllocPooledString(v81, v40);
    strSoundLocked.u.m_Id = v81[0];
    v41 = KeyValues::GetString(v39, "unlocked", "", 0, 0);
    AllocPooledString(v82, v41);
    strSoundUnlocked.u.m_Id = v82[0];
    v42 = KeyValues::GetString(v39, "lock", "", 0, 0);
    AllocPooledString(v83, v42);
    strSoundLock.u.m_Id = v83[0];
    v43 = KeyValues::GetString(v39, "unlock", "", 0, 0);
    AllocPooledString(v84, v43);
    strSoundUnlock.u.m_Id = v84[0];
  }
  else
  {
    strSoundUnlock.u.m_Id = 0;
    strSoundLock.u.m_Id = 0;
    strSoundUnlocked.u.m_Id = 0;
    strSoundLocked.u.m_Id = 0;
  }
  if ( strSoundOpen.u.m_Id == 0
    || v15 == 0
    || strSoundMoving.u.m_Id == 0
    || strSoundLocked.u.m_Id == 0
    || strSoundUnlocked.u.m_Id == 0
    || strSoundPound == 0 )
  {
    v44 = KeyValues::FindKey(pkvDoorSounds, "defaults", 0);
    v45 = v44;
    if ( v44 != 0 )
    {
      if ( strSoundOpen.u.m_Id == 0 )
      {
        v56 = KeyValues::GetString(v44, "open", "", 0, 0);
        AllocPooledString(v85, v56);
        strSoundOpen.u.m_Id = v85[0];
      }
      if ( v15 == 0 )
      {
        v62 = KeyValues::GetString(v45, "close", "", 0, 0);
        AllocPooledString(v86, v62);
        v15 = v86[0];
      }
      if ( strSoundMoving.u.m_Id == 0 )
      {
        v61 = KeyValues::GetString(v45, "move", "", 0, 0);
        AllocPooledString(v87, v61);
        strSoundMoving.u.m_Id = v87[0];
      }
      if ( strSoundLocked.u.m_Id == 0 )
      {
        v60 = KeyValues::GetString(v45, "locked", "", 0, 0);
        AllocPooledString(v88, v60);
        strSoundLocked.u.m_Id = v88[0];
      }
      if ( strSoundUnlocked.u.m_Id == 0 )
      {
        v59 = KeyValues::GetString(v45, "unlocked", "", 0, 0);
        AllocPooledString(v89, v59);
        strSoundUnlocked.u.m_Id = v89[0];
      }
      if ( strSoundLock.u.m_Id == 0 )
      {
        v58 = KeyValues::GetString(v45, "lock", "", 0, 0);
        AllocPooledString(v90, v58);
        strSoundLock.u.m_Id = v90[0];
      }
      if ( strSoundUnlock.u.m_Id == 0 )
      {
        v57 = KeyValues::GetString(v45, "unlock", "", 0, 0);
        AllocPooledString(v91, v57);
        strSoundUnlock.u.m_Id = v91[0];
      }
      if ( strSoundPound == 0 )
      {
        v53 = KeyValues::GetString(v45, "pound", "", 0, 0);
        AllocPooledString(&hModela, v53);
        strSoundPound = hModela.m_pBinding;
      }
      v46 = KeyValues::GetString(v45, "surfaceprop", "", 0, 0);
      if ( v46 != 0 && CBaseEntity::VPhysicsGetObject(this) != 0 )
      {
        v47 = 0;
        if ( *v46 != 0 )
        {
          pkvDoorSoundsa = MurmurHash2LowerCase(v46, 0x31415926u);
          if ( g_bUpdateStringTokenDatabase )
            RegisterStringToken(pkvDoorSoundsa, v46, 0, 1);
          v47 = pkvDoorSoundsa;
        }
        this->m_nPhysicsMaterial.m_nHashCode = v47;
        v48 = CBaseEntity::VPhysicsGetObject(this);
        (*(*v48 + 1184LL))(v48, this->m_nPhysicsMaterial.m_nHashCode);
      }
    }
  }
LABEL_16:
  KeyValues::deleteThis(modelKeyValues);
LABEL_17:
  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    if ( this->m_nPhysicsMaterial.m_nHashCode != 0 )
    {
      v26 = CBaseEntity::VPhysicsGetObject(this);
      (*(*v26 + 1184LL))(v26, this->m_nPhysicsMaterial.m_nHashCode);
    }
    else
    {
      modelKeyValuesa = *(modelinfo->_vptr_IAppSystem + 15);
      CBaseEntity::GetModel(&hModela, this);
      (modelKeyValuesa)(modelinfo, &hModela, modelName, 260);
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning(
        "%s has Door model (%s) with no door_options! Verify that SKIN is valid, and has a corresponding options block in"
        " the model QC file\n",
        DebugName,
        modelName);
      v17 = CBaseEntity::VPhysicsGetObject(this);
      (*(*v17 + 1184LL))(v17, 3076510970LL);
    }
  }
  if ( this->m_SoundOpen.u.m_Id == 0 )
    this->m_SoundOpen = strSoundOpen;
  if ( this->m_SoundClose.u.m_Id == 0 )
    this->m_SoundClose.u.m_Id = v15;
  if ( this->m_SoundMoving.u.m_Id == 0 )
    this->m_SoundMoving = strSoundMoving;
  if ( this->m_ls.sLockedSound.u.m_Id == 0 )
    this->m_ls.sLockedSound = strSoundLocked;
  if ( this->m_ls.sUnlockedSound.u.m_Id == 0 )
    this->m_ls.sUnlockedSound = strSoundUnlocked;
  if ( this->m_SoundLock.u.m_Id == 0 )
    this->m_SoundLock = strSoundLock;
  if ( this->m_SoundUnlock.u.m_Id == 0 )
    this->m_SoundUnlock = strSoundUnlock;
  if ( this->m_SoundPound.u.m_Id == 0 )
    this->m_SoundPound.u.m_Id = strSoundPound;
  UTIL_ValidateSoundName(&this->m_SoundMoving, "DoorSound.Null");
  UTIL_ValidateSoundName(&this->m_SoundOpen, "DoorSound.Null");
  UTIL_ValidateSoundName(&this->m_SoundClose, "DoorSound.Null");
  UTIL_ValidateSoundName(&this->m_ls.sLockedSound, "DoorSound.Null");
  UTIL_ValidateSoundName(&this->m_ls.sUnlockedSound, "DoorSound.Null");
  UTIL_ValidateSoundName(&this->m_SoundLock, "WoodenDoor.Lock");
  UTIL_ValidateSoundName(&this->m_SoundUnlock, "WoodenDoor.Lock");
  UTIL_ValidateSoundName(&this->m_SoundPound, "WoodenDoor.Pound");
  if ( pManifest != 0 )
  {
    m_pAsString = "";
    if ( this->m_SoundMoving.u.m_Id != 0 )
      m_pAsString = this->m_SoundMoving.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(m_pAsString, pManifest);
    v19 = "";
    if ( this->m_SoundOpen.u.m_Id != 0 )
      v19 = this->m_SoundOpen.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v19, pManifest);
    v20 = "";
    if ( this->m_SoundClose.u.m_Id != 0 )
      v20 = this->m_SoundClose.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v20, pManifest);
    v21 = "";
    if ( this->m_ls.sLockedSound.u.m_Id != 0 )
      v21 = this->m_ls.sLockedSound.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v21, pManifest);
    v22 = "";
    if ( this->m_ls.sUnlockedSound.u.m_Id != 0 )
      v22 = this->m_ls.sUnlockedSound.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v22, pManifest);
    v23 = "";
    if ( this->m_SoundLock.u.m_Id != 0 )
      v23 = this->m_SoundLock.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v23, pManifest);
    v24 = "";
    if ( this->m_SoundUnlock.u.m_Id != 0 )
      v24 = this->m_SoundUnlock.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v24, pManifest);
    v25 = "";
    if ( this->m_SoundPound.u.m_Id != 0 )
      v25 = this->m_SoundPound.u.m_pAsString;
    CBaseEntity::PrecacheScriptSound(v25, pManifest);
  }
  CStudioHdr::Term(&hdr);
}


// CBasePropDoor::PrecacheDoorSounds  (line 628, @0x00000000023651d0, libserver.so)  // inlines: CWeakHandle, FromUntypedHandle, Init
// calls: CWeakHandle<InfoForResourceTypeCModel>::InitUntyped, CBasePropDoor::CalcDoorSounds
void __fastcall CBasePropDoor::PrecacheDoorSounds(
        CBasePropDoor *const this,
        ResourceHandle_t hResource,
        const CEntityPrecacheContext *pContext)
{
  IEntityResourceManifest *m_pManifest; // rcx
  const CEntityKeyValues *m_pKeyValues; // rdx
  HModel hModel; // [rsp+0h] [rbp-30h] BYREF
  HModel v8; // [rsp+10h] [rbp-20h] BYREF

  hModel.m_pBinding = 0;
  CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(&hModel, hResource);
  m_pManifest = pContext->m_pManifest;
  m_pKeyValues = pContext->m_pKeyValues;
  v8.m_pBinding = hModel.m_pBinding;
  CBasePropDoor::CalcDoorSounds(this, &v8, m_pKeyValues, m_pManifest);
}


// CBasePropDoor::Precache  (line 634, @0x00000000023518e0, libserver.so)  // inlines: AddResource<CBasePropDoor, CBasePropDoor>, Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CBreakableProp::Precache
// callers: CPropDoorRotatingBreakable::Precache
// globals: CBasePropDoor::PrecacheDoorSounds(ResourceBindingBase_t const*,CEntityPrecacheContext const*), CEntityKeyValues::sm_EmptyVariant
void __fastcall CBasePropDoor::Precache(CBasePropDoor *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v5; // r10d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // r9
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rax

  CBreakableProp::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  v5 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v5 <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    return;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == -926958586 )
      goto LABEL_9;
LABEL_6:
    if ( *&v5 <= ++v7 )
      goto LABEL_14;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != -926958586 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_12:
    if ( p_m_value->m_uint64 != 0 )
      (*(*pContext->m_pManifest + 16LL))(
        pContext->m_pManifest,
        p_m_value->m_uint64,
        this,
        CBasePropDoor::PrecacheDoorSounds,
        0);
  }
}


// CBasePropDoor::DisableAreaPortalThink  (line 647, @0x0000000002355340, libserver.so)
// calls: CBasePropDoor::UpdateAreaPortals
void __fastcall CBasePropDoor::DisableAreaPortalThink(CBasePropDoor *const this)
{
  CBasePropDoor::UpdateAreaPortals(this, 0);
}


// CBasePropDoor::UpdateAreaPortals  (line 656, @0x0000000002355270, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseEntity::ThinkSet, CGameEntitySystem::FindEntityByClassname
// callers: CBasePropDoor::DisableAreaPortalThink, CPropDoorRotatingBreakable::Event_Killed, CPropDoorRotatingBreakable::OnTakeDamage, CBasePropDoor::OnStartOpeningFromClosed, CBasePropDoor::Activate
// strings: "func_areaportal"
void __fastcall CBasePropDoor::UpdateAreaPortals(CBasePropDoor *const this, bool isOpen)
{
  _BOOL4 v2; // r15d
  UtlSymLargeId_t m_Id; // r12
  CBaseEntity *v5; // r14
  CBaseEntity *EntityByClassname; // rax
  int (**vptr_IHandleEntity)(...); // rax
  UtlSymLargeId_t v8[8]; // [rsp+10h] [rbp-40h] BYREF

  v2 = isOpen;
  CBaseEntity::ThinkSet(this, 0LL, -1.0, -427720293, 0);
  if ( (*(this->_vptr_IHandleEntity + 299))(this) == 0 )
    v2 = 1;
  m_Id = this->m_pEntity->m_name.u.m_Id;
  if ( m_Id != 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v5, "func_areaportal");
      v5 = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      vptr_IHandleEntity = EntityByClassname->_vptr_IHandleEntity;
      v8[0] = m_Id;
      if ( vptr_IHandleEntity[99](v5, v8) != 0 )
        (*(v5->_vptr_IHandleEntity + 108))(v5, this, this, v2, 0.0);
    }
  }
}


// CBasePropDoor::SetDoorBlocker  (line 684, @0x0000000002355350, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// callers: CBasePropDoor::Spawn, CBasePropDoor::DoorOpenMoveDone, CBasePropDoor::DoorCloseMoveDone, CBasePropDoor::OnStartBlocked
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::SetDoorBlocker(CBasePropDoor *const this, CBaseEntity *pBlocker)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx
  CConcreteEntityList *v5; // rsi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  if ( pBlocker == 0 || (m_pEntity = pBlocker->m_pEntity) == 0 )
  {
    this->m_hBlocker.m_Index = -1;
LABEL_9:
    this->m_bFirstBlocked = 0;
    return;
  }
  v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  v4 = 0x7FFF;
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v5 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hBlocker.m_Index) = v4 | this->m_hBlocker.m_Index & 0x8000;
  v6 = (v3 << 15) | this->m_hBlocker.m_Index & 0x7FFF;
  this->m_hBlocker.m_Index = v6;
  if ( v6 + 2 <= 1 )
    goto LABEL_9;
  v7 = v5->m_pIdentityChunks[(LOWORD(this->m_hBlocker.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    goto LABEL_9;
  v8 = &v7[this->m_hBlocker.m_Index & 0x1FF];
  if ( v8 == 0 || v6 != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
    goto LABEL_9;
}


// CBasePropDoor::InputPlayerOpen  (line 697, @0x000000000234ed30, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBasePropDoor*
void __fastcall CBasePropDoor::InputPlayerOpen(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  unsigned __int16 v2; // dx
  __int64 v3; // r8
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  char *v6; // rdx

  while ( (this->m_spawnflags.m_Value & 0x8000) == 0 )
  {
    if ( this->m_hMaster.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    v4 = (this->m_hMaster.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( v4 + 2 <= 1
      || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) == 0
      || (v3 = 120 * (v3 & 0x1FF), (v6 = v5 + v3) == 0)
      || v4 != *(v6 + 4)
      || *v6 == 0 )
    {
      (*(this->_vptr_IHandleEntity + 319))(this, inputdata->pActivator, inputdata->pCaller, 1, v3);
      return;
    }
    this = *v6;
  }
}


// CBasePropDoor::InputPlayerClose  (line 716, @0x000000000234ee20, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBasePropDoor*
void __fastcall CBasePropDoor::InputPlayerClose(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  unsigned __int16 v2; // dx
  __int64 v3; // r8
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  char *v6; // rdx

  while ( (this->m_spawnflags.m_Value & 0x8000) == 0 )
  {
    if ( this->m_hMaster.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    v4 = (this->m_hMaster.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( v4 + 2 <= 1
      || (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) == 0
      || (v3 = 120 * (v3 & 0x1FF), (v6 = v5 + v3) == 0)
      || v4 != *(v6 + 4)
      || *v6 == 0 )
    {
      (*(this->_vptr_IHandleEntity + 319))(this, inputdata->pActivator, inputdata->pCaller, 2, v3);
      return;
    }
    this = *v6;
  }
}


// CBasePropDoor::Use  (line 739, @0x000000000234fbf0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetSerialNumber, IndexToIdentity, Init, LookupEntity, OnUse, operator CBasePropDoor*
void __fastcall CBasePropDoor::Use(
        CBasePropDoor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        __int64 useType,
        double value)
{
  uint32 v6; // edi
  unsigned __int16 v7; // r8
  int v8; // r10d
  int v9; // eax
  CEntitySystem *v10; // r8
  CEntityIdentity *v11; // rdi
  __int64 v12; // r10
  CEntityIdentity *v13; // rdi
  CEntityInstance *m_pInstance; // rdi

  v6 = this->m_hMaster.m_Value.m_Index >> 15;
  if ( this->m_hMaster.m_Value.m_Index == -1 )
  {
    v7 = 0x7FFF;
    v8 = 0x7FFF;
  }
  else
  {
    v7 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
    v8 = v7;
  }
  v9 = (v6 << 15) | v7 & 0x7FFF;
  v10 = g_pEntitySystem;
  if ( (v9 + 2) > 1
    && (v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v8 >> 9]) != 0
    && (v12 = v8 & 0x1FF, v10 = (8 * v12), (v13 = &v11[v12]) != 0)
    && v9 == v13->m_EHandle.m_Index
    && (m_pInstance = v13->m_pInstance) != 0 )
  {
    (*(m_pInstance->_vptr_IHandleEntity + 108))(m_pInstance, pActivator, pCaller, useType, value);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 319))(this, pActivator, pCaller, 3, v10, value);
  }
}


// CBasePropDoor::IsUsableByTeam  (line 765, @0x000000000234abc0, libserver.so)
bool __fastcall CBasePropDoor::IsUsableByTeam(const CBasePropDoor *const this, int teamNumber)
{
  return 1;
}


// CBasePropDoor::TryOpenClose  (line 972, @0x00000000023645c0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsDoorBlocked, IsDoorClosing, IsValid, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator==<DoorState_t>
// calls: CBasePropDoor::DoorActivate, CBasePropDoor::DoorClose, CEntityHandle::operator CEntityInstance*, CBasePropDoor::DoorOpen
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePropDoor::TryOpenClose(
        CBasePropDoor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        int actions)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v6; // r8
  unsigned __int64 m_Value; // rcx
  unsigned __int64 m_Index_low; // rdi
  DoorState_t v9; // eax
  bool result; // al
  unsigned int v11; // edx
  CEntityIdentity *v12; // rdx
  int v13; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  int v16; // eax
  __int16 v17; // cx
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *m_pEntity; // rcx
  int v20; // edx
  __int16 v21; // si
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx

  m_Index = this->m_hBlocker.m_Index;
  v6 = CEntityHandle::gm_pEntityList;
  m_Value = m_Index + 2;
  if ( m_Value > 1
    && (m_Index_low = LOWORD(this->m_hBlocker.m_Index),
        (m_Value = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (m_Value += 120 * (m_Index_low & 0x1FF), m_Value != 0)
    && m_Index == *(m_Value + 16)
    && *m_Value != 0 )
  {
    m_Value = this->m_eDoorState.m_Value;
    if ( m_Value == 3 )
    {
      if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
      {
        v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hActivator.m_Index) = v21 | this->m_hActivator.m_Index & 0x8000;
        this->m_hActivator.m_Index = (v20 << 15) | this->m_hActivator.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hActivator.m_Index = -1;
      }
      v22 = v6->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        m_pInstance = 0;
        v23 = &v22[m_Index_low & 0x1FF];
        if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
          m_pInstance = v23->m_pInstance;
      }
      else
      {
        m_pInstance = 0;
      }
      goto LABEL_29;
    }
    v9 = this->m_eDoorState.m_Value;
  }
  else
  {
    v9 = this->m_eDoorState.m_Value;
  }
  if ( v9 == DoorState_t::DOOR_STATE_CLOSED )
    goto LABEL_7;
  if ( v9 == DoorState_t::DOOR_STATE_OPEN )
  {
    if ( (this->m_spawnflags.m_Value & 0x2000) != 0 )
    {
LABEL_7:
      if ( (*(this->_vptr_IHandleEntity + 302))(this, pActivator, pCaller, m_Value, CEntityHandle::gm_pEntityList) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 309))(this, pActivator, pCaller);
        return 0;
      }
      else
      {
        (*(this->_vptr_IHandleEntity + 310))(this, pActivator, pCaller);
        CBasePropDoor::DoorActivate(this);
        return 1;
      }
    }
    return 1;
  }
  if ( v9 != DoorState_t::DOOR_STATE_OPENING )
  {
    v11 = v9 - 3;
    result = 1;
    if ( v11 > 1 )
      return result;
    if ( pActivator != 0 && (v15 = pActivator->m_pEntity) != 0 )
    {
      v16 = (v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1);
      v17 = 0x7FFF;
      if ( v15->m_EHandle.m_Index != -1 )
        v17 = v15->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hActivator.m_Index) = v17 | this->m_hActivator.m_Index & 0x8000;
      this->m_hActivator.m_Index = (v16 << 15) | this->m_hActivator.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hActivator.m_Index = -1;
    }
    m_pInstance = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
LABEL_29:
    CBasePropDoor::DoorOpen(this, m_pInstance);
    return 1;
  }
  if ( (this->m_spawnflags.m_Value & 0x2000) == 0 )
    return 1;
  if ( pActivator != 0 && (v12 = pActivator->m_pEntity) != 0 )
  {
    v13 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
    v14 = 0x7FFF;
    if ( v12->m_EHandle.m_Index != -1 )
      v14 = v12->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hActivator.m_Index) = v14 | this->m_hActivator.m_Index & 0x8000;
    this->m_hActivator.m_Index = (v13 << 15) | this->m_hActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hActivator.m_Index = -1;
  }
  CBasePropDoor::DoorClose(this);
  return 1;
}


// CBasePropDoor::OnUse  (line 1031, @0x0000000002355430, libserver.so)
void __fastcall CBasePropDoor::OnUse(
        CBasePropDoor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  (*(this->_vptr_IHandleEntity + 319))(this, pActivator, pCaller, 3, value);
}


// CBasePropDoor::InputClose  (line 1039, @0x00000000023643d0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBasePropDoor::DoorClose, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBasePropDoor::InputClose(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( this->m_eDoorState.m_Value != DoorState_t::DOOR_STATE_CLOSED )
  {
    pActivator = inputdata->pActivator;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnClose, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    CBasePropDoor::DoorClose(this);
  }
}


// CBasePropDoor::InputLock  (line 1052, @0x000000000234abd0, libserver.so)
void __fastcall CBasePropDoor::InputLock(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 316))(this, 1);
}


// CBasePropDoor::InputOpen  (line 1061, @0x0000000002355580, libserver.so)
// calls: CBasePropDoor::OpenIfUnlocked
void __fastcall CBasePropDoor::InputOpen(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  CBasePropDoor::OpenIfUnlocked(this, inputdata->pActivator, 0);
}


// CBasePropDoor::InputOpenAwayFrom  (line 1070, @0x00000000023555f0, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CGameEntitySystem::FindEntityByName, CBasePropDoor::OpenIfUnlocked, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_2355631, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CBasePropDoor::InputOpenAwayFrom(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r14
  CBaseEntity *pActivator; // r13
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  const char *v9; // rax
  const char *v10; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
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
        v10 = "true";
        if ( inputdata->value.m_char == 0 )
          v10 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
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
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, m_pszString, this, pActivator, pCaller, 0);
  CBasePropDoor::OpenIfUnlocked(this, inputdata->pActivator, EntityByName);
}


// CBasePropDoor::InputOpenAwayFromActivator  (line 1081, @0x0000000002355590, libserver.so)  // inlines: Float, operator float
// calls: CBasePropDoor::OpenIfUnlocked
void __fastcall CBasePropDoor::InputOpenAwayFromActivator(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  float m_flSpeed; // xmm0_4
  float m_float64; // xmm1_4
  float flTemp; // [rsp+Ch] [rbp-14h]

  m_flSpeed = this->m_flSpeed;
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flSpeed = m_float64;
  flTemp = m_flSpeed;
  CBasePropDoor::OpenIfUnlocked(this, inputdata->pActivator, inputdata->pActivator);
  this->m_flSpeed = flTemp;
}


// CBasePropDoor::OpenIfUnlocked  (line 1094, @0x0000000002355500, libserver.so)  // inlines: IsDoorOpen, operator==<DoorState_t>
// calls: CBasePropDoor::DoorOpen
// callers: CBasePropDoor::InputOpen, CBasePropDoor::InputOpenAwayFromActivator, CBasePropDoor::InputOpenAwayFrom
void __fastcall CBasePropDoor::OpenIfUnlocked(
        CBasePropDoor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pOpenAwayFrom)
{
  DoorState_t m_Value; // eax

  if ( (*(this->_vptr_IHandleEntity + 302))(this) == 0 )
  {
    m_Value = this->m_eDoorState.m_Value;
    if ( (m_Value - 1) > 1 )
    {
      if ( m_Value == DoorState_t::DOOR_STATE_CLOSED )
        (*(this->_vptr_IHandleEntity + 310))(this, pActivator, 0);
      CBasePropDoor::DoorOpen(this, pOpenAwayFrom);
    }
  }
}


// CBasePropDoor::InputToggle  (line 1114, @0x0000000002364470, libserver.so)  // inlines: IsDoorClosed, operator==<DoorState_t>
// calls: CBasePropDoor::DoorOpen, CBasePropDoor::DoorClose
void __fastcall CBasePropDoor::InputToggle(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  DoorState_t m_Value; // eax

  m_Value = this->m_eDoorState.m_Value;
  if ( m_Value != DoorState_t::DOOR_STATE_CLOSED )
  {
    if ( m_Value == DoorState_t::DOOR_STATE_OPEN )
      CBasePropDoor::DoorClose(this);
  }
  else if ( (*(this->_vptr_IHandleEntity + 302))(this, inputdata) == 0 )
  {
    CBasePropDoor::DoorOpen(this, 0);
  }
}


// CBasePropDoor::InputUnlock  (line 1134, @0x000000000234abf0, libserver.so)
void __fastcall CBasePropDoor::InputUnlock(CBasePropDoor *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 317))(this, 1);
}


// CBasePropDoor::Lock  (line 1143, @0x0000000002350050, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, operator CBasePropDoor*, operator CEntityInstance*, operator=<bool>, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::Lock(CBasePropDoor *const this, bool bPlaySound)
{
  const char *m_pAsString; // rsi
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  CHandle<CBasePropDoor> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *v13; // rsi

  if ( !this->m_bLocked.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLocked.m_Value = 1;
  }
  if ( bPlaySound )
  {
    m_pAsString = "";
    if ( this->m_SoundLock.u.m_Id != 0 )
      m_pAsString = this->m_SoundLock.u.m_pAsString;
    (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 1);
    m_Size = this->m_hDoorList.m_Size;
    if ( m_Size > 0 )
    {
      v6 = 0;
      v7 = 4LL * (m_Size - 1) + 4;
      do
      {
        while ( 1 )
        {
          v8 = &this->m_hDoorList.m_Memory.m_pMemory[v6 / 4];
          m_Index = v8->m_Index;
          if ( v8->m_Index + 2 > 1 )
          {
            v10 = v8->m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
                break;
            }
          }
          v6 += 4LL;
          if ( v6 == v7 )
            return;
        }
        v13 = "";
        if ( this->m_SoundLock.u.m_Id != 0 )
          v13 = this->m_SoundLock.u.m_pAsString;
        v6 += 4LL;
        (*(v12->m_pInstance->_vptr_IHandleEntity + 318))(v12->m_pInstance, v13, 1);
      }
      while ( v6 != v7 );
    }
  }
}


// CBasePropDoor::Unlock  (line 1171, @0x00000000023501a0, libserver.so)  // inlines: Get, GetDebugName, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, operator CBasePropDoor*, operator CEntityInstance*, operator=<bool>, operator[]
// calls: CBaseEntity::GetAbsOrigin, CEntityIdentity::GetDebugName, DevWarning
// strings: "Unlocking prop_door '%s' at (%.0f %.0f %.0f) with no hardware. All openable doors must ha
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::Unlock(CBasePropDoor *const this, bool bPlaySound)
{
  const char *m_pAsString; // rsi
  int m_Size; // eax
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  CHandle<CBasePropDoor> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *v13; // rsi
  const char *DebugName; // rax
  double z; // [rsp+8h] [rbp-38h]
  double y; // [rsp+10h] [rbp-30h]
  double x; // [rsp+18h] [rbp-28h]

  if ( this->m_nHardwareType == 0 )
  {
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    x = CBaseEntity::GetAbsOrigin(this)->x;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevWarning(
      1,
      "Unlocking prop_door '%s' at (%.0f %.0f %.0f) with no hardware. All openable doors must have hardware!\n",
      DebugName,
      x,
      y,
      z);
  }
  if ( this->m_bLocked.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bLocked.m_Value = 0;
  }
  if ( bPlaySound )
  {
    m_pAsString = "";
    if ( this->m_SoundUnlock.u.m_Id != 0 )
      m_pAsString = this->m_SoundUnlock.u.m_pAsString;
    (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 1);
    m_Size = this->m_hDoorList.m_Size;
    if ( m_Size > 0 )
    {
      v6 = 0;
      v7 = 4LL * (m_Size - 1) + 4;
      do
      {
        while ( 1 )
        {
          v8 = &this->m_hDoorList.m_Memory.m_pMemory[v6 / 4];
          m_Index = v8->m_Index;
          if ( v8->m_Index + 2 > 1 )
          {
            v10 = v8->m_Index;
            v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
            if ( v11 != 0 )
            {
              v12 = &v11[v10 & 0x1FF];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
                break;
            }
          }
          v6 += 4LL;
          if ( v6 == v7 )
            return;
        }
        v13 = "";
        if ( this->m_SoundUnlock.u.m_Id != 0 )
          v13 = this->m_SoundUnlock.u.m_pAsString;
        v6 += 4LL;
        (*(v12->m_pInstance->_vptr_IHandleEntity + 318))(v12->m_pInstance, v13, 1);
      }
      while ( v6 != v7 );
    }
  }
}


// CBasePropDoor::OnCheckpointDoorUnlocked  (line 1206, @0x000000000234ac10, libserver.so)
void __fastcall CBasePropDoor::OnCheckpointDoorUnlocked(CBasePropDoor *const this, CBaseEntity *pActivator)
{
  (*(this->_vptr_IHandleEntity + 317))(this, 1);
}


// CBasePropDoor::DoorActivate  (line 1215, @0x00000000023644d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CountdownTimer::Now, CBasePropDoor::DoorOpen, CBasePropDoor::DoorClose
// callers: CBasePropDoor::HandleAnimEvent, CBasePropDoor::TryOpenClose
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBasePropDoor::DoorActivate(CBasePropDoor *const this)
{
  float v2; // xmm0_4
  bool result; // al
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  char v8; // al
  bool v9; // [rsp+Ch] [rbp-14h]

  if ( this->m_closedTimer.m_timestamp.m_Value <= 0.0
    || (v2 = CountdownTimer::Now(&this->m_closedTimer), result = 0, v2 >= this->m_closedTimer.m_timestamp.m_Value) )
  {
    if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_OPEN
      && (v8 = (*(this->_vptr_IHandleEntity + 303))(this, 0)) != 0 )
    {
      v9 = v8;
      CBasePropDoor::DoorClose(this);
      return v9;
    }
    else
    {
      m_Index = this->m_hActivator.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[this->m_hActivator.m_Index & 0x1FF];
          if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            m_pInstance = v7->m_pInstance;
        }
      }
      CBasePropDoor::DoorOpen(this, m_pInstance);
      return 1;
    }
  }
  return result;
}


// CBasePropDoor::DoorOpen  (line 1243, @0x0000000002355450, libserver.so)  // inlines: IsDoorOpen, NetworkStateChanged, Set, SetDoorState, operator=<DoorState_t>, operator==<DoorState_t>
// callers: CBasePropDoor::OpenIfUnlocked, CBasePropDoor::OnStartOpeningFromClosed, CBasePropDoor::InputToggle, CBasePropDoor::DoorActivate, CBasePropDoor::TryOpenClose, CBasePropDoor::Blocked
// globals: CBasePropDoor::DoorOpenMoveDone(void)
void __fastcall CBasePropDoor::DoorOpen(CBasePropDoor *const this, CBaseEntity *pOpenAwayFrom)
{
  DoorState_t m_Value; // r12d
  int (**vptr_IHandleEntity)(...); // rax

  m_Value = this->m_eDoorState.m_Value;
  if ( (m_Value - 1) > 1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_pfnMoveDone.__pfn = CBasePropDoor::DoorOpenMoveDone;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_OPENING;
    this->m_pfnMoveDone.__delta = 0;
    vptr_IHandleEntity[311](this, pOpenAwayFrom);
    if ( m_Value == DoorState_t::DOOR_STATE_CLOSED )
      (*(this->_vptr_IHandleEntity + 320))(this, pOpenAwayFrom, 1);
  }
}


// CBasePropDoor::OnStartOpeningFromClosed  (line 1290, @0x0000000002363af0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, ToCStr, operator CBasePropDoor*, operator CEntityInstance*, operator bool, operator->, operator=, operator[], ~CVariantBase
// calls: CBasePropDoor::UpdateAreaPortals, CEntityIOOutput::FireOutputInternal, CBasePropDoor::DoorOpen, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::OnStartOpeningFromClosed(
        CBasePropDoor *const this,
        CBaseEntity *pOpenAwayFrom,
        bool bPlaySounds)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v7; // rcx
  unsigned int v8; // edx
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  int m_Size; // eax
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  CHandle<CBasePropDoor> *v15; // rdx
  uint32 v16; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CBasePropDoor *v20; // rdi
  const char *m_pAsString; // rsi
  CEntityIdentity *v22; // rsi
  CEntityIdentity *v23; // rsi
  CEntityInstance *v24; // rax
  const Vector *AbsOrigin; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  CBasePropDoor::UpdateAreaPortals(this, 1);
  if ( !bPlaySounds || (this->m_spawnflags.m_Value & 0x1000) != 0 )
  {
LABEL_3:
    m_Index = this->m_hActivator.m_Index;
    v7 = CEntityHandle::gm_pEntityList;
    v8 = m_Index + 2;
    goto LABEL_4;
  }
  m_pAsString = "";
  if ( this->m_SoundMoving.u.m_Id != 0 )
    m_pAsString = this->m_SoundMoving.u.m_pAsString;
  (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 0);
  m_Index = this->m_hActivator.m_Index;
  v7 = CEntityHandle::gm_pEntityList;
  v8 = m_Index + 2;
  if ( m_Index + 2 > 1 )
  {
    v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v22 != 0 )
    {
      v23 = &v22[this->m_hActivator.m_Index & 0x1FF];
      if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
      {
        v24 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
        if ( (*(v24->_vptr_IHandleEntity + 140))(v24) != 0 && (this->m_spawnflags.m_Value & 0x4000) == 0 )
        {
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          CSoundEnt::InsertSound(4, AbsOrigin, 512, 0.5, this, 0, 0);
          m_Index = this->m_hActivator.m_Index;
          v7 = CEntityHandle::gm_pEntityList;
          v8 = m_Index + 2;
          goto LABEL_4;
        }
        goto LABEL_3;
      }
    }
  }
LABEL_4:
  m_pInstance = 0;
  if ( v8 > 1 )
  {
    v10 = v7->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hActivator.m_Index & 0x1FF];
      if ( v11 != 0 && v11->m_EHandle.m_Index == m_Index )
        m_pInstance = v11->m_pInstance;
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnOpen, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  m_Size = this->m_hDoorList.m_Size;
  if ( m_Size > 0 )
  {
    v13 = 0;
    v14 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v15 = &this->m_hDoorList.m_Memory.m_pMemory[v13 / 4];
        v16 = v15->m_Index;
        if ( v15->m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && v16 == v19->m_EHandle.m_Index )
            {
              v20 = v19->m_pInstance;
              if ( v19->m_pInstance != 0 )
                break;
            }
          }
        }
        v13 += 4LL;
        if ( v13 == v14 )
          return;
      }
      v13 += 4LL;
      v20->m_hActivator.m_Index = this->m_hActivator.m_Index;
      CBasePropDoor::DoorOpen(v20, pOpenAwayFrom);
    }
    while ( v13 != v14 );
  }
}


// CBasePropDoor::DoorOpenMoveDone  (line 1350, @0x0000000002362e50, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, Set, SetDoorState, String, ToCStr, operator=, operator=<DoorState_t>, ~CVariantBase
// calls: CBasePropDoor::SetDoorBlocker, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CBasePropDoor::DoorAutoCloseThink(void)
void __fastcall CBasePropDoor::DoorOpenMoveDone(CBasePropDoor *const this)
{
  const char *m_pAsString; // rsi
  float m_flAutoReturnDelay; // xmm0_4
  float v4; // xmm0_4
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  CBasePropDoor::SetDoorBlocker(this, 0);
  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 )
  {
    m_pAsString = "";
    if ( this->m_SoundOpen.u.m_Id != 0 )
      m_pAsString = this->m_SoundOpen.u.m_pAsString;
    (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 0);
  }
  if ( this->m_eDoorState.m_Value != DoorState_t::DOOR_STATE_OPEN )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_OPEN;
  }
  m_flAutoReturnDelay = this->m_flAutoReturnDelay;
  if ( m_flAutoReturnDelay != -1.0 )
  {
    v4 = m_flAutoReturnDelay + 0.1;
    CBaseEntity::SetMoveDoneTime(this, v4, -1.0);
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CBasePropDoor::DoorAutoCloseThink;
    if ( this->m_flAutoReturnDelay == -1.0 )
      CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), COERCE_DOUBLE(3212836864LL), 0);
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyOpen, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  (*(this->_vptr_IHandleEntity + 307))(this);
  if ( this->m_numCloseAttempts > 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 17))(&this->m_Collision);
    this->m_numCloseAttempts = 0;
  }
  this->m_hActivator.m_Index = -1;
}


// CBasePropDoor::DoorAutoCloseThink  (line 1400, @0x00000000023648f0, libserver.so)
// calls: CBaseEntity::SetMoveDoneTime, CBaseEntity::SetNextThink, CBasePropDoor::DoorClose
// globals: CBasePropDoor::DoorAutoCloseThink(void)
void __fastcall CBasePropDoor::DoorAutoCloseThink(CBasePropDoor *const this)
{
  double v2; // xmm1_8
  float v3; // xmm0_4

  if ( (*(this->_vptr_IHandleEntity + 303))(this, 1) != 0 )
  {
    CBasePropDoor::DoorClose(this);
  }
  else
  {
    *&v2 = LODWORD(this->m_flAutoReturnDelay);
    if ( *&v2 == -1.0 )
    {
      CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
    }
    else
    {
      v3 = *&v2 + 0.1;
      CBaseEntity::SetMoveDoneTime(this, v3, *&v2);
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CBasePropDoor::DoorAutoCloseThink;
    }
  }
}


// CBasePropDoor::DoorClose  (line 1428, @0x0000000002364020, libserver.so)  // inlines: CVariantBase, CreateEvent, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUserID, IndexToIdentity, IsDoorClosed, IsValid, LookupEntity, NetworkStateChanged, Set, SetDoorState, String, ToBasePlayer, ToCStr, entindex, operator CBasePropDoor*, operator CEntityInstance*, operator bool, operator->, operator=<DoorState_t>, operator==<DoorState_t>, operator[], ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CSoundEnt::InsertSound, CEntityInstance::GetEntityIndex, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBasePropDoor::InputClose, CBasePropDoor::InputToggle, CBasePropDoor::DoorActivate, CBasePropDoor::TryOpenClose, CBasePropDoor::DoorAutoCloseThink, CBasePropDoor::Blocked
// strings: "door_close", "checkpoint"
// globals: CBasePropDoor::DoorCloseMoveDone(void), CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::DoorClose(CBasePropDoor *const this)
{
  DoorState_t m_Value; // eax
  __int64 v3; // rbx
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  __int64 v7; // rdx
  void (__fastcall *v8)(__int64, char *, __int64); // r14
  void (__fastcall *v9)(__int64, const char *, _QWORD); // r14
  unsigned __int8 v10; // al
  int m_Size; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // r13
  CHandle<CBasePropDoor> *v14; // rdx
  uint32 v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  const char *m_pAsString; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityInstance *v23; // rax
  DoorState_t v24; // eax
  const Vector *AbsOrigin; // rax
  const CEntityInstance *m_pInstance; // r15
  CEntityIndex v27; // eax
  CVariant value; // [rsp+0h] [rbp-40h] BYREF

  m_Value = this->m_eDoorState.m_Value;
  if ( m_Value != DoorState_t::DOOR_STATE_CLOSED && m_Value != DoorState_t::DOOR_STATE_CLOSING )
  {
    if ( (this->m_spawnflags.m_Value & 0x1000) != 0 )
      goto LABEL_4;
    m_pAsString = "";
    if ( this->m_SoundMoving.u.m_Id != 0 )
      m_pAsString = this->m_SoundMoving.u.m_pAsString;
    (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 0);
    m_Index = this->m_hActivator.m_Index;
    if ( m_Index + 2 > 1
      && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F]) != 0
      && (v22 = &v21[this->m_hActivator.m_Index & 0x1FF]) != 0
      && m_Index == v22->m_EHandle.m_Index
      && (v23 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator),
          (*(v23->_vptr_IHandleEntity + 140))(v23) != 0) )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CSoundEnt::InsertSound(4, AbsOrigin, 512, 0.5, this, 0, 0);
      v24 = this->m_eDoorState.m_Value;
    }
    else
    {
      v24 = this->m_eDoorState.m_Value;
    }
    if ( v24 != DoorState_t::DOOR_STATE_CLOSING )
    {
LABEL_4:
      (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_CLOSING;
    }
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CBasePropDoor::DoorCloseMoveDone;
    (*(this->_vptr_IHandleEntity + 312))(this);
    v3 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, "door_close", 0, 0);
    if ( v3 != 0 )
    {
      v4 = this->m_hActivator.m_Index;
      if ( v4 + 2 > 1
        && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F]) != 0
        && (v6 = &v5[this->m_hActivator.m_Index & 0x1FF]) != 0
        && v4 == v6->m_EHandle.m_Index
        && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
        && (*(m_pInstance->_vptr_IHandleEntity + 140))(v6->m_pInstance) != 0 )
      {
        v8 = *(*v3 + 112LL);
        v27.m_Data = CEntityInstance::GetEntityIndex(m_pInstance).m_Data;
        v7 = (*(*engine + 224LL))(engine, (v27.m_Data - 1));
      }
      else
      {
        v7 = 0;
        v8 = *(*v3 + 112LL);
      }
      v8(v3, "userid", v7);
      v9 = *(*v3 + 112LL);
      v10 = (*(this->_vptr_IHandleEntity + 297))(this);
      v9(v3, "checkpoint", v10);
      (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v3, 0);
    }
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnClose, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    m_Size = this->m_hDoorList.m_Size;
    if ( m_Size > 0 )
    {
      v12 = 0;
      v13 = 4LL * (m_Size - 1) + 4;
      do
      {
        while ( 1 )
        {
          v14 = &this->m_hDoorList.m_Memory.m_pMemory[v12 / 4];
          v15 = v14->m_Index;
          if ( v14->m_Index + 2 > 1 )
          {
            v16 = v14->m_Index;
            v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
            if ( v17 != 0 )
            {
              v18 = &v17[v16 & 0x1FF];
              if ( v18 != 0 && v15 == v18->m_EHandle.m_Index && v18->m_pInstance != 0 )
                break;
            }
          }
          v12 += 4LL;
          if ( v12 == v13 )
            return;
        }
        CBasePropDoor::DoorClose(v18->m_pInstance);
        v12 += 4LL;
      }
      while ( v12 != v13 );
    }
  }
}


// CBasePropDoor::DoorCloseMoveDone  (line 1487, @0x0000000002363010, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetDoorState, String, ToCStr, curtime, operator CEntityInstance*, operator=, operator=<DoorState_t>, ~CVariantBase
// calls: CBasePropDoor::SetDoorBlocker, CBaseEntity::StopSound, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CBasePropDoor::DisableAreaPortalThink(void)
void __fastcall CBasePropDoor::DoorCloseMoveDone(CBasePropDoor *const this)
{
  const char *m_pAsString; // rsi
  const char *v3; // rsi
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CGlobalVars *v8; // r12
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBasePropDoor::SetDoorBlocker(this, 0);
  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 )
  {
    m_pAsString = "";
    if ( this->m_SoundMoving.u.m_Id != 0 )
      m_pAsString = this->m_SoundMoving.u.m_pAsString;
    CBaseEntity::StopSound(this, m_pAsString);
    v3 = "";
    if ( this->m_SoundClose.u.m_Id != 0 )
      v3 = this->m_SoundClose.u.m_pAsString;
    (*(this->_vptr_IHandleEntity + 318))(this, v3, 1);
  }
  if ( this->m_eDoorState.m_Value != DoorState_t::DOOR_STATE_CLOSED )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_CLOSED;
  }
  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hActivator.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  value.m_uint64 = 0;
  value.m_type = 0;
  value.m_flags = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v9 = v8->m_flCurrentTime + 0.5;
  }
  else
  {
    v9 = 0.5;
  }
  CBaseEntity::ThinkSet(this, CBasePropDoor::DisableAreaPortalThink, v9, -427720293, 0);
  (*(this->_vptr_IHandleEntity + 308))(this);
  if ( this->m_numCloseAttempts > 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 17))(&this->m_Collision);
    this->m_numCloseAttempts = 0;
  }
  this->m_hActivator.m_Index = -1;
}


// CBasePropDoor::MasterStartBlocked  (line 1520, @0x00000000023636d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBasePropDoor*, operator CEntityInstance*, operator[]
// calls: CBasePropDoor::OnStartBlocked
// callers: CBasePropDoor::StartBlocked
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::MasterStartBlocked(CBasePropDoor *const this, CBaseEntity *pOther)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  CHandle<CBasePropDoor> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  m_Size = this->m_hDoorList.m_Size;
  if ( m_Size > 0 )
  {
    v5 = 0;
    v6 = 4LL * (m_Size - 1) + 4;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_hDoorList.m_Memory.m_pMemory[v5 / 4];
        m_Index = v7->m_Index;
        if ( v7->m_Index + 2 > 1 )
        {
          v9 = v7->m_Index;
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[v9 & 0x1FF];
            if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
              break;
          }
        }
        v5 += 4LL;
        if ( v5 == v6 )
          goto LABEL_10;
      }
      v5 += 4LL;
      CBasePropDoor::OnStartBlocked(v11->m_pInstance, pOther);
    }
    while ( v5 != v6 );
  }
LABEL_10:
  CBasePropDoor::OnStartBlocked(this, pOther);
}


// CBasePropDoor::StartBlocked  (line 1549, @0x0000000002363790, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBasePropDoor*
// calls: CBasePropDoor::OnStartBlocked, CBasePropDoor::MasterStartBlocked
void __fastcall CBasePropDoor::StartBlocked(CBasePropDoor *const this, CBaseEntity *pOther)
{
  uint32 v3; // edi
  unsigned __int16 v4; // cx
  int v5; // r8d
  int v6; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  this->m_bFirstBlocked = 1;
  v3 = this->m_hMaster.m_Value.m_Index >> 15;
  if ( this->m_hMaster.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1
    && (v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9]) != 0
    && (v8 = &v7[v5 & 0x1FF]) != 0
    && v6 == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0 )
  {
    CBasePropDoor::MasterStartBlocked(v8->m_pInstance, pOther);
  }
  else
  {
    CBasePropDoor::OnStartBlocked(this, pOther);
  }
}


// CBasePropDoor::OnStartBlocked  (line 1567, @0x0000000002363360, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetFloat, NetworkStateChanged, Set, Start, String, ToCStr, operator=<float>, ~CVariantBase
// calls: CBasePropDoor::SetDoorBlocker, CBaseEntity::StopSound, CountdownTimer::Now, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBasePropDoor::MasterStartBlocked, CBasePropDoor::StartBlocked
void __fastcall CBasePropDoor::OnStartBlocked(CBasePropDoor *const this, CBaseEntity *pOther)
{
  const char *m_pAsString; // rsi
  int (**vptr_IHandleEntity)(...); // rax
  double v6; // xmm0_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm0_8
  double v10; // xmm1_8
  double v11; // xmm2_8
  double v12; // xmm3_8
  float v13; // [rsp+8h] [rbp-38h]
  float v14; // [rsp+8h] [rbp-38h]
  float v15; // [rsp+Ch] [rbp-34h]
  float m_fValue; // [rsp+Ch] [rbp-34h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( !this->m_bFirstBlocked )
    (*(this->_vptr_IHandleEntity + 313))(this);
  CBasePropDoor::SetDoorBlocker(this, pOther);
  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 )
  {
    m_pAsString = "";
    if ( this->m_SoundMoving.u.m_Id != 0 )
      m_pAsString = this->m_SoundMoving.u.m_pAsString;
    CBaseEntity::StopSound(this, m_pAsString);
  }
  vptr_IHandleEntity = pOther->_vptr_IHandleEntity;
  if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSING )
  {
    if ( (vptr_IHandleEntity[144])(pOther) != 0
      || (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0
      || (*(pOther->_vptr_IHandleEntity + 147))(pOther) != 0 )
    {
      m_fValue = ZombieDoorRetryInterval.m_pParent->m_Value.m_fValue;
      *&v9 = CountdownTimer::Now(&this->m_blockedRetryTimer) + m_fValue;
      if ( *&v9 != this->m_blockedRetryTimer.m_timestamp.m_Value )
      {
        v14 = *&v9;
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v9 = LODWORD(v14);
        this->m_blockedRetryTimer.m_timestamp.m_Value = v14;
      }
      if ( m_fValue != this->m_blockedRetryTimer.m_duration.m_Value )
      {
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v9,
          v10,
          v11,
          v12,
          m_fValue);
        this->m_blockedRetryTimer.m_duration.m_Value = m_fValue;
      }
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnBlockedClosing, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  else
  {
    if ( (vptr_IHandleEntity[144])(pOther) != 0
      || (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0
      || (*(pOther->_vptr_IHandleEntity + 147))(pOther) != 0 )
    {
      v15 = ZombieDoorRetryInterval.m_pParent->m_Value.m_fValue;
      *&v6 = CountdownTimer::Now(&this->m_blockedRetryTimer) + v15;
      if ( *&v6 != this->m_blockedRetryTimer.m_timestamp.m_Value )
      {
        v13 = *&v6;
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v6 = LODWORD(v13);
        this->m_blockedRetryTimer.m_timestamp.m_Value = v13;
      }
      if ( v15 != this->m_blockedRetryTimer.m_duration.m_Value )
      {
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v6,
          v7,
          v8,
          v15);
        this->m_blockedRetryTimer.m_duration.m_Value = v15;
      }
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnBlockedOpening, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CBasePropDoor::Blocked  (line 1621, @0x0000000002364990, libserver.so)  // inlines: GetFloat, IsElapsed, NetworkStateChanged, Set, Start, operator=<float>
// calls: CountdownTimer::Now, CBasePropDoor::DoorClose, CBaseEntity::GetDamageOptions, EntityPhysics_CreateSolver, CBasePropDoor::DoorOpen, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBasePropDoor::Blocked(CBasePropDoor *const this, CBaseEntity *pOther)
{
  bool m_bForceClosed; // al
  double v5; // xmm0_8
  double v6; // xmm1_8
  int Health; // eax
  float v8; // [rsp+8h] [rbp-B8h]
  float m_fValue; // [rsp+Ch] [rbp-B4h]
  CTakeDamageInfo info; // [rsp+10h] [rbp-B0h] BYREF

  m_bForceClosed = this->m_bForceClosed;
  if ( !m_bForceClosed )
  {
LABEL_2:
    if ( CountdownTimer::Now(&this->m_blockedRetryTimer) >= this->m_blockedRetryTimer.m_timestamp.m_Value )
    {
      m_fValue = ZombieDoorRetryInterval.m_pParent->m_Value.m_fValue;
      *&v5 = CountdownTimer::Now(&this->m_blockedRetryTimer) + m_fValue;
      if ( *&v5 != this->m_blockedRetryTimer.m_timestamp.m_Value )
      {
        v8 = *&v5;
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          12,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
        *&v5 = LODWORD(v8);
        this->m_blockedRetryTimer.m_timestamp.m_Value = v8;
      }
      if ( m_fValue != this->m_blockedRetryTimer.m_duration.m_Value )
      {
        (*(this->m_blockedRetryTimer._vptr_CountdownTimer + 2))(
          &this->m_blockedRetryTimer,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v5,
          v6,
          m_fValue);
        this->m_blockedRetryTimer.m_duration.m_Value = m_fValue;
      }
      if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSING )
        CBasePropDoor::DoorOpen(this, pOther);
      else
        CBasePropDoor::DoorClose(this);
    }
    return;
  }
  if ( pOther->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
    goto LABEL_5;
  if ( CBaseEntity::GetDamageOptions(pOther) == DamageOptions_t::DAMAGE_NO
    || CBaseEntity::GetDamageOptions(pOther) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
  {
    EntityPhysics_CreateSolver(this, pOther, 1, 4.0);
    m_bForceClosed = this->m_bForceClosed;
    goto LABEL_5;
  }
  m_bForceClosed = this->m_bForceClosed;
  if ( !m_bForceClosed )
    goto LABEL_2;
  if ( pOther->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
  {
LABEL_5:
    if ( m_bForceClosed )
      return;
    goto LABEL_2;
  }
  if ( CBaseEntity::GetDamageOptions(pOther) == DamageOptions_t::DAMAGE_YES )
  {
    Health = CBaseEntity::GetHealth(pOther);
    CTakeDamageInfo::CTakeDamageInfo(&info, this, this, Health, 1, 0);
    CBaseEntity::TakeDamage(pOther, &info);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
  if ( !this->m_bForceClosed )
    goto LABEL_2;
}


// CBasePropDoor::EndBlocked  (line 1705, @0x0000000002363db0, libserver.so)  // inlines: CEntityHandle, CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, OnEndBlocked, String, ToCStr, operator CBasePropDoor*, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CBasePropDoor::OnEndBlocked, CEntityIOOutput::FireOutputInternal, CEntityIOOutput::FireOutput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBasePropDoor::EndBlocked(CBasePropDoor *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  unsigned __int64 m_Index_low; // rcx
  CEntityIdentity *v6; // rdx
  __int64 v7; // rsi
  CEntityIdentity *v8; // rdx
  int m_Size; // eax
  unsigned __int64 v10; // rbx
  __int64 v11; // r13
  CHandle<CBasePropDoor> *v12; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v14; // rdx
  char *v15; // rdx
  CBasePropDoor *v16; // rdi
  const char *m_pAsString; // rsi
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_hMaster.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hMaster.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  value.m_int = v4;
  m_Index_low = g_pEntitySystem;
  if ( v4 + 2 > 1
    && (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v7 = v3 & 0x1FF, m_Index_low = 8 * v7, (v8 = &v6[v7]) != 0)
    && v4 == v8->m_EHandle.m_Index
    && v8->m_pInstance != 0 )
  {
    (*(v8->m_pInstance->_vptr_IHandleEntity + 116))(v8->m_pInstance);
  }
  else
  {
    m_Size = this->m_hDoorList.m_Size;
    if ( m_Size > 0 )
    {
      v10 = 0;
      v11 = 4LL * (m_Size - 1) + 4;
      do
      {
        while ( 1 )
        {
          v12 = &this->m_hDoorList.m_Memory.m_pMemory[v10 / 4];
          m_Index = v12->m_Index;
          m_Index_low = v12->m_Index + 2;
          if ( m_Index_low > 1 )
          {
            m_Index_low = LOWORD(v12->m_Index);
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              m_Index_low = 120 * (m_Index_low & 0x1FF);
              v15 = v14 + m_Index_low;
              if ( v15 != 0 && m_Index == *(v15 + 4) )
              {
                v16 = *v15;
                if ( *v15 != 0 && !v16->m_bFirstBlocked )
                  break;
              }
            }
          }
          v10 += 4LL;
          if ( v10 == v11 )
            goto LABEL_17;
        }
        CBasePropDoor::OnEndBlocked(v16);
        v10 += 4LL;
      }
      while ( v10 != v11 );
    }
LABEL_17:
    if ( (this->m_spawnflags.m_Value & 0x1000) == 0 )
    {
      m_pAsString = "";
      if ( this->m_SoundMoving.u.m_Id != 0 )
        m_pAsString = this->m_SoundMoving.u.m_pAsString;
      (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 0, m_Index_low);
    }
    if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSING )
    {
      CEntityIOOutput::FireOutput(&this->m_OnUnblockedClosing, this, this);
    }
    else
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnUnblockedOpening, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    if ( !this->m_bFirstBlocked )
      CBasePropDoor::OnEndBlocked(this);
  }
}


// CBasePropDoor::OnEndBlocked  (line 1757, @0x000000000234d030, libserver.so)
// callers: CBasePropDoor::OnEndBlocked, CBasePropDoor::EndBlocked
void __fastcall CBasePropDoor::OnEndBlocked(CBasePropDoor *const this)
{
  (*(this->_vptr_IHandleEntity + 314))(this);
}


// CBasePropDoor::OnEndBlocked  (line 1757, @0x00000000023558c0, libserver.so)
// calls: CBasePropDoor::OnEndBlocked
void __fastcall CBasePropDoor::OnEndBlocked(CBasePropDoor *const this)
{
  if ( !this->m_bFirstBlocked )
    CBasePropDoor::OnEndBlocked(this);
}


// CBasePropDoor::OnInfectedAttack  (line 1788, @0x00000000023558e0, libserver.so)  // inlines: String, ToCStr
void __fastcall CBasePropDoor::OnInfectedAttack(CBasePropDoor *const this)
{
  const char *m_pAsString; // rsi

  m_pAsString = "";
  if ( this->m_SoundPound.u.m_Id != 0 )
    m_pAsString = this->m_SoundPound.u.m_pAsString;
  (*(this->_vptr_IHandleEntity + 318))(this, m_pAsString, 1);
}


// CTraceFilterDoor::~CTraceFilterDoor  (line 1801, @0x0000000002373db0, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterEntitiesOnly, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<const CBaseEntity*, int>::Purge
void __fastcall CTraceFilterDoor::~CTraceFilterDoor(CTraceFilterDoor *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CBaseEntity*,CUtlMemory<const CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pPassEnts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_4097810;
  this->m_pPassEnts.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_pPassEnts.m_Memory,
        CUtlMemory<CBaseEntity const*,int>::Purge(&this->m_pPassEnts.m_Memory),
        (this->m_pPassEnts.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    this->_vptr_CTraceFilter = off_3FE6970;
  }
  else
  {
    CUtlMemory<CBaseEntity const*,int>::Purge(p_m_Memory);
    this->_vptr_CTraceFilter = off_3FE6970;
  }
}


// CTraceFilterDoor::~CTraceFilterDoor  (line 1801, @0x0000000002373e20, libserver.so)  // inlines: Purge, RemoveAll, ~CTraceFilter, ~CTraceFilterDoor, ~CTraceFilterEntitiesOnly, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: operator delete, CUtlMemory<const CBaseEntity*, int>::Purge
void __fastcall CTraceFilterDoor::~CTraceFilterDoor(CTraceFilterDoor *const this)
{
  bool v2; // zf
  CUtlVectorBase<const CBaseEntity*,CUtlMemory<const CBaseEntity*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_pPassEnts.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CTraceFilter = off_4097810;
  this->m_pPassEnts.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_pPassEnts.m_Memory;
    CUtlMemory<CBaseEntity const*,int>::Purge(&this->m_pPassEnts.m_Memory);
    if ( (this->m_pPassEnts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity const*,int>::Purge(p_m_Memory);
  }
  this->_vptr_CTraceFilter = off_3FE6970;
  operator delete(this);
}


// CTraceFilterDoor::ShouldHitEntity  (line 1816, @0x0000000002373aa0, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline, GetParent
// calls: StandardFilterRules, PassServerEntityFilter, CGameSceneNode::GetOwnerEntity, CGameRules::ShouldCollide, CBaseEntity::VPhysicsGetObject
bool __fastcall CTraceFilterDoor::ShouldHitEntity(CTraceFilterDoor *const this, CBaseEntity *pEntity)
{
  bool ShouldCollide; // bl
  __int64 v6; // rbx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CCollisionProperty *m_pCollision; // rax
  int v10; // edx
  IPhysicsObject *Object; // r12

  if ( !StandardFilterRules(pEntity, this->m_attr.m_nInteractsWith) || !PassServerEntityFilter(pEntity, this->m_pDoor) )
    return 0;
  v6 = 0;
  if ( this->m_pPassEnts.m_Size > 0 )
  {
    while ( PassServerEntityFilter(pEntity, this->m_pPassEnts.m_Memory.m_pMemory[v6]) )
    {
      if ( ++v6 >= this->m_pPassEnts.m_Size )
        goto LABEL_10;
    }
    return 0;
  }
LABEL_10:
  m_pParent = pEntity->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  if ( this->m_pDoor == OwnerEntity || (*(pEntity->_vptr_IHandleEntity + 147))(pEntity) != 0 )
    return 0;
  m_pCollision = pEntity->m_pCollision;
  v10 = m_pCollision != 0 ? m_pCollision->m_CollisionGroup.m_Value : 4;
  ShouldCollide = CGameRules::ShouldCollide(g_pGameRules, this->m_collisionGroup, v10);
  if ( !ShouldCollide )
    return 0;
  if ( pEntity->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
  {
    Object = CBaseEntity::VPhysicsGetObject(pEntity);
    if ( (*(*Object + 1512LL))(Object) != 0 && (*(*Object + 208LL))(Object) < 32.0 )
      return 0;
  }
  return ShouldCollide;
}


// CPropDoorRotating::GetDataDescMap  (line 1882, @0x000000000234ac30, libserver.so)
// globals: CPropDoorRotating::m_DataMap
datamap_t *__fastcall CPropDoorRotating::GetDataDescMap(CPropDoorRotating *const this)
{
  return &CPropDoorRotating::m_DataMap;
}


// CPropDoorRotating::AddDatadescMetadataKeys  (line 1882, @0x0000000002355910, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropDoorRotating::GetEntityClass(void)
void __fastcall CPropDoorRotating::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropDoorRotating::GetEntityClass);
}


// CPropDoorRotating::GetBaseMap  (line 1882, @0x0000000002355930, libserver.so)
// globals: CBasePropDoor::m_DataMap
datamap_t *__cdecl CPropDoorRotating::GetBaseMap()
{
  return &CBasePropDoor::m_DataMap;
}


// DataMapInit<CPropDoorRotating>  (line 1882, @0x0000000002355940, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropDoorRotating"
// globals: `guard variable for'DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder, CBasePropDoor::m_DataMap, CPropDoorRotating::GetEntityClass(void), CPropDoorRotating::m_DataMap, DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropDoorRotating>(CPropDoorRotating *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder) != 0 )
  {
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_pszBase = "CPropDoorRotating";
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::nameHolder,
      &_dso_handle);
  }
  CPropDoorRotating::m_DataMap.dataNumFields = 16;
  CPropDoorRotating::m_DataMap.baseMap = &CBasePropDoor::m_DataMap;
  CPropDoorRotating::m_DataMap.dataDesc = &DataMapInit<CPropDoorRotating>(CPropDoorRotating *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropDoorRotating::m_DataMap, CPropDoorRotating::GetEntityClass);
  return &CPropDoorRotating::m_DataMap;
}


// CPropDoorRotating::~CPropDoorRotating  (line 1905, @0x0000000002350390, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CEntityBlocker>
// calls: CBasePropDoor::~CBasePropDoor, UTIL_Remove
// callers: CPropDoorRotating::~CPropDoorRotating, CPropDoorRotatingBreakable::~CPropDoorRotatingBreakable
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropDoorRotating::~CPropDoorRotating(CPropDoorRotating *const this)
{
  CConcreteEntityList *v2; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  this->_vptr_IHandleEntity = &off_4097850;
  v2 = CEntityHandle::gm_pEntityList;
  this->_vptr_IBreakableWithPropData = off_4098270;
  this->_vptr_IPlayerPickupVPhysics = &off_4098388;
  this->_vptr_IGameEventListener2 = off_40983F0;
  m_Index = this->m_hEntityBlocker.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = v2->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hEntityBlocker.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && v5->m_pInstance != 0 )
  {
    UTIL_Remove(v5->m_pInstance);
    CBasePropDoor::~CBasePropDoor(this);
  }
  else
  {
    CBasePropDoor::~CBasePropDoor(this);
  }
}


// CPropDoorRotating::~CPropDoorRotating  (line 1905, @0x0000000002350460, libserver.so)
// calls: CPropDoorRotating::~CPropDoorRotating, CBaseEntity::operator delete
void __fastcall CPropDoorRotating::~CPropDoorRotating(CPropDoorRotating *const this)
{
  CPropDoorRotating::~CPropDoorRotating(this);
  CBaseEntity::operator delete(this);
}


// UTIL_ComputeAABBForBounds  (line 1923, @0x0000000002355a10, libserver.so)  // inlines: operator[]
// callers: CPropDoorRotating::ComputeDoorExtent, CPropDoorRotating::CheckDoorClear
void __fastcall UTIL_ComputeAABBForBounds(
        const Vector *const mins1,
        const Vector *const maxs1,
        const Vector *const mins2,
        const Vector *const maxs2,
        Vector *destMins,
        Vector *destMaxs)
{
  destMins->x = fminf(mins1->x, mins2->x);
  destMins->y = fminf(mins1->y, mins2->y);
  destMins->z = fminf(mins1->z, mins2->z);
  destMaxs->x = fmaxf(maxs1->x, maxs2->x);
  destMaxs->y = fmaxf(maxs1->y, maxs2->y);
  destMaxs->z = fmaxf(maxs1->z, maxs2->z);
}


// DoorUnlockedFilter  (line 1936, @0x000000000234cff0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, String, ToCStr, _V_strcmp
// strings: "checkpoint_exit"
bool __fastcall DoorUnlockedFilter(CBaseEntity *pVisibleEntity, CBasePlayer *pViewingPlayer)
{
  const char *m_pAsString; // rsi

  m_pAsString = pVisibleEntity->m_pEntity->m_name.u.m_pAsString;
  if ( m_pAsString != 0 && strcmp(m_pAsString, "checkpoint_exit") == 0 )
    return 1;
  else
    return (*(pVisibleEntity->_vptr_IHandleEntity + 302))(pVisibleEntity) ^ 1;
}


// CPropDoorRotating::Spawn  (line 1951, @0x00000000023566f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, IsDoorClosed, Set, V_swap<QAngle>, operator=, operator==<DoorState_t>
// calls: CBaseEntity::GetLocalAngles, CPropDoorRotating::CalcOpenAngles, CBasePropDoor::Spawn, CBasePropDoor::IsHingeOnLeft, CPropDoorRotating::CalculateDoorVolume, VisibilityMonitor_AddEntity, CNavDoorBlocker::UpdateNavBlocking
// callers: CPropDoorRotatingBreakable::Spawn
// globals: DoorUnlockedFilter(CBaseEntity *,CBasePlayer *)
void __fastcall CPropDoorRotating::Spawn(CPropDoorRotating *const this, const CEntityKeyValues *pKeyValues)
{
  const QAngle *LocalAngles; // rax
  vec_t z; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  vec_t x; // xmm3_4
  vec_t y; // xmm0_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  this->m_angRotationClosed.x = LocalAngles->x;
  this->m_angRotationClosed.y = LocalAngles->y;
  z = LocalAngles->z;
  this->m_vecAxis.x = 0.0;
  this->m_vecAxis.y = 0.0;
  this->m_angRotationClosed.z = z;
  this->m_vecAxis.z = 1.0;
  CPropDoorRotating::CalcOpenAngles(this);
  CBasePropDoor::Spawn(this, pKeyValues);
  if ( CBasePropDoor::IsHingeOnLeft(this) )
  {
    x = this->m_angRotationOpenForward.x;
    this->m_angRotationOpenForward.x = this->m_angRotationOpenBack.x;
    y = this->m_angRotationOpenBack.y;
    v11 = this->m_angRotationOpenForward.y;
    this->m_angRotationOpenBack.x = x;
    v12 = this->m_angRotationOpenForward.z;
    this->m_angRotationOpenForward.y = y;
    v13 = this->m_angRotationOpenBack.z;
    this->m_angRotationOpenBack.y = v11;
    this->m_angRotationOpenBack.z = v12;
    this->m_angRotationOpenForward.z = v13;
  }
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecForwardBoundsMin,
    &this->m_vecForwardBoundsMax,
    *&this->m_angRotationClosed.x,
    this->m_angRotationClosed.z,
    *&this->m_angRotationOpenForward.x,
    this->m_angRotationOpenForward.z);
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecBackBoundsMin,
    &this->m_vecBackBoundsMax,
    *&this->m_angRotationClosed.x,
    this->m_angRotationClosed.z,
    *&this->m_angRotationOpenBack.x,
    this->m_angRotationOpenBack.z);
  VisibilityMonitor_AddEntity(this, 1200.0, 0, DoorUnlockedFilter);
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v8 = 0x7FFF;
    else
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_NavBlocker.m_hBlocker.m_Index) = v8 | this->m_NavBlocker.m_hBlocker.m_Index & 0x8000;
    this->m_NavBlocker.m_hBlocker.m_Index = (v7 << 15) | this->m_NavBlocker.m_hBlocker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_NavBlocker.m_hBlocker.m_Index = -1;
  }
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED);
}


// CPropDoorRotating::CalcOpenAngles  (line 1998, @0x0000000002355a70, libserver.so)
// callers: CPropDoorRotating::Spawn, CPropDoorRotating::InputSetRotationDistance
void __fastcall CPropDoorRotating::CalcOpenAngles(CPropDoorRotating *const this)
{
  float m_flDistance; // xmm1_4
  float x; // xmm6_4
  float z; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float y; // xmm3_4
  float v8; // xmm0_4
  vec_t v9; // xmm1_4
  vec_t v10; // xmm4_4
  float v11; // xmm1_4

  m_flDistance = this->m_flDistance;
  x = this->m_vecAxis.x;
  z = this->m_vecAxis.z;
  v4 = 90.0;
  if ( m_flDistance != 0.0 )
    v4 = fabs(m_flDistance);
  v5 = this->m_vecAxis.y * v4;
  this->m_flDistance = v4;
  v6 = z * v4;
  y = this->m_angRotationClosed.y;
  v8 = v4 * x;
  v9 = this->m_angRotationClosed.x - v5;
  v10 = v5 + this->m_angRotationClosed.x;
  this->m_angRotationOpenForward.x = v9;
  this->m_angRotationOpenBack.x = v10;
  this->m_angRotationOpenForward.y = y - v6;
  v11 = this->m_angRotationClosed.z;
  this->m_angRotationOpenBack.y = v6 + y;
  this->m_angRotationOpenForward.z = v11 - v8;
  this->m_angRotationOpenBack.z = v8 + v11;
}


// CBasePropDoor::IsHingeOnLeft  (line 2028, @0x0000000002355b40, libserver.so)  // inlines: DotProduct, LengthSqr, WorldSpaceAABB, operator-=, operator=
// calls: CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetAbsOrigin
// callers: CBasePropDoor::Spawn, CPropDoorRotating::Spawn
bool __fastcall CBasePropDoor::IsHingeOnLeft(CBasePropDoor *const this)
{
  const Vector *AbsOrigin; // rax
  const Vector *v3; // rax
  __int128 x_low; // xmm1
  vec_t v5; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  __m128 v7; // xmm2
  __m128 v8; // xmm4
  __m128 v9; // xmm2
  float v11; // [rsp+8h] [rbp-48h]
  float v12; // [rsp+Ch] [rbp-44h]
  Vector vecMins; // [rsp+10h] [rbp-40h] BYREF
  Vector vecMaxs; // [rsp+20h] [rbp-30h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-20h] BYREF

  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &vecMins,
    &vecMaxs);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  vecMins.x = vecMins.x - AbsOrigin->x;
  vecMins.y = vecMins.y - AbsOrigin->y;
  vecMins.z = vecMins.z - AbsOrigin->z;
  v3 = CBaseEntity::GetAbsOrigin(this);
  x_low = LODWORD(vecMaxs.x);
  *&x_low = vecMaxs.x - v3->x;
  v5 = vecMaxs.y - v3->y;
  vecMaxs.z = 0.0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  vecMins.z = 0.0;
  LODWORD(vecMaxs.x) = x_low;
  vecMaxs.y = v5;
  v7 = x_low;
  v8.m128_f32[0] = ((vecMins.x * vecMins.x) + (vecMins.y * vecMins.y)) + 0.0;
  v7.m128_f32[0] = ((*&x_low * *&x_low) + (v5 * v5)) + 0.0;
  v9 = _mm_cmpge_ss(v7, v8);
  LODWORD(v11) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, LODWORD(vecMins.y)).m128_f32[0]) | LODWORD(v5) & v9.m128_i32[0];
  LODWORD(v12) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v9, LODWORD(vecMins.x)).m128_f32[0]) | x_low & v9.m128_i32[0];
  vptr_IHandleEntity[61](this, 0, &vecRight, 0);
  return (((v12 * vecRight.x) + (v11 * vecRight.y)) + (vecRight.z * 0.0)) > 0.0;
}


// CPropDoorRotating::GetOpenState  (line 2067, @0x0000000002356170, libserver.so)  // inlines: operator==
doorCheck_e __fastcall CPropDoorRotating::GetOpenState(CPropDoorRotating *const this)
{
  return this->m_angRotationOpenForward.x != this->m_angGoal.x
      || this->m_angRotationOpenForward.y != this->m_angGoal.y
      || this->m_angRotationOpenForward.z != this->m_angGoal.z;
}


// CPropDoorRotating::OnDoorOpened  (line 2074, @0x00000000023510e0, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, OnDoorOpened, operator CEntityInstance*, operator bool, operator->
// calls: CNavDoorBlocker::UpdateNavBlocking, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropDoorRotating::OnDoorOpened(CPropDoorRotating *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // edx
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  CEntityInstance *v11; // rcx
  const Vector *v12; // r12
  CConcreteEntityList *v13; // rdx
  CEntityIdentity *v14; // rdi
  __int64 v15; // rax
  CEntityIdentity *v16; // rdi
  const Vector *v17; // r13
  const Vector *AbsOrigin; // rax

  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, 0);
  m_Index = this->m_hEntityBlocker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hEntityBlocker.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        (*(v4->m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 128))(&v4->m_pInstance[17].m_iszPrivateVScripts);
        if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
        {
          v5 = this->m_hEntityBlocker.m_Index;
          m_pInstance = 0;
          if ( v5 + 2 > 1 )
          {
            v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
            if ( v7 != 0 )
            {
              v8 = &v7[this->m_hEntityBlocker.m_Index & 0x1FF];
              if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
                m_pInstance = v8->m_pInstance;
            }
          }
          v9 = (*(m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 16))(&m_pInstance[17].m_iszPrivateVScripts);
          v10 = this->m_hEntityBlocker.m_Index;
          v11 = 0;
          v12 = v9;
          v13 = CEntityHandle::gm_pEntityList;
          if ( (v10 + 2) > 1 )
          {
            v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
            if ( v14 != 0 )
            {
              v15 = this->m_hEntityBlocker.m_Index & 0x1FF;
              v13 = (8 * v15);
              v16 = &v14[v15];
              if ( v16 != 0 && v10 == v16->m_EHandle.m_Index )
                v11 = v16->m_pInstance;
            }
          }
          v17 = (*(v11[17].m_iszPrivateVScripts.u.m_Id + 8))(&v11[17].m_iszPrivateVScripts, v10, v13);
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Box(AbsOrigin, v17, v12, 0, 255, 0, 1.0, 1);
        }
      }
    }
  }
}


// CPropDoorRotating::OnDoorClosed  (line 2092, @0x0000000002350c90, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->
// calls: CBasePropDoor::OnDoorClosed, UTIL_Remove, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropDoorRotating::OnDoorClosed(CPropDoorRotating *const this)
{
  uint32 m_Index; // eax
  unsigned __int16 v3; // cx
  CEntityIdentity *v4; // rdx
  __int64 v5; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rdx
  __int64 v8; // rax
  uint32 v9; // edx
  const Vector *v10; // r12
  CEntityIdentity *v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  CEntityIdentity *v14; // rax
  CEntityInstance *m_pInstance; // rcx
  const Vector *v16; // r13
  const Vector *AbsOrigin; // rax
  CEntityIdentity *v18; // rcx

  CBasePropDoor::OnDoorClosed(this);
  m_Index = this->m_hEntityBlocker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = this->m_hEntityBlocker.m_Index;
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v3 >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = v3 & 0x1FF;
      v6 = &v4[v5];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
        {
          v8 = (*(v6->m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 16))(&v6->m_pInstance[17].m_iszPrivateVScripts);
          v9 = this->m_hEntityBlocker.m_Index;
          v10 = v8;
          if ( v9 + 2 > 1
            && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9)
                                                                     & 0x3F]) != 0 )
          {
            v12 = this->m_hEntityBlocker.m_Index & 0x1FF;
            v13 = &v11[v12] == 0;
            v14 = &v11[v12];
            m_pInstance = 0;
            if ( !v13 && v9 == v14->m_EHandle.m_Index )
              m_pInstance = v14->m_pInstance;
          }
          else
          {
            m_pInstance = 0;
          }
          v16 = (*(m_pInstance[17].m_iszPrivateVScripts.u.m_Id + 8))(&m_pInstance[17].m_iszPrivateVScripts);
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Box(AbsOrigin, v16, v10, 0, 255, 0, 1.0, 1);
          m_Index = this->m_hEntityBlocker.m_Index;
          if ( m_Index + 2 <= 1 )
            goto LABEL_9;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
          if ( v18 == 0 )
            goto LABEL_9;
          v7 = &v18[this->m_hEntityBlocker.m_Index & 0x1FF];
          if ( v7 == 0 )
            goto LABEL_9;
        }
        else
        {
          v7 = &v4[v5];
        }
        if ( m_Index == v7->m_EHandle.m_Index )
        {
          UTIL_Remove(v7->m_pInstance);
          return;
        }
LABEL_9:
        UTIL_Remove(0);
      }
    }
  }
}


// CPropDoorRotating::DoorCanClose  (line 2113, @0x000000000236a9b0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetMaster, GetOpenState, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, operator CBasePropDoor*, operator CEntityInstance*, operator==, operator[]
// calls: __dynamic_cast, CPropDoorRotating::CheckDoorClear
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CPropDoorRotating, `typeinfo for'CBasePropDoor
bool __fastcall CPropDoorRotating::DoorCanClose(CPropDoorRotating *const this, bool bAutoClose)
{
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int m_Size; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  CHandle<CBasePropDoor> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CPropDoorRotating *v18; // rax
  doorCheck_e v19; // esi
  doorCheck_e v21; // esi

  if ( this->m_hMaster.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hMaster.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (this->m_hMaster.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  if ( v7 + 2 > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v6 & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        return (*(v9->m_pInstance->_vptr_IHandleEntity + 303))(v9->m_pInstance, bAutoClose);
    }
  }
  m_Size = this->m_hDoorList.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_23:
    v21 = doorCheck_e::DOOR_CHECK_FULL;
    if ( !bAutoClose )
      v21 = this->m_angRotationOpenForward.x != this->m_angGoal.x
         || this->m_angRotationOpenForward.y != this->m_angGoal.y
         || this->m_angRotationOpenForward.z != this->m_angGoal.z;
    return CPropDoorRotating::CheckDoorClear(this, v21);
  }
  else
  {
    v11 = 0;
    v12 = 4LL * (m_Size - 1) + 4;
    while ( 1 )
    {
      v13 = &this->m_hDoorList.m_Memory.m_pMemory[v11 / 4];
      m_Index = v13->m_Index;
      if ( v13->m_Index + 2 > 1 )
      {
        v15 = v13->m_Index;
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[v15 & 0x1FF];
          if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index && v17->m_pInstance != 0 )
          {
            v18 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CBasePropDoor, &`typeinfo for'CPropDoorRotating, 0);
            if ( v18 != 0 )
            {
              v19 = doorCheck_e::DOOR_CHECK_FULL;
              if ( !bAutoClose )
              {
                if ( v18->m_angRotationOpenForward.x == v18->m_angGoal.x
                  && v18->m_angRotationOpenForward.y == v18->m_angGoal.y )
                {
                  LOBYTE(v19) = 1;
                  if ( v18->m_angRotationOpenForward.z == v18->m_angGoal.z )
                    v19 = doorCheck_e::DOOR_CHECK_FORWARD;
                }
                else
                {
                  v19 = doorCheck_e::DOOR_CHECK_BACKWARD;
                }
              }
              if ( !CPropDoorRotating::CheckDoorClear(v18, v19) )
                return 0;
            }
          }
        }
      }
      v11 += 4LL;
      if ( v11 == v12 )
        goto LABEL_23;
    }
  }
}


// CPropDoorRotating::CalculateDoorVolume  (line 2158, @0x00000000023561c0, libserver.so)  // inlines: AngleQuaternion, CTransform, GetComponent<CBodyComponent>, GetParent, GetSkeletonInstance, Init, QuaternionAligned, VectorAligned, VectorMax, VectorMin, fpmax, fpmin, operator*, operator=, operator[]
// calls: AngleQuaternion, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsAngles
// callers: CPropDoorRotating::Spawn, CPropDoorRotating::OnRestore, CPropDoorRotating::ComputeDoorExtent, CPropDoorRotating::InputSetRotationDistance
void __fastcall CPropDoorRotating::CalculateDoorVolume(
        CPropDoorRotating *const this,
        Vector *destMins,
        Vector *destMaxs,
        double a4,
        vec_t a5,
        double a6,
        vec_t a7)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v13; // rax
  __int64 v14; // r12
  vec_t y; // xmm11_4
  vec_t z; // xmm12_4
  CGameSceneNode *m_pParent; // rdi
  float w; // xmm0_4
  float v19; // xmm1_4
  CBaseEntity *OwnerEntity; // rax
  const QAngle *AbsAngles; // rax
  float v22; // xmm10_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  void (__fastcall *v28)(__int64, Quaternion *, AABB_t *); // rcx
  vec_t v29; // xmm3_4
  void (__fastcall *v30)(__int64, Quaternion *, AABB_t *); // rax
  vec_t v31; // xmm1_4
  vec_t v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  vec_t v35; // xmm1_4
  vec_t v36; // xmm2_4
  float v37; // [rsp+0h] [rbp-D0h]
  float v38; // [rsp+4h] [rbp-CCh]
  vec_t v39; // [rsp+4h] [rbp-CCh]
  float v40; // [rsp+8h] [rbp-C8h]
  unsigned __int64 v41; // [rsp+8h] [rbp-C8h]
  vec_t qClose; // [rsp+Ch] [rbp-C4h]
  float qClosea; // [rsp+Ch] [rbp-C4h]
  float qClose_4; // [rsp+10h] [rbp-C0h]
  float qClose_4a; // [rsp+10h] [rbp-C0h]
  float qClose_8; // [rsp+14h] [rbp-BCh]
  float qClose_8a; // [rsp+14h] [rbp-BCh]
  float qClose_12; // [rsp+18h] [rbp-B8h]
  unsigned __int64 qClose_12a; // [rsp+18h] [rbp-B8h]
  float x; // [rsp+1Ch] [rbp-B4h]
  QAngle openAnglesa; // [rsp+20h] [rbp-B0h] BYREF
  QAngle closedAnglesa; // [rsp+30h] [rbp-A0h] BYREF
  AABB_t bboxClose; // [rsp+40h] [rbp-90h] BYREF
  AABB_t bboxOpen; // [rsp+60h] [rbp-70h] BYREF
  Quaternion outQuat; // [rsp+80h] [rbp-50h] BYREF
  float v56; // [rsp+90h] [rbp-40h]
  float v57; // [rsp+94h] [rbp-3Ch]
  unsigned __int64 v58; // [rsp+98h] [rbp-38h]

  closedAnglesa.z = a5;
  m_pEntity = this->m_pEntity;
  *&closedAnglesa.x = a4;
  *&openAnglesa.x = a6;
  openAnglesa.z = a7;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v13 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v13 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v13 = 0;
  }
  v14 = *((*(**(v13 + 8) + 72LL))(*(v13 + 8)) + 536);
  AngleQuaternion(&closedAnglesa, &outQuat);
  qClose = outQuat.w;
  qClose_12 = outQuat.x;
  qClose_4 = outQuat.y;
  qClose_8 = outQuat.z;
  AngleQuaternion(&openAnglesa, &outQuat);
  y = outQuat.y;
  x = outQuat.x;
  z = outQuat.z;
  m_pParent = this->m_pGameSceneNode->m_pParent;
  w = outQuat.w;
  v19 = qClose;
  if ( m_pParent == 0 )
    goto LABEL_10;
  v37 = qClose;
  v38 = outQuat.w;
  v40 = outQuat.y;
  qClosea = outQuat.z;
  OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  w = v38;
  z = qClosea;
  y = v40;
  v19 = v37;
  if ( OwnerEntity != 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(OwnerEntity);
    AngleQuaternion(AbsAngles, &outQuat);
    v22 = (((outQuat.x * v37) + (qClose_8 * outQuat.y)) - (qClose_4 * outQuat.z)) + (qClose_12 * outQuat.w);
    v23 = (((qClose_8 * -outQuat.x) + (v37 * outQuat.y)) + (qClose_12 * outQuat.z)) + (qClose_4 * outQuat.w);
    v24 = (((qClose_4 * outQuat.x) - (qClose_12 * outQuat.y)) + (v37 * outQuat.z)) + (qClose_8 * outQuat.w);
    v19 = (((qClose_12 * -outQuat.x) - (qClose_4 * outQuat.y)) - (qClose_8 * outQuat.z)) + (v37 * outQuat.w);
    v25 = (((v38 * outQuat.x) + (qClosea * outQuat.y)) - (v40 * outQuat.z)) + (x * outQuat.w);
    v26 = (((qClosea * -outQuat.x) + (v38 * outQuat.y)) + (x * outQuat.z)) + (v40 * outQuat.w);
    v27 = (((outQuat.x * v40) - (x * outQuat.y)) + (v38 * outQuat.z)) + (qClosea * outQuat.w);
    w = (((x * -outQuat.x) - (outQuat.y * v40)) - (outQuat.z * qClosea)) + (outQuat.w * v38);
  }
  else
  {
LABEL_10:
    v27 = z;
    v26 = y;
    v25 = x;
    v24 = qClose_8;
    v23 = qClose_4;
    v22 = qClose_12;
  }
  qClose_4a = v25;
  qClose_8a = v26;
  qClose_12a = __PAIR64__(LODWORD(w), LODWORD(v27));
  if ( v14 != 0 )
  {
    v28 = *(*v14 + 368LL);
    v56 = v22;
    v57 = v23;
    v58 = __PAIR64__(LODWORD(v19), LODWORD(v24));
    outQuat.w = 0.0;
    v29 = vec3_origin.y;
    outQuat.z = vec3_origin.z;
    outQuat.y = v29;
    outQuat.x = vec3_origin.x;
    v39 = vec3_origin.x;
    v41 = __PAIR64__(LODWORD(outQuat.z), LODWORD(v29));
    v28(v14, &outQuat, &bboxClose);
    v30 = *(*v14 + 368LL);
    outQuat.x = v39;
    *&outQuat.y = v41;
    outQuat.w = 0.0;
    v56 = qClose_4a;
    v57 = qClose_8a;
    v58 = qClose_12a;
    v30(v14, &outQuat, &bboxOpen);
    v31 = fminf(bboxClose.m_vMinBounds.y, bboxOpen.m_vMinBounds.y);
    v32 = fminf(bboxClose.m_vMinBounds.x, bboxOpen.m_vMinBounds.x);
    destMins->z = fminf(bboxClose.m_vMinBounds.z, bboxOpen.m_vMinBounds.z);
    v33 = bboxClose.m_vMaxBounds.z;
    destMins->y = v31;
    v34 = bboxClose.m_vMaxBounds.y;
    destMins->x = v32;
    v35 = fmaxf(v34, bboxOpen.m_vMaxBounds.y);
    v36 = fmaxf(bboxClose.m_vMaxBounds.x, bboxOpen.m_vMaxBounds.x);
    destMaxs->z = fmaxf(v33, bboxOpen.m_vMaxBounds.z);
    destMaxs->y = v35;
    destMaxs->x = v36;
  }
}


// CPropDoorRotating::OnRestore  (line 2186, @0x0000000002356900, libserver.so)
// calls: CBaseModelEntity::OnRestore, CBaseEntity::GetLocalAngles, CPropDoorRotating::CalculateDoorVolume
void __fastcall CPropDoorRotating::OnRestore(CPropDoorRotating *const this)
{
  const QAngle *LocalAngles; // rax
  const QAngle *v3; // rax

  CBaseModelEntity::OnRestore(this);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecForwardBoundsMin,
    &this->m_vecForwardBoundsMax,
    *&LocalAngles->x,
    LocalAngles->z,
    *&this->m_angRotationOpenForward.x,
    this->m_angRotationOpenForward.z);
  v3 = CBaseEntity::GetLocalAngles(this);
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecBackBoundsMin,
    &this->m_vecBackBoundsMax,
    *&v3->x,
    v3->z,
    *&this->m_angRotationOpenBack.x,
    this->m_angRotationOpenBack.z);
}


// CPropDoorRotating::ComputeDoorExtent  (line 2198, @0x0000000002356990, libserver.so)  // inlines: Encompass, Extent, Init, operator+=, operator[]
// calls: CBaseEntity::GetAbsOrigin, CPropDoorRotating::CalculateDoorVolume, UTIL_ComputeAABBForBounds
void __fastcall CPropDoorRotating::ComputeDoorExtent(
        CPropDoorRotating *const this,
        Extent *extent,
        unsigned int extentType)
{
  char v5; // r13
  const Vector *AbsOrigin; // rax
  const Vector *v7; // rax
  Vector *p_hi; // r14
  __int64 i; // rax
  float v10; // xmm0_4
  float v11; // xmm0_4
  Extent openExtent; // [rsp+0h] [rbp-40h] BYREF

  if ( extent != 0 )
  {
    v5 = extentType;
    if ( (extentType & 2) != 0 )
    {
      p_hi = &extent->hi;
      CPropDoorRotating::CalculateDoorVolume(
        this,
        &extent->lo,
        &extent->hi,
        *&this->m_angRotationClosed.x,
        this->m_angRotationClosed.z,
        *&this->m_angRotationClosed.x,
        this->m_angRotationClosed.z);
      if ( (v5 & 1) != 0 )
      {
        openExtent.lo.x = 3.4028235e38;
        openExtent.lo.y = 3.4028235e38;
        openExtent.lo.z = 3.4028235e38;
        openExtent.hi.x = -3.4028235e38;
        openExtent.hi.y = -3.4028235e38;
        openExtent.hi.z = -3.4028235e38;
        UTIL_ComputeAABBForBounds(
          &this->m_vecForwardBoundsMin,
          &this->m_vecForwardBoundsMax,
          &this->m_vecBackBoundsMin,
          &this->m_vecBackBoundsMax,
          &openExtent.lo,
          &openExtent.hi);
        for ( i = 0; i != 12; i += 4 )
        {
          v10 = *(&openExtent.lo.x + i);
          if ( *(&extent->lo.x + i) > v10 )
            *(&extent->lo.x + i) = v10;
          if ( v10 > *(&p_hi->x + i) )
            *(&p_hi->x + i) = v10;
        }
        LOBYTE(i) = 0;
        do
        {
          v11 = *(&openExtent.hi.x + i);
          if ( *(&extent->lo.x + i) > v11 )
            *(&extent->lo.x + i) = v11;
          if ( v11 > *(&p_hi->x + i) )
            *(&p_hi->x + i) = v11;
          i += 4;
        }
        while ( i != 12 );
      }
    }
    else if ( (extentType & 1) != 0 )
    {
      UTIL_ComputeAABBForBounds(
        &this->m_vecForwardBoundsMin,
        &this->m_vecForwardBoundsMax,
        &this->m_vecBackBoundsMin,
        &this->m_vecBackBoundsMax,
        &extent->lo,
        &extent->hi);
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    extent->lo.x = extent->lo.x + AbsOrigin->x;
    extent->lo.y = extent->lo.y + AbsOrigin->y;
    extent->lo.z = extent->lo.z + AbsOrigin->z;
    v7 = CBaseEntity::GetAbsOrigin(this);
    extent->hi.x = extent->hi.x + v7->x;
    extent->hi.y = extent->hi.y + v7->y;
    extent->hi.z = extent->hi.z + v7->z;
  }
}


// CPropDoorRotating::CheckDoorClear  (line 2231, @0x000000000236a3d0, libserver.so)  // inlines: CGameQueryAttributes, CGameTrace, CTraceFilter, CTraceFilterDoor, CTraceFilterEntitiesOnly, CUtlMemory, CUtlVector, CUtlVectorBase, CollisionMaxs, CollisionMins, EnableInteractsWith, GetBool, GetInt, Init, LengthSqr, Purge, Ray_t, RemoveAll, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetObjectSetMask, TraceHull_Door, TraceRay, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator=, ~CTraceFilterDoor, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_ComputeAABBForBounds, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::TraceRay, NDebugOverlay::Box, CUtlMemory<const CBaseEntity*, int>::Purge, CUtlVectorBase<const CBaseEntity*, CUtlMemory<const CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CPropDoorRotating::DoorCanClose, CPropDoorRotating::CalculateOpenAngles, CPropDoorRotating::CreateDoorBlocker, CPropDoorRotating::BeginClosing
bool __fastcall CPropDoorRotating::CheckDoorClear(CPropDoorRotating *const this, doorCheck_e state)
{
  const Vector *AbsOrigin; // r12
  const Vector *v4; // rax
  float z; // xmm0_4
  bool v6; // r12
  const Vector *v8; // rax
  const Vector *v9; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v11; // rbx
  CCollisionProperty *v12; // rdi
  const Vector *v13; // r12
  const Vector *v14; // rax
  Vector moveMins; // [rsp+10h] [rbp-1A0h] BYREF
  Vector moveMaxs; // [rsp+20h] [rbp-190h] BYREF
  Ray_t ray; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilter pTraceFilter; // [rsp+80h] [rbp-130h] BYREF
  int v19; // [rsp+B0h] [rbp-100h]
  CUtlMemory<const CBaseEntity*,int> v20; // [rsp+B8h] [rbp-F8h] BYREF
  CPropDoorRotating *v21; // [rsp+C8h] [rbp-E8h]
  int v22; // [rsp+D0h] [rbp-E0h]
  trace_t tr; // [rsp+E0h] [rbp-D0h] BYREF

  if ( state != doorCheck_e::DOOR_CHECK_FORWARD )
  {
    if ( state == doorCheck_e::DOOR_CHECK_BACKWARD )
    {
      moveMins = this->m_vecBackBoundsMin;
      moveMaxs = this->m_vecBackBoundsMax;
    }
    else
    {
      UTIL_ComputeAABBForBounds(
        &this->m_vecForwardBoundsMin,
        &this->m_vecForwardBoundsMax,
        &this->m_vecBackBoundsMin,
        &this->m_vecBackBoundsMax,
        &moveMins,
        &moveMaxs);
    }
  }
  else
  {
    moveMins = this->m_vecForwardBoundsMin;
    moveMaxs = this->m_vecForwardBoundsMax;
  }
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = CBaseEntity::GetAbsOrigin(this);
  ray.m_Start.w = 0.0;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = AbsOrigin->x - v4->x;
  ray.m_Delta.y = AbsOrigin->y - v4->y;
  ray.m_Delta.z = AbsOrigin->z - v4->z;
  ray.m_Extents.x = (moveMaxs.x - moveMins.x) * 0.5;
  ray.m_Extents.y = (moveMaxs.y - moveMins.y) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Extents.z = (moveMaxs.z - moveMins.z) * 0.5;
  ray.m_StartOffset.z = (moveMins.z + moveMaxs.z) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  ray.m_StartOffset.y = (moveMaxs.y + moveMins.y) * 0.5;
  ray.m_StartOffset.x = (moveMaxs.x + moveMins.x) * 0.5;
  ray.m_Start.x = v4->x + ray.m_StartOffset.x;
  ray.m_Start.y = v4->y + ray.m_StartOffset.y;
  z = v4->z;
  pTraceFilter.m_attr.m_nHierarchyId = 0;
  pTraceFilter.m_attr.m_nInteractsExclude = 0;
  pTraceFilter.m_attr.m_nInteractsAs = 0;
  pTraceFilter.m_attr.m_nCollisionGroup = 0;
  pTraceFilter.m_attr.m_nEntityIdToIgnore = -1;
  *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) = *(&pTraceFilter.m_attr.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  pTraceFilter._vptr_CTraceFilter = off_4097810;
  ray.m_Start.z = z + ray.m_StartOffset.z;
  ray.m_StartOffset.x = -ray.m_StartOffset.x;
  ray.m_StartOffset.y = -ray.m_StartOffset.y;
  ray.m_StartOffset.z = -ray.m_StartOffset.z;
  pTraceFilter.m_attr.m_nObjectSetMask = 2;
  v19 = 0;
  v20.m_pMemory = 0;
  v20.m_nAllocationCount = 0;
  v20.m_nGrowSize = 0;
  v21 = this;
  v22 = 4;
  pTraceFilter.m_attr.m_nInteractsWith = 552961;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &pTraceFilter, &tr);
  v19 = 0;
  pTraceFilter._vptr_CTraceFilter = off_4097810;
  if ( (v20.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity const*,int>::Purge(&v20);
    if ( (v20.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity const*,int>::Purge(&v20);
  }
  if ( tr.startsolid )
  {
    if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
    {
      v9 = CBaseEntity::GetAbsOrigin(this);
      NDebugOverlay::Box(v9, &moveMins, &moveMaxs, 0xFFu, 0, 0, 10.0, 1);
      if ( tr.m_pEnt != 0 )
      {
        m_pCollision = tr.m_pEnt->m_pCollision;
        if ( m_pCollision != 0 )
          v11 = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
        else
          v11 = CBaseEntity::GetAbsOrigin(tr.m_pEnt);
        v12 = tr.m_pEnt->m_pCollision;
        if ( v12 != 0 )
          v13 = (*(v12->_vptr_ICollideable + 1))(v12);
        else
          v13 = CBaseEntity::GetAbsOrigin(tr.m_pEnt);
        v14 = CBaseEntity::GetAbsOrigin(tr.m_pEnt);
        NDebugOverlay::Box(v14, v13, v11, 0xDCu, 220, 0, 10.0, 1);
      }
    }
    return 0;
  }
  else
  {
    v6 = 1;
    if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
    {
      v8 = CBaseEntity::GetAbsOrigin(this);
      NDebugOverlay::Box(v8, &moveMins, &moveMaxs, 0, 255, 0, 10.0, 1);
    }
  }
  return v6;
}


// CPropDoorRotating::DoorTeleportToSpawnPosition  (line 2289, @0x000000000234f360, libserver.so)  // inlines: NetworkStateChanged, Set, SetDoorState, operator=, operator=<DoorState_t>
// calls: CBaseEntity::SetLocalAngles
void __fastcall CPropDoorRotating::DoorTeleportToSpawnPosition(CPropDoorRotating *const this)
{
  PropDoorRotatingSpawnPos_t m_eSpawnPosition; // eax
  DoorState_t m_Value; // edi
  bool v4; // zf
  QAngle angSpawn; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_spawnflags.m_Value & 1) != 0
    || (m_eSpawnPosition = this->m_eSpawnPosition) == PropDoorRotatingSpawnPos_t::DOOR_SPAWN_OPEN_FORWARD )
  {
    v4 = this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_OPEN;
    angSpawn = this->m_angRotationOpenForward;
    if ( v4 )
      goto LABEL_7;
LABEL_9:
    (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_OPEN;
    goto LABEL_7;
  }
  if ( m_eSpawnPosition == PropDoorRotatingSpawnPos_t::DOOR_SPAWN_OPEN_BACK )
  {
    v4 = this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_OPEN;
    angSpawn = this->m_angRotationOpenBack;
    if ( v4 )
      goto LABEL_7;
    goto LABEL_9;
  }
  if ( m_eSpawnPosition == PropDoorRotatingSpawnPos_t::DOOR_SPAWN_AJAR )
  {
    v4 = this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_AJAR;
    angSpawn = this->m_angRotationAjar;
    if ( !v4 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_AJAR;
    }
  }
  else
  {
    m_Value = this->m_eDoorState.m_Value;
    angSpawn = this->m_angRotationClosed;
    if ( m_Value != DoorState_t::DOOR_STATE_CLOSED )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_eDoorState.m_Value = DoorState_t::DOOR_STATE_CLOSED;
    }
  }
LABEL_7:
  CBaseEntity::SetLocalAngles(this, &angSpawn);
}


// CPropDoorRotating::MoveDone  (line 2331, @0x000000000234e9a0, libserver.so)  // inlines: MoveDone
// calls: CBaseEntity::SetLocalAngles, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime
void __fastcall CPropDoorRotating::MoveDone(CPropDoorRotating *const this)
{
  float v2; // xmm1_4
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v4; // rdi

  CBaseEntity::SetLocalAngles(this, &this->m_angGoal);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
  pfn = this->m_pfnMoveDone.__pfn;
  if ( pfn != 0 )
  {
    v4 = (this + this->m_pfnMoveDone.__delta);
    if ( (pfn & 1) != 0 )
      (*(v4->_vptr_IHandleEntity + pfn - 1))();
    else
      pfn(v4);
  }
}


// CPropDoorRotating::AngularMove  (line 2346, @0x000000000234bf90, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, operator==
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetLocalAngularVelocity
void __fastcall CPropDoorRotating::AngularMove(
        CPropDoorRotating *const this,
        const QAngle *const vecDestAngle,
        float a3,
        float flSpeed)
{
  const QAngle *LocalAngles; // rax
  const QAngle *v7; // rax
  float v8; // [rsp+Ch] [rbp-34h]
  float v9; // [rsp+10h] [rbp-30h]
  float v10; // [rsp+14h] [rbp-2Ch]
  float flTravelTimea; // [rsp+1Ch] [rbp-24h]
  QAngle vAngVelocity; // [rsp+20h] [rbp-20h] BYREF

  this->m_angGoal = *vecDestAngle;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  if ( LocalAngles->x == vecDestAngle->x && LocalAngles->y == vecDestAngle->y && LocalAngles->z == vecDestAngle->z )
  {
    (*(this->_vptr_IHandleEntity + 118))(this);
  }
  else
  {
    v7 = CBaseEntity::GetLocalAngles(this);
    v8 = vecDestAngle->x - v7->x;
    v9 = vecDestAngle->y - v7->y;
    v10 = vecDestAngle->z - v7->z;
    flTravelTimea = fsqrt(((v8 * v8) + (v9 * v9)) + (v10 * v10)) / a3;
    CBaseEntity::SetMoveDoneTime(this, flTravelTimea, v10);
    vAngVelocity.x = v8 * (1.0 / flTravelTimea);
    vAngVelocity.y = v9 * (1.0 / flTravelTimea);
    vAngVelocity.z = v10 * (1.0 / flTravelTimea);
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
  }
}


// CPropDoorRotating::CalculateOpenAngles  (line 2376, @0x000000000236ac60, libserver.so)  // inlines: Cross, CrossProduct, Get, GetActivator, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsDoorBlocked, IsPlayerOpening, IsValid, LookupEntity, NormalizeInPlace, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetLocalAngles, AngleNormalize, CPropDoorRotating::CheckDoorClear
// callers: CPropDoorRotating::BeginOpening
// globals: CEntityHandle::gm_pEntityList
doorCheck_e __fastcall CPropDoorRotating::CalculateOpenAngles(
        CPropDoorRotating *const this,
        CBaseEntity *pOpenAwayFrom,
        QAngle *pOpenAngles)
{
  PropDoorRotatingOpenDirection_e m_eOpenDirection; // eax
  vec_t x; // xmm2_4
  vec_t y; // xmm4_4
  vec_t z; // xmm3_4
  doorCheck_e v9; // r13d
  const Vector *AbsOrigin; // r14
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  const Vector *v15; // r14
  const Vector *v16; // rax
  vec_t v17; // xmm0_4
  vec_t v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  uint32 m_Index; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  uint32 v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  char v27; // al
  char v28; // al
  bool v29; // al
  bool v30; // al
  bool v32; // al
  vec_t v33; // [rsp+0h] [rbp-60h]
  vec_t v34; // [rsp+4h] [rbp-5Ch]
  float v35; // [rsp+4h] [rbp-5Ch]
  vec_t v36; // [rsp+4h] [rbp-5Ch]
  vec_t v37; // [rsp+4h] [rbp-5Ch]
  vec_t v38; // [rsp+8h] [rbp-58h]
  float v39; // [rsp+8h] [rbp-58h]
  vec_t v40; // [rsp+8h] [rbp-58h]
  vec_t v41; // [rsp+8h] [rbp-58h]
  Vector vecForwardDoor; // [rsp+Ch] [rbp-54h] BYREF
  int v43; // [rsp+18h] [rbp-48h]
  Vector vecToActivator; // [rsp+20h] [rbp-40h] BYREF

  m_eOpenDirection = this->m_eOpenDirection;
  x = this->m_angRotationOpenForward.x;
  y = this->m_angRotationOpenForward.y;
  z = this->m_angRotationOpenForward.z;
  if ( m_eOpenDirection == PropDoorRotatingOpenDirection_e::DOOR_ROTATING_OPEN_FORWARD )
  {
    v9 = doorCheck_e::DOOR_CHECK_FORWARD;
  }
  else if ( m_eOpenDirection == PropDoorRotatingOpenDirection_e::DOOR_ROTATING_OPEN_BACKWARD )
  {
    x = this->m_angRotationOpenBack.x;
    v9 = doorCheck_e::DOOR_CHECK_BACKWARD;
    y = this->m_angRotationOpenBack.y;
    z = this->m_angRotationOpenBack.z;
  }
  else
  {
    v9 = doorCheck_e::DOOR_CHECK_FORWARD;
    if ( pOpenAwayFrom != 0 )
    {
      v33 = this->m_angRotationOpenForward.y;
      v34 = this->m_angRotationOpenForward.z;
      v38 = this->m_angRotationOpenForward.x;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      *&vecToActivator.x = (*(this->_vptr_IHandleEntity + 62))(this);
      vecToActivator.z = v12;
      v13 = vecToActivator.y - AbsOrigin->y;
      v14 = vecToActivator.x - AbsOrigin->x;
      v43 = 0;
      vecForwardDoor.z = v13;
      vecForwardDoor.y = v14;
      VectorNormalize(&vecForwardDoor.y);
      v15 = CBaseEntity::GetAbsOrigin(this);
      v16 = CBaseEntity::GetAbsOrigin(pOpenAwayFrom);
      v17 = v16->y - v15->y;
      v18 = v16->x - v15->x;
      vecToActivator.z = 0.0;
      vecToActivator.y = v17;
      vecToActivator.x = v18;
      VectorNormalize(&vecToActivator);
      LOBYTE(v15) = ((vecToActivator.y * vecForwardDoor.y) - (vecForwardDoor.z * vecToActivator.x)) < 0.0;
      CBaseEntity::GetLocalAngles(this);
      v20 = AngleNormalize(v19);
      x = v38;
      z = v34;
      y = v33;
      if ( v20 < 0.0 == v15 )
      {
        x = this->m_angRotationOpenBack.x;
        LOBYTE(v9) = 1;
        y = this->m_angRotationOpenBack.y;
        z = this->m_angRotationOpenBack.z;
      }
    }
    m_Index = this->m_hBlocker.m_Index;
    if ( m_Index + 2 <= 1
      || (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBlocker.m_Index) >> 9) & 0x3F]) == 0
      || (v23 = &v22[this->m_hBlocker.m_Index & 0x1FF]) == 0
      || m_Index != v23->m_EHandle.m_Index
      || v23->m_pInstance == 0 )
    {
      v24 = this->m_hActivator.m_Index;
      if ( v24 + 2 > 1 )
      {
        v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
        if ( v25 != 0 )
        {
          v26 = &v25[this->m_hActivator.m_Index & 0x1FF];
          if ( v26 != 0 && v24 == v26->m_EHandle.m_Index && v26->m_pInstance != 0 )
          {
            v35 = y;
            v39 = z;
            vecForwardDoor.x = x;
            v27 = (*(v26->m_pInstance->_vptr_IHandleEntity + 140))(v26->m_pInstance);
            x = vecForwardDoor.x;
            z = v39;
            y = v35;
            if ( v27 != 0 && pOpenAwayFrom != 0 )
            {
              v28 = (*(pOpenAwayFrom->_vptr_IHandleEntity + 140))(pOpenAwayFrom);
              x = vecForwardDoor.x;
              z = v39;
              y = v35;
              if ( v28 != 0 )
              {
                v29 = CPropDoorRotating::CheckDoorClear(this, v9);
                x = vecForwardDoor.x;
                z = v39;
                y = v35;
                if ( !v29 )
                {
                  if ( v9 != doorCheck_e::DOOR_CHECK_FORWARD )
                  {
                    v9 = doorCheck_e::DOOR_CHECK_FORWARD;
                    v37 = this->m_angRotationOpenForward.x;
                    v41 = this->m_angRotationOpenForward.y;
                    vecForwardDoor.x = this->m_angRotationOpenForward.z;
                    v32 = CPropDoorRotating::CheckDoorClear(this, doorCheck_e::DOOR_CHECK_FORWARD);
                    z = vecForwardDoor.x;
                    y = v41;
                    x = v37;
                    if ( !v32 )
                    {
                      x = this->m_angRotationOpenBack.x;
                      LOBYTE(v9) = 1;
                      y = this->m_angRotationOpenBack.y;
                      z = this->m_angRotationOpenBack.z;
                    }
                  }
                  else
                  {
                    v36 = this->m_angRotationOpenBack.x;
                    v40 = this->m_angRotationOpenBack.y;
                    vecForwardDoor.x = this->m_angRotationOpenBack.z;
                    v30 = CPropDoorRotating::CheckDoorClear(this, doorCheck_e::DOOR_CHECK_BACKWARD);
                    z = vecForwardDoor.x;
                    y = v40;
                    x = v36;
                    if ( v30 )
                    {
                      v9 = doorCheck_e::DOOR_CHECK_BACKWARD;
                    }
                    else
                    {
                      x = this->m_angRotationOpenForward.x;
                      y = this->m_angRotationOpenForward.y;
                      z = this->m_angRotationOpenForward.z;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pOpenAngles->x = x;
  pOpenAngles->y = y;
  pOpenAngles->z = z;
  return v9;
}


// CPropDoorRotating::CreateDoorBlocker  (line 2482, @0x000000000236b070, libserver.so)  // inlines: Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetCollisionGroup, Vector, VectorAdd, VectorMultiply, operator CEntityInstance*, operator!=<CEntityBlocker>, operator*, operator+, operator-, operator->, operator=
// calls: CBaseEntity::GetAbsOrigin, CEntityBlocker::Create, NDebugOverlay::Cross3D, CSoundEnt::InsertSound, CCollisionProperty::SetCollisionGroup, CPropDoorRotating::CheckDoorClear, CEntityHandle::operator CEntityInstance*, NDebugOverlay::Box, UTIL_Remove
// callers: CPropDoorRotating::BeginOpening
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropDoorRotating::CreateDoorBlocker(
        CPropDoorRotating *const this,
        CBaseEntity *pOpenAwayFrom,
        doorCheck_e eDirCheck)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  const Vector *AbsOrigin; // rax
  CEntityBlocker *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  const Vector *v14; // rax
  vec_t v15; // xmm2_4
  vec_t v16; // xmm3_4
  float v17; // xmm0_4
  float y; // xmm1_4
  double v19; // xmm2_8
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CEntityInstance *v23; // rax
  const Vector *v24; // r13
  CEntityInstance *v25; // rax
  const Vector *v26; // r12
  const Vector *v27; // rax
  CEntityInstance *v28; // rax
  float volumeRadius; // [rsp+Ch] [rbp-74h]
  Vector mins; // [rsp+10h] [rbp-70h] BYREF
  Vector maxs; // [rsp+20h] [rbp-60h] BYREF
  Vector volumeCenter; // [rsp+30h] [rbp-50h] BYREF
  Vector v33; // [rsp+40h] [rbp-40h] BYREF
  Vector v34; // [rsp+50h] [rbp-30h] BYREF

  if ( eDirCheck != doorCheck_e::DOOR_CHECK_FORWARD )
  {
    mins = this->m_vecBackBoundsMin;
    maxs = this->m_vecBackBoundsMax;
  }
  else
  {
    mins = this->m_vecForwardBoundsMin;
    maxs = this->m_vecForwardBoundsMax;
  }
  m_Index = this->m_hEntityBlocker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hEntityBlocker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        UTIL_Remove(v8->m_pInstance);
    }
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v10 = CEntityBlocker::Create(AbsOrigin, &mins, &maxs, pOpenAwayFrom, 0);
  if ( v10 != 0 && (m_pEntity = v10->m_pEntity) != 0 )
  {
    v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v13 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hEntityBlocker.m_Index) = v13 | this->m_hEntityBlocker.m_Index & 0x8000;
    this->m_hEntityBlocker.m_Index = (v12 << 15) | this->m_hEntityBlocker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hEntityBlocker.m_Index = -1;
  }
  v14 = CBaseEntity::GetAbsOrigin(this);
  v15 = ((mins.x + maxs.x) * 0.5) + v14->x;
  v16 = ((mins.y + maxs.y) * 0.5) + v14->y;
  volumeCenter.z = ((mins.z + maxs.z) * 0.5) + v14->z;
  v17 = fabs(mins.y);
  volumeCenter.x = v15;
  volumeCenter.y = v16;
  y = fmaxf(fabs(mins.x), maxs.x);
  v19 = y;
  if ( v17 <= maxs.y )
  {
    if ( v19 > maxs.y || (y = maxs.y, v17 <= maxs.y) )
    {
LABEL_14:
      if ( g_debug_doors.m_pParent->m_Value.m_nValue == 0 )
        goto LABEL_15;
LABEL_24:
      v33.x = -y;
      v33.y = -y;
      v33.z = -y;
      v34.x = y;
      v34.y = y;
      v34.z = y;
      volumeRadius = y;
      NDebugOverlay::Cross3D(&volumeCenter, &v33, &v34, 0xFFu, 0, 0, 1.0, 1);
      y = volumeRadius;
      if ( (this->m_spawnflags.m_Value & 0x4000) != 0 )
        goto LABEL_16;
LABEL_25:
      CSoundEnt::InsertSound(4096, &volumeCenter, y, 0.5, pOpenAwayFrom, 0, 0);
      goto LABEL_16;
    }
  }
  else if ( v19 > v17 )
  {
    goto LABEL_14;
  }
  y = v17;
  if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
    goto LABEL_24;
LABEL_15:
  if ( (this->m_spawnflags.m_Value & 0x4000) == 0 )
    goto LABEL_25;
LABEL_16:
  v20 = this->m_hEntityBlocker.m_Index;
  if ( v20 + 2 > 1 )
  {
    v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
    if ( v21 != 0 )
    {
      v22 = &v21[this->m_hEntityBlocker.m_Index & 0x1FF];
      if ( v22 != 0 && v20 == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
      {
        CCollisionProperty::SetCollisionGroup(&v22->m_pInstance[17].m_iszPrivateVScripts, 17);
        if ( !CPropDoorRotating::CheckDoorClear(this, eDirCheck) )
        {
          v28 = CEntityHandle::operator CEntityInstance *(&this->m_hEntityBlocker);
          (*(v28[17].m_iszPrivateVScripts.u.m_Id + 128))(&v28[17].m_iszPrivateVScripts);
        }
        if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
        {
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_hEntityBlocker);
          v24 = (*(v23[17].m_iszPrivateVScripts.u.m_Id + 16))(&v23[17].m_iszPrivateVScripts);
          v25 = CEntityHandle::operator CEntityInstance *(&this->m_hEntityBlocker);
          v26 = (*(v25[17].m_iszPrivateVScripts.u.m_Id + 8))(&v25[17].m_iszPrivateVScripts);
          v27 = CBaseEntity::GetAbsOrigin(this);
          NDebugOverlay::Box(v27, v26, v24, 0xFFu, 0, 0, 1.0, 1);
        }
      }
    }
  }
}


// CPropDoorRotating::BeginOpening  (line 2545, @0x000000000236b500, libserver.so)
// calls: CPropDoorRotating::CalculateOpenAngles, CPropDoorRotating::CreateDoorBlocker
void __fastcall CPropDoorRotating::BeginOpening(CPropDoorRotating *const this, CBaseEntity *pOpenAwayFrom)
{
  doorCheck_e v4; // eax
  QAngle angOpen; // [rsp+0h] [rbp-30h] BYREF

  v4 = CPropDoorRotating::CalculateOpenAngles(this, pOpenAwayFrom, &angOpen);
  CPropDoorRotating::CreateDoorBlocker(this, pOpenAwayFrom, v4);
  (*(this->_vptr_IHandleEntity + 321))(this, &angOpen, this->m_flSpeed);
}


// CPropDoorRotating::BeginClosing  (line 2558, @0x000000000236b550, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetOpenState, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CEntityBlocker>, operator->, operator==
// calls: CPropDoorRotating::CheckDoorClear, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPropDoorRotating::BeginClosing(CPropDoorRotating *const this)
{
  CHandle<CEntityBlocker> *p_m_hEntityBlocker; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *v6; // rax
  const Vector *v7; // r13
  CEntityInstance *v8; // rax
  const Vector *v9; // r12
  const Vector *AbsOrigin; // rax
  CEntityInstance *v11; // rax

  p_m_hEntityBlocker = &this->m_hEntityBlocker;
  m_Index = this->m_hEntityBlocker.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntityBlocker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[this->m_hEntityBlocker.m_Index & 0x1FF];
  if ( v5 == 0 || m_Index != v5->m_EHandle.m_Index || v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( this->m_angRotationOpenForward.x == this->m_angGoal.x && this->m_angRotationOpenForward.y == this->m_angGoal.y )
  {
    if ( !CPropDoorRotating::CheckDoorClear(this, (this->m_angRotationOpenForward.z != this->m_angGoal.z)) )
      goto LABEL_10;
  }
  else if ( !CPropDoorRotating::CheckDoorClear(this, doorCheck_e::DOOR_CHECK_BACKWARD) )
  {
    goto LABEL_10;
  }
  v11 = CEntityHandle::operator CEntityInstance *(p_m_hEntityBlocker);
  (*(v11[17].m_iszPrivateVScripts.u.m_Id + 120))(&v11[17].m_iszPrivateVScripts);
LABEL_10:
  if ( g_debug_doors.m_pParent->m_Value.m_nValue != 0 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(p_m_hEntityBlocker);
    v7 = (*(v6[17].m_iszPrivateVScripts.u.m_Id + 16))(&v6[17].m_iszPrivateVScripts);
    v8 = CEntityHandle::operator CEntityInstance *(p_m_hEntityBlocker);
    v9 = (*(v8[17].m_iszPrivateVScripts.u.m_Id + 8))(&v8[17].m_iszPrivateVScripts);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, v9, v7, 0xFFu, 0, 0, 1.0, 1);
  }
LABEL_5:
  (*(this->_vptr_IHandleEntity + 321))(this, &this->m_angRotationClosed, this->m_flSpeed);
}


// CPropDoorRotating::DoorStop  (line 2606, @0x000000000234bef0, libserver.so)
// calls: CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime
void __fastcall CPropDoorRotating::DoorStop(CPropDoorRotating *const this)
{
  float v2; // xmm1_4

  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
}


// CPropDoorRotating::DoorResume  (line 2615, @0x000000000234ac40, libserver.so)
void __fastcall CPropDoorRotating::DoorResume(CPropDoorRotating *const this)
{
  (*(this->_vptr_IHandleEntity + 321))(this, &this->m_angGoal, this->m_flSpeed);
}


// CPropDoorRotating::GetOpenInterval  (line 2665, @0x000000000234bf20, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetLocalAngles
float __fastcall CPropDoorRotating::GetOpenInterval(CPropDoorRotating *const this)
{
  const QAngle *LocalAngles; // rax

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  return fsqrt(
           (((this->m_angRotationOpenForward.x - LocalAngles->x) * (this->m_angRotationOpenForward.x - LocalAngles->x))
          + ((this->m_angRotationOpenForward.y - LocalAngles->y) * (this->m_angRotationOpenForward.y - LocalAngles->y)))
         + ((this->m_angRotationOpenForward.z - LocalAngles->z) * (this->m_angRotationOpenForward.z - LocalAngles->z)))
       / this->m_flSpeed;
}


// CPropDoorRotating::DrawDebugTextOverlays  (line 2679, @0x000000000234ba00, libserver.so)  // inlines: IsDoorOpen, V_strncpy<long unsigned int>, operator==<DoorState_t>
// calls: CBaseAnimating::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, _V_strncpy, __stack_chk_fail
// callers: CPropDoorRotatingBreakable::DrawDebugTextOverlays
// strings: "Avelocity: %.2f %.2f %.2f", "RESCUE DOOR", "DOOR STATE: CLOSED", "CHECKPOINT DOOR", "DISABLED BY CHECKPOINT", "DOOR STATE: OPEN" (9 total)
int __fastcall CPropDoorRotating::DrawDebugTextOverlays(
        CPropDoorRotating *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  int v8; // r14d
  DoorState_t m_Value; // eax
  int v10; // esi
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    V_snprintf(
      tempstr,
      512,
      "Avelocity: %.2f %.2f %.2f",
      this->m_vecAngVelocity.x,
      this->m_vecAngVelocity.y,
      this->m_vecAngVelocity.z);
    v8 = v6 + 1;
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    if ( (*(this->_vptr_IHandleEntity + 302))(this) != 0 )
    {
      CBaseEntity::EntityText(this, v8, "LOCKED", 0.0, 255, 255, 255, 255);
      v8 = v6 + 2;
    }
    m_Value = this->m_eDoorState.m_Value;
    if ( m_Value == DoorState_t::DOOR_STATE_OPEN )
    {
      _V_strncpy(tempstr, "DOOR STATE: OPEN", 512);
    }
    else if ( m_Value != DoorState_t::DOOR_STATE_CLOSED )
    {
      switch ( m_Value )
      {
        case DoorState_t::DOOR_STATE_OPENING:
          _V_strncpy(tempstr, "DOOR STATE: OPENING", 512);
          break;
        case DoorState_t::DOOR_STATE_CLOSING:
          _V_strncpy(tempstr, "DOOR STATE: CLOSING", 512);
          break;
        case DoorState_t::DOOR_STATE_AJAR:
          _V_strncpy(tempstr, "DOOR STATE: AJAR", 512);
          break;
        default:
          break;
      }
    }
    else
    {
      _V_strncpy(tempstr, "DOOR STATE: CLOSED", 512);
    }
    v6 = v8 + 1;
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
    if ( (*(this->_vptr_IHandleEntity + 297))(this) != 0 )
    {
      CBaseEntity::EntityText(this, v6, "CHECKPOINT DOOR", 0.0, 255, 255, 255, 255);
      v6 = v8 + 2;
      if ( this->m_disabledByCheckpoint )
      {
        CBaseEntity::EntityText(this, v6, "DISABLED BY CHECKPOINT", 0.0, 255, 255, 255, 255);
        v6 = v8 + 3;
      }
    }
    if ( this->m_isRescueDoor.m_Value )
    {
      v10 = v6++;
      CBaseEntity::EntityText(this, v10, "RESCUE DOOR", 0.0, 255, 255, 255, 255);
    }
  }
  return v6;
}


// CPropDoorRotating::InputSetSpeed  (line 2743, @0x000000000234ac60, libserver.so)  // inlines: Float, operator float
void __fastcall CPropDoorRotating::InputSetSpeed(CPropDoorRotating *const this, inputdata_t *const rInputdata)
{
  float m_float64; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax

  if ( rInputdata->value.m_type == 34 )
    m_float64 = rInputdata->value.m_float64;
  else
    m_float64 = rInputdata->value.m_float;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_flSpeed = m_float64;
  vptr_IHandleEntity[314]();
}


// CPropDoorRotating::InputSetRotationDistance  (line 2754, @0x0000000002356b60, libserver.so)  // inlines: Float, operator float
// calls: CPropDoorRotating::CalcOpenAngles, CBaseEntity::GetLocalAngles, CPropDoorRotating::CalculateDoorVolume
void __fastcall CPropDoorRotating::InputSetRotationDistance(
        CPropDoorRotating *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  const QAngle *LocalAngles; // rax
  const QAngle *v5; // rax

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flDistance = m_float64;
  CPropDoorRotating::CalcOpenAngles(this);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecForwardBoundsMin,
    &this->m_vecForwardBoundsMax,
    *&LocalAngles->x,
    LocalAngles->z,
    *&this->m_angRotationOpenForward.x,
    this->m_angRotationOpenForward.z);
  v5 = CBaseEntity::GetLocalAngles(this);
  CPropDoorRotating::CalculateDoorVolume(
    this,
    &this->m_vecBackBoundsMin,
    &this->m_vecBackBoundsMax,
    *&v5->x,
    v5->z,
    *&this->m_angRotationOpenBack.x,
    this->m_angRotationOpenBack.z);
}


// CPropDoorRotatingBreakable::GetDataDescMap  (line 2769, @0x000000000234aca0, libserver.so)
// globals: CPropDoorRotatingBreakable::m_DataMap
datamap_t *__fastcall CPropDoorRotatingBreakable::GetDataDescMap(CPropDoorRotatingBreakable *const this)
{
  return &CPropDoorRotatingBreakable::m_DataMap;
}


// CPropDoorRotatingBreakable::AddDatadescMetadataKeys  (line 2769, @0x0000000002356c10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPropDoorRotatingBreakable::GetEntityClass(void)
void __fastcall CPropDoorRotatingBreakable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPropDoorRotatingBreakable::GetEntityClass);
}


// CPropDoorRotatingBreakable::GetBaseMap  (line 2769, @0x0000000002356c30, libserver.so)
// globals: CPropDoorRotating::m_DataMap
datamap_t *__cdecl CPropDoorRotatingBreakable::GetBaseMap()
{
  return &CPropDoorRotating::m_DataMap;
}


// DataMapInit<CPropDoorRotatingBreakable>  (line 2769, @0x0000000002356c40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPropDoorRotatingBreakable"
// globals: `guard variable for'DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder, CPropDoorRotating::m_DataMap, CPropDoorRotatingBreakable::GetEntityClass(void), CPropDoorRotatingBreakable::m_DataMap, DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder) != 0 )
  {
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_pszBase = "CPropDoorRotatingBreakable";
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder.m_nLenBase = 26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::nameHolder,
      &_dso_handle);
  }
  CPropDoorRotatingBreakable::m_DataMap.dataNumFields = 6;
  CPropDoorRotatingBreakable::m_DataMap.baseMap = &CPropDoorRotating::m_DataMap;
  CPropDoorRotatingBreakable::m_DataMap.dataDesc = &DataMapInit<CPropDoorRotatingBreakable>(CPropDoorRotatingBreakable *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPropDoorRotatingBreakable::m_DataMap, CPropDoorRotatingBreakable::GetEntityClass);
  return &CPropDoorRotatingBreakable::m_DataMap;
}


// CPropDoorRotatingBreakable::InputSetUnbreakable  (line 2781, @0x000000000234acb0, libserver.so)
void __fastcall CPropDoorRotatingBreakable::InputSetUnbreakable(
        CPropDoorRotatingBreakable *const this,
        inputdata_t *const inputdata)
{
  this->m_bBreakable = 0;
}


// CPropDoorRotatingBreakable::InputSetBreakable  (line 2788, @0x000000000234acc0, libserver.so)
void __fastcall CPropDoorRotatingBreakable::InputSetBreakable(
        CPropDoorRotatingBreakable *const this,
        inputdata_t *const inputdata)
{
  this->m_bBreakable = 1;
}


// CPropDoorRotatingBreakable::IsAbleToCloseAreaPortals  (line 2795, @0x000000000234acd0, libserver.so)
bool __fastcall CPropDoorRotatingBreakable::IsAbleToCloseAreaPortals(const CPropDoorRotatingBreakable *const this)
{
  return this->m_isAbleToCloseAreaPortals;
}


// CPropDoorRotatingBreakable::PrecacheBreakables  (line 2802, @0x0000000002365220, libserver.so)  // inlines: AssignTo, Base, CFmtStrN, CResourceNameGetter, CWeakHandle, Element, FindKeyHash, FromUntypedHandle, GetValue, GetValue<CUtlStringToken>, Init, InitQuietTruncation, MakeStringToken, ResourceGetName, ResourceGetName<512ul>, String, V_strncpy<int>, operator->, operator[], ~CStudioHdr
// calls: _V_strncpy, CWeakHandle<InfoForResourceTypeCModel>::InitUntyped, CStudioHdr::CStudioHdr, KeyValues::operator new, KeyValues::KeyValues, CStudioHdr::KeyValueText, KeyValues::LoadFromBuffer, KeyValues::FindKey, DevMsg(char const*,...), KeyValues::deleteThis, CStudioHdr::Term, CModel::GetMaterialGroupIndex (23 total)
// strings: "door_options", "Breakable door %s has no KeyValues\n", "skin%d", "models/%s.vmdl", "damage%d", "Breakable door %s has no door_options\n" (8 total)
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CPropDoorRotatingBreakable::PrecacheBreakables(
        ResourceHandle_t hResource,
        const CEntityPrecacheContext *pContext)
{
  ResourceNameHandle_t m_Name; // rax
  const char *m_Id; // rsi
  const char *v6; // rax
  KeyValues *Key; // rbx
  const CEntityKeyValues *m_pKeyValues; // rcx
  int m_nCount; // edi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v11; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v13; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  uint32 m_int; // r13d
  CUtlStringToken v17; // esi
  const CModel *m_pData; // rdi
  int MaterialGroupIndex; // eax
  const char *v20; // rax
  KeyValues *v21; // r15
  int i; // edx
  int v23; // r14d
  const char *v24; // rax
  const char *String; // rax
  const char *v26; // rax
  const char *m_uint64; // r14
  KeyValues *modelKeyValues; // [rsp+18h] [rbp-2D8h]
  HModel hModel; // [rsp+20h] [rbp-2D0h] BYREF
  HModel v30; // [rsp+30h] [rbp-2C0h] BYREF
  CStudioHdr hdr; // [rsp+40h] [rbp-2B0h] BYREF
  CFmtStrN<80,false> str; // [rsp+50h] [rbp-2A0h] BYREF
  CResourceNameGetter modelResourceName; // [rsp+B0h] [rbp-240h] BYREF
  unsigned __int64 v34; // [rsp+2B8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  if ( hResource != 0 && (m_Name = hResource->m_Name) != 0 )
  {
    m_Id = "";
    if ( m_Name->m_ResourceNameSymbol.u.m_Id != 0 )
      m_Id = m_Name->m_ResourceNameSymbol.u.m_Id;
    _V_strncpy(&modelResourceName, m_Id, 512);
  }
  else
  {
    _V_strncpy(&modelResourceName, "", 512);
  }
  hModel.m_pBinding = 0;
  CWeakHandle<InfoForResourceTypeCModel>::InitUntyped(&hModel, hResource);
  v30.m_pBinding = hModel.m_pBinding;
  CStudioHdr::CStudioHdr(&hdr, &v30, modelinfo);
  if ( hdr.m_pModel == 0 )
  {
    CStudioHdr::Term(&hdr);
    return;
  }
  modelKeyValues = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(modelKeyValues, "");
  v6 = CStudioHdr::KeyValueText(&hdr);
  if ( !KeyValues::LoadFromBuffer(modelKeyValues, modelResourceName.m_Buffer, v6, 0, 0, 0, 0) )
  {
    DevMsg("Breakable door %s has no KeyValues\n", modelResourceName.m_Buffer);
    goto LABEL_25;
  }
  Key = KeyValues::FindKey(modelKeyValues, "door_options", 0);
  if ( Key == 0 )
  {
    DevMsg("Breakable door %s has no door_options\n", modelResourceName.m_Buffer);
    goto LABEL_25;
  }
  m_pKeyValues = pContext->m_pKeyValues;
  str.m_bQuietTruncation = 0;
  str._vptr_CFmtStrN = &off_4099000;
  str.m_szBuf[0] = 0;
  str.m_nLength = 0;
  m_nCount = m_pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_26:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_20;
    goto LABEL_27;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v11 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v11) == 2020856412 )
      goto LABEL_17;
LABEL_14:
    if ( m_nCount <= ++v11 )
      goto LABEL_26;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v11] != 2020856412 )
    goto LABEL_14;
LABEL_17:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v13 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v13 = 0;
  p_m_value = &v13[v11].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    goto LABEL_27;
LABEL_20:
  if ( m_type == 30 )
  {
    m_uint64 = p_m_value->m_uint64;
    m_int = 0;
    if ( p_m_value->m_uint64 != 0 && *m_uint64 != 0 )
    {
      m_int = MurmurHash2LowerCase(p_m_value->m_pszString, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(m_int, m_uint64, 0, 1);
    }
LABEL_23:
    v17.m_nHashCode = m_int;
  }
  else
  {
    if ( m_type == 38 )
    {
      m_int = p_m_value->m_int;
      goto LABEL_23;
    }
    v26 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to CUtlStringToken right now\n", v26);
LABEL_27:
    v17.m_nHashCode = 1055040020;
  }
  if ( hModel.m_pBinding != 0 )
    m_pData = hModel.m_pBinding->m_pData;
  else
    m_pData = 0;
  MaterialGroupIndex = CModel::GetMaterialGroupIndex(m_pData, v17);
  v20 = CFmtStrN<80,false>::sprintf(&str, "skin%d", MaterialGroupIndex);
  v21 = KeyValues::FindKey(Key, v20, 0);
  if ( v21 != 0 || (v21 = KeyValues::FindKey(Key, "defaults", 0)) != 0 )
  {
    for ( i = 1; ; i = v23 )
    {
      v23 = i + 1;
      v24 = CFmtStrN<80,false>::sprintf(&str, "damage%d", i);
      String = KeyValues::GetString(v21, v24, 0, 0, 0);
      if ( String == 0 )
        break;
      CFmtStrN<80,false>::sprintf(&str, "models/%s.vmdl", String);
      V_FixSlashes(str.m_szBuf, 47);
      CBaseEntity::PrecacheModel(str.m_szBuf, pContext->m_pManifest);
      (*(*pContext->m_pManifest + 8LL))(pContext->m_pManifest, str.m_szBuf, PropBreakablePrecacheAll);
    }
  }
LABEL_25:
  KeyValues::deleteThis(modelKeyValues);
  CStudioHdr::Term(&hdr);
}


// CPropDoorRotatingBreakable::Precache  (line 2862, @0x00000000023519b0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CBasePropDoor::Precache
// globals: CPropDoorRotatingBreakable::PrecacheBreakables(ResourceBindingBase_t const*,CEntityPrecacheContext const*), CEntityKeyValues::sm_EmptyVariant
void __fastcall CPropDoorRotatingBreakable::Precache(
        CPropDoorRotatingBreakable *const this,
        const CEntityPrecacheContext *pContext)
{
  __int64 v3; // r9
  const CEntityKeyValues *m_pKeyValues; // rcx
  __int64 m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rax

  CBasePropDoor::Precache(this, pContext);
  m_pKeyValues = pContext->m_pKeyValues;
  m_nCount = pContext->m_pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    return;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  v3 = m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v7) == -926958586 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v7 )
      goto LABEL_14;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v7] != -926958586 )
    goto LABEL_6;
LABEL_9:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  p_m_value = &v9[v7].m_value;
  if ( p_m_value->m_type == 30 )
  {
LABEL_12:
    if ( p_m_value->m_uint64 != 0 )
      (*(*pContext->m_pManifest + 8LL))(
        pContext->m_pManifest,
        p_m_value->m_uint64,
        CPropDoorRotatingBreakable::PrecacheBreakables,
        m_pKeyValues,
        m_nCount,
        v3);
  }
}


// CPropDoorRotatingBreakable::Spawn  (line 2875, @0x000000000236b710, libserver.so)  // inlines: AddToTail, CFmtStrN, CUtlSymbolLarge, CopyConstruct<CUtlSymbolLarge>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, InitQuietTruncation, IsDoorClosed, Set, operator=, operator==<DoorState_t>, operator[], ~CStudioHdr
// calls: CPropDoorRotating::Spawn, CUtlVectorBase<CUtlSymbolLarge, CUtlMemory<CUtlSymbolLarge, int> >::RemoveAll, KeyValues::operator new, KeyValues::KeyValues, CBaseEntity::GetModel, CStudioHdr::CStudioHdr, CStudioHdr::KeyValueText, CStudioHdr::pszName, KeyValues::LoadFromBuffer, KeyValues::FindKey, CBaseAnimating::GetS1Skin, CFmtStrN<80, false>::sprintf (21 total)
// strings: "door_options", "skin%d", "damage%d", "defaults"
void __fastcall CPropDoorRotatingBreakable::Spawn(
        CPropDoorRotatingBreakable *const this,
        const CEntityKeyValues *pKeyValues)
{
  KeyValues *v3; // r13
  IGameModelInfo *v4; // r12
  const char *v5; // r12
  const char *v6; // rax
  KeyValues *Key; // r12
  int S1Skin; // eax
  const char *v9; // rax
  KeyValues *v10; // r15
  int i; // edx
  HModel *v12; // rax
  int v13; // r13d
  const char *v14; // rax
  const char *String; // rax
  __int64 m_Size; // r12
  int v17; // eax
  CEntityIdentity *m_pEntity; // rax
  int v19; // edx
  __int16 v20; // cx
  KeyValues *modelKeyValues; // [rsp+20h] [rbp-D0h]
  HModel hModel; // [rsp+30h] [rbp-C0h] BYREF
  CStudioHdr hdr; // [rsp+40h] [rbp-B0h] BYREF
  CFmtStrN<80,false> str; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp-38h]

  this->m_isAbleToCloseAreaPortals = 1;
  v25 = __readfsqword(0x28u);
  CPropDoorRotating::Spawn(this, pKeyValues);
  CUtlVectorBase<CUtlSymbolLarge,CUtlMemory<CUtlSymbolLarge,int>>::RemoveAll(&this->m_damageStates);
  this->m_currentDamageState = -1;
  v3 = KeyValues::operator new(0x14u);
  modelKeyValues = v3;
  KeyValues::KeyValues(v3, "");
  v4 = modelinfo;
  CBaseEntity::GetModel(&hModel, this);
  CStudioHdr::CStudioHdr(&hdr, &hModel, v4);
  if ( hdr.m_pModel != 0 )
  {
    v5 = CStudioHdr::KeyValueText(&hdr);
    v6 = CStudioHdr::pszName(&hdr);
    if ( KeyValues::LoadFromBuffer(v3, v6, v5, 0, 0, 0, 0) )
    {
      Key = KeyValues::FindKey(v3, "door_options", 0);
      if ( Key != 0 )
      {
        str.m_bQuietTruncation = 0;
        str._vptr_CFmtStrN = &off_4099000;
        str.m_szBuf[0] = 0;
        str.m_nLength = 0;
        S1Skin = CBaseAnimating::GetS1Skin(this);
        v9 = CFmtStrN<80,false>::sprintf(&str, "skin%d", S1Skin);
        v10 = KeyValues::FindKey(Key, v9, 0);
        if ( v10 != 0 || (v10 = KeyValues::FindKey(Key, "defaults", 0)) != 0 )
        {
          for ( i = 1; ; i = v13 )
          {
            v13 = i + 1;
            v14 = CFmtStrN<80,false>::sprintf(&str, "damage%d", i);
            String = KeyValues::GetString(v10, v14, 0, 0, 0);
            if ( String == 0 )
              break;
            AllocPooledString(&hModel, String);
            m_Size = this->m_damageStates.m_Size;
            v17 = this->m_damageStates.m_Size;
            if ( m_Size == this->m_damageStates.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CUtlSymbolLarge,int>::Grow(&this->m_damageStates.m_Memory, 1);
              v17 = this->m_damageStates.m_Size;
            }
            this->m_damageStates.m_Size = v17 + 1;
            v12 = &this->m_damageStates.m_Memory.m_pMemory[m_Size];
            if ( v12 != 0 )
              v12->m_pBinding = hModel.m_pBinding;
          }
        }
      }
    }
  }
  KeyValues::deleteThis(modelKeyValues);
  this->m_bBreakable = ((this->m_spawnflags.m_Value >> 19) ^ 1) & 1;
  m_pEntity = this->m_pEntity;
  if ( m_pEntity != 0 )
  {
    v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v20 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_NavBlocker.m_hBlocker.m_Index) = v20 | this->m_NavBlocker.m_hBlocker.m_Index & 0x8000;
    this->m_NavBlocker.m_hBlocker.m_Index = (v19 << 15) | this->m_NavBlocker.m_hBlocker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_NavBlocker.m_hBlocker.m_Index = -1;
  }
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED);
  CStudioHdr::Term(&hdr);
}


// CPropDoorRotatingBreakable::Event_Killed  (line 2936, @0x00000000023616e0, libserver.so)  // inlines: CAI_Concept, CEntityHandle, CFmtStrN, CFollowupTargetSpec_t, CHandle, CPASFilter, Get, GetAttacker, GetDamageForce, GetEffects, GetInstance, InitQuietTruncation, NormalizeInPlace, String, ToCStr, VectorAdd, operator CBaseEntity*, operator*=, operator+, operator[], ~CPASFilter
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetTeam, CResponseCriteriaSet::AppendCriteria, CRR_Concept::CRR_Concept, CResponseQueue::Add, CResponseCriteriaSet::~CResponseCriteriaSet, CEntityIOOutput::FireOutput, CBreakableProp::Event_Killed, CBasePropDoor::UpdateAreaPortals, CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsGetObject (27 total)
// strings: "brokenby", "DoorBroken", "models/%s.vmdl"
void __fastcall CPropDoorRotatingBreakable::Event_Killed(
        CPropDoorRotatingBreakable *const this,
        const CTakeDamageInfo *const info)
{
  int m_Size; // eax
  const CBaseEntity *v5; // rax
  CTeam *Team; // rax
  const char *v7; // rax
  Vector *AbsOrigin; // r13
  IPhysicsObject *Object; // rax
  int v10; // xmm1_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  float v13; // xmm0_4
  vec_t v14; // xmm3_4
  unsigned int m_Value; // edi
  int v16; // ecx
  vec_t v17; // xmm2_4
  int v18; // esi
  vec_t v19; // xmm0_4
  void (__fastcall *v20)(ITempEntsSystem *, CPASFilter *, _QWORD *, _QWORD, CResponseCriteriaSet *, const QAngle *, float, float, Vector *, int, unsigned int, int, int, int, _DWORD); // r15
  const Vector *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm2_4
  int m_currentDamageState; // eax
  CUtlSymbolLarge *m_pMemory; // rdx
  const char **v26; // rax
  const char *v27; // rdx
  const char *vptr_CResponseCriteriaSet; // rsi
  int targetDamageState; // [rsp+54h] [rbp-26Ch]
  CUtlStringToken v30; // [rsp+60h] [rbp-260h]
  unsigned int v31; // [rsp+64h] [rbp-25Ch]
  const QAngle *AbsAngles; // [rsp+68h] [rbp-258h]
  float AbsScale; // [rsp+70h] [rbp-250h]
  int v34; // [rsp+74h] [rbp-24Ch]
  int v35; // [rsp+78h] [rbp-248h]
  int v36; // [rsp+7Ch] [rbp-244h]
  _QWORD v37[2]; // [rsp+80h] [rbp-240h] BYREF
  Vector offset; // [rsp+90h] [rbp-230h] BYREF
  Vector force; // [rsp+A0h] [rbp-220h] BYREF
  CResponseCriteriaSet contexts; // [rsp+B0h] [rbp-210h] BYREF
  CFmtStrN<80,false> str; // [rsp+F0h] [rbp-1D0h] BYREF
  CPASFilter filter; // [rsp+150h] [rbp-170h] BYREF
  unsigned __int64 v43; // [rsp+288h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  m_Size = this->m_damageStates.m_Size;
  if ( m_Size != 0 )
  {
    targetDamageState = m_Size - 1;
    if ( m_Size - 1 > this->m_currentDamageState )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      Object = CBaseEntity::VPhysicsGetObject(this);
      CPhysicsGameSystem::PhysBreakSound(g_pPhysicsGameSystem, this, Object, *AbsOrigin);
      contexts._vptr_CResponseCriteriaSet = COERCE_INT_((*(this->_vptr_IHandleEntity + 62))(this));
      LODWORD(contexts.m_Lookup.m_LessFunc) = v10;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &contexts);
      while ( targetDamageState > this->m_currentDamageState )
      {
        z = info->m_vecDamageForce.z;
        x = info->m_vecDamageForce.x;
        offset.y = info->m_vecDamageForce.y;
        offset.z = z;
        offset.x = x;
        v13 = fminf(VectorNormalize(&offset), 300.0);
        v14 = offset.x * v13;
        m_Value = this->m_fEffects.m_Value;
        offset.x = 10.0 * offset.x;
        v16 = this->m_clrRender.m_Value._color[1];
        v17 = offset.y * v13;
        force.x = v14;
        v18 = this->m_clrRender.m_Value._color[0];
        v31 = m_Value;
        offset.y = 10.0 * offset.y;
        force.y = v17;
        v35 = v16;
        v19 = v13 * offset.z;
        v34 = v18;
        offset.z = 10.0 * offset.z;
        force.z = v19;
        v20 = *(te->_vptr_IPredictionSystem + 27);
        v36 = this->m_clrRender.m_Value._color[2];
        AbsScale = CBaseEntity::GetAbsScale(this);
        AbsAngles = CBaseEntity::GetAbsAngles(this);
        v21 = CBaseEntity::GetAbsOrigin(this);
        v22 = v21->z + offset.z;
        v23 = v21->x + offset.x;
        *(&contexts._vptr_CResponseCriteriaSet + 1) = v21->y + offset.y;
        *&contexts.m_Lookup.m_LessFunc = v22;
        *&contexts._vptr_CResponseCriteriaSet = v23;
        v30.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
        CBaseEntity::GetModel(v37, this);
        v20(te, &filter, v37, v30.m_nHashCode, &contexts, AbsAngles, -1.0, AbsScale, &force, 1, v31, v34, v35, v36, 0);
        m_currentDamageState = this->m_currentDamageState;
        str.m_bQuietTruncation = 0;
        m_pMemory = this->m_damageStates.m_Memory.m_pMemory;
        str._vptr_CFmtStrN = &off_4099000;
        str.m_szBuf[0] = 0;
        str.m_nLength = 0;
        this->m_currentDamageState = ++m_currentDamageState;
        v26 = &m_pMemory[m_currentDamageState];
        v27 = "";
        if ( *v26 != 0 )
          v27 = *v26;
        CFmtStrN<80,false>::sprintf(&str, "models/%s.vmdl", v27);
        V_FixSlashes(str.m_szBuf, 47);
        AllocPooledString(&contexts, str.m_szBuf);
        vptr_CResponseCriteriaSet = "";
        if ( contexts._vptr_CResponseCriteriaSet != 0 )
          vptr_CResponseCriteriaSet = contexts._vptr_CResponseCriteriaSet;
        CBaseModelEntity::SetModel(this, vptr_CResponseCriteriaSet);
      }
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
  if ( this->m_eDoorState.m_Value == DoorState_t::DOOR_STATE_CLOSED )
    CBasePropDoor::UpdateAreaPortals(this, 1);
  CResponseCriteriaSet::CResponseCriteriaSet(&contexts);
  v5 = CEntityHandle::operator CEntityInstance *(&info->m_hAttacker);
  if ( v5 != 0 )
  {
    Team = CBaseEntity::GetTeam(v5);
    if ( Team != 0 )
    {
      v7 = (*(Team->_vptr_IHandleEntity + 208))(Team);
      CResponseCriteriaSet::AppendCriteria(&contexts, "brokenby", v7, 1.0);
    }
  }
  force.x = 0.0;
  force.y = NAN;
  CRR_Concept::CRR_Concept(&offset, "DoorBroken");
  offset.y = NAN;
  CResponseQueue::Add(g_ResponseQueueManager.m_pQueue, &offset, &contexts, 0.0, &force, this);
  CResponseCriteriaSet::~CResponseCriteriaSet(&contexts);
  CEntityIOOutput::FireOutput(&this->m_OnBreak, this, this);
  CBreakableProp::Event_Killed(this, info);
}


// CPropDoorRotatingBreakable::OnTakeDamage  (line 2994, @0x0000000002361c40, libserver.so)  // inlines: CFmtStrN, CPASFilter, GetBool, GetCollisionGroup, GetCollisionGroup_Inline, GetCycle, GetEffects, GetSequence, InitQuietTruncation, SetCollisionGroup, String, ToCStr, operator[], ~CPASFilter
// calls: CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo, CBreakableProp::OnTakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseAnimating::GetBaseAnimatingController, CBaseEntity::GetAbsOrigin, CBaseEntity::VPhysicsGetObject, CPhysicsGameSystem::PhysBreakSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseAnimating::GetModelPtr (43 total)
// strings: "prop_data", "dmg.bullets", "dmg.club", "dmg.explosive", "dmg.fire", "blocklos" (8 total)
int __fastcall CPropDoorRotatingBreakable::OnTakeDamage(
        CPropDoorRotatingBreakable *const this,
        const CTakeDamageInfo *const info)
{
  int Health; // r12d
  int m_bitsDamageType; // eax
  int v6; // eax
  int v7; // r14d
  int v8; // ebx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // r13d
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // r15d
  int v16; // r12d
  int v17; // eax
  int m_Size; // eax
  DoorState_t m_Value; // r11d
  Vector *AbsOrigin; // r12
  IPhysicsObject *Object; // rax
  double v22; // xmm0_8
  vec_t v23; // xmm1_4
  int v24; // edx
  const CModel *ModelPtr; // r13
  KeyValues *v26; // r12
  const char *v27; // r14
  const char *v28; // rax
  KeyValues *Key; // r13
  void (__fastcall *v30)(CPropDoorRotatingBreakable *const, float); // r14
  float v31; // xmm1_4
  float Float; // xmm0_4
  void (__fastcall *v33)(CPropDoorRotatingBreakable *const, float); // r14
  float v34; // xmm1_4
  float v35; // xmm0_4
  void (__fastcall *v36)(CPropDoorRotatingBreakable *const, float); // r14
  float v37; // xmm1_4
  float v38; // xmm0_4
  void (__fastcall *v39)(CPropDoorRotatingBreakable *const, float); // r14
  float v40; // xmm1_4
  float v41; // xmm0_4
  bool v42; // al
  int Int; // eax
  int v44; // r14d
  unsigned int v45; // r13d
  void (__fastcall *v46)(ITempEntsSystem *, CPASFilter *, char **, _QWORD, const Vector *, const QAngle *, float, float, Vector *, int, unsigned int, int, int, int, _DWORD); // r12
  int m_currentDamageState; // eax
  CUtlSymbolLarge *m_pMemory; // rdx
  const char **v49; // rax
  const char *v50; // rdx
  const char *v51; // rsi
  CCollisionProperty *m_pCollision; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v54; // eax
  Activity SequenceActivity; // eax
  HSequence v56; // eax
  float v57; // xmm1_4
  float flMainCycle; // [rsp+3Ch] [rbp-2E4h]
  int ret; // [rsp+68h] [rbp-2B8h]
  int targetDamageState; // [rsp+6Ch] [rbp-2B4h]
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // [rsp+70h] [rbp-2B0h]
  const Vector *v63; // [rsp+80h] [rbp-2A0h]
  const QAngle *AbsAngles; // [rsp+88h] [rbp-298h]
  CUtlStringToken v65; // [rsp+90h] [rbp-290h]
  float AbsScale; // [rsp+94h] [rbp-28Ch]
  int v67; // [rsp+98h] [rbp-288h]
  int v68; // [rsp+9Ch] [rbp-284h]
  char *pModelName[2]; // [rsp+A0h] [rbp-280h] BYREF
  Vector addedVelocity; // [rsp+B0h] [rbp-270h] BYREF
  CTakeDamageInfo subInfo; // [rsp+C0h] [rbp-260h] BYREF
  CFmtStrN<80,false> str; // [rsp+150h] [rbp-1D0h] BYREF
  CPASFilter filter; // [rsp+1B0h] [rbp-170h] BYREF
  unsigned __int64 v74; // [rsp+2E8h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  Health = CBaseEntity::GetHealth(this);
  CTakeDamageInfo::CTakeDamageInfo(&subInfo, info);
  m_bitsDamageType = info->m_bitsDamageType;
  if ( (m_bitsDamageType & 0x40) != 0 )
  {
    if ( info->m_flDamage < 40.0 && (m_bitsDamageType & 0x8000000) == 0 )
    {
      if ( !this->m_bBreakable )
        goto LABEL_34;
      goto LABEL_5;
    }
    subInfo.m_flDamage = (*(this->_vptr_IHandleEntity + 156))(this);
  }
  if ( !this->m_bBreakable )
  {
LABEL_34:
    v8 = 0;
    goto LABEL_7;
  }
LABEL_5:
  ret = CBreakableProp::OnTakeDamage(this, &subInfo);
  v6 = CBaseEntity::GetHealth(this);
  v7 = v6;
  if ( v6 <= 0 || Health == v6 || this->m_damageStates.m_Size <= 0 )
    goto LABEL_6;
  v10 = (*(this->_vptr_IHandleEntity + 156))(this);
  v14 = (v10 >> 31);
  v12 = -1;
  v13 = this->m_damageStates.m_Size + 1;
  LODWORD(v14) = v10 % v13;
  v15 = -(v10 / v13);
  v16 = v15;
  while ( 1 )
  {
    v17 = v16 + (*(this->_vptr_IHandleEntity + 156))(this, v11, v14);
    v16 += v15;
    if ( v7 >= v17 )
      break;
    ++v12;
  }
  m_Size = this->m_damageStates.m_Size;
  if ( m_Size > v12 )
  {
    if ( v12 < 0 )
      v12 = -1;
    targetDamageState = v12;
  }
  else
  {
    targetDamageState = m_Size - 1;
  }
  if ( targetDamageState <= this->m_currentDamageState )
  {
LABEL_6:
    v8 = ret;
  }
  else
  {
    m_Value = this->m_eDoorState.m_Value;
    this->m_isAbleToCloseAreaPortals = 0;
    if ( m_Value == DoorState_t::DOOR_STATE_CLOSED )
      CBasePropDoor::UpdateAreaPortals(this, 1);
    flMainCycle = CBaseAnimating::GetBaseAnimatingController(this)->m_baseLayer.m_flCycle.m_Value;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    Object = CBaseEntity::VPhysicsGetObject(this);
    CPhysicsGameSystem::PhysBreakSound(g_pPhysicsGameSystem, this, Object, *AbsOrigin);
    v22 = (*(this->_vptr_IHandleEntity + 62))(this);
    addedVelocity.z = v23;
    *&addedVelocity.x = v22;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &addedVelocity);
    if ( targetDamageState > this->m_currentDamageState )
    {
      p_m_Collision = &this->m_Collision;
      do
      {
        addedVelocity = GetVelocityFromDamageForce(info, this);
        v44 = this->m_clrRender.m_Value._color[0];
        v45 = this->m_fEffects.m_Value;
        v67 = this->m_clrRender.m_Value._color[1];
        v46 = *(te->_vptr_IPredictionSystem + 27);
        v68 = this->m_clrRender.m_Value._color[2];
        AbsScale = CBaseEntity::GetAbsScale(this);
        AbsAngles = CBaseEntity::GetAbsAngles(this);
        v63 = CBaseEntity::GetAbsOrigin(this);
        v65.m_nHashCode = CBaseAnimating::GetSkin(this).m_nHashCode;
        CBaseEntity::GetModel(pModelName, this);
        v46(
          te,
          &filter,
          pModelName,
          v65.m_nHashCode,
          v63,
          AbsAngles,
          -1.0,
          AbsScale,
          &addedVelocity,
          1,
          v45,
          v44,
          v67,
          v68,
          0);
        m_currentDamageState = this->m_currentDamageState;
        str.m_bQuietTruncation = 0;
        m_pMemory = this->m_damageStates.m_Memory.m_pMemory;
        str._vptr_CFmtStrN = &off_4099000;
        str.m_szBuf[0] = 0;
        str.m_nLength = 0;
        this->m_currentDamageState = ++m_currentDamageState;
        v49 = &m_pMemory[m_currentDamageState];
        v50 = "";
        if ( *v49 != 0 )
          v50 = *v49;
        CFmtStrN<80,false>::sprintf(&str, "models/%s.vmdl", v50);
        V_FixSlashes(str.m_szBuf, 47);
        AllocPooledString(pModelName, str.m_szBuf);
        v51 = "";
        if ( pModelName[0] != 0 )
          v51 = pModelName[0];
        CBaseModelEntity::SetModel(this, v51);
        (*(this->_vptr_IHandleEntity + 51))(this);
        m_pCollision = this->m_pCollision;
        if ( m_pCollision != 0 )
          v24 = m_pCollision->m_CollisionGroup.m_Value;
        else
          v24 = 4;
        CCollisionProperty::SetupPhysicsFromUnscaledModel(
          p_m_Collision,
          VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
          v24,
          0);
        ModelPtr = CBaseAnimating::GetModelPtr(this);
        v26 = KeyValues::operator new(0x14u);
        KeyValues::KeyValues(v26, "");
        v27 = CModel::KeyValueText(ModelPtr);
        v28 = CModel::name(ModelPtr);
        if ( KeyValues::LoadFromBuffer(v26, v28, v27, 0, 0, 0, 0) )
        {
          Key = KeyValues::FindKey(v26, "prop_data", 0);
          if ( Key != 0 )
          {
            v30 = *(this->_vptr_IHandleEntity + 257);
            (*(this->_vptr_IHandleEntity + 261))(this);
            Float = KeyValues::GetFloat(Key, "dmg.bullets", v31);
            v30(this, Float);
            v33 = *(this->_vptr_IHandleEntity + 258);
            (*(this->_vptr_IHandleEntity + 262))(this);
            v35 = KeyValues::GetFloat(Key, "dmg.club", v34);
            v33(this, v35);
            v36 = *(this->_vptr_IHandleEntity + 259);
            (*(this->_vptr_IHandleEntity + 263))(this);
            v38 = KeyValues::GetFloat(Key, "dmg.explosive", v37);
            v36(this, v38);
            v39 = *(this->_vptr_IHandleEntity + 260);
            (*(this->_vptr_IHandleEntity + 264))(this);
            v41 = KeyValues::GetFloat(Key, "dmg.fire", v40);
            v39(this, v41);
            v42 = CBaseEntity::BlocksLOS(this);
            Int = KeyValues::GetInt(Key, "blocklos", v42);
            CBaseEntity::SetBlocksLOS(this, Int != 0);
            if ( KeyValues::GetInt(Key, "isdebris", 0) != 0 )
              CCollisionProperty::SetCollisionGroup(p_m_Collision, 5);
          }
        }
        KeyValues::deleteThis(v26);
      }
      while ( targetDamageState > this->m_currentDamageState );
    }
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    v54.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
    SequenceActivity = CBaseAnimating::GetSequenceActivity(this, v54);
    if ( SequenceActivity != -1 )
    {
      v56.m_Data = CBaseAnimating::SelectWeightedSequence(this, SequenceActivity).m_Data;
      if ( v56.m_Data != -1 )
      {
        CBaseAnimating::SetSequence(this, v56, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
        CBaseAnimating::SetCycle(this, COERCE_DOUBLE(LODWORD(flMainCycle)), v57);
      }
    }
    CEntityIOOutput::FireOutput(&this->m_OnBreak, this, this);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
    v8 = ret;
  }
LABEL_7:
  CTakeDamageInfo::~CTakeDamageInfo(&subInfo);
  return v8;
}


// CPropDoorRotatingBreakable::DrawDebugTextOverlays  (line 3113, @0x000000000234bd00, libserver.so)  // inlines: V_strncpy<long unsigned int>
// calls: CPropDoorRotating::DrawDebugTextOverlays, _V_strncpy, CBaseEntity::EntityText, __stack_chk_fail
// strings: "DOOR IS NOT BREAKABLE", "DOOR IS BREAKABLE"
int __fastcall CPropDoorRotatingBreakable::DrawDebugTextOverlays(
        CPropDoorRotatingBreakable *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r13
  char v5; // bl
  int result; // eax
  int text_offset; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  result = CPropDoorRotating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    text_offset = result;
    if ( this->m_bBreakable )
      _V_strncpy(tempstr, "DOOR IS BREAKABLE", 512);
    else
      _V_strncpy(tempstr, "DOOR IS NOT BREAKABLE", 512);
    CBaseEntity::EntityText(this, text_offset, tempstr, 0.0, 255, 255, 255, 255);
    return text_offset + 1;
  }
  return result;
}


