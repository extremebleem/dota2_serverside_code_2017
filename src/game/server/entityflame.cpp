// Reconstructed from DWARF by pahole; not original source.

// src/game/server/entityflame.cpp:57
class C_CEntityFlame_MapInstall {
	C_CEntityFlame_MapInstall();

	// sizeof = 1
};

// src/game/server/entityflame.cpp:465
class CEnvEntityIgniter : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flLifetime;  // +0x308
	typedef CBaseEntity BaseClass;

	class CEntityInstanceEntityClass : public CEntityInstanceEntityClass {
	public:

	private:

		CEntityInstanceEntityClass(const CEntityInstanceEntityClass &);

		CEntityInstanceEntityClass();
		virtual ~CEntityInstanceEntityClass();
		CEntityClass * GetSingleton();
		virtual void * AllocateInstance();
		virtual CEntityInstance * ConstructInstance(void *);
		virtual void DestructInstance(CEntityInstance *);
		virtual void FreeInstance(void *);
		virtual bool CanAllocate();
		virtual const ISchemaBinding * GetInstanceSchemaBinding();
		bool InitOptionalTables();

		// vtable[11] Schema_DynamicBinding
		// vtable[3] AllocateInstance
		// vtable[4] ConstructInstance
		// vtable[5] DestructInstance
		// vtable[6] FreeInstance
		// vtable[8] CanAllocate
		// vtable[7] GetInstanceSchemaBinding
		// sizeof = 632
	};
	CEnvEntityIgniter(CEnvEntityIgniter &);
	CEnvEntityIgniter(CEnvEntityIgniter &);
	CEnvEntityIgniter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Precache(const CEntityPrecacheContext *);
	void InputIgnite(inputdata_t &);
	virtual ~CEnvEntityIgniter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEntityFlame::GetDataDescMap  (line 33, @0x00000000021baf20, libserver.so)
// globals: CEntityFlame::m_DataMap
datamap_t *__fastcall CEntityFlame::GetDataDescMap(CEntityFlame *const this)
{
  return &CEntityFlame::m_DataMap;
}


// CEntityFlame::AddDatadescMetadataKeys  (line 33, @0x00000000021ce680, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEntityFlame::GetEntityClass(void)
void __fastcall CEntityFlame::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEntityFlame::GetEntityClass);
}


// CEntityFlame::GetBaseMap  (line 33, @0x00000000021ce6a0, libserver.so)
datamap_t *__cdecl CEntityFlame::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEntityFlame>  (line 33, @0x00000000021d7f40, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEntityFlame"
// globals: `guard variable for'DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder, `guard variable for'DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc, CEntityFlame::GetEntityClass(void), CEntityFlame::m_DataMap, DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEntityFlame>(CEntityFlame *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder) != 0 )
  {
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_pszBase = "CEntityFlame";
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder,
      &_dso_handle);
  }
  CEntityFlame::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_pszBase), "FlameThink");
    m_Size = DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size == DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CEntityFlame>(CEntityFlame *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc[8].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc);
  }
  CEntityFlame::m_DataMap.dataNumFields = 15;
  CEntityFlame::m_DataMap.dataDesc = &DataMapInit<CEntityFlame>(CEntityFlame *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEntityFlame::m_DataMap, CEntityFlame::GetEntityClass);
  return &CEntityFlame::m_DataMap;
}


// CEntityFlame::YouForgotToImplementOrDeclareServerClass  (line 57, @0x00000000021baf30, libserver.so)
int __fastcall CEntityFlame::YouForgotToImplementOrDeclareServerClass(CEntityFlame *const this)
{
  return 0;
}


// CEntityFlame::GetServerClass  (line 57, @0x00000000021c4a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEntityFlame::GetServerClass(CEntityFlame *const this)
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


// InitManifestDesc<entityflame_server::CTemplateArg>  (line 62, @0x00000000021ce6b0, libserver.so)  // inlines: ResourceManifestEntry_t
// calls: __cxa_guard_acquire, __cxa_guard_release
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "entityflame.ventr"
// globals: `guard variable for'InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries, InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_Manifest, _ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1, _ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0
ResourceManifestDesc_t *__fastcall InitManifestDesc<entityflame_server::CTemplateArg>(
        entityflame_server::CTemplateArg *const def)
{
  if ( `guard variable for'ResourceManifestDesc_t * InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries == 0
    && __cxa_guard_acquire(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries) != 0 )
  {
    byte_4B0A8A8 = 0;
    ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1 = "entityflame.ventr";
    ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0 = &ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries1;
    qword_4B0A8B0 = 0;
    InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries._M_array = &ZGRZ16InitManifestDescIN18entityflame_server12CTemplateArgEEP22ResourceManifestDesc_tRT_E18s_pManifestEntries0;
    qword_4B0A8B8 = 0;
    dword_4B0A8C0 = 0;
    qword_4B0A8D8 = 1;
    __cxa_guard_release(&`guard variable for'ResourceManifestDesc_t * InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries);
  }
  InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_Manifest.m_pEntryGroups = &InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_pManifestEntries;
  return &InitManifestDesc<entityflame_server::CTemplateArg>(entityflame_server::CTemplateArg &)::s_Manifest;
}


