// Reconstructed from DWARF by pahole; not original source.

// src/game/server/fire.cpp:84
class CFire : public CBaseModelEntity {
public:

private:

protected:

	EHANDLE m_hOwner;  // +0x484
	int m_nFireType;  // +0x488
	float m_flFuel;  // +0x48c
	float m_flDamageTime;  // +0x490
	float m_lastDamage;  // +0x494
	float m_flFireSize;  // +0x498
	float m_flLastNavUpdateTime;  // +0x49c
	float m_flHeatLevel;  // +0x4a0
	float m_flHeatAbsorb;  // +0x4a4
	float m_flDamageScale;  // +0x4a8
	float m_flMaxHeat;  // +0x4ac
	float m_flLastHeatLevel;  // +0x4b0
	float m_flAttackTime;  // +0x4b4
	bool m_bEnabled;  // +0x4b8
	bool m_bStartDisabled;  // +0x4b9
	bool m_bDidActivate;  // +0x4ba

	COutputEvent m_OnIgnited;  // +0x4c0
	COutputEvent m_OnExtinguished;  // +0x4d8

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;

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
	CFire(CFire &);
	CFire(CFire &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int DrawDebugTextOverlays(uint64, int);
	CFire();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void UpdateOnRemove();
	void Init(const Vector &, float, float, float, int, int);
	bool GoOut();
	void BurnThink();
	void GoOutThink();
	void GoOutInSeconds(float);
	void SetOwner(CBaseEntity *);
	void Scale(float, float);
	void AddHeat(float, bool);
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	bool IsBurning();
	bool GetFireDimensions(Vector *, Vector *);
	void Extinguish(float);
	void DestroyEffect();
	virtual void Update(float);
	void StartFire();
	void Start();
	void SetToOutSize();
	float GetHeatLevel();
	virtual int UpdateTransmitState();
	virtual void DrawEntityDebugOverlays(uint64);
	void Disable();
	void InputStartFire(inputdata_t &);
	void InputExtinguish(inputdata_t &);
	void InputExtinguishTemporary(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void Spread();
	void SpawnEffect(fireType_e, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[79] DrawDebugTextOverlays
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[6] Precache
	// vtable[11] UpdateOnRemove
	// vtable[90] OnTakeDamage
	// vtable[214] Update
	// vtable[64] UpdateTransmitState
	// vtable[14] DrawEntityDebugOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 1264
};

// src/game/server/fire.cpp:209
class CFireSphere {
private:

	float m_radiusSqr;  // +0xc
	int m_listMax;  // +0x18
	int m_count;  // +0x1c
	bool m_onlyActiveFires;  // +0x20
	CFireSphere(CFire * *, int, bool, const Vector &, float);
	void EnumElement(CBaseEntity *);
	int GetCount();
	bool AddToList(CFire *);

	// sizeof = 40
};

// src/game/server/fire.cpp:1219
class CEnvFireSource : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bEnabled;  // +0x308

	float m_radius;  // +0x30c
	float m_damage;  // +0x310
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
	CEnvFireSource(CEnvFireSource &);
	CEnvFireSource(CEnvFireSource &);
	CEnvFireSource();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void TurnOn();
	void TurnOff();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvFireSource();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/server/fire.cpp:1324
class CEnvFireSensor : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bEnabled;  // +0x308
	bool m_bHeatAtLevel;  // +0x309

	float m_radius;  // +0x30c
	float m_targetLevel;  // +0x310
	float m_targetTime;  // +0x314
	float m_levelTime;  // +0x318

	COutputEvent m_OnHeatLevelStart;  // +0x320
	COutputEvent m_OnHeatLevelEnd;  // +0x338
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
	CEnvFireSensor(CEnvFireSensor &);
	CEnvFireSensor(CEnvFireSensor &);
	CEnvFireSensor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Think();
	void TurnOn();
	void TurnOff();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CEnvFireSensor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 848
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFire::~CFire  (line 84, @0x0000000002210dc0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFire::~CFire(CFire *const this)
{
  this->_vptr_IHandleEntity = &off_403A450;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFire::~CFire  (line 84, @0x0000000002210de0, libserver.so)  // inlines: ~CFire
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFire::~CFire(CFire *const this)
{
  this->_vptr_IHandleEntity = &off_403A450;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFire::GetEntityClass  (line 86, @0x000000000220eaa0, libserver.so)
CEntityClass *__cdecl CFire::GetEntityClass()
{
  return g_pEntityCFireClass;
}


// CFire::Schema_DynamicBinding  (line 86, @0x000000000220eab0, libserver.so)
// globals: CFire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFire::Schema_DynamicBinding(const CFire *const this)
{
  return CFire::s_pSchemaBinding;
}


// CFire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 86, @0x000000000220eac0, libserver.so)
// globals: CFire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFire::CEntityInstanceEntityClass *const this)
{
  return CFire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFire::CEntityInstanceEntityClass::DestructInstance  (line 86, @0x000000000220ead0, libserver.so)  // inlines: Destruct<CFire>
void __fastcall CFire::CEntityInstanceEntityClass::DestructInstance(
        CFire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFire::CEntityInstanceEntityClass::FreeInstance  (line 86, @0x000000000220eaf0, libserver.so)
void __fastcall CFire::CEntityInstanceEntityClass::FreeInstance(CFire::CEntityInstanceEntityClass *const this, void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFire::CEntityInstanceEntityClass::CanAllocate  (line 86, @0x000000000220eb10, libserver.so)
bool __fastcall CFire::CEntityInstanceEntityClass::CanAllocate(const CFire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 86, @0x000000000220eb20, libserver.so)
// globals: CFire::s_pSchemaBinding
const ISchemaBinding *__fastcall CFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFire::CEntityInstanceEntityClass *const this)
{
  return CFire::s_pSchemaBinding;
}


// CFire::CEntityInstanceEntityClass::AllocateInstance  (line 86, @0x000000000220fe60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFire::CEntityInstanceEntityClass::AllocateInstance(CFire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 86, @0x00000000022125d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 86, @0x00000000022125f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFire::GetEntityClassInternal  (line 86, @0x0000000002218030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_fire", "CFire"
// globals: `guard variable for'CFire::GetEntityClassInternal(void)::g_EntityCFireClass, CFire::GetEntityClassInternal(void)::g_EntityCFireClass, __dso_handle, CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo, CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo
CEntityClass *__cdecl CFire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFire::GetEntityClassInternal(void)::g_EntityCFireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFire::GetEntityClassInternal(void)::g_EntityCFireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFire::GetEntityClassInternal(void)::g_EntityCFireClass);
    CFire::GetEntityClassInternal(void)::g_EntityCFireClass._vptr_CEntityClass = off_4039510;
    __cxa_guard_release(&`guard variable for'CFire::GetEntityClassInternal(void)::g_EntityCFireClass);
    __cxa_atexit(
      CFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFire::GetEntityClassInternal(void)::g_EntityCFireClass,
      &_dso_handle);
  }
  if ( g_pEntityCFireClass != 0 )
    return &CFire::GetEntityClassInternal(void)::g_EntityCFireClass;
  if ( `guard variable for'CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo,
      "CFire",
      "env_fire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo);
  }
  CFire::GetEntityClassInternal(void)::g_EntityCFireClass.m_pClassInfo = &CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo;
  CFire::GetEntityClassInternal(void)::g_EntityCFireClass.m_pBaseClassInfo = CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo.m_pBaseClassInfo;
  g_pEntityCFireClass = &CFire::GetEntityClassInternal(void)::g_EntityCFireClass;
  CFire::GetEntityClassInfo(void)::g_EntityCFireClassInfo.m_pClass = &CFire::GetEntityClassInternal(void)::g_EntityCFireClass;
  CFire::GetEntityClassInternal(void)::g_EntityCFireClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFireClass->m_pComponentOverrides = 0;
  return &CFire::GetEntityClassInternal(void)::g_EntityCFireClass;
}


// CFire::CEntityInstanceEntityClass::ConstructInstance  (line 86, @0x0000000002218180, libserver.so)  // inlines: Construct<CFire>
// calls: CFire::CFire
CEntityInstance *__fastcall CFire::CEntityInstanceEntityClass::ConstructInstance(
        CFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFire::CFire(p);
  return p;
}


// CFire::DrawEntityDebugOverlays  (line 131, @0x00000000022181b0, libserver.so)  // inlines: IsBurning, curtime
// calls: CBaseEntity::DrawEntityDebugOverlays, NDebugOverlay::EntityBounds, V_snprintf, CBaseEntity::EntityText, CFire::GetFireDimensions, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box, __stack_chk_fail
// strings: "Heat: %.1f"
void __fastcall CFire::DrawEntityDebugOverlays(CFire *const this, uint64 nDebugOverlayBits)
{
  float m_lastDamage; // xmm2_4
  CGlobalVars *v5; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm0_4
  const Vector *AbsOrigin; // rax
  float duration; // [rsp+Ch] [rbp-254h]
  Vector mins; // [rsp+10h] [rbp-250h] BYREF
  Vector maxs; // [rsp+20h] [rbp-240h] BYREF
  char tempstr[520]; // [rsp+30h] [rbp-230h] BYREF
  unsigned __int64 v13; // [rsp+238h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  if ( (nDebugOverlayBits & 4) == 0 )
    goto LABEL_2;
  m_lastDamage = this->m_lastDamage;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        duration = this->m_lastDamage;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        m_lastDamage = duration;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( m_lastDamage > m_flCurrentTime && this->m_flHeatAbsorb > 0.0 )
  {
    NDebugOverlay::EntityBounds(this, 0x58u, 255, 128, 0, 0.0);
    V_snprintf(tempstr, 512, "Heat: %.1f", this->m_flHeatAbsorb);
    CBaseEntity::EntityText(this, 1, tempstr, 0.0, 255, 255, 255, 255);
    goto LABEL_12;
  }
  if ( this->m_flHeatLevel <= 0.0 )
  {
    NDebugOverlay::EntityBounds(this, 0x58u, 88, 128, 0, 0.0);
LABEL_12:
    if ( this->m_flHeatLevel <= 0.0 )
      goto LABEL_2;
  }
  if ( CFire::GetFireDimensions(this, &mins, &maxs) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, &mins, &maxs, 0x80u, 0, 0, 0.0, 10);
  }
LABEL_2:
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CFireSphere::CFireSphere  (line 229, @0x00000000021fd4e0, libserver.so)  // inlines: operator=
void __fastcall CFireSphere::CFireSphere(
        CFireSphere *const this,
        CFire **pList,
        int listMax,
        bool onlyActiveFires,
        const Vector *const origin,
        float radius)
{
  vec_t z; // xmm1_4

  this->m_pList = pList;
  this->m_listMax = listMax;
  this->m_count = 0;
  this->m_onlyActiveFires = onlyActiveFires;
  this->m_origin.x = origin->x;
  this->m_origin.y = origin->y;
  z = origin->z;
  this->m_radiusSqr = radius * radius;
  this->m_origin.z = z;
}


// CFireSphere::AddToList  (line 241, @0x00000000021fd520, libserver.so)
bool __fastcall CFireSphere::AddToList(CFireSphere *const this, CFire *pFire)
{
  __int64 m_count; // rdx
  bool result; // al

  m_count = this->m_count;
  result = 0;
  if ( m_count < this->m_listMax )
  {
    this->m_pList[m_count] = pFire;
    ++this->m_count;
    return 1;
  }
  return result;
}


// CFireSphere::EnumElement  (line 252, @0x00000000021fd550, libserver.so)  // inlines: AddToList, ClassMatches, FClassnameIs, IsBurning, LengthSqr, VectorSubtract, operator-
// calls: CEntityIdentity::ClassMatches, CBaseEntity::GetAbsOrigin
// callers: FireSystem_GetFiresInSphere
// strings: "env_fire"
void __fastcall CFireSphere::EnumElement(CFireSphere *const this, CBaseEntity *pEntity)
{
  const Vector *AbsOrigin; // rax
  float v5; // xmm1_4
  __int64 m_count; // rax

  if ( pEntity != 0
    && CEntityIdentity::ClassMatches(pEntity->m_pEntity, "env_fire")
    && (!this->m_onlyActiveFires || *&pEntity[1].m_nNextThinkTick.m_Value > 0.0) )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    v5 = this->m_origin.z - AbsOrigin->z;
    if ( this->m_radiusSqr > ((((this->m_origin.x - AbsOrigin->x) * (this->m_origin.x - AbsOrigin->x))
                             + ((this->m_origin.y - AbsOrigin->y) * (this->m_origin.y - AbsOrigin->y)))
                            + (v5 * v5)) )
    {
      m_count = this->m_count;
      if ( m_count < this->m_listMax )
      {
        this->m_pList[m_count] = pEntity;
        ++this->m_count;
      }
    }
  }
}


// FireSystem_GetFiresInSphere  (line 277, @0x0000000002202590, libserver.so)  // inlines: CEntityHandle, CFireSphere, CGameQueryAttributes, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, GetEntityIdentity, GetEntryIndex, GetHitEntity, GetInstance, HitEntitiesOnlyByCollisionGroup, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetObjectSetMask, operator CBaseEntity*, operator=, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInSphere, CFireSphere::EnumElement, CUtlMemory<COverlapHit, int>::Purge, CUtlVectorBase<COverlapHit, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: FireSystem_IsValidFirePosition, FireSystem_CanAddFire, CEnvFireSensor::Think, FireSystem_ExtinguishInRadius, FireSystem_AddHeatInRadius, CEnvFireSource::Think
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall FireSystem_GetFiresInSphere(
        CFire **pList,
        int listMax,
        bool onlyActiveFires,
        const Vector *const origin,
        float radius)
{
  float v6; // xmm1_4
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  __int64 v11; // r12
  int v12; // ebx
  CBaseEntity *m_pInstance; // rsi
  uint32 m_nEntityId; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  unsigned int m_count; // ebx
  uint32 v18; // edx
  float radiusa; // [rsp+0h] [rbp-10B4h]
  CFireSphere v21; // [rsp+14h] [rbp-10A0h] BYREF
  CGameQueryAttributes filter; // [rsp+44h] [rbp-1070h] BYREF
  COverlapList results; // [rsp+74h] [rbp-1040h] BYREF
  unsigned __int64 v24; // [rsp+108Ch] [rbp-28h]

  v6 = radius * radius;
  v21.m_pList = pList;
  v24 = __readfsqword(0x28u);
  x = origin->x;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  v21.m_origin.x = x;
  y = origin->y;
  v21.m_listMax = listMax;
  v21.m_origin.y = y;
  z = origin->z;
  v21.m_onlyActiveFires = onlyActiveFires;
  v21.m_origin.z = z;
  v21.m_count = 0;
  radiusa = radius;
  v21.m_radiusSqr = v6;
  results.m_list.m_Size = 0;
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  memset(&filter, 0, 24);
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 2;
  filter.m_nCollisionGroup = 4;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
  CGamePhysicsQueryInterface::EntitiesInSphere(g_pPhysicsQuery, origin, radiusa, &filter, 1u, &results);
  if ( results.m_list.m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      m_pInstance = 0;
      m_nEntityId = results.m_list.m_Memory.m_pMemory[v11].m_ShapeAttributes.m_nEntityId;
      if ( m_nEntityId + 2 > 1 )
      {
        v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_nEntityId >> 9) & 0x3F];
        if ( v15 != 0 )
        {
          v16 = &v15[m_nEntityId & 0x1FF];
          if ( v16 != 0 && m_nEntityId == v16->m_EHandle.m_Index )
            m_pInstance = v16->m_pInstance;
        }
      }
      CFireSphere::EnumElement(&v21, m_pInstance);
      ++v12;
      ++v11;
    }
    while ( v12 < results.m_list.m_Size );
  }
  results.m_list.m_Size = 0;
  m_count = v21.m_count;
  v18 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v18 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v18 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
  return m_count;
}


// FireSystem_IsValidFirePosition  (line 293, @0x0000000002202830, libserver.so)
// calls: FireSystem_GetFiresInSphere
bool __fastcall FireSystem_IsValidFirePosition(const Vector *const position, float a2, float testRadius)
{
  CFire *pList[1]; // [rsp+0h] [rbp-10h] BYREF

  return FireSystem_GetFiresInSphere(pList, 1, 1, position, a2) <= 0;
}


// FireSystem_IsFireInWall  (line 308, @0x00000000021f16a0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, operator*=, operator+
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: FireSystem_IsFireInWall, FireSystem_CanAddFire
_BOOL8 __fastcall FireSystem_IsFireInWall(Vector *const position, fireType_e type)
{
  float y; // xmm2_4
  float x; // xmm1_4
  float z; // xmm3_4
  CTraceFilterSimple v7; // [rsp+0h] [rbp-150h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-110h] BYREF
  trace_t tr; // [rsp+90h] [rbp-C0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  y = position->y;
  x = position->x;
  ray.m_Start.w = 0.0;
  z = position->z;
  ray.m_Delta.w = 0.0;
  ray.m_StartOffset.w = 0.0;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Start.y = y + 0.0;
  ray.m_Start.x = x + 0.0;
  ray.m_Extents.x = 20.0;
  ray.m_Delta.y = (y + 0.0) - y;
  ray.m_Delta.x = (x + 0.0) - x;
  ray.m_IsRay = 0;
  ray.m_Extents.y = 20.0;
  ray.m_StartOffset.x = -0.0;
  ray.m_Delta.z = (z + 0.1) - z;
  ray.m_StartOffset.y = -0.0;
  ray.m_StartOffset.z = -10.0;
  ray.m_Extents.z = 10.0;
  ray.m_Start.z = z + 10.0;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v7, 0, 4, 0);
  v7.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v7, &tr);
  return tr.fraction != 1.0 || tr.startsolid;
}


