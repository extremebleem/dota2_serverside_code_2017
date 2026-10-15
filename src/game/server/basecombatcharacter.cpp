// Reconstructed from DWARF by pahole; not original source.

// src/game/server/basecombatcharacter.cpp:177
class CCleanupDefaultRelationships : public CAutoGameSystem {
	class YouForgot {
	private:

		void ToDefine_DEFINE_GAME_SYSTEM();
		YouForgot();

		// sizeof = 1
	};

public:

protected:

	static IGameSystemFactory * sm_Factory;
	typedef CAutoGameSystem BaseClass;
	CCleanupDefaultRelationships(CCleanupDefaultRelationships &);
	CCleanupDefaultRelationships(const CCleanupDefaultRelationships &);
	virtual void YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition();
	virtual bool DoesGameSystemReallocate();
	virtual void SetGameSystemGlobalPtrs(void *);
	void SetGameSystemGlobalPtrImpl(CCleanupDefaultRelationships *);
	CCleanupDefaultRelationships();
	virtual void Shutdown();
	virtual ~CCleanupDefaultRelationships();

	// vtable[39] YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition
	// vtable[36] DoesGameSystemReallocate
	// vtable[34] SetGameSystemGlobalPtrs
	// vtable[2] Shutdown
	// sizeof = 24
};

// src/game/server/basecombatcharacter.cpp:223
class C_CBaseCombatCharacter_MapInstall {
	C_CBaseCombatCharacter_MapInstall();

	// sizeof = 1
};

// src/game/server/basecombatcharacter.cpp:300
struct VisibilityCacheEntry_t {
	EHANDLE pBlocker;  // +0x10
	float time;  // +0x14
	VisibilityCacheEntry_t();
	VisibilityCacheEntry_t(const VisibilityCacheEntry_t &);

	// sizeof = 24
};

// src/game/server/basecombatcharacter.cpp:308
class CVisibilityCacheEntryLess {
	bool operator!();
	bool operator()(const VisibilityCacheEntry_t &, const VisibilityCacheEntry_t &);

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseCombatCharacter::GetDataDescMap  (line 98, @0x000000000213ce50, libserver.so)
// globals: CBaseCombatCharacter::m_DataMap
datamap_t *__fastcall CBaseCombatCharacter::GetDataDescMap(CBaseCombatCharacter *const this)
{
  return &CBaseCombatCharacter::m_DataMap;
}


// CBaseCombatCharacter::AddDatadescMetadataKeys  (line 98, @0x000000000214fcb0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseCombatCharacter::GetEntityClass(void)
void __fastcall CBaseCombatCharacter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseCombatCharacter::GetEntityClass);
}


// CBaseCombatCharacter::GetBaseMap  (line 98, @0x000000000214fcd0, libserver.so)
// globals: CBaseFlex::m_DataMap
datamap_t *__cdecl CBaseCombatCharacter::GetBaseMap()
{
  return &CBaseFlex::m_DataMap;
}


// DataMapInit<CBaseCombatCharacter>  (line 98, @0x000000000214fce0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>, CBaseCombatCharacter::NetworkVar_m_hMyWeapons> >, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GetDataOps<CUtlVector<Relationship_t> >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CBaseCombatCharacter"
// globals: `guard variable for'DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder, `guard variable for'DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc, CBaseFlex::m_DataMap, CBaseCombatCharacter::GetEntityClass(void), CBaseCombatCharacter::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemor, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory< (14 total)
datamap_t *__fastcall DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_pszBase = "CBaseCombatCharacter";
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::nameHolder,
      &_dso_handle);
  }
  CBaseCombatCharacter::m_DataMap.baseMap = &CBaseFlex::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc[1].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>> *)::ops = off_4008590;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>> *)::ops);
    }
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc[17].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>>>(CUtlVector<Relationship_t,CUtlMemory<Relationship_t,int>> *)::ops;
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc[19].fieldSize = 32;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>>(CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>>(CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>>(CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1> *)::ops = off_40085D0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>>(CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1> *)::ops);
    }
    DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc[20].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1>>(CNetworkUtlVectorBase<CHandle<CBaseCombatWeapon>,CBaseCombatCharacter::NetworkVar_m_hMyWeapons,-1> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc);
  }
  CBaseCombatCharacter::m_DataMap.dataNumFields = 35;
  CBaseCombatCharacter::m_DataMap.dataDesc = &DataMapInit<CBaseCombatCharacter>(CBaseCombatCharacter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseCombatCharacter::m_DataMap, CBaseCombatCharacter::GetEntityClass);
  return &CBaseCombatCharacter::m_DataMap;
}


// Relationship_t::AddDatadescMetadataKeys  (line 153, @0x000000000214fef0, libserver.so)
void __fastcall Relationship_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// Relationship_t::GetBaseMap  (line 153, @0x000000000214ff00, libserver.so)
datamap_t *__cdecl Relationship_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<Relationship_t>  (line 153, @0x000000000214ff10, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "Relationship_t"
// globals: `guard variable for'DataMapInit<Relationship_t>(Relationship_t *)::nameHolder, Relationship_t::m_DataMap, DataMapInit<Relationship_t>(Relationship_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<Relationship_t>(Relationship_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<Relationship_t>(Relationship_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<Relationship_t>(Relationship_t *)::nameHolder) != 0 )
  {
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_pszBase = "Relationship_t";
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<Relationship_t>(Relationship_t *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<Relationship_t>(Relationship_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<Relationship_t>(Relationship_t *)::nameHolder,
      &_dso_handle);
  }
  Relationship_t::m_DataMap.baseMap = 0;
  Relationship_t::m_DataMap.dataDesc = &DataMapInit<Relationship_t>(Relationship_t *)::dataDesc[1];
  Relationship_t::m_DataMap.dataNumFields = 5;
  return &Relationship_t::m_DataMap;
}


// CCleanupDefaultRelationships::~CCleanupDefaultRelationships  (line 177, @0x000000000217b360, libserver.so)  // inlines: ~CAutoGameSystem
// calls: IGameSystem::~IGameSystem
void __fastcall CCleanupDefaultRelationships::~CCleanupDefaultRelationships(CCleanupDefaultRelationships *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
}


// CCleanupDefaultRelationships::~CCleanupDefaultRelationships  (line 177, @0x000000000217b380, libserver.so)  // inlines: ~CAutoGameSystem, ~CCleanupDefaultRelationships
// calls: IGameSystem::~IGameSystem, operator delete
void __fastcall CCleanupDefaultRelationships::~CCleanupDefaultRelationships(CCleanupDefaultRelationships *const this)
{
  this->_vptr_IGameSystem = off_3F7C1B0;
  IGameSystem::~IGameSystem(this);
  operator delete(this);
}


// CCleanupDefaultRelationships::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition  (line 179, @0x000000000217a690, libserver.so)
void __fastcall CCleanupDefaultRelationships::YouForgot_DECLARE_GAME_SYSTEM_InYourClassDefinition(
        CCleanupDefaultRelationships *const this)
{
  ;
}


// CCleanupDefaultRelationships::DoesGameSystemReallocate  (line 179, @0x000000000217a6a0, libserver.so)
// globals: CCleanupDefaultRelationships::sm_Factory
bool __fastcall CCleanupDefaultRelationships::DoesGameSystemReallocate(const CCleanupDefaultRelationships *const this)
{
  return (*(CCleanupDefaultRelationships::sm_Factory->_vptr_IGameSystemFactory + 8))(CCleanupDefaultRelationships::sm_Factory);
}


// CCleanupDefaultRelationships::SetGameSystemGlobalPtrs  (line 179, @0x000000000217a6c0, libserver.so)  // inlines: SetGameSystemGlobalPtrImpl
// globals: CCleanupDefaultRelationships::sm_Factory
void __fastcall CCleanupDefaultRelationships::SetGameSystemGlobalPtrs(
        CCleanupDefaultRelationships *const this,
        void *pValue)
{
  if ( CCleanupDefaultRelationships::sm_Factory != 0 )
    (*(CCleanupDefaultRelationships::sm_Factory->_vptr_IGameSystemFactory + 7))(
      CCleanupDefaultRelationships::sm_Factory,
      pValue);
}


// CCleanupDefaultRelationships::Shutdown  (line 186, @0x000000000217f720, libserver.so)  // inlines: GameRules, Purge, operator[]
// calls: operator delete [], CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, int> >::RemoveAll, CUtlMemory<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, int>::Purge
// globals: CBaseCombatCharacter::m_DefaultRelationship, CBaseCombatCharacter::m_FactionRelationship, CBaseCombatCharacter::m_aFactions
void __fastcall CCleanupDefaultRelationships::Shutdown(CCleanupDefaultRelationships *const this)
{
  Relationship_t **v1; // rdx
  int v2; // eax
  int v3; // r12d
  __int64 v4; // rbx
  Relationship_t *v5; // rdi
  Relationship_t **v6; // rax
  __int64 v7; // r12
  int v8; // r13d
  Relationship_t *v9; // rdi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v10; // rbx

  v1 = CBaseCombatCharacter::m_DefaultRelationship;
  if ( CBaseCombatCharacter::m_DefaultRelationship == 0 )
    goto LABEL_11;
  if ( g_pGameRules == 0 )
  {
    v3 = 4;
LABEL_4:
    v4 = 0;
    do
    {
      v5 = v1[v4];
      if ( v5 != 0 )
      {
        operator delete[](v5);
        v1 = CBaseCombatCharacter::m_DefaultRelationship;
      }
      ++v4;
    }
    while ( v3 > v4 );
    goto LABEL_8;
  }
  v2 = (*(g_pGameRules->_vptr_CGameRules + 108))(g_pGameRules);
  v1 = CBaseCombatCharacter::m_DefaultRelationship;
  v3 = v2;
  if ( v2 > 0 )
    goto LABEL_4;
LABEL_8:
  if ( v1 != 0 )
    operator delete[](v1);
  CBaseCombatCharacter::m_DefaultRelationship = 0;
LABEL_11:
  v6 = CBaseCombatCharacter::m_FactionRelationship;
  if ( CBaseCombatCharacter::m_FactionRelationship != 0 )
  {
    v7 = 0;
    v8 = 0;
    if ( CBaseCombatCharacter::m_aFactions.m_Size > 0 )
    {
      while ( 1 )
      {
        v9 = v6[v7];
        if ( v9 != 0 )
          operator delete[](v9);
        v10 = &CBaseCombatCharacter::m_aFactions.m_Memory.m_pMemory[v7];
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(v10);
        if ( (v10->m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&v10->m_Memory);
        ++v8;
        ++v7;
        if ( CBaseCombatCharacter::m_aFactions.m_Size <= v8 )
          break;
        v6 = CBaseCombatCharacter::m_FactionRelationship;
      }
    }
    CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,CUtlMemory<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,int>>::RemoveAll(&CBaseCombatCharacter::m_aFactions);
    if ( (CBaseCombatCharacter::m_aFactions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,int>::Purge(&CBaseCombatCharacter::m_aFactions.m_Memory);
    if ( CBaseCombatCharacter::m_FactionRelationship != 0 )
      operator delete[](CBaseCombatCharacter::m_FactionRelationship);
    CBaseCombatCharacter::m_FactionRelationship = 0;
  }
}


// CCleanupDefaultRelationships::YouForgot::ToDefine_DEFINE_GAME_SYSTEM  (line 218, @0x000000000214ffd0, libserver.so)
void __cdecl CCleanupDefaultRelationships::YouForgot::ToDefine_DEFINE_GAME_SYSTEM()
{
  ;
}


// CBaseCombatCharacter::YouForgotToImplementOrDeclareServerClass  (line 223, @0x000000000213ce60, libserver.so)
int __fastcall CBaseCombatCharacter::YouForgotToImplementOrDeclareServerClass(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::GetServerClass  (line 223, @0x000000000214a510, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseCombatCharacter::GetServerClass(CBaseCombatCharacter *const this)
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


// CBaseCombatCharacter::GetInteractionID  (line 230, @0x000000000214ffe0, libserver.so)
// globals: CBaseCombatCharacter::m_lastInteraction
int __cdecl CBaseCombatCharacter::GetInteractionID()
{
  return ++CBaseCombatCharacter::m_lastInteraction;
}


// CBaseCombatCharacter::HasHumanGibs  (line 238, @0x000000000213ce70, libserver.so)
bool __fastcall CBaseCombatCharacter::HasHumanGibs(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::HasAlienGibs  (line 264, @0x000000000213ce80, libserver.so)
bool __fastcall CBaseCombatCharacter::HasAlienGibs(CBaseCombatCharacter *const this)
{
  return 0;
}


// CBaseCombatCharacter::CorpseFade  (line 284, @0x000000000215fac0, libserver.so)  // inlines: SetPlaybackRate, StopAnimation, curtime
// calls: CBaseAnimating::GetBaseAnimatingController, CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveType, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetAnimTime, CBaseEntity::IncrementInterpolationFrame, CBaseModelEntity::SUB_StartFadeOut
void __fastcall CBaseCombatCharacter::CorpseFade(CBaseCombatCharacter *const this)
{
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v3; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // xmm1_4

  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v3, 0);
  CBaseEntity::IncrementInterpolationFrame(this);
  CBaseModelEntity::SUB_StartFadeOut(this, 10.0, v7, 1);
}


// CBaseCombatCharacter::FVisible  (line 321, @0x0000000002175d60, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FVisible, Find, FindInsertionPosition, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Insert, InsertAt, IsValid, LeftChild, LookupEntity, RightChild, Set, VisibilityCacheEntry_t, curtime, operator CBaseEntity*, operator CEntityInstance*, operator(), operator=, operator[]
// calls: memcmp, CBaseEntity::FVisible, GetWorldEntity, CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int> >::NewNode, CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int> >::LinkToParent
// globals: CEntityHandle::gm_pEntityList, g_VisibilityCache
bool __fastcall CBaseCombatCharacter::FVisible(
        CBaseCombatCharacter *const this,
        CBaseEntity *pEntity,
        uint64 traceMask,
        CBaseEntity **ppBlocker)
{
  bool result; // al
  int m_Root; // ebx
  unsigned __int64 v6; // r15
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *v7; // r12
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 m_Index; // edx
  bool v12; // bl
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CBaseEntity *m_pInstance; // rax
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *v16; // rbx
  int v17; // eax
  unsigned __int16 m_Right; // dx
  unsigned int v19; // eax
  unsigned __int16 v20; // r15
  bool v21; // r12
  unsigned __int16 v22; // ax
  CBaseEntity **p_pBlocker; // rax
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *v24; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  CGlobalVars *v28; // r12
  float v29; // xmm0_4
  FnGlobalVarsWarningFunc v30; // rdx
  CBaseEntity **ppBlockerb; // [rsp+10h] [rbp-80h]
  unsigned __int16 v34; // [rsp+1Eh] [rbp-72h]
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *m_pMemory; // [rsp+28h] [rbp-68h]
  bool v37; // [rsp+28h] [rbp-68h]
  CBaseEntity *pBlocker; // [rsp+38h] [rbp-58h] BYREF
  VisibilityCacheEntry_t cacheEntry; // [rsp+40h] [rbp-50h] BYREF

  if ( traceMask != 16449 || ai_use_visibility_cache.m_pParent->m_Value.m_nValue == 0 || this == pEntity )
  {
    result = 0;
    if ( (pEntity->m_fFlags.m_Value & 0x8000) == 0 )
      return CBaseEntity::FVisible(this, pEntity, traceMask, ppBlocker);
    return result;
  }
  cacheEntry.pBlocker.m_Index = -1;
  if ( this >= pEntity )
  {
    cacheEntry.pEntity1 = pEntity;
    cacheEntry.pEntity2 = this;
  }
  else
  {
    cacheEntry.pEntity1 = this;
    cacheEntry.pEntity2 = pEntity;
  }
  m_Root = g_VisibilityCache.m_Root;
  v34 = g_VisibilityCache.m_Root;
  if ( g_VisibilityCache.m_Root == 0xFFFF )
  {
    if ( g_VisibilityCache.m_NumElements == 0xFFFF )
    {
LABEL_15:
      result = 0;
      if ( (pEntity->m_fFlags.m_Value & 0x8000) == 0 )
        return CBaseEntity::FVisible(this, pEntity, 0x4041u, ppBlocker);
      return result;
    }
    v20 = -1;
    v21 = 0;
  }
  else
  {
    m_pMemory = g_VisibilityCache.m_Elements.m_pMemory;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = m_Root;
        v7 = &m_pMemory[v6];
        if ( memcmp(&cacheEntry, &m_pMemory[v6].m_Data, 0x10u) >= 0 )
          break;
        m_Root = v7->m_Left;
        if ( m_Root == 0xFFFF )
          goto LABEL_14;
      }
      if ( memcmp(&m_pMemory[v6].m_Data, &cacheEntry, 0x10u) >= 0 )
        break;
      m_Root = v7->m_Right;
      if ( m_Root == 0xFFFF )
        goto LABEL_14;
    }
    if ( m_Root != 0xFFFF )
    {
      m_flCurrentTime = 0.0;
      v9 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
          {
            (m_pfnWarningFunc)(1, 0.0);
            v7 = &g_VisibilityCache.m_Elements.m_pMemory[v6];
          }
        }
        m_flCurrentTime = v9->m_flCurrentTime;
      }
      if ( (m_flCurrentTime - v7->m_Data.time) < 0.090000004 )
      {
        m_Index = v7->m_Data.pBlocker.m_Index;
        v12 = m_Index != -1;
        if ( m_Index == -1 )
        {
          if ( ppBlocker != 0 )
            *ppBlocker = 0;
          return !v12;
        }
        if ( ppBlocker != 0 )
        {
          if ( m_Index + 2 > 1
            && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Data.pBlocker.m_Index) >> 9) & 0x3F]) != 0
            && (v14 = &v13[v7->m_Data.pBlocker.m_Index & 0x1FF]) != 0
            && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            *ppBlocker = m_pInstance;
            if ( m_pInstance != 0 )
              return !v12;
          }
          else
          {
            *ppBlocker = 0;
          }
          *ppBlocker = GetWorldEntity();
        }
        return !v12;
      }
      goto LABEL_42;
    }
LABEL_14:
    if ( g_VisibilityCache.m_NumElements == 0xFFFF )
      goto LABEL_15;
    while ( 1 )
    {
      v16 = &m_pMemory[v34];
      v17 = memcmp(&cacheEntry, &v16->m_Data, 0x10u);
      m_Right = v16->m_Right;
      if ( v17 < 0 )
        m_Right = v16->m_Left;
      v19 = v17 >> 31;
      if ( m_Right == 0xFFFF )
        break;
      v34 = m_Right;
    }
    v20 = v34;
    v21 = v19;
  }
  v22 = CUtlRBTree<VisibilityCacheEntry_t,unsigned short,CVisibilityCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t,unsigned short>,unsigned short>>::NewNode(
          &g_VisibilityCache,
          &cacheEntry);
  m_Root = v22;
  CUtlRBTree<VisibilityCacheEntry_t,unsigned short,CVisibilityCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t,unsigned short>,unsigned short>>::LinkToParent(
    &g_VisibilityCache,
    v22,
    v20,
    v21);
  ++g_VisibilityCache.m_NumElements;
LABEL_42:
  p_pBlocker = &pBlocker;
  pBlocker = 0;
  if ( ppBlocker != 0 )
    p_pBlocker = ppBlocker;
  ppBlockerb = p_pBlocker;
  if ( (pEntity->m_fFlags.m_Value & 0x8000) == 0 && (result = CBaseEntity::FVisible(this, pEntity, 0x4041u, p_pBlocker)) )
  {
    v24 = &g_VisibilityCache.m_Elements.m_pMemory[m_Root];
    v24->m_Data.pBlocker.m_Index = -1;
  }
  else
  {
    v24 = &g_VisibilityCache.m_Elements.m_pMemory[m_Root];
    if ( *ppBlockerb != 0 && (m_pEntity = (*ppBlockerb)->m_pEntity) != 0 )
    {
      v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v27 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v24->m_Data.pBlocker.m_Index) = v27 | v24->m_Data.pBlocker.m_Index & 0x8000;
      v24->m_Data.pBlocker.m_Index = (v26 << 15) | v24->m_Data.pBlocker.m_Index & 0x7FFF;
      result = 0;
    }
    else
    {
      v24->m_Data.pBlocker.m_Index = -1;
      result = 0;
    }
  }
  v28 = gpGlobals;
  v29 = 0.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v30 = gpGlobals->m_pfnWarningFunc;
      if ( v30 != 0 )
      {
        v37 = result;
        (v30)(1, 0.0);
        result = v37;
      }
    }
    v29 = v28->m_flCurrentTime;
  }
  v24->m_Data.time = v29;
  return result;
}