// CEntityFlame::CEntityFlame  (line 67, @0x00000000021ce760, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkHandleBase, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, EnsureValidValue<bool>, InValidate, NetworkStateChanged, Obstacle_t, Purge, RemoveAll, Set, SndOpEventGuid_t, SoundEventGuid_t, curtime, operator=<bool>, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CAI_Link*, int>::Purge
// callers: CEntityFlame::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEntityFlame::CEntityFlame(CEntityFlame *const this)
{
  CGlobalVars *v2; // r12
  bool m_bEnableAssertions; // al
  float m_flCurrentTime; // xmm0_4
  void (__fastcall *m_pfnWarningFunc)(__int64); // rdx

  CBaseEntity::CBaseEntity(this);
  this->m_hEntAttached.m_Value.m_Index = -1;
  this->_vptr_IHandleEntity = &off_4023A50;
  this->m_bCheapEffect.m_Value = 0;
  this->m_hAttacker.m_Index = -1;
  this->m_DangerLinks.m_Size = 0;
  this->m_DangerLinks.m_Memory.m_pMemory = 0;
  v2 = gpGlobals;
  this->m_DangerLinks.m_Memory.m_nAllocationCount = 0;
  this->m_DangerLinks.m_Memory.m_nGrowSize = 0;
  this->m_hObstacle.m_Data = 0;
  this->m_hPlayingSound.m_nGuid.m_Data = 0;
  this->m_hPlayingSound.m_hStackHash = -1;
  this->m_flSize = 0.0;
  if ( v2 != 0 )
  {
    m_bEnableAssertions = v2->m_bEnableAssertions;
    if ( m_bEnableAssertions )
    {
      m_bEnableAssertions = 0;
    }
    else if ( !v2->m_bInSimulation )
    {
      m_pfnWarningFunc = v2->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(1);
        m_bEnableAssertions = this->m_bCheapEffect.m_Value;
      }
    }
    m_flCurrentTime = v2->m_flCurrentTime;
    this->m_iDangerSound = -1;
    this->m_flLifetime = m_flCurrentTime;
    if ( m_bEnableAssertions )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bCheapEffect.m_Value = 0;
    }
  }
  else
  {
    this->m_flLifetime = 0.0;
    this->m_iDangerSound = -1;
  }
  this->m_hObstacle.m_Data = 0;
  this->m_flDirectDamagePerSecond = 5.0;
  this->m_iCustomDamageType = 0;
}


// CEntityFlame::UpdateOnRemove  (line 81, @0x00000000021bce10, libserver.so)  // inlines: InValidate, RemoveAll
// calls: CSoundEnt::FreeSound, CBaseEntity::UpdateOnRemove, CBaseEntity::StopSound
void __fastcall CEntityFlame::UpdateOnRemove(CEntityFlame *const this)
{
  int m_iDangerSound; // edi
  int m_Size; // eax
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  CAI_Link *v6; // rdx

  if ( this->m_hPlayingSound.m_nGuid.m_Data != 0 )
  {
    CBaseEntity::StopSound(&this->m_hPlayingSound);
    this->m_hPlayingSound.m_nGuid.m_Data = 0;
    this->m_hPlayingSound.m_hStackHash = -1;
  }
  m_iDangerSound = this->m_iDangerSound;
  if ( m_iDangerSound != -1 )
  {
    CSoundEnt::FreeSound(m_iDangerSound);
    this->m_iDangerSound = -1;
  }
  m_Size = this->m_DangerLinks.m_Size;
  if ( m_Size > 0 )
  {
    v4 = 8LL * (m_Size - 1) + 8;
    v5 = 0;
    do
    {
      v6 = this->m_DangerLinks.m_Memory.m_pMemory[v5 / 8];
      v5 += 8LL;
      --*(v6 + 7);
    }
    while ( v5 != v4 );
  }
  this->m_DangerLinks.m_Size = 0;
  CBaseEntity::UpdateOnRemove(this);
}


// CEntityFlame::Precache  (line 117, @0x00000000021de1a0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache
void __fastcall CEntityFlame::Precache(CEntityFlame *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
}


// CEntityFlame::Spawn  (line 132, @0x00000000021bf870, libserver.so)  // inlines: AddEFlags, curtime
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::DispatchUpdateTransmitState
// globals: CEntityFlame::FlameThink(void)
void __fastcall CEntityFlame::Spawn(CEntityFlame *const this, const CEntityKeyValues *pKeyValues)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc v7; // rax
  double v8; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  this->m_flLifetime = m_flCurrentTime;
  CBaseEntity::ThinkSet(this, CEntityFlame::FlameThink, 0.0, 0, 0);
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v7 = gpGlobals->m_pfnWarningFunc;
      if ( v7 != 0 )
        v7(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v8) = 0;
    *&v8 = v6->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v8 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v8, v5, 0);
  this->m_iEFlags |= 0x80u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CEntityFlame::Activate  (line 152, @0x00000000021bb7c0, libserver.so)