// FireSystem_IsFireInWall  (line 308, @0x00000000021fd600, libserver.so)
// calls: FireSystem_IsFireInWall
bool __fastcall FireSystem_IsFireInWall(Vector *const position, fireType_e type)
{
  return type != fireType_e::FIRE_NATURAL && FireSystem_IsFireInWall(position, type);
}


// FireSystem_CanAddFire  (line 332, @0x0000000002202860, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FireSystem_IsFireInWall, FireSystem_IsValidFirePosition, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator=
// calls: FireSystem_GetFiresInSphere, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, FireSystem_IsFireInWall
_BOOL8 __fastcall FireSystem_CanAddFire(Vector *position, float separationRadius, fireType_e type, char flags)
{
  _BOOL4 IsFireInWall; // r15d
  fireType_e v8; // esi
  float x; // xmm4_4
  float y; // xmm3_4
  float z; // xmm2_4
  float m_fValue; // xmm1_4
  vec_t v14; // eax
  fireType_e v15; // esi
  fireType_e v16; // esi
  fireType_e v17; // esi
  fireType_e v18; // esi
  CTraceFilterSimple v20; // [rsp+10h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+50h] [rbp-130h] BYREF
  Vector vTestPos; // [rsp+A0h] [rbp-E0h] BYREF
  float v23; // [rsp+CCh] [rbp-B4h]
  char v24; // [rsp+D8h] [rbp-A8h]
  __int64 v25; // [rsp+E8h] [rbp-98h]
  __int64 v26; // [rsp+108h] [rbp-78h]
  __int64 v27; // [rsp+110h] [rbp-70h]
  __int64 v28; // [rsp+118h] [rbp-68h]
  int v29; // [rsp+120h] [rbp-60h]
  __int16 v30; // [rsp+124h] [rbp-5Ch]
  char v31; // [rsp+126h] [rbp-5Ah]
  char v32; // [rsp+127h] [rbp-59h]

  IsFireInWall = 0;
  if ( FireSystem_GetFiresInSphere(&vTestPos, 1, 1, position, separationRadius) <= 0 )
  {
    if ( (flags & 0x10) != 0 )
      goto LABEL_28;
    v26 = 0;
    v30 = 0;
    v27 = 0;
    v28 = 0;
    v31 = 0;
    v32 = 7;
    v29 = 0;
    CGameTrace::Init(&vTestPos);
    x = position->x;
    y = position->y;
    z = position->z;
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = y - y;
    ray.m_IsRay = 1;
    ray.m_flRadius = m_fValue;
    ray.m_Start.w = 0.0;
    ray.m_Delta.z = (z - 24.0) - (z + 1.0);
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_Delta.x = x - x;
    ray.m_Start.x = x;
    ray.m_Start.y = y;
    ray.m_Start.z = z + 1.0;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v20, 0, 4, 0);
    v20.m_attr.m_nInteractsWith |= 0x87001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v20, &vTestPos);
    if ( v24 == 0 && v23 != 1.0 && (v25 == 0 || (*(*v25 + 1144LL))(v25) != 0) )
    {
LABEL_28:
      if ( type == fireType_e::FIRE_NATURAL || !(IsFireInWall = FireSystem_IsFireInWall(position, v8)) )
        return 1;
      *&vTestPos.x = *&position->x;
      v14 = position->z;
      vTestPos.x = vTestPos.x + 10.0;
      vTestPos.z = v14;
      if ( FireSystem_GetFiresInSphere(&ray, 1, 1, &vTestPos, separationRadius) <= 0
        && !FireSystem_IsFireInWall(&vTestPos, v15)
        || (vTestPos.y = vTestPos.y + 10.0, FireSystem_GetFiresInSphere(&ray, 1, 1, &vTestPos, separationRadius) <= 0)
        && !FireSystem_IsFireInWall(&vTestPos, v16)
        || (vTestPos.y = vTestPos.y - 20.0, FireSystem_GetFiresInSphere(&ray, 1, 1, &vTestPos, separationRadius) <= 0)
        && !FireSystem_IsFireInWall(&vTestPos, v17)
        || (vTestPos.x = vTestPos.x - 20.0, FireSystem_GetFiresInSphere(&ray, 1, 1, &vTestPos, separationRadius) <= 0)
        && !FireSystem_IsFireInWall(&vTestPos, v18) )
      {
        *position = vTestPos;
        return IsFireInWall;
      }
    }
    return 0;
  }
  return IsFireInWall;
}


// FireSystem_ExtinguishInRadius  (line 404, @0x0000000002203bb0, libserver.so)  // inlines: GetFloat
// calls: FireSystem_GetFiresInSphere, CFire::Extinguish
void __fastcall FireSystem_ExtinguishInRadius(const Vector *const origin, float a2, float radius, float rate)
{
  CFire **v4; // rbx
  __m128i v5; // xmm2
  unsigned int v6; // r14d
  int FiresInSphere; // eax
  float v8; // xmm1_4
  CFire **v9; // r12
  CFire *v10; // rdi
  CFire *pFires[32]; // [rsp+0h] [rbp-120h] BYREF

  v4 = pFires;
  v5 = 0x3F800000u;
  *v5.m128i_i32 = (1.0 - radius) * fire_extscale.m_pParent->m_Value.m_fValue;
  v6 = _mm_cvtsi128_si32(v5);
  FiresInSphere = FireSystem_GetFiresInSphere(pFires, 32, 0, origin, a2);
  if ( FiresInSphere > 0 )
  {
    v9 = &pFires[(FiresInSphere - 1) + 1];
    do
    {
      v10 = *v4++;
      CFire::Extinguish(v10, *_mm_cvtsi32_si128(v6).m128i_i64, v8);
    }
    while ( v4 != v9 );
  }
}


// FireSystem_AddHeatInRadius  (line 424, @0x0000000002209ef0, libserver.so)  // inlines: AddHeat
// calls: FireSystem_GetFiresInSphere, CFire::AddHeat
// callers: CEntityFlame::FlameThink
void __fastcall FireSystem_AddHeatInRadius(const Vector *const origin, float a2, float radius, float heat)
{
  CFire **v4; // rbx
  int FiresInSphere; // eax
  float v6; // xmm1_4
  CFire **v7; // r12
  CFire *v8; // rdi
  CFire *pFires[32]; // [rsp+10h] [rbp-110h] BYREF

  v4 = pFires;
  FiresInSphere = FireSystem_GetFiresInSphere(pFires, 32, 0, origin, a2);
  if ( FiresInSphere > 0 )
  {
    v7 = &pFires[(FiresInSphere - 1) + 1];
    do
    {
      while ( 1 )
      {
        v8 = *v4;
        if ( (*v4)->m_bEnabled )
          break;
        if ( ++v4 == v7 )
          return;
      }
      ++v4;
      CFire::AddHeat(v8, radius, v6, 0);
    }
    while ( v4 != v7 );
  }
}


// FireSystem_GetFireDamageDimensions  (line 439, @0x00000000021fd9f0, libserver.so)  // inlines: Init, operator/=
// calls: __dynamic_cast, CFire::GetFireDimensions
// globals: `typeinfo for'CFire
bool __fastcall FireSystem_GetFireDamageDimensions(CBaseEntity *pEntity, Vector *pFireMins, Vector *pFireMaxs)
{
  CFire *v5; // rax
  bool result; // al
  vec_t v7; // xmm0_4

  if ( pEntity != 0
    && (v5 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CFire, 0)) != 0
    && (result = CFire::GetFireDimensions(v5, pFireMins, pFireMaxs)) )
  {
    pFireMins->x = pFireMins->x * 0.5;
    pFireMins->y = pFireMins->y * 0.5;
    pFireMins->z = pFireMins->z * 0.5;
    pFireMaxs->x = pFireMaxs->x * 0.5;
    v7 = 0.5 * pFireMaxs->z;
    pFireMaxs->y = pFireMaxs->y * 0.5;
    pFireMaxs->z = v7;
  }
  else
  {
    pFireMins->x = 0.0;
    pFireMins->y = 0.0;
    pFireMins->z = 0.0;
    pFireMaxs->x = 0.0;
    pFireMaxs->y = 0.0;
    pFireMaxs->z = 0.0;
    return 0;
  }
  return result;
}


// CFire::GetDataDescMap  (line 458, @0x00000000021ee8c0, libserver.so)
// globals: CFire::m_DataMap
datamap_t *__fastcall CFire::GetDataDescMap(CFire *const this)
{
  return &CFire::m_DataMap;
}


// CFire::AddDatadescMetadataKeys  (line 458, @0x00000000021fd620, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFire::GetEntityClass(void)
void __fastcall CFire::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFire::GetEntityClass);
}


// CFire::GetBaseMap  (line 458, @0x00000000021fd640, libserver.so)
datamap_t *__cdecl CFire::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFire>  (line 458, @0x00000000022058a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CFire"
// globals: `guard variable for'DataMapInit<CFire>(CFire *)::nameHolder, `guard variable for'DataMapInit<CFire>(CFire *)::dataDesc, CFire::GetEntityClass(void), CFire::m_DataMap, DataMapInit<CFire>(CFire *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFire>(CFire *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::nameHolder) != 0 )
  {
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFire>(CFire *)::nameHolder.m_pszBase = "CFire";
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFire>(CFire *)::nameHolder.m_nLenBase = 5;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFire>(CFire *)::nameHolder,
      &_dso_handle);
  }
  CFire::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFire>(CFire *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CFire>(CFire *)::nameHolder.m_pszBase), "BurnThink");
    m_Size = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size == DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFire>(CFire *)::dataDesc[17].fieldName = v2;
    v6 = operator new[](DataMapInit<CFire>(CFire *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v6, DataMapInit<CFire>(CFire *)::nameHolder.m_pszBase), "GoOutThink");
    v7 = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size == DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFire>(CFire *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFire>(CFire *)::dataDesc[18].fieldName = v6;
    DataMapInit<CFire>(CFire *)::dataDesc[24].pSaveRestoreOps = eventFuncs;
    DataMapInit<CFire>(CFire *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFire>(CFire *)::dataDesc);
  }
  CFire::m_DataMap.dataNumFields = 26;
  CFire::m_DataMap.dataDesc = &DataMapInit<CFire>(CFire *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFire::m_DataMap, CFire::GetEntityClass);
  return &CFire::m_DataMap;
}


// CFire::CFire  (line 505, @0x00000000021fd650, libserver.so)  // inlines: AddEFlags, CEntityHandle, CEntityIOOutput, CHandle
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CFire::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFire::CFire(CFire *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_403A450;
  this->m_hEffect.m_Index = -1;
  this->m_hOwner.m_Index = -1;
  this->m_OnIgnited._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnExtinguished._vptr_CEntityIOOutput = off_3F7C190;
  this->m_flFuel = 0.0;
  this->m_flAttackTime = 0.0;
  this->m_flDamageTime = 0.0;
  this->m_lastDamage = 0.0;
  this->m_nFireType = 0;
  this->m_flHeatAbsorb = 8.0;
  this->m_flHeatLevel = 0.0;
  this->m_iEFlags |= 0x40000u;
}