// CBaseCombatCharacter::ResetVisibilityCache  (line 410, @0x00000000021761e0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<short unsigned int>, Element, FirstInorder, FreeNode, GrowMemory, LeftChild, Links, Purge, RemoveAll, RemoveAt, SetLeftChild, SetRightChild, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int> >::NextInorder, CUtlMemory<short unsigned int, int>::Purge, CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int> >::RemoveAll, CUtlMemory<short unsigned int, int>::Grow, CUtlRBTree<VisibilityCacheEntry_t, short unsigned int, CVisibilityCacheEntryLess, CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t, short unsigned int>, short unsigned int> >::Unlink, _Unwind_Resume
// callers: CBaseCombatCharacter::~CBaseCombatCharacter
// globals: g_VisibilityCache
void __fastcall CBaseCombatCharacter::ResetVisibilityCache(CBaseCombatCharacter *pBCC)
{
  int m_Root; // ebx
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *m_pMemory; // rdx
  unsigned __int16 m_Left; // cx
  __int64 v5; // r12
  UtlRBTreeNode_t<VisibilityCacheEntry_t,short unsigned int> *v6; // rax
  int m_Size; // edx
  int v8; // edx
  unsigned __int16 *v9; // rax
  __int64 v10; // r13
  int v11; // r12d
  unsigned __int16 v12; // bx
  __int64 v13; // rax
  CUtlVector<short unsigned int,CUtlMemory<short unsigned int,int> > removals; // [rsp+10h] [rbp-50h] BYREF

  if ( pBCC != 0 )
  {
    m_Root = g_VisibilityCache.m_Root;
    if ( g_VisibilityCache.m_Root == 0xFFFF )
    {
      removals.m_Memory.m_pMemory = 0;
      removals.m_Memory.m_nAllocationCount = 0;
      removals.m_Memory.m_nGrowSize = 0;
    }
    else
    {
      m_pMemory = g_VisibilityCache.m_Elements.m_pMemory;
      m_Left = g_VisibilityCache.m_Elements.m_pMemory[g_VisibilityCache.m_Root].m_Left;
      if ( m_Left != 0xFFFF )
      {
        while ( g_VisibilityCache.m_Elements.m_pMemory[m_Left].m_Left != 0xFFFF )
          m_Left = g_VisibilityCache.m_Elements.m_pMemory[m_Left].m_Left;
        m_Root = m_Left;
      }
      removals.m_Size = 0;
      removals.m_Memory.m_pMemory = 0;
      removals.m_Memory.m_nAllocationCount = 0;
      removals.m_Memory.m_nGrowSize = 0;
      if ( m_Root != 0xFFFF )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = &m_pMemory[m_Root];
          if ( v6->m_Data.pEntity1 == pBCC || v6->m_Data.pEntity2 == pBCC )
          {
            if ( removals.m_Memory.m_nAllocationCount == v5 )
            {
              CUtlMemory<unsigned short,int>::Grow(&removals.m_Memory, 1);
              m_Size = removals.m_Size;
            }
            else
            {
              m_Size = v5;
            }
            v8 = m_Size + 1;
            removals.m_Size = v8;
            v9 = &removals.m_Memory.m_pMemory[v5];
            if ( v9 != 0 )
              *v9 = m_Root;
            v5 = v8;
          }
          m_Root = CUtlRBTree<VisibilityCacheEntry_t,unsigned short,CVisibilityCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t,unsigned short>,unsigned short>>::NextInorder(
                     &g_VisibilityCache,
                     m_Root);
          if ( m_Root == 0xFFFF )
            break;
          m_pMemory = g_VisibilityCache.m_Elements.m_pMemory;
        }
        if ( v5 > 0 )
        {
          v10 = 0;
          v11 = 0;
          do
          {
            v12 = removals.m_Memory.m_pMemory[v10];
            if ( v12 != 0xFFFF )
            {
              CUtlRBTree<VisibilityCacheEntry_t,unsigned short,CVisibilityCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t,unsigned short>,unsigned short>>::Unlink(
                &g_VisibilityCache,
                v12);
              v13 = v12;
              g_VisibilityCache.m_Elements.m_pMemory[v13].m_Left = v12;
              g_VisibilityCache.m_Elements.m_pMemory[v13].m_Right = g_VisibilityCache.m_FirstFree;
              --g_VisibilityCache.m_NumElements;
              g_VisibilityCache.m_FirstFree = v12;
            }
            ++v11;
            ++v10;
          }
          while ( removals.m_Size > v11 );
        }
      }
    }
    if ( (removals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<unsigned short,int>::Purge(&removals.m_Memory);
      if ( (removals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<unsigned short,int>::Purge(&removals.m_Memory);
    }
  }
  else
  {
    CUtlRBTree<VisibilityCacheEntry_t,unsigned short,CVisibilityCacheEntryLess,CUtlMemory<UtlRBTreeNode_t<VisibilityCacheEntry_t,unsigned short>,unsigned short>>::RemoveAll(&g_VisibilityCache);
  }
}


// CBaseCombatCharacter::FInAimCone  (line 605, @0x000000000213ce90, libserver.so)
bool __fastcall CBaseCombatCharacter::FInAimCone(CBaseCombatCharacter *const this, CBaseEntity *pEntity)
{
  double (__fastcall *v4)(CBaseEntity *, double *, __int64); // r14
  bool (__fastcall *v5)(CBaseCombatCharacter *const, double *); // r13
  int v6; // xmm1_4
  int v7; // xmm1_4
  double v9; // [rsp+0h] [rbp-40h] BYREF
  int v10; // [rsp+8h] [rbp-38h]
  double v11; // [rsp+10h] [rbp-30h] BYREF
  int v12; // [rsp+18h] [rbp-28h]

  v4 = *(pEntity->_vptr_IHandleEntity + 169);
  v5 = *(this->_vptr_IHandleEntity + 267);
  v9 = (*(this->_vptr_IHandleEntity + 164))(this);
  v10 = v6;
  v11 = v4(pEntity, &v9, 1);
  v12 = v7;
  return v5(this, &v11);
}


// CBaseCombatCharacter::FInAimCone  (line 617, @0x000000000213f000, libserver.so)  // inlines: DotProduct, VectorSubtract, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize
bool __fastcall CBaseCombatCharacter::FInAimCone(CBaseCombatCharacter *const this, const Vector *const vecSpot)
{
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  float v7; // xmm0_4
  double v8; // xmm0_8
  float v9; // xmm1_4
  Vector los; // [rsp+0h] [rbp-30h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = vecSpot->y - AbsOrigin->y;
  v6 = vecSpot->x - AbsOrigin->x;
  los.z = 0.0;
  los.y = v5;
  los.x = v6;
  v7 = VectorNormalize(&los);
  v8 = (*(this->_vptr_IHandleEntity + 272))(this, v7);
  return (((los.x * *&v8) + (los.y * *(&v8 + 1))) + (v9 * los.z)) > 0.994;
}


// CBaseCombatCharacter::HandleInteraction  (line 644, @0x000000000213cf00, libserver.so)
bool __fastcall CBaseCombatCharacter::HandleInteraction(
        CBaseCombatCharacter *const this,
        int interactionType,
        void *data,
        CBaseCombatCharacter *sourceEnt)
{
  return 0;
}


// CBaseCombatCharacter::CBaseCombatCharacter  (line 661, @0x000000000216de90, libserver.so)  // inlines: CAI_MoveMonitor, CEntityHandle, CHandle, CNavHandle, CNetworkHandleBase, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, DamageHistory, EnsureValidValue<float>, GetBool, GetEntityIdentity, GetEntryIndex, GetInt, IndexToIdentity, IntervalTimer, Invalidate, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, ResetNavArea, Set, Vector, operator!=, operator=, operator=<float>, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseFlex::CBaseFlex, CountdownTimer::CountdownTimer, CBaseCombatCharacter::RemoveAllAmmo, CUtlMemory<CHandle<CBaseCombatWeapon>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseFlex::~CBaseFlex, _Unwind_Resume, CUtlMemory<Relationship_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CHandle<CEconWearable>, int>::Purge
// callers: CBaseCombatCharacter::CEntityInstanceEntityClass::ConstructInstance, CPhysicsCannister::CEntityInstanceEntityClass::ConstructInstance, CBasePlayer::CBasePlayer, NextBotCombatCharacter::NextBotCombatCharacter
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::CBaseCombatCharacter(CBaseCombatCharacter *const this)
{
  CBaseCombatCharacter *m_damageHistory; // rax
  CBaseCombatCharacter *v3; // rdx
  signed __int64 v4; // rdx
  uint32 m_Index; // eax
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  __int64 v9; // xmm0_8
  bool v10; // zf
  CNavArea *m_pData; // rax
  const CNavMesh *m_pAssociatedNavMesh; // rdx
  int m_Size; // r12d
  ConVar *m_pParent; // rax

  CBaseFlex::CBaseFlex(this);
  this->m_flNextAttack.m_Value = 0.0;
  this->_vptr_IHandleEntity = &off_40030B0;
  this->m_flFieldOfView.m_Value = 0.0;
  this->m_aliveTimer._vptr_IntervalTimer = off_3FD0350;
  m_damageHistory = this->m_damageHistory;
  this->m_RelationshipString.u.m_Id = 0;
  this->m_Relationship.m_Size = 0;
  this->m_Relationship.m_Memory.m_pMemory = 0;
  this->m_Relationship.m_Memory.m_nAllocationCount = 0;
  this->m_Relationship.m_Memory.m_nGrowSize = 0;
  this->m_hTriggerFogList.m_Size = 0;
  this->m_hTriggerFogList.m_Memory.m_pMemory = 0;
  this->m_hTriggerFogList.m_Memory.m_nAllocationCount = 0;
  this->m_hTriggerFogList.m_Memory.m_nGrowSize = 0;
  this->m_hLastFogTrigger.m_Index = -1;
  this->m_hMyWeapons.m_Vector.m_Size = 0;
  this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory = 0;
  this->m_hMyWeapons.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_hActiveWeapon.m_Value.m_Index = -1;
  this->m_aliveTimer.m_timestamp.m_Value = -1.0;
  do
  {
    v3 = m_damageHistory;
    m_damageHistory = (m_damageHistory + 24);
    v4 = v3 - this->m_damageHistory;
    *(&this->m_damageHistory[0].interval._vptr_IntervalTimer + v4) = off_3FD0350;
    *(&this->m_damageHistory[0].interval.m_timestamp.m_Value + v4) = -1.0;
  }
  while ( m_damageHistory != &this->m_lastValidNavArea );
  this->m_lastValidNavArea.m_pData = 0;
  this->m_lastValidNavArea.m_pAssociatedNavMesh = 0;
  this->m_currentNavArea.m_pData = 0;
  this->m_currentNavArea.m_pAssociatedNavMesh = 0;
  this->m_NavAreaUpdateMonitor.m_vMark.x = 0.0;
  this->m_NavAreaUpdateMonitor.m_vMark.y = 0.0;
  this->m_NavAreaUpdateMonitor.m_vMark.z = 0.0;
  this->m_NavAreaUpdateMonitor.m_flMarkTolerance = -1.0;
  CountdownTimer::CountdownTimer(&this->m_footstepTimer);
  this->m_hMyWearables.m_Vector.m_Size = 0;
  m_Index = this->m_hActiveWeapon.m_Value.m_Index;
  this->m_hMyWearables.m_Vector.m_Memory.m_pMemory = 0;
  v6 = CEntityHandle::gm_pEntityList;
  this->m_hMyWearables.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_hMyWearables.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_flDamageAccumulator = 0.0;
  if ( m_Index + 2 > 1 )
  {
    v7 = v6->m_pIdentityChunks[(LOWORD(this->m_hActiveWeapon.m_Value.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hActiveWeapon.m_Value.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1648, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_hActiveWeapon.m_Value.m_Index = -1;
      }
    }
  }
  this->m_nFaction = 0;
  CBaseCombatCharacter::RemoveAllAmmo(this);
  v9 = 3212836864LL;
  if ( this->m_aliveTimer.m_timestamp.m_Value != -1.0 )
  {
    (*(this->m_aliveTimer._vptr_IntervalTimer + 2))(&this->m_aliveTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
    this->m_aliveTimer.m_timestamp.m_Value = -1.0;
  }
  this->m_lastValidNavArea.m_pData = 0;
  v10 = (this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_lastValidNavArea.m_pAssociatedNavMesh = 0;
  m_pData = this->m_lastValidNavArea.m_pData;
  m_pAssociatedNavMesh = this->m_lastValidNavArea.m_pAssociatedNavMesh;
  this->m_hasBeenInjured = 0;
  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  this->m_damageHistory[0].team = -1;
  this->m_damageHistory[1].team = -1;
  this->m_damageHistory[2].team = -1;
  this->m_damageHistory[3].team = -1;
  this->m_currentNavArea.m_pData = m_pData;
  this->m_currentNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
  this->m_registeredNavTeam = -1;
  this->m_hMyWeapons.m_Vector.m_Size = 0;
  if ( v10 )
    CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Purge(&this->m_hMyWeapons.m_Vector.m_Memory);
  if ( m_Size > 0 )
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL, *&v9);
  m_pParent = ai_force_serverside_ragdoll.m_pParent;
  this->m_impactEnergyScale = 1.0;
  LODWORD(m_pParent) = m_pParent->m_Value.m_nValue;
  this->m_bApplyStressDamage = 1;
  this->m_spawnID = -1;
  this->m_navMeshID = -1;
  this->m_navHullCategory = 1;
  this->m_flNavHullRadius = -1.0;
  this->m_bForceServerRagdoll = m_pParent != 0;
  this->m_flNavHullHeight = -1.0;
}


// CBaseCombatCharacter::~CBaseCombatCharacter  (line 713, @0x0000000002176450, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Purge, RemoveAll, Set, operator[], ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CBaseCombatCharacter::ResetVisibilityCache, CBaseCombatCharacter::ClearLastKnownArea, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseFlex::~CBaseFlex, CUtlMemory<Relationship_t, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CHandle<CBaseCombatWeapon>, int>::Purge, CUtlMemory<CHandle<CEconWearable>, int>::Purge
// callers: CBaseCombatCharacter::~CBaseCombatCharacter, CPhysicsCannister::~CPhysicsCannister, CBasePlayer::CBasePlayer, CBasePlayer::~CBasePlayer, CDOTA_BaseNPC::CDOTA_BaseNPC, CDOTA_BaseNPC::~CDOTA_BaseNPC, NextBotCombatCharacter::~NextBotCombatCharacter, CSimpleBot::~CSimpleBot, NextBotCombatCharacter::NextBotCombatCharacter, CSimpleBot::CSimpleBot
// globals: CBaseCombatCharacter::m_aFactions
void __fastcall CBaseCombatCharacter::~CBaseCombatCharacter(CBaseCombatCharacter *const this)
{
  __int64 m_nFaction; // rcx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // si
  bool v5; // zf
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-20h] BYREF

  this->_vptr_IHandleEntity = &off_40030B0;
  m_nFaction = this->m_nFaction;
  if ( m_nFaction != 0 && CBaseCombatCharacter::m_aFactions.m_Size != 0 )
  {
    m_pEntity = this->m_pEntity;
    src.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
      &CBaseCombatCharacter::m_aFactions.m_Memory.m_pMemory[m_nFaction],
      &src);
  }
  CBaseCombatCharacter::ResetVisibilityCache(this);
  CBaseCombatCharacter::ClearLastKnownArea(this);
  v5 = (this->m_hMyWearables.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMyWearables.m_Vector.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CHandle<CEconWearable>,int>::Purge(&this->m_hMyWearables.m_Vector.m_Memory);
    if ( (this->m_hMyWearables.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CEconWearable>,int>::Purge(&this->m_hMyWearables.m_Vector.m_Memory);
  }
  v5 = (this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMyWeapons.m_Vector.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Purge(&this->m_hMyWeapons.m_Vector.m_Memory);
    if ( (this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Purge(&this->m_hMyWeapons.m_Vector.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTriggerFogList);
  if ( (this->m_hTriggerFogList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTriggerFogList.m_Memory);
    if ( (this->m_hTriggerFogList.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTriggerFogList.m_Memory);
  }
  v5 = (this->m_Relationship.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_Relationship.m_Size = 0;
  if ( v5 )
  {
    CUtlMemory<Relationship_t,int>::Purge(&this->m_Relationship.m_Memory);
    if ( (this->m_Relationship.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Relationship_t,int>::Purge(&this->m_Relationship.m_Memory);
  }
  CBaseFlex::~CBaseFlex(this);
}


// CBaseCombatCharacter::~CBaseCombatCharacter  (line 713, @0x0000000002176620, libserver.so)  // inlines: operator delete
// calls: CBaseCombatCharacter::~CBaseCombatCharacter
void __fastcall CBaseCombatCharacter::~CBaseCombatCharacter(CBaseCombatCharacter *const this)
{
  CBaseCombatCharacter::~CBaseCombatCharacter(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseCombatCharacter::Spawn  (line 726, @0x0000000002169810, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, Start, operator CEntityInstance*, operator!, operator=, operator=<float>, operator[]
// calls: CBaseAnimating::Spawn, DevMsg, CUtlVectorBase<Relationship_t, CUtlMemory<Relationship_t, int> >::FastRemove, CBaseEntity::SetBlocksLOS, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, IntervalTimer::Now
// callers: CPhysicsCannister::Spawn, CBasePlayer::Spawn, NextBotCombatCharacter::Spawn
// strings: "Removing relationship for lost entity\n"
// globals: CEntityHandle::gm_pEntityList, CBaseCombatCharacter::m_nextSpawnID
void __fastcall CBaseCombatCharacter::Spawn(CBaseCombatCharacter *const this, const CEntityKeyValues *pKeyValues)
{
  int v3; // ebx
  __int64 v4; // r12
  Relationship_t *v5; // rdx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  float v8; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int v10; // eax
  bool v11; // sf
  float v12; // [rsp+Ch] [rbp-24h]

  CBaseAnimating::Spawn(this, pKeyValues);
  v3 = this->m_Relationship.m_Size - 1;
  if ( v3 >= 0 )
  {
    v4 = v3;
    do
    {
      v5 = &this->m_Relationship.m_Memory.m_pMemory[v4];
      if ( (v5->entity.m_Index + 2 <= 1
         || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->entity.m_Index) >> 9) & 0x3F]) == 0
         || (v7 = &v6[v5->entity.m_Index & 0x1FF]) == 0
         || v5->entity.m_Index != v7->m_EHandle.m_Index
         || v7->m_pInstance == 0)
        && v5->classType == Class_T::CLASS_NONE )
      {
        DevMsg(2, "Removing relationship for lost entity\n");
        CUtlVectorBase<Relationship_t,CUtlMemory<Relationship_t,int>>::FastRemove(&this->m_Relationship, v3);
      }
      --v3;
      --v4;
    }
    while ( v3 != -1 );
  }
  CBaseEntity::SetBlocksLOS(this, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hTriggerFogList);
  this->m_hLastFogTrigger.m_Index = -1;
  v8 = IntervalTimer::Now(&this->m_aliveTimer);
  if ( v8 != this->m_aliveTimer.m_timestamp.m_Value )
  {
    v12 = v8;
    (*(this->m_aliveTimer._vptr_IntervalTimer + 2))(&this->m_aliveTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_aliveTimer.m_timestamp.m_Value = v12;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_hasBeenInjured = 0;
  this->m_damageHistory[0].team = -1;
  this->m_damageHistory[1].team = -1;
  this->m_damageHistory[2].team = -1;
  this->m_damageHistory[3].team = -1;
  vptr_IHandleEntity[365](this);
  v11 = CBaseCombatCharacter::m_nextSpawnID - 1022 < 0;
  v10 = ++CBaseCombatCharacter::m_nextSpawnID;
  this->m_spawnID = CBaseCombatCharacter::m_nextSpawnID;
  if ( !(v11 ^ __OFSUB__(v10, 1023) | (v10 == 1023)) )
    CBaseCombatCharacter::m_nextSpawnID = 1;
}


// CBaseCombatCharacter::Precache  (line 767, @0x000000000213e190, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
// callers: CPhysicsCannister::Precache, CBasePlayer::Precache, CDOTA_BaseNPC::Precache, CSimpleBot::Precache
// strings: "BaseCombatCharacter.CorpseGib", "BaseCombatCharacter.StopWeaponSounds", "BaseCombatCharacter.AmmoPickup"
void __fastcall CBaseCombatCharacter::Precache(
        CBaseCombatCharacter *const this,
        const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("BaseCombatCharacter.CorpseGib", pContext->m_pManifest);
  CBaseEntity::PrecacheScriptSound("BaseCombatCharacter.StopWeaponSounds", pContext->m_pManifest);
  CBaseEntity::PrecacheScriptSound("BaseCombatCharacter.AmmoPickup", pContext->m_pManifest);
}


// CBaseCombatCharacter::Restore  (line 781, @0x00000000021696c0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, String, operator CEntityInstance*, operator!, operator[]
// calls: CBaseAnimating::Restore, DevMsg, CUtlVectorBase<Relationship_t, CUtlMemory<Relationship_t, int> >::FastRemove
// callers: CBasePlayer::Restore
// strings: "%s (%s) removing class relationships due to level transition\n"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseCombatCharacter::Restore(CBaseCombatCharacter *const this, IRestore *const restore)
{
  int v3; // r14d
  int result; // eax
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rcx
  const char *v7; // rax
  const char *v8; // rdx
  int v9; // r12d
  __int64 v10; // r13
  Relationship_t *v11; // rcx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax

  v3 = CBaseAnimating::Restore(this, restore);
  result = 0;
  if ( v3 != 0 )
  {
    (*(this->_vptr_IHandleEntity + 359))(this, this->m_nFaction);
    result = v3;
    if ( gpGlobals->eLoadType == MapLoadType_t::MapLoad_Transition )
    {
      m_pEntity = this->m_pEntity;
      m_pAsString = "";
      if ( m_pEntity->m_designerName.u.m_Id != 0 )
        m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
      v7 = m_pEntity->m_name.u.m_pAsString;
      v8 = "";
      if ( v7 != 0 )
        v8 = v7;
      DevMsg(2, "%s (%s) removing class relationships due to level transition\n", v8, m_pAsString);
      v9 = this->m_Relationship.m_Size - 1;
      if ( v9 >= 0 )
      {
        v10 = v9;
        do
        {
          v11 = &this->m_Relationship.m_Memory.m_pMemory[v10];
          if ( (v11->entity.m_Index + 2 <= 1
             || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v11->entity.m_Index) >> 9) & 0x3F]) == 0
             || (v13 = &v12[v11->entity.m_Index & 0x1FF]) == 0
             || v11->entity.m_Index != v13->m_EHandle.m_Index
             || v13->m_pInstance == 0)
            && v11->classType != Class_T::CLASS_NONE )
          {
            CUtlVectorBase<Relationship_t,CUtlMemory<Relationship_t,int>>::FastRemove(&this->m_Relationship, v9);
          }
          --v9;
          --v10;
        }
        while ( v9 != -1 );
      }
      return v3;
    }
  }
  return result;
}


// CBaseCombatCharacter::CorpseGib  (line 811, @0x000000000213f160, libserver.so)  // inlines: CGameTrace, RnCollisionAttr_t
// calls: CGameTrace::Init, CBaseEntity::EmitSound, CGib::SpawnRandomGibs, CGib::SpawnHeadGib
// strings: "BaseCombatCharacter.CorpseGib"
bool __fastcall CBaseCombatCharacter::CorpseGib(CBaseCombatCharacter *const this, const CTakeDamageInfo *const info)
{
  trace_t tr; // [rsp+0h] [rbp-C0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  CBaseEntity::EmitSound(this, "BaseCombatCharacter.CorpseGib", 0.0, 0);
  if ( (*(this->_vptr_IHandleEntity + 332))(this) != 0 )
  {
    CGib::SpawnHeadGib(this);
    CGib::SpawnRandomGibs(this, 4, GibType_e::GIB_HUMAN);
    return 1;
  }
  else if ( (*(this->_vptr_IHandleEntity + 333))(this) != 0 )
  {
    CGib::SpawnRandomGibs(this, 4, GibType_e::GIB_ALIEN);
    return 1;
  }
  else
  {
    return 0;
  }
}


// CBaseCombatCharacter::GetDeathActivity  (line 838, @0x0000000002145a00, libserver.so)  // inlines: CGameTrace, DotProduct, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, String, ToCStr, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorMultiply, VectorSubtract, operator*, operator*=, operator+, operator-, operator=
// calls: CGameTrace::Init, CBaseEntity::GetLocalAngles, AngleVectors, CBaseAnimating::SelectWeightedSequence, CBaseEntity::GetModelName, Msg, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// strings: "ERROR! %s missing ACT_DIESIMPLE\n"
// globals: jpt_2145A8F
Activity __fastcall CBaseCombatCharacter::GetDeathActivity(CBaseCombatCharacter *const this)
{
  vec_t v2; // xmm1_4
  __int64 v3; // kr00_8
  const QAngle *LocalAngles; // rax
  int m_LastHitGroup; // eax
  double v6; // xmm0_8
  Activity v7; // r12d
  const char *v9; // rsi
  float flDot; // [rsp+0h] [rbp-180h]
  float v11; // [rsp+4h] [rbp-17Ch]
  Vector forward; // [rsp+10h] [rbp-170h] BYREF
  CTraceFilterSimple v13; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  if ( (*(this->_vptr_IHandleEntity + 140))(this) == 0 )
  {
LABEL_3:
    *&ray.m_Start.x = (*(this->_vptr_IHandleEntity + 62))(this);
    v11 = v2;
    ray.m_Start.z = v2;
    v3 = *&ray.m_Start.x;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    AngleVectors(LocalAngles, &forward, 0, 0);
    m_LastHitGroup = this->m_LastHitGroup;
    if ( m_LastHitGroup == 1 )
    {
      v7 = 114;
    }
    else
    {
      if ( m_LastHitGroup != 3 )
      {
        v6 = -(((forward.x * g_vecAttackDir.x) + (forward.y * g_vecAttackDir.y)) + (forward.z * g_vecAttackDir.z));
        v7 = 22;
        if ( v6 <= 0.3 )
        {
          LOBYTE(v7) = 21;
          if ( v6 > -0.3 )
            v7 = 20;
        }
        if ( CBaseAnimating::SelectWeightedSequence(this, v7).m_Data != -1 )
        {
          if ( CBaseAnimating::SelectWeightedSequence(this, v7).m_Data != -1 )
          {
            if ( v7 != 22 )
            {
LABEL_9:
              if ( v7 != 21 )
                return v7;
              ray.m_Extents.x = 16.0;
              ray.m_Extents.y = 16.0;
              ray.m_Extents.z = 18.0;
              ray.m_IsRay = 0;
              ray.m_StartOffset.x = -0.0;
              ray.m_StartOffset.y = -0.0;
              ray.m_StartOffset.z = -0.0;
              ray.m_Start.w = 0.0;
              ray.m_Delta.w = 0.0;
              ray.m_StartOffset.w = 0.0;
              ray.m_Delta.x = (*&v3 - (forward.x * 64.0)) - *&v3;
              ray.m_Delta.y = (*(&v3 + 1) - (forward.y * 64.0)) - *(&v3 + 1);
              ray.m_Delta.z = (v11 - (64.0 * forward.z)) - v11;
              ray.m_Extents.w = 0.0;
              ray.m_flRadius = 0.0;
              ray.m_Start.x = *&v3 + 0.0;
              ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                             + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
              ray.m_Start.y = *(&v3 + 1) + 0.0;
              ray.m_Start.z = v11 + 0.0;
              CTraceFilterSimple::CTraceFilterSimple(&v13, this, 4, 0);
              v13.m_attr.m_nInteractsWith |= 0x87001uLL;
              CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v13, &tr);
              if ( tr.fraction == 1.0 )
                return v7;
              return 20;
            }
LABEL_22:
            ray.m_Start.w = 0.0;
            ray.m_Delta.w = 0.0;
            ray.m_StartOffset.w = 0.0;
            ray.m_Extents.w = 0.0;
            ray.m_flRadius = 0.0;
            ray.m_Extents.x = 16.0;
            ray.m_Extents.y = 16.0;
            ray.m_IsRay = 0;
            ray.m_Extents.z = 18.0;
            ray.m_StartOffset.x = -0.0;
            ray.m_StartOffset.y = -0.0;
            ray.m_Delta.x = ((forward.x * 64.0) + *&v3) - *&v3;
            ray.m_Delta.y = ((forward.y * 64.0) + *(&v3 + 1)) - *(&v3 + 1);
            ray.m_Delta.z = ((64.0 * forward.z) + v11) - v11;
            ray.m_StartOffset.z = -0.0;
            ray.m_Start.x = *&v3 + 0.0;
            ray.m_Start.y = *(&v3 + 1) + 0.0;
            ray.m_Start.z = v11 + 0.0;
            ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                           + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
            CTraceFilterSimple::CTraceFilterSimple(&v13, this, 4, 0);
            v13.m_attr.m_nInteractsWith |= 0x87001uLL;
            CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v13, &tr);
            if ( tr.fraction == 1.0 )
              return 22;
            return 20;
          }
LABEL_13:
          if ( CBaseAnimating::SelectWeightedSequence(this, 20).m_Data == -1 )
          {
            CBaseEntity::GetModelName(&ray, this);
            v9 = "";
            if ( *&ray.m_Start.x != 0 )
              v9 = *&ray.m_Start.x;
            Msg("ERROR! %s missing ACT_DIESIMPLE\n", v9);
          }
          return 20;
        }
        v7 = 20;
        goto LABEL_12;
      }
      v7 = 116;
    }
    flDot = -(((forward.x * g_vecAttackDir.x) + (forward.y * g_vecAttackDir.y)) + (forward.z * g_vecAttackDir.z));
    if ( CBaseAnimating::SelectWeightedSequence(this, v7).m_Data == -1 )
    {
      if ( flDot > 0.3 )
      {
        if ( CBaseAnimating::SelectWeightedSequence(this, 22).m_Data != -1 )
          goto LABEL_22;
        goto LABEL_13;
      }
      if ( flDot <= -0.3 )
        v7 = 21;
    }
LABEL_12:
    if ( CBaseAnimating::SelectWeightedSequence(this, v7).m_Data != -1 )
      goto LABEL_9;
    goto LABEL_13;
  }
  switch ( (*(*random_valve + 16LL))(random_valve, 0, 7) )
  {
    case 0u:
      return 20;
    case 1u:
      v7 = 21;
      break;
    case 2u:
      return 22;
    case 3u:
      v7 = 23;
      break;
    case 4u:
      v7 = 114;
      break;
    case 5u:
      v7 = 115;
      break;
    case 6u:
      v7 = 116;
      break;
    case 7u:
      v7 = 117;
      break;
    default:
      goto LABEL_3;
  }
  return v7;
}


// CBaseCombatCharacter::Weapon_TranslateActivity  (line 975, @0x0000000002143eb0, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
Activity __fastcall CBaseCombatCharacter::Weapon_TranslateActivity(
        CBaseCombatCharacter *const this,
        Activity baseAct,
        bool *pRequired)
{
  uint32 v3; // r8d
  unsigned __int16 v4; // di
  int v5; // r9d
  int v6; // ecx
  CEntityIdentity *v7; // rdi
  CEntityIdentity *v8; // rdi
  CEntityInstance *m_pInstance; // rdi

  v3 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( m_pInstance != 0 )
          return (*(m_pInstance->_vptr_IHandleEntity + 372))(m_pInstance, baseAct, pRequired);
      }
    }
  }
  if ( pRequired != 0 )
    *pRequired = 0;
  return baseAct;
}


// CBaseCombatCharacter::NPC_TranslateActivity  (line 997, @0x000000000213cf10, libserver.so)
Activity __fastcall CBaseCombatCharacter::NPC_TranslateActivity(CBaseCombatCharacter *const this, Activity baseAct)
{
  return baseAct;
}


// CBaseCombatCharacter::Weapon_SetActivity  (line 1003, @0x0000000002150000, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
void __fastcall CBaseCombatCharacter::Weapon_SetActivity(
        CBaseCombatCharacter *const this,
        __int64 newActivity,
        double a3,
        double duration)
{
  uint32 v4; // ecx
  unsigned __int16 v5; // dx
  int v6; // edi
  int v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  v4 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (v4 << 15) | v5 & 0x7FFF;
  if ( (v7 + 2) > 1 )
  {
    v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v8 != 0 )
    {
      v9 = &v8[v6 & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        (*(v9->m_pInstance->_vptr_IHandleEntity + 326))(v9->m_pInstance, newActivity, a3, duration);
    }
  }
}


// CBaseCombatCharacter::Weapon_FrameUpdate  (line 1011, @0x0000000002143f80, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
void __fastcall CBaseCombatCharacter::Weapon_FrameUpdate(CBaseCombatCharacter *const this)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx

  v2 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
        (*(v7->m_pInstance->_vptr_IHandleEntity + 386))(v7->m_pInstance, this);
    }
  }
}


// CBaseCombatCharacter::CheckTraceHullAttack  (line 1030, @0x0000000002142cb0, libserver.so)  // inlines: OBBSize, VectorAdd, VectorMultiply, VectorSubtract, WorldAlignSize, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin
CBaseEntity *__fastcall CBaseCombatCharacter::CheckTraceHullAttack(
        CBaseCombatCharacter *const this,
        float flDist,
        const Vector *const mins,
        const Vector *const maxs,
        float flDamage,
        unsigned int iDmgType,
        float forceScale,
        bool bDamageAnyNPC)
{
  const QAngle *AbsAngles; // rax
  CCollisionProperty *m_pCollision; // rax
  float z; // xmm3_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  int (**vptr_IHandleEntity)(...); // rax
  Vector forward; // [rsp+20h] [rbp-60h] BYREF
  Vector vStart; // [rsp+30h] [rbp-50h] BYREF
  Vector vEnd; // [rsp+40h] [rbp-40h] BYREF

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &forward, 0, 0);
  vStart = *CBaseEntity::GetAbsOrigin(this);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    z = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
  else
    z = vec3_origin.z;
  v16 = z * 0.5;
  v17 = maxs->z;
  if ( v17 > v16 )
    v16 = v17 + 1.0;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  vStart.z = vStart.z + v16;
  vEnd.y = (forward.y * flDist) + vStart.y;
  vEnd.z = (forward.z * flDist) + vStart.z;
  vEnd.x = (flDist * forward.x) + vStart.x;
  return (vptr_IHandleEntity[342])(
           this,
           &vStart,
           &vEnd,
           mins,
           maxs,
           iDmgType,
           COERCE_DOUBLE(LODWORD(flDamage)),
           COERCE_DOUBLE(LODWORD(forceScale)),
           bDamageAnyNPC);
}


// PerformMeleeAttackTest  (line 1058, @0x0000000002166f40, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, EnableInteractsWith, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesAlongRay, CBaseEntity::GetDamageOptions, VectorNormalize, CTakeDamageInfo::CTakeDamageInfo, CalculateMeleeDamageForce, CBaseEntity::TakeDamage, CSoundEnt::InsertSound, CTakeDamageInfo::~CTakeDamageInfo, CUtlMemory<COverlapHit, int>::Purge, Pickup_ForcePlayerToDropThisObject (15 total)
// callers: CBaseCombatCharacter::CheckTraceHullAttack
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall PerformMeleeAttackTest(
        Ray_t *const ray,
        CBaseEntity *pAttacker,
        uint8 collisionGroup,
        CTakeDamageInfo *dmgInfo,
        float flForceScale,
        bool bDamageAnyNPC)
{
  int m_Size; // ebx
  __int64 i; // r12
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CBaseEntity *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityInstance *v16; // rdi
  CConcreteEntityList *v17; // rsi
  CEntityIdentity *v18; // rdx
  __int64 v19; // rcx
  CEntityIdentity *v20; // rdx
  vec_t v21; // xmm1_4
  float v22; // xmm1_4
  CEntityInstance *v23; // rdi
  CConcreteEntityList *v24; // rsi
  CEntityIdentity *v25; // rdx
  __int64 v26; // rcx
  CEntityIdentity *v27; // rdx
  vec_t v28; // xmm1_4
  CEntityInstance *v29; // rdi
  CConcreteEntityList *v30; // rsi
  CEntityIdentity *v31; // rdx
  __int64 v32; // rcx
  CEntityIdentity *v33; // rdx
  CBaseEntity *v34; // rcx
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  uint32 v37; // eax
  CBaseEntity *pReturnedEntity; // [rsp+8h] [rbp-1158h]
  CBaseCombatCharacter *pBCC; // [rsp+20h] [rbp-1140h]
  Vector attackDir; // [rsp+30h] [rbp-1130h] BYREF
  Vector vecForceOrigin; // [rsp+40h] [rbp-1120h] BYREF
  CGameQueryAttributes traceFilter; // [rsp+50h] [rbp-1110h] BYREF
  CTakeDamageInfo info; // [rsp+80h] [rbp-10E0h] BYREF
  COverlapList results; // [rsp+110h] [rbp-1050h] BYREF
  unsigned __int64 v48; // [rsp+1128h] [rbp-38h]

  v48 = __readfsqword(0x28u);
  traceFilter.m_nInteractsExclude = 0;
  traceFilter.m_nInteractsAs = 0;
  *(&traceFilter.RnQueryShapeAttr_t + 31) = *(&traceFilter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  traceFilter.m_nObjectSetMask = 7;
  traceFilter.m_nInteractsWith = 1601537;
  traceFilter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(pAttacker);
  traceFilter.m_nHierarchyId = HierarchyIDFromBaseEntity(pAttacker);
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  traceFilter.m_nCollisionGroup = collisionGroup;
  results.m_list.m_Size = 0;
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  CGamePhysicsQueryInterface::EntitiesAlongRay(g_pPhysicsQuery, ray, &traceFilter, &results);
  m_Size = results.m_list.m_Size;
  pReturnedEntity = 0;
  for ( i = (results.m_list.m_Size << 6) - 64; --m_Size >= 0; i -= 64 )
  {
    LODWORD(info._vptr_CTakeDamageInfo) = *(&results.m_list.m_Memory.m_pMemory->m_ShapeAttributes.m_nEntityId + i);
    if ( (LODWORD(info._vptr_CTakeDamageInfo) + 2) > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info._vptr_CTakeDamageInfo) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[info._vptr_CTakeDamageInfo & 0x1FF];
        if ( v13 != 0 && LODWORD(info._vptr_CTakeDamageInfo) == v13->m_EHandle.m_Index )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0 && CBaseEntity::GetDamageOptions(v13->m_pInstance) != DamageOptions_t::DAMAGE_NO )
          {
            m_Index = dmgInfo->m_hAttacker.m_Index;
            v16 = 0;
            v17 = CEntityHandle::gm_pEntityList;
            if ( m_Index + 2 > 1 )
            {
              v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(dmgInfo->m_hAttacker.m_Index) >> 9) & 0x3F];
              if ( v18 != 0 )
              {
                v19 = dmgInfo->m_hAttacker.m_Index & 0x1FF;
                v17 = (8 * v19);
                v20 = &v18[v19];
                if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
                  v16 = v20->m_pInstance;
              }
            }
            info._vptr_CTakeDamageInfo = COERCE_INT_((*(v16->_vptr_IHandleEntity + 62))(v16, v17));
            info.m_vecDamageForce.x = v21;
            *&vecForceOrigin.x = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
            vecForceOrigin.z = v22;
            attackDir.y = vecForceOrigin.y - *(&info._vptr_CTakeDamageInfo + 1);
            attackDir.z = v22 - info.m_vecDamageForce.x;
            attackDir.x = vecForceOrigin.x - *&info._vptr_CTakeDamageInfo;
            VectorNormalize(&attackDir);
            CTakeDamageInfo::CTakeDamageInfo(&info, dmgInfo);
            v23 = 0;
            v24 = CEntityHandle::gm_pEntityList;
            if ( info.m_hAttacker.m_Index + 2 > 1 )
            {
              v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
              if ( v25 != 0 )
              {
                v26 = info.m_hAttacker.m_Index & 0x1FF;
                v24 = (8 * v26);
                v27 = &v25[v26];
                if ( v27 != 0 && info.m_hAttacker.m_Index == v27->m_EHandle.m_Index )
                  v23 = v27->m_pInstance;
              }
            }
            *&vecForceOrigin.x = (*(v23->_vptr_IHandleEntity + 62))(v23, v24);
            vecForceOrigin.z = v28;
            CalculateMeleeDamageForce(&info, &attackDir, &vecForceOrigin, flForceScale);
            v29 = 0;
            v30 = CEntityHandle::gm_pEntityList;
            if ( info.m_hAttacker.m_Index + 2 > 1 )
            {
              v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
              if ( v31 != 0 )
              {
                v32 = info.m_hAttacker.m_Index & 0x1FF;
                v30 = (8 * v32);
                v33 = &v31[v32];
                if ( v33 != 0 && info.m_hAttacker.m_Index == v33->m_EHandle.m_Index )
                  v29 = v33->m_pInstance;
              }
            }
            pBCC = (*(v29->_vptr_IHandleEntity + 147))(v29, v30);
            if ( (*(m_pInstance->_vptr_IHandleEntity + 147))(m_pInstance) != 0 && pBCC != 0 )
            {
              if ( bDamageAnyNPC || (*(pBCC->_vptr_IHandleEntity + 344))(pBCC, m_pInstance) == 1 )
              {
                if ( info.m_flDamage != 0.0 )
                  CBaseEntity::TakeDamage(m_pInstance, &info);
                v34 = 0;
                if ( info.m_hAttacker.m_Index + 2 > 1 )
                {
                  v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hAttacker.m_Index) >> 9) & 0x3F];
                  if ( v35 != 0 )
                  {
                    v36 = &v35[info.m_hAttacker.m_Index & 0x1FF];
                    if ( v36 != 0 && info.m_hAttacker.m_Index == v36->m_EHandle.m_Index )
                      v34 = v36->m_pInstance;
                  }
                }
                vecForceOrigin = info.m_vecDamagePosition;
                CSoundEnt::InsertSound(1, &vecForceOrigin, 200, 0.2, v34, 0, 0);
                pReturnedEntity = m_pInstance;
              }
            }
            else
            {
              Pickup_ForcePlayerToDropThisObject(m_pInstance);
              if ( info.m_flDamage != 0.0 )
                CBaseEntity::TakeDamage(m_pInstance, &info);
            }
            CTakeDamageInfo::~CTakeDamageInfo(&info);
          }
        }
      }
    }
  }
  results.m_list.m_Size = 0;
  v37 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v37 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v37 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return pReturnedEntity;
}