// calls: CBaseEntity::Activate
void __fastcall CEntityFlame::Activate(CEntityFlame *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
}


// CEntityFlame::UseCheapEffect  (line 189, @0x00000000021ce910, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// callers: CBaseAnimating::IgniteUseCheapEffect
void __fastcall CEntityFlame::UseCheapEffect(CEntityFlame *const this, bool bCheap)
{
  if ( this->m_bCheapEffect.m_Value != bCheap )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 780, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bCheapEffect.m_Value = bCheap;
  }
}


// CEntityFlame::Create  (line 199, @0x00000000021da250, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddEFlags, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CollisionMaxs, CollisionMins, EnterScope, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetLifetime, SetUseHitboxes, Spawn, operator CEntityFlame*, operator CEntityInstance*, operator!, operator(), operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CUtlString::FreeMemoryBlock, CEntityKeyValues::SetValue, CEntityKeyValues::~CEntityKeyValues (27 total)
// callers: CBaseAnimating::Ignite, CEnvShooter::CreateGib, CEnvEntityIgniter::InputIgnite, NextBotCombatCharacter::Ignite
// strings: "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList, CEntityFlame::FlameThink(void)
CEntityFlame *__fastcall CEntityFlame::Create(
        CBaseEntity *pTarget,
        float a2,
        float flLifetime,
        float flSize,
        bool useHitboxes)
{
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rdx
  char v9; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // eax
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v13; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v15; // r14
  CEntityIdentity *m_pEntity; // rax
  __int16 v17; // si
  CEntitySpawnerContext<CEntityFlame> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v21; // rdi
  CEntityIdentity *v22; // rax
  CEntityIdentity *v23; // rax
  CEntityFlame *m_pInstance; // rbx
  CUtlScratchMemoryPool *v25; // rdi
  CEntityKeyValues *v26; // r13
  const char *m_pszClassname; // rdx
  unsigned __int64 v30; // rbx
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  int m_nEntitySpawnerDataUseCount; // ecx
  __m128 v34; // xmm0
  const Vector *v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  CGlobalVars *v38; // rdi
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v40; // rax
  CCollisionProperty *m_pCollision; // rdi
  const Vector *AbsOrigin; // rax
  CCollisionProperty *v43; // rdi
  float x; // r14d
  const Vector *v45; // rax
  CCollisionProperty *v46; // rdi
  const Vector *v47; // rax
  CCollisionProperty *v48; // rdi
  float y; // r14d
  const Vector *v50; // rax
  bool v51; // [rsp+1Bh] [rbp-105h]
  CEntityKeyValues *i; // [rsp+20h] [rbp-100h]
  float xSizea; // [rsp+28h] [rbp-F8h]
  float flLifetimeb; // [rsp+2Ch] [rbp-F4h]
  int v58; // [rsp+30h] [rbp-F0h]
  _QWORD v59[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CEntityFlame> spawner; // [rsp+50h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_4024110;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v6 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v8 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v8;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCEntityFlameClass;
  if ( g_pApplication != 0 )
    v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v9 = 0;
  spawner.m_bValidateKeys = v9;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v58 = -1;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_25;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v51 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    v30 = __rdtsc();
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    if ( m_TargetThreadId == ThreadGetCurrentId(spawner.m_pEntityKeyValues) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v40 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v40->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v30 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
      CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
  }
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v13 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v13,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v15 = Entity;
  if ( Entity != 0 )
  {
    m_pEntity = Entity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v58 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v17 & 0x7FFF;
    }
    v59[0] = m_pEntity;
    v59[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v59,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v15, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v21 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v21 - 1);
        (pfn)(v21, v15, i);
      }
    }
  }
  if ( v51 )
    CVProfile::ExitScope(&g_VProfCurrentProfile);
  if ( (v58 + 2) > 1
    && (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v58 >> 9) & 0x3F]) != 0
    && (v23 = &v22[v58 & 0x1FF]) != 0
    && v23->m_EHandle.m_Index == v58
    && (m_pInstance = v23->m_pInstance, v23->m_pInstance != 0) )
  {
    if ( flLifetime <= 0.0 )
    {
      m_pCollision = pTarget->m_pCollision;
      if ( m_pCollision != 0 )
        AbsOrigin = (*(m_pCollision->_vptr_ICollideable + 2))(m_pCollision);
      else
        AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
      v43 = pTarget->m_pCollision;
      x = AbsOrigin->x;
      if ( v43 != 0 )
        v45 = (*(v43->_vptr_ICollideable + 1))(v43);
      else
        v45 = CBaseEntity::GetAbsOrigin(pTarget);
      v46 = pTarget->m_pCollision;
      xSizea = x - v45->x;
      if ( v46 != 0 )
        v47 = (*(v46->_vptr_ICollideable + 2))(v46);
      else
        v47 = CBaseEntity::GetAbsOrigin(pTarget);
      v48 = pTarget->m_pCollision;
      y = v47->y;
      if ( v48 != 0 )
        v50 = (*(v48->_vptr_ICollideable + 1))(v48);
      else
        v50 = CBaseEntity::GetAbsOrigin(pTarget);
      flLifetime = fmaxf(16.0, (xSizea + (y - v50->y)) * 0.5);
    }
    v34 = _mm_cmpgt_ss(LODWORD(a2), 0LL);
    m_pInstance->m_flSize = flLifetime;
    LODWORD(flLifetimeb) = COERCE_UNSIGNED_INT(_mm_andnot_ps(v34, 0x40000000u).m128_f32[0])
                         | LODWORD(a2) & v34.m128_i32[0];
    v35 = CBaseEntity::GetAbsOrigin(pTarget);
    UTIL_SetOrigin(m_pInstance, v35, 0);
    CBaseEntity::ThinkSet(m_pInstance, CEntityFlame::FlameThink, 0.0, 0, 0);
    *&v36 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
    CBaseEntity::SetNextThink(m_pInstance, v36, v37, 0);
    CEntityFlame::AttachToEntity(m_pInstance, pTarget);
    m_pInstance->m_iEFlags |= 0x80u;
    CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
    v38 = gpGlobals;
    m_pInstance->m_bUseHitboxes = useHitboxes;
    m_pInstance->m_flLifetime = CGlobalVarsBase::curtime(v38, 0) + flLifetimeb;
  }
  else
  {
LABEL_25:
    m_pInstance = 0;
  }
  v25 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40240F0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v25 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v25);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v26 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v26);
      operator delete(v26);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return m_pInstance;
}