// CFire::UpdateOnRemove  (line 524, @0x00000000021fdb50, libserver.so)
// calls: CBaseEntity::StopSound, CFire::DestroyEffect, CBaseModelEntity::UpdateOnRemove
// strings: "Fire.Plasma"
void __fastcall CFire::UpdateOnRemove(CFire *const this)
{
  CBaseEntity::StopSound(this, "Fire.Plasma");
  CFire::DestroyEffect(this);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CFire::Precache  (line 539, @0x000000000220d470, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound, UTIL_PrecacheOther, PrecacheParticleSystem
// strings: "Fire.Plasma", "_firesmoke", "particles/fire_01/env_fire_tiny.vpcf", "particles/fire_01/env_fire_small.vpcf", "particles/fire_01/env_fire_medium.vpcf", "particles/fire_01/env_fire_large.vpcf" (11 total)
void __fastcall CFire::Precache(CFire *const this, const CEntityPrecacheContext *pContext)
{
  int m_nFireType; // eax

  CEntityInstance::Precache(this, pContext);
  m_nFireType = this->m_nFireType;
  if ( m_nFireType == 0 )
  {
    UTIL_PrecacheOther("_firesmoke", pContext);
    if ( (this->m_spawnflags.m_Value & 2) != 0 )
    {
      PrecacheParticleSystem("particles/fire_01/env_fire_tiny.vpcf", pContext);
      PrecacheParticleSystem("particles/fire_01/env_fire_small.vpcf", pContext);
      PrecacheParticleSystem("particles/fire_01/env_fire_medium.vpcf", pContext);
      PrecacheParticleSystem("particles/fire_01/env_fire_large.vpcf", pContext);
      if ( this->m_nFireType != 1 )
        goto LABEL_3;
LABEL_6:
      UTIL_PrecacheOther("_plasma", pContext);
      goto LABEL_3;
    }
    PrecacheParticleSystem("particles/fire_01/env_fire_tiny_smoke.vpcf", pContext);
    PrecacheParticleSystem("particles/fire_01/env_fire_small_smoke.vpcf", pContext);
    PrecacheParticleSystem("particles/fire_01/env_fire_medium_smoke.vpcf", pContext);
    PrecacheParticleSystem("particles/fire_01/env_fire_large_smoke.vpcf", pContext);
    m_nFireType = this->m_nFireType;
  }
  if ( m_nFireType == 1 )
    goto LABEL_6;
LABEL_3:
  CBaseEntity::PrecacheScriptSound("Fire.Plasma", pContext);
}


// CFire::InputStartFire  (line 573, @0x0000000002209c80, libserver.so)
// calls: CFire::StartFire
void __fastcall CFire::InputStartFire(CFire *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled )
    CFire::StartFire(this);
}


// CFire::InputEnable  (line 581, @0x00000000021ee8d0, libserver.so)
void __fastcall CFire::InputEnable(CFire *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 1;
}


// CFire::InputDisable  (line 586, @0x00000000022039e0, libserver.so)  // inlines: Disable, IsBurning
// calls: CFire::GoOut
void __fastcall CFire::InputDisable(CFire *const this, inputdata_t *const inputdata)
{
  float m_flHeatLevel; // xmm0_4

  m_flHeatLevel = this->m_flHeatLevel;
  this->m_bEnabled = 0;
  if ( m_flHeatLevel > 0.0 )
    CFire::GoOut(this);
}


// CFire::Disable  (line 591, @0x00000000022039b0, libserver.so)  // inlines: IsBurning
// calls: CFire::GoOut
void __fastcall CFire::Disable(CFire *const this)
{
  float m_flHeatLevel; // xmm0_4

  m_flHeatLevel = this->m_flHeatLevel;
  this->m_bEnabled = 0;
  if ( m_flHeatLevel > 0.0 )
    CFire::GoOut(this);
}


// CFire::InputExtinguish  (line 604, @0x00000000021fdcc0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator&=<int>
// calls: CFire::GoOutInSeconds
void __fastcall CFire::InputExtinguish(CFire *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  unsigned int v6; // r13d
  float m_float64; // xmm0_4

  v6 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v6 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v6;
  }
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  CFire::GoOutInSeconds(this, m_float64, v2, v3);
}


// CFire::InputExtinguishTemporary  (line 614, @0x00000000021fdc90, libserver.so)  // inlines: Float, operator float
// calls: CFire::GoOutInSeconds
void __fastcall CFire::InputExtinguishTemporary(CFire *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float v3; // xmm2_4
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    CFire::GoOutInSeconds(this, m_float64, v2, v3);
  }
  else
  {
    CFire::GoOutInSeconds(this, inputdata->value.m_float, v2, v3);
  }
}


// CFire::StartFire  (line 622, @0x0000000002209910, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorSubtract, operator CEntityInstance*, operator!=<CBaseFire>, operator-, operator=, operator=<int>, operator|=<int>
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::GetHealth, CFire::Init, CFire::Start
// callers: CFire::InputStartFire, CFire::Activate, CFire::AddHeat
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFire::StartFire(CFire *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // rax
  const Vector *v6; // rax
  float m_fValue; // xmm4_4
  float v8; // xmm2_4
  unsigned int m_Value; // r12d
  unsigned int v10; // r14d
  int m_nFireType; // r13d
  int Health; // eax
  float x; // [rsp+4h] [rbp-17Ch]
  float y; // [rsp+8h] [rbp-178h]
  float v15; // [rsp+Ch] [rbp-174h]
  CTraceFilterSimple v16; // [rsp+10h] [rbp-170h] BYREF
  Vector vFirePos; // [rsp+50h] [rbp-130h] BYREF
  int v18; // [rsp+5Ch] [rbp-124h]
  float v19; // [rsp+60h] [rbp-120h]
  float v20; // [rsp+64h] [rbp-11Ch]
  float v21; // [rsp+68h] [rbp-118h]
  int v22; // [rsp+6Ch] [rbp-114h]
  int v23; // [rsp+70h] [rbp-110h]
  int v24; // [rsp+74h] [rbp-10Ch]
  int v25; // [rsp+78h] [rbp-108h]
  int v26; // [rsp+7Ch] [rbp-104h]
  int v27; // [rsp+80h] [rbp-100h]
  int v28; // [rsp+84h] [rbp-FCh]
  int v29; // [rsp+88h] [rbp-F8h]
  int v30; // [rsp+8Ch] [rbp-F4h]
  float v31; // [rsp+90h] [rbp-F0h]
  char v32; // [rsp+94h] [rbp-ECh]
  bool v33; // [rsp+95h] [rbp-EBh]
  trace_t tr; // [rsp+A0h] [rbp-E0h] BYREF

  m_Index = this->m_hEffect.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEffect.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hEffect.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
    {
      vFirePos = *CBaseEntity::GetAbsOrigin(this);
    }
    else
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      v15 = AbsOrigin->z - 1024.0;
      v6 = CBaseEntity::GetAbsOrigin(this);
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      v18 = 0;
      v22 = 0;
      v31 = m_fValue;
      v26 = 0;
      v30 = 0;
      v19 = x - v6->x;
      v20 = y - v6->y;
      v8 = v15 - v6->z;
      v29 = 0;
      v28 = 0;
      v27 = 0;
      v21 = v8;
      v32 = 1;
      v25 = 0;
      v24 = 0;
      v23 = 0;
      v33 = (((v19 * v19) + (v20 * v20)) + (v8 * v8)) != 0.0;
      vFirePos = *v6;
      CTraceFilterSimple::CTraceFilterSimple(&v16, this, 4, 0);
      v16.m_attr.m_nInteractsWith |= 0x5001uLL;
      CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vFirePos, &v16, &tr);
      vFirePos = tr.endpos;
    }
    m_Value = this->m_spawnflags.m_Value;
    v10 = m_Value;
    if ( m_Value != (m_Value | 4) )
    {
      v10 = m_Value | 4;
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = m_Value | 4;
    }
    m_nFireType = this->m_nFireType;
    Health = CBaseEntity::GetHealth(this);
    CFire::Init(this, &vFirePos, LODWORD(this->m_flFireSize), this->m_flAttackTime, Health, v10, m_nFireType);
    CFire::Start(this);
    if ( m_Value != this->m_spawnflags.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = m_Value;
    }
  }
}


// CFire::Spawn  (line 650, @0x0000000002203c30, libserver.so)  // inlines: Disable, IsBurning, SetSolid, SetToOutSize, Vector
// calls: CBaseEntity::Spawn, CBaseEntity::SetDamageOptions, CBaseEntity::AddEffects, UTIL_SetSize, CBaseEntity::GetAbsOrigin, CFire::Init, CFire::GoOut
void __fastcall CFire::Spawn(CFire *const this, const CEntityKeyValues *pKeyValues)
{
  __m128d v3; // xmm0
  int m_nFireType; // r13d
  unsigned int m_Value; // r12d
  float m_flFuel; // xmm2_4
  float m_flAttackTime; // xmm1_4
  double v8; // xmm3_8
  const Vector *AbsOrigin; // rax
  float m_flHeatLevel; // xmm0_4
  float fuel; // [rsp+4h] [rbp-4Ch]
  float attackTime; // [rsp+8h] [rbp-48h]
  unsigned int scale; // [rsp+Ch] [rbp-44h]
  Vector vecMin; // [rsp+10h] [rbp-40h] BYREF
  Vector vecMax; // [rsp+20h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::AddEffects(this, 32);
  vecMax.x = 8.0;
  vecMax.y = 8.0;
  vecMax.z = 8.0;
  vecMin.x = -8.0;
  vecMin.y = -8.0;
  vecMin.z = 0.0;
  UTIL_SetSize(this, &vecMin, &vecMax);
  v3 = _mm_cvtps_pd(LODWORD(this->m_flHeatLevel));
  v3.m128d_f64[0] = v3.m128d_f64[0] * 0.05;
  this->m_flHeatLevel = 0.0;
  m_nFireType = this->m_nFireType;
  m_Value = this->m_spawnflags.m_Value;
  m_flFuel = this->m_flFuel;
  m_flAttackTime = this->m_flAttackTime;
  v8 = _mm_movedup_pd(v3).m128d_f64[0];
  *v3.m128d_f64 = this->m_flFireSize;
  *&v8 = v8;
  this->m_flHeatAbsorb = *&v8;
  fuel = m_flFuel;
  attackTime = m_flAttackTime;
  scale = LODWORD(v3.m128d_f64[0]);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CFire::Init(this, AbsOrigin, scale, attackTime, fuel, m_Value, m_nFireType);
  if ( this->m_bStartDisabled )
  {
    m_flHeatLevel = this->m_flHeatLevel;
    this->m_bEnabled = 0;
    if ( m_flHeatLevel > 0.0 )
      CFire::GoOut(this);
  }
  else
  {
    this->m_bEnabled = 1;
  }
}


// CFire::UpdateTransmitState  (line 675, @0x00000000021ef1b0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CFire::UpdateTransmitState(CFire *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CFire::Activate  (line 684, @0x0000000002209ca0, libserver.so)
// calls: CBaseModelEntity::Activate, CFire::StartFire
void __fastcall CFire::Activate(CFire *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
  if ( !this->m_bDidActivate && (this->m_spawnflags.m_Value & 4) != 0 )
  {
    this->m_flHeatLevel = this->m_flMaxHeat;
    CFire::StartFire(this);
  }
  this->m_bDidActivate = 1;
}