// CBaseCombatCharacter::CheckTraceHullAttack  (line 1155, @0x0000000002167550, libserver.so)  // inlines: FastSqrt, GetBool, GetInt, Init, Length, LengthSqr, Ray_t, VectorAdd, VectorAligned, VectorLength, VectorSubtract, WorldSpaceAABB, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator-, operator=
// calls: CTakeDamageInfo::CTakeDamageInfo, PerformMeleeAttackTest, CTakeDamageInfo::~CTakeDamageInfo, VectorNormalize, NDebugOverlay::BoxDirection, CBaseEntity::GetAbsOrigin, CCollisionProperty::CollisionAABBToWorldAABB, _Unwind_Resume
CBaseEntity *__fastcall CBaseCombatCharacter::CheckTraceHullAttack(
        CBaseCombatCharacter *const this,
        const Vector *const vStart,
        const Vector *const vEnd,
        const Vector *const mins,
        const Vector *const maxs,
        float flDamage,
        int iDmgType,
        float flForceScale,
        bool bDamageAnyNPC)
{
  float v9; // xmm2_4
  int v10; // eax
  float x; // xmm5_4
  float y; // xmm4_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm11_4
  float v23; // xmm10_4
  float v24; // xmm9_4
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm1_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  CBaseEntity *v32; // rbx
  vec_t v34; // xmm1_4
  float z; // xmm0_4
  vec_t v36; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm9_4
  float v41; // xmm8_4
  float v42; // xmm6_4
  float v43; // xmm5_4
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm5_4
  bool v47; // zf
  float v48; // xmm2_4
  float v49; // xmm7_4
  float v50; // xmm2_4
  int iDmgTypeb; // [rsp+18h] [rbp-158h]
  float flDamageb; // [rsp+1Ch] [rbp-154h]
  float flLength; // [rsp+30h] [rbp-140h]
  Vector vecMins; // [rsp+40h] [rbp-130h] BYREF
  Vector vecMaxs; // [rsp+50h] [rbp-120h] BYREF
  Vector vDirection; // [rsp+60h] [rbp-110h] BYREF
  int v60; // [rsp+6Ch] [rbp-104h]
  float v61; // [rsp+70h] [rbp-100h]
  float v62; // [rsp+74h] [rbp-FCh]
  float v63; // [rsp+78h] [rbp-F8h]
  int v64; // [rsp+7Ch] [rbp-F4h]
  float v65; // [rsp+80h] [rbp-F0h]
  float v66; // [rsp+84h] [rbp-ECh]
  float v67; // [rsp+88h] [rbp-E8h]
  int v68; // [rsp+8Ch] [rbp-E4h]
  float v69; // [rsp+90h] [rbp-E0h]
  float v70; // [rsp+94h] [rbp-DCh]
  float v71; // [rsp+98h] [rbp-D8h]
  int v72; // [rsp+9Ch] [rbp-D4h]
  int v73; // [rsp+A0h] [rbp-D0h]
  bool v74; // [rsp+A4h] [rbp-CCh]
  bool v75; // [rsp+A5h] [rbp-CBh]
  Vector vHullMaxs; // [rsp+B0h] [rbp-C0h] BYREF

  v9 = flDamage;
  v10 = iDmgType;
  if ( ai_show_hull_attacks.m_pParent->m_Value.m_nValue != 0 )
  {
    v34 = vEnd->y - vStart->y;
    z = vEnd->z;
    vDirection.x = vEnd->x - vStart->x;
    v36 = z - vStart->z;
    vDirection.y = v34;
    vDirection.z = v36;
    flLength = fsqrt(((vDirection.x * vDirection.x) + (v34 * v34)) + (v36 * v36));
    VectorNormalize(&vDirection);
    vHullMaxs = *maxs;
    vHullMaxs.x = flLength + vHullMaxs.x;
    NDebugOverlay::BoxDirection(vStart, mins, &vHullMaxs, &vDirection, 100, 255, 255, 20, 1.0);
    NDebugOverlay::BoxDirection(vStart, mins, maxs, &vDirection, 255, 0, 0, 20, 1.0);
    v10 = iDmgType;
    v9 = flDamage;
  }
  CTakeDamageInfo::CTakeDamageInfo(&vHullMaxs, this, this, v9, v10, 0);
  x = vStart->x;
  y = vStart->y;
  v18 = vEnd->x;
  v60 = 0;
  v19 = vEnd->y;
  v64 = 0;
  v20 = vStart->z;
  v68 = 0;
  v21 = vEnd->z;
  v72 = 0;
  v22 = maxs->x;
  v73 = 0;
  v61 = v18 - x;
  v62 = v19 - y;
  v23 = mins->x;
  v24 = maxs->y;
  v63 = v21 - v20;
  v25 = mins->y;
  v26 = maxs->z;
  v27 = v26;
  v28 = mins->z;
  v70 = (v24 - v25) * 0.5;
  v29 = v26 + v28;
  v69 = (v22 - v23) * 0.5;
  v71 = (v27 - v28) * 0.5;
  v75 = (((v61 * v61) + (v62 * v62)) + (v63 * v63)) != 0.0;
  v30 = (v22 + v23) * 0.5;
  v74 = (((v69 * v69) + (v70 * v70)) + (v71 * v71)) < 0.000001;
  v31 = (v24 + v25) * 0.5;
  vDirection.x = x + v30;
  vDirection.y = y + v31;
  v67 = -(0.5 * v29);
  vDirection.z = v20 + (0.5 * v29);
  v65 = -v30;
  v66 = -v31;
  v32 = PerformMeleeAttackTest(&vDirection, this, 0x10u, &vHullMaxs, flForceScale, bDamageAnyNPC);
  if ( v32 != 0 )
    goto LABEL_4;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  flDamageb = AbsOrigin->x;
  iDmgTypeb = SLODWORD(AbsOrigin->y);
  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &vecMins,
    &vecMaxs);
  v73 = 0;
  v38 = vEnd->z;
  v39 = vEnd->y - *&iDmgTypeb;
  v40 = maxs->x;
  v61 = vEnd->x - flDamageb;
  v41 = mins->x;
  v62 = v39;
  v42 = mins->y;
  v43 = maxs->z;
  v44 = mins->z;
  v63 = v38 - (vecMaxs.z + 1.0);
  v45 = v43 - v44;
  v46 = v43 + v44;
  v47 = (((v61 * v61) + (v39 * v39)) + (v63 * v63)) == 0.0;
  v48 = maxs->y;
  v49 = v48 + v42;
  v71 = v45 * 0.5;
  v75 = !v47;
  v69 = (v40 - v41) * 0.5;
  v70 = (v48 - v42) * 0.5;
  v74 = (((v69 * v69) + (v70 * v70)) + (v71 * v71)) < 0.000001;
  v50 = (v40 + v41) * 0.5;
  vDirection.z = (vecMaxs.z + 1.0) + (0.5 * v46);
  vDirection.x = flDamageb + v50;
  vDirection.y = *&iDmgTypeb + (0.5 * v49);
  v65 = -v50;
  v67 = -(0.5 * v46);
  v66 = -(0.5 * v49);
  v32 = PerformMeleeAttackTest(&vDirection, this, 0x10u, &vHullMaxs, flForceScale, bDamageAnyNPC);
  if ( v32 != 0 )
  {
LABEL_4:
    if ( (*(v32->_vptr_IHandleEntity + 89))(v32, this) == 0 )
      v32 = 0;
  }
  CTakeDamageInfo::~CTakeDamageInfo(&vHullMaxs);
  return v32;
}


// CBaseCombatCharacter::Event_Gibbed  (line 1203, @0x000000000213f250, libserver.so)  // inlines: GetInt
// calls: ConVarRef::ConVarRef, ConVarRef::IsValid, CBaseEntity::SetDamageOptions, CBaseEntity::SetLifeState, CBaseEntity::AddEffects
// strings: "violence_hgibs", "violence_agibs"
bool __fastcall CBaseCombatCharacter::Event_Gibbed(CBaseCombatCharacter *const this, const CTakeDamageInfo *const info)
{
  const char *v4; // rsi
  bool v5; // r12
  ConVarRef violence_agibs; // [rsp+0h] [rbp-30h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 332))(this) != 0 )
  {
    v4 = "violence_hgibs";
  }
  else
  {
    if ( (*(this->_vptr_IHandleEntity + 333))(this) == 0 )
    {
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
      (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
      CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
      goto LABEL_9;
    }
    v4 = "violence_agibs";
  }
  ConVarRef::ConVarRef(&violence_agibs, v4);
  v5 = 0;
  if ( ConVarRef::IsValid(&violence_agibs) )
    v5 = violence_agibs.m_pConVarState->m_Value.m_nValue == 0;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DEAD);
  if ( v5 )
  {
    (*(this->_vptr_IHandleEntity + 331))(this);
    return 0;
  }
LABEL_9:
  CBaseEntity::AddEffects(this, 32);
  return (*(this->_vptr_IHandleEntity + 330))(this, info);
}


// CBaseCombatCharacter::CalcDeathForceVector  (line 1241, @0x00000000021489f0, libserver.so)  // inlines: Get, GetAttacker, GetDamageForce, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, OBBSize, VectorAdd, VectorMultiply, VectorSubtract, WorldAlignSize, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator*, operator*=, operator+, operator-, operator=
// calls: CBaseEntity::GetLocalOrigin, VectorNormalize, CBaseEntity::VPhysicsGetObject
// globals: CEntityHandle::gm_pEntityList
Vector __fastcall CBaseCombatCharacter::CalcDeathForceVector(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  char v4; // al
  float y; // xmm1_4
  double v6; // xmm2_8
  uint32 m_Index; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // r14
  const Vector *v16; // rbx
  const Vector *v17; // rax
  vec_t v18; // xmm2_4
  vec_t v19; // xmm0_4
  float x; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  __m128d v27; // xmm2
  const Vector *LocalOrigin; // rbx
  CCollisionProperty *m_pCollision; // rax
  float z; // xmm0_4
  const Vector *v31; // rax
  vec_t v32; // xmm2_4
  vec_t v33; // xmm3_4
  IPhysicsObject *Object; // rbx
  vec_t v35; // xmm1_4
  double v36; // xmm0_8
  vec_t v37; // xmm0_4
  double v38; // xmm0_8
  float v39; // [rsp+8h] [rbp-58h]
  float forceScalea; // [rsp+Ch] [rbp-54h]
  float forceScale; // [rsp+Ch] [rbp-54h]
  Vector forceVector; // [rsp+20h] [rbp-40h] BYREF
  Vector v43; // [rsp+30h] [rbp-30h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = (*(g_pGameRules->_vptr_CGameRules + 25))(g_pGameRules, info->m_bitsDamageType);
  y = info->m_vecDamageForce.y;
  *&v6 = LODWORD(info->m_vecDamageForce.z);
  if ( info->m_vecDamageForce.x == vec3_origin.x && y == vec3_origin.y && *&v6 == vec3_origin.z && v4 == 0 )
  {
    m_Index = info->m_hInflictor.m_Index;
    if ( m_Index + 2 > 1
      && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F]) != 0
      && (v11 = &v10[info->m_hInflictor.m_Index & 0x1FF]) != 0
      && m_Index == v11->m_EHandle.m_Index
      && (m_pInstance = v11->m_pInstance, v11->m_pInstance != 0)
      || (v12 = info->m_hAttacker.m_Index) + 2 > 1
      && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F]) != 0
      && (v14 = &v13[info->m_hAttacker.m_Index & 0x1FF]) != 0
      && v12 == v14->m_EHandle.m_Index
      && (m_pInstance = v14->m_pInstance, v14->m_pInstance != 0) )
    {
      if ( (info->m_bitsDamageType & 0x40) != 0 )
      {
        forceScale = (75.0 * info->m_flDamage) * 4.0;
        LocalOrigin = CBaseEntity::GetLocalOrigin(m_pInstance);
        m_pCollision = this->m_pCollision;
        if ( m_pCollision != 0 )
          z = m_pCollision->m_vecMaxs.m_Value.z - m_pCollision->m_vecMins.m_Value.z;
        else
          z = vec3_origin.z;
        v39 = z;
        v31 = CBaseEntity::GetLocalOrigin(this);
        v32 = (v31->y + 0.0) - LocalOrigin->y;
        v33 = (v31->x + 0.0) - LocalOrigin->x;
        forceVector.z = (v39 + v31->z) - LocalOrigin->z;
        forceVector.y = v32;
        forceVector.x = v33;
        VectorNormalize(&forceVector);
        v22 = forceVector.z * 1.375;
        v23 = forceScale;
        v21 = forceVector.y * 1.375;
        x = 1.375 * forceVector.x;
      }
      else if ( this == m_pInstance )
      {
        forceVector.x = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        v37 = (*(*random_valve + 8LL))(random_valve, -1.0, 1.0);
        forceVector.z = 0.0;
        forceVector.y = v37;
        v38 = (*(*random_valve + 8LL))(random_valve, 1000.0, 2000.0);
        x = forceVector.x;
        v23 = *&v38;
        v22 = 0.0;
        v21 = forceVector.y;
      }
      else if ( BYTE5(m_pInstance[7]._vptr_IHandleEntity) == 6 )
      {
        Object = CBaseEntity::VPhysicsGetObject(this);
        if ( Object == 0 )
          Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
        *&v43.x = (*(*Object + 1688LL))(Object);
        forceVector = v43;
        v43.z = v35;
        v36 = (*(*Object + 208LL))(Object);
        x = v43.x;
        v23 = *&v36;
        v22 = forceVector.z;
        v21 = v43.y;
      }
      else
      {
        forceScalea = (75.0 * info->m_flDamage) * 4.0;
        v16 = CBaseEntity::GetLocalOrigin(m_pInstance);
        v17 = CBaseEntity::GetLocalOrigin(this);
        v18 = v17->y - v16->y;
        v19 = v17->z - v16->z;
        forceVector.x = v17->x - v16->x;
        forceVector.y = v18;
        forceVector.z = v19;
        VectorNormalize(&forceVector);
        x = forceVector.x;
        v21 = forceVector.y;
        v22 = forceVector.z;
        v23 = forceScalea;
      }
      v43.x = x * v23;
      v43.y = v21 * v23;
      v43.z = v23 * v22;
    }
    else
    {
      v43 = vec3_origin;
    }
  }
  else if ( (info->m_bitsDamageType & 0x40) != 0 )
  {
    v24 = (*(*random_valve + 8LL))(random_valve, 0.85000002, 1.15, v6);
    v25 = info->m_vecDamageForce.z;
    v26 = info->m_vecDamageForce.y * v24;
    v27 = 0x3FF2666666666666uLL;
    if ( v25 <= 0.0 )
    {
      v27.m128d_f64[0] = v24;
      v27.m128d_f64[1] = v24;
    }
    v27.m128d_f64[0] = v27.m128d_f64[0] * v25;
    v43.x = info->m_vecDamageForce.x * v24;
    v43.y = v26;
    v43.z = _mm_movedup_pd(v27).m128d_f64[0];
  }
  else
  {
    v43.x = info->m_vecDamageForce.x;
    v43.y = y;
    v43.z = *&v6;
  }
  *&result.x = *&v43.x;
  result.z = v43.z;
  return result;
}


// CBaseCombatCharacter::FixupBurningServerRagdoll  (line 1328, @0x0000000002146ee0, libserver.so)  // inlines: AddEFlags, CEntityHandle, DispatchUpdateTransmitState, Get, GetEffectEntity, GetEntryIndex, GetHandleEntity, GetInstance, GetRenderColor, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, b, g, r
// calls: __dynamic_cast, CBaseEntity::SetEffectEntity, CBaseEntity::AddFlag, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CEntityFlame::AttachToEntity, CBaseEntity::DispatchUpdateTransmitState
// globals: `typeinfo for'CBaseEntity
void __fastcall CBaseCombatCharacter::FixupBurningServerRagdoll(
        CBaseCombatCharacter *const this,
        CBaseModelEntity *pRagdoll)
{
  unsigned __int16 v4; // dx
  int v5; // esi
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityFlame *v9; // r13
  const Vector *AbsOrigin; // rax
  unsigned __int8 v11; // r15
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // r13
  unsigned __int8 v14; // r12

  if ( (this->m_fFlags.m_Value & 0x8000000) != 0 )
  {
    if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
    {
      v4 = 0x7FFF;
      v5 = 0x7FFF;
    }
    else
    {
      v4 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
      v5 = v4;
    }
    v6 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v4 & 0x7FFF;
    if ( v6 + 2 > 1 )
    {
      v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
      if ( v7 != 0 )
      {
        v8 = &v7[v5 & 0x1FF];
        if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        {
          v9 = __dynamic_cast(v8->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0);
          if ( v9 != 0 )
          {
            CBaseEntity::SetEffectEntity(this, 0);
            CBaseEntity::AddFlag(pRagdoll, 0x8000000);
            AbsOrigin = CBaseEntity::GetAbsOrigin(pRagdoll);
            CBaseEntity::SetAbsOrigin(v9, AbsOrigin);
            CEntityFlame::AttachToEntity(v9, pRagdoll);
            v9->m_iEFlags |= 0x80u;
            if ( v9->m_pEntity != 0 )
              CBaseEntity::DispatchUpdateTransmitState(v9);
            CBaseEntity::SetEffectEntity(pRagdoll, v9);
            v11 = this->m_clrRender.m_Value._color[0];
            v12 = this->m_clrRender.m_Value._color[1];
            v13 = this->m_clrRender.m_Value._color[2];
            v14 = pRagdoll->m_clrRender.m_Value._color[3];
            if ( v11 != pRagdoll->m_clrRender.m_Value._color[0] )
            {
              (*(pRagdoll->_vptr_IHandleEntity + 22))(pRagdoll, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pRagdoll->m_clrRender.m_Value._color[0] = v11;
            }
            if ( v12 != pRagdoll->m_clrRender.m_Value._color[1] )
            {
              (*(pRagdoll->_vptr_IHandleEntity + 22))(pRagdoll, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pRagdoll->m_clrRender.m_Value._color[1] = v12;
            }
            if ( v13 != pRagdoll->m_clrRender.m_Value._color[2] )
            {
              (*(pRagdoll->_vptr_IHandleEntity + 22))(pRagdoll, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pRagdoll->m_clrRender.m_Value._color[2] = v13;
            }
            if ( v14 != pRagdoll->m_clrRender.m_Value._color[3] )
            {
              (*(pRagdoll->_vptr_IHandleEntity + 22))(pRagdoll, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              pRagdoll->m_clrRender.m_Value._color[3] = v14;
            }
          }
        }
      }
    }
  }
}


// CBaseCombatCharacter::BecomeRagdoll  (line 1352, @0x000000000215f220, libserver.so)  // inlines: GetDamagePosition, SetDamageForce, SetDamagePosition, WorldAlignMins, operator=
// calls: CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetAbsOrigin, CreateServerRagdoll, CBaseEntity::RemoveDeferred, _Unwind_Resume
// callers: NextBotCombatCharacter::BecomeRagdoll
bool __fastcall CBaseCombatCharacter::BecomeRagdoll(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info,
        const Vector *const forceVector)
{
  int (**vptr_IHandleEntity)(...); // rax
  char v7; // al
  vec_t v8; // r15d
  float v9; // r14d
  const Vector *AbsOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  float v12; // r13d
  const Vector *v13; // rax
  float v14; // xmm0_4
  CBaseModelEntity *v15; // rax
  char infoc; // [rsp+8h] [rbp-C8h]
  const CTakeDamageInfo *infoa; // [rsp+8h] [rbp-C8h]
  vec_t infob; // [rsp+8h] [rbp-C8h]
  CTakeDamageInfo info2; // [rsp+10h] [rbp-C0h] BYREF

  if ( (info->m_bitsDamageType & 0x10) == 0
    || (infoa = info, v7 = (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules), info = infoa, v7 != 0) )
  {
    CTakeDamageInfo::CTakeDamageInfo(&info2, info);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info2.m_vecDamageForce = *forceVector;
    infoc = vptr_IHandleEntity[236](this, forceVector);
    CTakeDamageInfo::~CTakeDamageInfo(&info2);
    return infoc;
  }
  else
  {
    CTakeDamageInfo::CTakeDamageInfo(&info2, infoa);
    info2.m_vecDamageForce = *forceVector;
    infob = info2.m_vecDamagePosition.x;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(info2.m_vecDamagePosition.y)));
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(info2.m_vecDamagePosition.z)));
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pCollision = this->m_pCollision;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->z)));
    if ( m_pCollision != 0 )
      v13 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
    else
      v13 = &vec3_origin;
    v14 = v12 + v13->z;
    if ( (v9 - v14) < 24.0 )
    {
      info2.m_vecDamagePosition.y = v8;
      info2.m_vecDamagePosition.x = infob;
      info2.m_vecDamagePosition.z = v14 + 24.0;
    }
    v15 = CreateServerRagdoll(this, this->m_nForceBone.m_Value, &info2, 6, 1);
    (*(this->_vptr_IHandleEntity + 340))(this, v15);
    CBaseEntity::RemoveDeferred(this);
    CTakeDamageInfo::~CTakeDamageInfo(&info2);
    return 1;
  }
}


// CBaseCombatCharacter::Event_Killed  (line 1421, @0x000000000216c6d0, libserver.so)  // inlines: CEntityHandle, Get, GetAttacker, GetBool, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, VectorMultiply, curtime, operator CBaseCombatWeapon*, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+=
// calls: CBaseEntity::SetLifeState, CRagdollMagnet::FindBestMagnet, CRagdollMagnet::GetForceVector, CBaseEntity::EmitSound, CBaseEntity::SendOnKilledGameEvent, CBaseEntity::VPhysicsGetObject, CEntityHandle::GetHandleEntity, CServerEventQueue::AddEvent
// callers: CBasePlayer::Event_Killed
// strings: "BaseCombatCharacter.StopWeaponSounds"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::Event_Killed(CBaseCombatCharacter *const this, const CTakeDamageInfo *const info)
{
  vec_t v4; // xmm1_4
  CRagdollMagnet *BestMagnet; // rax
  CEntityInstance *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  void (__fastcall *v10)(CEntityInstance *, _QWORD, _QWORD, _QWORD, _QWORD, double, double, float); // r14
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc v12; // rax
  double v13; // xmm0_8
  unsigned __int16 v14; // dx
  int v15; // esi
  vec_t v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  IPhysicsObject *Object; // rax
  float v20; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  uint32 v22; // ecx
  bool v23; // zf
  int (*v24)(...); // r8
  unsigned __int16 v25; // dx
  int v26; // edi
  CEntityInstance *v27; // rsi
  int v28; // eax
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CGlobalVars *v31; // r15
  _BOOL4 v32; // r14d
  __int64 (__fastcall *v33)(CBaseCombatCharacter *const, _QWORD, _QWORD, _BOOL4, _QWORD, double, double, float); // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  double v35; // xmm0_8
  double v36; // xmm0_8
  void (__fastcall *v37)(CEntityInstance *, _QWORD, _QWORD, _BOOL4, _QWORD, double, double, float); // r10
  CGlobalVars *v38; // rax
  FnGlobalVarsWarningFunc v39; // rdx
  IHandleEntity *HandleEntity; // rax
  uint32 v41; // eax
  CBaseEntity *v42; // rsi
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CGlobalVars *v45; // [rsp+8h] [rbp-78h]
  void (__fastcall *v46)(CEntityInstance *, _QWORD, _QWORD, _BOOL4, _QWORD, double, double, float); // [rsp+10h] [rbp-70h]
  __int64 (__fastcall *bRagdollCreateda)(CBaseCombatCharacter *const, _QWORD, _QWORD, _BOOL4, _QWORD, double, double, float); // [rsp+18h] [rbp-68h]
  char bRagdollCreated; // [rsp+18h] [rbp-68h]
  Vector forceVector; // [rsp+30h] [rbp-50h] BYREF
  Vector weaponForce; // [rsp+40h] [rbp-40h] BYREF

  CBaseEntity::SetLifeState(this, LifeState_t::LIFE_DYING);
  *&forceVector.x = (*(this->_vptr_IHandleEntity + 328))(this, info);
  forceVector.z = v4;
  BestMagnet = CRagdollMagnet::FindBestMagnet(this);
  if ( BestMagnet != 0 )
  {
    weaponForce = CRagdollMagnet::GetForceVector(BestMagnet, this);
    forceVector.z = weaponForce.z + forceVector.z;
    forceVector.x = forceVector.x + weaponForce.x;
    forceVector.y = forceVector.y + weaponForce.y;
  }
  m_pInstance = 0;
  if ( (*(this->_vptr_IHandleEntity + 335))(this) != 0 )
  {
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v14 = 0x7FFF;
      v15 = 0x7FFF;
    }
    else
    {
      v14 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v15 = v14;
    }
    m_pInstance = 0;
    LODWORD(v16) = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
    weaponForce.x = v16;
    if ( (LODWORD(v16) + 2) > 1 )
    {
      v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
      if ( v17 != 0 )
      {
        v18 = &v17[v15 & 0x1FF];
        if ( v18 != 0 && LODWORD(v16) == v18->m_EHandle.m_Index )
          m_pInstance = v18->m_pInstance;
      }
    }
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      Object = CBaseEntity::VPhysicsGetObject(this);
      v20 = (*(*Object + 1600LL))(Object);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      v22 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
      v23 = this->m_hActiveWeapon.m_Value.m_Index == -1;
      weaponForce.y = forceVector.y * v20;
      weaponForce.z = forceVector.z * v20;
      weaponForce.x = v20 * forceVector.x;
      v24 = vptr_IHandleEntity[309];
      if ( v23 )
      {
        v25 = 0x7FFF;
        v26 = 0x7FFF;
      }
      else
      {
        v25 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
        v26 = v25;
      }
      v27 = 0;
      v28 = (v22 << 15) | v25 & 0x7FFF;
      if ( (v28 + 2) > 1 )
      {
        v29 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v26 >> 9];
        if ( v29 != 0 )
        {
          v30 = &v29[v26 & 0x1FF];
          if ( v30 != 0 && v28 == v30->m_EHandle.m_Index )
            v27 = v30->m_pInstance;
        }
      }
      v24(this, v27, 0, &weaponForce);
    }
    else
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hActiveWeapon.m_Value);
      (*(this->_vptr_IHandleEntity + 309))(this, HandleEntity, 0, 0);
    }
  }
  CBaseEntity::EmitSound(this, "BaseCombatCharacter.StopWeaponSounds", 0.0, 0);
  m_Index = info->m_hAttacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[info->m_hAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
      {
        (*(v9->m_pInstance->_vptr_IHandleEntity + 93))(v9->m_pInstance, this, info);
        v41 = info->m_hAttacker.m_Index;
        v42 = 0;
        if ( v41 + 2 > 1 )
        {
          v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
          if ( v43 != 0 )
          {
            v44 = &v43[info->m_hAttacker.m_Index & 0x1FF];
            if ( v44 != 0 && v41 == v44->m_EHandle.m_Index )
              v42 = v44->m_pInstance;
          }
        }
        CServerEventQueue::AddEvent(&g_EventQueue, v42, "KilledNPC", 0.30000001, this, this, 0);
      }
    }
  }
  CBaseEntity::SendOnKilledGameEvent(this, info);
  if ( (*(this->_vptr_IHandleEntity + 334))(this, info) == 0 )
  {
    if ( (info->m_bitsDamageType & 0x4000000) == 0 || (*(this->_vptr_IHandleEntity + 237))(this) == 0 )
    {
      if ( (*(this->_vptr_IHandleEntity + 237))(this) == 0 )
        goto LABEL_13;
      goto LABEL_11;
    }
    v31 = gpGlobals;
    v32 = (info->m_bitsDamageType & 0x100) != 0;
    v33 = *(this->_vptr_IHandleEntity + 243);
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          bRagdollCreateda = *(this->_vptr_IHandleEntity + 243);
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v33 = bRagdollCreateda;
        }
      }
      *&v35 = LODWORD(v31->m_flCurrentTime);
    }
    else
    {
      v35 = 0.0;
    }
    bRagdollCreated = v33(this, 0, 0, v32, 0, v35, *&vec3_origin.x, vec3_origin.z);
    if ( m_pInstance != 0 )
    {
      v36 = 0.0;
      v37 = *(m_pInstance->_vptr_IHandleEntity + 243);
      v38 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v39 = gpGlobals->m_pfnWarningFunc;
          if ( v39 != 0 )
          {
            v45 = gpGlobals;
            v46 = *(m_pInstance->_vptr_IHandleEntity + 243);
            (v39)(1, 0.0);
            v38 = v45;
            v37 = v46;
          }
        }
        *&v36 = LODWORD(v38->m_flCurrentTime);
      }
      v37(m_pInstance, 0, 0, v32, 0, v36, *&vec3_origin.x, vec3_origin.z);
    }
    if ( (*(this->_vptr_IHandleEntity + 237))(this) != 0 && bRagdollCreated == 0 )
    {
LABEL_11:
      if ( (info->m_bitsDamageType & 0x400000) == 0 )
        (*(this->_vptr_IHandleEntity + 339))(this, info, &forceVector);
    }
  }
LABEL_13:
  if ( m_pInstance != 0 && hl_dissolve_all_dropped_weapons.m_pParent->m_Value.m_nValue != 0 )
  {
    v10 = *(m_pInstance->_vptr_IHandleEntity + 243);
    v11 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          v12(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      *&v13 = LODWORD(v11->m_flCurrentTime);
    }
    else
    {
      v13 = 0.0;
    }
    v10(m_pInstance, 0, 0, 0, 0, v13, *&vec3_origin.x, vec3_origin.z);
  }
  (*(this->_vptr_IHandleEntity + 365))(this);
}


// CBaseCombatCharacter::Event_Dying  (line 1531, @0x000000000213cf20, libserver.so)
// callers: CBasePlayer::Event_Dying
void __fastcall CBaseCombatCharacter::Event_Dying(CBaseCombatCharacter *const this)
{
  ;
}


// CBaseCombatCharacter::Weapon_Detach  (line 1539, @0x0000000002154dc0, libserver.so)  // inlines: CEntityHandle, ClearActiveWeapon, Element, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Remove, ShiftElementsLeft, V_memmove, memmove, operator CBaseCombatWeapon*, operator CEntityInstance*, operator[]
// calls: memmove, CBaseCombatWeapon::SetOwner, CBaseCombatCharacter::SetActiveWeapon
// callers: CBaseCombatCharacter::Weapon_Detach, CBaseCombatCharacter::DropWeaponForWeaponStrip, CBaseCombatCharacter::Weapon_Drop
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseCombatCharacter::Weapon_Detach(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  int m_Size; // edi
  int v5; // ebx
  CHandle<CBaseCombatWeapon> *i; // rax
  CBaseCombatWeapon *m_pInstance; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  bool result; // al
  int (**vptr_IHandleEntity)(...); // rax
  __int64 v12; // rdx
  unsigned __int16 v13; // dx
  int v14; // esi
  CBaseCombatWeapon *v15; // rcx
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx

  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  for ( i = this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory; ; ++i )
  {
    m_pInstance = 0;
    if ( i->m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[i->m_Index & 0x1FF];
        if ( v9 != 0 && i->m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    if ( pWeapon == m_pInstance )
      break;
    if ( ++v5 == m_Size )
      return 0;
  }
  if ( m_Size - v5 - 1 > 0 )
  {
    memmove(i, &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v5 + 1], 4LL * (m_Size - v5 - 1));
    m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  }
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_hMyWeapons.m_Vector.m_Size = m_Size - 1;
  vptr_IHandleEntity[22](this, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  while ( v5 < this->m_hMyWeapons.m_Vector.m_Size )
  {
    v12 = v5++;
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, v12, 0xFFFFFFFFLL);
  }
  CBaseCombatWeapon::SetOwner(pWeapon, 0);
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v13 = 0x7FFF;
    v14 = 0x7FFF;
  }
  else
  {
    v13 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v14 = v13;
  }
  v15 = 0;
  v16 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v13 & 0x7FFF;
  if ( v16 + 2 > 1 )
  {
    v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v14 >> 9];
    if ( v17 != 0 )
    {
      v18 = &v17[v14 & 0x1FF];
      if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
        v15 = v18->m_pInstance;
    }
  }
  result = 1;
  if ( pWeapon == v15 )
  {
    CBaseCombatCharacter::SetActiveWeapon(this, 0);
    return 1;
  }
  return result;
}


// CBaseCombatCharacter::Weapon_Detach  (line 1539, @0x0000000002154fd0, libserver.so)
// calls: CBaseCombatCharacter::Weapon_Detach
// callers: CStripWeapons::InputStripActiveWeapon, CStripWeapons::InputStripWeaponByClassname, CBasePlayer::RemovePlayerItem
bool __fastcall CBaseCombatCharacter::Weapon_Detach(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  return pWeapon != 0 && CBaseCombatCharacter::Weapon_Detach(this, pWeapon);
}


// CBaseCombatCharacter::ThrowDirForWeaponStrip  (line 1567, @0x00000000021500c0, libserver.so)  // inlines: CGameTrace, ClassMatches, CrossProduct, EnableInteractsWith, FClassnameIs, GetBool, GetFloat, GetInt, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CEntityIdentity::ClassMatches, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, MatrixBuildRotateZ, Vector3DMultiply, VectorNormalize
// callers: CBaseCombatCharacter::DropWeaponForWeaponStrip, CBaseCombatCharacter::Weapon_DropAll
// strings: "weapon_physcannon"
void __fastcall CBaseCombatCharacter::ThrowDirForWeaponStrip(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        const Vector *const vecForward,
        Vector *pVecThrowDir)
{
  Vector *v7; // r15
  double v8; // xmm0_8
  float z; // xmm4_4
  float v10; // xmm1_4
  float x; // xmm2_4
  float y; // xmm1_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm2_4
  ConVar *m_pParent; // rax
  float m_fValue; // xmm0_4
  float v21; // xmm1_4
  vec_t v22; // [rsp+Ch] [rbp-1E4h]
  float v23; // [rsp+10h] [rbp-1E0h]
  vec_t v24; // [rsp+14h] [rbp-1DCh]
  float v25; // [rsp+30h] [rbp-1C0h]
  float v26; // [rsp+34h] [rbp-1BCh]
  float v27; // [rsp+38h] [rbp-1B8h]
  float v28; // [rsp+3Ch] [rbp-1B4h]
  double vecOrigin; // [rsp+40h] [rbp-1B0h]
  float vecOrigin_8; // [rsp+48h] [rbp-1A8h]
  Vector vecTest[4]; // [rsp+50h] [rbp-1A0h] BYREF
  CTraceFilterSimple v32; // [rsp+80h] [rbp-170h] BYREF
  Ray_t v33; // [rsp+C0h] [rbp-130h] BYREF
  VMatrix zRot; // [rsp+110h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+178h] [rbp-78h]
  __int64 v36; // [rsp+180h] [rbp-70h]
  __int64 v37; // [rsp+188h] [rbp-68h]
  int v38; // [rsp+190h] [rbp-60h]
  __int16 v39; // [rsp+194h] [rbp-5Ch]
  char v40; // [rsp+196h] [rbp-5Ah]
  char v41; // [rsp+197h] [rbp-59h]

  if ( pWeapon != 0 && CEntityIdentity::ClassMatches(pWeapon->m_pEntity, "weapon_physcannon") )
  {
    if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
    {
      v7 = vecTest;
      v8 = (*(this->_vptr_IHandleEntity + 164))(this);
      z = vecForward->z;
      vecOrigin_8 = v10;
      x = vecForward->x;
      vecOrigin = v8;
      y = vecForward->y;
      v40 = 0;
      vecTest[0].x = x;
      vecTest[0].y = y;
      vecTest[0].z = z;
      vecTest[2].x = y - (0.0 * z);
      vecTest[2].y = (0.0 * z) - x;
      v35 = 0;
      vecTest[1].z = -z;
      vecTest[2].z = (0.0 * x) - (0.0 * y);
      vecTest[3].x = -vecTest[2].x;
      vecTest[3].y = -vecTest[2].y;
      vecTest[1].x = -x;
      vecTest[1].y = -y;
      vecTest[3].z = -vecTest[2].z;
      v36 = 0;
      v37 = 0;
      v41 = 7;
      v38 = 0;
      v39 = 0;
      CGameTrace::Init(&zRot);
      v13 = *&vecOrigin;
      v14 = *(&vecOrigin + 1);
      v15 = vecOrigin_8;
      v16 = 48.0;
      while ( 1 )
      {
        v17 = v7->x;
        v25 = v16;
        v18 = v7->z;
        v33.m_Start.x = v13;
        v24 = v17;
        m_pParent = phys_traceline_radius.m_pParent;
        v22 = v18;
        v23 = v7->y;
        v26 = v13;
        v33.m_Start.y = v14;
        m_fValue = m_pParent->m_Value.m_fValue;
        v27 = v14;
        v33.m_Start.z = v15;
        v33.m_flRadius = m_fValue;
        v28 = v15;
        v33.m_Start.w = 0.0;
        memset(&v33.m_Delta.w, 0, 36);
        v33.m_Delta.x = ((v17 * v16) + v13) - v13;
        v33.m_Delta.y = ((v23 * v16) + v14) - v14;
        v33.m_Delta.z = ((v18 * v16) + v15) - v15;
        v33.m_IsRay = 1;
        v33.m_IsSwept = (((v33.m_Delta.x * v33.m_Delta.x) + (v33.m_Delta.y * v33.m_Delta.y))
                       + (v33.m_Delta.z * v33.m_Delta.z)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&v32, this, 4, 0);
        v32.m_attr.m_nInteractsWith |= 0x7001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &v33, &v32, &zRot);
        v15 = v28;
        v14 = v27;
        v13 = v26;
        v16 = v25;
        if ( LOBYTE(zRot.m[3][2]) == 0 && zRot.m[2][3] == 1.0 )
          break;
        if ( ++v7 == &v32 )
          goto LABEL_4;
      }
      pVecThrowDir->x = v24;
      pVecThrowDir->y = v23;
      pVecThrowDir->z = v22;
    }
    else
    {
LABEL_4:
      pVecThrowDir->x = vecForward->x;
      pVecThrowDir->y = vecForward->y;
      pVecThrowDir->z = vecForward->z;
    }
  }
  else
  {
    (*(*random_valve + 8LL))(random_valve, -60.0, 60.0);
    MatrixBuildRotateZ(&zRot, v21);
    Vector3DMultiply(&zRot, vecForward, pVecThrowDir);
    pVecThrowDir->z = (*(*random_valve + 8LL))(random_valve, -0.5, 0.5);
    VectorNormalize(pVecThrowDir);
  }
}