// CEntityFlame::AttachToEntity  (line 248, @0x00000000021ce950, libserver.so)  // inlines: GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CBaseEntity::EmitSound, CBaseEntity::SetParent
// callers: CBaseCombatCharacter::FixupBurningServerRagdoll, CEntityFlame::Create
// strings: "General.BurningObject", "General.BurningFlesh"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntityFlame::AttachToEntity(CEntityFlame *const this, CBaseEntity *pTarget)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx

  m_pInstance = 0;
  m_Index = this->m_hEntAttached.m_Value.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntAttached.m_Value.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hEntAttached.m_Value.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( pTarget != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEntAttached.m_Value.m_Index) = v10 | this->m_hEntAttached.m_Value.m_Index & 0x8000;
      this->m_hEntAttached.m_Value.m_Index = (v9 << 15) | this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEntAttached.m_Value.m_Index = -1;
    }
  }
  if ( pTarget->m_bIsNPC )
    this->m_hPlayingSound = CBaseEntity::EmitSound(this, "General.BurningFlesh", 0.0, 0);
  else
    this->m_hPlayingSound = CBaseEntity::EmitSound(this, "General.BurningObject", 0.0, 0);
  CBaseEntity::SetParent(this, pTarget, 0, 0);
}


// CEntityFlame::SetLifetime  (line 288, @0x00000000021ceac0, libserver.so)  // inlines: curtime
// callers: CBaseAnimating::IgniteLifetime, CGib::DieThink, CGib::WaitTillLand
void __fastcall CEntityFlame::SetLifetime(CEntityFlame *const this, double a2, float lifetime)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v7; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v7 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v7;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  this->m_flLifetime = *&a2 + m_flCurrentTime;
}


// CEntityFlame::SetUseHitboxes  (line 296, @0x00000000021ceb30, libserver.so)
void __fastcall CEntityFlame::SetUseHitboxes(CEntityFlame *const this, bool use)
{
  this->m_bUseHitboxes = use;
}


// CEntityFlame::SetNumHitboxFires  (line 305, @0x00000000021ceb40, libserver.so)
void __fastcall CEntityFlame::SetNumHitboxFires(CEntityFlame *const this, int iNumHitboxFires)
{
  this->m_iNumHitboxFires = iNumHitboxFires;
}


// CEntityFlame::SetHitboxFireScale  (line 314, @0x00000000021ceb50, libserver.so)
void __fastcall CEntityFlame::SetHitboxFireScale(CEntityFlame *const this, float a2, float flHitboxFireScale)
{
  this->m_flHitboxFireScale = a2;
}


// CEntityFlame::GetRemainingLife  (line 319, @0x00000000021ceb60, libserver.so)  // inlines: curtime
// callers: BreakModelCreateSingle
float __fastcall CEntityFlame::GetRemainingLife(const CEntityFlame *const this)
{
  float m_flCurrentTime; // xmm1_4
  float m_flLifetime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  m_flLifetime = this->m_flLifetime;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v6 = this->m_flLifetime;
        (m_pfnWarningFunc)(1, m_flLifetime, 0.0);
        m_flLifetime = v6;
      }
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return m_flLifetime - m_flCurrentTime;
}