// CFire::SpawnEffect  (line 702, @0x0000000002207130, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CopyData<QAngle>, CopyData<Vector>, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, operator CFireSmoke*, operator CPlasma*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CBaseEntity::GetAbsOrigin, CEntityKeyValues::HasValue, CEntityKeyValues::SetValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CVProfile::ExitScope, CEntityHandle::operator CEntityInstance* (32 total)
// callers: CFire::Start
// strings: "Fire.Plasma", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CFire::SpawnEffect(CFire *const this, fireType_e type, double a3, float scale)
{
  CUtlScratchMemoryPool *v5; // rax
  CEntitySystem *v6; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v8; // rax
  char v9; // al
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  _DWORD *p_x; // r15
  int m_enabled; // r10d
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v16; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v18; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v20; // si
  CEntitySpawnerContext<CFireSmoke> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v24; // rdi
  CFireSmoke *v25; // rbx
  CUtlScratchMemoryPool *v26; // rdi
  CEntityKeyValues *v27; // r14
  bool v28; // cc
  CUtlScratchMemoryPool *v29; // rax
  CEntitySystem *v30; // rdi
  const matrix3x4a_t *v31; // rax
  __int64 v32; // rax
  char v33; // al
  const Vector *v34; // rax
  CEntityKeyValues *v35; // rbx
  _DWORD *v36; // r15
  int v37; // ecx
  const char *v38; // rdx
  EntityNetworkingMode_t v39; // ebx
  const char *v40; // rax
  CEntityInstance *v41; // rax
  CEntityInstance *v42; // r15
  CEntityIdentity *v43; // rax
  __int16 v44; // si
  CEntitySpawnerContext<CFireSmoke> *v45; // rbx
  detail::GenericClass *v46; // rdx
  void (*v47)(detail::GenericClass *); // rax
  _QWORD *v48; // rdi
  CUtlScratchMemoryPool *v49; // rdi
  CEntityKeyValues *v50; // r14
  CEntityIdentity *v51; // rax
  int v52; // edx
  __int16 v53; // cx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v55; // cx
  __int64 v56; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v57; // rdx
  int v58; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v59; // cx
  __int64 v60; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v61; // rdx
  int v62; // ecx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v64; // dx
  unsigned __int64 v65; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v66; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v67; // rax
  __int16 v68; // ax
  _DWORD *v69; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // rax
  int v71; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v72; // cx
  __int64 v73; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v74; // rdx
  __int16 v75; // r15
  unsigned __int64 v76; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v77; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rax
  __int64 v79; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v80; // r15
  uint16 v81; // ax
  QAngle *v82; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v83; // rax
  __int16 v84; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v87; // rax
  __int16 v88; // ax
  _DWORD *v89; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rax
  int v91; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v92; // cx
  __int64 v93; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v94; // rdx
  __int16 v95; // r15
  unsigned __int64 v96; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v97; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v98; // rax
  __int64 v99; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v100; // r15
  uint16 m_flags; // ax
  QAngle *v102; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v103; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v104; // rdx
  __int64 v105; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v106; // rdx
  __int64 v107; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v108; // rdx
  __int64 v109; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rbx
  __int16 v113; // ax
  QAngle *v114; // rax
  __int64 v115; // rbx
  __int16 v116; // ax
  QAngle *v117; // rax
  __int64 v118; // rbx
  __int16 v119; // ax
  _DWORD *v120; // rax
  __int64 v121; // rbx
  __int16 v122; // ax
  _DWORD *v123; // rax
  bool v124; // [rsp+1Fh] [rbp-101h]
  bool v125; // [rsp+1Fh] [rbp-101h]
  CEntityKeyValues *i; // [rsp+20h] [rbp-100h]
  CEntityKeyValues *j; // [rsp+20h] [rbp-100h]
  __int64 v128; // [rsp+20h] [rbp-100h]
  __int64 v129; // [rsp+20h] [rbp-100h]
  CVProfile *v130; // [rsp+28h] [rbp-F8h]
  CVProfile *v131; // [rsp+28h] [rbp-F8h]
  CVProfile *v132; // [rsp+28h] [rbp-F8h]
  CVProfile *v133; // [rsp+28h] [rbp-F8h]
  CVProfile *v134; // [rsp+28h] [rbp-F8h]
  CVProfile *v135; // [rsp+28h] [rbp-F8h]
  CEntityHandle v136; // [rsp+30h] [rbp-F0h] BYREF
  CEntityIdentity *v137; // [rsp+40h] [rbp-E0h] BYREF
  CEntityKeyValues *v138; // [rsp+48h] [rbp-D8h]
  CEntitySpawner<CFireSmoke> spawner; // [rsp+50h] [rbp-D0h] BYREF

  if ( type != fireType_e::FIRE_PLASMA )
  {
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner._vptr_CEntitySpawnerBase = off_40395B0;
    v5 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner.m_scriptClassName.m_pString = 0;
    spawner.m_pContext = 0;
    v6 = g_pEntitySystem;
    spawner.m_pSpawnBatch = 0;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    spawner.m_pPrevAllocator = v5;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v6->m_entitySpawnerData;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v6);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
    v8 = *&SpawnOriginOffset->m_flMatVal[2][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v8;
    spawner.m_pEntityClass = g_pEntityCFireSmokeClass;
    if ( g_pApplication != 0 )
      v9 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v9 = 0;
    spawner.m_bValidateKeys = v9;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    p_x = &AbsOrigin->x;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_5;
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_128:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v84 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( m_nAllocated != 0 )
      {
        if ( m_nAllocated <= 9 )
          m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -467664362;
      v133 = v84;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v87 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v87 = 0;
      v129 = v133;
      v134 = &v87[v133];
      v88 = HIWORD(v134->m_GroupIDStack[0]);
      if ( (v88 & 1) != 0 )
        HIWORD(v134->m_GroupIDStack[0]) = v88 & 0xFFFE;
      *&v134->m_bVTuneGroupEnabled = 0;
      LOWORD(v134->m_GroupIDStack[0]) = 3;
      v89 = CEntityVariantAllocator::Allocate(0xCu);
      *&v134->m_bVTuneGroupEnabled = v89;
      *v89 = *p_x;
      v89[1] = p_x[1];
      v89[2] = p_x[2];
      HIWORD(v134->m_GroupIDStack[0]) |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v90 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v90 = 0;
      v90[v129].m_pAttributeName = 0;
    }
    else
    {
      v55 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v56 = 0;
      while ( 1 )
      {
        if ( v55 != 0 )
        {
          v57 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v55 > 9 )
            v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v57 = 0;
        }
        if ( v57[v56] == -467664362 )
          break;
        if ( m_nCount <= ++v56 )
          goto LABEL_128;
      }
      if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v108 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v109 = v56;
        if ( v108[v109].m_pAttributeName != 0 )
        {
LABEL_169:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v108[v109].m_pAttributeName);
          goto LABEL_138;
        }
        v118 = &v108[v109];
      }
      else
      {
        v109 = v56;
        v108 = 0;
        v118 = v109 * 24;
        if ( *(v109 * 24 + 16) != 0 )
          goto LABEL_169;
      }
      v119 = *(v118 + 10);
      if ( (v119 & 1) != 0 )
        *(v118 + 10) = v119 & 0xFFFE;
      *v118 = 0;
      *(v118 + 8) = 3;
      v120 = CEntityVariantAllocator::Allocate(0xCu);
      *v118 = v120;
      *v120 = *p_x;
      v120[1] = p_x[1];
      v120[2] = p_x[2];
      *(v118 + 10) |= 1u;
    }
LABEL_138:
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    {
LABEL_5:
      v136.m_Index = -1;
      goto LABEL_6;
    }
    v91 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v91 <= 0 )
    {
LABEL_147:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v95 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v96 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v96 != 0 )
      {
        if ( v96 <= 9 )
          v97 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v97 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v97 = 0;
      }
      v97[v95] = -1164387633;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v98 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v98 = 0;
      v99 = v95;
      v100 = &v98[v99];
      v135 = (v99 * 24);
      m_flags = v98[v99].m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v100->m_value.m_flags = m_flags & 0xFFFE;
      v100->m_value.m_uint64 = 0;
      v100->m_value.m_type = 39;
      v102 = CEntityVariantAllocator::Allocate(0xCu);
      v100->m_value.m_uint64 = v102;
      *v102 = vec3_angle;
      v100->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v103 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v103 = 0;
      *(&v135->m_GroupIDStack[2] + v103) = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_157:
      v136.m_Index = -1;
      if ( m_pEntityKeyValues == 0 )
      {
LABEL_26:
        v25 = CEntityHandle::operator CEntityInstance *(&v136);
        CFireSmoke::EnableSmoke(v25, ((this->m_spawnflags.m_Value >> 1) ^ 1) & 1);
        CFireSmoke::EnableGlow(v25, ((this->m_spawnflags.m_Value >> 5) ^ 1) & 1);
        CFireSmoke::EnableVisibleFromAbove(v25, (this->m_spawnflags.m_Value & 0x100) != 0);
        this->m_nFireType = 0;
        CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
        v26 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
        spawner._vptr_CEntitySpawnerBase = off_4039590;
        CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
        if ( v26 == &g_pEntitySystem->m_entitySpawnerData )
        {
          m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
          g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
          if ( m_nEntitySpawnerDataUseCount == 1 )
            CUtlScratchMemoryPool::FreeAll(v26);
        }
        if ( spawner.m_pEntityKeyValues != 0 )
        {
          CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
          v27 = spawner.m_pEntityKeyValues;
          v28 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
          if ( v28 )
          {
            CEntityKeyValues::~CEntityKeyValues(v27);
            operator delete(v27);
          }
        }
        if ( spawner.m_scriptClassName.m_pString != 0 )
          CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
        goto LABEL_63;
      }
LABEL_6:
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v124 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      }
      if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
      {
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      m_nMode = spawner.m_nMode;
      v16 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v16,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v18 = Entity;
      if ( Entity != 0 )
      {
        m_pEntity = Entity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v20 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v136.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v20 & 0x7FFF;
        }
        else
        {
          v136.m_Index = -1;
        }
        v137 = m_pEntity;
        v138 = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          &v137,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v18, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v24 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v24 - 1);
            (pfn)(v24, v18, i);
          }
        }
      }
      if ( v124 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      goto LABEL_26;
    }
    v92 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v93 = 0;
    while ( 1 )
    {
      if ( v92 != 0 )
      {
        v94 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v92 > 9 )
          v94 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v94 = 0;
      }
      if ( v94[v93] == -1164387633 )
        break;
      if ( v91 <= ++v93 )
        goto LABEL_147;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v104 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v105 = v93;
      if ( v104[v105].m_pAttributeName != 0 )
      {
LABEL_161:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v104[v105].m_pAttributeName);
LABEL_162:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_157;
      }
      v115 = &v104[v105];
    }
    else
    {
      v105 = v93;
      v104 = 0;
      v115 = v105 * 24;
      if ( *(v105 * 24 + 16) != 0 )
        goto LABEL_161;
    }
    v116 = *(v115 + 10);
    if ( (v116 & 1) != 0 )
      *(v115 + 10) = v116 & 0xFFFE;
    *v115 = 0;
    *(v115 + 8) = 39;
    v117 = CEntityVariantAllocator::Allocate(0xCu);
    *v115 = v117;
    *v117 = vec3_angle;
    *(v115 + 10) |= 1u;
    goto LABEL_162;
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_40395F0;
  v29 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v30 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  spawner.m_pPrevAllocator = v29;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v30->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v30);
  v31 = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&v31->m_flMatVal[0][0];
  qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], v31->m_flMatVal[1], 24);
  v32 = *&v31->m_flMatVal[2][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v32;
  spawner.m_pEntityClass = g_pEntityCPlasmaClass;
  if ( g_pApplication != 0 )
    v33 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v33 = 0;
  spawner.m_bValidateKeys = v33;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  v34 = CBaseEntity::GetAbsOrigin(this);
  v35 = spawner.m_pEntityKeyValues;
  v36 = &v34->x;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_36;
  v58 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v58 <= 0 )
  {
LABEL_97:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v64 = v35->m_keyHashes.m_nCount - 1;
    v65 = v35->m_keyHashes.m_nAllocated;
    if ( v65 != 0 )
    {
      if ( v65 <= 9 )
        v66 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
      else
        v66 = v35->m_keyHashes.m_pElements;
    }
    else
    {
      v66 = 0;
    }
    v66[(v35->m_keyHashes.m_nCount - 1)] = -467664362;
    v130 = v64;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v35->m_keyValues);
    if ( v35->m_keyValues.m_nAllocated != 0 )
      v67 = v35->m_keyValues.m_pElements;
    else
      v67 = 0;
    v128 = v130;
    v131 = &v67[v130];
    v68 = HIWORD(v131->m_GroupIDStack[0]);
    if ( (v68 & 1) != 0 )
      HIWORD(v131->m_GroupIDStack[0]) = v68 & 0xFFFE;
    *&v131->m_bVTuneGroupEnabled = 0;
    LOWORD(v131->m_GroupIDStack[0]) = 3;
    v69 = CEntityVariantAllocator::Allocate(0xCu);
    *&v131->m_bVTuneGroupEnabled = v69;
    *v69 = *v36;
    v69[1] = v36[1];
    v69[2] = v36[2];
    HIWORD(v131->m_GroupIDStack[0]) |= 1u;
    if ( v35->m_keyValues.m_nAllocated != 0 )
      v70 = v35->m_keyValues.m_pElements;
    else
      v70 = 0;
    v70[v128].m_pAttributeName = 0;
  }
  else
  {
    v59 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v60 = 0;
    while ( 1 )
    {
      if ( v59 != 0 )
      {
        v61 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v59 > 9 )
          v61 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v61 = 0;
      }
      if ( v61[v60] == -467664362 )
        break;
      if ( v58 <= ++v60 )
        goto LABEL_97;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v110 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v111 = v60;
      if ( v110[v111].m_pAttributeName != 0 )
      {
LABEL_172:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v110[v111].m_pAttributeName);
        goto LABEL_107;
      }
      v121 = &v110[v111];
    }
    else
    {
      v111 = v60;
      v110 = 0;
      v121 = v111 * 24;
      if ( *(v111 * 24 + 16) != 0 )
        goto LABEL_172;
    }
    v122 = *(v121 + 10);
    if ( (v122 & 1) != 0 )
      *(v121 + 10) = v122 & 0xFFFE;
    *v121 = 0;
    *(v121 + 8) = 3;
    v123 = CEntityVariantAllocator::Allocate(0xCu);
    *v121 = v123;
    *v123 = *v36;
    v123[1] = v36[1];
    v123[2] = v36[2];
    *(v121 + 10) |= 1u;
  }
LABEL_107:
  v35 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_36:
    v136.m_Index = -1;
LABEL_37:
    v37 = g_VProfCurrentProfile.m_enabled;
    v125 = v37 != 0;
    if ( v37 != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v35 = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(v35, -971301790) )
    {
      v38 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( v38 != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, v38);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v39 = spawner.m_nMode;
    v40 = CUtlString::Get(&spawner.m_scriptClassName);
    v41 = CEntitySystem::CreateEntity(
            g_pEntitySystem,
            spawner.m_hSpawnGroupHandle,
            spawner.m_pEntityClass,
            v40,
            v39,
            -1,
            -1,
            0,
            0);
    v42 = v41;
    if ( v41 != 0 )
    {
      v43 = v41->m_pEntity;
      if ( v43 != 0 )
      {
        v44 = 0x7FFF;
        if ( v43->m_EHandle.m_Index != -1 )
          v44 = v43->m_EHandle.m_Index & 0x7FFF;
        v136.m_Index = (((v43->m_EHandle.m_Index >> 15) - (v43->m_flags & 1)) << 15) | v44 & 0x7FFF;
      }
      else
      {
        v136.m_Index = -1;
      }
      v137 = v43;
      v138 = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        &v137,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v42, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      v45 = spawner.m_pContext;
      for ( j = spawner.m_pEntityKeyValues; v45 != 0; v45 = v45->m_pParent )
      {
        v46 = v45->m_callback.m_Closure.m_pthis;
        v47 = v45->m_callback.m_Closure.m_pFunction.__pfn;
        if ( v46 != 0 || v47 != 0 )
        {
          v48 = (v46 + v45->m_callback.m_Closure.m_pFunction.__delta);
          if ( (v47 & 1) != 0 )
            v47 = *(v47 + *v48 - 1);
          (v47)(v48, v42, j);
        }
      }
    }
    if ( v125 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    goto LABEL_57;
  }
  v71 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v71 > 0 )
  {
    v72 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v73 = 0;
    while ( 1 )
    {
      if ( v72 != 0 )
      {
        v74 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v72 > 9 )
          v74 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v74 = 0;
      }
      if ( v74[v73] == -1164387633 )
        break;
      if ( v71 <= ++v73 )
        goto LABEL_116;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v106 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v107 = v73;
      if ( v106[v107].m_pAttributeName != 0 )
      {
LABEL_165:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v106[v107].m_pAttributeName);
LABEL_166:
        v35 = spawner.m_pEntityKeyValues;
        goto LABEL_126;
      }
      v112 = &v106[v107];
    }
    else
    {
      v107 = v73;
      v106 = 0;
      v112 = v107 * 24;
      if ( *(v107 * 24 + 16) != 0 )
        goto LABEL_165;
    }
    v113 = *(v112 + 10);
    if ( (v113 & 1) != 0 )
      *(v112 + 10) = v113 & 0xFFFE;
    *v112 = 0;
    *(v112 + 8) = 39;
    v114 = CEntityVariantAllocator::Allocate(0xCu);
    *v112 = v114;
    *v114 = vec3_angle;
    *(v112 + 10) |= 1u;
    goto LABEL_166;
  }