// CBaseCombatCharacter::DropWeaponForWeaponStrip  (line 1623, @0x0000000002154ff0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Negate, Ray_t, RnCollisionAttr_t, SetRemoveable, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAligned, VectorClear, VectorCopy, VectorMA, VectorSubtract, Weapon_Detach, operator*=
// calls: CCollisionProperty::RandomPointInBounds, CBaseCombatCharacter::ThrowDirForWeaponStrip, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CBaseCombatCharacter::Weapon_Detach
// callers: CBaseCombatCharacter::Weapon_DropAll
void __fastcall CBaseCombatCharacter::DropWeaponForWeaponStrip(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        const Vector *const vecForward,
        const QAngle *const vecAngles,
        float flDiameter)
{
  float v7; // xmm0_4
  float m_fValue; // xmm4_4
  float v9; // xmm0_4
  float v10; // [rsp+8h] [rbp-1A8h]
  float flDiameterb; // [rsp+Ch] [rbp-1A4h]
  Vector vecOrigin; // [rsp+20h] [rbp-190h] BYREF
  Vector vecThrow; // [rsp+30h] [rbp-180h] BYREF
  CTraceFilterSimple v17; // [rsp+40h] [rbp-170h] BYREF
  Ray_t vecNormalizedMins; // [rsp+80h] [rbp-130h] BYREF
  trace_t tr; // [rsp+D0h] [rbp-E0h] BYREF

  tr.startpos.x = 0.5;
  tr.startpos.y = 0.5;
  tr.startpos.z = 1.0;
  vecNormalizedMins.m_Start.x = 0.5;
  vecNormalizedMins.m_Start.y = 0.5;
  vecNormalizedMins.m_Start.z = 0.5;
  CCollisionProperty::RandomPointInBounds(&this->m_Collision, &vecNormalizedMins.m_Start, &tr.startpos, &vecOrigin);
  CBaseCombatCharacter::ThrowDirForWeaponStrip(this, pWeapon, vecForward, &vecThrow);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  v7 = (flDiameter * vecThrow.z) + vecOrigin.z;
  v10 = (vecThrow.x * flDiameter) + vecOrigin.x;
  flDiameterb = (vecThrow.y * flDiameter) + vecOrigin.y;
  *&vecForward = v7;
  CGameTrace::Init(&tr);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  vecNormalizedMins.m_Delta.x = v10 - vecOrigin.x;
  vecNormalizedMins.m_Start.w = 0.0;
  vecNormalizedMins.m_flRadius = m_fValue;
  vecNormalizedMins.m_Delta.y = flDiameterb - vecOrigin.y;
  memset(&vecNormalizedMins.m_Delta.w, 0, 36);
  vecNormalizedMins.m_Delta.z = *&vecForward - vecOrigin.z;
  vecNormalizedMins.m_Start.Vector = vecOrigin;
  vecNormalizedMins.m_IsRay = 1;
  vecNormalizedMins.m_IsSwept = (((vecNormalizedMins.m_Delta.x * vecNormalizedMins.m_Delta.x)
                                + (vecNormalizedMins.m_Delta.y * vecNormalizedMins.m_Delta.y))
                               + (vecNormalizedMins.m_Delta.z * vecNormalizedMins.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v17, this, 4, 0);
  v17.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vecNormalizedMins, &v17, &tr);
  if ( tr.startsolid || tr.fraction < 1.0 && tr.m_pEnt != pWeapon )
  {
    vecThrow.x = -vecThrow.x;
    vecThrow.y = -vecThrow.y;
    vecThrow.z = -vecThrow.z;
  }
  v9 = (*(*random_valve + 8LL))(random_valve, 400.0, 600.0);
  vecThrow.x = vecThrow.x * v9;
  vecThrow.y = vecThrow.y * v9;
  vecThrow.z = v9 * vecThrow.z;
  CBaseEntity::SetAbsOrigin(pWeapon, &vecOrigin);
  CBaseEntity::SetAbsAngles(pWeapon, vecAngles);
  (*(pWeapon->_vptr_IHandleEntity + 255))(pWeapon, &vecThrow);
  pWeapon->m_bRemoveable = 0;
  CBaseCombatCharacter::Weapon_Detach(this, pWeapon);
}


// CBaseCombatCharacter::Weapon_DropAll  (line 1660, @0x00000000021553b0, libserver.so)  // inlines: CEntityHandle, Get, GetActiveWeapon, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, OBBSize, SetRemoveable, VectorSubtract, operator CBaseCombatWeapon*, operator CEntityInstance*, operator*=, operator-, operator[]
// calls: VectorAngles, AngleVectors, CBaseCombatCharacter::ThrowDirForWeaponStrip, CCollisionProperty::RemoveTriggerCollisionGroup, sqrtf, CBaseCombatCharacter::DropWeaponForWeaponStrip, CBaseEntity::VPhysicsGetObject
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::Weapon_DropAll(CBaseCombatCharacter *const this, bool bDisallowWeaponPickup)
{
  __int64 v3; // r12
  int v4; // r13d
  CHandle<CBaseCombatWeapon> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  vec_t v12; // xmm1_4
  float v13; // xmm2_4
  unsigned __int16 v14; // dx
  int v15; // esi
  CBaseCombatWeapon *m_pInstance; // r15
  vec_t v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  __int64 v20; // r10
  int v21; // r11d
  unsigned __int16 *v22; // rdx
  int v23; // eax
  __int16 v24; // cx
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  float v27; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  IPhysicsObject *Object; // rax
  double v30; // xmm0_8
  double v31; // xmm1_8
  CBaseCombatWeapon *v32; // [rsp+0h] [rbp-90h]
  __int64 v33; // [rsp+8h] [rbp-88h]
  float v34; // [rsp+8h] [rbp-88h]
  int v35; // [rsp+10h] [rbp-80h]
  __int64 v36; // [rsp+10h] [rbp-80h]
  float v37; // [rsp+1Ch] [rbp-74h]
  int v38; // [rsp+1Ch] [rbp-74h]
  QAngle gunAngles; // [rsp+30h] [rbp-60h] BYREF
  Vector vecForward; // [rsp+40h] [rbp-50h] BYREF
  Vector vecThrow; // [rsp+50h] [rbp-40h] BYREF

  if ( (this->m_fFlags.m_Value & 0x2000) != 0 )
  {
    if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
    {
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v3];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
              (*(this->_vptr_IHandleEntity + 309))(this, v9->m_pInstance, 0, 0);
          }
        }
        ++v4;
        ++v3;
      }
      while ( this->m_hMyWeapons.m_Vector.m_Size > v4 );
    }
  }
  else
  {
    *&vecThrow.x = (*(this->_vptr_IHandleEntity + 272))(this);
    vecThrow.z = v12;
    VectorAngles(&vecThrow, &gunAngles);
    AngleVectors(&gunAngles, &vecForward, 0, 0);
    v13 = fsqrt(
            ((this->m_Collision.m_vecMaxs.m_Value.x - this->m_Collision.m_vecMins.m_Value.x)
           * (this->m_Collision.m_vecMaxs.m_Value.x - this->m_Collision.m_vecMins.m_Value.x))
          + ((this->m_Collision.m_vecMaxs.m_Value.y - this->m_Collision.m_vecMins.m_Value.y)
           * (this->m_Collision.m_vecMaxs.m_Value.y - this->m_Collision.m_vecMins.m_Value.y)));
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v14 = 0x7FFF;
      v15 = 0x7FFF;
    }
    else
    {
      v14 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v15 = v14;
    }
    m_pInstance = 0;
    LODWORD(v17) = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
    vecThrow.x = v17;
    if ( (LODWORD(v17) + 2) > 1 )
    {
      v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
      if ( v18 != 0 )
      {
        v19 = &v18[v15 & 0x1FF];
        if ( v19 != 0 && LODWORD(v17) == v19->m_EHandle.m_Index )
          m_pInstance = v19->m_pInstance;
      }
    }
    if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = (this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory + v20);
        v23 = *v22;
        if ( (*v22 + 2) > 1 )
        {
          v24 = *v22;
          v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v22 >> 9) & 0x3F];
          if ( v25 != 0 )
          {
            v26 = &v25[v24 & 0x1FF];
            if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
            {
              v32 = v26->m_pInstance;
              if ( v26->m_pInstance != 0 && m_pInstance != v26->m_pInstance )
              {
                v33 = v20;
                v35 = v21;
                v37 = v13;
                CBaseCombatCharacter::DropWeaponForWeaponStrip(this, v26->m_pInstance, &vecForward, &gunAngles, v13);
                v13 = v37;
                v21 = v35;
                v20 = v33;
                if ( bDisallowWeaponPickup )
                {
                  v34 = v37;
                  v36 = v20;
                  v38 = v21;
                  CCollisionProperty::RemoveTriggerCollisionGroup(&v32->m_Collision);
                  Object = CBaseEntity::VPhysicsGetObject(v32);
                  v21 = v38;
                  v20 = v36;
                  v13 = v34;
                  if ( Object != 0 )
                  {
                    (*(*Object + 1304LL))(Object, 128, v30, v31, v34);
                    v13 = v34;
                    v20 = v36;
                    v21 = v38;
                  }
                }
              }
            }
          }
        }
        ++v21;
        v20 += 4;
      }
      while ( this->m_hMyWeapons.m_Vector.m_Size > v21 );
    }
    if ( m_pInstance != 0 )
    {
      CBaseCombatCharacter::ThrowDirForWeaponStrip(this, m_pInstance, &vecForward, &vecThrow);
      v27 = (*(*random_valve + 8LL))(random_valve, 800.0, 1000.0);
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      vecThrow.x = vecThrow.x * v27;
      vecThrow.y = vecThrow.y * v27;
      vecThrow.z = v27 * vecThrow.z;
      vptr_IHandleEntity[309](this, m_pInstance, 0, &vecThrow);
      m_pInstance->m_bRemoveable = 0;
      if ( bDisallowWeaponPickup )
        CCollisionProperty::RemoveTriggerCollisionGroup(&m_pInstance->m_Collision);
    }
  }
}


// CBaseCombatCharacter::Weapon_Drop  (line 1744, @0x0000000002155780, libserver.so)  // inlines: ClassMatches, FClassnameIs, FastSqrt, Length, MatrixAngles, MatrixPosition, NetworkStateChanged, Set, UTIL_PointContents, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, Weapon_Detach, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator+, operator-, operator=, operator=<float>, operator=<int>
// calls: CGamePhysicsQueryInterface::GetPointContents, CBaseEntity::SetAbsOrigin, VectorAngles, CBaseEntity::SetAbsAngles, CBaseEntity::GetAbsOrigin, VecCheckToss, CBaseCombatCharacter::Weapon_Detach, CBaseAnimating::GetModelPtr, CModel::NumBones, CModel::boneName, CBaseAnimating::LookupBone, CBaseAnimating::GetBoneTransform (20 total)
// callers: CBasePlayer::Weapon_Drop
// strings: "ValveBiped.Weapon_bone", "weapon_smg1", "Weapon spawning in solid!\n"
void __fastcall CBaseCombatCharacter::Weapon_Drop(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        const Vector *pvecTarget,
        const Vector *pVelocity)
{
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm6_4
  const CModel *ModelPtr; // rax
  const CModel *v11; // r14
  int v12; // ebx
  const char *v13; // rax
  int v14; // eax
  int (**vptr_IHandleEntity)(...); // rax
  float v16; // xmm2_4
  float v17; // xmm1_4
  int v18; // ebx
  double v19; // xmm0_8
  int (**v20)(...); // rax
  __m128i v21; // xmm6
  float v22; // xmm1_4
  __m128i v23; // xmm7
  float v24; // ebx
  float v25; // r14d
  float v26; // xmm1_4
  int v27; // ebx
  float (__fastcall *v28)(CGameRules *, CBasePlayer *, CBaseCombatCharacter *const, _QWORD); // r14
  CBasePlayer *v29; // rax
  int v30; // eax
  int v31; // ebx
  char v32; // al
  double v33; // xmm0_8
  double v34; // xmm1_8
  float v35; // xmm2_4
  float v36; // xmm1_4
  __int128 flAmmoDamage; // [rsp+0h] [rbp-120h]
  unsigned int flAmmoDamagea; // [rsp+0h] [rbp-120h]
  float throwForce; // [rsp+8h] [rbp-118h]
  Vector origin; // [rsp+10h] [rbp-110h] BYREF
  QAngle angles; // [rsp+20h] [rbp-100h] BYREF
  matrix3x4_t transform; // [rsp+30h] [rbp-F0h] BYREF
  Vector vFacingDir; // [rsp+60h] [rbp-C0h] BYREF
  matrix3x4_t rootInvLocal; // [rsp+90h] [rbp-90h] BYREF
  matrix3x4_t weaponMatrix; // [rsp+C0h] [rbp-60h] BYREF

  *(&flAmmoDamage + 1) = pVelocity;
  if ( pWeapon != 0 )
  {
    if ( (this->m_fFlags.m_Value & 0x2000) == 0 )
      goto LABEL_3;
    if ( (*(pWeapon->_vptr_IHandleEntity + 351))(pWeapon) != 0 )
    {
      v27 = (*(pWeapon->_vptr_IHandleEntity + 339))(pWeapon);
      if ( v27 != pWeapon->m_iClip1.m_Value )
      {
        (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pWeapon->m_iClip1.m_Value = v27;
      }
      if ( CEntityIdentity::ClassMatches(pWeapon->m_pEntity, "weapon_smg1") )
      {
        if ( UTIL_PlayerByIndex(1) == 0 )
        {
          v31 = (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon);
          if ( v31 == pWeapon->m_iClip1.m_Value )
            goto LABEL_25;
          goto LABEL_34;
        }
        v28 = *(g_pGameRules->_vptr_CGameRules + 37);
        flAmmoDamagea = (*(pWeapon->_vptr_IHandleEntity + 359))(pWeapon);
        v29 = UTIL_PlayerByIndex(1);
        LODWORD(flAmmoDamage) = v28(g_pGameRules, v29, this, flAmmoDamagea);
        v30 = (*(this->_vptr_IHandleEntity + 156))(this);
        v31 = ((v30 / *&flAmmoDamage) + (v30 / *&flAmmoDamage));
        if ( v31 != pWeapon->m_iClip1.m_Value )
        {
LABEL_34:
          (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          pWeapon->m_iClip1.m_Value = v31;
        }
      }
    }
LABEL_25:
    if ( (*(pWeapon->_vptr_IHandleEntity + 352))(pWeapon) != 0 )
    {
      v18 = (*(pWeapon->_vptr_IHandleEntity + 340))(pWeapon);
      if ( v18 != pWeapon->m_iClip2.m_Value )
      {
        (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pWeapon->m_iClip2.m_Value = v18;
      }
    }
LABEL_3:
    if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
    {
      *&weaponMatrix.m_flMatVal[0][0] = (*(this->_vptr_IHandleEntity + 311))(this, 0);
      weaponMatrix.m_flMatVal[0][2] = v7;
      *&vFacingDir.x = *&weaponMatrix.m_flMatVal[0][0];
      vFacingDir.z = v7 - 12.0;
      if ( (CGamePhysicsQueryInterface::GetPointContents(g_pPhysicsQuery, &vFacingDir, 1u) & 1) != 0 )
        Msg("Weapon spawning in solid!\n");
      CBaseEntity::SetAbsOrigin(pWeapon, &vFacingDir);
      *&weaponMatrix.m_flMatVal[0][0] = (*(this->_vptr_IHandleEntity + 272))(this);
      weaponMatrix.m_flMatVal[0][2] = v8;
      VectorAngles(&weaponMatrix, &rootInvLocal);
      CBaseEntity::SetAbsAngles(pWeapon, &rootInvLocal);
    }
    else
    {
      ModelPtr = CBaseAnimating::GetModelPtr(pWeapon);
      v11 = ModelPtr;
      if ( ModelPtr != 0 && (v12 = 0, CModel::NumBones(ModelPtr) > 0) )
      {
        while ( v12 < CModel::NumBones(v11) )
        {
          v13 = CModel::boneName(v11, v12);
          v14 = CBaseAnimating::LookupBone(this, v13);
          if ( v14 != -1 )
            goto LABEL_20;
          ++v12;
        }
        v14 = CBaseAnimating::LookupBone(this, "ValveBiped.Weapon_bone");
      }
      else
      {
        v12 = -1;
        v14 = CBaseAnimating::LookupBone(this, "ValveBiped.Weapon_bone");
      }
      if ( v14 != -1 )
      {
LABEL_20:
        CBaseAnimating::GetBoneTransform(this, v14, &transform);
        CBaseEntity::StopFollowingEntity(pWeapon);
        CBaseEntity::SetAbsOrigin(pWeapon, &vec3_origin);
        CBaseEntity::SetAbsAngles(pWeapon, &vec3_angle);
        CBaseAnimating::GetBoneTransform(pWeapon, v12, &vFacingDir);
        MatrixInvert(&vFacingDir, &rootInvLocal);
        *&flAmmoDamage = &weaponMatrix;
        ConcatTransforms(&transform, &rootInvLocal, &weaponMatrix);
        MatrixAngles(&weaponMatrix, &angles);
        vptr_IHandleEntity = pWeapon->_vptr_IHandleEntity;
        origin.x = weaponMatrix.m_flMatVal[0][3];
        origin.y = weaponMatrix.m_flMatVal[1][3];
        origin.z = weaponMatrix.m_flMatVal[2][3];
        vptr_IHandleEntity[128](pWeapon, &origin, &angles, 0);
        if ( pvecTarget != 0 )
          goto LABEL_8;
        goto LABEL_21;
      }
      v19 = (*(this->_vptr_IHandleEntity + 272))(this);
      v20 = this->_vptr_IHandleEntity;
      *&vFacingDir.x = v19;
      v21 = LODWORD(v19);
      vFacingDir.z = v22;
      v23 = HIDWORD(v19);
      *v21.m128i_i32 = *&v19 * 10.0;
      *v23.m128i_i32 = *(&v19 + 1) * 10.0;
      *&flAmmoDamage = v22 * 10.0;
      v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
      v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
      *&rootInvLocal.m_flMatVal[0][0] = (v20[311])(this, 0);
      rootInvLocal.m_flMatVal[0][2] = v26;
      weaponMatrix.m_flMatVal[0][1] = v25 + rootInvLocal.m_flMatVal[0][1];
      weaponMatrix.m_flMatVal[0][2] = v26 + *&flAmmoDamage;
      weaponMatrix.m_flMatVal[0][0] = v24 + rootInvLocal.m_flMatVal[0][0];
      CBaseEntity::SetAbsOrigin(pWeapon, &weaponMatrix);
    }
    if ( pvecTarget != 0 )
    {
LABEL_8:
      CBaseEntity::GetAbsOrigin(pWeapon);
      *&weaponMatrix.m_flMatVal[0][0] = VecCheckToss(this, flAmmoDamage, origin, 1.0, v9, 0, 0, 0);
      *&rootInvLocal.m_flMatVal[0][0] = *&weaponMatrix.m_flMatVal[0][0];
LABEL_9:
      (*(pWeapon->_vptr_IHandleEntity + 255))(pWeapon, &rootInvLocal);
      CBaseCombatCharacter::Weapon_Detach(this, pWeapon);
      return;
    }
LABEL_21:
    if ( *(&flAmmoDamage + 1) != 0 )
    {
      v16 = *(*(&flAmmoDamage + 1) + 4LL);
      rootInvLocal.m_flMatVal[0][0] = **(&flAmmoDamage + 1);
      v17 = *(*(&flAmmoDamage + 1) + 8LL);
      *&rootInvLocal.m_flMatVal[0][1] = __PAIR64__(LODWORD(v17), LODWORD(v16));
      if ( fsqrt(((rootInvLocal.m_flMatVal[0][0] * rootInvLocal.m_flMatVal[0][0]) + (v16 * v16)) + (v17 * v17)) > 400.0 )
      {
        VectorNormalize(&rootInvLocal);
        rootInvLocal.m_flMatVal[0][0] = rootInvLocal.m_flMatVal[0][0] * 400.0;
        rootInvLocal.m_flMatVal[0][1] = rootInvLocal.m_flMatVal[0][1] * 400.0;
        rootInvLocal.m_flMatVal[0][2] = 400.0 * rootInvLocal.m_flMatVal[0][2];
      }
    }
    else
    {
      v32 = (*(this->_vptr_IHandleEntity + 140))(this);
      v35 = 400.0;
      if ( v32 == 0 )
        v35 = (*(*random_valve + 16LL))(random_valve, 64, 128, v33, v34, 400.0);
      throwForce = v35;
      *&weaponMatrix.m_flMatVal[0][0] = (*(this->_vptr_IHandleEntity + 273))(this);
      weaponMatrix.m_flMatVal[0][2] = v36;
      rootInvLocal.m_flMatVal[0][2] = v36 * throwForce;
      rootInvLocal.m_flMatVal[0][1] = weaponMatrix.m_flMatVal[0][1] * throwForce;
      rootInvLocal.m_flMatVal[0][0] = throwForce * weaponMatrix.m_flMatVal[0][0];
    }
    goto LABEL_9;
  }
}


// CBaseCombatCharacter::Weapon_Equip  (line 1901, @0x0000000002176650, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseCombatWeapon> >, DispatchUpdateTransmitState, Element, Find, Get, GetBool, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, IsValid, LookupEntity, MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, Set, SetCurrentWeaponProficiency, String, operator CBaseCombatWeapon*, operator CEntityInstance*, operator->, operator=, operator=<int>, operator==<CBaseCombatWeapon>, operator[]
// calls: CBaseCombatCharacter::SetActiveWeapon, CBaseEntity::DispatchUpdateTransmitState, GetWeaponProficiencyName, Msg, CUtlMemory<CHandle<CBaseCombatWeapon>, int>::Grow, CBaseEntity::AddEffects
// callers: CBasePlayer::Weapon_Equip
// strings: "%s equipped with %s, proficiency is %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::Weapon_Equip(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  int m_Size; // r13d
  __int64 v7; // rax
  __int64 v8; // rcx
  CHandle<CBaseCombatWeapon> *m_pMemory; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  CEntityInstance *v12; // rdi
  CEntityIdentity *v13; // rsi
  char *v14; // rsi
  CEntityInstance *m_pInstance; // r8
  CEntityIdentity *v16; // rdi
  CEntityIdentity *v17; // rdi
  int v18; // eax
  CHandle<CBaseCombatWeapon> *v19; // rax
  int v20; // r13d
  int v21; // r13d
  unsigned __int16 v22; // dx
  int v23; // esi
  uint32 v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  unsigned __int16 v27; // dx
  int v28; // esi
  uint32 v29; // eax
  CEntityIdentity *v30; // rdx
  CEntitySystem *v31; // rcx
  CBaseEntity *v32; // r13
  __int64 v33; // rsi
  WeaponProficiency_t v34; // r13d
  const char *WeaponProficiencyName; // rax
  CEntityIdentity *v36; // rsi
  const char *m_pAsString; // rdx
  CEntityIdentity *v38; // rdi
  const char *v39; // rsi
  unsigned int v40; // r13d
  void (__fastcall *v41)(CBaseCombatCharacter *const, _QWORD, _QWORD, _QWORD); // r14
  unsigned int v42; // eax
  unsigned int m_Value; // r13d
  void (__fastcall *v44)(CBaseCombatCharacter *const, _QWORD, _QWORD, _QWORD); // r14
  unsigned int v45; // eax
  int v46; // r13d
  unsigned int v47; // r14d
  void (__fastcall *v48)(CBaseCombatCharacter *const, _QWORD, _QWORD, _QWORD); // r15
  int v49; // r13d
  int v50; // eax
  int v51; // r13d
  unsigned int v52; // r14d
  void (__fastcall *v53)(CBaseCombatCharacter *const, _QWORD, _QWORD, _QWORD); // r15
  int v54; // r13d
  int v55; // eax
  unsigned __int16 v56; // dx
  int v57; // esi
  CBaseEntity *v58; // rdi
  uint32 v59; // eax
  CEntityIdentity *v60; // rdx
  CEntityIdentity *v61; // rdx
  __int64 v62; // [rsp+8h] [rbp-58h]
  __int64 v63; // [rsp+8h] [rbp-58h]
  int search; // [rsp+10h] [rbp-50h]

  search = -1;
  if ( pWeapon != 0 )
  {
    m_pEntity = pWeapon->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      search = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
  }
  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_20:
    v18 = m_Size;
    if ( this->m_hMyWeapons.m_Vector.m_Memory.m_nAllocationCount == m_Size )
    {
      CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Grow(&this->m_hMyWeapons.m_Vector.m_Memory, 1);
      v18 = this->m_hMyWeapons.m_Vector.m_Size;
    }
    this->m_hMyWeapons.m_Vector.m_Size = v18 + 1;
    v19 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[m_Size];
    if ( v19 != 0 )
      v19->m_Index = search;
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, m_Size, 0xFFFFFFFFLL);
  }
  else
  {
    v7 = search & 0x1FF;
    v8 = 8 * v7;
    v62 = v7 << 7;
    m_pMemory = this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory;
    v63 = v62 - v8;
    v10 = (search + 2);
    v11 = 0;
    while ( 1 )
    {
      m_pInstance = 0;
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[m_pMemory->m_Index & 0x1FF];
          if ( v17 != 0 && m_pMemory->m_Index == v17->m_EHandle.m_Index )
            m_pInstance = v17->m_pInstance;
        }
      }
      v12 = 0;
      if ( v10 > 1 )
      {
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(search & 0x7FFF) >> 9];
        if ( v13 != 0 )
        {
          v14 = v13 + v63;
          if ( v14 != 0 && *(v14 + 4) == search )
            v12 = *v14;
        }
      }
      if ( m_pInstance == v12 )
        break;
      v11 = (v11 + 1);
      ++m_pMemory;
      if ( v11 == m_Size )
        goto LABEL_20;
    }
  }
  (*(pWeapon->_vptr_IHandleEntity + 70))(pWeapon, this->m_iTeamNum.m_Value, v10, v11);
  if ( (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon) == -1 )
  {
    m_Value = pWeapon->m_iPrimaryAmmoType.m_Value;
    v44 = *(this->_vptr_IHandleEntity + 298);
    v45 = (*(pWeapon->_vptr_IHandleEntity + 339))(pWeapon);
    v44(this, v45, m_Value, 0);
  }
  else
  {
    v20 = (*(pWeapon->_vptr_IHandleEntity + 339))(pWeapon);
    if ( v20 > (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon) )
    {
      v46 = (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon);
      if ( v46 != pWeapon->m_iClip1.m_Value )
      {
        (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pWeapon->m_iClip1.m_Value = v46;
      }
      v47 = pWeapon->m_iPrimaryAmmoType.m_Value;
      v48 = *(this->_vptr_IHandleEntity + 298);
      v49 = (*(pWeapon->_vptr_IHandleEntity + 339))(pWeapon);
      v50 = (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon);
      v48(this, (v49 - v50), v47, 0);
    }
  }
  if ( (*(pWeapon->_vptr_IHandleEntity + 338))(pWeapon) == -1 )
  {
    v40 = pWeapon->m_iSecondaryAmmoType.m_Value;
    v41 = *(this->_vptr_IHandleEntity + 298);
    v42 = (*(pWeapon->_vptr_IHandleEntity + 340))(pWeapon);
    v41(this, v42, v40, 0);
  }
  else
  {
    v21 = (*(pWeapon->_vptr_IHandleEntity + 340))(pWeapon);
    if ( v21 > (*(pWeapon->_vptr_IHandleEntity + 338))(pWeapon) )
    {
      v51 = (*(pWeapon->_vptr_IHandleEntity + 338))(pWeapon);
      if ( v51 != pWeapon->m_iClip2.m_Value )
      {
        (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pWeapon->m_iClip2.m_Value = v51;
      }
      v52 = pWeapon->m_iSecondaryAmmoType.m_Value;
      v53 = *(this->_vptr_IHandleEntity + 298);
      v54 = (*(pWeapon->_vptr_IHandleEntity + 340))(pWeapon);
      v55 = (*(pWeapon->_vptr_IHandleEntity + 338))(pWeapon);
      v53(this, (v54 - v55), v52, 0);
    }
  }
  (*(pWeapon->_vptr_IHandleEntity + 254))(pWeapon, this);
  if ( (*(this->_vptr_IHandleEntity + 140))(this) == 0 )
  {
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v22 = 0x7FFF;
      v23 = 0x7FFF;
    }
    else
    {
      v22 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v23 = v22;
    }
    v24 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v22 & 0x7FFF;
    if ( v24 + 2 > 1 )
    {
      v25 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v23 >> 9];
      if ( v25 != 0 )
      {
        v26 = &v25[v23 & 0x1FF];
        if ( v26 != 0 && v24 == v26->m_EHandle.m_Index && v26->m_pInstance != 0 )
        {
          (*(v26->m_pInstance->_vptr_IHandleEntity + 283))(v26->m_pInstance, 0);
          if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
          {
            v56 = 0x7FFF;
            v57 = 0x7FFF;
          }
          else
          {
            v56 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
            v57 = v56;
          }
          v58 = 0;
          v59 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v56 & 0x7FFF;
          if ( v59 + 2 > 1 )
          {
            v60 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v57 >> 9];
            if ( v60 != 0 )
            {
              v61 = &v60[v57 & 0x1FF];
              if ( v61 != 0 && v59 == v61->m_EHandle.m_Index )
                v58 = v61->m_pInstance;
            }
          }
          CBaseEntity::AddEffects(v58, 32);
        }
      }
    }
    CBaseCombatCharacter::SetActiveWeapon(this, pWeapon);
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v27 = 0x7FFF;
      v28 = 0x7FFF;
    }
    else
    {
      v27 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v28 = v27;
    }
    v29 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v27 & 0x7FFF;
    v30 = (v29 + 2);
    v31 = g_pEntitySystem;
    v32 = 0;
    if ( v30 > 1 )
    {
      v30 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v28 >> 9];
      if ( v30 != 0 )
      {
        v33 = v28 & 0x1FF;
        v31 = (8 * v33);
        v30 += v33;
        if ( v30 != 0 && v29 == v30->m_EHandle.m_Index )
          v32 = v30->m_pInstance;
      }
    }
    (*(v32->_vptr_IHandleEntity + 188))(v32, v32->m_fEffects.m_Value & 0xFFFFFFDF, v30, v31);
    v32->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    if ( v32->m_pEntity != 0 )
      CBaseEntity::DispatchUpdateTransmitState(v32);
  }
  v34 = (*(this->_vptr_IHandleEntity + 351))(this, pWeapon);
  if ( weapon_showproficiency.m_pParent->m_Value.m_nValue != 0 )
  {
    WeaponProficiencyName = GetWeaponProficiencyName(v34);
    v36 = pWeapon->m_pEntity;
    m_pAsString = "";
    if ( v36->m_designerName.u.m_Id != 0 )
      m_pAsString = v36->m_designerName.u.m_pAsString;
    v38 = this->m_pEntity;
    v39 = "";
    if ( v38->m_designerName.u.m_Id != 0 )
      v39 = v38->m_designerName.u.m_pAsString;
    Msg("%s equipped with %s, proficiency is %s\n", v39, m_pAsString, WeaponProficiencyName);
  }
  this->m_CurrentWeaponProficiency = v34;
}