// CEntityFlame::FlameThink  (line 328, @0x00000000021c4ac0, libserver.so)  // inlines: CEntityHandle, Get, GetBool, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetInt, GetSerialNumber, InValidate, IndexToIdentity, Init, IsValid, LookupEntity, VectorAdd, curtime, operator CBaseEntity*, operator+, operator->, operator=, operator==
// calls: CBaseEntity::SetNextThink, UTIL_Remove, UTIL_Bubbles, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::StopSound, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CTakeDamageInfo::CTakeDamageInfo, RadiusDamage, CTakeDamageInfo::~CTakeDamageInfo, FireSystem_AddHeatInRadius (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CEntityFlame::FlameThink(CEntityFlame *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  unsigned __int16 v5; // dx
  int v6; // esi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CEntityInstance *v11; // rdi
  double v12; // xmm0_8
  uint32 m_Index; // ecx
  vec_t v14; // xmm1_4
  uint32 v15; // ecx
  bool v16; // zf
  unsigned __int16 v17; // dx
  __int64 v18; // rsi
  CEntityInstance *m_pInstance; // rdi
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntitySystem *v22; // rcx
  __int64 v23; // rsi
  vec_t v24; // xmm1_4
  CGlobalVars *v25; // r14
  float m_flCurrentTime; // xmm1_4
  float m_flLifetime; // xmm0_4
  FnGlobalVarsWarningFunc v28; // rax
  uint32 v29; // r15d
  unsigned __int16 v30; // r8
  CEntityIdentity *v31; // rcx
  CEntityIdentity *v32; // rcx
  double v33; // xmm0_8
  double v34; // xmm1_8
  unsigned __int16 v35; // dx
  int v36; // esi
  uint32 v37; // eax
  CEntityIdentity *v38; // rdx
  CEntityIdentity *v39; // rdx
  __int64 v40; // rax
  CEntityFlame *v41; // r14
  unsigned int v42; // eax
  CEntityIdentity *v43; // rcx
  CEntityIdentity *v44; // rdx
  __m128i v45; // xmm6
  float v46; // r15d
  const Vector *v47; // r12
  const Vector *v48; // rax
  float v49; // xmm2_4
  const Vector *AbsOrigin; // r15
  unsigned __int16 v51; // dx
  int v52; // esi
  CEntityInstance *v53; // rcx
  uint32 v54; // eax
  CEntityIdentity *v55; // rdx
  CEntityIdentity *v56; // rdx
  const Vector *v57; // rax
  const Vector *v58; // rax
  unsigned int v59; // xmm2_4
  unsigned int v60; // xmm1_4
  unsigned __int16 v61; // dx
  int v62; // esi
  CBaseEntity *v63; // rdi
  vec_t v64; // eax
  CEntityIdentity *v65; // rdx
  CEntityIdentity *v66; // rdx
  __int64 v67; // [rsp+8h] [rbp-F8h]
  __int64 flRadius; // [rsp+10h] [rbp-F0h]
  float flRadiusa; // [rsp+10h] [rbp-F0h]
  float v70; // [rsp+18h] [rbp-E8h]
  __int16 v71; // [rsp+18h] [rbp-E8h]
  Vector mins; // [rsp+20h] [rbp-E0h] BYREF
  double v73; // [rsp+30h] [rbp-D0h]
  vec_t v74; // [rsp+38h] [rbp-C8h]
  CTakeDamageInfo info; // [rsp+40h] [rbp-C0h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v4 = LODWORD(v3->m_flCurrentTime);
    *&v4 = *&v4 + 0.2;
  }
  else
  {
    *&v4 = 1045220557;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  if ( this->m_hEntAttached.m_Value.m_Index == -1 )
  {
    v5 = 0x7FFF;
    v6 = 0x7FFF;
  }
  else
  {
    v5 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
    v6 = v5;
  }
  v7 = (this->m_hEntAttached.m_Value.m_Index >> 15 << 15) | v5 & 0x7FFF;
  LODWORD(info._vptr_CTakeDamageInfo) = v7;
  if ( v7 + 2 > 1
    && (v8 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v6 >> 9]) != 0
    && (v9 = &v8[v6 & 0x1FF]) != 0
    && v7 == v9->m_EHandle.m_Index
    && (v11 = v9->m_pInstance, v9->m_pInstance != 0) )
  {
    if ( (BYTE3(v11[9].m_pEntity) & 0x20) == 0 )
    {
      if ( BYTE1(v11[11].m_worldGroupId.m_nHashCode) != 0 )
      {
        v12 = (*(v11->_vptr_IHandleEntity + 62))(v11);
        m_Index = this->m_hEntAttached.m_Value.m_Index;
        *&info._vptr_CTakeDamageInfo = v12;
        mins.z = v14;
        info.m_vecDamageForce.x = v14;
        v15 = m_Index >> 15;
        v16 = this->m_hEntAttached.m_Value.m_Index == -1;
        *&mins.x = v12;
        if ( v16 )
        {
          v17 = 0x7FFF;
          v18 = 0x7FFF;
        }
        else
        {
          v17 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
          v18 = v17;
        }
        m_pInstance = 0;
        v20 = (v15 << 15) | v17 & 0x7FFF;
        v21 = (v20 + 2);
        LODWORD(v73) = v20;
        v22 = g_pEntitySystem;
        if ( v21 > 1 )
        {
          v21 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v18 >> 9];
          if ( v21 != 0 )
          {
            v23 = v18 & 0x1FF;
            v22 = (8 * v23);
            v18 = 120 * v23;
            v21 = (v21 + v18);
            if ( v21 != 0 && v20 == v21->m_EHandle.m_Index )
              m_pInstance = v21->m_pInstance;
          }
        }
        v73 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance, v18, v21, v22);
        v74 = v24;
        info.m_vecDamageForce.x = v24;
        *&info._vptr_CTakeDamageInfo = *&info._vptr_CTakeDamageInfo + 32.0;
        *(&info._vptr_CTakeDamageInfo + 1) = *(&info._vptr_CTakeDamageInfo + 1) + 32.0;
        mins.z = mins.z - 32.0;
        mins.x = mins.x - 32.0;
        mins.y = mins.y - 32.0;
        UTIL_Bubbles(&mins, &info, 12);
      }
      v25 = gpGlobals;
      m_flCurrentTime = 0.0;
      m_flLifetime = this->m_flLifetime;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v28 = gpGlobals->m_pfnWarningFunc;
          if ( v28 != 0 )
          {
            v70 = this->m_flLifetime;
            (v28)(1, m_flLifetime, 0.0);
            m_flLifetime = v70;
          }
        }
        m_flCurrentTime = v25->m_flCurrentTime;
      }
      if ( m_flCurrentTime <= m_flLifetime
        && (v29 = this->m_hEntAttached.m_Value.m_Index) + 2 > 1
        && (v30 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF,
            (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v30 >> 9]) != 0)
        && (v32 = &v31[this->m_hEntAttached.m_Value.m_Index & 0x1FF]) != 0
        && v29 == v32->m_EHandle.m_Index
        && v32->m_pInstance != 0 )
      {
        v67 = v30 >> 9;
        flRadius = this->m_hEntAttached.m_Value.m_Index & 0x1FF;
        v71 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
        v41 = CEntityHandle::operator CEntityInstance *(&this->m_hAttacker);
        if ( v41 == 0 )
          v41 = this;
        v42 = v29 & 0xFFFF8000 | v71 & 0x7FFF;
        LODWORD(info._vptr_CTakeDamageInfo) = v42;
        if ( v42 + 2 > 1
          && (v43 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v67]) != 0
          && (v44 = &v43[flRadius], &v43[flRadius] != 0)
          && v42 == v44->m_EHandle.m_Index
          && v44->m_pInstance != 0 )
        {
          flRadiusa = this->m_flSize * 0.5;
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          CTakeDamageInfo::CTakeDamageInfo(&info, this, v41, 4.0, 8, 0);
          RadiusDamage(&info, AbsOrigin, flRadiusa, 0, 0, 0);
          CTakeDamageInfo::~CTakeDamageInfo(&info);
          if ( this->m_hEntAttached.m_Value.m_Index == -1 )
          {
            v51 = 0x7FFF;
            v52 = 0x7FFF;
          }
          else
          {
            v51 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
            v52 = v51;
          }
          v53 = 0;
          v54 = (this->m_hEntAttached.m_Value.m_Index >> 15 << 15) | v51 & 0x7FFF;
          LODWORD(info._vptr_CTakeDamageInfo) = v54;
          if ( v54 + 2 > 1 )
          {
            v55 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v52 >> 9];
            if ( v55 != 0 )
            {
              v56 = &v55[v52 & 0x1FF];
              if ( v56 != 0 && v54 == v56->m_EHandle.m_Index )
                v53 = v56->m_pInstance;
            }
          }
          if ( BYTE2(v53[7]._vptr_IHandleEntity) == 0 && hl2_episodic.m_pParent->m_Value.m_nValue != 0 )
          {
            v57 = CBaseEntity::GetAbsOrigin(this);
            CSoundEnt::InsertSound(4096, v57, 24, 0.1, this, 2, 0);
            v58 = CBaseEntity::GetAbsOrigin(this);
            *&v59 = v58->y + 0.0;
            *&v60 = v58->x + 0.0;
            info.m_vecDamageForce.x = v58->z + 48.0;
            info._vptr_CTakeDamageInfo = __PAIR64__(v59, v60);
            CSoundEnt::InsertSound(4096, &info, 24, 0.1, this, 1, 0);
          }
          CTakeDamageInfo::CTakeDamageInfo(
            &info,
            this,
            v41,
            0.2 * this->m_flDirectDamagePerSecond,
            268435464,
            this->m_iCustomDamageType);
          if ( this->m_hEntAttached.m_Value.m_Index == -1 )
          {
            v61 = 0x7FFF;
            v62 = 0x7FFF;
          }
          else
          {
            v61 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
            v62 = v61;
          }
          v63 = 0;
          LODWORD(v64) = (this->m_hEntAttached.m_Value.m_Index >> 15 << 15) | v61 & 0x7FFF;
          mins.x = v64;
          if ( (LODWORD(v64) + 2) > 1 )
          {
            v65 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v62 >> 9];
            if ( v65 != 0 )
            {
              v66 = &v65[v62 & 0x1FF];
              if ( v66 != 0 && LODWORD(v64) == v66->m_EHandle.m_Index )
                v63 = v66->m_pInstance;
            }
          }
          CBaseEntity::TakeDamage(v63, &info);
        }
        else
        {
          v45 = 0x3F000000u;
          *v45.m128i_i32 = 0.5 * this->m_flSize;
          v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
          v47 = CBaseEntity::GetAbsOrigin(this);
          CTakeDamageInfo::CTakeDamageInfo(&info, this, v41, 0.80000001, 8, this->m_iCustomDamageType);
          RadiusDamage(&info, v47, v46, 0, 0, 0);
        }
        CTakeDamageInfo::~CTakeDamageInfo(&info);
        v48 = CBaseEntity::GetAbsOrigin(this);
        FireSystem_AddHeatInRadius(v48, 2.0, v49);
      }
      else
      {
        if ( this->m_hPlayingSound.m_nGuid.m_Data != 0 )
        {
          CBaseEntity::StopSound(&this->m_hPlayingSound);
          this->m_hPlayingSound.m_nGuid.m_Data = 0;
          this->m_hPlayingSound.m_hStackHash = -1;
        }
        CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
        *&v33 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.5;
        CBaseEntity::SetNextThink(this, v33, v34, 0);
        if ( this->m_hEntAttached.m_Value.m_Index == -1 )
        {
          v35 = 0x7FFF;
          v36 = 0x7FFF;
        }
        else
        {
          v35 = this->m_hEntAttached.m_Value.m_Index & 0x7FFF;
          v36 = v35;
        }
        v37 = (this->m_hEntAttached.m_Value.m_Index >> 15 << 15) | v35 & 0x7FFF;
        LODWORD(info._vptr_CTakeDamageInfo) = v37;
        if ( v37 + 2 > 1 )
        {
          v38 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v36 >> 9];
          if ( v38 != 0 )
          {
            v39 = &v38[v36 & 0x1FF];
            if ( v39 != 0 && v37 == v39->m_EHandle.m_Index && v39->m_pInstance != 0 )
            {
              v40 = (*(v39->m_pInstance->_vptr_IHandleEntity + 147))(v39->m_pInstance);
              if ( v40 != 0 )
                (*(*v40 + 1936LL))(v40);
            }
          }
        }
      }
    }
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CEnvEntityIgniter::~CEnvEntityIgniter  (line 465, @0x00000000021e1450, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvEntityIgniter::~CEnvEntityIgniter(CEnvEntityIgniter *const this)
{
  this->_vptr_IHandleEntity = &off_40241B0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvEntityIgniter::~CEnvEntityIgniter  (line 465, @0x00000000021e1470, libserver.so)  // inlines: ~CEnvEntityIgniter
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvEntityIgniter::~CEnvEntityIgniter(CEnvEntityIgniter *const this)
{
  this->_vptr_IHandleEntity = &off_40241B0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvEntityIgniter::GetEntityClass  (line 467, @0x00000000021df0d0, libserver.so)
CEntityClass *__cdecl CEnvEntityIgniter::GetEntityClass()
{
  return g_pEntityCEnvEntityIgniterClass;
}


// CEnvEntityIgniter::Schema_DynamicBinding  (line 467, @0x00000000021df0e0, libserver.so)
// globals: CEnvEntityIgniter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEntityIgniter::Schema_DynamicBinding(const CEnvEntityIgniter *const this)
{
  return CEnvEntityIgniter::s_pSchemaBinding;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 467, @0x00000000021df0f0, libserver.so)
// globals: CEnvEntityIgniter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  return CEnvEntityIgniter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::DestructInstance  (line 467, @0x00000000021df100, libserver.so)  // inlines: Destruct<CEnvEntityIgniter>
void __fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::DestructInstance(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::FreeInstance  (line 467, @0x00000000021df120, libserver.so)
void __fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::FreeInstance(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::CanAllocate  (line 467, @0x00000000021df140, libserver.so)
bool __fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::CanAllocate(
        const CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 467, @0x00000000021df150, libserver.so)
// globals: CEnvEntityIgniter::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  return CEnvEntityIgniter::s_pSchemaBinding;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::AllocateInstance  (line 467, @0x00000000021e0980, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::AllocateInstance(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::ConstructInstance  (line 467, @0x00000000021e0d20, libserver.so)  // inlines: CEnvEntityIgniter, Construct<CEnvEntityIgniter>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::ConstructInstance(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40241B0;
  }
  return p;
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 467, @0x00000000021e2fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 467, @0x00000000021e2fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvEntityIgniter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvEntityIgniter::GetEntityClassInternal  (line 467, @0x00000000021ea1a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "env_entity_igniter", "CEnvEntityIgniter"
// globals: `guard variable for'CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass, CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass, __dso_handle, CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo, CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo
CEntityClass *__cdecl CEnvEntityIgniter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass);
    CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass._vptr_CEntityClass = off_4024130;
    __cxa_guard_release(&`guard variable for'CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass);
    __cxa_atexit(
      CEnvEntityIgniter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvEntityIgniterClass != 0 )
    return &CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass;
  if ( `guard variable for'CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo,
      "CEnvEntityIgniter",
      "env_entity_igniter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo);
  }
  CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass.m_pClassInfo = &CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo;
  CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass.m_pBaseClassInfo = CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvEntityIgniterClass = &CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass;
  CEnvEntityIgniter::GetEntityClassInfo(void)::g_EntityCEnvEntityIgniterClassInfo.m_pClass = &CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass;
  CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvEntityIgniterClass->m_pComponentOverrides = 0;
  return &CEnvEntityIgniter::GetEntityClassInternal(void)::g_EntityCEnvEntityIgniterClass;
}


// CEnvEntityIgniter::GetDataDescMap  (line 479, @0x00000000021baf40, libserver.so)
// globals: CEnvEntityIgniter::m_DataMap
datamap_t *__fastcall CEnvEntityIgniter::GetDataDescMap(CEnvEntityIgniter *const this)
{
  return &CEnvEntityIgniter::m_DataMap;
}


// CEnvEntityIgniter::AddDatadescMetadataKeys  (line 479, @0x00000000021cebc0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvEntityIgniter::GetEntityClass(void)
void __fastcall CEnvEntityIgniter::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvEntityIgniter::GetEntityClass);
}


// CEnvEntityIgniter::GetBaseMap  (line 479, @0x00000000021cebe0, libserver.so)
datamap_t *__cdecl CEnvEntityIgniter::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvEntityIgniter>  (line 479, @0x00000000021cebf0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CEnvEntityIgniter"
// globals: `guard variable for'DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder, CEnvEntityIgniter::GetEntityClass(void), CEnvEntityIgniter::m_DataMap, DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_pszBase = "CEnvEntityIgniter";
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::nameHolder,
      &_dso_handle);
  }
  CEnvEntityIgniter::m_DataMap.dataNumFields = 2;
  CEnvEntityIgniter::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvEntityIgniter::m_DataMap.dataDesc = &DataMapInit<CEnvEntityIgniter>(CEnvEntityIgniter *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvEntityIgniter::m_DataMap, CEnvEntityIgniter::GetEntityClass);
  return &CEnvEntityIgniter::m_DataMap;
}