LABEL_116:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  v75 = v35->m_keyHashes.m_nCount - 1;
  v76 = v35->m_keyHashes.m_nAllocated;
  if ( v76 != 0 )
  {
    if ( v76 <= 9 )
      v77 = (&v35->m_keyHashes.m_nAllocAllocated + 1);
    else
      v77 = v35->m_keyHashes.m_pElements;
  }
  else
  {
    v77 = 0;
  }
  v77[v75] = -1164387633;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v35->m_keyValues);
  if ( v35->m_keyValues.m_nAllocated != 0 )
    v78 = v35->m_keyValues.m_pElements;
  else
    v78 = 0;
  v79 = v75;
  v80 = &v78[v79];
  v132 = (v79 * 24);
  v81 = v78[v79].m_value.m_flags;
  if ( (v81 & 1) != 0 )
    v80->m_value.m_flags = v81 & 0xFFFE;
  v80->m_value.m_uint64 = 0;
  v80->m_value.m_type = 39;
  v82 = CEntityVariantAllocator::Allocate(0xCu);
  v80->m_value.m_uint64 = v82;
  *v82 = vec3_angle;
  v80->m_value.m_flags |= 1u;
  if ( v35->m_keyValues.m_nAllocated != 0 )
    v83 = v35->m_keyValues.m_pElements;
  else
    v83 = 0;
  *(&v132->m_GroupIDStack[2] + v83) = 0;
  v35 = spawner.m_pEntityKeyValues;
LABEL_126:
  v136.m_Index = -1;
  if ( v35 != 0 )
    goto LABEL_37;
LABEL_57:
  v25 = CEntityHandle::operator CEntityInstance *(&v136);
  CPlasma::EnableSmoke(v25, 1);
  this->m_nFireType = 1;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  CBaseEntity::EmitSound(this, "Fire.Plasma", 0.0, 0);
  v49 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_40395D0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v49 == &g_pEntitySystem->m_entitySpawnerData )
  {
    v62 = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = v62 - 1;
    if ( v62 == 1 )
      CUtlScratchMemoryPool::FreeAll(v49);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v50 = spawner.m_pEntityKeyValues;
    v28 = --spawner.m_pEntityKeyValues->m_nRefCount <= 0;
    if ( v28 )
    {
      CEntityKeyValues::~CEntityKeyValues(v50);
      operator delete(v50);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
LABEL_63:
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  CBaseEntity::SetParent(v25, this, 0, 0);
  (*(v25->_vptr_IHandleEntity + 208))(v25, this->m_flFireSize, this->m_flFireSize, 0.0);
  (*(v25->_vptr_IHandleEntity + 209))(v25, this->m_spawnflags.m_Value & 4);
  v51 = v25->m_pEntity;
  if ( v51 != 0 )
  {
    v52 = (v51->m_EHandle.m_Index >> 15) - (v51->m_flags & 1);
    if ( v51->m_EHandle.m_Index == -1 )
      v53 = 0x7FFF;
    else
      v53 = v51->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hEffect.m_Index) = v53 | this->m_hEffect.m_Index & 0x8000;
    this->m_hEffect.m_Index = (v52 << 15) | this->m_hEffect.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hEffect.m_Index = -1;
  }
}


// CFire::Init  (line 753, @0x00000000021fd6f0, libserver.so)  // inlines: NetworkStateChanged, Set, SetSolid, VMul4x3Transpose, WorldToLocal, operator=, operator=<int>, operator|=<int>
// calls: CBaseEntity::GetMoveParent, EntityMatrix::InitFromEntity, UTIL_SetOrigin
// callers: CFire::Spawn, CFire::StartFire
void __fastcall CFire::Init(
        CFire *const this,
        const Vector *const position,
        __m128i scale,
        float attackTime,
        float fuel,
        unsigned int flags,
        int fireType)
{
  float v7; // r15d
  unsigned int m_Value; // r13d
  CBaseEntity *MoveParent; // rax
  float v14; // xmm2_4
  float v15; // xmm4_4
  float v16; // xmm3_4
  bool v17; // zf
  float fuela; // [rsp+0h] [rbp-84h]
  Vector localOrigin; // [rsp+4h] [rbp-80h] BYREF
  EntityMatrix parentMatrix; // [rsp+14h] [rbp-70h] BYREF

  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(scale));
  this->m_flAttackTime = attackTime;
  if ( flags != this->m_spawnflags.m_Value )
  {
    fuela = fuel;
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    fuel = fuela;
    this->m_spawnflags.m_Value = flags;
  }
  this->m_nFireType = fireType;
  if ( (flags & 1) != 0 )
  {
    this->m_flFuel = 0.0;
  }
  else
  {
    this->m_flFuel = fuel;
    if ( fuel != 0.0 )
    {
      m_Value = this->m_spawnflags.m_Value;
      LOBYTE(m_Value) = m_Value | 0x80;
      if ( this->m_spawnflags.m_Value != m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_spawnflags.m_Value = m_Value;
      }
    }
  }
  localOrigin = *position;
  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    MoveParent = CBaseEntity::GetMoveParent(this);
    EntityMatrix::InitFromEntity(&parentMatrix, MoveParent);
    v14 = position->x - parentMatrix.m[0][3];
    v15 = position->y - parentMatrix.m[1][3];
    v16 = position->z - parentMatrix.m[2][3];
    localOrigin.z = ((parentMatrix.m[0][2] * v14) + (parentMatrix.m[1][2] * v15)) + (parentMatrix.m[2][2] * v16);
    localOrigin.y = ((parentMatrix.m[0][1] * v14) + (parentMatrix.m[1][1] * v15)) + (parentMatrix.m[2][1] * v16);
    localOrigin.x = ((v14 * parentMatrix.m[0][0]) + (v15 * parentMatrix.m[1][0])) + (v16 * parentMatrix.m[2][0]);
  }
  UTIL_SetOrigin(this, &localOrigin, 0);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  v17 = (this->m_spawnflags.m_Value & 8) == 0;
  this->m_flFireSize = v7;
  this->m_flMaxHeat = (0.00390625 * v7) * 64.0;
  if ( !v17 )
    this->m_flHeatLevel = (0.00390625 * v7) * 64.0;
  this->m_flLastHeatLevel = 0.0;
}


// CFire::Start  (line 791, @0x00000000022097f0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Vector, ~CVariantBase
// calls: UTIL_SetSize, CFire::SpawnEffect, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CFire::BurnThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFire::StartFire
// globals: CFire::BurnThink(void)
void __fastcall CFire::Start(CFire *const this)
{
  float m_flFireSize; // xmm1_4
  float v3; // xmm1_4
  Vector vecMin; // [rsp+0h] [rbp-30h] BYREF
  CVariant vecMax[2]; // [rsp+10h] [rbp-20h] BYREF

  m_flFireSize = this->m_flFireSize;
  vecMin.z = 0.0;
  *&vecMax[0].m_type = m_flFireSize;
  vecMax[0].m_float = (m_flFireSize * 0.5) * 0.5;
  *(&vecMax[0].m_pszString + 1) = vecMax[0].m_float;
  vecMin.x = -vecMax[0].m_float;
  vecMin.y = -vecMax[0].m_float;
  UTIL_SetSize(this, &vecMin, vecMax);
  CFire::SpawnEffect(this, this->m_nFireType, COERCE_DOUBLE(COERCE_UNSIGNED_INT(0.00390625 * this->m_flFireSize)), v3);
  *&vecMax[0].m_type = 0;
  vecMax[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnIgnited, this, this, vecMax, 0.0);
  if ( (vecMax[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vecMax[0].m_uint64);
  CBaseEntity::ThinkSet(this, CFire::BurnThink, 0.0, 0, 0);
  this->m_flLastNavUpdateTime = 0.0;
  this->m_flDamageTime = 0.0;
  CFire::BurnThink(this);
}


// CFire::IsBurning  (line 810, @0x00000000021fd910, libserver.so)
bool __fastcall CFire::IsBurning(const CFire *const this)
{
  return this->m_flHeatLevel > 0.0;
}


// CFire::GetFireDimensions  (line 847, @0x00000000021fd930, libserver.so)  // inlines: Init
// callers: CFire::DrawEntityDebugOverlays, FireSystem_GetFireDamageDimensions, CFire::Update
bool __fastcall CFire::GetFireDimensions(CFire *const this, Vector *pFireMins, Vector *pFireMaxs)
{
  float m_flHeatLevel; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm2_4
  vec_t v8; // xmm1_4

  m_flHeatLevel = this->m_flHeatLevel;
  if ( m_flHeatLevel <= 0.0 )
  {
    pFireMins->x = 0.0;
    pFireMins->y = 0.0;
    pFireMins->z = 0.0;
    pFireMaxs->x = 0.0;
    pFireMaxs->y = 0.0;
    pFireMaxs->z = 0.0;
    return 0;
  }
  else
  {
    v4 = m_flHeatLevel / this->m_flMaxHeat;
    v5 = ((((this->m_flFireSize * v4) * 128.0) * 0.00390625) * 0.5)
       + ((((this->m_flFireSize * v4) * 128.0) * 0.00390625) * 0.5);
    if ( v5 < 16.0 )
    {
      v6 = -16.0;
      v5 = 16.0;
    }
    else
    {
      v6 = -v5;
    }
    pFireMins->x = v6;
    pFireMins->y = v6;
    pFireMins->z = 0.0;
    v8 = v4 * this->m_flFireSize;
    pFireMaxs->x = v5;
    pFireMaxs->y = v5;
    pFireMaxs->z = v8;
    return 1;
  }
}


// CFire::Update  (line 875, @0x0000000002209f70, libserver.so)  // inlines: AddHeat, CEntityHandle, CGameQueryAttributes, CGameTrace, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ClassMatches, ConvertToExternalMemory, FClassnameIs, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetHitEntity, GetInstance, IgnoreOneEntityFindByCollisionGroup, IndexToIdentity, Init, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, UTIL_TraceLine, VectorDivide, WorldSpaceAABB, operator CBaseEntity*, operator+=, operator->, operator/, operator=, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CFire::GetFireDimensions, CBaseEntity::GetAbsOrigin, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInBox, CGlobalVarsBase::curtime, CBaseEntity::GetDamageOptions, CEntityIdentity::ClassMatches, CFire::AddHeat, CFire::GoOutInSeconds, CCollisionProperty::CollisionAABBToWorldAABB, IsBoxIntersectingBox (22 total)
// strings: "env_fire"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CFire::Update(CFire *const this, float a2, float simTime)
{
  float m_flFuel; // xmm0_4
  float m_flHeatLevel; // xmm1_4
  float v6; // xmm3_4
  float m_flAttackTime; // xmm1_4
  float m_flMaxHeat; // xmm2_4
  const Vector *AbsOrigin; // rax
  const Vector *v10; // rax
  const Vector *v11; // rax
  const Vector *v12; // rax
  vec_t v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  bool v16; // r15
  __int64 v17; // rbx
  int v18; // r13d
  CFire *m_pInstance; // r12
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  __m128i v22; // xmm0
  float v23; // xmm1_4
  CFire *const *v24; // rbx
  CFire **v25; // r13
  float v26; // r12d
  unsigned int v27; // eax
  float v28; // xmm0_4
  const CCollisionProperty *m_pCollision; // rdi
  double v30; // xmm0_8
  int (**vptr_IHandleEntity)(...); // rax
  int v32; // xmm1_4
  int v33; // xmm1_4
  CEntityInstance *v34; // rax
  float v35; // xmm0_4
  ConVar *m_pParent; // rax
  ConVar *v37; // rdx
  const Vector *v38; // rax
  vec_t z; // xmm0_4
  int v40; // [rsp-8h] [rbp-12C8h]
  float v41; // [rsp-4h] [rbp-12C4h]
  int v43; // [rsp+14h] [rbp-12ACh]
  float m_flDamageTime; // [rsp+20h] [rbp-12A0h]
  float v45; // [rsp+20h] [rbp-12A0h]
  float v46; // [rsp+20h] [rbp-12A0h]
  float strength; // [rsp+28h] [rbp-1298h] BYREF
  float v48; // [rsp+2Ch] [rbp-1294h]
  Vector fireMins; // [rsp+30h] [rbp-1290h] BYREF
  float v50; // [rsp+3Ch] [rbp-1284h]
  Vector fireMaxs; // [rsp+40h] [rbp-1280h] BYREF
  float v52; // [rsp+4Ch] [rbp-1274h]
  Vector fireEntityDamageMins; // [rsp+50h] [rbp-1270h] BYREF
  float v54; // [rsp+5Ch] [rbp-1264h]
  __int128 fireEntityDamageMaxs; // [rsp+60h] [rbp-1260h] OVERLAPPED BYREF
  int v56; // [rsp+70h] [rbp-1250h]
  __int64 v57; // [rsp+78h] [rbp-1248h] BYREF
  CGameQueryAttributes filter; // [rsp+80h] [rbp-1240h]
  __int64 v59; // [rsp+A8h] [rbp-1218h] BYREF
  CFire *pFires[16]; // [rsp+B0h] [rbp-1210h] BYREF
  CTakeDamageInfo info; // [rsp+130h] [rbp-1190h] BYREF
  Vector otherMaxs; // [rsp+1C0h] [rbp-1100h]
  float v63; // [rsp+1E4h] [rbp-10DCh]
  char v64; // [rsp+1F0h] [rbp-10D0h]
  __int64 v65; // [rsp+220h] [rbp-10A0h]
  __int64 v66; // [rsp+228h] [rbp-1098h]
  __int64 v67; // [rsp+230h] [rbp-1090h]
  int v68; // [rsp+238h] [rbp-1088h]
  __int16 v69; // [rsp+23Ch] [rbp-1084h]
  char v70; // [rsp+23Eh] [rbp-1082h]
  char v71; // [rsp+23Fh] [rbp-1081h]
  int v72; // [rsp+268h] [rbp-1058h] BYREF
  COverlapList nearbyList; // [rsp+270h] [rbp-1050h] BYREF

  *&nearbyList.m_list.m_Memory.m_FixedMemory.m_Data[4088] = __readfsqword(0x28u);
  m_flFuel = this->m_flFuel;
  if ( m_flFuel != 0.0 )
  {
    v28 = m_flFuel - a2;
    this->m_flFuel = v28;
    if ( v28 <= 0.0 )
    {
      CFire::GoOutInSeconds(this, 1.0, simTime, 0.0);
      return;
    }
  }
  m_flHeatLevel = this->m_flHeatLevel;
  v6 = 0.015625 * m_flHeatLevel;
  if ( m_flHeatLevel != this->m_flLastHeatLevel )
  {
    this->m_flLastHeatLevel = m_flHeatLevel;
    v45 = 0.015625 * m_flHeatLevel;
    v34 = CEntityHandle::operator CEntityInstance *(&this->m_hEffect);
    (*(v34->_vptr_IHandleEntity + 207))(v34, v45, 0.5);
    v6 = v45;
  }
  m_flAttackTime = this->m_flAttackTime;
  m_flMaxHeat = this->m_flMaxHeat;
  if ( m_flAttackTime > 0.0 )
    m_flMaxHeat = m_flMaxHeat / m_flAttackTime;
  if ( this->m_bEnabled )
  {
    v46 = v6;
    CFire::AddHeat(this, (fire_growthrate.m_pParent->m_Value.m_fValue * a2) * m_flMaxHeat, m_flAttackTime, 1);
    v6 = v46;
  }
  v41 = v6 * this->m_flHeatLevel;
  CFire::GetFireDimensions(this, &strength, &fireMins.z);
  v52 = v48 * 0.5;
  fireEntityDamageMins.x = fireMins.x * 0.5;
  fireMaxs.z = strength * 0.5;
  v54 = v50 * 0.5;
  *&fireEntityDamageMaxs = fireMaxs.x * 0.5;
  fireEntityDamageMins.z = 0.5 * fireMins.z;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  strength = strength + AbsOrigin->x;
  v48 = v48 + AbsOrigin->y;
  fireMins.x = fireMins.x + AbsOrigin->z;
  v10 = CBaseEntity::GetAbsOrigin(this);
  fireMins.z = fireMins.z + v10->x;
  v50 = v50 + v10->y;
  fireMaxs.x = fireMaxs.x + v10->z;
  v11 = CBaseEntity::GetAbsOrigin(this);
  fireMaxs.z = fireMaxs.z + v11->x;
  v52 = v52 + v11->y;
  fireEntityDamageMins.x = fireEntityDamageMins.x + v11->z;
  v12 = CBaseEntity::GetAbsOrigin(this);
  v13 = fireEntityDamageMins.z + v12->x;
  v72 = 0;
  fireEntityDamageMins.z = v13;
  v14 = v54 + v12->y;
  v57 = 0;
  v54 = v14;
  v15 = *&fireEntityDamageMaxs + v12->z;
  WORD2(filter.m_nInteractsAs) = 0;
  *&nearbyList.m_list.m_Size = &nearbyList.m_list.m_Memory.m_nAllocationCount;
  *&fireEntityDamageMaxs = v15;
  nearbyList.m_list.m_Memory.m_pMemory = 0x8000000000000040LL;
  filter.m_nInteractsWith = 0;
  filter.m_nInteractsExclude = 0;
  LODWORD(filter.m_nInteractsAs) = -1;
  HIBYTE(filter.m_nInteractsAs) = HIBYTE(filter.m_nInteractsAs) & 0xF0 | 9;
  filter.m_nEntityIdToIgnore = 7;
  BYTE6(filter.m_nInteractsAs) = 4;
  LODWORD(filter.m_nInteractsAs) = EntityIDFromBaseEntity(this);
  WORD2(filter.m_nInteractsAs) = HierarchyIDFromBaseEntity(this);
  CGamePhysicsQueryInterface::EntitiesInBox(
    g_pPhysicsQuery,
    &strength,
    &fireMins.z,
    &v57,
    OverlapTest_t::OVERLAP_TEST_SHAPE,
    &v72);
  m_flDamageTime = this->m_flDamageTime;
  if ( CGlobalVarsBase::curtime(gpGlobals, 0) >= m_flDamageTime )
  {
    v35 = CGlobalVarsBase::curtime(gpGlobals, 0);
    m_pParent = fire_dmginterval.m_pParent;
    v37 = fire_dmgscale.m_pParent;
    this->m_flDamageTime = v35 + fire_dmginterval.m_pParent->m_Value.m_fValue;
    v40 = ((((v41 * v37->m_Value.m_fValue) * this->m_flDamageScale) + fire_dmgbase.m_pParent->m_Value.m_fValue)
         * m_pParent->m_Value.m_fValue);
    v16 = v40 != 0;
  }
  else
  {
    v40 = 0;
    v16 = 0;
  }
  v43 = this->m_nFireType == 0 ? 8 : 0x1000000;
  if ( v72 <= 0 )
    goto LABEL_30;
  v17 = 0;
  v18 = 0;
  do
  {
    while ( 1 )
    {
      LODWORD(info.m_hScriptInstance) = *(*&nearbyList.m_list.m_Size + (v17 << 6) + 24);
      if ( (LODWORD(info.m_hScriptInstance) + 2) <= 1
        || (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info.m_hScriptInstance) >> 9) & 0x3F]) == 0
        || (v21 = &v20[info.m_hScriptInstance & 0x1FF]) == 0
        || LODWORD(info.m_hScriptInstance) != v21->m_EHandle.m_Index )
      {
LABEL_12:
        m_pInstance = 0;
LABEL_13:
        if ( CBaseEntity::GetDamageOptions(m_pInstance) != DamageOptions_t::DAMAGE_NO && v16 )
        {
          m_pCollision = m_pInstance->m_pCollision;
          if ( m_pCollision != 0 )
          {
            CCollisionProperty::CollisionAABBToWorldAABB(
              m_pCollision,
              &m_pCollision->m_vecMins.m_Value,
              &m_pCollision->m_vecMaxs.m_Value,
              &pFires[15],
              &info.m_hScriptInstance);
          }
          else
          {
            v38 = CBaseEntity::GetAbsOrigin(m_pInstance);
            pFires[15] = *&v38->x;
            z = v38->z;
            info.m_hScriptInstance = pFires[15];
            *&info._vptr_CTakeDamageInfo = z;
            otherMaxs.x = z;
          }
          if ( IsBoxIntersectingBox(&pFires[15], &info.m_hScriptInstance, &fireMaxs.z, &fireEntityDamageMins.z) )
          {
            v70 = 0;
            v65 = 0;
            v66 = 0;
            v67 = 0;
            v71 = 7;
            v68 = 0;
            v69 = 0;
            CGameTrace::Init(&info.m_hScriptInstance);
            v30 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
            vptr_IHandleEntity = this->_vptr_IHandleEntity;
            LODWORD(info._vptr_CTakeDamageInfo) = v32;
            pFires[15] = *&v30;
            *(&fireEntityDamageMaxs + 1) = (vptr_IHandleEntity[62])(this);
            v56 = v33;
            UTIL_TraceSphere(
              (&fireEntityDamageMaxs + 8),
              &pFires[15],
              phys_traceline_radius.m_pParent->m_Value.m_fValue,
              0x5001u,
              m_pInstance,
              4,
              &info.m_hScriptInstance);
            if ( v63 == 1.0 && v64 == 0 )
            {
              CTakeDamageInfo::CTakeDamageInfo(&pFires[15], this, this, v40, v43, 0);
              CBaseEntity::TakeDamage(m_pInstance, &pFires[15]);
              CTakeDamageInfo::~CTakeDamageInfo(&pFires[15]);
            }
          }
        }
        goto LABEL_15;
      }
      m_pInstance = v21->m_pInstance;
      if ( this != v21->m_pInstance )
      {
        if ( m_pInstance == 0 )
          goto LABEL_12;
        if ( !CEntityIdentity::ClassMatches(m_pInstance->m_pEntity, "env_fire") )
          goto LABEL_13;
        if ( v18 <= 0xF )
          break;
      }
LABEL_15:
      if ( v72 <= ++v17 )
        goto LABEL_25;
    }
    pFires[v18++ - 1] = m_pInstance;
    ++v17;
  }
  while ( v72 > v17 );