// CBaseCombatCharacter::Weapon_EquipAmmoOnly  (line 2000, @0x00000000021457d0, libserver.so)  // inlines: ClassMatches, FClassnameIs, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, String, operator CEntityInstance*, operator-=<int>, operator[]
// calls: CEntityIdentity::ClassMatches
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseCombatCharacter::Weapon_EquipAmmoOnly(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon)
{
  __int64 v4; // rbx
  CHandle<CBaseCombatWeapon> *v5; // rax
  uint32 m_Index; // ecx
  __int16 v7; // dx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  bool v10; // r13
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  unsigned int m_Value; // ebx
  unsigned int m_iSecondaryAmmoCount; // r15d
  int v17; // ebx
  int v18; // r14d
  int v19; // r15d
  int v20; // r15d

  if ( this->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0 )
          {
            m_pEntity = pWeapon->m_pEntity;
            m_pAsString = "";
            if ( m_pEntity->m_designerName.u.m_Id != 0 )
              m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
            v10 = CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, m_pAsString);
            if ( v10 )
              break;
          }
        }
      }
    }
    if ( this->m_hMyWeapons.m_Vector.m_Size <= ++v4 )
      return 0;
  }
  if ( (*(pWeapon->_vptr_IHandleEntity + 351))(pWeapon) != 0 )
    m_Value = pWeapon->m_iClip1.m_Value;
  else
    m_Value = pWeapon->m_iPrimaryAmmoCount;
  if ( (*(pWeapon->_vptr_IHandleEntity + 352))(pWeapon) != 0 )
    m_iSecondaryAmmoCount = pWeapon->m_iClip2.m_Value;
  else
    m_iSecondaryAmmoCount = pWeapon->m_iSecondaryAmmoCount;
  v17 = (*(this->_vptr_IHandleEntity + 298))(this, m_Value, pWeapon->m_iPrimaryAmmoType.m_Value, 0);
  v18 = (*(this->_vptr_IHandleEntity + 298))(this, m_iSecondaryAmmoCount, pWeapon->m_iSecondaryAmmoType.m_Value, 0);
  if ( (*(pWeapon->_vptr_IHandleEntity + 351))(pWeapon) != 0 )
  {
    v19 = pWeapon->m_iClip1.m_Value - v17;
    if ( pWeapon->m_iClip1.m_Value != v19 )
    {
      (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pWeapon->m_iClip1.m_Value = v19;
    }
  }
  else
  {
    pWeapon->m_iPrimaryAmmoCount -= v17;
  }
  if ( (*(pWeapon->_vptr_IHandleEntity + 352))(pWeapon) != 0 )
  {
    v20 = pWeapon->m_iClip2.m_Value - v18;
    if ( pWeapon->m_iClip2.m_Value != v20 )
    {
      (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1280, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pWeapon->m_iClip2.m_Value = v20;
    }
  }
  else
  {
    pWeapon->m_iSecondaryAmmoCount -= v18;
  }
  if ( v17 <= 0 )
    return v18 > 0;
  return v10;
}


// CBaseCombatCharacter::Weapon_SlotOccupied  (line 2048, @0x000000000213cf30, libserver.so)
bool __fastcall CBaseCombatCharacter::Weapon_SlotOccupied(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  bool result; // al
  __int64 (__fastcall *v4)(CBaseCombatCharacter *const, _QWORD); // r12
  unsigned int v5; // eax

  result = 0;
  if ( pWeapon != 0 )
  {
    v4 = *(this->_vptr_IHandleEntity + 315);
    v5 = (*(pWeapon->_vptr_IHandleEntity + 345))(pWeapon);
    return v4(this, v5) != 0;
  }
  return result;
}


// CBaseCombatCharacter::Weapon_GetWpnForAmmo  (line 2063, @0x0000000002150540, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetWeapon, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
CBaseCombatWeapon *__fastcall CBaseCombatCharacter::Weapon_GetWpnForAmmo(
        CBaseCombatCharacter *const this,
        int iAmmoIndex)
{
  __int64 v4; // r12
  CHandle<CBaseCombatWeapon> *v5; // rax
  uint32 m_Index; // ecx
  __int16 v7; // dx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CBaseCombatWeapon *m_pInstance; // rbx

  if ( this->m_hMyWeapons.m_Vector.m_Size <= 0 )
    return 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        {
          m_pInstance = v9->m_pInstance;
          if ( v9->m_pInstance != 0
            && ((*(m_pInstance->_vptr_IHandleEntity + 359))(m_pInstance) == iAmmoIndex
             || iAmmoIndex == (*(m_pInstance->_vptr_IHandleEntity + 360))(m_pInstance)) )
          {
            break;
          }
        }
      }
    }
    if ( this->m_hMyWeapons.m_Vector.m_Size <= ++v4 )
      return 0;
  }
  return m_pInstance;
}


// CBaseCombatCharacter::Weapon_CanUse  (line 2086, @0x000000000213ee20, libserver.so)
// calls: CBaseAnimating::SelectWeightedSequence
bool __fastcall CBaseCombatCharacter::Weapon_CanUse(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r12
  Activity v7; // eax

  v4 = (*(pWeapon->_vptr_IHandleEntity + 373))(pWeapon);
  v5 = (*(pWeapon->_vptr_IHandleEntity + 374))(pWeapon);
  if ( v5 > 0 )
  {
    v6 = v4 + 4 * (3LL * (v5 - 1) + 3);
    while ( 1 )
    {
      if ( *(v4 + 8) != 0 )
      {
        v7 = (*(this->_vptr_IHandleEntity + 300))(this, *(v4 + 4));
        if ( CBaseAnimating::SelectWeightedSequence(this, v7).m_Data == -1 )
          break;
      }
      v4 += 12;
      if ( v4 == v6 )
        return 1;
    }
  }
  return 0;
}


// CBaseCombatCharacter::Weapon_Create  (line 2119, @0x00000000021701f0, libserver.so)
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::Create
// callers: CPlayerInfo::SetActiveWeapon
CBaseCombatWeapon *__fastcall CBaseCombatCharacter::Weapon_Create(
        CBaseCombatCharacter *const this,
        const char *pWeaponName)
{
  const QAngle *LocalAngles; // r13
  const Vector *LocalOrigin; // rax

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  return CBaseEntity::Create(pWeaponName, LocalOrigin, LocalAngles, this);
}


// CBaseCombatCharacter::Weapon_HandleAnimEvent  (line 2131, @0x0000000002144040, libserver.so)  // inlines: CEntityHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
void __fastcall CBaseCombatCharacter::Weapon_HandleAnimEvent(CBaseCombatCharacter *const this, animevent_t *pEvent)
{
  uint32 v3; // edi
  unsigned __int16 v4; // cx
  int v5; // r8d
  int v6; // eax
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  v3 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v4 = 0x7FFF;
    v5 = 0x7FFF;
  }
  else
  {
    v4 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v5 = v4;
  }
  v6 = (v3 << 15) | v4 & 0x7FFF;
  if ( (v6 + 2) > 1 )
  {
    v7 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v5 >> 9];
    if ( v7 != 0 )
    {
      v8 = &v7[v5 & 0x1FF];
      if ( v8 != 0 && v6 == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
        (*(v8->m_pInstance->_vptr_IHandleEntity + 387))(v8->m_pInstance, pEvent);
    }
  }
}


// CBaseCombatCharacter::RemoveAllWeapons  (line 2141, @0x00000000021512a0, libserver.so)  // inlines: ClearActiveWeapon, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Purge, RemoveAll, operator CEntityInstance*, operator bool, operator->, operator[]
// calls: CBaseCombatCharacter::SetActiveWeapon, CUtlMemory<CHandle<CBaseCombatWeapon>, int>::Purge
// callers: CBasePlayer::RemoveAllItems
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::RemoveAllWeapons(CBaseCombatCharacter *const this)
{
  int m_Size; // r12d
  __int64 v3; // r13
  int i; // r14d
  CHandle<CBaseCombatWeapon> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  bool v10; // zf

  CBaseCombatCharacter::SetActiveWeapon(this, 0);
  m_Size = this->m_hMyWeapons.m_Vector.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    for ( i = 0; i < m_Size; ++i )
    {
      v5 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v3];
      m_Index = v5->m_Index;
      if ( v5->m_Index + 2 > 1 )
      {
        v7 = v5->m_Index;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[v7 & 0x1FF];
          if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          {
            (*(v9->m_pInstance->_vptr_IHandleEntity + 383))(v9->m_pInstance);
            m_Size = this->m_hMyWeapons.m_Vector.m_Size;
          }
        }
      }
      ++v3;
    }
  }
  v10 = (this->m_hMyWeapons.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_hMyWeapons.m_Vector.m_Size = 0;
  if ( v10 )
    CUtlMemory<CHandle<CBaseCombatWeapon>,int>::Purge(&this->m_hMyWeapons.m_Vector.m_Memory);
  if ( m_Size > 0 )
    (*(this->_vptr_IHandleEntity + 22))(this, 1624, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
}


// CBaseCombatCharacter::ScriptGetEquippedWeapons  (line 2158, @0x000000000216b9d0, libserver.so)  // inlines: CVariantBase, EntityToHScript, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, TakeOwnership, ToHScript, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
__int64 *__fastcall CBaseCombatCharacter::ScriptGetEquippedWeapons(__int64 *a1, CBaseCombatCharacter *const this)
{
  __int64 v4; // rbx
  IScriptVM *v5; // rdi
  void (__fastcall *v6)(IScriptVM *, __int64, HSCRIPT *); // r14
  CHandle<CBaseCombatWeapon> *v7; // rax
  uint32 m_Index; // ecx
  __int16 v9; // dx
  CEntityIdentity *v10; // rax
  __int64 v11; // rdx
  bool v12; // zf
  CEntityIdentity *v13; // rdx
  HSCRIPT m_hScope; // rax
  __int64 v15; // rsi
  CEntityInstance *m_pInstance; // r15
  HSCRIPT v18; // [rsp+10h] [rbp-40h] BYREF
  __int16 v19; // [rsp+18h] [rbp-38h]
  __int16 v20; // [rsp+1Ah] [rbp-36h]

  *a1 = 0;
  *(a1 + 4) = 0;
  *(a1 + 5) = 0;
  (*(*g_pScriptVM + 360LL))(g_pScriptVM, a1);
  if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
  {
    v4 = 0;
    do
    {
      v5 = g_pScriptVM;
      v6 = *(*g_pScriptVM + 384LL);
      v7 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v4];
      m_Index = v7->m_Index;
      if ( v7->m_Index + 2 > 1
        && (v9 = v7->m_Index,
            (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F]) != 0) )
      {
        v11 = v9 & 0x1FF;
        v12 = &v10[v11] == 0;
        v13 = &v10[v11];
        m_hScope = 0;
        if ( !v12 && m_Index == v13->m_EHandle.m_Index )
        {
          m_pInstance = v13->m_pInstance;
          if ( v13->m_pInstance != 0 )
          {
            m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( m_hScope == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v13->m_pInstance, 0);
              v5 = g_pScriptVM;
              m_hScope = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
      else
      {
        m_hScope = 0;
      }
      v15 = *a1;
      v19 = 31;
      v20 = 0;
      v18 = m_hScope;
      v6(v5, v15, &v18);
      if ( (v20 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v18);
      ++v4;
    }
    while ( this->m_hMyWeapons.m_Vector.m_Size > v4 );
  }
  if ( *(a1 + 4) == 31 )
    *(a1 + 4) = 36;
  return a1;
}


// CBaseCombatCharacter::TakeHealth  (line 2172, @0x0000000002158f00, libserver.so)
// calls: CBaseEntity::GetDamageOptions, CBaseEntity::TakeHealth
// callers: CBasePlayer::TakeHealth
__int64 __fastcall CBaseCombatCharacter::TakeHealth(
        CBaseCombatCharacter *const this,
        float a2,
        float flHealth,
        unsigned int bitsDamageType)
{
  float v6; // xmm1_4

  if ( CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_NO )
    return CBaseEntity::TakeHealth(this, a2, v6, bitsDamageType);
  else
    return 0;
}


// CBaseCombatCharacter::RecordDamageHistory  (line 2180, @0x0000000002150610, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set, Start, operator=<float>
// calls: IntervalTimer::Now
// callers: CBaseCombatCharacter::OnTakeDamage, CBaseCombatCharacter::ReactToDamage
void __fastcall CBaseCombatCharacter::RecordDamageHistory(CBaseCombatCharacter *const this, CBaseEntity *pAttacker)
{
  int m_Value; // ecx
  int v3; // edx
  CBaseCombatCharacter *i; // rax
  int team; // esi
  CBaseCombatCharacter::DamageHistory *v6; // r12
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // [rsp+Ch] [rbp-14h]

  if ( pAttacker != 0 )
  {
    m_Value = pAttacker->m_iTeamNum.m_Value;
    v3 = 0;
    this->m_hasBeenInjured |= 1 << m_Value;
    for ( i = this; ; i = (i + 24) )
    {
      team = i->m_damageHistory[0].team;
      if ( team == m_Value )
      {
        v6 = &this->m_damageHistory[v3];
        goto LABEL_8;
      }
      if ( team == -1 )
        break;
      if ( ++v3 == 4 )
        return;
    }
    v8 = v3;
    this->m_damageHistory[v8].team = m_Value;
    v6 = &this->m_damageHistory[v8];
LABEL_8:
    v7 = IntervalTimer::Now(&v6->interval);
    if ( v7 != v6->interval.m_timestamp.m_Value )
    {
      v9 = v7;
      (*(v6->interval._vptr_IntervalTimer + 2))(&v6->interval, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v6->interval.m_timestamp.m_Value = v9;
    }
  }
}


// CBaseCombatCharacter::ReactToDamage  (line 2212, @0x0000000002159980, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CBaseCombatCharacter::RecordDamageHistory, CBaseEntity::GetLifeState, VectorNormalize, CBaseEntity::SendOnHurtGameEvent
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::ReactToDamage(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  LifeState_t LifeState; // eax
  vec_t z; // eax
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r13
  double v14; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  float v16; // xmm1_4
  float v17; // xmm1_4
  int m_Value; // r10d
  Vector vecDir; // [rsp+0h] [rbp-50h] BYREF
  double v20; // [rsp+10h] [rbp-40h]
  float v21; // [rsp+18h] [rbp-38h]
  double v22; // [rsp+20h] [rbp-30h]
  float v23; // [rsp+28h] [rbp-28h]

  ++this->m_iDamageCount;
  m_Index = info->m_hAttacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[info->m_hAttacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  CBaseCombatCharacter::RecordDamageHistory(this, m_pInstance);
  LifeState = CBaseEntity::GetLifeState(this);
  if ( LifeState != LifeState_t::LIFE_ALIVE )
  {
    if ( LifeState == LifeState_t::LIFE_DEAD
      && this->m_iHealth.m_Value <= 0
      && (*(g_pGameRules->_vptr_CGameRules + 23))(g_pGameRules, info->m_bitsDamageType) != 0
      && (*(this->_vptr_IHandleEntity + 334))(this, info) != 0 )
    {
      (*(this->_vptr_IHandleEntity + 337))(this, info);
    }
  }
  else
  {
    z = vec3_origin.z;
    *&vecDir.x = *&vec3_origin.x;
    vecDir.z = z;
    v10 = info->m_hInflictor.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[info->m_hInflictor.m_Index & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          v13 = v12->m_pInstance;
          if ( v12->m_pInstance != 0 )
          {
            v14 = (*(this->_vptr_IHandleEntity + 62))(this);
            vptr_IHandleEntity = v13->_vptr_IHandleEntity;
            v22 = v14;
            v23 = v16;
            v20 = (vptr_IHandleEntity[62])(v13);
            v21 = v17;
            vecDir.y = *(&v20 + 1) - *(&v22 + 1);
            vecDir.z = v17 - v23;
            vecDir.x = *&v20 - *&v22;
            VectorNormalize(&vecDir);
          }
        }
      }
    }
    m_Value = this->m_iHealth.m_Value;
    g_vecAttackDir = vecDir;
    if ( m_Value <= 0 && CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE )
    {
      (*(this->_vptr_IHandleEntity + 92))(this, info);
      if ( (*(this->_vptr_IHandleEntity + 334))(this, info) == 0
        || (*(this->_vptr_IHandleEntity + 337))(this, info) == 0 )
      {
        (*(this->_vptr_IHandleEntity + 338))(this);
      }
      CBaseEntity::SendOnHurtGameEvent(this, info);
    }
  }
}


// CBaseCombatCharacter::OnTakeDamage  (line 2296, @0x00000000021506d0, libserver.so)  // inlines: Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetDamageOptions, CBaseCombatCharacter::RecordDamageHistory, CBaseEntity::GetLifeState
// callers: CBasePlayer::OnTakeDamage, CDOTA_BaseNPC::OnTakeDamage
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseCombatCharacter::OnTakeDamage(CBaseCombatCharacter *const this, const CTakeDamageInfo *const info)
{
  DamageOptions_t DamageOptions; // dl
  int result; // eax
  CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  LifeState_t LifeState; // eax
  int v11; // r13d

  DamageOptions = CBaseEntity::GetDamageOptions(this);
  result = 0;
  if ( DamageOptions != DamageOptions_t::DAMAGE_NO )
  {
    ++this->m_iDamageCount;
    m_pInstance = 0;
    m_Index = info->m_hAttacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[info->m_hAttacker.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    CBaseCombatCharacter::RecordDamageHistory(this, m_pInstance);
    LifeState = CBaseEntity::GetLifeState(this);
    if ( LifeState != LifeState_t::LIFE_ALIVE )
    {
      if ( LifeState == LifeState_t::LIFE_DYING )
        return (*(this->_vptr_IHandleEntity + 320))(this, info);
      v11 = (*(this->_vptr_IHandleEntity + 321))(this, info);
      if ( this->m_iHealth.m_Value <= 0
        && (*(g_pGameRules->_vptr_CGameRules + 23))(g_pGameRules, info->m_bitsDamageType) != 0
        && (*(this->_vptr_IHandleEntity + 334))(this, info) != 0 )
      {
        (*(this->_vptr_IHandleEntity + 337))(this, info);
        return 0;
      }
    }
    else
    {
      v11 = (*(this->_vptr_IHandleEntity + 319))(this, info);
      if ( this->m_iHealth.m_Value <= 0 && CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE )
      {
        (*(this->_vptr_IHandleEntity + 92))(this, info);
        if ( (*(this->_vptr_IHandleEntity + 334))(this, info) == 0
          || (*(this->_vptr_IHandleEntity + 337))(this, info) == 0 )
        {
          (*(this->_vptr_IHandleEntity + 338))(this);
          return v11;
        }
      }
    }
    return v11;
  }
  return result;
}


// CBaseCombatCharacter::GetFilteredDamage  (line 2357, @0x000000000216d140, libserver.so)  // inlines: CVariantBase, CreateTableFromKeyValues, DOTAGameRules, Free, Get, GetAttacker, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, HasDamageFilter, HasScriptFilter, IndexToIdentity, IsValid, LookupEntity, RunDamageFilter, RunScriptFilter, entindex, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CDOTAGamerules::GetGameModeEntity, KeyValues::operator new, KeyValues::KeyValues, CEntityInstance::GetEntityIndex, KeyValues::SetInt, KeyValues::SetFloat, KeyValues::~KeyValues, KeyValues::operator delete, Recursive_ConvertKeyValuesToTable, KeyValues::GetFloat, KeyValues::GetName, _Unwind_Resume (13 total)
// callers: CBaseCombatCharacter::OnTakeDamage_Alive
// strings: "DamageData", "entindex_victim_const", "damagetype_const", "entindex_attacker_const", "entindex_inflictor_const"
// globals: CEntityHandle::gm_pEntityList
float __fastcall CBaseCombatCharacter::GetFilteredDamage(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  CDOTABaseGameMode *GameModeEntity; // rax
  CDOTABaseGameMode *v5; // r12
  KeyValues *v6; // rbx
  CEntityIndex v7; // eax
  uint32 m_Index; // edx
  CConcreteEntityList *v9; // rax
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  uint32 v12; // edx
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  float v15; // xmm1_4
  float v16; // xmm1_4
  IScriptVM *v17; // r15
  HSCRIPT m_hFunction; // rsi
  char v19; // r12
  __int64 (__fastcall *v21)(IScriptVM *, HSCRIPT, const char *, _QWORD, _QWORD); // r12
  const char *Name; // rax
  __int64 v23; // r12
  CEntityIndex v24; // eax
  CEntityIndex v25; // eax
  float flDamage; // [rsp+Ch] [rbp-54h]
  HSCRIPT hTable; // [rsp+10h] [rbp-50h] BYREF
  __int16 v28; // [rsp+18h] [rbp-48h]
  __int16 v29; // [rsp+1Ah] [rbp-46h]
  __int64 v30; // [rsp+20h] [rbp-40h] BYREF
  __int16 v31; // [rsp+28h] [rbp-38h]
  __int16 v32; // [rsp+2Ah] [rbp-36h]

  flDamage = info->m_flDamage;
  if ( g_pGameRules != 0 )
  {
    GameModeEntity = CDOTAGamerules::GetGameModeEntity(g_pGameRules);
    v5 = GameModeEntity;
    if ( GameModeEntity != 0
      && GameModeEntity->m_DamageFilter.m_hFunction != 0
      && GameModeEntity->m_DamageFilter.m_hContext != 0 )
    {
      v6 = KeyValues::operator new(0x14u);
      KeyValues::KeyValues(v6, "DamageData");
      v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      KeyValues::SetInt(v6, "entindex_victim_const", v7.m_Data);
      m_Index = info->m_hAttacker.m_Index;
      v9 = CEntityHandle::gm_pEntityList;
      if ( m_Index + 2 > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[info->m_hAttacker.m_Index & 0x1FF];
          if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
          {
            v24.m_Data = CEntityInstance::GetEntityIndex(v11->m_pInstance).m_Data;
            KeyValues::SetInt(v6, "entindex_attacker_const", v24.m_Data);
            v9 = CEntityHandle::gm_pEntityList;
          }
        }
      }
      v12 = info->m_hInflictor.m_Index;
      if ( v12 + 2 > 1 )
      {
        v13 = v9->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[info->m_hInflictor.m_Index & 0x1FF];
          if ( v14 != 0 && v12 == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
          {
            v25.m_Data = CEntityInstance::GetEntityIndex(v14->m_pInstance).m_Data;
            KeyValues::SetInt(v6, "entindex_inflictor_const", v25.m_Data);
          }
        }
      }
      KeyValues::SetInt(v6, "damagetype_const", info->m_bitsDotaDamageType);
      KeyValues::SetFloat(v6, "damage", v15);
      if ( v5->m_DamageFilter.m_hFunction == 0 || v5->m_DamageFilter.m_hContext == 0 || v6 == 0 )
        goto LABEL_27;
      v28 = 0;
      v29 = 0;
      hTable = 0;
      v17 = g_pScriptVM;
      (*(*g_pScriptVM + 264LL))(g_pScriptVM, &hTable);
      if ( hTable != 0 )
        Recursive_ConvertKeyValuesToTable(v6, v17, hTable);
      v31 = 0;
      m_hFunction = v5->m_DamageFilter.m_hFunction;
      v32 = 0;
      v30 = 0;
      (*(*g_pScriptVM + 160LL))(g_pScriptVM, m_hFunction, &hTable, 1, &v30, v5->m_DamageFilter.m_hContext, 1);
      v19 = 0;
      if ( v31 == 6 && v30 != 0 )
      {
        v21 = *(*g_pScriptVM + 304LL);
        Name = KeyValues::GetName(v6);
        v23 = v21(g_pScriptVM, hTable, Name, 0, 0);
        if ( v23 != 0 )
        {
          KeyValues::~KeyValues(v6);
          KeyValues::operator delete(v6);
          v6 = v23;
        }
        v19 = 1;
      }
      (*(*g_pScriptVM + 344LL))(g_pScriptVM, &hTable);
      if ( (v32 & 1) != 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v30);
        v32 &= ~1u;
      }
      v30 = 0;
      v31 = 0;
      if ( (v29 & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, hTable);
      if ( v19 == 0 )
      {
        flDamage = 0.0;
      }
      else
      {
LABEL_27:
        flDamage = KeyValues::GetFloat(v6, "damage", v16);
        if ( v6 == 0 )
          return flDamage;
      }
      KeyValues::~KeyValues(v6);
      KeyValues::operator delete(v6);
    }
  }
  return flDamage;
}


// CBaseCombatCharacter::OnTakeDamage_Alive  (line 2391, @0x000000000216d530, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CBaseEntity::GetDamageOptions, CBaseCombatCharacter::GetFilteredDamage, floorf, CBaseEntity::SendOnHurtGameEvent, VectorNormalize
// callers: CBasePlayer::OnTakeDamage_Alive, NextBotCombatCharacter::OnTakeDamage_Alive
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseCombatCharacter::OnTakeDamage_Alive(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  vec_t z; // eax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  int result; // eax
  double v12; // xmm0_8
  uint32 v13; // eax
  CEntityInstance *m_pInstance; // rdi
  CConcreteEntityList *v15; // rsi
  float v16; // xmm1_4
  CEntityIdentity *v17; // rdx
  __int64 v18; // rcx
  CEntityIdentity *v19; // rdx
  float v20; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-44h]
  Vector vecDir; // [rsp+10h] [rbp-40h] BYREF
  double v23; // [rsp+20h] [rbp-30h]
  float v24; // [rsp+28h] [rbp-28h]
  double v25; // [rsp+30h] [rbp-20h]
  float v26; // [rsp+38h] [rbp-18h]

  z = vec3_origin.z;
  *&vecDir.x = *&vec3_origin.x;
  vecDir.z = z;
  m_Index = info->m_hInflictor.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[info->m_hInflictor.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index && v7->m_pInstance != 0 )
      {
        v12 = (*(this->_vptr_IHandleEntity + 62))(this);
        v13 = info->m_hInflictor.m_Index;
        m_pInstance = 0;
        v25 = v12;
        v15 = CEntityHandle::gm_pEntityList;
        v26 = v16;
        if ( v13 + 2 > 1 )
        {
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = info->m_hInflictor.m_Index & 0x1FF;
            v15 = (8 * v18);
            v19 = &v17[v18];
            if ( v19 != 0 && v13 == v19->m_EHandle.m_Index )
              m_pInstance = v19->m_pInstance;
          }
        }
        v23 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v15);
        v24 = v20;
        vecDir.y = *(&v23 + 1) - *(&v25 + 1);
        vecDir.z = v20 - v26;
        vecDir.x = *&v23 - *&v25;
        VectorNormalize(&vecDir);
      }
    }
  }
  g_vecAttackDir = vecDir;
  if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
    goto LABEL_10;
  flDamage = CBaseCombatCharacter::GetFilteredDamage(this, info);
  v8 = floorf(flDamage);
  v9 = (flDamage - v8) + this->m_flDamageAccumulator;
  v10 = flDamage - (flDamage - v8);
  if ( v9 >= 1.0 )
  {
    v10 = v10 + 1.0;
    v9 = v9 - 1.0;
  }
  result = 0;
  this->m_flDamageAccumulator = v9;
  if ( v10 > 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 157))(this, (this->m_iHealth.m_Value - v10));
LABEL_10:
    CBaseEntity::SendOnHurtGameEvent(this, info);
    return 1;
  }
  return result;
}


// CBaseCombatCharacter::OnTakeDamage_Dying  (line 2447, @0x000000000213cf70, libserver.so)
// callers: NextBotCombatCharacter::OnTakeDamage_Dying
int __fastcall CBaseCombatCharacter::OnTakeDamage_Dying(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  return 1;
}


// CBaseCombatCharacter::OnTakeDamage_Dead  (line 2452, @0x000000000213efc0, libserver.so)
// calls: CBaseEntity::GetDamageOptions
int __fastcall CBaseCombatCharacter::OnTakeDamage_Dead(
        CBaseCombatCharacter *const this,
        const CTakeDamageInfo *const info)
{
  if ( CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_EVENTS_ONLY )
    (*(this->_vptr_IHandleEntity + 157))(this, (this->m_iHealth.m_Value - info->m_flDamage));
  return 1;
}


// CBaseCombatCharacter::SetTransmit  (line 2465, @0x0000000002147cd0, libserver.so)  // inlines: CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsAlreadyMarkedForTransmission, IsValid, LookupEntity, ToBasePlayer, entindex, operator CBaseCombatWeapon*, operator CEntityInstance*, operator==, operator[]
// calls: CEntityInstance::GetEntityIndex, CBaseAnimating::SetTransmit, CBasePlayer::IsSplitScreenUserOnEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::SetTransmit(
        CBaseCombatCharacter *const this,
        CCheckTransmitInfo *pInfo,
        bool bAlways)
{
  CEntityIndex v6; // eax
  bool v7; // r14
  unsigned __int16 v8; // dx
  int v9; // esi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // rdi
  char v14; // al
  CBasePlayer *v15; // rdi
  __int64 v16; // r14
  int v17; // r15d
  CHandle<CBaseCombatWeapon> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx

  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  if ( ((1 << SLOBYTE(v6.m_Data)) & pInfo->m_pTransmitEdict->m_Ints[v6.m_Data >> 5]) != 0 )
    return;
  CBaseAnimating::SetTransmit(this, pInfo, bAlways);
  v7 = pInfo->m_nClientEntityIndex.m_Data == CEntityInstance::GetEntityIndex(this).m_Data;
  if ( (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
  {
    if ( !v7 )
    {
      if ( this != 0 )
      {
        v14 = (*(this->_vptr_IHandleEntity + 140))(this);
        v15 = 0;
        if ( v14 != 0 )
          v15 = this;
      }
      else
      {
        v15 = 0;
      }
      if ( !CBasePlayer::IsSplitScreenUserOnEntity(v15, pInfo->m_nClientEntityIndex) )
        goto LABEL_5;
    }
  }
  else if ( !v7 )
  {
LABEL_5:
    if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
    {
      v8 = 0x7FFF;
      v9 = 0x7FFF;
    }
    else
    {
      v8 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      v9 = v8;
    }
    v10 = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v8 & 0x7FFF;
    if ( v10 + 2 > 1 )
    {
      v11 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v9 >> 9];
      if ( v11 != 0 )
      {
        v12 = &v11[v9 & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0 && (m_pInstance[11].m_hPrivateScope.m_hScope & 0x20) == 0 )
            (*(m_pInstance->_vptr_IHandleEntity + 66))(m_pInstance, pInfo, bAlways);
        }
      }
    }
    return;
  }
  if ( this->m_hMyWeapons.m_Vector.m_Size > 0 )
  {
    v16 = 0;
    v17 = 0;
    do
    {
      v18 = &this->m_hMyWeapons.m_Vector.m_Memory.m_pMemory[v16];
      m_Index = v18->m_Index;
      if ( v18->m_Index + 2 > 1 )
      {
        v20 = v18->m_Index;
        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[v20 & 0x1FF];
          if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
            (*(v22->m_pInstance->_vptr_IHandleEntity + 66))(v22->m_pInstance, pInfo, bAlways);
        }
      }
      ++v17;
      ++v16;
    }
    while ( this->m_hMyWeapons.m_Vector.m_Size > v17 );
  }
}


// CBaseCombatCharacter::GetFactionRelationshipDisposition  (line 2505, @0x00000000021508b0, libserver.so)
// globals: CBaseCombatCharacter::m_FactionRelationship
Disposition_t __fastcall CBaseCombatCharacter::GetFactionRelationshipDisposition(
        CBaseCombatCharacter *const this,
        int nFaction)
{
  return CBaseCombatCharacter::m_FactionRelationship[this->m_nFaction][nFaction].disposition;
}


// CBaseCombatCharacter::AddClassRelationship  (line 2517, @0x0000000002172e00, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<Relationship_t>, Element, GrowMemory, Relationship_t, Set, operator=, operator[]
// calls: CUtlMemory<Relationship_t, int>::Grow
void __fastcall CBaseCombatCharacter::AddClassRelationship(
        CBaseCombatCharacter *const this,
        Class_T class_type,
        Disposition_t disposition,
        int priority)
{
  __int64 m_Size; // r13
  int v7; // r8d
  Relationship_t *m_pMemory; // r9
  __int64 v9; // r10
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rax
  Relationship_t *v15; // rsi
  Relationship_t *v16; // rsi
  int v17; // edx
  Relationship_t *v18; // rax
  int prioritya; // [rsp+8h] [rbp-28h]
  Disposition_t dispositiona; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Relationship.m_Size;
  v7 = this->m_Relationship.m_Size - 1;
  if ( v7 >= 0 )
  {
    m_pMemory = this->m_Relationship.m_Memory.m_pMemory;
    v9 = 20LL * v7;
    v10 = m_pMemory + v9;
    v11 = &m_pMemory[-1] + v9;
    if ( *(&m_pMemory->classType + v9) == class_type )
    {
LABEL_14:
      *(v10 + 3) = disposition;
      if ( priority != 0x80000000 )
        *(&this->m_Relationship.m_Memory.m_pMemory->priority + v9) = priority;
      return;
    }
    while ( --v7 != -1 )
    {
      v12 = v11;
      v10 = v11;
      v11 -= 20;
      v9 = v12 - m_pMemory;
      if ( *(v11 + 24) == class_type )
        goto LABEL_14;
    }
  }
  v13 = this->m_Relationship.m_Size;
  if ( m_Size == this->m_Relationship.m_Memory.m_nAllocationCount )
  {
    prioritya = priority;
    dispositiona = disposition;
    CUtlMemory<Relationship_t,int>::Grow(&this->m_Relationship.m_Memory, 1);
    v13 = this->m_Relationship.m_Size;
    priority = prioritya;
    disposition = dispositiona;
  }
  this->m_Relationship.m_Size = v13 + 1;
  v14 = m_Size;
  v15 = &this->m_Relationship.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    v15->entity.m_Index = -1;
    v15->classType = Class_T::CLASS_NONE;
    v15->faction = 0;
    v15->disposition = Disposition_t::D_NU;
    v15->priority = 0;
    v16 = &this->m_Relationship.m_Memory.m_pMemory[v14];
  }
  else
  {
    v16 = 0;
  }
  v16->classType = class_type;
  this->m_Relationship.m_Memory.m_pMemory[m_Size].entity.m_Index = -1;
  this->m_Relationship.m_Memory.m_pMemory[v14].faction = 0;
  this->m_Relationship.m_Memory.m_pMemory[v14].disposition = disposition;
  v17 = 0;
  v18 = &this->m_Relationship.m_Memory.m_pMemory[v14];
  if ( priority != 0x80000000 )
    v17 = priority;
  v18->priority = v17;
}