// CEnvEntityIgniter::Precache  (line 491, @0x00000000021de1b0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, UTIL_PrecacheOther
// strings: "entityflame"
void __fastcall CEnvEntityIgniter::Precache(CEnvEntityIgniter *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  UTIL_PrecacheOther("entityflame", pContext);
}


// CEnvEntityIgniter::InputIgnite  (line 501, @0x00000000021dac60, libserver.so)  // inlines: String, ToCStr
// calls: CGameEntitySystem::FindEntityGeneric, CEntityFlame::Create
void __fastcall CEnvEntityIgniter::InputIgnite(CEnvEntityIgniter *const this, inputdata_t *const inputdata)
{
  CBaseEntity *EntityGeneric; // rbx
  const char *m_pAsString; // rdx
  __int64 v6; // rax
  float v7; // xmm2_4

  if ( this->m_target.u.m_Id != 0 )
  {
    EntityGeneric = 0;
    while ( 1 )
    {
      m_pAsString = "";
      if ( this->m_target.u.m_Id != 0 )
        m_pAsString = this->m_target.u.m_pAsString;
      EntityGeneric = CGameEntitySystem::FindEntityGeneric(
                        g_pGameEntitySystem,
                        EntityGeneric,
                        m_pAsString,
                        this,
                        inputdata->pActivator,
                        0);
      if ( EntityGeneric == 0 )
        break;
      v6 = (*(EntityGeneric->_vptr_IHandleEntity + 147))(EntityGeneric);
      if ( v6 != 0 )
        (*(*v6 + 1912LL))(v6, 1, 0, this->m_flLifetime, 0.0);
      else
        CEntityFlame::Create(EntityGeneric, this->m_flLifetime, 0.0, v7, 1);
    }
  }
}