LABEL_25:
  v22 = LODWORD(a2);
  if ( v18 != 0 )
  {
    v23 = v18;
    v24 = &v59;
    v25 = &pFires[v18 - 1];
    *v22.m128i_i32 = ((a2 * fire_heatscale.m_pParent->m_Value.m_fValue) * v41) / v23;
    v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    do
    {
      while ( !(*v24)->m_bEnabled )
      {
        if ( ++v24 == v25 )
          goto LABEL_30;
      }
      CFire::AddHeat(*v24++, v26, v23, 0);
    }
    while ( v24 != v25 );
  }
LABEL_30:
  v72 = 0;
  v27 = HIDWORD(nearbyList.m_list.m_Memory.m_pMemory) & 0xC0000000;
  if ( SLODWORD(nearbyList.m_list.m_Memory.m_pMemory) < 0
    || *&nearbyList.m_list.m_Size == &nearbyList.m_list.m_Memory.m_nAllocationCount )
  {
    if ( v27 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&nearbyList);
  }
  else if ( *&nearbyList.m_list.m_Size != 0 && v27 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CFire::DestroyEffect  (line 1007, @0x00000000021fdad0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseFire*, operator CEntityInstance*
// calls: UTIL_Remove
// callers: CFire::UpdateOnRemove, CFire::GoOut
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFire::DestroyEffect(CFire *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CEntityInstance *m_pInstance; // rbx

  m_Index = this->m_hEffect.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEffect.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hEffect.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 209))(v3->m_pInstance, 0);
          UTIL_Remove(m_pInstance);
        }
      }
    }
  }
}


// CFire::BurnThink  (line 1022, @0x00000000022094f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Extent, Init, InitExtent, NavAreaCollector, Purge, RemoveAll, WorldSpaceSurroundingBounds, curtime, operator+=, operator-=, operator=, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~NavAreaCollector
// calls: CBaseEntity::SetNextThink, CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>, CUtlMemory<CNavArea*, int>::Purge, CBaseEntity::GetAbsOrigin, _Unwind_Resume
// callers: CFire::Start
void __fastcall CFire::BurnThink(CFire *const this)
{
  double v1; // xmm1_8
  CGlobalVars *v3; // r12
  double v4; // xmm0_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  float m_flCurrentTime; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v9; // rax
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  CCollisionProperty *m_pCollision; // rdi
  float z; // xmm1_4
  float x; // xmm6_4
  float y; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  FnGlobalVarsWarningFunc v19; // rax
  const Vector *AbsOrigin; // rax
  Extent fireExtent; // [rsp+0h] [rbp-60h] BYREF
  NavAreaCollector overlap; // [rsp+20h] [rbp-40h] BYREF

  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v4 = v3->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v4 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v4, v1, 0);
  (*(this->_vptr_IHandleEntity + 214))(this, 0.1);
  if ( TheNavMesh != 0 )
  {
    v6 = gpGlobals;
    m_flCurrentTime = 0.0;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v9 = gpGlobals->m_pfnWarningFunc;
        if ( v9 != 0 )
          (v9)(1, v5, 0.0);
      }
      m_flCurrentTime = v6->m_flCurrentTime;
    }
    if ( m_flCurrentTime > (this->m_flLastNavUpdateTime + 5.0) )
    {
      v10 = gpGlobals;
      v11 = 0.0;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v19 = gpGlobals->m_pfnWarningFunc;
          if ( v19 != 0 )
            (v19)(1, 0.0);
        }
        v11 = v10->m_flCurrentTime;
      }
      m_pCollision = this->m_pCollision;
      this->m_flLastNavUpdateTime = v11;
      overlap.m_Areas.m_Size = 0;
      overlap.m_Areas.m_Memory.m_pMemory = 0;
      overlap.m_Areas.m_Memory.m_nAllocationCount = 0;
      overlap.m_Areas.m_Memory.m_nGrowSize = 0;
      overlap.m_bCheckForDuplicates = 0;
      fireExtent.lo.x = 3.4028235e38;
      fireExtent.lo.y = 3.4028235e38;
      fireExtent.lo.z = 3.4028235e38;
      fireExtent.hi.x = -3.4028235e38;
      fireExtent.hi.y = -3.4028235e38;
      fireExtent.hi.z = -3.4028235e38;
      if ( m_pCollision != 0 )
      {
        (*(m_pCollision->_vptr_ICollideable + 10))(m_pCollision, &fireExtent, &fireExtent.hi);
        z = fireExtent.lo.z;
        x = fireExtent.lo.x;
        y = fireExtent.lo.y;
        v16 = fireExtent.hi.x;
        v17 = fireExtent.hi.y;
        v18 = fireExtent.hi.z;
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v18 = AbsOrigin->z;
        v17 = AbsOrigin->y;
        v16 = AbsOrigin->x;
        z = v18;
        y = v17;
        x = AbsOrigin->x;
      }
      fireExtent.lo.x = x - 32.0;
      fireExtent.lo.y = y - 32.0;
      fireExtent.lo.z = (z - 71.0) - 32.0;
      fireExtent.hi.x = v16 + 32.0;
      fireExtent.hi.y = v17 + 32.0;
      fireExtent.hi.z = v18 + 32.0;
      CNavMesh::ForAllAreasOverlappingExtent<NavAreaCollector>(TheNavMesh, &overlap, &fireExtent);
      overlap.m_Areas.m_Size = 0;
      if ( (overlap.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CNavArea *,int>::Purge(&overlap.m_Areas.m_Memory);
        if ( (overlap.m_Areas.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CNavArea *,int>::Purge(&overlap.m_Areas.m_Memory);
      }
    }
  }
}


// CFire::GoOutThink  (line 1064, @0x0000000002203a10, libserver.so)
// calls: CFire::GoOut
void __fastcall CFire::GoOutThink(CFire *const this)
{
  CFire::GoOut(this);
}


// CFire::GoOutInSeconds  (line 1071, @0x00000000021fdbf0, libserver.so)  // inlines: curtime
// calls: CFire::Scale, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CFire::InputExtinguishTemporary, CFire::InputExtinguish, CFire::Update
// globals: CFire::GoOutThink(void)
void __fastcall CFire::GoOutInSeconds(CFire *const this, float a2, float flSeconds, float a4)
{
  double v5; // xmm1_8
  double v6; // xmm0_8
  float v7; // xmm2_4
  CGlobalVars *v8; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CFire::Scale(this, 0.0, a2, a4);
  CBaseEntity::ThinkSet(this, CFire::GoOutThink, 0.0, 0, 0);
  v6 = 0.0;
  v7 = a2;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        (m_pfnWarningFunc)(1, 0.0);
        v7 = a2;
      }
    }
    *&v6 = LODWORD(v8->m_flCurrentTime);
  }
  *&v6 = *&v6 + v7;
  CBaseEntity::SetNextThink(this, v6, v5, 0);
}