// CBaseCombatCharacter::AddEntityRelationship  (line 2546, @0x0000000002172a40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<Relationship_t>, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Relationship_t, Set, operator CEntityInstance*, operator=, operator==, operator[]
// calls: CUtlMemory<Relationship_t, int>::Grow
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::AddEntityRelationship(
        CBaseCombatCharacter *const this,
        CBaseEntity *pEntity,
        Disposition_t disposition,
        int priority)
{
  __int64 m_Size; // r14
  int v7; // esi
  Relationship_t *m_pMemory; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  uint32 m_Index; // edx
  Relationship_t *v12; // rbx
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v14; // rdi
  CEntityIdentity *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  Relationship_t *v18; // rdx
  Relationship_t *v19; // rdx
  Relationship_t *v20; // rdi
  CEntityIdentity *m_pEntity; // rsi
  int v22; // edx
  __int16 v23; // r8
  int v24; // edx
  Relationship_t *v25; // rax
  int prioritya; // [rsp+8h] [rbp-38h]

  m_Size = this->m_Relationship.m_Size;
  v7 = this->m_Relationship.m_Size - 1;
  if ( v7 < 0 )
  {
LABEL_10:
    v16 = m_Size;
    if ( m_Size == this->m_Relationship.m_Memory.m_nAllocationCount )
    {
      prioritya = priority;
      CUtlMemory<Relationship_t,int>::Grow(&this->m_Relationship.m_Memory, 1);
      v16 = this->m_Relationship.m_Size;
      priority = prioritya;
    }
    this->m_Relationship.m_Size = v16 + 1;
    v17 = m_Size;
    v18 = &this->m_Relationship.m_Memory.m_pMemory[m_Size];
    if ( v18 != 0 )
    {
      v18->entity.m_Index = -1;
      v18->classType = Class_T::CLASS_NONE;
      v18->faction = 0;
      v18->disposition = Disposition_t::D_NU;
      v18->priority = 0;
      v19 = &this->m_Relationship.m_Memory.m_pMemory[v17];
    }
    else
    {
      v19 = 0;
    }
    v19->classType = Class_T::CLASS_NONE;
    v20 = &this->m_Relationship.m_Memory.m_pMemory[v17];
    if ( pEntity != 0 && (m_pEntity = pEntity->m_pEntity) != 0 )
    {
      v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v23 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v20->entity.m_Index) = v23 | v20->entity.m_Index & 0x8000;
      v20->entity.m_Index = (v22 << 15) | v20->entity.m_Index & 0x7FFF;
    }
    else
    {
      v20->entity.m_Index = -1;
    }
    this->m_Relationship.m_Memory.m_pMemory[v17].faction = 0;
    this->m_Relationship.m_Memory.m_pMemory[v17].disposition = disposition;
    v24 = 0;
    v25 = &this->m_Relationship.m_Memory.m_pMemory[v17];
    if ( priority != 0x80000000 )
      v24 = priority;
    v25->priority = v24;
  }
  else
  {
    m_pMemory = this->m_Relationship.m_Memory.m_pMemory;
    v9 = 20LL * v7;
    v10 = 20 * (v7 - v7) - 20;
    while ( 1 )
    {
      m_Index = m_pMemory[v9 / 0x14].entity.m_Index;
      v12 = &m_pMemory[v9 / 0x14];
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->entity.m_Index) >> 9) & 0x3F];
        if ( v14 != 0 )
        {
          v15 = &v14[v12->entity.m_Index & 0x1FF];
          if ( v15 != 0 && m_Index == v15->m_EHandle.m_Index )
            m_pInstance = v15->m_pInstance;
        }
      }
      if ( pEntity == m_pInstance )
        break;
      v9 -= 20LL;
      if ( v9 == v10 )
        goto LABEL_10;
    }
    v12->disposition = disposition;
    if ( priority != 0x80000000 )
      this->m_Relationship.m_Memory.m_pMemory[v9 / 0x14].priority = priority;
  }
}


// CBaseCombatCharacter::RemoveEntityRelationship  (line 2575, @0x00000000021439c0, libserver.so)  // inlines: Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Remove, ShiftElementsLeft, V_memmove, memmove, operator CEntityInstance*, operator==, operator[]
// calls: memmove
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseCombatCharacter::RemoveEntityRelationship(CBaseCombatCharacter *const this, CBaseEntity *pEntity)
{
  int v3; // r12d
  Relationship_t *m_pMemory; // r13
  int v5; // ecx
  Relationship_t *i; // rax
  CBaseEntity *m_pInstance; // r9
  CEntityIdentity *v8; // r8
  CEntityIdentity *v9; // r8
  int v11; // r11d

  v3 = this->m_Relationship.m_Size - 1;
  if ( v3 < 0 )
    return 0;
  m_pMemory = this->m_Relationship.m_Memory.m_pMemory;
  v5 = this->m_Relationship.m_Size - 1;
  for ( i = &m_pMemory[v3]; ; --i )
  {
    m_pInstance = 0;
    if ( i->entity.m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(i->entity.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[i->entity.m_Index & 0x1FF];
        if ( v9 != 0 && i->entity.m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    if ( pEntity == m_pInstance )
      break;
    if ( --v5 == -1 )
      return 0;
  }
  v11 = this->m_Relationship.m_Size - v5 - 1;
  if ( v11 > 0 )
  {
    memmove(i, &m_pMemory[v5 + 1], 20LL * v11);
    v3 = this->m_Relationship.m_Size - 1;
  }
  this->m_Relationship.m_Size = v3;
  return 1;
}


// CBaseCombatCharacter::AddFactionRelationship  (line 2596, @0x0000000002172c80, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, Construct<Relationship_t>, Element, GrowMemory, Relationship_t, Set, operator=, operator[]
// calls: CUtlMemory<Relationship_t, int>::Grow
void __fastcall CBaseCombatCharacter::AddFactionRelationship(
        CBaseCombatCharacter *const this,
        int nFaction,
        Disposition_t disposition,
        int priority)
{
  __int64 m_Size; // r13
  int v7; // r8d
  Relationship_t *m_pMemory; // r9
  __int64 v9; // r10
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rax
  Relationship_t *v15; // rsi
  Relationship_t *v16; // rsi
  int v17; // edx
  Relationship_t *v18; // rax
  int prioritya; // [rsp+8h] [rbp-28h]
  Disposition_t dispositiona; // [rsp+Ch] [rbp-24h]

  m_Size = this->m_Relationship.m_Size;
  v7 = this->m_Relationship.m_Size - 1;
  if ( v7 >= 0 )
  {
    m_pMemory = this->m_Relationship.m_Memory.m_pMemory;
    v9 = 20LL * v7;
    v10 = m_pMemory + v9;
    v11 = &m_pMemory[-1] + v9;
    if ( *(&m_pMemory->faction + v9) == nFaction )
    {
LABEL_14:
      *(v10 + 3) = disposition;
      if ( priority != 0x80000000 )
        *(&this->m_Relationship.m_Memory.m_pMemory->priority + v9) = priority;
      return;
    }
    while ( --v7 != -1 )
    {
      v12 = v11;
      v10 = v11;
      v11 -= 20;
      v9 = v12 - m_pMemory;
      if ( *(v11 + 28) == nFaction )
        goto LABEL_14;
    }
  }
  v13 = this->m_Relationship.m_Size;
  if ( m_Size == this->m_Relationship.m_Memory.m_nAllocationCount )
  {
    prioritya = priority;
    dispositiona = disposition;
    CUtlMemory<Relationship_t,int>::Grow(&this->m_Relationship.m_Memory, 1);
    v13 = this->m_Relationship.m_Size;
    priority = prioritya;
    disposition = dispositiona;
  }
  this->m_Relationship.m_Size = v13 + 1;
  v14 = m_Size;
  v15 = &this->m_Relationship.m_Memory.m_pMemory[m_Size];
  if ( v15 != 0 )
  {
    v15->entity.m_Index = -1;
    v15->classType = Class_T::CLASS_NONE;
    v15->faction = 0;
    v15->disposition = Disposition_t::D_NU;
    v15->priority = 0;
    v16 = &this->m_Relationship.m_Memory.m_pMemory[v14];
  }
  else
  {
    v16 = 0;
  }
  v16->classType = Class_T::CLASS_NONE;
  this->m_Relationship.m_Memory.m_pMemory[m_Size].entity.m_Index = -1;
  this->m_Relationship.m_Memory.m_pMemory[v14].faction = nFaction;
  this->m_Relationship.m_Memory.m_pMemory[v14].disposition = disposition;
  v17 = 0;
  v18 = &this->m_Relationship.m_Memory.m_pMemory[v14];
  if ( priority != 0x80000000 )
    v17 = priority;
  v18->priority = v17;
}


// CBaseCombatCharacter::ChangeFaction  (line 2625, @0x0000000002177a80, libserver.so)  // inlines: AddToTail, AllocateDefaultFactionRelationships, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndFastRemove, CBaseCombatCharacter::AllocateDefaultFactionRelationships, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// globals: CBaseCombatCharacter::m_aFactions, CBaseCombatCharacter::m_FactionRelationship
void __fastcall CBaseCombatCharacter::ChangeFaction(CBaseCombatCharacter *const this, int nNewFaction)
{
  __int64 v2; // r12
  __int64 m_nFaction; // rcx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  CEntityIdentity *v7; // rax
  int v8; // edx
  __int16 v9; // cx
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *v10; // rbx
  __int64 m_Size; // r12
  int v12; // eax
  CHandle<CBaseEntity> *v13; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-20h] BYREF

  v2 = nNewFaction;
  m_nFaction = this->m_nFaction;
  if ( m_nFaction != 0 && CBaseCombatCharacter::m_aFactions.m_Size != 0 )
  {
    m_pEntity = this->m_pEntity;
    src.m_Index = -1;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndFastRemove(
      &CBaseCombatCharacter::m_aFactions.m_Memory.m_pMemory[m_nFaction],
      &src);
  }
  this->m_nFaction = v2;
  if ( v2 != 0 )
  {
    if ( CBaseCombatCharacter::m_aFactions.m_Size == 0 && CBaseCombatCharacter::m_FactionRelationship == 0 )
    {
      CBaseCombatCharacter::AllocateDefaultFactionRelationships();
      v2 = this->m_nFaction;
    }
    v7 = this->m_pEntity;
    src.m_Index = -1;
    if ( v7 != 0 )
    {
      v8 = (v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1);
      v9 = 0x7FFF;
      if ( v7->m_EHandle.m_Index != -1 )
        v9 = v7->m_EHandle.m_Index & 0x7FFF;
      LOWORD(src.m_Index) = v9 | src.m_Index & 0x8000;
      src.m_Index = (v8 << 15) | src.m_Index & 0x7FFF;
    }
    v10 = &CBaseCombatCharacter::m_aFactions.m_Memory.m_pMemory[v2];
    m_Size = v10->m_Size;
    v12 = v10->m_Size;
    if ( m_Size == v10->m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v10->m_Memory, 1);
      v12 = v10->m_Size;
    }
    v10->m_Size = v12 + 1;
    v13 = &v10->m_Memory.m_pMemory[m_Size];
    if ( v13 != 0 )
      v13->m_Index = src.m_Index;
  }
}


// CBaseCombatCharacter::GetNumFactions  (line 2674, @0x0000000002177c00, libserver.so)  // inlines: AllocateDefaultFactionRelationships
// calls: CBaseCombatCharacter::AllocateDefaultFactionRelationships
// globals: CBaseCombatCharacter::m_aFactions, CBaseCombatCharacter::m_FactionRelationship
int __cdecl CBaseCombatCharacter::GetNumFactions()
{
  int result; // eax

  result = CBaseCombatCharacter::m_aFactions.m_Size;
  if ( CBaseCombatCharacter::m_aFactions.m_Size == 0 && CBaseCombatCharacter::m_FactionRelationship == 0 )
  {
    CBaseCombatCharacter::AllocateDefaultFactionRelationships();
    return CBaseCombatCharacter::m_aFactions.m_Size;
  }
  return result;
}


// CBaseCombatCharacter::GetEntitiesInFaction  (line 2688, @0x00000000021508e0, libserver.so)  // inlines: operator[]
// globals: CBaseCombatCharacter::m_aFactions
CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *__fastcall CBaseCombatCharacter::GetEntitiesInFaction(
        int nFaction)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *result; // rax

  result = 0;
  if ( CBaseCombatCharacter::m_aFactions.m_Size != 0 )
    return &CBaseCombatCharacter::m_aFactions.m_Memory.m_pMemory[nFaction];
  return result;
}


// CBaseCombatCharacter::AllocateDefaultRelationships  (line 2700, @0x0000000002150990, libserver.so)  // inlines: CEntityHandle, CHandle, GameRules, Relationship_t
// calls: operator new [], CBaseCombatCharacter::SetDefaultRelationship
// callers: CBaseCombatCharacter::SetDefaultRelationship, CBaseCombatCharacter::AllocateDefaultRelationships, CBaseCombatCharacter::FindEntityRelationship
// globals: CBaseCombatCharacter::m_DefaultRelationship
void __cdecl CBaseCombatCharacter::AllocateDefaultRelationships()
{
  int v0; // eax
  size_t v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // r12d
  __int64 v4; // rax
  __int64 v5; // r13
  Relationship_t *v6; // rax
  __int64 v7; // rcx
  Relationship_t *i; // rdx
  Class_T v9; // r14d
  Class_T v10; // esi
  size_t nSize; // [rsp+8h] [rbp-38h]

  if ( g_pGameRules != 0 )
  {
    v0 = (*(g_pGameRules->_vptr_CGameRules + 108))(g_pGameRules);
    v1 = -1;
    v2 = v0;
    v3 = v0;
    if ( v0 <= 0xFE0000000000000LL )
      v1 = 8LL * v0;
  }
  else
  {
    v1 = 32;
    v2 = 4;
    v3 = 4;
  }
  CBaseCombatCharacter::m_DefaultRelationship = operator new[](v1);
  if ( v3 > 0 )
  {
    v4 = 20 * v2;
    if ( v2 > 0x660000000000000LL )
      v4 = -1;
    v5 = 0;
    nSize = v4;
    do
    {
      v6 = operator new[](nSize);
      v7 = 0;
      for ( i = v6; v7 != v2; i[-1].priority = 0 )
      {
        ++v7;
        i->entity.m_Index = -1;
        ++i;
        i[-1].classType = Class_T::CLASS_NONE;
        i[-1].faction = 0;
        i[-1].disposition = Disposition_t::D_NU;
      }
      v9 = Class_T::CLASS_NONE;
      CBaseCombatCharacter::m_DefaultRelationship[v5] = v6;
      do
      {
        v10 = v9++;
        CBaseCombatCharacter::SetDefaultRelationship(v5, v10, Disposition_t::D_NU, 0);
      }
      while ( v9 != v3 );
      ++v5;
    }
    while ( v3 > v5 );
  }
}


// CBaseCombatCharacter::AllocateDefaultRelationships  (line 2700, @0x0000000002150ae0, libserver.so)
// calls: CBaseCombatCharacter::AllocateDefaultRelationships
// globals: CBaseCombatCharacter::m_DefaultRelationship
void __cdecl CBaseCombatCharacter::AllocateDefaultRelationships()
{
  if ( CBaseCombatCharacter::m_DefaultRelationship == 0 )
    CBaseCombatCharacter::AllocateDefaultRelationships();
}


// CBaseCombatCharacter::AllocateDefaultFactionRelationships  (line 2724, @0x00000000021778f0, libserver.so)  // inlines: CEntityHandle, CHandle, GameRules, Relationship_t
// calls: CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, CUtlMemory<CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >, int> >::SetCount, operator new [], CBaseCombatCharacter::SetDefaultFactionRelationship
// callers: CBaseCombatCharacter::AllocateDefaultFactionRelationships, CBaseCombatCharacter::ChangeFaction, CBaseCombatCharacter::GetNumFactions, CBaseCombatCharacter::SetDefaultFactionRelationship
// globals: CBaseCombatCharacter::m_aFactions, CBaseCombatCharacter::m_FactionRelationship
void __cdecl CBaseCombatCharacter::AllocateDefaultFactionRelationships()
{
  int v0; // r12d
  unsigned __int64 v1; // rbx
  size_t v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r14
  Relationship_t *v5; // rax
  __int64 v6; // rcx
  Relationship_t *i; // rdx
  int v8; // r15d
  int v9; // esi
  size_t nSize; // [rsp+8h] [rbp-38h]

  if ( g_pGameRules != 0 )
  {
    v0 = (*(g_pGameRules->_vptr_CGameRules + 109))(g_pGameRules);
    CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,CUtlMemory<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,int>>::SetCount(
      &CBaseCombatCharacter::m_aFactions,
      v0);
    v1 = v0;
    v2 = -1;
    if ( v0 <= 0xFE0000000000000LL )
      v2 = 8LL * v0;
  }
  else
  {
    v1 = 1;
    v0 = 1;
    CUtlVectorBase<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,CUtlMemory<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>,int>>::SetCount(
      &CBaseCombatCharacter::m_aFactions,
      1);
    v2 = 8;
  }
  CBaseCombatCharacter::m_FactionRelationship = operator new[](v2);
  if ( v0 > 0 )
  {
    v3 = 20 * v1;
    if ( v1 > 0x660000000000000LL )
      v3 = -1;
    v4 = 0;
    nSize = v3;
    do
    {
      v5 = operator new[](nSize);
      v6 = 0;
      for ( i = v5; v6 != v1; i[-1].priority = 0 )
      {
        ++v6;
        i->entity.m_Index = -1;
        ++i;
        i[-1].classType = Class_T::CLASS_NONE;
        i[-1].faction = 0;
        i[-1].disposition = Disposition_t::D_NU;
      }
      v8 = 0;
      CBaseCombatCharacter::m_FactionRelationship[v4] = v5;
      do
      {
        v9 = v8++;
        CBaseCombatCharacter::SetDefaultFactionRelationship(v4, v9, Disposition_t::D_NU, 0);
      }
      while ( v8 != v0 );
      ++v4;
    }
    while ( v0 > v4 );
  }
}


// CBaseCombatCharacter::AllocateDefaultFactionRelationships  (line 2724, @0x0000000002177a60, libserver.so)
// calls: CBaseCombatCharacter::AllocateDefaultFactionRelationships
// globals: CBaseCombatCharacter::m_FactionRelationship
void __cdecl CBaseCombatCharacter::AllocateDefaultFactionRelationships()
{
  if ( CBaseCombatCharacter::m_FactionRelationship == 0 )
    CBaseCombatCharacter::AllocateDefaultFactionRelationships();
}


// CBaseCombatCharacter::SetDefaultRelationship  (line 2747, @0x0000000002150910, libserver.so)  // inlines: AllocateDefaultRelationships
// calls: CBaseCombatCharacter::AllocateDefaultRelationships
// callers: CBaseCombatCharacter::AllocateDefaultRelationships
// globals: CBaseCombatCharacter::m_DefaultRelationship
void __fastcall CBaseCombatCharacter::SetDefaultRelationship(
        Class_T nClass,
        Class_T nClassTarget,
        Disposition_t nDisposition,
        int nPriority)
{
  Relationship_t **v4; // r8
  __int64 v5; // rax
  Relationship_t **v6; // rsi
  int nPrioritya; // [rsp+0h] [rbp-10h]
  Disposition_t nDispositiona; // [rsp+4h] [rbp-Ch]
  Class_T nClassTargeta; // [rsp+8h] [rbp-8h]
  Class_T nClassa; // [rsp+Ch] [rbp-4h]

  v4 = CBaseCombatCharacter::m_DefaultRelationship;
  if ( CBaseCombatCharacter::m_DefaultRelationship == 0 )
  {
    nPrioritya = nPriority;
    nDispositiona = nDisposition;
    nClassTargeta = nClassTarget;
    nClassa = nClass;
    CBaseCombatCharacter::AllocateDefaultRelationships();
    v4 = CBaseCombatCharacter::m_DefaultRelationship;
    nPriority = nPrioritya;
    nDisposition = nDispositiona;
    nClassTarget = nClassTargeta;
    nClass = nClassa;
  }
  v5 = nClassTarget;
  v4[nClass][v5].classType = nClassTarget;
  v6 = &CBaseCombatCharacter::m_DefaultRelationship[nClass];
  (*v6)[v5].disposition = nDisposition;
  (*v6)[v5].priority = nPriority;
}


// CBaseCombatCharacter::SetDefaultFactionRelationship  (line 2757, @0x0000000002177c30, libserver.so)  // inlines: AllocateDefaultFactionRelationships
// calls: CBaseCombatCharacter::AllocateDefaultFactionRelationships
// callers: CBaseCombatCharacter::AllocateDefaultFactionRelationships
// globals: CBaseCombatCharacter::m_FactionRelationship
void __fastcall CBaseCombatCharacter::SetDefaultFactionRelationship(
        int nFaction,
        int nFactionTarget,
        Disposition_t nDisposition,
        int nPriority)
{
  Relationship_t **v4; // rax
  Relationship_t **v5; // rdi
  __int64 v6; // rax
  int nPrioritya; // [rsp+0h] [rbp-10h]
  Disposition_t nDispositiona; // [rsp+4h] [rbp-Ch]
  int nFactionTargeta; // [rsp+8h] [rbp-8h]
  int nFactiona; // [rsp+Ch] [rbp-4h]

  v4 = CBaseCombatCharacter::m_FactionRelationship;
  if ( CBaseCombatCharacter::m_FactionRelationship == 0 )
  {
    nPrioritya = nPriority;
    nDispositiona = nDisposition;
    nFactionTargeta = nFactionTarget;
    nFactiona = nFaction;
    CBaseCombatCharacter::AllocateDefaultFactionRelationships();
    v4 = CBaseCombatCharacter::m_FactionRelationship;
    nPriority = nPrioritya;
    nDisposition = nDispositiona;
    nFactionTarget = nFactionTargeta;
    nFaction = nFactiona;
  }
  v5 = &v4[nFaction];
  v6 = nFactionTarget;
  (*v5)[v6].faction = nFactionTarget;
  (*v5)[v6].disposition = nDisposition;
  (*v5)[v6].priority = nPriority;
}


// CBaseCombatCharacter::GetDefaultFactionRelationship  (line 2767, @0x0000000002150b00, libserver.so)
// globals: CBaseCombatCharacter::m_FactionRelationship
Disposition_t __fastcall CBaseCombatCharacter::GetDefaultFactionRelationship(int nFaction, int nFactionTarget)
{
  return CBaseCombatCharacter::m_FactionRelationship[nFaction][nFactionTarget].disposition;
}


// CBaseCombatCharacter::GetDefaultRelationshipDisposition  (line 2777, @0x0000000002150b30, libserver.so)
// callers: CBasePlayer::AutoaimDeflection
// globals: CBaseCombatCharacter::m_DefaultRelationship
Disposition_t __fastcall CBaseCombatCharacter::GetDefaultRelationshipDisposition(
        CBaseCombatCharacter *const this,
        Class_T nClassTarget)
{
  Relationship_t **v2; // r12

  v2 = CBaseCombatCharacter::m_DefaultRelationship;
  return v2[(*(this->_vptr_IHandleEntity + 47))(this)][nClassTarget].disposition;
}


// CBaseCombatCharacter::FindEntityRelationship  (line 2790, @0x0000000002150b70, libserver.so)  // inlines: AllocateDefaultRelationships, CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Relationship_t, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: __cxa_guard_acquire, __cxa_guard_release, CBaseCombatCharacter::AllocateDefaultRelationships
// callers: CBaseCombatCharacter::IRelationType, CBaseCombatCharacter::IRelationPriority
// globals: CEntityHandle::gm_pEntityList, CBaseCombatCharacter::m_FactionRelationship, CBaseCombatCharacter::m_DefaultRelationship, `guard variable for'CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy, CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy
const Relationship_t *__fastcall CBaseCombatCharacter::FindEntityRelationship(
        CBaseCombatCharacter *const this,
        CBaseEntity *pTarget)
{
  int m_Size; // edx
  const Relationship_t *result; // rax
  const Relationship_t *v6; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  __int64 v9; // r13
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  const Relationship_t *v14; // rcx
  const Relationship_t *v15; // rdi
  __int64 m_nFaction; // rdx
  Relationship_t **v17; // r13
  Relationship_t *v18; // r12

  if ( pTarget != 0 )
  {
    m_Size = this->m_Relationship.m_Size;
    if ( m_Size <= 0 )
    {
LABEL_11:
      if ( (*(pTarget->_vptr_IHandleEntity + 47))(pTarget) != 0 && this->m_Relationship.m_Size > 0 )
      {
        v9 = 0;
        v10 = 0;
        while ( (*(pTarget->_vptr_IHandleEntity + 47))(pTarget) != this->m_Relationship.m_Memory.m_pMemory[v9].classType )
        {
          ++v10;
          ++v9;
          if ( v10 >= this->m_Relationship.m_Size )
            goto LABEL_17;
        }
        return &this->m_Relationship.m_Memory.m_pMemory[v9];
      }
      else
      {
LABEL_17:
        v11 = (*(pTarget->_vptr_IHandleEntity + 147))(pTarget);
        if ( v11 != 0 )
        {
          v12 = *(v11 + 1456);
          if ( v12 != 0 )
          {
            v13 = this->m_Relationship.m_Size;
            if ( v13 > 0 )
            {
              result = this->m_Relationship.m_Memory.m_pMemory;
              if ( v12 == result->faction )
                return result;
              v14 = result + 1;
              v15 = &result[(v13 - 1) + 1];
              while ( v14 != v15 )
              {
                result = v14++;
                if ( v12 == v14[-1].faction )
                  return result;
              }
            }
            if ( CBaseCombatCharacter::m_FactionRelationship != 0 )
            {
              m_nFaction = this->m_nFaction;
              if ( m_nFaction != 0 )
                return &CBaseCombatCharacter::m_FactionRelationship[m_nFaction][v12];
            }
          }
        }
        v17 = CBaseCombatCharacter::m_DefaultRelationship;
        if ( CBaseCombatCharacter::m_DefaultRelationship == 0 )
        {
          CBaseCombatCharacter::AllocateDefaultRelationships();
          v17 = CBaseCombatCharacter::m_DefaultRelationship;
        }
        v18 = v17[(*(this->_vptr_IHandleEntity + 47))(this)];
        return &v18[(*(pTarget->_vptr_IHandleEntity + 47))(pTarget)];
      }
    }
    else
    {
      result = this->m_Relationship.m_Memory.m_pMemory;
      v6 = &result[(m_Size - 1) + 1];
      while ( 1 )
      {
        if ( result->entity.m_Index + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(result->entity.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[result->entity.m_Index & 0x1FF];
            if ( v8 != 0 && result->entity.m_Index == v8->m_EHandle.m_Index && pTarget == v8->m_pInstance )
              break;
          }
        }
        if ( ++result == v6 )
          goto LABEL_11;
      }
    }
  }
  else
  {
    if ( `guard variable for'CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy) != 0 )
    {
      CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy.entity.m_Index = -1;
      CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy.classType = Class_T::CLASS_NONE;
      CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy.faction = 0;
      CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy.disposition = Disposition_t::D_NU;
      CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy.priority = 0;
      __cxa_guard_release(&`guard variable for'CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy);
    }
    return &CBaseCombatCharacter::FindEntityRelationship(CBaseEntity *)::dummy;
  }
  return result;
}


// CBaseCombatCharacter::IRelationType  (line 2849, @0x0000000002150dd0, libserver.so)
// calls: CBaseCombatCharacter::FindEntityRelationship
Disposition_t __fastcall CBaseCombatCharacter::IRelationType(CBaseCombatCharacter *const this, CBaseEntity *pTarget)
{
  Disposition_t result; // eax

  result = Disposition_t::D_NU;
  if ( pTarget != 0 )
    return CBaseCombatCharacter::FindEntityRelationship(this, pTarget)->disposition;
  return result;
}


// CBaseCombatCharacter::IRelationPriority  (line 2862, @0x0000000002150df0, libserver.so)
// calls: CBaseCombatCharacter::FindEntityRelationship
int __fastcall CBaseCombatCharacter::IRelationPriority(CBaseCombatCharacter *const this, CBaseEntity *pTarget)
{
  int result; // eax

  result = 0;
  if ( pTarget != 0 )
    return CBaseCombatCharacter::FindEntityRelationship(this, pTarget)->priority;
  return result;
}


// CBaseCombatCharacter::Weapon_ShootPosition  (line 2875, @0x000000000213ed00, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin
Vector __fastcall CBaseCombatCharacter::Weapon_ShootPosition(CBaseCombatCharacter *const this, int nHand)
{
  const QAngle *AbsAngles; // rax
  float z; // xmm0_4
  float y; // xmm1_4
  float x; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v12; // [rsp+Ch] [rbp-84h]
  float v13; // [rsp+10h] [rbp-80h]
  float v14; // [rsp+14h] [rbp-7Ch]
  float v15; // [rsp+18h] [rbp-78h]
  float v16; // [rsp+1Ch] [rbp-74h]
  float v17; // [rsp+20h] [rbp-70h]
  float v18; // [rsp+24h] [rbp-6Ch]
  float v19; // [rsp+28h] [rbp-68h]
  float v20; // [rsp+2Ch] [rbp-64h]
  Vector forward; // [rsp+40h] [rbp-50h] BYREF
  Vector right; // [rsp+50h] [rbp-40h] BYREF
  Vector up; // [rsp+60h] [rbp-30h] BYREF
  float v24[8]; // [rsp+70h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &forward, &right, &up);
  z = this->m_HackedGunPos.z;
  y = this->m_HackedGunPos.y;
  v20 = up.x * z;
  v19 = up.y * z;
  v18 = z * up.z;
  x = this->m_HackedGunPos.x;
  v12 = forward.x * y;
  v17 = right.x * x;
  v13 = forward.y * y;
  v16 = right.y * x;
  v14 = y * forward.z;
  v15 = right.z * x;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v8 = ((v12 + AbsOrigin->x) + v17) + v20;
  v9 = (v14 + AbsOrigin->z) + v15;
  v24[1] = ((v13 + AbsOrigin->y) + v16) + v19;
  v24[0] = v8;
  *&result.x = *v24;
  result.z = v9 + v18;
  return result;
}


// CBaseCombatCharacter::Weapon_ShootAngles  (line 2889, @0x000000000213cf80, libserver.so)
QAngle __fastcall CBaseCombatCharacter::Weapon_ShootAngles(CBaseCombatCharacter *const this, int nHand)
{
  __int64 v2; // rax
  QAngle result; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = (*(this->_vptr_IHandleEntity + 165))(this, nHand);
  *&result.x = *v2;
  result.z = *(v2 + 8);
  return result;
}