// CFire::OnTakeDamage  (line 1085, @0x00000000021ee8e0, libserver.so)
int __fastcall CFire::OnTakeDamage(CFire *const this, const CTakeDamageInfo *const info)
{
  return 0;
}


// CFire::AddHeat  (line 1092, @0x0000000002209cf0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, IndexToIdentity, IsBurning, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator==<CBaseFire>
// calls: CFire::StartFire
// callers: CFire::AddHeat, FireSystem_AddHeatInRadius, CFire::Update, CEnvFireSource::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFire::AddHeat(CFire *const this, float a2, float heat, bool selfHeat)
{
  CGlobalVars *v5; // r12
  float v6; // xmm2_4
  float m_flHeatAbsorb; // xmm2_4
  float m_flHeatLevel; // xmm3_4
  float m_fValue; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float m_flMaxHeat; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  float v17; // [rsp-14h] [rbp-1Ch]

  if ( !selfHeat && this->m_flHeatLevel > 0.0 )
    a2 = a2 * fire_incomingheatscale.m_pParent->m_Value.m_fValue;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v17 = a2;
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        a2 = v17;
      }
    }
    v6 = v5->m_flCurrentTime + 0.5;
  }
  else
  {
    v6 = 0.5;
  }
  this->m_lastDamage = v6;
  m_flHeatAbsorb = this->m_flHeatAbsorb;
  m_flHeatLevel = this->m_flHeatLevel;
  if ( m_flHeatAbsorb > 0.0 )
  {
    m_fValue = fire_absorbrate.m_pParent->m_Value.m_fValue;
    v10 = m_fValue * a2;
    if ( (m_fValue * a2) <= m_flHeatAbsorb )
    {
      a2 = 0.0;
      this->m_flHeatAbsorb = m_flHeatAbsorb - v10;
    }
    else
    {
      this->m_flHeatAbsorb = 0.0;
      a2 = a2 - (m_flHeatAbsorb / m_fValue);
    }
  }
  v11 = a2 + m_flHeatLevel;
  this->m_flHeatLevel = v11;
  if ( m_flHeatLevel <= 0.0 && v11 > 0.0 )
  {
    m_Index = this->m_hEffect.m_Index;
    if ( m_Index + 2 <= 1
      || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEffect.m_Index) >> 9) & 0x3F]) == 0
      || (v16 = &v15[this->m_hEffect.m_Index & 0x1FF]) == 0
      || m_Index != v16->m_EHandle.m_Index
      || v16->m_pInstance == 0 )
    {
      CFire::StartFire(this);
      v11 = this->m_flHeatLevel;
    }
  }
  m_flMaxHeat = this->m_flMaxHeat;
  if ( v11 > m_flMaxHeat )
    this->m_flHeatLevel = m_flMaxHeat;
}


// CFire::AddHeat  (line 1092, @0x0000000002209ec0, libserver.so)
// calls: CFire::AddHeat
void __fastcall CFire::AddHeat(CFire *const this, float a2, float heat, bool selfHeat)
{
  if ( this->m_bEnabled )
    CFire::AddHeat(this, a2, heat, selfHeat);
}


// CFire::Scale  (line 1138, @0x00000000021fdb80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseFire*, operator CEntityInstance*
// callers: CFire::GoOutInSeconds
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFire::Scale(CFire *const this, double a2, float end, float time)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hEffect.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEffect.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[this->m_hEffect.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        (*(v6->m_pInstance->_vptr_IHandleEntity + 207))(v6->m_pInstance, a2, end, time);
    }
  }
}


// CFire::Extinguish  (line 1152, @0x0000000002203a20, libserver.so)  // inlines: Approach, GetFloat, curtime
// calls: CFire::GoOut
// callers: FireSystem_ExtinguishInRadius
void __fastcall CFire::Extinguish(CFire *const this, double a2, float heat)
{
  CGlobalVars *v4; // r12
  CGlobalVars *v5; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v7; // xmm1_4
  float m_flHeatLevel; // xmm5_4
  ConVar *m_pParent; // rdx
  float v10; // xmm2_4
  float v11; // xmm0_4
  ConVar *v12; // rdx
  float v13; // xmm0_4
  float m_fValue; // xmm1_4
  float v15; // xmm1_4
  float m_flAttackTime; // xmm3_4
  float v17; // xmm0_4
  int heata; // [rsp+Ch] [rbp-24h]

  if ( this->m_bEnabled )
  {
    v4 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v5 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          heata = LODWORD(a2);
          (m_pfnWarningFunc)(1, a2, heat);
          v5 = gpGlobals;
          LODWORD(a2) = heata;
        }
        else
        {
          v5 = gpGlobals;
        }
      }
      v7 = v4->m_flCurrentTime + 0.5;
    }
    else
    {
      v5 = 0;
      v7 = 0.5;
    }
    m_flHeatLevel = this->m_flHeatLevel;
    this->m_lastDamage = v7;
    m_pParent = fire_extabsorb.m_pParent;
    v10 = m_flHeatLevel - *&a2;
    this->m_flHeatLevel = m_flHeatLevel - *&a2;
    v11 = *&a2 * m_pParent->m_Value.m_fValue;
    v12 = fire_maxabsorb.m_pParent;
    v13 = v11 + this->m_flHeatAbsorb;
    this->m_flHeatAbsorb = v13;
    m_fValue = v12->m_Value.m_fValue;
    if ( v13 > m_fValue )
      this->m_flHeatAbsorb = m_fValue;
    v15 = 0.3125 * this->m_flMaxHeat;
    m_flAttackTime = this->m_flAttackTime;
    v17 = v5->frametime + v5->frametime;
    if ( (v15 - m_flAttackTime) > v17 )
    {
      v15 = v17 + m_flAttackTime;
    }
    else if ( -v17 > (v15 - m_flAttackTime) )
    {
      v15 = m_flAttackTime - v17;
    }
    this->m_flAttackTime = v15;
    if ( v10 <= 0.0 )
    {
      this->m_flHeatLevel = 0.0;
      if ( m_flHeatLevel > 0.0 )
        CFire::GoOut(this);
    }
  }
}


// CFire::GoOut  (line 1186, @0x0000000002203870, libserver.so)  // inlines: CVariantBase, FireOutput, Free, SetToOutSize, Vector, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CFire::DestroyEffect, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, UTIL_SetSize, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFire::Disable, CFire::InputDisable, CFire::GoOutThink, CFire::Extinguish, CFire::Spawn
bool __fastcall CFire::GoOut(CFire *const this)
{
  float v2; // xmm0_4
  double v3; // xmm1_8
  Vector v5; // [rsp-30h] [rbp-38h] BYREF
  CVariant v6[2]; // [rsp-20h] [rbp-28h] BYREF

  v6[0].m_type = 0;
  v6[0].m_flags = 0;
  v6[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnExtinguished, this, this, v6, 0.0);
  if ( (v6[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v6[0].m_uint64);
  CFire::DestroyEffect(this);
  v2 = this->m_flHeatLevel - 20.0;
  if ( v2 <= 0.0 )
  {
    this->m_flHeatLevel = v2;
  }
  else
  {
    this->m_flHeatLevel = 0.0;
    v2 = 0.0;
  }
  this->m_flLastHeatLevel = v2;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v3, 0);
  if ( SLOBYTE(this->m_spawnflags.m_Value) < 0 )
  {
    UTIL_Remove(this);
    return 1;
  }
  else
  {
    v6[0].m_uint64 = 0x4100000041000000LL;
    *&v6[0].m_type = 1090519040;
    v5.x = -8.0;
    v5.y = -8.0;
    v5.z = 0.0;
    UTIL_SetSize(this, &v5, v6);
    return 0;
  }
}


// CEnvFireSource::~CEnvFireSource  (line 1219, @0x0000000002210cd0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvFireSource::~CEnvFireSource(CEnvFireSource *const this)
{
  this->_vptr_IHandleEntity = &off_4039690;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvFireSource::~CEnvFireSource  (line 1219, @0x0000000002210cf0, libserver.so)  // inlines: ~CEnvFireSource
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvFireSource::~CEnvFireSource(CEnvFireSource *const this)
{
  this->_vptr_IHandleEntity = &off_4039690;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvFireSource::GetEntityClass  (line 1221, @0x000000000220eb30, libserver.so)
CEntityClass *__cdecl CEnvFireSource::GetEntityClass()
{
  return g_pEntityCEnvFireSourceClass;
}


// CEnvFireSource::Schema_DynamicBinding  (line 1221, @0x000000000220eb40, libserver.so)
// globals: CEnvFireSource::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFireSource::Schema_DynamicBinding(const CEnvFireSource *const this)
{
  return CEnvFireSource::s_pSchemaBinding;
}


// CEnvFireSource::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1221, @0x000000000220eb50, libserver.so)
// globals: CEnvFireSource::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFireSource::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  return CEnvFireSource::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvFireSource::CEntityInstanceEntityClass::DestructInstance  (line 1221, @0x000000000220eb60, libserver.so)  // inlines: Destruct<CEnvFireSource>
void __fastcall CEnvFireSource::CEntityInstanceEntityClass::DestructInstance(
        CEnvFireSource::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvFireSource::CEntityInstanceEntityClass::FreeInstance  (line 1221, @0x000000000220eb80, libserver.so)
void __fastcall CEnvFireSource::CEntityInstanceEntityClass::FreeInstance(
        CEnvFireSource::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvFireSource::CEntityInstanceEntityClass::CanAllocate  (line 1221, @0x000000000220eba0, libserver.so)
bool __fastcall CEnvFireSource::CEntityInstanceEntityClass::CanAllocate(
        const CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvFireSource::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1221, @0x000000000220ebb0, libserver.so)
// globals: CEnvFireSource::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvFireSource::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  return CEnvFireSource::s_pSchemaBinding;
}


// CEnvFireSource::CEntityInstanceEntityClass::AllocateInstance  (line 1221, @0x000000000220fea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvFireSource::CEntityInstanceEntityClass::AllocateInstance(
        CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CEnvFireSource::CEntityInstanceEntityClass::ConstructInstance  (line 1221, @0x0000000002210410, libserver.so)  // inlines: CEnvFireSource, Construct<CEnvFireSource>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvFireSource::CEntityInstanceEntityClass::ConstructInstance(
        CEnvFireSource::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4039690;
  }
  return p;
}


// CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1221, @0x0000000002212620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1221, @0x0000000002212640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFireSource::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvFireSource::GetEntityClassInternal  (line 1221, @0x00000000022183d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_firesource", "CEnvFireSource"
// globals: `guard variable for'CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass, CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass, __dso_handle, CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo, CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo
CEntityClass *__cdecl CEnvFireSource::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass);
    CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass._vptr_CEntityClass = off_4039610;
    __cxa_guard_release(&`guard variable for'CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass);
    __cxa_atexit(
      CEnvFireSource::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvFireSourceClass != 0 )
    return &CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass;
  if ( `guard variable for'CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo,
      "CEnvFireSource",
      "env_firesource",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo);
  }
  CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass.m_pClassInfo = &CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo;
  CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass.m_pBaseClassInfo = CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvFireSourceClass = &CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass;
  CEnvFireSource::GetEntityClassInfo(void)::g_EntityCEnvFireSourceClassInfo.m_pClass = &CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass;
  CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvFireSourceClass->m_pComponentOverrides = 0;
  return &CEnvFireSource::GetEntityClassInternal(void)::g_EntityCEnvFireSourceClass;
}


// CEnvFireSource::GetDataDescMap  (line 1238, @0x00000000021ee8f0, libserver.so)
// globals: CEnvFireSource::m_DataMap
datamap_t *__fastcall CEnvFireSource::GetDataDescMap(CEnvFireSource *const this)
{
  return &CEnvFireSource::m_DataMap;
}


// CEnvFireSource::AddDatadescMetadataKeys  (line 1238, @0x00000000021fdd40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvFireSource::GetEntityClass(void)
void __fastcall CEnvFireSource::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvFireSource::GetEntityClass);
}


// CEnvFireSource::GetBaseMap  (line 1238, @0x00000000021fdd60, libserver.so)
datamap_t *__cdecl CEnvFireSource::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvFireSource>  (line 1238, @0x00000000021fdd70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvFireSource"
// globals: `guard variable for'DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder, CEnvFireSource::GetEntityClass(void), CEnvFireSource::m_DataMap, DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvFireSource>(CEnvFireSource *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_pszBase = "CEnvFireSource";
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvFireSource>(CEnvFireSource *)::nameHolder,
      &_dso_handle);
  }
  CEnvFireSource::m_DataMap.dataNumFields = 5;
  CEnvFireSource::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvFireSource::m_DataMap.dataDesc = &DataMapInit<CEnvFireSource>(CEnvFireSource *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvFireSource::m_DataMap, CEnvFireSource::GetEntityClass);
  return &CEnvFireSource::m_DataMap;
}


// CEnvFireSource::Spawn  (line 1251, @0x00000000021f25f0, libserver.so)  // inlines: TurnOff, TurnOn
// calls: CBaseEntity::Spawn, CEnvFireSource::TurnOff, CEnvFireSource::TurnOn
void __fastcall CEnvFireSource::Spawn(CEnvFireSource *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    if ( !this->m_bEnabled )
      CEnvFireSource::TurnOn(this);
  }
  else if ( this->m_bEnabled )
  {
    CEnvFireSource::TurnOff(this);
  }
}


// CEnvFireSource::Think  (line 1267, @0x000000000220a8b0, libserver.so)  // inlines: AddHeat
// calls: CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, FireSystem_GetFiresInSphere, CFire::AddHeat
// callers: CEnvFireSource::Think
void __fastcall CEnvFireSource::Think(CEnvFireSource *const this)
{
  CFire **v2; // rbx
  double v3; // xmm0_8
  double v4; // xmm1_8
  const Vector *AbsOrigin; // rax
  int FiresInSphere; // eax
  float v7; // xmm1_4
  CFire **v8; // r13
  CFire *v9; // rdi
  float radius; // [rsp+Ch] [rbp-424h]
  CFire *pFires[128]; // [rsp+10h] [rbp-420h] BYREF

  v2 = pFires;
  *&v3 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.25;
  CBaseEntity::SetNextThink(this, v3, v4, 0);
  radius = this->m_radius;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FiresInSphere = FireSystem_GetFiresInSphere(pFires, 128, 0, AbsOrigin, radius);
  if ( FiresInSphere > 0 )
  {
    v8 = &pFires[(FiresInSphere - 1) + 1];
    do
    {
      while ( 1 )
      {
        v9 = *v2;
        if ( (*v2)->m_bEnabled )
          break;
        if ( ++v2 == v8 )
          return;
      }
      ++v2;
      CFire::AddHeat(v9, this->m_damage * 0.25, v7, 0);
    }
    while ( v2 != v8 );
  }
}


// CEnvFireSource::Think  (line 1267, @0x000000000220a980, libserver.so)
// calls: CEnvFireSource::Think
void __fastcall CEnvFireSource::Think(CEnvFireSource *const this)
{
  if ( this->m_bEnabled )
    CEnvFireSource::Think(this);
}


// CEnvFireSource::TurnOn  (line 1284, @0x00000000021f2570, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
// callers: CEnvFireSource::InputEnable, CEnvFireSource::Spawn, CEnvFireSource::TurnOn
void __fastcall CEnvFireSource::TurnOn(CEnvFireSource *const this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = 0.0;
  this->m_bEnabled = 1;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v2, v1, 0);
}


// CEnvFireSource::TurnOn  (line 1284, @0x00000000021fde40, libserver.so)
// calls: CEnvFireSource::TurnOn
void __fastcall CEnvFireSource::TurnOn(CEnvFireSource *const this)
{
  if ( !this->m_bEnabled )
    CEnvFireSource::TurnOn(this);
}


// CEnvFireSource::TurnOff  (line 1295, @0x00000000021efc60, libserver.so)
// calls: CBaseEntity::SetNextThink
// callers: CEnvFireSource::InputDisable, CEnvFireSource::Spawn, CEnvFireSource::TurnOff
void __fastcall CEnvFireSource::TurnOff(CEnvFireSource *const this)
{
  double v1; // xmm1_8

  this->m_bEnabled = 0;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
}


// CEnvFireSource::TurnOff  (line 1295, @0x00000000021fde60, libserver.so)
// calls: CEnvFireSource::TurnOff
void __fastcall CEnvFireSource::TurnOff(CEnvFireSource *const this)
{
  if ( this->m_bEnabled )
    CEnvFireSource::TurnOff(this);
}


// CEnvFireSource::InputEnable  (line 1306, @0x00000000021f25d0, libserver.so)  // inlines: TurnOn
// calls: CEnvFireSource::TurnOn
void __fastcall CEnvFireSource::InputEnable(CEnvFireSource *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bEnabled )
    CEnvFireSource::TurnOn(this);
}


// CEnvFireSource::InputDisable  (line 1313, @0x00000000021efc80, libserver.so)  // inlines: TurnOff
// calls: CEnvFireSource::TurnOff
void __fastcall CEnvFireSource::InputDisable(CEnvFireSource *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled )
    CEnvFireSource::TurnOff(this);
}


// CEnvFireSensor::~CEnvFireSensor  (line 1324, @0x0000000002210d20, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvFireSensor::~CEnvFireSensor(CEnvFireSensor *const this)
{
  this->_vptr_IHandleEntity = &off_4039DB0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvFireSensor::~CEnvFireSensor  (line 1324, @0x0000000002210d40, libserver.so)  // inlines: ~CEnvFireSensor
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvFireSensor::~CEnvFireSensor(CEnvFireSensor *const this)
{
  this->_vptr_IHandleEntity = &off_4039DB0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvFireSensor::GetEntityClass  (line 1326, @0x000000000220ebc0, libserver.so)
CEntityClass *__cdecl CEnvFireSensor::GetEntityClass()
{
  return g_pEntityCEnvFireSensorClass;
}


// CEnvFireSensor::Schema_DynamicBinding  (line 1326, @0x000000000220ebd0, libserver.so)
// globals: CEnvFireSensor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFireSensor::Schema_DynamicBinding(const CEnvFireSensor *const this)
{
  return CEnvFireSensor::s_pSchemaBinding;
}


// CEnvFireSensor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1326, @0x000000000220ebe0, libserver.so)
// globals: CEnvFireSensor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvFireSensor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  return CEnvFireSensor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvFireSensor::CEntityInstanceEntityClass::DestructInstance  (line 1326, @0x000000000220ebf0, libserver.so)  // inlines: Destruct<CEnvFireSensor>
void __fastcall CEnvFireSensor::CEntityInstanceEntityClass::DestructInstance(
        CEnvFireSensor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvFireSensor::CEntityInstanceEntityClass::FreeInstance  (line 1326, @0x000000000220ec10, libserver.so)
void __fastcall CEnvFireSensor::CEntityInstanceEntityClass::FreeInstance(
        CEnvFireSensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvFireSensor::CEntityInstanceEntityClass::CanAllocate  (line 1326, @0x000000000220ec30, libserver.so)
bool __fastcall CEnvFireSensor::CEntityInstanceEntityClass::CanAllocate(
        const CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvFireSensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1326, @0x000000000220ec40, libserver.so)
// globals: CEnvFireSensor::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvFireSensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  return CEnvFireSensor::s_pSchemaBinding;
}


// CEnvFireSensor::CEntityInstanceEntityClass::AllocateInstance  (line 1326, @0x000000000220fee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvFireSensor::CEntityInstanceEntityClass::AllocateInstance(
        CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 848);
  memset(v1, 0, 0x350u);
  return v1;
}


// CEnvFireSensor::CEntityInstanceEntityClass::ConstructInstance  (line 1326, @0x0000000002210440, libserver.so)  // inlines: CEntityIOOutput, CEnvFireSensor, Construct<CEnvFireSensor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvFireSensor::CEntityInstanceEntityClass::ConstructInstance(
        CEnvFireSensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4039DB0;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
  }
  return p;
}


// CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1326, @0x0000000002212670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1326, @0x0000000002212690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvFireSensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvFireSensor::GetEntityClassInternal  (line 1326, @0x0000000002218520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_firesensor", "CEnvFireSensor"
// globals: `guard variable for'CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass, CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass, __dso_handle, CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo, CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo
CEntityClass *__cdecl CEnvFireSensor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass);
    CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass._vptr_CEntityClass = off_4039D30;
    __cxa_guard_release(&`guard variable for'CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass);
    __cxa_atexit(
      CEnvFireSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvFireSensorClass != 0 )
    return &CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass;
  if ( `guard variable for'CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo,
      "CEnvFireSensor",
      "env_firesensor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo);
  }
  CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass.m_pClassInfo = &CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo;
  CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass.m_pBaseClassInfo = CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvFireSensorClass = &CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass;
  CEnvFireSensor::GetEntityClassInfo(void)::g_EntityCEnvFireSensorClassInfo.m_pClass = &CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass;
  CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvFireSensorClass->m_pComponentOverrides = 0;
  return &CEnvFireSensor::GetEntityClassInternal(void)::g_EntityCEnvFireSensorClass;
}


// CEnvFireSensor::GetDataDescMap  (line 1349, @0x00000000021ee900, libserver.so)
// globals: CEnvFireSensor::m_DataMap
datamap_t *__fastcall CEnvFireSensor::GetDataDescMap(CEnvFireSensor *const this)
{
  return &CEnvFireSensor::m_DataMap;
}


// CEnvFireSensor::AddDatadescMetadataKeys  (line 1349, @0x00000000021fde80, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvFireSensor::GetEntityClass(void)
void __fastcall CEnvFireSensor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvFireSensor::GetEntityClass);
}


// CEnvFireSensor::GetBaseMap  (line 1349, @0x00000000021fdea0, libserver.so)
datamap_t *__cdecl CEnvFireSensor::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvFireSensor>  (line 1349, @0x00000000021fdeb0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CEnvFireSensor"
// globals: `guard variable for'DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder, `guard variable for'DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc, CEnvFireSensor::GetEntityClass(void), CEnvFireSensor::m_DataMap, DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvFireSensor>(CEnvFireSensor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_pszBase = "CEnvFireSensor";
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::nameHolder,
      &_dso_handle);
  }
  CEnvFireSensor::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc) != 0 )
  {
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc);
  }
  CEnvFireSensor::m_DataMap.dataNumFields = 10;
  CEnvFireSensor::m_DataMap.dataDesc = &DataMapInit<CEnvFireSensor>(CEnvFireSensor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvFireSensor::m_DataMap, CEnvFireSensor::GetEntityClass);
  return &CEnvFireSensor::m_DataMap;
}


// CEnvFireSensor::Spawn  (line 1369, @0x00000000022037f0, libserver.so)  // inlines: TurnOff, TurnOn
// calls: CBaseEntity::Spawn, CEnvFireSensor::TurnOff, CEnvFireSensor::TurnOn
void __fastcall CEnvFireSensor::Spawn(CEnvFireSensor *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    if ( !this->m_bEnabled )
      CEnvFireSensor::TurnOn(this);
  }
  else if ( this->m_bEnabled )
  {
    CEnvFireSensor::TurnOff(this);
  }
}


// CEnvFireSensor::Think  (line 1385, @0x0000000002202e30, libserver.so)
// calls: CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::GetAbsOrigin, FireSystem_GetFiresInSphere, CEntityIOOutput::FireOutput
// callers: CEnvFireSensor::Think
void __fastcall CEnvFireSensor::Think(CEnvFireSensor *const this)
{
  float v2; // xmm1_4
  double v3; // xmm0_8
  const Vector *AbsOrigin; // rax
  int FiresInSphere; // eax
  CFire **v6; // rcx
  float v7; // xmm0_4
  CFire **v8; // r8
  __int64 v9; // rax
  float v10; // xmm1_4
  bool v11; // cf
  bool v12; // zf
  float v13; // [rsp+8h] [rbp-418h]
  float time; // [rsp+Ch] [rbp-414h]
  float timea; // [rsp+Ch] [rbp-414h]
  CFire *pFires[128]; // [rsp+10h] [rbp-410h] BYREF

  v2 = 0.25 * this->m_targetTime;
  if ( v2 < 0.1 )
    v2 = 0.1;
  time = v2;
  *&v3 = CGlobalVarsBase::curtime(gpGlobals, 0) + v2;
  v13 = time;
  CBaseEntity::SetNextThink(this, v3, COERCE_DOUBLE(LODWORD(time)), 0);
  timea = this->m_radius;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  FiresInSphere = FireSystem_GetFiresInSphere(pFires, 128, 1, AbsOrigin, timea);
  if ( FiresInSphere <= 0 )
  {
    v7 = 0.0;
  }
  else
  {
    v6 = pFires;
    v7 = 0.0;
    v8 = &pFires[(FiresInSphere - 1) + 1];
    do
    {
      v9 = *v6++;
      v7 = v7 + *(v9 + 1184);
    }
    while ( v6 != v8 );
  }
  if ( v7 < this->m_targetLevel )
  {
    v12 = !this->m_bHeatAtLevel;
    this->m_levelTime = 0.0;
    if ( !v12 )
    {
      this->m_bHeatAtLevel = 0;
      CEntityIOOutput::FireOutput(&this->m_OnHeatLevelEnd, this, this);
    }
  }
  else
  {
    v10 = v13 + this->m_levelTime;
    v11 = v10 < this->m_targetTime;
    this->m_levelTime = v10;
    if ( !v11 && !this->m_bHeatAtLevel )
    {
      this->m_bHeatAtLevel = 1;
      CEntityIOOutput::FireOutput(&this->m_OnHeatLevelStart, this, this);
    }
  }
}


// CEnvFireSensor::Think  (line 1385, @0x0000000002202fb0, libserver.so)
// calls: CEnvFireSensor::Think
void __fastcall CEnvFireSensor::Think(CEnvFireSensor *const this)
{
  if ( this->m_bEnabled )
    CEnvFireSensor::Think(this);
}


// CEnvFireSensor::TurnOn  (line 1430, @0x00000000021f2650, libserver.so)  // inlines: curtime
// calls: CBaseEntity::SetNextThink
// callers: CEnvFireSensor::InputEnable, CEnvFireSensor::TurnOn, CEnvFireSensor::Spawn
void __fastcall CEnvFireSensor::TurnOn(CEnvFireSensor *const this)
{
  double v1; // xmm1_8
  double v2; // xmm0_8
  CGlobalVars *v4; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = 0.0;
  this->m_bEnabled = 1;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v2 = LODWORD(v4->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v2, v1, 0);
  this->m_bHeatAtLevel = 0;
  this->m_levelTime = 0.0;
}


// CEnvFireSensor::TurnOn  (line 1430, @0x00000000021fdfe0, libserver.so)
// calls: CEnvFireSensor::TurnOn
void __fastcall CEnvFireSensor::TurnOn(CEnvFireSensor *const this)
{
  if ( !this->m_bEnabled )
    CEnvFireSensor::TurnOn(this);
}


// CEnvFireSensor::TurnOff  (line 1443, @0x0000000002203710, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::SetNextThink, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CEnvFireSensor::TurnOff, CEnvFireSensor::Spawn, CEnvFireSensor::InputDisable
void __fastcall CEnvFireSensor::TurnOff(CEnvFireSensor *const this)
{
  double v1; // xmm1_8
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  this->m_bEnabled = 0;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
  if ( this->m_bHeatAtLevel )
  {
    this->m_bHeatAtLevel = 0;
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnHeatLevelEnd, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CEnvFireSensor::TurnOff  (line 1443, @0x00000000022037d0, libserver.so)
// calls: CEnvFireSensor::TurnOff
void __fastcall CEnvFireSensor::TurnOff(CEnvFireSensor *const this)
{
  if ( this->m_bEnabled )
    CEnvFireSensor::TurnOff(this);
}


// CEnvFireSensor::InputEnable  (line 1460, @0x00000000021f26c0, libserver.so)  // inlines: TurnOn
// calls: CEnvFireSensor::TurnOn
void __fastcall CEnvFireSensor::InputEnable(CEnvFireSensor *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bEnabled )
    CEnvFireSensor::TurnOn(this);
}


// CEnvFireSensor::InputDisable  (line 1467, @0x0000000002203850, libserver.so)  // inlines: TurnOff
// calls: CEnvFireSensor::TurnOff
void __fastcall CEnvFireSensor::InputDisable(CEnvFireSensor *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled )
    CEnvFireSensor::TurnOff(this);
}


// CFire::DrawDebugTextOverlays  (line 1477, @0x00000000021ef0d0, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    size: %f"
int __fastcall CFire::DrawDebugTextOverlays(CFire *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    size: %f", this->m_flFireSize);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