// CBaseCombatCharacter::FindHealthItem  (line 2896, @0x00000000021657f0, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ClassMatches, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IgnoreOneEntityFindByContents, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetInteractsWith, VectorAdd, VectorSubtract, operator CBaseEntity*, operator+, operator-, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInBox, __dynamic_cast, CEntityIdentity::ClassMatches, CUtlMemory<COverlapHit, int>::Purge, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// strings: "item_health*"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CBaseEntity
CBaseEntity *__fastcall CBaseCombatCharacter::FindHealthItem(
        CBaseCombatCharacter *const this,
        const Vector *const vPosition,
        const Vector *const vRange)
{
  uint16 v6; // ax
  float x; // xmm5_4
  float y; // xmm2_4
  vec_t v9; // xmm6_4
  float v10; // xmm3_4
  vec_t v11; // xmm5_4
  float z; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rbx
  int v15; // r12d
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CBaseEntity *v18; // rax
  CBaseEntity *v19; // r15
  uint32 v20; // edx
  Vector vMins; // [rsp+0h] [rbp-10A0h] BYREF
  Vector vMaxs; // [rsp+10h] [rbp-1090h] BYREF
  CGameQueryAttributes filter; // [rsp+20h] [rbp-1080h] BYREF
  COverlapList list; // [rsp+50h] [rbp-1050h] BYREF
  unsigned __int64 v26; // [rsp+1068h] [rbp-38h]

  filter.m_nHierarchyId = 0;
  v26 = __readfsqword(0x28u);
  list.m_list.m_Size = 0;
  list.m_list.m_Memory.m_pMemory = &list.m_list.m_Memory.m_FixedMemory;
  list.m_list.m_Memory.m_nAllocationCount = 64;
  list.m_list.m_Memory.m_nGrowSize = 0x80000000;
  filter.m_nInteractsExclude = 0;
  filter.m_nInteractsAs = 0;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nCollisionGroup = 3;
  filter.m_nInteractsWith = 512;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(this);
  v6 = HierarchyIDFromBaseEntity(this);
  x = vPosition->x;
  filter.m_nHierarchyId = v6;
  y = vRange->y;
  v9 = x + vRange->x;
  v10 = vPosition->y;
  v11 = x - vRange->x;
  z = vPosition->z;
  vMaxs.x = v9;
  v13 = vRange->z;
  vMins.x = v11;
  vMaxs.y = v10 + y;
  vMins.y = v10 - y;
  vMins.z = z - v13;
  vMaxs.z = z + v13;
  CGamePhysicsQueryInterface::EntitiesInBox(
    g_pPhysicsQuery,
    &vMins,
    &vMaxs,
    &filter,
    OverlapTest_t::OVERLAP_TEST_SHAPE,
    &list);
  if ( list.m_list.m_Size <= 0 )
  {
LABEL_13:
    v19 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      LODWORD(vMaxs.x) = list.m_list.m_Memory.m_pMemory[v14].m_ShapeAttributes.m_nEntityId;
      if ( (LODWORD(vMaxs.x) + 2) > 1 )
      {
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vMaxs.x) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[LOWORD(vMaxs.x) & 0x1FF];
          if ( v17 != 0 && LODWORD(vMaxs.x) == v17->m_EHandle.m_Index && v17->m_pInstance != 0 )
          {
            v18 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CItem, 0);
            v19 = v18;
            if ( v18 != 0
              && CEntityIdentity::ClassMatches(v18->m_pEntity, "item_health*")
              && (*(this->_vptr_IHandleEntity + 179))(this, v19, 16449, 0) != 0 )
            {
              break;
            }
          }
        }
      }
      ++v15;
      ++v14;
      if ( v15 >= list.m_list.m_Size )
        goto LABEL_13;
    }
  }
  list.m_list.m_Size = 0;
  v20 = list.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_list.m_Memory.m_nAllocationCount < 0
    || list.m_list.m_Memory.m_pMemory == &list.m_list.m_Memory.m_FixedMemory )
  {
    if ( v20 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&list.m_list.m_Memory);
  }
  else if ( list.m_list.m_Memory.m_pMemory != 0 && v20 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v19;
}


// CBaseCombatCharacter::Weapon_IsOnGround  (line 2928, @0x0000000002150e10, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
// callers: CBaseCombatCharacter::Weapon_FindUsable
bool __fastcall CBaseCombatCharacter::Weapon_IsOnGround(CBaseCombatCharacter *const this, CBaseCombatWeapon *pWeapon)
{
  bool result; // al
  float v4; // xmm1_4

  result = 0;
  if ( pWeapon->m_pConstraint == 0 )
  {
    (*(pWeapon->_vptr_IHandleEntity + 62))(pWeapon);
    return fabs(v4 - CBaseEntity::GetAbsOrigin(this)->z) < 12.0;
  }
  return result;
}


// CBaseCombatCharacter::Weapon_FindUsable  (line 2949, @0x0000000002157d90, libserver.so)  // inlines: CEntityHandle, CGameTrace, CUtlSymbolLarge, ClassMatches, FClassnameIs, FastSqrt, GetActiveWeapon, GetClassName, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, Length, LengthSqr, LookupEntity, RnCollisionAttr_t, VectorAdd, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseCombatWeapon*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, CBaseCombatWeapon::GetAvailableWeaponsInBox, CBaseCombatWeapon::IsLocked, CBaseEntity::GetLocalOrigin, CEntityIdentity::ClassMatches, CBaseCombatCharacter::Weapon_IsOnGround, CBaseCombatWeapon::Lock, CGameTrace::Init, UTIL_TraceEntity
// strings: "weapon_ar2"
CBaseEntity *__fastcall CBaseCombatCharacter::Weapon_FindUsable(
        CBaseCombatCharacter *const this,
        const Vector *const range)
{
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm2_4
  const Vector *v7; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  int AvailableWeaponsInBox; // eax
  CBaseCombatWeapon **v11; // r14
  CBaseCombatWeapon **v12; // r12
  CBaseCombatWeapon *v13; // r15
  float v14; // xmm1_4
  unsigned __int16 v15; // dx
  int v16; // esi
  vec_t v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const Vector *LocalOrigin; // rax
  const CEntityIdentity *m_pEntity; // rdi
  float fBestDist; // [rsp+1Ch] [rbp-344h]
  CBaseCombatWeapon *pBestWeapon; // [rsp+20h] [rbp-340h]
  const Vector *fCurDista; // [rsp+28h] [rbp-338h]
  float fCurDist; // [rsp+28h] [rbp-338h]
  Vector mins; // [rsp+30h] [rbp-330h] BYREF
  Vector maxs; // [rsp+40h] [rbp-320h] BYREF
  Vector velocity; // [rsp+50h] [rbp-310h] BYREF
  Vector vAboveWeapon; // [rsp+60h] [rbp-300h] BYREF
  Vector vecAbsEnd; // [rsp+70h] [rbp-2F0h] BYREF
  trace_t tr; // [rsp+80h] [rbp-2E0h] BYREF
  CBaseCombatWeapon *weaponList[64]; // [rsp+130h] [rbp-230h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v5 = AbsOrigin->z - range->z;
  v6 = AbsOrigin->x - range->x;
  mins.y = AbsOrigin->y - range->y;
  mins.z = v5;
  mins.x = v6;
  v7 = CBaseEntity::GetAbsOrigin(this);
  v8 = v7->z + range->z;
  v9 = v7->x + range->x;
  maxs.y = v7->y + range->y;
  maxs.z = v8;
  maxs.x = v9;
  AvailableWeaponsInBox = CBaseCombatWeapon::GetAvailableWeaponsInBox(weaponList, 64, &mins, &maxs);
  if ( AvailableWeaponsInBox <= 0 )
    return 0;
  v11 = weaponList;
  pBestWeapon = 0;
  v12 = &weaponList[(AvailableWeaponsInBox - 1) + 1];
  fBestDist = 1000000.0;
  do
  {
    while ( 1 )
    {
      v13 = *v11;
      (*((*v11)->_vptr_IHandleEntity + 173))(*v11, &velocity, 0);
      if ( (*(v13->_vptr_IHandleEntity + 333))(v13) != 0 )
      {
        v14 = velocity.z * velocity.z;
        if ( (((velocity.x * velocity.x) + (velocity.y * velocity.y)) + (velocity.z * velocity.z)) <= 1.0
          && (*(this->_vptr_IHandleEntity + 306))(this, v13) != 0
          && !CBaseCombatWeapon::IsLocked(v13, this) )
        {
          if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
          {
            v15 = 0x7FFF;
            v16 = 0x7FFF;
          }
          else
          {
            v15 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
            v16 = v15;
          }
          LODWORD(v17) = (this->m_hActiveWeapon.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
          tr.startpos.x = v17;
          if ( (LODWORD(v17) + 2) <= 1
            || (v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) == 0
            || (v19 = &v18[v16 & 0x1FF]) == 0
            || LODWORD(v17) != v19->m_EHandle.m_Index
            || v19->m_pInstance == 0
            || (m_pEntity = v13->m_pEntity)->m_designerName.u.m_Id != v19->m_pInstance->m_pEntity->m_designerName.u.m_Id
            && !CEntityIdentity::ClassMatches(m_pEntity, "weapon_pistol") )
          {
            fCurDista = CBaseEntity::GetLocalOrigin(this);
            LocalOrigin = CBaseEntity::GetLocalOrigin(v13);
            fCurDist = fsqrt(
                         (((LocalOrigin->x - fCurDista->x) * (LocalOrigin->x - fCurDista->x))
                        + ((LocalOrigin->y - fCurDista->y) * (LocalOrigin->y - fCurDista->y)))
                       + ((LocalOrigin->z - fCurDista->z) * (LocalOrigin->z - fCurDista->z)));
            if ( (v13->m_spawnflags.m_Value & 2) != 0 )
              fCurDist = 0.5 * fCurDist;
            if ( pBestWeapon == 0 )
              goto LABEL_30;
            if ( CEntityIdentity::ClassMatches(v13->m_pEntity, "weapon_ar2") )
              fCurDist = 0.5 * fCurDist;
            if ( ((*(v13->_vptr_IHandleEntity + 385))(v13) & 0x6000) != 0 && fCurDist <= fBestDist )
            {
LABEL_30:
              if ( !CBaseCombatCharacter::Weapon_IsOnGround(this, v13) )
                break;
              memset(&tr.m_ShapeAttributes, 0, 31);
              tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
              CGameTrace::Init(&tr);
              vAboveWeapon = *CBaseEntity::GetAbsOrigin(v13);
              vecAbsEnd.x = vAboveWeapon.x + 0.0;
              vecAbsEnd.y = vAboveWeapon.y + 0.0;
              vecAbsEnd.z = vAboveWeapon.z + 1.0;
              UTIL_TraceEntity(this, &vAboveWeapon, &vecAbsEnd, 0x87001u, v13, 4, &tr);
              if ( !tr.startsolid && tr.fraction >= 1.0 )
                break;
            }
          }
        }
      }
      if ( ++v11 == v12 )
        goto LABEL_25;
    }
    if ( (*(this->_vptr_IHandleEntity + 179))(this, v13, 16449, 0) == 0 )
    {
      v13 = pBestWeapon;
      fCurDist = fBestDist;
    }
    ++v11;
    pBestWeapon = v13;
    fBestDist = fCurDist;
  }
  while ( v11 != v12 );
LABEL_25:
  if ( pBestWeapon != 0 )
    CBaseCombatWeapon::Lock(pBestWeapon, COERCE_DOUBLE(0x40000000), v14, this);
  return pBestWeapon;
}


// CBaseCombatCharacter::GiveAmmo  (line 3081, @0x0000000002142df0, libserver.so)  // inlines: NetworkStateChanged, Set
// calls: GetAmmoDef, memcmp, CBaseEntity::EmitSound
// strings: "BaseCombatCharacter.AmmoPickup"
int __fastcall CBaseCombatCharacter::GiveAmmo(
        CBaseCombatCharacter *const this,
        int iCount,
        int iAmmoIndex,
        bool bSuppressSound)
{
  unsigned int v4; // ebx
  int result; // eax
  CAmmoDef *AmmoDef; // rax
  int v10; // eax
  __int64 v11; // r8
  char *v12; // r14
  int v13; // edx
  unsigned int v14; // ecx
  int v15; // r15d
  unsigned int v16; // [rsp+Ch] [rbp-44h]
  int s2[13]; // [rsp+1Ch] [rbp-34h] BYREF

  v4 = iCount;
  if ( iCount <= 0 || (*(g_pGameRules->_vptr_CGameRules + 102))(g_pGameRules, this) == 0 || iAmmoIndex > 0x1F )
    return 0;
  AmmoDef = GetAmmoDef();
  v10 = (*AmmoDef->_vptr_CAmmoDef)(AmmoDef, iAmmoIndex, this);
  v11 = iAmmoIndex;
  v12 = this + 4 * iAmmoIndex;
  v13 = *(v12 + 373);
  v14 = v10 - v13;
  if ( v4 < v10 - v13 )
  {
    v14 = v4;
  }
  else
  {
    result = 0;
    v4 = v14;
    if ( v14 == 0 )
      return result;
  }
  if ( !bSuppressSound )
  {
    v16 = v14;
    CBaseEntity::EmitSound(this, "BaseCombatCharacter.AmmoPickup", 0.0, 0);
    v13 = *(v12 + 373);
    v11 = iAmmoIndex;
    v14 = v16;
  }
  v15 = v13 + v14;
  s2[0] = v13 + v14;
  if ( memcmp(&this->m_iAmmo.m_Value[v11], s2, 4u) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1492, iAmmoIndex, 0xFFFFFFFFLL);
    *(v12 + 373) = v15;
  }
  return v4;
}


// CBaseCombatCharacter::GiveAmmo  (line 3114, @0x0000000002150e80, libserver.so)
// calls: GetAmmoDef, CAmmoDef::Index, Msg
// callers: CC_GiveCurrentAmmo, CBasePlayer::CheatImpulseCommands
// strings: "ERROR: Attempting to give unknown ammo type (%s)\n"
int __fastcall CBaseCombatCharacter::GiveAmmo(
        CBaseCombatCharacter *const this,
        int iCount,
        const char *szName,
        bool bSuppressSound)
{
  CAmmoDef *AmmoDef; // rax
  unsigned int v9; // eax

  AmmoDef = GetAmmoDef();
  v9 = CAmmoDef::Index(AmmoDef, szName);
  if ( v9 != -1 )
    return (*(this->_vptr_IHandleEntity + 298))(this, iCount, v9, bSuppressSound);
  Msg("ERROR: Attempting to give unknown ammo type (%s)\n", szName);
  return 0;
}


// CBaseCombatCharacter::VPhysicsUpdate  (line 3127, @0x0000000002159740, libserver.so)
// calls: CBaseCombatCharacter::ApplyStressDamage, CBaseEntity::VPhysicsUpdate
// callers: CPhysicsCannister::VPhysicsUpdate
void __fastcall CBaseCombatCharacter::VPhysicsUpdate(CBaseCombatCharacter *const this, IPhysicsObject *pPhysics)
{
  if ( this->m_bApplyStressDamage )
    CBaseCombatCharacter::ApplyStressDamage(this, pPhysics, 0);
  CBaseEntity::VPhysicsUpdate(this, pPhysics);
}


// CBaseCombatCharacter::CalculatePhysicsStressDamage  (line 3136, @0x0000000002150ef0, libserver.so)  // inlines: GetFloat
// calls: CalculateObjectStress
// callers: CBaseCombatCharacter::ApplyStressDamage
float __fastcall CBaseCombatCharacter::CalculatePhysicsStressDamage(
        CBaseCombatCharacter *const this,
        vphysics_objectstress_t *pStressOut,
        IPhysicsObject *pPhysics)
{
  float result; // xmm0_4
  char v7; // al
  float mass; // [rsp+Ch] [rbp-24h]

  mass = (*(*pPhysics + 208LL))(pPhysics);
  CalculateObjectStress(pPhysics, this, pStressOut);
  result = 0.0;
  if ( pStressOut->hasNonStaticStress
    && ((this->m_impactEnergyScale * pStressOut->receivedStress) / mass) > phys_stressbodyweights.m_pParent->m_Value.m_fValue )
  {
    v7 = (*(*pPhysics + 1296LL))(pPhysics);
    result = 0.0;
    if ( (v7 & 0x40) == 0 )
      return 200.0;
  }
  return result;
}


// CBaseCombatCharacter::ApplyStressDamage  (line 3155, @0x00000000021595e0, libserver.so)  // inlines: GetFloat, SetDamageForce, SetDamagePosition, V_memset, memset, operator=
// calls: CBaseCombatCharacter::CalculatePhysicsStressDamage, GetWorldEntity, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::GetAbsOrigin, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// callers: CBaseCombatCharacter::VPhysicsUpdate, CBasePlayer::VPhysicsUpdate
void __fastcall CBaseCombatCharacter::ApplyStressDamage(
        CBaseCombatCharacter *const this,
        IPhysicsObject *pPhysics,
        bool bRequireLargeObject)
{
  float v5; // xmm0_4
  CBaseEntity *WorldEntity; // r13
  CBaseEntity *v7; // rax
  float damage; // [rsp+1Ch] [rbp-C4h]
  vphysics_objectstress_t stressOut; // [rsp+20h] [rbp-C0h] BYREF
  CTakeDamageInfo dmgInfo; // [rsp+30h] [rbp-B0h] BYREF

  *&stressOut.exertedStress = 0;
  *&stressOut.hasNonStaticStress = 0;
  v5 = CBaseCombatCharacter::CalculatePhysicsStressDamage(this, &stressOut, pPhysics);
  if ( v5 > 0.0 && (!bRequireLargeObject || stressOut.hasLargeObjectContact) )
  {
    damage = v5;
    WorldEntity = GetWorldEntity();
    v7 = GetWorldEntity();
    CTakeDamageInfo::CTakeDamageInfo(&dmgInfo, v7, WorldEntity, &vec3_origin, &vec3_origin, damage, 1, 0, 0);
    dmgInfo.m_vecDamageForce.x = 0.0;
    dmgInfo.m_vecDamageForce.y = 0.0;
    dmgInfo.m_vecDamageForce.z = (-stressOut.receivedStress * sv_gravity.m_pParent->m_Value.m_fValue)
                               * gpGlobals->frametime;
    dmgInfo.m_vecDamagePosition = *CBaseEntity::GetAbsOrigin(this);
    CBaseEntity::TakeDamage(this, &dmgInfo);
    CTakeDamageInfo::~CTakeDamageInfo(&dmgInfo);
  }
}


// CBaseCombatCharacter::GetPhysicsImpactDamageTable  (line 3186, @0x000000000213cfb0, libserver.so)
const impactdamagetable_t *__fastcall CBaseCombatCharacter::GetPhysicsImpactDamageTable(
        CBaseCombatCharacter *const this)
{
  return &gDefaultNPCImpactDamageTable;
}


// CBaseCombatCharacter::VPhysicsCollision  (line 3200, @0x0000000002140870, libserver.so)  // inlines: GetBool, GetInt
// callers: CPhysicsCannister::VPhysicsCollision
void __fastcall CBaseCombatCharacter::VPhysicsCollision(
        CBaseCombatCharacter *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  if ( phys_hack_npc_shadow_collisions.m_pParent->m_Value.m_nValue != 0 )
    (*(this->_vptr_IHandleEntity + 56))(this, index, pEvent);
}


// CBaseCombatCharacter::VPhysicsShadowCollision  (line 3208, @0x000000000215d7a0, libserver.so)  // inlines: FastSqrt, GetAbsVelocity, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, IsLengthGreaterThan, Length, LengthSqr, NetworkStateChanged, Set, SetAttacker, VectorLength, VectorMultiply, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator=, operator=<int>
// calls: CBaseEntity::GetLifeState, CBaseEntity::GetGroundEntity, CalculatePhysicsImpactDamage, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::CalcAbsoluteVelocity, _Unwind_Resume
void __fastcall CBaseCombatCharacter::VPhysicsShadowCollision(
        CBaseCombatCharacter *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r13
  IPhysicsObject **v5; // rax
  IPhysicsObject *v6; // rbx
  IPhysicsObject *v7; // r15
  bool v9; // zf
  const impactdamagetable_t *v10; // rax
  float v11; // xmm0_4
  vec_t v12; // xmm3_4
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int16 v21; // cx
  float v22; // xmm0_4
  __int64 v23; // rax
  float m_fValue; // [rsp+18h] [rbp-F8h]
  float damagea; // [rsp+1Ch] [rbp-F4h]
  float damage; // [rsp+1Ch] [rbp-F4h]
  int damageType; // [rsp+2Ch] [rbp-E4h] BYREF
  Vector damageForce; // [rsp+30h] [rbp-E0h] BYREF
  Vector damagePos; // [rsp+40h] [rbp-D0h] BYREF
  CTakeDamageInfo dmgInfo; // [rsp+50h] [rbp-C0h] BYREF

  v3 = index;
  v5 = &pEvent->pObjects[index == 0];
  v6 = v5[18];
  v7 = *v5;
  if ( v6 != 0
    && CBaseEntity::GetLifeState(v5[18]) != LifeState_t::LIFE_DYING
    && *(v6 + 341) == 6
    && (*(*v7 + 1512LL))(v7) != 0
    && v6 != CBaseEntity::GetGroundEntity(this)
    && this != (*(*v6 + 1520LL))(v6, 0.0) )
  {
    v9 = (this->m_iEFlags & 0x1000) == 0;
    damageType = 0;
    if ( !v9 )
      CBaseEntity::CalcAbsoluteVelocity(this);
    if ( (((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
         + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
        + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z)) <= 90000.0 )
    {
      damagea = this->m_impactEnergyScale;
      v10 = (*(this->_vptr_IHandleEntity + 262))(this);
      damage = CalculatePhysicsImpactDamage(v3, pEvent, v10, damagea, 0, &damageType, 0);
      if ( damage > 0.0 )
      {
        m_fValue = phys_impactforcescale.m_pParent->m_Value.m_fValue;
        v11 = (*(*pEvent->pObjects[v3] + 208LL))(pEvent->pObjects[v3]);
        v12 = (pEvent->postVelocity[v3].y * v11) * m_fValue;
        v13 = (pEvent->postVelocity[v3].z * v11) * m_fValue;
        v14 = (v11 * pEvent->postVelocity[v3].x) * m_fValue;
        damageForce.y = v12;
        damageForce.z = v13;
        damageForce.x = v14;
        v15 = (*(*v6 + 808LL))(v6);
        if ( v15 != 0 )
        {
          v16 = (*(*v15 + 8LL))(v15, 0);
          v17 = v16;
          if ( v16 != 0 )
          {
            damageType |= 0x10u;
            damageForce.z = (fsqrt(
                               ((damageForce.x * damageForce.x) + (damageForce.y * damageForce.y))
                             + (damageForce.z * damageForce.z))
                           * phys_upimpactforcescale.m_pParent->m_Value.m_fValue)
                          + damageForce.z;
            if ( (*(*v16 + 1120LL))(v16) != 0 )
            {
              v22 = (*(this->_vptr_IHandleEntity + 156))(this);
              v23 = *v17;
              if ( damage < v22 )
                (*(v23 + 3264))(v17, 1, 0, 4);
              else
                (*(v23 + 3264))(v17, 2, 0, 4);
            }
          }
        }
        (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &damagePos);
        CTakeDamageInfo::CTakeDamageInfo(&dmgInfo, v6, v6, &damageForce, &damagePos, damage, damageType, 0, 0);
        v18 = (*(*v6 + 1520LL))(v6, 1.0);
        if ( v18 != 0 )
        {
          v19 = *(v18 + 8);
          if ( v19 != 0 )
          {
            v20 = (*(v19 + 16) >> 15) - (*(v19 + 48) & 1);
            v21 = 0x7FFF;
            if ( *(v19 + 16) != -1 )
              v21 = *(v19 + 16) & 0x7FFF;
            LOWORD(dmgInfo.m_hAttacker.m_Index) = v21 | dmgInfo.m_hAttacker.m_Index & 0x8000;
            dmgInfo.m_hAttacker.m_Index = (v20 << 15) | dmgInfo.m_hAttacker.m_Index & 0x7FFF;
          }
          else
          {
            dmgInfo.m_hAttacker.m_Index = -1;
          }
        }
        if ( this->m_nForceBone.m_Value != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 1180, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          this->m_nForceBone.m_Value = 0;
        }
        CBaseEntity::TakeDamage(this, &dmgInfo);
        CTakeDamageInfo::~CTakeDamageInfo(&dmgInfo);
      }
    }
  }
}


// RadiusDamage  (line 3314, @0x0000000002150f90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CSoundEnt::InsertSound
// callers: CEntityFlame::FlameThink, CEnvExplosion::InputExplode, CPointHurt::HurtThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall RadiusDamage(
        const CTakeDamageInfo *const info,
        const Vector *const vecSrc,
        float flRadius,
        unsigned int iClassIgnore,
        CBaseEntity *pEntityIgnore,
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *pvecDamagedEntities)
{
  int v8; // edx
  double v9; // xmm0_8
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rcx
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi

  (*(g_pGameRules->_vptr_CGameRules + 73))(g_pGameRules, info, vecSrc, iClassIgnore, pEntityIgnore, pvecDamagedEntities);
  if ( (info->m_bitsDamageType & 0x40) != 0 )
  {
    v8 = 128;
    v9 = flRadius * 1.5;
    if ( v9 >= 128.0 )
      v8 = v9;
    m_Index = info->m_hInflictor.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[info->m_hInflictor.m_Index & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          m_pInstance = v13->m_pInstance;
      }
    }
    CSoundEnt::InsertSound(33554433, vecSrc, v8, 0.25, m_pInstance, 0, 0);
  }
}


// CBaseCombatCharacter::SetActiveWeapon  (line 3336, @0x00000000021510a0, libserver.so)  // inlines: CEntityHandle, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, operator CBaseCombatWeapon*, operator!=, operator=
// callers: CBaseCombatCharacter::RemoveAllWeapons, CBaseCombatCharacter::Weapon_Detach, CBaseCombatCharacter::Weapon_Equip, CGameUI::InputActivate, CMovementSpeedMod::InputSpeedMod
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::SetActiveWeapon(CBaseCombatCharacter *const this, CBaseCombatWeapon *pNewWeapon)
{
  uint32 m_Index; // ecx
  unsigned __int16 v5; // di
  int v6; // esi
  CBaseCombatWeapon *m_pInstance; // r13
  int v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CBaseCombatWeapon *v11; // rdx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx

  m_Index = this->m_hActiveWeapon.m_Value.m_Index;
  if ( m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  m_pInstance = 0;
  v8 = (m_Index >> 15 << 15) | v5 & 0x7FFF;
  if ( (v8 + 2) > 1 )
  {
    v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9];
    if ( v9 != 0 )
    {
      v10 = &v9[v6 & 0x1FF];
      if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  if ( pNewWeapon != m_pInstance )
  {
    v11 = 0;
    if ( m_Index + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActiveWeapon.m_Value.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[this->m_hActiveWeapon.m_Value.m_Index & 0x1FF];
        if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
          v11 = v13->m_pInstance;
      }
    }
    if ( pNewWeapon != v11 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1648, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( pNewWeapon != 0 && (m_pEntity = pNewWeapon->m_pEntity) != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v16 = 0x7FFF;
        else
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hActiveWeapon.m_Value.m_Index) = v16 | this->m_hActiveWeapon.m_Value.m_Index & 0x8000;
        this->m_hActiveWeapon.m_Value.m_Index = (v15 << 15) | this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hActiveWeapon.m_Value.m_Index = -1;
      }
    }
    (*(this->_vptr_IHandleEntity + 360))(this, m_pInstance, pNewWeapon);
  }
}


// CBaseCombatCharacter::GetAttackSpread  (line 3351, @0x0000000002140930, libserver.so)
Vector __fastcall CBaseCombatCharacter::GetAttackSpread(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        CBaseEntity *pTarget)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( pWeapon != 0 )
  {
    *&result.x = (*(pWeapon->_vptr_IHandleEntity + 311))(pWeapon, this->m_CurrentWeaponProficiency);
  }
  else
  {
    *&result.x = 0x3E05A9A83E05A9A8LL;
    result.z = 0.13053;
  }
  return result;
}


// CBaseCombatCharacter::GetSpreadBias  (line 3359, @0x000000000213cfc0, libserver.so)
float __fastcall CBaseCombatCharacter::GetSpreadBias(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon,
        CBaseEntity *pTarget)
{
  if ( pWeapon != 0 )
    return (*(pWeapon->_vptr_IHandleEntity + 312))(pWeapon, this->m_CurrentWeaponProficiency);
  else
    return 1.0;
}


// CBaseCombatCharacter::CalcWeaponProficiency  (line 3369, @0x000000000213d000, libserver.so)
WeaponProficiency_t __fastcall CBaseCombatCharacter::CalcWeaponProficiency(
        CBaseCombatCharacter *const this,
        CBaseCombatWeapon *pWeapon)
{
  return WeaponProficiency_t::WEAPON_PROFICIENCY_AVERAGE;
}


// CBaseCombatCharacter::FindMissTarget  (line 3378, @0x0000000002165b00, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ClassMatches, ConvertToExternalMemory, FClassnameIs, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, IgnoreOneEntityFindByCollisionGroup, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, VectorAdd, VectorSubtract, operator CBaseEntity*, operator+, operator-, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: UTIL_GetLocalPlayer, CBaseEntity::GetAbsOrigin, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInBox, CEntityIdentity::ClassMatches, CUtlMemory<COverlapHit, int>::Purge, __stack_chk_fail, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "prop_dynamic", "prop_physics"
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBaseCombatCharacter::FindMissTarget(CBaseCombatCharacter *const this)
{
  CBasePlayer *LocalPlayer; // r12
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm3_4
  vec_t z; // xmm4_4
  CBaseEntity *v7; // rbx
  int v8; // r13d
  __int64 v9; // rax
  CBaseEntity *m_pInstance; // r15
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  uint32 v13; // edx
  float v15; // [rsp+4h] [rbp-111Ch]
  float v16; // [rsp+8h] [rbp-1118h]
  Vector vecSource; // [rsp+Ch] [rbp-1114h] BYREF
  float v18; // [rsp+18h] [rbp-1108h]
  CGameQueryAttributes filter; // [rsp+20h] [rbp-1100h] BYREF
  CBaseEntity *pMissCandidates[16]; // [rsp+50h] [rbp-10D0h] BYREF
  COverlapList list; // [rsp+D0h] [rbp-1050h] BYREF
  unsigned __int64 v22; // [rsp+10E8h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  LocalPlayer = UTIL_GetLocalPlayer();
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  x = AbsOrigin->x;
  list.m_list.m_Size = 0;
  y = AbsOrigin->y;
  memset(&filter, 0, 24);
  z = AbsOrigin->z;
  filter.m_nCollisionGroup = 4;
  list.m_list.m_Memory.m_pMemory = &list.m_list.m_Memory.m_FixedMemory;
  v15 = x;
  v16 = y;
  vecSource.x = z;
  list.m_list.m_Memory.m_nAllocationCount = 64;
  list.m_list.m_Memory.m_nGrowSize = 0x80000000;
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 7;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(this);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(this);
  *pMissCandidates = v15 + 100.0;
  *(pMissCandidates + 1) = v16 + 100.0;
  *&pMissCandidates[1] = vecSource.x + 100.0;
  vecSource.y = v15 - 100.0;
  vecSource.z = v16 - 100.0;
  v18 = vecSource.x - 100.0;
  CGamePhysicsQueryInterface::EntitiesInBox(
    g_pPhysicsQuery,
    &vecSource.y,
    pMissCandidates,
    &filter,
    OverlapTest_t::OVERLAP_TEST_SHAPE,
    &list);
  v7 = 0;
  if ( list.m_list.m_Size <= 0 )
    goto LABEL_19;
  v8 = 0;
  do
  {
    while ( 1 )
    {
      m_pInstance = 0;
      LODWORD(vecSource.y) = list.m_list.m_Memory.m_pMemory[v7].m_ShapeAttributes.m_nEntityId;
      if ( (LODWORD(vecSource.y) + 2) > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vecSource.y) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[LOWORD(vecSource.y) & 0x1FF];
          if ( v12 != 0 && LODWORD(vecSource.y) == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      if ( LocalPlayer == 0 || (*(LocalPlayer->_vptr_IHandleEntity + 264))(LocalPlayer, m_pInstance) != 0 )
      {
        if ( v8 > 15 )
          goto LABEL_18;
        if ( m_pInstance == 0 )
          goto LABEL_9;
        if ( !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "prop_dynamic")
          && !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "prop_physics") )
        {
          break;
        }
        v9 = v8++;
        pMissCandidates[v9] = m_pInstance;
      }
LABEL_9:
      v7 = (v7 + 1);
      if ( list.m_list.m_Size <= v7 )
        goto LABEL_17;
    }
    v7 = (v7 + 1);
  }
  while ( list.m_list.m_Size > v7 );
LABEL_17:
  if ( v8 != 0 )
  {
LABEL_18:
    v7 = pMissCandidates[(*(*random_valve + 16LL))(random_valve, 0, (v8 - 1))];
    goto LABEL_19;
  }
  v7 = 0;
LABEL_19:
  list.m_list.m_Size = 0;
  v13 = list.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( list.m_list.m_Memory.m_nAllocationCount < 0
    || list.m_list.m_Memory.m_pMemory == &list.m_list.m_Memory.m_FixedMemory )
  {
    if ( v13 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&list.m_list.m_Memory);
  }
  else if ( list.m_list.m_Memory.m_pMemory != 0 && v13 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return v7;
}


// CBaseCombatCharacter::ShouldShootMissTarget  (line 3421, @0x000000000213d010, libserver.so)
bool __fastcall CBaseCombatCharacter::ShouldShootMissTarget(
        CBaseCombatCharacter *const this,
        CBaseCombatCharacter *pAttacker)
{
  return 0;
}


// CBaseCombatCharacter::InputKilledNPC  (line 3429, @0x000000000213d020, libserver.so)
void __fastcall CBaseCombatCharacter::InputKilledNPC(CBaseCombatCharacter *const this, inputdata_t *const inputdata)
{
  int (**vptr_IHandleEntity)(...); // rax
  CBaseEntity *pActivator; // rdi
  __int64 v5; // rsi
  int (*v6)(...); // r12

  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  pActivator = inputdata->pActivator;
  v5 = 0;
  v6 = vptr_IHandleEntity[336];
  if ( pActivator != 0 )
    v5 = (*(pActivator->_vptr_IHandleEntity + 147))(pActivator, 0);
  v6(this, v5);
}


// CBaseCombatCharacter::InputBecomeServerRagdoll  (line 3436, @0x000000000215f420, libserver.so)
// calls: CTakeDamageInfo::CTakeDamageInfo, CreateServerRagdoll, PhysSetEntityGameFlags, CBaseEntity::RemoveDeferred, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CBaseCombatCharacter::InputBecomeServerRagdoll(
        CBaseCombatCharacter *const this,
        inputdata_t *const inputdata)
{
  CBaseModelEntity *v3; // r13
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 318))(this, inputdata) != 0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(&info);
    v3 = CreateServerRagdoll(this, this->m_nForceBone.m_Value, &info, 6, 1);
    (*(this->_vptr_IHandleEntity + 340))(this, v3);
    PhysSetEntityGameFlags(v3, 0x8000u);
    CBaseEntity::RemoveDeferred(this);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CBaseCombatCharacter::DoMuzzleFlash  (line 3451, @0x0000000002143cf0, libserver.so)  // inlines: CEntityHandle, GetActiveWeapon, GetEntryIndex, GetHandleEntity, GetInstance, GetSerialNumber, IndexToIdentity, Init, LookupEntity, operator CBaseCombatWeapon*
// calls: CBaseAnimating::DoMuzzleFlash
// callers: CBasePlayer::DoMuzzleFlash
void __fastcall CBaseCombatCharacter::DoMuzzleFlash(CBaseCombatCharacter *const this)
{
  uint32 v2; // ecx
  unsigned __int16 v3; // dx
  int v4; // edi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseCombatCharacter *m_pInstance; // rdi

  v2 = this->m_hActiveWeapon.m_Value.m_Index >> 15;
  if ( this->m_hActiveWeapon.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = this->m_hActiveWeapon.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (v2 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) <= 1
    || (v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9]) == 0
    || (v7 = &v6[v4 & 0x1FF]) == 0
    || v5 != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0) )
  {
    m_pInstance = this;
  }
  CBaseAnimating::DoMuzzleFlash(m_pInstance);
}


// CBaseCombatCharacter::OnFogTriggerStartTouch  (line 3469, @0x0000000002172f80, libserver.so)  // inlines: AddToHead, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, GetEHandle, GetEntryIndex, GetSerialNumber, InsertBefore, Set
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::GrowVector, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::ShiftElementsRight
// callers: CFogTrigger::StartTouch
void __fastcall CBaseCombatCharacter::OnFogTriggerStartTouch(CBaseCombatCharacter *const this, CBaseEntity *fogTrigger)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  CHandle<CBaseEntity> *m_pMemory; // rax
  int v6; // [rsp+0h] [rbp-20h]

  v6 = -1;
  if ( fogTrigger != 0 )
  {
    m_pEntity = fogTrigger->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v6 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::GrowVector(&this->m_hTriggerFogList, 1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::ShiftElementsRight(
    &this->m_hTriggerFogList,
    0,
    1);
  m_pMemory = this->m_hTriggerFogList.m_Memory.m_pMemory;
  if ( m_pMemory != 0 )
    m_pMemory->m_Index = v6;
}


// CBaseCombatCharacter::OnFogTriggerEndTouch  (line 3477, @0x000000000216d720, libserver.so)  // inlines: CEntityHandle, CHandle, Element, FindAndRemove, GetEHandle, GetEntryIndex, GetSerialNumber, Remove, Set, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, memmove
// callers: CFogTrigger::EndTouch
void __fastcall CBaseCombatCharacter::OnFogTriggerEndTouch(CBaseCombatCharacter *const this, CBaseEntity *fogTrigger)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v4; // cx
  int v5; // eax
  int m_Size; // ecx
  CHandle<CBaseEntity> *v7; // rsi
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-20h] BYREF

  src.m_Index = -1;
  if ( fogTrigger != 0 )
  {
    m_pEntity = fogTrigger->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v4 & 0x7FFF;
    }
  }
  v5 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hTriggerFogList, &src);
  if ( v5 != -1 )
  {
    m_Size = this->m_hTriggerFogList.m_Size;
    if ( m_Size - v5 - 1 > 0 )
    {
      v7 = &this->m_hTriggerFogList.m_Memory.m_pMemory[v5 + 1];
      memmove(&v7[-1], v7, 4LL * (this->m_hTriggerFogList.m_Size - v5 - 1));
      m_Size = this->m_hTriggerFogList.m_Size;
    }
    this->m_hTriggerFogList.m_Size = m_Size - 1;
  }
}


// CBaseCombatCharacter::GetFogTrigger  (line 3485, @0x0000000002151390, libserver.so)  // inlines: DistTo, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, Length, LookupEntity, Set, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// callers: GetWorldFogParams
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CBaseCombatCharacter::GetFogTrigger(CBaseCombatCharacter *const this)
{
  __int64 v2; // rbx
  CEntityInstance *v3; // r13
  CConcreteEntityList *v4; // rsi
  float v5; // r15d
  CHandle<CBaseEntity> *v6; // rdx
  uint32 v7; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r14
  float v12; // xmm1_4
  double v13; // xmm0_8
  float v14; // xmm1_4
  __m128i v15; // xmm0
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  uint32 v19; // eax
  uint32 m_Index; // ecx
  unsigned int v21; // eax
  CEntityIdentity *v22; // rax
  __int64 v23; // rdx
  bool v24; // zf
  CEntityIdentity *v25; // rdx
  CBaseEntity *result; // rax
  float v27; // [rsp+Ch] [rbp-54h]
  double v28; // [rsp+20h] [rbp-40h]
  float v29; // [rsp+28h] [rbp-38h]

  if ( this->m_hTriggerFogList.m_Size <= 0 )
  {
    m_Index = this->m_hLastFogTrigger.m_Index;
    v4 = CEntityHandle::gm_pEntityList;
    v21 = m_Index + 2;
  }
  else
  {
    v2 = 0;
    v3 = 0;
    v4 = CEntityHandle::gm_pEntityList;
    v5 = COERCE_FLOAT(_mm_cvtsi128_si32(0x497423F0u));
    do
    {
      v6 = &this->m_hTriggerFogList.m_Memory.m_pMemory[v2];
      v7 = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = v4->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( v10->m_pInstance != 0 )
            {
              v28 = (*(m_pInstance->_vptr_IHandleEntity + 62))(v10->m_pInstance);
              v29 = v12;
              v13 = (*(this->_vptr_IHandleEntity + 62))(this);
              v4 = CEntityHandle::gm_pEntityList;
              v27 = (((*&v13 - *&v28) * (*&v13 - *&v28)) + ((*(&v13 + 1) - *(&v28 + 1)) * (*(&v13 + 1) - *(&v28 + 1))))
                  + ((v14 - v29) * (v14 - v29));
              v15 = LODWORD(v27);
              *v15.m128i_i32 = fsqrt(v27);
              if ( v5 > *v15.m128i_i32 )
              {
                v3 = m_pInstance;
                v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
              }
            }
          }
        }
      }
      ++v2;
    }
    while ( this->m_hTriggerFogList.m_Size > v2 );
    if ( v3 != 0 )
    {
      m_pEntity = v3->m_pEntity;
      if ( m_pEntity == 0 )
      {
        this->m_hLastFogTrigger.m_Index = -1;
        return 0;
      }
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v18 = 0x7FFF;
      else
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hLastFogTrigger.m_Index) = v18 | this->m_hLastFogTrigger.m_Index & 0x8000;
      v19 = (v17 << 15) | this->m_hLastFogTrigger.m_Index & 0x7FFF;
      this->m_hLastFogTrigger.m_Index = v19;
      m_Index = v19;
      v21 = v19 + 2;
    }
    else
    {
      m_Index = this->m_hLastFogTrigger.m_Index;
      v21 = m_Index + 2;
    }
  }
  if ( v21 <= 1 )
    return 0;
  v22 = v4->m_pIdentityChunks[(LOWORD(this->m_hLastFogTrigger.m_Index) >> 9) & 0x3F];
  if ( v22 == 0 )
    return 0;
  v23 = this->m_hLastFogTrigger.m_Index & 0x1FF;
  v24 = &v22[v23] == 0;
  v25 = &v22[v23];
  result = 0;
  if ( !v24 && v25->m_EHandle.m_Index == m_Index )
    return v25->m_pInstance;
  return result;
}


// CBaseCombatCharacter::IsHiddenByFog  (line 3515, @0x000000000213e5e0, libserver.so)  // inlines: DistTo, EyePosition, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
bool __fastcall CBaseCombatCharacter::IsHiddenByFog(const CBaseCombatCharacter *const this, const Vector *const target)
{
  double v4; // xmm0_8
  float v5; // xmm1_4

  v4 = (*(this->_vptr_IHandleEntity + 164))(this);
  return (*(this->_vptr_IHandleEntity + 280))(
           this,
           fsqrt(
             (((*&v4 - target->x) * (*&v4 - target->x)) + ((*(&v4 + 1) - target->y) * (*(&v4 + 1) - target->y)))
           + ((v5 - target->z) * (v5 - target->z))));
}


// CBaseCombatCharacter::IsHiddenByFog  (line 3524, @0x000000000213e660, libserver.so)  // inlines: DistTo, EyePosition, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
bool __fastcall CBaseCombatCharacter::IsHiddenByFog(const CBaseCombatCharacter *const this, const CBaseEntity *target)
{
  float v3; // xmm1_4
  float v4; // xmm1_4
  double v6; // [rsp-38h] [rbp-38h]
  float v7; // [rsp-30h] [rbp-30h]
  double v8; // [rsp-28h] [rbp-28h]

  if ( target == 0 )
    return 0;
  v6 = (*(target->_vptr_IHandleEntity + 62))(target);
  v7 = v3;
  v8 = (*(this->_vptr_IHandleEntity + 164))(this);
  return (*(this->_vptr_IHandleEntity + 280))(
           this,
           fsqrt(
             (((*&v8 - *&v6) * (*&v8 - *&v6)) + ((*(&v8 + 1) - *(&v6 + 1)) * (*(&v8 + 1) - *(&v6 + 1))))
           + ((v4 - v7) * (v4 - v7))));
}


// CBaseCombatCharacter::IsHiddenByFog  (line 3538, @0x000000000213d060, libserver.so)
bool __fastcall CBaseCombatCharacter::IsHiddenByFog(const CBaseCombatCharacter *const this, double a2, float range)
{
  return (*(this->_vptr_IHandleEntity + 283))(this, a2, range) >= 1.0;
}


// CBaseCombatCharacter::GetFogObscuredRatio  (line 3549, @0x000000000213e700, libserver.so)  // inlines: DistTo, EyePosition, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
float __fastcall CBaseCombatCharacter::GetFogObscuredRatio(
        const CBaseCombatCharacter *const this,
        const Vector *const target)
{
  double v4; // xmm0_8
  float v5; // xmm1_4

  v4 = (*(this->_vptr_IHandleEntity + 164))(this);
  return (*(this->_vptr_IHandleEntity + 283))(
           this,
           fsqrt(
             (((*&v4 - target->x) * (*&v4 - target->x)) + ((*(&v4 + 1) - target->y) * (*(&v4 + 1) - target->y)))
           + ((v5 - target->z) * (v5 - target->z))));
}


// CBaseCombatCharacter::GetFogObscuredRatio  (line 3558, @0x000000000213e780, libserver.so)  // inlines: DistTo, EyePosition, FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
float __fastcall CBaseCombatCharacter::GetFogObscuredRatio(const CBaseCombatCharacter *const this, CBaseEntity *target)
{
  float v3; // xmm1_4
  float v4; // xmm1_4
  double v6; // [rsp-38h] [rbp-38h]
  float v7; // [rsp-30h] [rbp-30h]
  double v8; // [rsp-28h] [rbp-28h]

  if ( target == 0 )
    return 0.0;
  v6 = (*(target->_vptr_IHandleEntity + 62))(target);
  v7 = v3;
  v8 = (*(this->_vptr_IHandleEntity + 164))(this);
  return (*(this->_vptr_IHandleEntity + 283))(
           this,
           fsqrt(
             (((*&v8 - *&v6) * (*&v8 - *&v6)) + ((*(&v8 + 1) - *(&v6 + 1)) * (*(&v8 + 1) - *(&v6 + 1))))
           + ((v4 - v7) * (v4 - v7))));
}


// CBaseCombatCharacter::GetFogObscuredRatio  (line 3571, @0x000000000214aab0, libserver.so)
// calls: fogparams_t::fogparams_t, __stack_chk_fail
float __fastcall CBaseCombatCharacter::GetFogObscuredRatio(
        const CBaseCombatCharacter *const this,
        float a2,
        float range)
{
  fogparams_t fog; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v7; // [rsp+78h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  fogparams_t::fogparams_t(&fog);
  (*(this->_vptr_IHandleEntity + 284))(this, &fog);
  if ( !fog.enable.m_Value || fog.start.m_Value >= a2 )
    return 0.0;
  if ( a2 >= fog.end.m_Value )
    return 1.0;
  return fminf((a2 - fog.start.m_Value) / (fog.end.m_Value - fog.start.m_Value), fog.maxdensity.m_Value);
}


// CBaseCombatCharacter::GetFogParams  (line 3594, @0x000000000213f390, libserver.so)
// calls: GetWorldFogParams
bool __fastcall CBaseCombatCharacter::GetFogParams(const CBaseCombatCharacter *const this, fogparams_t *fog)
{
  return fog != 0 && GetWorldFogParams(this, fog);
}


// CBaseCombatCharacter::UpdateLastKnownArea  (line 3607, @0x0000000002151650, libserver.so)  // inlines: Add, CGameTrace, CMicroProfilerGuard, CMicroProfilerSample, CNavHandle, CUtlSymbolLarge, CVProfScope, EnableInteractsWith, EnterScope, ExitScope, GetBool, GetElapsed, GetEntityName, GetFloat, GetInt, GetNavArea, GetNearestNavArea, GetTeamNumber, GetTimebaseRegister, GetTraceMaskSolidBrushOnly, GetZ, InTargetThread, Init, IsEnabled, LengthSqr, PLAT_CPU_TIME, Ray_t, RnCollisionAttr_t, String, ToCStr, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CNavArea*, ~CMicroProfilerGuard, ~CVProfScope
// calls: CNavMesh::IsGenerating, CBaseCombatCharacter::GetNavHull, CBaseEntity::GetAbsOrigin, CNavPoly::IsOverlappingPointForHull, CNavPoly::GetZ, CNavMesh::GetNavArea, ThreadGetCurrentId, CVProfNode::ExitScope(void), CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CNavMesh::GetNearestNavArea (19 total)
// strings: "Player '%s' ('%s') is off nav at (%0.2f, %0.2f, %0.2f)\n", "CBaseCombatCharacter::UpdateLastKnownArea", "NextBot"
void __fastcall CBaseCombatCharacter::UpdateLastKnownArea(CBaseCombatCharacter *const this)
{
  int m_enabled; // r13d
  bool v3; // r14
  CNavMesh *v4; // rdi
  __int64 v5; // rax
  CNavArea *NavArea; // r13
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  const CNavMesh *m_rNavMesh; // rax
  const CNavMesh *m_pAssociatedNavMesh; // rdx
  const CNavMesh *v12; // rcx
  CNavArea *v13; // rdx
  CNavArea *v14; // rdx
  CNavArea *m_pData; // rdi
  unsigned __int64 v16; // rbx
  ThreadId_t v17; // r13
  char v18; // al
  CVProfNode *v19; // rax
  ThreadId_t v20; // r13
  uint64 v21; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v23; // r13
  uint64 m_numTimeBaseTicks; // rcx
  ConVar *m_pParent; // rax
  float m_fValue; // xmm1_4
  const Vector *AbsOrigin; // rax
  int m_Value; // eax
  const Vector *v29; // rax
  const char *v30; // rdx
  const char *m_pAsString; // rsi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v33; // rax
  NavHull_t v34; // [rsp+0h] [rbp-1E0h]
  double pTraceFilter; // [rsp+8h] [rbp-1D8h]
  double pTrace; // [rsp+10h] [rbp-1D0h]
  uint64 v37; // [rsp+18h] [rbp-1C8h]
  double z; // [rsp+18h] [rbp-1C8h]
  float pZOut; // [rsp+2Ch] [rbp-1B4h] BYREF
  NavHull_t v40; // [rsp+30h] [rbp-1B0h]
  NavHull_t v41; // [rsp+40h] [rbp-1A0h]
  NavHull_t navHull; // [rsp+50h] [rbp-190h]
  Vector vPos; // [rsp+60h] [rbp-180h] BYREF
  CTraceFilterSimple v44; // [rsp+70h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+B0h] [rbp-130h] BYREF
  CGameTrace_2 v46; // [rsp+100h] [rbp-E0h] BYREF

  m_enabled = g_VProfCurrentProfile.m_enabled;
  v3 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v23 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(this) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "CBaseCombatCharacter::UpdateLastKnownArea" )
      {
        m_pCurNode = CVProfNode::GetSubNode(
                       g_VProfCurrentProfile.m_pCurNode,
                       "CBaseCombatCharacter::UpdateLastKnownArea",
                       0,
                       "NextBot",
                       4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v33 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v33->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v23 + __rdtsc();
  }
  v4 = TheNavMesh;
  if ( TheNavMesh != 0 )
  {
    if ( !CNavMesh::IsGenerating(TheNavMesh) && this->m_navMeshID == CNavMesh::m_id )
    {
      v40 = CBaseCombatCharacter::GetNavHull(this);
      v41 = v40;
      navHull = v40;
      vPos = *CBaseEntity::GetAbsOrigin(this);
      v5 = (*(this->_vptr_IHandleEntity + 148))(this);
      if ( v5 != 0 )
      {
        NavArea = (*(*v5 + 2888LL))(v5);
        if ( NavArea != 0 && CNavPoly::IsOverlappingPointForHull(NavArea, &vPos, v34, v7) )
        {
          v9 = CNavPoly::GetZ(NavArea, vPos.y, v8);
          if ( (vPos.z + 18.0) >= v9 && v9 >= (vPos.z - 18.0) )
            goto LABEL_15;
        }
      }
      NavArea = CNavMesh::GetNavArea(TheNavMesh, &vPos, navHull, 5, 120.0, 18.0, &pZOut);
      if ( NavArea == 0 )
        goto LABEL_40;
      if ( (vPos.z - 18.0) <= pZOut )
        goto LABEL_15;
      memset(&v46.m_ShapeAttributes, 0, 31);
      v46.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
      CGameTrace::Init(&v46);
      ray.m_IsRay = 1;
      ray.m_Start.w = 0.0;
      memset(&ray.m_Delta.w, 0, 36);
      ray.m_Delta.y = vPos.y - vPos.y;
      v37 = CNavConfig::ms_TraceMaskSolidBrushOnly;
      m_pParent = phys_traceline_radius.m_pParent;
      ray.m_Delta.z = pZOut - vPos.z;
      m_fValue = m_pParent->m_Value.m_fValue;
      ray.m_Start.Vector = vPos;
      ray.m_flRadius = m_fValue;
      ray.m_Delta.x = vPos.x - vPos.x;
      ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                     + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&v44, 0, 4, 0);
      v44.m_attr.m_nInteractsWith |= v37;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v44, &v46);
      if ( v46.fraction == 1.0 || fabs(v46.endpos.z - pZOut) <= 18.0 )
      {
LABEL_15:
        if ( this->m_currentNavArea.m_pAssociatedNavMesh != TheNavMesh )
          goto LABEL_16;
      }
      else
      {
LABEL_40:
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        NavArea = CNavMesh::GetNearestNavArea(TheNavMesh, AbsOrigin, v41, 5, 1.0);
        if ( this->m_currentNavArea.m_pAssociatedNavMesh != TheNavMesh )
        {
          if ( NavArea == 0 )
            goto LABEL_23;
          goto LABEL_16;
        }
      }
      m_pData = this->m_currentNavArea.m_pData;
      if ( m_pData == NavArea )
        goto LABEL_23;
      if ( m_pData != 0 )
        (*(m_pData->_vptr_CNavPoly + 18))(m_pData, this, NavArea);
      if ( NavArea == 0 )
      {
        m_Value = this->m_iTeamNum.m_Value;
        this->m_currentNavArea.m_pData = 0;
        this->m_currentNavArea.m_pAssociatedNavMesh = 0;
        this->m_registeredNavTeam = m_Value;
        goto LABEL_46;
      }
LABEL_16:
      m_rNavMesh = NavArea->m_rNavMesh;
      this->m_currentNavArea.m_pData = NavArea;
      this->m_currentNavArea.m_pAssociatedNavMesh = m_rNavMesh;
      this->m_registeredNavTeam = this->m_iTeamNum.m_Value;
      if ( (*(this->_vptr_IHandleEntity + 363))(this, NavArea) != 0 )
      {
        m_pAssociatedNavMesh = this->m_currentNavArea.m_pAssociatedNavMesh;
        v12 = TheNavMesh;
        this->m_lastValidNavArea.m_pData = this->m_currentNavArea.m_pData;
        this->m_lastValidNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
        v13 = 0;
        if ( this->m_currentNavArea.m_pAssociatedNavMesh == v12 )
          v13 = this->m_currentNavArea.m_pData;
        (*(NavArea->_vptr_CNavPoly + 17))(NavArea, this, v13);
        goto LABEL_20;
      }
LABEL_46:
      if ( player_debug_off_nav.m_pParent->m_Value.m_nValue != 0 && (*(this->_vptr_IHandleEntity + 140))(this) != 0 )
      {
        v29 = CBaseEntity::GetAbsOrigin(this);
        z = v29->z;
        pTrace = v29->y;
        pTraceFilter = v29->x;
        CBaseEntity::GetModelName(&v46, this);
        v30 = "";
        m_pAsString = "";
        if ( *&v46.startpos.x != 0 )
          v30 = *&v46.startpos.x;
        if ( this->m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
        Warning("Player '%s' ('%s') is off nav at (%0.2f, %0.2f, %0.2f)\n", m_pAsString, v30, pTraceFilter, pTrace, z);
      }
LABEL_20:
      v14 = 0;
      if ( this->m_currentNavArea.m_pAssociatedNavMesh == TheNavMesh )
        v14 = this->m_currentNavArea.m_pData;
      (*(this->_vptr_IHandleEntity + 367))(this, NavArea, v14);
LABEL_23:
      if ( v3 )
      {
        v16 = __rdtsc();
        if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
        {
          v17 = g_VProfCurrentProfile.m_TargetThreadId;
          if ( v17 != ThreadGetCurrentId(m_pData) )
            goto LABEL_35;
          v18 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
LABEL_28:
          if ( v18 != 0 )
          {
            v19 = g_VProfCurrentProfile.m_pCurNode->m_pParent;
            if ( v19 != 0 )
              g_VProfCurrentProfile.m_pCurNode = v19;
            else
              v19 = g_VProfCurrentProfile.m_pCurNode;
          }
          else
          {
            v19 = g_VProfCurrentProfile.m_pCurNode;
          }
          g_VProfCurrentProfile.m_fAtRoot = v19 == &g_VProfCurrentProfile.m_Root;
        }
LABEL_35:
        v21 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
        ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
        g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v21 - v16 + __rdtsc();
        return;
      }
      return;
    }
    (*(this->_vptr_IHandleEntity + 364))(this);
    this->m_navMeshID = CNavMesh::m_id;
  }
  if ( v3 )
  {
    v16 = __rdtsc();
    if ( g_VProfCurrentProfile.m_fAtRoot && g_VProfCurrentProfile.m_enabled == 0 )
      goto LABEL_35;
    v20 = g_VProfCurrentProfile.m_TargetThreadId;
    if ( v20 != ThreadGetCurrentId(v4) )
      goto LABEL_35;
    v18 = CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode);
    goto LABEL_28;
  }
}


// CBaseCombatCharacter::IsAreaTraversable  (line 3688, @0x000000000213f3b0, libserver.so)  // inlines: GetTeamNumber
// calls: CNavArea::IsBlocked
// callers: NextBotCombatCharacter::IsAreaTraversable
bool __fastcall CBaseCombatCharacter::IsAreaTraversable(const CBaseCombatCharacter *const this, const CNavArea *pArea)
{
  bool result; // al

  result = 0;
  if ( pArea != 0 )
    return !CNavArea::IsBlocked(pArea, this->m_iTeamNum.m_Value, 0);
  return result;
}


// CBaseCombatCharacter::ResetNavArea  (line 3697, @0x000000000213d080, libserver.so)
void __fastcall CBaseCombatCharacter::ResetNavArea(CBaseCombatCharacter *const this)
{
  CNavArea *m_pData; // rax
  const CNavMesh *m_pAssociatedNavMesh; // rdx

  this->m_lastValidNavArea.m_pData = 0;
  m_pData = this->m_lastValidNavArea.m_pData;
  this->m_lastValidNavArea.m_pAssociatedNavMesh = 0;
  m_pAssociatedNavMesh = this->m_lastValidNavArea.m_pAssociatedNavMesh;
  this->m_registeredNavTeam = -1;
  this->m_currentNavArea.m_pData = m_pData;
  this->m_currentNavArea.m_pAssociatedNavMesh = m_pAssociatedNavMesh;
}


// CBaseCombatCharacter::ClearLastKnownArea  (line 3709, @0x000000000213d0d0, libserver.so)  // inlines: IsInCurrentNavMesh, operator CNavArea*
// callers: CBaseCombatCharacter::~CBaseCombatCharacter
void __fastcall CBaseCombatCharacter::ClearLastKnownArea(CBaseCombatCharacter *const this)
{
  CNavArea *m_pData; // rdx
  CNavArea *v3; // rdi

  m_pData = 0;
  if ( this->m_currentNavArea.m_pAssociatedNavMesh == TheNavMesh )
    m_pData = this->m_currentNavArea.m_pData;
  (*(this->_vptr_IHandleEntity + 367))(this, 0, m_pData);
  if ( this->m_currentNavArea.m_pAssociatedNavMesh == TheNavMesh )
  {
    v3 = this->m_currentNavArea.m_pData;
    if ( v3 != 0 )
      (*(v3->_vptr_CNavPoly + 18))(v3, this, 0);
  }
  (*(this->_vptr_IHandleEntity + 364))(this);
}


// CBaseCombatCharacter::OnNavAreaRemoved  (line 3728, @0x00000000021412a0, libserver.so)  // inlines: operator==
void __fastcall CBaseCombatCharacter::OnNavAreaRemoved(CBaseCombatCharacter *const this, CNavArea *pRemovedArea)
{
  if ( pRemovedArea == 0 && this->m_currentNavArea.m_pAssociatedNavMesh != TheNavMesh
    || pRemovedArea == this->m_currentNavArea.m_pData )
  {
    (*(this->_vptr_IHandleEntity + 365))(this);
  }
}


// CBaseCombatCharacter::ChangeTeam  (line 3740, @0x0000000002142610, libserver.so)  // inlines: ChangeTeam, NetworkStateChanged, Set, operator=<int>
// callers: CBasePlayer::ChangeTeam, CDOTA_BaseNPC::ChangeTeam
void __fastcall CBaseCombatCharacter::ChangeTeam(CBaseCombatCharacter *const this, int iTeamNum)
{
  unsigned __int8 v2; // r12

  v2 = iTeamNum;
  (*(this->_vptr_IHandleEntity + 365))(this);
  if ( v2 != this->m_iTeamNum.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 383, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iTeamNum.m_Value = v2;
  }
}


// CBaseCombatCharacter::HasEverBeenInjured  (line 3752, @0x000000000213d160, libserver.so)
bool __fastcall CBaseCombatCharacter::HasEverBeenInjured(const CBaseCombatCharacter *const this, int team)
{
  if ( team == -1 )
    return this->m_hasBeenInjured != 0;
  else
    return ((1 << team) & this->m_hasBeenInjured) != 0;
}


// CBaseCombatCharacter::GetTimeSinceLastInjury  (line 3773, @0x0000000002142880, libserver.so)  // inlines: GetElapsedTime
// calls: IntervalTimer::Now
float __fastcall CBaseCombatCharacter::GetTimeSinceLastInjury(const CBaseCombatCharacter *const this, int team)
{
  int v2; // eax
  const CBaseCombatCharacter *v3; // rdx
  IntervalTimer *p_interval; // rax
  float v7; // xmm2_4
  int v8; // r12d
  IntervalTimer *v9; // rbx
  CNetworkVarBase<float,IntervalTimer::NetworkVar_m_timestamp> *p_m_timestamp; // r14
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 v14; // rax
  IntervalTimer *v15; // [rsp+0h] [rbp-40h]
  float time; // [rsp+8h] [rbp-38h]
  IntervalTimer *timea; // [rsp+8h] [rbp-38h]

  v2 = 0;
  v3 = this;
  if ( team == -1 )
  {
    p_interval = &this->m_damageHistory[0].interval;
    v7 = 1.0e12;
    v8 = 4;
    v9 = &this->m_damageHistory[0].interval;
    do
    {
      if ( LODWORD(v9[-1].m_timestamp.m_Value) != -1 )
      {
        p_m_timestamp = &p_interval->m_timestamp;
        if ( *(&p_interval[-105]._vptr_IntervalTimer + v9 - this) <= 0.0 )
        {
          v12 = 99999.898;
        }
        else
        {
          v15 = p_interval;
          time = v7;
          v11 = IntervalTimer::Now(v9);
          p_interval = v15;
          v12 = v11 - v9->m_timestamp.m_Value;
          v7 = time;
        }
        if ( v7 > v12 )
        {
          v7 = 99999.898;
          if ( *(&p_m_timestamp[-422].m_Value + v9 - this) > 0.0 )
          {
            timea = p_interval;
            v13 = IntervalTimer::Now(v9);
            p_interval = timea;
            v7 = v13 - v9->m_timestamp.m_Value;
          }
        }
      }
      v9 = (v9 + 24);
      --v8;
    }
    while ( v8 != 0 );
    return v7;
  }
  else
  {
    while ( v3->m_damageHistory[0].team != team )
    {
      ++v2;
      v3 = (v3 + 24);
      if ( v2 == 4 )
        return 1.0e12;
    }
    v14 = v2;
    if ( this->m_damageHistory[v14].interval.m_timestamp.m_Value <= 0.0 )
      return 99999.898;
    else
      return IntervalTimer::Now(&this->m_damageHistory[v14].interval)
           - this->m_damageHistory[v14].interval.m_timestamp.m_Value;
  }
}


// CBaseCombatCharacter::GetNavHull  (line 3811, @0x0000000002151610, libserver.so)
// calls: NavHull_t::NavHull_t
// callers: CBaseCombatCharacter::UpdateLastKnownArea, ChasePath::PredictTargetPosition
NavHull_t __fastcall CBaseCombatCharacter::GetNavHull(const CBaseCombatCharacter *const this)
{
  float v1; // xmm2_4
  NavHull_t v4; // [rsp+10h] [rbp-20h] BYREF
  NavHull_t result; // 0:rax.8,8:xmm0_4.4

  NavHull_t::NavHull_t(&v4, this->m_flNavHullHeight, v1, this->m_navHullCategory);
  *&result.m_hullCategory = *&v4.m_hullCategory;
  result.m_flHullHeight = v4.m_flHullHeight;
  return result;
}


// CBaseCombatCharacter::SetNavHull  (line 3818, @0x0000000002151ee0, libserver.so)
void __fastcall CBaseCombatCharacter::SetNavHull(CBaseCombatCharacter *const this, __int64 a2, float a3)
{
  this->m_navHullCategory = a2;
  this->m_flNavHullHeight = a3;
  this->m_flNavHullRadius = *(&a2 + 1);
}


// CBaseCombatCharacter::InternalSetEffects  (line 3886, @0x0000000002143c00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, InternalSetEffects, IsValid, LookupEntity, NetworkStateChanged, Set, operator CEconWearable*, operator CEntityInstance*, operator=<int>, operator[]
// calls: CBaseEntity::SetEffects
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseCombatCharacter::InternalSetEffects(CBaseCombatCharacter *const this, int nEffects)
{
  int v4; // eax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  CHandle<CEconWearable> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  if ( nEffects != this->m_fEffects.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 544, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fEffects.m_Value = nEffects;
  }
  v4 = this->m_hMyWearables.m_Vector.m_Size - 1;
  if ( v4 >= 0 )
  {
    v5 = 4LL * v4;
    v6 = 4 * (v4 - v4) - 4;
    do
    {
      while ( 1 )
      {
        v7 = &this->m_hMyWearables.m_Vector.m_Memory.m_pMemory[v5 / 4];
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
        v5 -= 4LL;
        if ( v5 == v6 )
          return;
      }
      v5 -= 4LL;
      CBaseEntity::SetEffects(v11->m_pInstance, nEffects);
    }
    while ( v5 != v6 );
  }
}


// CBaseCombatCharacter::PlayWearableAnimsForPlaybackEvent  (line 3911, @0x0000000002151f10, libserver.so)
void __fastcall CBaseCombatCharacter::PlayWearableAnimsForPlaybackEvent(
        CBaseCombatCharacter *const this,
        wearableanimplayback_t iPlayback)
{
  ;
}


