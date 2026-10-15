// Reconstructed from DWARF by pahole; not original source.

// src/game/server/trains.cpp:27
class CBasePlatTrain : public CBaseToggle {
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

public:

private:

	static datamap_t m_DataMap;

	string_t m_NoiseMoving;  // +0x500
	string_t m_NoiseArrived;  // +0x508
	float m_volume;  // +0x518
	float m_flTWidth;  // +0x51c
	float m_flTLength;  // +0x520
	typedef CBaseToggle BaseClass;
	CBasePlatTrain(CBasePlatTrain &);
	CBasePlatTrain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CBasePlatTrain();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool IsTogglePlat();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void PlayMovingSound();
	void StopMovingSound();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[214] IsTogglePlat
	// vtable[34] GetDataDescMap
	// sizeof = 1320
};

// src/game/server/trains.cpp:138
class CFuncPlat : public CBasePlatTrain {
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

public:

private:

	static datamap_t m_DataMap;

	string_t m_sNoise;  // +0x528
	typedef CBasePlatTrain BaseClass;
	CFuncPlat(CFuncPlat &);
	CFuncPlat(CFuncPlat &);
	CFuncPlat();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual bool CreateVPhysics();
	void Setup(const CEntityKeyValues *);
	virtual void Blocked(CBaseEntity *);
	void PlatUse(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void CallGoDown();
	void CallHitTop();
	void CallHitBottom();
	virtual void GoUp();
	virtual void GoDown();
	virtual void HitTop();
	virtual void HitBottom();
	void InputToggle(inputdata_t &);
	void InputGoUp(inputdata_t &);
	void InputGoDown(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncPlat();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[49] CreateVPhysics
	// vtable[115] Blocked
	// vtable[215] GoUp
	// vtable[216] GoDown
	// vtable[217] HitTop
	// vtable[218] HitBottom
	// vtable[34] GetDataDescMap
	// sizeof = 1328
};

// src/game/server/trains.cpp:191
class CPlatTrigger : public CBaseModelEntity {
public:

	CPlatTrigger();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int ObjectCaps();
	void SpawnInsideTrigger(CFuncPlat *);
	virtual void Touch(CBaseEntity *);
	virtual ~CPlatTrigger();

	// vtable[8] Spawn
	// vtable[19] ObjectCaps
	// vtable[112] Touch
	// sizeof = 1160
};

// src/game/server/trains.cpp:530
class CFuncPlatRot : public CFuncPlat {
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

public:

private:

	static datamap_t m_DataMap;

	typedef CFuncPlat BaseClass;
	CFuncPlatRot(CFuncPlatRot &);
	CFuncPlatRot(CFuncPlatRot &);
	CFuncPlatRot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void SetupRotation();
	virtual void GoUp();
	virtual void GoDown();
	virtual void HitTop();
	virtual void HitBottom();
	void RotMove(QAngle &, float);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncPlatRot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[215] GoUp
	// vtable[216] GoDown
	// vtable[217] HitTop
	// vtable[218] HitBottom
	// vtable[34] GetDataDescMap
	// sizeof = 1352
};

// src/game/server/trains.cpp:641
class CFuncTrain : public CBasePlatTrain {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hCurrentTarget;  // +0x524
	bool m_activated;  // +0x528

	EHANDLE m_hEnemy;  // +0x52c
	float m_flBlockDamage;  // +0x530
	float m_flNextBlockTime;  // +0x534
	string_t m_iszLastTarget;  // +0x538
	typedef CBasePlatTrain BaseClass;

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
	CFuncTrain(CFuncTrain &);
	CFuncTrain(CFuncTrain &);
	CFuncTrain();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void OnRestore();
	void SetupTarget();
	virtual void Blocked(CBaseEntity *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void Wait();
	void Next();
	void InputToggle(inputdata_t &);
	void InputStart(inputdata_t &);
	void InputStop(inputdata_t &);
	void Start();
	void Stop();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncTrain();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[18] OnRestore
	// vtable[115] Blocked
	// vtable[108] Use
	// vtable[34] GetDataDescMap
	// sizeof = 1344
};

// src/game/server/trains.cpp:1118
class C_CFuncTrackTrain_MapInstall {
	C_CFuncTrackTrain_MapInstall();

	// sizeof = 1
};

// src/game/server/trains.cpp:2555
class CFuncTrainControls : public CBaseModelEntity {
public:

private:

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
	CFuncTrainControls(CFuncTrainControls &);
	CFuncTrainControls(CFuncTrainControls &);
	CFuncTrainControls();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void Find();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncTrainControls();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 1152
};

// src/game/server/trains.cpp:2632
class CFuncTrackChange : public CFuncPlatRot {
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

public:

private:

	static datamap_t m_DataMap;

	string_t m_trackTopName;  // +0x560
	string_t m_trackBottomName;  // +0x568
	string_t m_trainName;  // +0x570
	int m_targetState;  // +0x57c
	int m_use;  // +0x580
	typedef CFuncPlatRot BaseClass;
	CFuncTrackChange(CFuncTrackChange &);
	CFuncTrackChange(CFuncTrackChange &);
	CFuncTrackChange();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void GoUp();
	virtual void GoDown();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void Find();
	TRAIN_CODE EvaluateTrain(CPathTrack *);
	void UpdateTrain(QAngle &);
	virtual void HitBottom();
	virtual void HitTop();
	virtual void Touch(CBaseEntity *);
	virtual void UpdateAutoTargets(int);
	virtual bool IsTogglePlat();
	void DisableUse();
	void EnableUse();
	int UseEnabled();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncTrackChange();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[215] GoUp
	// vtable[216] GoDown
	// vtable[108] Use
	// vtable[218] HitBottom
	// vtable[217] HitTop
	// vtable[112] Touch
	// vtable[219] UpdateAutoTargets
	// vtable[214] IsTogglePlat
	// vtable[34] GetDataDescMap
	// sizeof = 1416
};

// src/game/server/trains.cpp:3012
class CFuncTrackAuto : public CFuncTrackChange {
public:

private:

	static datamap_t m_DataMap;
	typedef CFuncTrackChange BaseClass;

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
	CFuncTrackAuto(CFuncTrackAuto &);
	CFuncTrackAuto(CFuncTrackAuto &);
	CFuncTrackAuto();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual void UpdateAutoTargets(int);
	void TriggerTrackChange(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CFuncTrackAuto();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[108] Use
	// vtable[219] UpdateAutoTargets
	// vtable[34] GetDataDescMap
	// sizeof = 1416
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBasePlatTrain::GetEntityClass  (line 29, @0x00000000023e5a50, libserver.so)
CEntityClass *__cdecl CBasePlatTrain::GetEntityClass()
{
  return g_pEntityCBasePlatTrainClass;
}


// CBasePlatTrain::Schema_DynamicBinding  (line 29, @0x00000000023e5a60, libserver.so)
// globals: CBasePlatTrain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBasePlatTrain::Schema_DynamicBinding(const CBasePlatTrain *const this)
{
  return CBasePlatTrain::s_pSchemaBinding;
}


// CBasePlatTrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x00000000023e5a70, libserver.so)
// globals: CBasePlatTrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBasePlatTrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  return CBasePlatTrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBasePlatTrain::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x00000000023e5a80, libserver.so)  // inlines: Destruct<CBasePlatTrain>
void __fastcall CBasePlatTrain::CEntityInstanceEntityClass::DestructInstance(
        CBasePlatTrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBasePlatTrain::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x00000000023e5aa0, libserver.so)
void __fastcall CBasePlatTrain::CEntityInstanceEntityClass::FreeInstance(
        CBasePlatTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBasePlatTrain::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x00000000023e5ac0, libserver.so)
bool __fastcall CBasePlatTrain::CEntityInstanceEntityClass::CanAllocate(
        const CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBasePlatTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x00000000023e5ad0, libserver.so)
// globals: CBasePlatTrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CBasePlatTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  return CBasePlatTrain::s_pSchemaBinding;
}


// CBasePlatTrain::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000023e80f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBasePlatTrain::CEntityInstanceEntityClass::AllocateInstance(
        CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1320);
  memset(v1, 0, 0x528u);
  return v1;
}


// CBasePlatTrain::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000023e8c40, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CHandle, CUtlSymbolLarge, Construct<CBasePlatTrain>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CBasePlatTrain::CEntityInstanceEntityClass::ConstructInstance(
        CBasePlatTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *p = &off_40B9770;
    *(p + 160) = 0;
    *(p + 161) = 0;
  }
  return p;
}


// CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023ea600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000023ea620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBasePlatTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBasePlatTrain::GetEntityClassInfo  (line 29, @0x00000000023f0250, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CFuncPlat::GetEntityClassInternal, CFuncPlatRot::GetEntityClassInternal, CFuncTrain::GetEntityClassInternal
// strings: "CBasePlatTrain", "CBaseToggle"
// globals: `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CBasePlatTrain::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo != 0 )
    return &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo) == 0 )
    return &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo;
  if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
      "CBaseToggle",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo,
    "CBasePlatTrain",
    0,
    0,
    &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
  __cxa_guard_release(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo);
  return &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo;
}


// CBasePlatTrain::GetEntityClassInternal  (line 29, @0x00000000023f0310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CBasePlatTrain", "CBaseToggle"
// globals: `guard variable for'CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass, CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass, __dso_handle, CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClass *__cdecl CBasePlatTrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass);
    CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass._vptr_CEntityClass = off_40B96F0;
    __cxa_guard_release(&`guard variable for'CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass);
    __cxa_atexit(
      CBasePlatTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCBasePlatTrainClass != 0 )
    return &CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass;
  if ( `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo,
      "CBasePlatTrain",
      0,
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo);
  }
  CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass.m_pClassInfo = &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo;
  CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass.m_pBaseClassInfo = CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo.m_pBaseClassInfo;
  g_pEntityCBasePlatTrainClass = &CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass;
  CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo.m_pClass = &CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass;
  CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCBasePlatTrainClass->m_pComponentOverrides = 0;
  return &CBasePlatTrain::GetEntityClassInternal(void)::g_EntityCBasePlatTrainClass;
}


// CBasePlatTrain::IsTogglePlat  (line 42, @0x00000000023e5ae0, libserver.so)
bool __fastcall CBasePlatTrain::IsTogglePlat(CBasePlatTrain *const this)
{
  return this->m_spawnflags.m_Value & 1;
}


// CBasePlatTrain::GetDataDescMap  (line 59, @0x00000000023bb170, libserver.so)
// globals: CBasePlatTrain::m_DataMap
datamap_t *__fastcall CBasePlatTrain::GetDataDescMap(CBasePlatTrain *const this)
{
  return &CBasePlatTrain::m_DataMap;
}


// CBasePlatTrain::AddDatadescMetadataKeys  (line 59, @0x00000000023ca830, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBasePlatTrain::GetEntityClass(void)
void __fastcall CBasePlatTrain::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBasePlatTrain::GetEntityClass);
}


// CBasePlatTrain::GetBaseMap  (line 59, @0x00000000023ca850, libserver.so)
// globals: CBaseToggle::m_DataMap
datamap_t *__cdecl CBasePlatTrain::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CBasePlatTrain>  (line 59, @0x00000000023ca860, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, GetSoundSaveRestoreOps, __cxa_guard_release, __cxa_atexit, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CBasePlatTrain"
// globals: `guard variable for'DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder, `guard variable for'DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc, CBaseToggle::m_DataMap, CBasePlatTrain::GetEntityClass(void), CBasePlatTrain::m_DataMap, DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBasePlatTrain>(CBasePlatTrain *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder) != 0 )
  {
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_pszBase = "CBasePlatTrain";
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::nameHolder,
      &_dso_handle);
  }
  CBasePlatTrain::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc) != 0 )
  {
    DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc[3].pSaveRestoreOps = GetSoundSaveRestoreOps();
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc);
  }
  CBasePlatTrain::m_DataMap.dataNumFields = 9;
  CBasePlatTrain::m_DataMap.dataDesc = &DataMapInit<CBasePlatTrain>(CBasePlatTrain *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBasePlatTrain::m_DataMap, CBasePlatTrain::GetEntityClass);
  return &CBasePlatTrain::m_DataMap;
}


// CBasePlatTrain::Spawn  (line 77, @0x00000000023c2570, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<float>, GetValue, GetValue<float>, atof, operator[]
// calls: CBaseEntity::Spawn, UTIL_ValidateSoundName, CEntityKeyValues::HasValue, strtod, VariantFieldTypeName, Warning
// callers: CFuncTrain::Spawn, CFuncPlat::Spawn
// strings: "Plat.DefaultMoving", "Plat.DefaultArrive", "No conversion from %s to float now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_23C2656
void __fastcall CBasePlatTrain::Spawn(CBasePlatTrain *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float m_float; // xmm0_4
  const char *m_uint64; // rax
  __int64 v13; // rdx
  const char *v14; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  UTIL_ValidateSoundName(&this->m_NoiseMoving, "Plat.DefaultMoving");
  UTIL_ValidateSoundName(&this->m_NoiseArrived, "Plat.DefaultArrive");
  if ( !CEntityKeyValues::HasValue(pKeyValues, 137876582) )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 137876582 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 137876582 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
LABEL_14:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      m_float = 0.0;
      break;
    case 1:
      m_float = p_m_value->m_float;
      break;
    case 5:
      m_float = p_m_value->m_int;
      break;
    case 6:
      m_float = p_m_value->m_char;
      break;
    case 26:
      m_float = p_m_value->m_uint64;
      break;
    case 30:
      m_float = strtod(p_m_value->m_pszString, 0);
      break;
    case 33:
      m_uint64 = p_m_value->m_uint64;
      if ( p_m_value->m_int64 >= 0 )
        goto LABEL_18;
      v13 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
      m_float = v13 + v13;
      break;
    case 34:
      m_float = p_m_value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = p_m_value->m_int;
LABEL_18:
      m_float = m_uint64;
      break;
    default:
      v14 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v14);
      m_float = 0.0;
      break;
  }
  this->m_vecFinalAngle.x = m_float;
}


// CBasePlatTrain::~CBasePlatTrain  (line 91, @0x00000000023ca9e0, libserver.so)  // inlines: ~CBaseToggle
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CBasePlatTrain::~CBasePlatTrain(CBasePlatTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBasePlatTrain::~CBasePlatTrain  (line 91, @0x00000000023caa20, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CBasePlatTrain::~CBasePlatTrain(CBasePlatTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CBasePlatTrain::PlayMovingSound  (line 96, @0x00000000023caa60, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter
// calls: CBasePlatTrain::StopMovingSound, CSoundEnvelopeController::GetController, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CFuncPlat::GoDown, CFuncPlat::GoUp, CFuncTrain::Next
void __fastcall CBasePlatTrain::PlayMovingSound(CBasePlatTrain *const this)
{
  CSoundEnvelopeController *Controller; // r13
  vec_t v3; // xmm1_4
  float v4; // xmm1_4
  const char *m_pAsString; // r14
  __int64 (__fastcall *v6)(CSoundEnvelopeController *, CPASAttenuationFilter *, _QWORD, __int64, const char *, float, float); // r15
  CEntityIndex v7; // eax
  CSoundPatch *v8; // rax
  Vector origin; // [rsp+0h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+10h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+148h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CBasePlatTrain::StopMovingSound(this);
  if ( this->m_NoiseMoving.u.m_Id != 0 )
  {
    Controller = CSoundEnvelopeController::GetController();
    *&origin.x = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.z = v3;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&origin.x = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.z = v4;
    CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v4);
    m_pAsString = "";
    v6 = *(Controller->_vptr_CSoundEnvelopeController + 7);
    if ( this->m_NoiseMoving.u.m_Id != 0 )
      m_pAsString = this->m_NoiseMoving.u.m_pAsString;
    v7.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v8 = v6(Controller, &filter, v7.m_Data, 6, m_pAsString, 0.80000001, 1.0);
    this->m_pMovementSound = v8;
    (*(Controller->_vptr_CSoundEnvelopeController + 2))(Controller, v8, this->m_volume, 100.0, 0.0);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CBasePlatTrain::StopMovingSound  (line 109, @0x00000000023ca9a0, libserver.so)
// calls: CSoundEnvelopeController::GetController
// callers: CBasePlatTrain::~CBasePlatTrain, CFuncPlat::~CFuncPlat, CFuncTrain::~CFuncTrain, CBasePlatTrain::PlayMovingSound, CFuncPlat::HitBottom, CFuncPlat::HitTop, CFuncPlatRot::~CFuncPlatRot, CFuncTrackChange::~CFuncTrackChange, CFuncTrackAuto::~CFuncTrackAuto, CFuncTrain::Wait, CFuncTrain::Next
void __fastcall CBasePlatTrain::StopMovingSound(CBasePlatTrain *const this)
{
  CSoundEnvelopeController *Controller; // rax

  if ( this->m_pMovementSound != 0 )
  {
    Controller = CSoundEnvelopeController::GetController();
    (*(Controller->_vptr_CSoundEnvelopeController + 11))(Controller, this->m_pMovementSound);
    this->m_pMovementSound = 0;
  }
}


// CBasePlatTrain::Precache  (line 123, @0x00000000023e3a00, libserver.so)
// calls: CBaseToggle::Precache, UTIL_ValidateSoundName, CBaseEntity::PrecacheScriptSound, __stack_chk_fail
// callers: CFuncTrackChange::Precache
// strings: "Plat.DefaultMoving", "Plat.DefaultArrive"
void __fastcall CBasePlatTrain::Precache(CBasePlatTrain *const this, const CEntityPrecacheContext *pContext)
{
  char pNoiseMoving[272]; // [rsp+0h] [rbp-240h] BYREF
  char pNoiseArrived[264]; // [rsp+110h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+218h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CBaseToggle::Precache(this, pContext);
  UTIL_ValidateSoundName(pNoiseMoving, 260, &this->m_NoiseMoving, "Plat.DefaultMoving");
  UTIL_ValidateSoundName(pNoiseArrived, 260, &this->m_NoiseArrived, "Plat.DefaultArrive");
  CBaseEntity::PrecacheScriptSound(pNoiseMoving, pContext);
  CBaseEntity::PrecacheScriptSound(pNoiseArrived, pContext);
}


// CFuncPlat::~CFuncPlat  (line 138, @0x00000000023f04a0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncPlat::~CFuncPlat(CFuncPlat *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncPlat::~CFuncPlat  (line 138, @0x00000000023f0620, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncPlat::~CFuncPlat(CFuncPlat *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncPlat::GetEntityClass  (line 140, @0x00000000023e5af0, libserver.so)
CEntityClass *__cdecl CFuncPlat::GetEntityClass()
{
  return g_pEntityCFuncPlatClass;
}


// CFuncPlat::Schema_DynamicBinding  (line 140, @0x00000000023e5b00, libserver.so)
// globals: CFuncPlat::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPlat::Schema_DynamicBinding(const CFuncPlat *const this)
{
  return CFuncPlat::s_pSchemaBinding;
}


// CFuncPlat::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 140, @0x00000000023e5b10, libserver.so)
// globals: CFuncPlat::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPlat::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncPlat::CEntityInstanceEntityClass *const this)
{
  return CFuncPlat::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncPlat::CEntityInstanceEntityClass::DestructInstance  (line 140, @0x00000000023e5b20, libserver.so)  // inlines: Destruct<CFuncPlat>
void __fastcall CFuncPlat::CEntityInstanceEntityClass::DestructInstance(
        CFuncPlat::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncPlat::CEntityInstanceEntityClass::FreeInstance  (line 140, @0x00000000023e5b40, libserver.so)
void __fastcall CFuncPlat::CEntityInstanceEntityClass::FreeInstance(
        CFuncPlat::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncPlat::CEntityInstanceEntityClass::CanAllocate  (line 140, @0x00000000023e5b60, libserver.so)
bool __fastcall CFuncPlat::CEntityInstanceEntityClass::CanAllocate(
        const CFuncPlat::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncPlat::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 140, @0x00000000023e5b70, libserver.so)
// globals: CFuncPlat::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncPlat::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncPlat::CEntityInstanceEntityClass *const this)
{
  return CFuncPlat::s_pSchemaBinding;
}


// CFuncPlat::CEntityInstanceEntityClass::AllocateInstance  (line 140, @0x00000000023e8130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncPlat::CEntityInstanceEntityClass::AllocateInstance(
        CFuncPlat::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1328);
  memset(v1, 0, 0x530u);
  return v1;
}


// CFuncPlat::CEntityInstanceEntityClass::ConstructInstance  (line 140, @0x00000000023e8ca0, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CFuncPlat, CHandle, CUtlSymbolLarge, Construct<CFuncPlat>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncPlat::CEntityInstanceEntityClass::ConstructInstance(
        CFuncPlat::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *(p + 160) = 0;
    *(p + 161) = 0;
    *p = &off_40B9ED0;
    *(p + 165) = 0;
  }
  return p;
}


// CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 140, @0x00000000023ea650, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPlat::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 140, @0x00000000023ea670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPlat::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncPlat::GetEntityClassInfo  (line 140, @0x00000000023f0720, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseModelEntity::GetEntityClassInfo
// callers: CFuncTrackChange::GetEntityClassInfo, CFuncTrackChange::GetEntityClassInternal
// strings: "func_plat", "CFuncPlat", "CBasePlatTrain", "CBaseToggle"
// globals: `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo, CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo, `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo, CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo
CEntityClassInfo *__cdecl CFuncPlat::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo != 0 )
    return &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo) == 0 )
    return &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo;
  if ( `guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo,
      "CBasePlatTrain",
      0,
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo,
    "CFuncPlat",
    "func_plat",
    0,
    &CBasePlatTrain::GetEntityClassInfo(void)::g_EntityCBasePlatTrainClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo);
  return &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo;
}


// CFuncPlat::GetEntityClassInternal  (line 140, @0x00000000023f0830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBasePlatTrain::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_plat", "CFuncPlat"
// globals: `guard variable for'CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass, CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass, __dso_handle, CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo, CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo
CEntityClass *__cdecl CFuncPlat::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass);
    CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass._vptr_CEntityClass = off_40B9E50;
    __cxa_guard_release(&`guard variable for'CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass);
    __cxa_atexit(
      CFuncPlat::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncPlatClass != 0 )
    return &CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass;
  if ( `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo) != 0 )
  {
    EntityClassInfo = CBasePlatTrain::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo,
      "CFuncPlat",
      "func_plat",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo);
  }
  CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass.m_pClassInfo = &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo;
  CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass.m_pBaseClassInfo = CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncPlatClass = &CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass;
  CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo.m_pClass = &CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass;
  CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncPlatClass->m_pComponentOverrides = 0;
  return &CFuncPlat::GetEntityClassInternal(void)::g_EntityCFuncPlatClass;
}


// CFuncPlat::CallGoDown  (line 150, @0x00000000023e5b80, libserver.so)
void __fastcall CFuncPlat::CallGoDown(CFuncPlat *const this)
{
  (*(this->_vptr_IHandleEntity + 216))(this);
}


// CFuncPlat::CallHitTop  (line 151, @0x00000000023e5ba0, libserver.so)
void __fastcall CFuncPlat::CallHitTop(CFuncPlat *const this)
{
  (*(this->_vptr_IHandleEntity + 217))(this);
}


// CFuncPlat::CallHitBottom  (line 152, @0x00000000023e5bc0, libserver.so)
void __fastcall CFuncPlat::CallHitBottom(CFuncPlat *const this)
{
  (*(this->_vptr_IHandleEntity + 218))(this);
}


// CFuncPlat::GetDataDescMap  (line 171, @0x00000000023bb180, libserver.so)
// globals: CFuncPlat::m_DataMap
datamap_t *__fastcall CFuncPlat::GetDataDescMap(CFuncPlat *const this)
{
  return &CFuncPlat::m_DataMap;
}


// CFuncPlat::AddDatadescMetadataKeys  (line 171, @0x00000000023cb3d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncPlat::GetEntityClass(void)
void __fastcall CFuncPlat::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncPlat::GetEntityClass);
}


// CFuncPlat::GetBaseMap  (line 171, @0x00000000023cb3f0, libserver.so)
// globals: CBasePlatTrain::m_DataMap
datamap_t *__cdecl CFuncPlat::GetBaseMap()
{
  return &CBasePlatTrain::m_DataMap;
}


// DataMapInit<CFuncPlat>  (line 171, @0x00000000023dfd20, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncPlat"
// globals: `guard variable for'DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder, `guard variable for'DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc, CBasePlatTrain::m_DataMap, CFuncPlat::GetEntityClass(void), CFuncPlat::m_DataMap, DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncPlat>(CFuncPlat *a1)
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

  if ( `guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_pszBase = "CFuncPlat";
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder,
      &_dso_handle);
  }
  CFuncPlat::m_DataMap.baseMap = &CBasePlatTrain::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_nLenBase + 8);
    *stpcpy(v2, DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_pszBase) = 0x65735574616C50LL;
    m_Size = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc[2].fieldName = v2;
    v6 = operator new[](DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v6, DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_pszBase), "CallGoDown");
    v7 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc[3].fieldName = v6;
    v10 = operator new[](DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v10, DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_pszBase), "CallHitTop");
    v11 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc[4].fieldName = v10;
    v14 = operator new[](DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v14, DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_pszBase), "CallHitBottom");
    v15 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CFuncPlat>(CFuncPlat *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc[5].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc);
  }
  CFuncPlat::m_DataMap.dataNumFields = 8;
  CFuncPlat::m_DataMap.dataDesc = &DataMapInit<CFuncPlat>(CFuncPlat *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncPlat::m_DataMap, CFuncPlat::GetEntityClass);
  return &CFuncPlat::m_DataMap;
}


// CPlatTrigger::~CPlatTrigger  (line 191, @0x00000000023e9450, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CPlatTrigger::~CPlatTrigger(CPlatTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BA5D0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPlatTrigger::~CPlatTrigger  (line 191, @0x00000000023e9470, libserver.so)  // inlines: ~CPlatTrigger
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPlatTrigger::~CPlatTrigger(CPlatTrigger *const this)
{
  this->_vptr_IHandleEntity = &off_40BA5D0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPlatTrigger::ObjectCaps  (line 196, @0x00000000023e8ba0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPlatTrigger::ObjectCaps(CPlatTrigger *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x80000000;
}


// CFuncPlat::Setup  (line 202, @0x00000000023cb400, libserver.so)  // inlines: OBBSize, SetSolid, VectorSubtract, operator-, operator=
// calls: CBaseEntity::SetLocalAngles, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetLocalOrigin
// callers: CFuncPlat::Spawn, CFuncTrackChange::Spawn
void __fastcall CFuncPlat::Setup(CFuncPlat *const this, const CEntityKeyValues *pKeyValues)
{
  Vector *LocalOrigin; // rax
  bool v5; // zf

  if ( this->m_flTLength == 0.0 )
    this->m_flTLength = 80.0;
  if ( this->m_flTWidth == 0.0 )
    this->m_flTWidth = 10.0;
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  this->m_vecPosition1 = *CBaseEntity::GetLocalOrigin(this);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v5 = this->m_flHeight == 0.0;
  this->m_vecPosition2 = *LocalOrigin;
  if ( v5 )
    this->m_vecPosition2.z = (CBaseEntity::GetLocalOrigin(this)->z
                            - (this->m_Collision.m_vecMaxs.m_Value.z - this->m_Collision.m_vecMins.m_Value.z))
                           + 8.0;
  else
    this->m_vecPosition2.z = CBaseEntity::GetLocalOrigin(this)->z - this->m_flHeight;
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 150.0;
  if ( this->m_volume == 0.0 )
    this->m_volume = 0.85000002;
}


// CFuncPlat::Spawn  (line 246, @0x00000000023cb5c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBasePlatTrain::Spawn, CFuncPlat::Setup, UTIL_SetOrigin
// callers: CFuncPlatRot::Spawn, CFuncTrackChange::Spawn
// globals: CFuncPlat::PlatUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CFuncPlat::Spawn(CFuncPlat *const this, const CEntityKeyValues *pKeyValues)
{
  CBasePlatTrain::Spawn(this, pKeyValues);
  CFuncPlat::Setup(this, pKeyValues);
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
  {
    UTIL_SetOrigin(this, &this->m_vecPosition1, 0);
    this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
    this->m_pfnUse.__pfn = CFuncPlat::PlatUse;
    this->m_pfnUse.__delta = 0;
  }
  else
  {
    UTIL_SetOrigin(this, &this->m_vecPosition2, 0);
    this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  }
  (*(this->_vptr_IHandleEntity + 49))(this);
}


// CFuncPlat::CreateVPhysics  (line 268, @0x00000000023bc0c0, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncPlat::CreateVPhysics(CFuncPlat *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  return 1;
}


// CFuncPlat::Activate  (line 274, @0x00000000023cb870, libserver.so)  // inlines: PlatSpawnInsideTrigger
// calls: CBaseModelEntity::Activate, CreateEntityByName, CPlatTrigger::SpawnInsideTrigger
// strings: "plat_trigger"
void __fastcall CFuncPlat::Activate(CFuncPlat *const this, ActivateType_t activateType)
{
  CPlatTrigger *EntityByName; // rax

  CBaseModelEntity::Activate(this, activateType);
  if ( (*(this->_vptr_IHandleEntity + 214))(this) == 0 )
  {
    EntityByName = CreateEntityByName("plat_trigger", -1);
    CPlatTrigger::SpawnInsideTrigger(EntityByName, this);
  }
}


// CPlatTrigger::Spawn  (line 292, @0x00000000023bc140, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification, CBaseEntity::Spawn
void __fastcall CPlatTrigger::Spawn(CPlatTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  CBaseEntity::Spawn(this, pKeyValues);
}


// CPlatTrigger::SpawnInsideTrigger  (line 300, @0x00000000023cb660, libserver.so)  // inlines: OBBSize, SetSolid, VectorAdd, VectorSubtract, operator+, operator-
// calls: CCollisionProperty::SetTriggerCollisionGroup, CBaseEntity::SetMoveType, CBaseEntity::GetLocalOrigin, CBaseEntity::SetLocalOrigin, UTIL_SetSize
// callers: CFuncPlat::Activate
void __fastcall CPlatTrigger::SpawnInsideTrigger(CPlatTrigger *const this, CFuncPlat *pPlatform)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  const Vector *LocalOrigin; // rax
  CFuncPlat *m_pPlatform; // rbx
  float *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm3_4
  vec_t v10; // xmm2_4
  int (**vptr_ICollideable)(...); // rax
  float *v12; // rax
  float v13; // xmm2_4
  vec_t v14; // xmm3_4
  vec_t v15; // xmm0_4
  CFuncPlat *v16; // rax
  float v17; // xmm0_4
  float v18; // [rsp+Ch] [rbp-44h]
  float v19; // [rsp+Ch] [rbp-44h]
  Vector vecTMin; // [rsp+10h] [rbp-40h] BYREF
  Vector vecTMax; // [rsp+20h] [rbp-30h] BYREF

  p_m_Collision = &this->m_Collision;
  this->m_pPlatform = pPlatform;
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  CCollisionProperty::SetTriggerCollisionGroup(p_m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  LocalOrigin = CBaseEntity::GetLocalOrigin(pPlatform);
  CBaseEntity::SetLocalOrigin(this, LocalOrigin);
  m_pPlatform = this->m_pPlatform;
  v7 = (*(m_pPlatform->m_Collision._vptr_ICollideable + 1))(&m_pPlatform->m_Collision);
  v8 = v7[2] + 0.0;
  v9 = *v7 + 25.0;
  v10 = v7[1] + 25.0;
  vptr_ICollideable = m_pPlatform->m_Collision._vptr_ICollideable;
  vecTMin.z = v8;
  vecTMin.x = v9;
  vecTMin.y = v10;
  v12 = (vptr_ICollideable[2])(&m_pPlatform->m_Collision);
  v13 = v12[2];
  v14 = v12[1] + 25.0;
  v15 = *v12 + 25.0;
  v16 = this->m_pPlatform;
  vecTMax.y = v14;
  vecTMax.x = v15;
  vecTMax.z = v13 + 8.0;
  v17 = m_pPlatform->m_Collision.m_vecMaxs.m_Value.x - m_pPlatform->m_Collision.m_vecMins.m_Value.x;
  vecTMin.z = (v13 + 8.0) - ((v16->m_vecPosition1.z - v16->m_vecPosition2.z) + 8.0);
  if ( v17 <= 50.0 )
  {
    v19 = *(*(m_pPlatform->m_Collision._vptr_ICollideable + 1))(&m_pPlatform->m_Collision);
    vecTMin.x = (v19 + *(*(m_pPlatform->m_Collision._vptr_ICollideable + 2))(&m_pPlatform->m_Collision)) * 0.5;
    vecTMax.x = vecTMin.x + 1.0;
  }
  if ( (m_pPlatform->m_Collision.m_vecMaxs.m_Value.y - m_pPlatform->m_Collision.m_vecMins.m_Value.y) <= 50.0 )
  {
    v18 = *((*(m_pPlatform->m_Collision._vptr_ICollideable + 1))(&m_pPlatform->m_Collision) + 4);
    vecTMin.y = (v18 + *((*(m_pPlatform->m_Collision._vptr_ICollideable + 2))(&m_pPlatform->m_Collision) + 4)) * 0.5;
    vecTMax.y = vecTMin.y + 1.0;
  }
  UTIL_SetSize(this, &vecTMin, &vecTMax);
}


// CPlatTrigger::Touch  (line 331, @0x00000000023bd300, libserver.so)
// calls: CBaseEntity::SetMoveDoneTime
void __fastcall CPlatTrigger::Touch(CPlatTrigger *const this, CBaseEntity *pOther)
{
  float v4; // xmm1_4
  CFuncPlat *m_pPlatform; // rdi
  TOGGLE_STATE m_toggle_state; // eax

  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 && (*(pOther->_vptr_IHandleEntity + 139))(pOther) != 0 )
  {
    m_pPlatform = this->m_pPlatform;
    m_toggle_state = m_pPlatform->m_toggle_state;
    if ( m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
    {
      (*(m_pPlatform->_vptr_IHandleEntity + 215))(m_pPlatform);
    }
    else if ( m_toggle_state == TOGGLE_STATE::TS_AT_TOP )
    {
      CBaseEntity::SetMoveDoneTime(m_pPlatform, 1.0, v4);
    }
  }
}


// CFuncPlat::InputToggle  (line 358, @0x00000000023bd120, libserver.so)
void __fastcall CFuncPlat::InputToggle(CFuncPlat *const this, inputdata_t *const data)
{
  TOGGLE_STATE v3; // eax
  TOGGLE_STATE m_toggle_state; // eax

  if ( (*(this->_vptr_IHandleEntity + 214))(this, data) == 0 )
  {
    m_toggle_state = this->m_toggle_state;
    this->m_pfnUse.__pfn = 0;
    this->m_pfnUse.__delta = 0;
    if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
      return;
    goto LABEL_6;
  }
  v3 = this->m_toggle_state;
  if ( v3 == TOGGLE_STATE::TS_AT_TOP )
  {
LABEL_6:
    (*(this->_vptr_IHandleEntity + 216))(this);
    return;
  }
  if ( v3 == TOGGLE_STATE::TS_AT_BOTTOM )
    (*(this->_vptr_IHandleEntity + 215))(this);
}


// CFuncPlat::InputGoUp  (line 376, @0x00000000023bd1a0, libserver.so)
void __fastcall CFuncPlat::InputGoUp(CFuncPlat *const this, inputdata_t *const data)
{
  if ( this->m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
    (*(this->_vptr_IHandleEntity + 215))(this, data);
}


// CFuncPlat::InputGoDown  (line 382, @0x00000000023bd1c0, libserver.so)
void __fastcall CFuncPlat::InputGoDown(CFuncPlat *const this, inputdata_t *const data)
{
  if ( this->m_toggle_state == TOGGLE_STATE::TS_AT_TOP )
    (*(this->_vptr_IHandleEntity + 216))(this, data);
}


// CFuncPlat::PlatUse  (line 396, @0x00000000023bd270, libserver.so)
// calls: CBaseEntity::ShouldToggle
void __fastcall CFuncPlat::PlatUse(
        CFuncPlat *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  TOGGLE_STATE m_toggle_state; // eax
  void (__fastcall *v8)(CFuncPlat *const); // rax
  TOGGLE_STATE v9; // eax

  if ( (*(this->_vptr_IHandleEntity + 214))(this, pActivator, pCaller, value) == 0 )
  {
    m_toggle_state = this->m_toggle_state;
    this->m_pfnUse.__pfn = 0;
    this->m_pfnUse.__delta = 0;
    if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
      return;
    goto LABEL_4;
  }
  if ( CBaseEntity::ShouldToggle(this, useType, this->m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM) != 0 )
  {
    v9 = this->m_toggle_state;
    if ( v9 == TOGGLE_STATE::TS_AT_TOP )
    {
LABEL_4:
      v8 = *(this->_vptr_IHandleEntity + 216);
LABEL_5:
      v8(this);
      return;
    }
    if ( v9 == TOGGLE_STATE::TS_AT_BOTTOM )
    {
      v8 = *(this->_vptr_IHandleEntity + 215);
      goto LABEL_5;
    }
  }
}


// CFuncPlat::GoDown  (line 425, @0x00000000023cac30, libserver.so)
// calls: CBasePlatTrain::PlayMovingSound, CBaseToggle::LinearMove
// callers: CFuncPlatRot::GoDown
// globals: CFuncPlat::CallHitBottom(void)
void __fastcall CFuncPlat::GoDown(CFuncPlat *const this)
{
  float m_flSpeed; // xmm0_4
  float v3; // xmm1_4

  CBasePlatTrain::PlayMovingSound(this);
  this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitBottom;
  m_flSpeed = this->m_flSpeed;
  this->m_toggle_state = TOGGLE_STATE::TS_GOING_DOWN;
  this->m_pfnMoveDone.__delta = 0;
  CBaseToggle::LinearMove(this, &this->m_vecPosition2, m_flSpeed, v3);
}


// CFuncPlat::HitBottom  (line 440, @0x00000000023cacf0, libserver.so)  // inlines: AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, String, ToCStr, V_memcpy, entindex, memcpy, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBasePlatTrain::StopMovingSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
// callers: CFuncPlatRot::HitBottom
// strings: "volume_atten"
void __fastcall CFuncPlat::HitBottom(CFuncPlat *const this)
{
  uint v2; // xmm1_4
  float v3; // xmm1_4
  CEntityIndex v4; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r15
  float m_volume; // xmm2_4
  float *p_m_pData; // rax
  float v9; // [rsp+Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v12; // [rsp+168h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  CBasePlatTrain::StopMovingSound(this);
  if ( this->m_NoiseArrived.u.m_Id == 0 )
    goto LABEL_2;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  origin.m_nAllocSize = v2;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  *&origin.m_nAllocSize = v3;
  CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v3);
  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pAsString = "";
  if ( this->m_NoiseArrived.u.m_Id != 0 )
    m_pAsString = this->m_NoiseArrived.u.m_pAsString;
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v4, -1, 0.0);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  m_volume = this->m_volume;
  origin.m_nAllocSize = 0;
  origin.m_pData = 0;
  v9 = m_volume;
  origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( origin.m_nAllocSize <= 3 )
  {
    origin.m_nAllocSize = 4;
LABEL_7:
    p_m_pData = &origin.m_pData;
LABEL_8:
    *p_m_pData = v9;
    goto LABEL_9;
  }
  if ( origin.m_nAllocSize <= 8 )
    goto LABEL_7;
  p_m_pData = origin.m_pData;
  if ( origin.m_pData != 0 )
    goto LABEL_8;
LABEL_9:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
  if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
    operator delete[](origin.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
LABEL_2:
  this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
}


// CFuncPlat::GoUp  (line 461, @0x00000000023cac90, libserver.so)
// calls: CBasePlatTrain::PlayMovingSound, CBaseToggle::LinearMove
// callers: CFuncPlatRot::GoUp
// globals: CFuncPlat::CallHitTop(void)
void __fastcall CFuncPlat::GoUp(CFuncPlat *const this)
{
  float m_flSpeed; // xmm0_4
  float v3; // xmm1_4

  CBasePlatTrain::PlayMovingSound(this);
  this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitTop;
  m_flSpeed = this->m_flSpeed;
  this->m_toggle_state = TOGGLE_STATE::TS_GOING_UP;
  this->m_pfnMoveDone.__delta = 0;
  CBaseToggle::LinearMove(this, &this->m_vecPosition1, m_flSpeed, v3);
}


// CFuncPlat::HitTop  (line 476, @0x00000000023cb040, libserver.so)  // inlines: AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, String, ToCStr, V_memcpy, entindex, memcpy, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBasePlatTrain::StopMovingSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CBaseEntity::SetMoveDoneTime, __stack_chk_fail, CSosFieldData::ClearData (13 total)
// callers: CFuncPlatRot::HitTop
// strings: "volume_atten"
// globals: CFuncPlat::CallGoDown(void)
void __fastcall CFuncPlat::HitTop(CFuncPlat *const this)
{
  uint v2; // xmm1_4
  float v3; // xmm1_4
  CEntityIndex v4; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r15
  float m_volume; // xmm2_4
  float *p_m_pData; // rax
  float v9; // xmm1_4
  float v10; // [rsp+Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+168h] [rbp-38h]

  v13 = __readfsqword(0x28u);
  CBasePlatTrain::StopMovingSound(this);
  if ( this->m_NoiseArrived.u.m_Id == 0 )
    goto LABEL_12;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  origin.m_nAllocSize = v2;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  *&origin.m_nAllocSize = v3;
  CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v3);
  v4.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pAsString = "";
  if ( this->m_NoiseArrived.u.m_Id != 0 )
    m_pAsString = this->m_NoiseArrived.u.m_pAsString;
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v4, -1, 0.0);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  m_volume = this->m_volume;
  origin.m_nAllocSize = 0;
  origin.m_pData = 0;
  v10 = m_volume;
  origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( origin.m_nAllocSize <= 3 )
  {
    origin.m_nAllocSize = 4;
LABEL_6:
    p_m_pData = &origin.m_pData;
LABEL_7:
    *p_m_pData = v10;
    goto LABEL_8;
  }
  if ( origin.m_nAllocSize <= 8 )
    goto LABEL_6;
  p_m_pData = origin.m_pData;
  if ( origin.m_pData != 0 )
    goto LABEL_7;
LABEL_8:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
  if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
    operator delete[](origin.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
LABEL_12:
  this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
  if ( (*(this->_vptr_IHandleEntity + 214))(this) == 0 )
  {
    this->m_pfnMoveDone.__pfn = CFuncPlat::CallGoDown;
    this->m_pfnMoveDone.__delta = 0;
    CBaseEntity::SetMoveDoneTime(this, 3.0, v9);
  }
}


// CFuncPlat::Blocked  (line 503, @0x00000000023c6030, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetVM, String, ToCStr, entindex, ~CTakeDamageInfo
// calls: DevMsg, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CEntityInstance::GetEntityIndex, CBaseEntity::StopSound, _Unwind_Resume
// strings: "%s Blocked by %s\n"
void __fastcall CFuncPlat::Blocked(CFuncPlat *const this, CBaseEntity *pOther)
{
  const char *m_pAsString; // rcx
  CEntityIdentity *m_pEntity; // rax
  CEntityIdentity *v6; // rax
  const char *v7; // rdx
  const char *v8; // r12
  CEntityIndex v9; // eax
  TOGGLE_STATE m_toggle_state; // eax
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h] BYREF

  m_pAsString = "";
  m_pEntity = pOther->m_pEntity;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  v6 = this->m_pEntity;
  v7 = "";
  if ( v6->m_designerName.u.m_Id != 0 )
    v7 = v6->m_designerName.u.m_pAsString;
  DevMsg(2, "%s Blocked by %s\n", v7, m_pAsString);
  CTakeDamageInfo::CTakeDamageInfo(&info, this, this, 1.0, 1, 0);
  CBaseEntity::TakeDamage(pOther, &info);
  if ( this->m_sNoise.u.m_Id != 0 )
  {
    v8 = this->m_sNoise.u.m_pAsString;
    v9.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::StopSound(v9, 6, v8, 0);
  }
  m_toggle_state = this->m_toggle_state;
  if ( m_toggle_state == TOGGLE_STATE::TS_GOING_UP )
  {
    (*(this->_vptr_IHandleEntity + 216))(this);
  }
  else if ( m_toggle_state == TOGGLE_STATE::TS_GOING_DOWN )
  {
    (*(this->_vptr_IHandleEntity + 215))(this);
  }
  info._vptr_CTakeDamageInfo = off_3FC92D0;
  if ( info.m_hScriptInstance != 0 )
    (*(*g_pScriptVM + 136LL))(g_pScriptVM);
}


// CFuncPlatRot::~CFuncPlatRot  (line 530, @0x00000000023f0560, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncPlatRot::~CFuncPlatRot(CFuncPlatRot *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncPlatRot::~CFuncPlatRot  (line 530, @0x00000000023f0660, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat, ~CFuncPlatRot
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncPlatRot::~CFuncPlatRot(CFuncPlatRot *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncPlatRot::GetEntityClass  (line 532, @0x00000000023e5be0, libserver.so)
CEntityClass *__cdecl CFuncPlatRot::GetEntityClass()
{
  return g_pEntityCFuncPlatRotClass;
}


// CFuncPlatRot::Schema_DynamicBinding  (line 532, @0x00000000023e5bf0, libserver.so)
// globals: CFuncPlatRot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPlatRot::Schema_DynamicBinding(const CFuncPlatRot *const this)
{
  return CFuncPlatRot::s_pSchemaBinding;
}


// CFuncPlatRot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 532, @0x00000000023e5c00, libserver.so)
// globals: CFuncPlatRot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPlatRot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  return CFuncPlatRot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncPlatRot::CEntityInstanceEntityClass::DestructInstance  (line 532, @0x00000000023e5c10, libserver.so)  // inlines: Destruct<CFuncPlatRot>
void __fastcall CFuncPlatRot::CEntityInstanceEntityClass::DestructInstance(
        CFuncPlatRot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncPlatRot::CEntityInstanceEntityClass::FreeInstance  (line 532, @0x00000000023e5c30, libserver.so)
void __fastcall CFuncPlatRot::CEntityInstanceEntityClass::FreeInstance(
        CFuncPlatRot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncPlatRot::CEntityInstanceEntityClass::CanAllocate  (line 532, @0x00000000023e5c50, libserver.so)
bool __fastcall CFuncPlatRot::CEntityInstanceEntityClass::CanAllocate(
        const CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncPlatRot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 532, @0x00000000023e5c60, libserver.so)
// globals: CFuncPlatRot::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncPlatRot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  return CFuncPlatRot::s_pSchemaBinding;
}


// CFuncPlatRot::CEntityInstanceEntityClass::AllocateInstance  (line 532, @0x00000000023e8170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncPlatRot::CEntityInstanceEntityClass::AllocateInstance(
        CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1352);
  memset(v1, 0, 0x548u);
  return v1;
}


// CFuncPlatRot::CEntityInstanceEntityClass::ConstructInstance  (line 532, @0x00000000023e8d10, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CFuncPlat, CFuncPlatRot, CHandle, CUtlSymbolLarge, Construct<CFuncPlatRot>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncPlatRot::CEntityInstanceEntityClass::ConstructInstance(
        CFuncPlatRot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *(p + 160) = 0;
    *(p + 161) = 0;
    *(p + 165) = 0;
    *p = &off_40BAD10;
  }
  return p;
}


// CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 532, @0x00000000023ea6a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 532, @0x00000000023ea6c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPlatRot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncPlatRot::GetEntityClassInternal  (line 532, @0x00000000023f0980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBasePlatTrain::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_platrot", "CFuncPlatRot", "func_plat", "CFuncPlat"
// globals: `guard variable for'CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass, CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass, __dso_handle, CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo, CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo, `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo, CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo
CEntityClass *__cdecl CFuncPlatRot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass);
    CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass._vptr_CEntityClass = off_40BAC90;
    __cxa_guard_release(&`guard variable for'CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass);
    __cxa_atexit(
      CFuncPlatRot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncPlatRotClass != 0 )
    return &CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass;
  if ( `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo) != 0 )
    {
      EntityClassInfo = CBasePlatTrain::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo,
        "CFuncPlat",
        "func_plat",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo,
      "CFuncPlatRot",
      "func_platrot",
      0,
      &CFuncPlat::GetEntityClassInfo(void)::g_EntityCFuncPlatClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo);
  }
  CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass.m_pClassInfo = &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo;
  CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass.m_pBaseClassInfo = CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncPlatRotClass = &CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass;
  CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo.m_pClass = &CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass;
  CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncPlatRotClass->m_pComponentOverrides = 0;
  return &CFuncPlatRot::GetEntityClassInternal(void)::g_EntityCFuncPlatRotClass;
}


// CFuncPlatRot::GetDataDescMap  (line 549, @0x00000000023bb190, libserver.so)
// globals: CFuncPlatRot::m_DataMap
datamap_t *__fastcall CFuncPlatRot::GetDataDescMap(CFuncPlatRot *const this)
{
  return &CFuncPlatRot::m_DataMap;
}


// CFuncPlatRot::AddDatadescMetadataKeys  (line 549, @0x00000000023cb8d0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncPlatRot::GetEntityClass(void)
void __fastcall CFuncPlatRot::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncPlatRot::GetEntityClass);
}


// CFuncPlatRot::GetBaseMap  (line 549, @0x00000000023cb8f0, libserver.so)
// globals: CFuncPlat::m_DataMap
datamap_t *__cdecl CFuncPlatRot::GetBaseMap()
{
  return &CFuncPlat::m_DataMap;
}


// DataMapInit<CFuncPlatRot>  (line 549, @0x00000000023cb900, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncPlatRot"
// globals: `guard variable for'DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder, CFuncPlat::m_DataMap, CFuncPlatRot::GetEntityClass(void), CFuncPlatRot::m_DataMap, DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncPlatRot>(CFuncPlatRot *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_pszBase = "CFuncPlatRot";
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::nameHolder,
      &_dso_handle);
  }
  CFuncPlatRot::m_DataMap.dataNumFields = 2;
  CFuncPlatRot::m_DataMap.baseMap = &CFuncPlat::m_DataMap;
  CFuncPlatRot::m_DataMap.dataDesc = &DataMapInit<CFuncPlatRot>(CFuncPlatRot *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncPlatRot::m_DataMap, CFuncPlatRot::GetEntityClass);
  return &CFuncPlatRot::m_DataMap;
}


// CFuncPlatRot::SetupRotation  (line 557, @0x00000000023cb9d0, libserver.so)  // inlines: AxisDir, CUtlSymbolLarge, GetEntityName, operator*, operator+, operator=
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles
// callers: CFuncPlatRot::Spawn, CFuncTrackChange::Spawn
void __fastcall CFuncPlatRot::SetupRotation(CFuncPlatRot *const this)
{
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  unsigned int m_Value; // eax
  QAngle *LocalAngles; // rax
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  const QAngle *v10; // rax
  vec_t v11; // xmm2_4
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  CEntityIdentity *m_pEntity; // rax
  float v15; // [rsp-1Ch] [rbp-24h]
  float v16; // [rsp-18h] [rbp-20h]
  float v17; // [rsp-14h] [rbp-1Ch]

  if ( this->m_vecFinalAngle.x == 0.0 )
  {
    x = vec3_angle.x;
    y = vec3_angle.y;
    z = vec3_angle.z;
    this->m_start.x = vec3_angle.x;
    this->m_start.y = y;
    this->m_start.z = z;
    this->m_end.x = x;
    this->m_end.y = y;
    this->m_end.z = z;
    if ( this->m_pEntity->m_name.u.m_Id == 0 )
      return;
LABEL_7:
    CBaseEntity::SetLocalAngles(this, &this->m_end);
    return;
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x40) != 0 )
  {
    this->m_vecMoveAng.x = 0.0;
    this->m_vecMoveAng.y = 0.0;
    this->m_vecMoveAng.z = 1.0;
  }
  else
  {
    if ( (m_Value & 0x80u) == 0 )
    {
      this->m_vecMoveAng.x = 0.0;
      this->m_vecMoveAng.y = 1.0;
    }
    else
    {
      this->m_vecMoveAng.x = 1.0;
      this->m_vecMoveAng.y = 0.0;
    }
    this->m_vecMoveAng.z = 0.0;
  }
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v7 = this->m_vecMoveAng.x;
  v8 = this->m_vecMoveAng.y;
  this->m_start = *LocalAngles;
  v9 = this->m_vecFinalAngle.x;
  v15 = v7 * v9;
  v16 = v8 * v9;
  v17 = v9 * this->m_vecMoveAng.z;
  v10 = CBaseEntity::GetLocalAngles(this);
  v11 = v16 + v10->y;
  v12 = v17 + v10->z;
  v13 = v15 + v10->x;
  m_pEntity = this->m_pEntity;
  this->m_end.y = v11;
  this->m_end.z = v12;
  this->m_end.x = v13;
  if ( m_pEntity->m_name.u.m_Id != 0 )
    goto LABEL_7;
}


// CFuncPlatRot::Spawn  (line 577, @0x00000000023cbba0, libserver.so)
// calls: CFuncPlat::Spawn, CFuncPlatRot::SetupRotation
void __fastcall CFuncPlatRot::Spawn(CFuncPlatRot *const this, const CEntityKeyValues *pKeyValues)
{
  CFuncPlat::Spawn(this, pKeyValues);
  CFuncPlatRot::SetupRotation(this);
}


// CFuncPlatRot::GoDown  (line 583, @0x00000000023cbe00, libserver.so)  // inlines: GetMoveDoneTime
// calls: CFuncPlat::GoDown, CFuncPlatRot::RotMove
// callers: CFuncTrackChange::GoDown
void __fastcall CFuncPlatRot::GoDown(CFuncPlatRot *const this)
{
  float v2; // xmm1_4
  float m_flMoveDoneTime; // xmm0_4
  float v4; // xmm0_4

  CFuncPlat::GoDown(this);
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  if ( m_flMoveDoneTime < 0.0 )
    v4 = -1.0;
  else
    v4 = m_flMoveDoneTime - this->m_flLocalTime;
  CFuncPlatRot::RotMove(this, &this->m_start, v4, v2);
}


// CFuncPlatRot::HitBottom  (line 593, @0x00000000023caf60, libserver.so)
// calls: CFuncPlat::HitBottom, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetLocalAngles
// callers: CFuncTrackChange::HitBottom
void __fastcall CFuncPlatRot::HitBottom(CFuncPlatRot *const this)
{
  CFuncPlat::HitBottom(this);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetLocalAngles(this, &this->m_start);
}


// CFuncPlatRot::GoUp  (line 604, @0x00000000023cbe50, libserver.so)  // inlines: GetMoveDoneTime
// calls: CFuncPlat::GoUp, CFuncPlatRot::RotMove
// callers: CFuncTrackChange::GoUp
void __fastcall CFuncPlatRot::GoUp(CFuncPlatRot *const this)
{
  float v2; // xmm1_4
  float m_flMoveDoneTime; // xmm0_4
  float v4; // xmm0_4

  CFuncPlat::GoUp(this);
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  if ( m_flMoveDoneTime < 0.0 )
    v4 = -1.0;
  else
    v4 = m_flMoveDoneTime - this->m_flLocalTime;
  CFuncPlatRot::RotMove(this, &this->m_end, v4, v2);
}


// CFuncPlatRot::HitTop  (line 614, @0x00000000023cb2f0, libserver.so)
// calls: CFuncPlat::HitTop, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetLocalAngles
// callers: CFuncTrackChange::HitTop
void __fastcall CFuncPlatRot::HitTop(CFuncPlatRot *const this)
{
  CFuncPlat::HitTop(this);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetLocalAngles(this, &this->m_end);
}


// CFuncPlatRot::RotMove  (line 622, @0x00000000023cbd40, libserver.so)  // inlines: operator*, operator-
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime
// callers: CFuncPlatRot::GoDown, CFuncPlatRot::GoUp, CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
void __fastcall CFuncPlatRot::RotMove(CFuncPlatRot *const this, QAngle *const destAngle, float a3, float time)
{
  const QAngle *LocalAngles; // rax
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  QAngle vecDestDelta; // [rsp+10h] [rbp-30h] BYREF
  QAngle vAngVelocity; // [rsp+20h] [rbp-20h] BYREF

  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v7 = destAngle->x - LocalAngles->x;
  v8 = destAngle->y - LocalAngles->y;
  v9 = destAngle->z - LocalAngles->z;
  vecDestDelta.x = v7;
  vecDestDelta.y = v8;
  vecDestDelta.z = v9;
  if ( a3 >= 0.1 )
  {
    vAngVelocity.x = v7 * (1.0 / a3);
    vAngVelocity.y = v8 * (1.0 / a3);
    vAngVelocity.z = v9 * (1.0 / a3);
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
  }
  else
  {
    CBaseEntity::SetLocalAngularVelocity(this, &vecDestDelta);
    CBaseEntity::SetMoveDoneTime(this, 1.0, v10);
  }
}


// CFuncTrain::~CFuncTrain  (line 641, @0x00000000023f04e0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTrain::~CFuncTrain(CFuncTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTrain::~CFuncTrain  (line 641, @0x00000000023f0520, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncTrain
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTrain::~CFuncTrain(CFuncTrain *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTrain::GetEntityClass  (line 643, @0x00000000023e5c70, libserver.so)
CEntityClass *__cdecl CFuncTrain::GetEntityClass()
{
  return g_pEntityCFuncTrainClass;
}


// CFuncTrain::Schema_DynamicBinding  (line 643, @0x00000000023e5c80, libserver.so)
// globals: CFuncTrain::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrain::Schema_DynamicBinding(const CFuncTrain *const this)
{
  return CFuncTrain::s_pSchemaBinding;
}


// CFuncTrain::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 643, @0x00000000023e5c90, libserver.so)
// globals: CFuncTrain::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrain::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTrain::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTrain::CEntityInstanceEntityClass::DestructInstance  (line 643, @0x00000000023e5ca0, libserver.so)  // inlines: Destruct<CFuncTrain>
void __fastcall CFuncTrain::CEntityInstanceEntityClass::DestructInstance(
        CFuncTrain::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTrain::CEntityInstanceEntityClass::FreeInstance  (line 643, @0x00000000023e5cc0, libserver.so)
void __fastcall CFuncTrain::CEntityInstanceEntityClass::FreeInstance(
        CFuncTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTrain::CEntityInstanceEntityClass::CanAllocate  (line 643, @0x00000000023e5ce0, libserver.so)
bool __fastcall CFuncTrain::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTrain::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 643, @0x00000000023e5cf0, libserver.so)
// globals: CFuncTrain::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTrain::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTrain::CEntityInstanceEntityClass *const this)
{
  return CFuncTrain::s_pSchemaBinding;
}


// CFuncTrain::CEntityInstanceEntityClass::AllocateInstance  (line 643, @0x00000000023e81b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTrain::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTrain::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1344);
  memset(v1, 0, 0x540u);
  return v1;
}


// CFuncTrain::CEntityInstanceEntityClass::ConstructInstance  (line 643, @0x00000000023e9830, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CFuncTrain, CHandle, CUtlSymbolLarge, Construct<CFuncTrain>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncTrain::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTrain::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *(p + 160) = 0;
    *(p + 161) = 0;
    *p = &off_40BB490;
    *(p + 329) = -1;
    *(p + 331) = -1;
    *(p + 167) = 0;
  }
  return p;
}


// CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 643, @0x00000000023ea790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 643, @0x00000000023ea7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrain::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTrain::GetEntityClassInternal  (line 643, @0x00000000023f0b10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBasePlatTrain::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_train", "CFuncTrain"
// globals: `guard variable for'CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass, CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass, __dso_handle, CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo, CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo
CEntityClass *__cdecl CFuncTrain::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass);
    CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass._vptr_CEntityClass = off_40BB410;
    __cxa_guard_release(&`guard variable for'CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass);
    __cxa_atexit(
      CFuncTrain::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTrainClass != 0 )
    return &CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass;
  if ( `guard variable for'CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo) != 0 )
  {
    EntityClassInfo = CBasePlatTrain::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo,
      "CFuncTrain",
      "func_train",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo);
  }
  CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass.m_pClassInfo = &CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo;
  CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass.m_pBaseClassInfo = CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTrainClass = &CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass;
  CFuncTrain::GetEntityClassInfo(void)::g_EntityCFuncTrainClassInfo.m_pClass = &CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass;
  CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTrainClass->m_pComponentOverrides = 0;
  return &CFuncTrain::GetEntityClassInternal(void)::g_EntityCFuncTrainClass;
}


// CFuncTrain::GetDataDescMap  (line 678, @0x00000000023bb1a0, libserver.so)
// globals: CFuncTrain::m_DataMap
datamap_t *__fastcall CFuncTrain::GetDataDescMap(CFuncTrain *const this)
{
  return &CFuncTrain::m_DataMap;
}


// CFuncTrain::AddDatadescMetadataKeys  (line 678, @0x00000000023cbea0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTrain::GetEntityClass(void)
void __fastcall CFuncTrain::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTrain::GetEntityClass);
}


// CFuncTrain::GetBaseMap  (line 678, @0x00000000023cbec0, libserver.so)
// globals: CBasePlatTrain::m_DataMap
datamap_t *__cdecl CFuncTrain::GetBaseMap()
{
  return &CBasePlatTrain::m_DataMap;
}


// DataMapInit<CFuncTrain>  (line 678, @0x00000000023debc0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTrain"
// globals: `guard variable for'DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder, `guard variable for'DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc, CBasePlatTrain::m_DataMap, CFuncTrain::GetEntityClass(void), CFuncTrain::m_DataMap, DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTrain>(CFuncTrain *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_pszBase = "CFuncTrain";
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder,
      &_dso_handle);
  }
  CFuncTrain::m_DataMap.baseMap = &CBasePlatTrain::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_pszBase), "Wait");
    m_Size = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc[7].fieldName = v2;
    v6 = operator new[](DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v6, DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_pszBase), "Next");
    v7 = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFuncTrain>(CFuncTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc[8].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc);
  }
  CFuncTrain::m_DataMap.dataNumFields = 11;
  CFuncTrain::m_DataMap.dataDesc = &DataMapInit<CFuncTrain>(CFuncTrain *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTrain::m_DataMap, CFuncTrain::GetEntityClass);
  return &CFuncTrain::m_DataMap;
}


// CFuncTrain::Blocked  (line 704, @0x00000000023c6190, libserver.so)  // inlines: GetVM, curtime, ~CTakeDamageInfo
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, _Unwind_Resume
void __fastcall CFuncTrain::Blocked(CFuncTrain *const this, CBaseEntity *pOther)
{
  double v2; // xmm0_8
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v8; // rbx
  float v9; // xmm0_4
  FnGlobalVarsWarningFunc v10; // rax
  __int64 (__fastcall **v11)(CTakeDamageInfo *__hidden); // [rsp-8h] [rbp-B8h] BYREF
  CTakeDamageInfo info; // [rsp+0h] [rbp-B0h]

  m_flCurrentTime = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, v2, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( this->m_flNextBlockTime <= m_flCurrentTime )
  {
    v8 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v10 = gpGlobals->m_pfnWarningFunc;
        if ( v10 != 0 )
          v10(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v9 = v8->m_flCurrentTime + 0.5;
    }
    else
    {
      v9 = 0.5;
    }
    this->m_flNextBlockTime = v9;
    CTakeDamageInfo::CTakeDamageInfo(&v11, this, this, this->m_flBlockDamage, 1, 0);
    CBaseEntity::TakeDamage(pOther, &v11);
    v11 = off_3FC92D0;
    if ( *&info.m_nDotaDamageCategory != 0 )
      (*(*g_pScriptVM + 136LL))(g_pScriptVM);
  }
}


// CFuncTrain::Use  (line 717, @0x00000000023d87d0, libserver.so)  // inlines: AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, CUtlSymbolLarge, ClearData, CopyData, GetDataPtr, GetEntityIdentity, GetEntityName, GetEntryIndex, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, V_memcpy, entindex, memcpy, operator bool, operator&=<int>, operator=, operator|=<int>, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CFuncTrain::Next, CBaseEntity::SetNextThink, CBaseEntity::SetLocalVelocity, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, __stack_chk_fail (14 total)
// strings: "volume_atten"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncTrain::Use(
        CFuncTrain *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value,
        double a6)
{
  unsigned int m_Value; // eax
  unsigned int v8; // r12d
  unsigned int v9; // r12d
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  uint v13; // xmm1_4
  float v14; // xmm1_4
  CEntityIndex v15; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r15
  float m_volume; // ebx
  float *m_pData; // rax
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v22; // [rsp+168h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    v8 = m_Value & 0xFFFFFFFE;
    if ( m_Value != (m_Value & 0xFFFFFFFE) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
      this->m_spawnflags.m_Value = v8;
    }
    CFuncTrain::Next(this);
    return;
  }
  v9 = m_Value | 1;
  if ( m_Value != (m_Value | 1) )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_spawnflags.m_Value = v9;
  }
  m_Index = this->m_hEnemy.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnemy.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v12 = &v11[this->m_hEnemy.m_Index & 0x1FF];
      if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
        this->m_target.u.m_Id = v12->m_pInstance->m_pEntity->m_name.u.m_Id;
    }
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), a6, 0);
  CBaseEntity::SetLocalVelocity(this, &vec3_origin);
  if ( this->m_NoiseArrived.u.m_Id != 0 )
  {
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.m_nAllocSize = v13;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&origin.m_nAllocSize = v14;
    CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v14);
    v15.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    m_pAsString = "";
    if ( this->m_NoiseArrived.u.m_Id != 0 )
      m_pAsString = this->m_NoiseArrived.u.m_pAsString;
    started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v15, -1, 0.0);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    m_volume = this->m_volume;
    origin.m_nAllocSize = 0;
    origin.m_pData = 0;
    origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( origin.m_nAllocSize <= 3 )
    {
      origin.m_nAllocSize = 4;
    }
    else if ( origin.m_nAllocSize > 8 )
    {
      m_pData = origin.m_pData;
      if ( origin.m_pData == 0 )
        goto LABEL_20;
      goto LABEL_19;
    }
    m_pData = &origin.m_pData;
LABEL_19:
    *m_pData = m_volume;
LABEL_20:
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
    if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
      operator delete[](origin.m_pData);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CFuncTrain::Wait  (line 749, @0x00000000023d7c40, libserver.so)  // inlines: AddSpawnFlags, AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, CVariantBase, ClearData, CopyData, Free, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, V_memcpy, entindex, memcpy, operator CEntityInstance*, operator->, operator|=<int>, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CVariantBase
// calls: CEntityInstance::AcceptInput, CBasePlatTrain::StopMovingSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CBaseEntity::SetMoveDoneTime, CFuncTrain::Next (16 total)
// callers: CFuncTrain::Next
// strings: "volume_atten"
// globals: CEntityHandle::gm_pEntityList, CFuncTrain::Next(void)
void __fastcall CFuncTrain::Wait(CFuncTrain *const this)
{
  CEntityInstance *m_pInstance; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  float v6; // xmm1_4
  uint32 v7; // eax
  CEntityInstance *v8; // rcx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  unsigned int m_Value; // eax
  unsigned int v12; // r13d
  float v13; // xmm1_4
  double v14; // xmm0_8
  vec_t v15; // xmm1_4
  float v16; // xmm1_4
  CEntityIndex v17; // eax
  const char *m_pAsString; // rdx
  float m_volume; // xmm2_4
  float *m_pData; // rax
  float m_flWait; // xmm0_4
  double v22; // xmm0_8
  vec_t v23; // xmm1_4
  float v24; // xmm1_4
  CEntityIndex v25; // eax
  const char *v26; // rdx
  float v27; // xmm4_4
  float *p_m_pData; // rax
  float v29; // [rsp+14h] [rbp-1ECh]
  float v30; // [rsp+14h] [rbp-1ECh]
  SndOpEventGuid_t nGuid; // [rsp+18h] [rbp-1E8h]
  SndOpEventGuid_t nGuida; // [rsp+18h] [rbp-1E8h]
  Vector origin; // [rsp+20h] [rbp-1E0h] BYREF
  Vector v34; // [rsp+30h] [rbp-1D0h] BYREF
  variant_t emptyVariant; // [rsp+40h] [rbp-1C0h] BYREF
  CSosFieldData fieldData; // [rsp+50h] [rbp-1B0h] BYREF
  CSosFieldData v37; // [rsp+70h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v39; // [rsp+1C8h] [rbp-38h]

  emptyVariant.m_flags = 0;
  m_pInstance = 0;
  v39 = __readfsqword(0x28u);
  m_Index = this->m_hCurrentTarget.m_Index;
  emptyVariant.m_type = 0;
  emptyVariant.m_uint64 = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hCurrentTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  CEntityInstance::AcceptInput(m_pInstance, "InPass", this, this, &emptyVariant, 0);
  v7 = this->m_hCurrentTarget.m_Index;
  v8 = 0;
  if ( v7 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hCurrentTarget.m_Index & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        v8 = v10->m_pInstance;
    }
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (BYTE4(v8[8].m_hPrivateScope.m_hScope) & 1) != 0 || (m_Value & 1) != 0 )
  {
    v12 = m_Value | 1;
    if ( (m_Value | 1) != m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v12;
    }
    CBasePlatTrain::StopMovingSound(this);
    if ( this->m_NoiseArrived.u.m_Id == 0 )
      goto LABEL_26;
    v14 = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.z = v15;
    *&origin.x = v14;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&v37.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&v37.m_nAllocSize = v16;
    CPASAttenuationFilter::Filter(&filter, &v37, 0.80000001, v16);
    v17.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    m_pAsString = "";
    if ( this->m_NoiseArrived.u.m_Id != 0 )
      m_pAsString = this->m_NoiseArrived.u.m_pAsString;
    nGuid = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v17, -1, 0.0);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    m_volume = this->m_volume;
    fieldData.m_nAllocSize = 0;
    fieldData.m_pData = 0;
    v29 = m_volume;
    fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( fieldData.m_nAllocSize <= 3 )
    {
      fieldData.m_nAllocSize = 4;
    }
    else if ( fieldData.m_nAllocSize > 8 )
    {
      m_pData = fieldData.m_pData;
      if ( fieldData.m_pData == 0 )
      {
LABEL_22:
        CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, nGuid, "volume_atten", &fieldData, 0, 0);
        if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
          operator delete[](fieldData.m_pData);
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
LABEL_26:
        CBaseEntity::SetMoveDoneTime(this, -1.0, v13);
        if ( (emptyVariant.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
        return;
      }
LABEL_21:
      *m_pData = v29;
      goto LABEL_22;
    }
    m_pData = &fieldData.m_pData;
    goto LABEL_21;
  }
  m_flWait = this->m_flWait;
  if ( m_flWait != 0.0 )
  {
    CBaseEntity::SetMoveDoneTime(this, m_flWait, v6);
    CBasePlatTrain::StopMovingSound(this);
    if ( this->m_NoiseArrived.u.m_Id == 0 )
    {
LABEL_31:
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CFuncTrain::Next;
      goto LABEL_32;
    }
    v22 = (*(this->_vptr_IHandleEntity + 186))(this);
    v34.z = v23;
    *&v34.x = v22;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &v34);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&v37.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&v37.m_nAllocSize = v24;
    CPASAttenuationFilter::Filter(&filter, &v37, 0.80000001, v24);
    v25.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v26 = "";
    if ( this->m_NoiseArrived.u.m_Id != 0 )
      v26 = this->m_NoiseArrived.u.m_pAsString;
    nGuida = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v26, v25, -1, 0.0);
    v37.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    v27 = this->m_volume;
    v37.m_nAllocSize = 0;
    v37.m_pData = 0;
    v30 = v27;
    v37.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    v37.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( v37.m_nAllocSize <= 3 )
    {
      v37.m_nAllocSize = 4;
    }
    else if ( v37.m_nAllocSize > 8 )
    {
      p_m_pData = v37.m_pData;
      if ( v37.m_pData == 0 )
      {
LABEL_42:
        CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, nGuida, "volume_atten", &v37, 0, 0);
        if ( v37.m_nAllocSize > 8 && v37.m_pData != 0 )
          operator delete[](v37.m_pData);
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
        goto LABEL_31;
      }
LABEL_41:
      *p_m_pData = v30;
      goto LABEL_42;
    }
    p_m_pData = &v37.m_pData;
    goto LABEL_41;
  }
  CFuncTrain::Next(this);
LABEL_32:
  if ( (emptyVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
}


// CFuncTrain::Next  (line 804, @0x00000000023d82e0, libserver.so)  // inlines: ClearData, Get, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, String, ToCStr, VectorSubtract, entindex, operator CEntityInstance*, operator bool, operator-, operator->, operator=, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBaseEntity::GetNextTarget, CBasePlatTrain::PlayMovingSound, CBaseEntity::GetLocalOrigin, CBaseToggle::LinearMove, CBaseEntity::IncrementInterpolationFrame, UTIL_SetOrigin, CFuncTrain::Wait, CBasePlatTrain::StopMovingSound, CPASAttenuationFilter::CPASAttenuationFilter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSosFieldDataFloat::CSosFieldDataFloat (20 total)
// callers: CFuncTrain::Wait, CFuncTrain::Use, CFuncTrain::Start
// strings: "volume_atten", "Train %s speed to %4.2f\n"
// globals: CEntityHandle::gm_pEntityList, CFuncTrain::Wait(void)
void __fastcall CFuncTrain::Next(CFuncTrain *const this)
{
  CBaseEntity *NextTarget; // rax
  const CBaseEntity *v3; // r12
  float v4; // xmm0_4
  uint32 m_Index; // eax
  CConcreteEntityList *v6; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rax
  int v10; // edx
  __int16 v11; // cx
  CEntityIdentity *v12; // rax
  int v13; // edx
  __int16 v14; // cx
  uint32 v15; // eax
  CEntityInstance *m_pInstance; // rcx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  float m_flSpeed; // xmm4_4
  int (**vptr_ICollideable)(...); // rax
  float v21; // xmm1_4
  const Vector *v22; // rax
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm1_4
  const Vector *LocalOrigin; // rax
  uint v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  CEntityIndex v30; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r14
  float v33; // xmm1_4
  float v34; // xmm0_4
  CEntityIdentity *m_pEntity; // rdi
  const char *DebugName; // rax
  float v37; // [rsp+Ch] [rbp-194h]
  float v38; // [rsp+Ch] [rbp-194h]
  double v39; // [rsp+10h] [rbp-190h]
  double v40; // [rsp+10h] [rbp-190h]
  float v41; // [rsp+18h] [rbp-188h]
  float v42; // [rsp+18h] [rbp-188h]
  CSosFieldData vecDest; // [rsp+20h] [rbp-180h] BYREF
  CPASAttenuationFilter filter; // [rsp+40h] [rbp-160h] BYREF
  unsigned __int64 v45; // [rsp+178h] [rbp-28h]

  v45 = __readfsqword(0x28u);
  NextTarget = CBaseEntity::GetNextTarget(this);
  v3 = NextTarget;
  if ( NextTarget != 0 )
  {
    this->m_iszLastTarget.u.m_Id = this->m_target.u.m_Id;
    this->m_target.u.m_Id = NextTarget->m_target.u.m_Id;
    v4 = (*(NextTarget->_vptr_IHandleEntity + 95))(NextTarget);
    m_Index = this->m_hCurrentTarget.m_Index;
    this->m_flWait = v4;
    v6 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hCurrentTarget.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          v34 = *(&v8->m_pInstance[8].m_pEntity + 1);
          if ( v34 != 0.0 )
          {
            m_pEntity = this->m_pEntity;
            this->m_flSpeed = v34;
            v38 = v34;
            DebugName = CEntityIdentity::GetDebugName(m_pEntity);
            DevMsg(2, "Train %s speed to %4.2f\n", DebugName, v38);
            v6 = CEntityHandle::gm_pEntityList;
          }
        }
      }
    }
    v9 = v3->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = (v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1);
      v11 = 0x7FFF;
      if ( v9->m_EHandle.m_Index != -1 )
        v11 = v9->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hCurrentTarget.m_Index) = v11 | this->m_hCurrentTarget.m_Index & 0x8000;
      this->m_hCurrentTarget.m_Index = (v10 << 15) | this->m_hCurrentTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hCurrentTarget.m_Index = -1;
    }
    v12 = v3->m_pEntity;
    if ( v12 != 0 )
    {
      v13 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
      v14 = 0x7FFF;
      if ( v12->m_EHandle.m_Index != -1 )
        v14 = v12->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEnemy.m_Index) = v14 | this->m_hEnemy.m_Index & 0x8000;
      this->m_hEnemy.m_Index = (v13 << 15) | this->m_hEnemy.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEnemy.m_Index = -1;
    }
    v15 = this->m_hCurrentTarget.m_Index;
    m_pInstance = 0;
    if ( v15 + 2 > 1 )
    {
      v17 = v6->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
      if ( v17 != 0 )
      {
        v18 = &v17[this->m_hCurrentTarget.m_Index & 0x1FF];
        if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
          m_pInstance = v18->m_pInstance;
      }
    }
    if ( (BYTE4(m_pInstance[8].m_hPrivateScope.m_hScope) & 2) != 0 )
    {
      CBaseEntity::IncrementInterpolationFrame(this);
      v40 = (*(this->m_Collision._vptr_ICollideable + 19))(&this->m_Collision);
      v42 = v25;
      LocalOrigin = CBaseEntity::GetLocalOrigin(v3);
      *&v27 = LocalOrigin->z - v42;
      v28 = LocalOrigin->x - *&v40;
      *&vecDest.m_nFieldDataSize = LocalOrigin->y - *(&v40 + 1);
      vecDest.m_nAllocSize = v27;
      *&vecDest.m_fieldDataType = v28;
      UTIL_SetOrigin(this, &vecDest, 0);
      CFuncTrain::Wait(this);
    }
    else
    {
      CBasePlatTrain::PlayMovingSound(this);
      m_flSpeed = this->m_flSpeed;
      this->m_pfnMoveDone.__pfn = CFuncTrain::Wait;
      vptr_ICollideable = this->m_Collision._vptr_ICollideable;
      v37 = m_flSpeed;
      this->m_pfnMoveDone.__delta = 0;
      v39 = (vptr_ICollideable[19])(&this->m_Collision);
      v41 = v21;
      v22 = CBaseEntity::GetLocalOrigin(v3);
      v23 = v22->z - v41;
      v24 = v22->x - *&v39;
      *&vecDest.m_nFieldDataSize = v22->y - *(&v39 + 1);
      *&vecDest.m_nAllocSize = v23;
      *&vecDest.m_fieldDataType = v24;
      CBaseToggle::LinearMove(this, &vecDest, v37, v23);
    }
  }
  else
  {
    CBasePlatTrain::StopMovingSound(this);
    if ( this->m_NoiseArrived.u.m_Id != 0 )
    {
      CPASAttenuationFilter::CPASAttenuationFilter(&filter, this, 0x3F4CCCCDu, v29);
      v30.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      m_pAsString = "";
      if ( this->m_NoiseArrived.u.m_Id != 0 )
        m_pAsString = this->m_NoiseArrived.u.m_pAsString;
      started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v30, -1, 0.0);
      CSosFieldDataFloat::CSosFieldDataFloat(&vecDest, LODWORD(this->m_volume), v33);
      CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &vecDest, 0, 0);
      if ( vecDest.m_nAllocSize > 8 && vecDest.m_pData != 0 )
        operator delete[](vecDest.m_pData);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CFuncTrain::Activate  (line 873, @0x00000000023cc060, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, VectorSubtract, operator CEntityInstance*, operator-, operator->, operator|=<int>
// calls: CBaseModelEntity::Activate, CFuncTrain::SetupTarget, CBaseEntity::GetLocalOrigin, UTIL_SetOrigin, CBaseEntity::SetMoveDoneTime
// globals: CEntityHandle::gm_pEntityList, CFuncTrain::Next(void)
void __fastcall CFuncTrain::Activate(CFuncTrain *const this, ActivateType_t activateType)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  double v6; // xmm0_8
  uint32 v7; // eax
  const CBaseEntity *m_pInstance; // rdi
  float v9; // xmm1_4
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  const Vector *LocalOrigin; // rax
  vec_t v13; // xmm0_4
  vec_t v14; // xmm2_4
  float v15; // xmm1_4
  unsigned int v16; // r12d
  double v17; // [rsp+0h] [rbp-30h]
  float v18; // [rsp+8h] [rbp-28h]
  Vector vecOrigin; // [rsp+10h] [rbp-20h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  if ( !this->m_activated )
  {
    CFuncTrain::SetupTarget(this);
    m_Index = this->m_hCurrentTarget.m_Index;
    this->m_activated = 1;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hCurrentTarget.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
        {
          v6 = (*(this->m_Collision._vptr_ICollideable + 19))(&this->m_Collision);
          v7 = this->m_hCurrentTarget.m_Index;
          m_pInstance = 0;
          v17 = v6;
          v18 = v9;
          if ( v7 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[this->m_hCurrentTarget.m_Index & 0x1FF];
              if ( v11 != 0 && v7 == v11->m_EHandle.m_Index )
                m_pInstance = v11->m_pInstance;
            }
          }
          LocalOrigin = CBaseEntity::GetLocalOrigin(m_pInstance);
          v13 = LocalOrigin->z - v18;
          v14 = LocalOrigin->x - *&v17;
          vecOrigin.y = LocalOrigin->y - *(&v17 + 1);
          vecOrigin.z = v13;
          vecOrigin.x = v14;
          UTIL_SetOrigin(this, &vecOrigin, 0);
          if ( this->m_pEntity->m_name.u.m_Id != 0 )
          {
            v16 = this->m_spawnflags.m_Value | 1;
            if ( this->m_spawnflags.m_Value != v16 )
            {
              (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_spawnflags.m_Value = v16;
            }
          }
          else
          {
            CBaseEntity::SetMoveDoneTime(this, 0.1, v15);
            this->m_pfnMoveDone.__delta = 0;
            this->m_pfnMoveDone.__pfn = CFuncTrain::Next;
          }
        }
      }
    }
  }
}


// CFuncTrain::SetupTarget  (line 907, @0x00000000023cbed0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, String, ToCStr, operator CEntityInstance*, operator!, operator=
// calls: CGameEntitySystem::FindEntityByName, Msg
// callers: CFuncTrain::OnRestore, CFuncTrain::Activate
// strings: "Can't find target of train %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncTrain::SetupTarget(CFuncTrain *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rax
  int v7; // edx
  __int16 v8; // cx
  const char *m_pAsString; // rsi
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  m_Index = this->m_hCurrentTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCurrentTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hCurrentTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 )
    {
      this->m_target.u.m_Id = EntityByName->m_target.u.m_Id;
      m_pEntity = EntityByName->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v8 = 0x7FFF;
        else
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hCurrentTarget.m_Index) = v8 | this->m_hCurrentTarget.m_Index & 0x8000;
        this->m_hCurrentTarget.m_Index = (v7 << 15) | this->m_hCurrentTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hCurrentTarget.m_Index = -1;
      }
    }
    else
    {
      m_pAsString = "";
      if ( this->m_target.u.m_Id != 0 )
        m_pAsString = this->m_target.u.m_pAsString;
      Msg("Can't find target of train %s\n", m_pAsString);
    }
  }
}


// CFuncTrain::Spawn  (line 930, @0x00000000023c2700, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline, GetDebugName
// calls: CBasePlatTrain::Spawn, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::SetMoveType, CEntityIdentity::GetDebugName, Warning
// strings: "FuncTrain '%s' has no target.\n"
void __fastcall CFuncTrain::Spawn(CFuncTrain *const this, const CEntityKeyValues *pKeyValues)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  bool v6; // zf
  const char *DebugName; // rax

  CBasePlatTrain::Spawn(this, pKeyValues);
  if ( this->m_flSpeed == 0.0 )
  {
    v6 = this->m_target.u.m_Id == 0;
    this->m_flSpeed = 100.0;
    if ( !v6 )
      goto LABEL_3;
  }
  else if ( this->m_target.u.m_Id != 0 )
  {
    goto LABEL_3;
  }
  DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
  Warning("FuncTrain '%s' has no target.\n", DebugName);
LABEL_3:
  if ( this->m_flBlockDamage == 0.0 )
    this->m_flBlockDamage = 2.0;
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( (this->m_spawnflags.m_Value & 8) != 0 )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  v6 = this->m_volume == 0.0;
  this->m_activated = 0;
  if ( v6 )
    this->m_volume = 0.85000002;
}


// CFuncTrain::OnRestore  (line 966, @0x00000000023cc020, libserver.so)  // inlines: operator=
// calls: CBaseModelEntity::OnRestore, CFuncTrain::SetupTarget
void __fastcall CFuncTrain::OnRestore(CFuncTrain *const this)
{
  CBaseModelEntity::OnRestore(this);
  if ( (*(this->_vptr_IHandleEntity + 174))(this) != 0 )
    this->m_target.u.m_Id = this->m_iszLastTarget.u.m_Id;
  CFuncTrain::SetupTarget(this);
}


// CFuncTrain::InputToggle  (line 981, @0x00000000023d8bb0, libserver.so)  // inlines: Start
// calls: CFuncTrain::Start, CFuncTrain::Stop
void __fastcall CFuncTrain::InputToggle(CFuncTrain *const this, inputdata_t *const data)
{
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CFuncTrain::Start(this);
  else
    CFuncTrain::Stop(this);
}


// CFuncTrain::InputStart  (line 995, @0x00000000023d8b90, libserver.so)  // inlines: Start
// calls: CFuncTrain::Start
void __fastcall CFuncTrain::InputStart(CFuncTrain *const this, inputdata_t *const data)
{
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CFuncTrain::Start(this);
}


// CFuncTrain::InputStop  (line 1001, @0x00000000023cc590, libserver.so)
// calls: CFuncTrain::Stop
void __fastcall CFuncTrain::InputStop(CFuncTrain *const this, inputdata_t *const data)
{
  CFuncTrain::Stop(this);
}


// CFuncTrain::Start  (line 1007, @0x00000000023d8b20, libserver.so)  // inlines: NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>
// calls: CFuncTrain::Next
// callers: CFuncTrain::Start, CFuncTrain::InputStart, CFuncTrain::InputToggle
void __fastcall CFuncTrain::Start(CFuncTrain *const this)
{
  unsigned int v2; // r12d

  v2 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
  if ( this->m_spawnflags.m_Value != v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v2;
  }
  CFuncTrain::Next(this);
}


// CFuncTrain::Start  (line 1007, @0x00000000023d8b70, libserver.so)
// calls: CFuncTrain::Start
void __fastcall CFuncTrain::Start(CFuncTrain *const this)
{
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CFuncTrain::Start(this);
}


// CFuncTrain::Stop  (line 1019, @0x00000000023cc230, libserver.so)  // inlines: AddSpawnFlags, AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, CUtlSymbolLarge, ClearData, CopyData, GetDataPtr, GetEntityIdentity, GetEntityName, GetEntryIndex, HasSpawnFlags, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, Set, String, ToCStr, V_memcpy, entindex, memcpy, operator bool, operator=, operator|=<int>, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CBaseEntity::SetNextThink, CBaseEntity::SetAbsVelocity, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CBaseEntity::SetMoveDoneTime, __stack_chk_fail (14 total)
// callers: CFuncTrain::InputStop, CFuncTrain::InputToggle
// strings: "volume_atten"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CFuncTrain::Stop(CFuncTrain *const this)
{
  double v1; // xmm1_8
  unsigned int m_Value; // eax
  unsigned int v4; // r12d
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float v8; // xmm1_4
  uint v9; // xmm1_4
  float v10; // xmm1_4
  CEntityIndex v11; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r15
  float m_volume; // xmm2_4
  float *m_pData; // rax
  float v16; // [rsp+Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+168h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) == 0 )
  {
    v4 = m_Value | 1;
    if ( m_Value != (m_Value | 1) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v4;
    }
    m_Index = this->m_hEnemy.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEnemy.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[this->m_hEnemy.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
          this->m_target.u.m_Id = v7->m_pInstance->m_pEntity->m_name.u.m_Id;
      }
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
    CBaseEntity::SetAbsVelocity(this, &vec3_origin);
    if ( this->m_NoiseArrived.u.m_Id == 0 )
      goto LABEL_20;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.m_nAllocSize = v9;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&origin.m_nAllocSize = v10;
    CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v10);
    v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    m_pAsString = "";
    if ( this->m_NoiseArrived.u.m_Id != 0 )
      m_pAsString = this->m_NoiseArrived.u.m_pAsString;
    started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v11, -1, 0.0);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    m_volume = this->m_volume;
    origin.m_nAllocSize = 0;
    origin.m_pData = 0;
    v16 = m_volume;
    origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( origin.m_nAllocSize <= 3 )
    {
      origin.m_nAllocSize = 4;
    }
    else if ( origin.m_nAllocSize > 8 )
    {
      m_pData = origin.m_pData;
      if ( origin.m_pData == 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
    m_pData = &origin.m_pData;
LABEL_15:
    *m_pData = v16;
LABEL_16:
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
    if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
      operator delete[](origin.m_pData);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
LABEL_20:
    this->m_pfnMoveDone.__pfn = 0;
    this->m_pfnMoveDone.__delta = 0;
    CBaseEntity::SetMoveDoneTime(this, -1.0, v8);
  }
}


// CFuncTrackTrain::GetDataDescMap  (line 1049, @0x00000000023bb1b0, libserver.so)
// globals: CFuncTrackTrain::m_DataMap
datamap_t *__fastcall CFuncTrackTrain::GetDataDescMap(CFuncTrackTrain *const this)
{
  return &CFuncTrackTrain::m_DataMap;
}


// CFuncTrackTrain::AddDatadescMetadataKeys  (line 1049, @0x00000000023cc5a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTrackTrain::GetEntityClass(void)
void __fastcall CFuncTrackTrain::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTrackTrain::GetEntityClass);
}


// CFuncTrackTrain::GetBaseMap  (line 1049, @0x00000000023cc5c0, libserver.so)
datamap_t *__cdecl CFuncTrackTrain::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncTrackTrain>  (line 1049, @0x00000000023df640, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTrackTrain"
// globals: `guard variable for'DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder, `guard variable for'DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc, CFuncTrackTrain::GetEntityClass(void), CFuncTrackTrain::m_DataMap, DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *a1)
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

  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_pszBase = "CFuncTrackTrain";
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder,
      &_dso_handle);
  }
  CFuncTrackTrain::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc) != 0 )
  {
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[39].pSaveRestoreOps = eventFuncs;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[40].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_pszBase), "Next");
    m_Size = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[41].fieldName = v2;
    v6 = operator new[](DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v6, DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_pszBase), "Find");
    v7 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[42].fieldName = v6;
    v10 = operator new[](DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v10, DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_pszBase), "NearestPath");
    v11 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[43].fieldName = v10;
    v14 = operator new[](DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_nLenBase + 8);
    *stpcpy(v14, DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_pszBase) = 0x646E4564616544LL;
    v15 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[44].fieldName = v14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc);
  }
  CFuncTrackTrain::m_DataMap.dataNumFields = 48;
  CFuncTrackTrain::m_DataMap.dataDesc = &DataMapInit<CFuncTrackTrain>(CFuncTrackTrain *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTrackTrain::m_DataMap, CFuncTrackTrain::GetEntityClass);
  return &CFuncTrackTrain::m_DataMap;
}


// CFuncTrackTrain::YouForgotToImplementOrDeclareServerClass  (line 1118, @0x00000000023bb1c0, libserver.so)
int __fastcall CFuncTrackTrain::YouForgotToImplementOrDeclareServerClass(CFuncTrackTrain *const this)
{
  return 0;
}


// CFuncTrackTrain::GetServerClass  (line 1118, @0x00000000023c2d40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncTrackTrain::GetServerClass(CFuncTrackTrain *const this)
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


// CFuncTrackTrain::CFuncTrackTrain  (line 1125, @0x00000000023cc5d0, libserver.so)  // inlines: CEntityIOOutput, CUtlSymbolLarge, InValidate, Init, SndOpEventGuid_t, SoundEventGuid_t
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CFuncTrackTrain::CEntityInstanceEntityClass::ConstructInstance, CFuncTankTrain::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncTrackTrain::CFuncTrackTrain(CFuncTrackTrain *const this)
{
  CGlobalVars *v2; // rax

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_40BBB70;
  this->m_OnStart._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnNext._vptr_CEntityIOOutput = off_3F7C190;
  this->m_iszSoundMove.u.m_Id = 0;
  this->m_iszSoundMovePing.u.m_Id = 0;
  this->m_iszSoundStart.u.m_Id = 0;
  v2 = gpGlobals;
  this->m_iszSoundStop.u.m_Id = 0;
  this->m_soundMoveGuid.m_nGuid.m_Data = 0;
  this->m_soundMoveGuid.m_hStackHash = -1;
  this->m_eOrientationType = TrainOrientationType_t::TrainOrientation_AtPathTracks;
  this->m_eVelocityType = TrainVelocityType_t::TrainVelocity_Instantaneous;
  this->m_lastBlockPos.x = 0.0;
  this->m_lastBlockPos.y = 0.0;
  this->m_lastBlockPos.z = 0.0;
  this->m_lastBlockTick = v2->tickcount;
}


// CFuncTrackTrain::DrawDebugTextOverlays  (line 1145, @0x00000000023bba60, libserver.so)  // inlines: FastSqrt, Length, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss
// calls: CBaseEntity::DrawDebugTextOverlays, CBaseEntity::GetLocalAngles, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "angles: %g %g %g", "current speed (goal): %g (%g)", "max speed: %g"
int __fastcall CFuncTrackTrain::DrawDebugTextOverlays(
        CFuncTrackTrain *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  const QAngle *LocalAngles; // rax
  double z; // [rsp+10h] [rbp-240h]
  double y; // [rsp+18h] [rbp-238h]
  char tempstr[520]; // [rsp+20h] [rbp-230h] BYREF
  unsigned __int64 v12; // [rsp+228h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v12 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    z = CBaseEntity::GetLocalAngles(this)->z;
    y = CBaseEntity::GetLocalAngles(this)->y;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    V_snprintf(tempstr, 512, "angles: %g %g %g", LocalAngles->x, y, z);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(
      tempstr,
      512,
      "current speed (goal): %g (%g)",
      fsqrt(
        ((this->m_vecVelocity.m_Value.x * this->m_vecVelocity.m_Value.x)
       + (this->m_vecVelocity.m_Value.y * this->m_vecVelocity.m_Value.y))
      + (this->m_vecVelocity.m_Value.z * this->m_vecVelocity.m_Value.z)),
      this->m_flSpeed);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "max speed: %g", this->m_maxSpeed);
    CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 3;
  }
  return v6;
}


// CFuncTrackTrain::DrawEntityDebugOverlays  (line 1170, @0x00000000023bc170, libserver.so)  // inlines: Vector, VectorTransform
// calls: CBaseEntity::DrawEntityDebugOverlays, CBaseEntity::GetAbsOrigin, NDebugOverlay::Box, CBaseEntity::EntityToWorldTransform, VectorTransform
void __fastcall CFuncTrackTrain::DrawEntityDebugOverlays(CFuncTrackTrain *const this, uint64 nDebugOverlayBits)
{
  char v2; // r12
  const Vector *AbsOrigin; // rax
  matrix3x4_t *v5; // rax
  Vector out; // [rsp+10h] [rbp-50h] BYREF
  Vector mins; // [rsp+20h] [rbp-40h] BYREF
  Vector maxs; // [rsp+30h] [rbp-30h] BYREF

  v2 = nDebugOverlayBits;
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  if ( (v2 & 4) != 0 )
  {
    maxs.x = 4.0;
    maxs.y = 4.0;
    maxs.z = 4.0;
    mins.x = -4.0;
    mins.y = -4.0;
    mins.z = -4.0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Box(AbsOrigin, &mins, &maxs, 0xFFu, 0, 255, 0.0, 0);
    v5 = CBaseEntity::EntityToWorldTransform(this);
    maxs.x = this->m_length;
    maxs.y = 0.0;
    maxs.z = 0.0;
    VectorTransform(&maxs.x, v5, &out.x);
    maxs.x = 4.0;
    maxs.y = 4.0;
    maxs.z = 4.0;
    mins.x = -4.0;
    mins.y = -4.0;
    mins.z = -4.0;
    NDebugOverlay::Box(&out, &mins, &maxs, 0xFFu, 0, 255, 0.0, 0);
  }
}


// CFuncTrackTrain::Spawn  (line 1185, @0x00000000023c2840, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetDebugName, GetValue, GetValue<int>, HasSpawnFlags, Min<long long unsigned int>, Min<unsigned int>, SetSolid, atoi, curtime, operator=, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseEntity::SetLocalVelocity, CBaseEntity::SetLocalAngularVelocity, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::SetMoveType, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::AddFlag, CEntityIdentity::GetDebugName, Msg, strtol (14 total)
// callers: CFuncTankTrain::Spawn
// strings: "FuncTrackTrain '%s' has no target.\n", "No conversion from %s to int now\n"
// globals: CFuncTrackTrain::Find(void), CEntityKeyValues::sm_EmptyVariant, jpt_23C2BAE
void __fastcall CFuncTrackTrain::Spawn(CFuncTrackTrain *const this, const CEntityKeyValues *pKeyValues)
{
  bool v4; // zf
  unsigned int m_Value; // eax
  __int64 v6; // rax
  vec_t v7; // xmm0_4
  int (**vptr_ICollideable)(...); // rax
  vec_t *v9; // rax
  double v10; // xmm1_8
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  double v13; // xmm0_8
  double v14; // xmm1_8
  double v15; // xmm2_8
  double v16; // xmm3_8
  double v17; // xmm4_8
  float m_flSpeed; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *DebugName; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v23; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v25; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  float v28; // xmm0_4
  int m_float; // eax
  const char *v30; // rax
  int m_uint64; // edx
  const char *v32; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1555011263) )
    goto LABEL_2;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_37:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_38;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v23 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v23) == 1555011263 )
      goto LABEL_34;
LABEL_31:
    if ( m_nCount <= ++v23 )
      goto LABEL_37;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v23] != 1555011263 )
    goto LABEL_31;
LABEL_34:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v25 = pKeyValues->m_keyValues.m_pElements;
  else
    v25 = 0;
  p_m_value = &v25[v23].m_value;
LABEL_38:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      v28 = 0.0;
      break;
    case 1:
      m_float = p_m_value->m_float;
      goto LABEL_55;
    case 5:
      v28 = p_m_value->m_int * 0.1;
      break;
    case 6:
      v28 = p_m_value->m_char * 0.1;
      break;
    case 26:
      if ( p_m_value->m_int64 > 0x7FFFFFFF )
        goto LABEL_46;
      m_uint64 = 0x80000000;
      if ( p_m_value->m_uint64 >= 0xFFFFFFFF80000000LL )
        m_uint64 = p_m_value->m_uint64;
      v28 = m_uint64 * 0.1;
      break;
    case 30:
      v28 = strtol(p_m_value->m_pszString, 0, 10) * 0.1;
      break;
    case 33:
      v30 = p_m_value->m_uint64;
      if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_44;
LABEL_46:
      v28 = 214748370.0;
      break;
    case 34:
      LODWORD(v30) = p_m_value->m_float64;
LABEL_44:
      v28 = v30 * 0.1;
      break;
    case 37:
      m_float = p_m_value->m_int;
      if ( p_m_value->m_int <= 0x7FFFFFFEu )
LABEL_55:
        v28 = m_float * 0.1;
      else
        v28 = 214748370.0;
      break;
    default:
      v32 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to int now\n", v32);
      v28 = 0.0;
      break;
  }
  this->m_flVolume = v28;
LABEL_2:
  if ( this->m_maxSpeed == 0.0 )
  {
    m_flSpeed = this->m_flSpeed;
    if ( m_flSpeed == 0.0 )
      this->m_maxSpeed = 100.0;
    else
      this->m_maxSpeed = m_flSpeed;
  }
  if ( this->m_flMoveSoundMinPitch == 0.0 )
    this->m_flMoveSoundMinPitch = 60.0;
  if ( this->m_flMoveSoundMaxPitch == 0.0 )
    this->m_flMoveSoundMaxPitch = 200.0;
  CBaseEntity::SetLocalVelocity(this, &vec3_origin);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  v4 = this->m_target.u.m_Id == 0;
  this->m_dir = 1.0;
  if ( v4 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Msg("FuncTrackTrain '%s' has no target.\n", DebugName);
  }
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, (this->m_spawnflags.m_Value & 0x80) == 0 ? 6 : 1);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x200) != 0 )
  {
    CBaseEntity::AddFlag(this, 0x40000000);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 8) != 0 )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  v6 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  this->m_controlMins.x = *v6;
  this->m_controlMins.y = *(v6 + 4);
  v7 = *(v6 + 8);
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  this->m_controlMins.z = v7;
  v9 = (vptr_ICollideable[2])(&this->m_Collision);
  this->m_controlMaxs.x = *v9;
  this->m_controlMaxs.y = v9[1];
  this->m_controlMaxs.z = v9[2] + 72.0;
  CBaseEntity::ThinkSet(this, CFuncTrackTrain::Find, 0.0, 0, 0);
  v11 = 0.0;
  v12 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v11 = LODWORD(v12->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v11, v10, 0);
  if ( this->m_flVolume == 0.0 )
    this->m_flVolume = 1.0;
  (*(this->_vptr_IHandleEntity + 49))(this, v13, v14, v15, v16, v17, 0.0);
}


// CFuncTrackTrain::InputStop  (line 1265, @0x00000000023ccb00, libserver.so)
// calls: CFuncTrackTrain::Stop
void __fastcall CFuncTrackTrain::InputStop(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  CFuncTrackTrain::Stop(this);
}


// CFuncTrackTrain::InputResume  (line 1274, @0x00000000023db8a0, libserver.so)
// calls: CFuncTrackTrain::Start
void __fastcall CFuncTrackTrain::InputResume(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  this->m_flSpeed = this->m_oldSpeed;
  CFuncTrackTrain::Start(this);
}


// CFuncTrackTrain::InputReverse  (line 1284, @0x00000000023dbde0, libserver.so)
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputReverse(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float v3; // xmm1_4

  CFuncTrackTrain::SetDirForward(this, this->m_dir != 1.0);
  CFuncTrackTrain::SetSpeed(this, this->m_flSpeed, v3, 0);
}


// CFuncTrackTrain::IsDirForward  (line 1294, @0x00000000023cc690, libserver.so)
bool __fastcall CFuncTrackTrain::IsDirForward(CFuncTrackTrain *const this)
{
  return this->m_dir == 1.0;
}


// CFuncTrackTrain::SetDirForward  (line 1303, @0x00000000023cc6b0, libserver.so)
// calls: CPathTrack::GetPrevious, CPathTrack::GetNext
// callers: CFuncTrackTrain::InputReverse, CFuncTrackTrain::InputStartForward, CFuncTrackTrain::InputStartBackward, CFuncTrackTrain::Use, CFuncTrackTrain::InputSetSpeedDir, CFuncTrackTrain::InputSetSpeedDirAccel
void __fastcall CFuncTrackTrain::SetDirForward(CFuncTrackTrain *const this, bool bForward)
{
  CPathTrack *m_ppath; // rdi
  CPathTrack *v4; // rdi

  if ( bForward )
  {
    if ( this->m_dir != 1.0 )
    {
      m_ppath = this->m_ppath;
      if ( m_ppath != 0 && CPathTrack::GetPrevious(m_ppath) != 0 )
        this->m_ppath = CPathTrack::GetPrevious(this->m_ppath);
      this->m_dir = 1.0;
    }
  }
  else if ( this->m_dir != -1.0 )
  {
    v4 = this->m_ppath;
    if ( v4 != 0 && CPathTrack::GetNext(v4) != 0 )
      this->m_ppath = CPathTrack::GetNext(this->m_ppath);
    this->m_dir = -1.0;
  }
}


// CFuncTrackTrain::InputStartForward  (line 1331, @0x00000000023dbe30, libserver.so)
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputStartForward(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float v3; // xmm1_4

  CFuncTrackTrain::SetDirForward(this, 1);
  CFuncTrackTrain::SetSpeed(this, this->m_maxSpeed, v3, 0);
}


// CFuncTrackTrain::InputStartBackward  (line 1341, @0x00000000023dbe60, libserver.so)
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputStartBackward(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float v3; // xmm1_4

  CFuncTrackTrain::SetDirForward(this, 0);
  CFuncTrackTrain::SetSpeed(this, this->m_maxSpeed, v3, 0);
}


// CFuncTrackTrain::Start  (line 1351, @0x00000000023db820, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CFuncTrackTrain::Next, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFuncTrackTrain::InputResume, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::Start(CFuncTrackTrain *const this)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_flags = 0;
  value.m_type = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnStart, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  CFuncTrackTrain::Next(this);
}


// CFuncTrackTrain::InputToggle  (line 1361, @0x00000000023dbe90, libserver.so)
// calls: CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputToggle(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  if ( this->m_flSpeed == 0.0 )
    CFuncTrackTrain::SetSpeed(this, this->m_maxSpeed, v2, 0);
  else
    CFuncTrackTrain::SetSpeed(this, 0.0, v2, 0);
}


// CFuncTrackTrain::Use  (line 1377, @0x00000000023dbed0, libserver.so)
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::Use(
        CFuncTrackTrain *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  char v5; // si
  double v7; // xmm1_8
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // [rsp-8h] [rbp-1Ch]

  if ( useType == USE_SET )
  {
    v5 = 1;
    v7 = ((4.0 * this->m_flSpeed) / this->m_maxSpeed) * 0.25 + value * 0.25;
    v8 = 1.0;
    v9 = v7;
    if ( v9 <= 1.0 )
    {
      if ( v9 >= -0.25 )
      {
        if ( (this->m_spawnflags.m_Value & 4) == 0 || (v8 = 0.0, v9 >= 0.0) )
        {
          v8 = fabs(v9);
          v5 = v9 >= 0.0;
        }
      }
      else
      {
        v8 = 0.0;
        if ( (this->m_spawnflags.m_Value & 4) == 0 )
        {
          v8 = 0.25;
          v5 = 0;
        }
      }
    }
    v11 = v8;
    CFuncTrackTrain::SetDirForward(this, v5);
    CFuncTrackTrain::SetSpeed(this, v11 * this->m_maxSpeed, v10, 0);
  }
}


// CFuncTrackTrain::InputSetSpeedReal  (line 1405, @0x00000000023dbff0, libserver.so)  // inlines: Float, operator float
// calls: CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputSetSpeedReal(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm1_4
  float m_maxSpeed; // xmm0_4

  if ( inputdata->value.m_type == 34 )
  {
    m_maxSpeed = this->m_maxSpeed;
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 <= m_maxSpeed )
      goto LABEL_3;
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    m_maxSpeed = this->m_maxSpeed;
    if ( m_float64 <= m_maxSpeed )
LABEL_3:
      m_maxSpeed = fmaxf(0.0, m_float64);
  }
  CFuncTrackTrain::SetSpeed(this, m_maxSpeed, m_float64, 0);
}


// CFuncTrackTrain::InputSetSpeed  (line 1415, @0x00000000023dc040, libserver.so)  // inlines: Float, operator float
// calls: CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputSetSpeed(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v3; // xmm1_4

  if ( inputdata->value.m_type == 34 )
  {
    m_float64 = inputdata->value.m_float64;
    if ( m_float64 > 1.0 )
      goto LABEL_3;
  }
  else
  {
    m_float64 = inputdata->value.m_float;
    if ( m_float64 > 1.0 )
    {
LABEL_3:
      CFuncTrackTrain::SetSpeed(this, 1.0 * this->m_maxSpeed, 1.0, 0);
      return;
    }
  }
  v3 = fmaxf(0.0, m_float64);
  CFuncTrackTrain::SetSpeed(this, v3 * this->m_maxSpeed, v3, 0);
}


// CFuncTrackTrain::InputSetSpeedDir  (line 1428, @0x00000000023dc0a0, libserver.so)  // inlines: Float, operator float
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputSetSpeedDir(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // xmm1_4
  float v5; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v5 = m_float64;
  CFuncTrackTrain::SetDirForward(this, m_float64 >= 0.0);
  v4 = fabs(v5);
  CFuncTrackTrain::SetSpeed(this, fminf(1.0, v4) * this->m_maxSpeed, v4, 0);
}


// CFuncTrackTrain::InputSetSpeedDirAccel  (line 1443, @0x00000000023dc5a0, libserver.so)  // inlines: Float, SetSpeed, operator float
// calls: CFuncTrackTrain::SetDirForward, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::InputSetSpeedDirAccel(CFuncTrackTrain *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  __int64 v4; // rsi
  float v5; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v5 = m_float64;
  CFuncTrackTrain::SetDirForward(this, m_float64 >= 0.0);
  this->m_bAccelToSpeed = 1;
  CFuncTrackTrain::SetSpeed(this, fminf(1.0, fabs(v5)) * this->m_maxSpeed, v4);
}


// CFuncTrackTrain::SetSpeed  (line 1455, @0x00000000023db8c0, libserver.so)  // inlines: abs<float>, curtime
// calls: CFuncTrackTrain::Start
// callers: CFuncTrackTrain::SetSpeed, CFuncTrackTrain::InputSetSpeedDirAccel
void __fastcall CFuncTrackTrain::SetSpeed(CFuncTrackTrain *const this, float flSpeed, __int64 bAccel)
{
  CGlobalVars *v4; // r12
  float m_flCurrentTime; // xmm1_4
  bool v6; // zf
  float m_flDesiredSpeed; // xmm1_4
  void (__fastcall *m_pfnWarningFunc)(__int64, __int64); // rax

  v4 = gpGlobals;
  this->m_flDesiredSpeed = fabs(flSpeed) * this->m_dir;
  if ( v4 != 0 )
  {
    if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
    {
      m_pfnWarningFunc = v4->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(1, bAccel);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v6 = this->m_flSpeed == 0.0;
  this->m_flSpeedChangeTime = m_flCurrentTime;
  if ( v6 )
  {
    m_flDesiredSpeed = this->m_flDesiredSpeed;
    if ( m_flDesiredSpeed < 0.0 )
    {
      if ( -m_flDesiredSpeed <= 0.0 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( m_flDesiredSpeed > 0.0 )
LABEL_7:
      this->m_flSpeed = 0.1;
  }
LABEL_8:
  CFuncTrackTrain::Start(this);
}


// CFuncTrackTrain::SetSpeed  (line 1455, @0x00000000023db990, libserver.so)  // inlines: GetDebugName
// calls: CFuncTrackTrain::Start, CEntityIdentity::GetDebugName, DevMsg, CFuncTrackTrain::Stop, CFuncTrackTrain::SetSpeed, CFuncTrackTrain::Next
// callers: CFuncTrackTrain::ArriveAtNode, CFuncTrackTrain::InputReverse, CFuncTrackTrain::InputStartForward, CFuncTrackTrain::InputStartBackward, CFuncTrackTrain::InputToggle, CFuncTrackTrain::Use, CFuncTrackTrain::InputSetSpeedReal, CFuncTrackTrain::InputSetSpeed, CFuncTrackTrain::InputSetSpeedDir, CFuncTrackAuto::UpdateAutoTargets, CTankTrainAI::Think
// strings: "TRAIN(%s), speed to %.2f\n"
void __fastcall CFuncTrackTrain::SetSpeed(CFuncTrackTrain *const this, float a2, float flSpeed, __int64 bAccel)
{
  float m_flSpeed; // xmm1_4
  float v6; // xmm0_4
  const char *DebugName; // rax
  float v8; // [rsp+Ch] [rbp-14h]

  this->m_bAccelToSpeed = bAccel;
  m_flSpeed = this->m_flSpeed;
  if ( bAccel != 0 )
  {
    CFuncTrackTrain::SetSpeed(this, a2, bAccel);
  }
  else
  {
    v6 = fabs(a2) * this->m_dir;
    this->m_flSpeed = v6;
    if ( m_flSpeed != v6 )
    {
      if ( v6 == 0.0 )
      {
        CFuncTrackTrain::Stop(this);
        v6 = this->m_flSpeed;
      }
      else
      {
        if ( m_flSpeed == 0.0 )
          CFuncTrackTrain::Start(this);
        else
          CFuncTrackTrain::Next(this);
        v6 = this->m_flSpeed;
      }
    }
    v8 = v6;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg(2, "TRAIN(%s), speed to %.2f\n", DebugName, v8);
  }
}


// CFuncTrackTrain::Stop  (line 1508, @0x00000000023cca90, libserver.so)
// calls: CBaseEntity::SetLocalVelocity, CBaseEntity::SetLocalAngularVelocity, CFuncTrackTrain::SoundStop, CBaseEntity::ThinkSet
// callers: CFuncTrackTrain::InputStop, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackTrain::Stop(CFuncTrackTrain *const this)
{
  float m_flSpeed; // xmm0_4

  CBaseEntity::SetLocalVelocity(this, &vec3_origin);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  m_flSpeed = this->m_flSpeed;
  this->m_flSpeed = 0.0;
  this->m_oldSpeed = m_flSpeed;
  CFuncTrackTrain::SoundStop(this);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CFuncTrackTrain::Blocked  (line 1560, @0x00000000023c6320, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DotProduct, FastSqrt, FindPhysicsBlockerForHierarchy, GetAbsVelocity, GetClassNameAsCStr, GetClassname, GetDebugName, GetVM, Length, Purge, RemoveAll, String, Vector, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator*=, operator-, operator=, ~CTakeDamageInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsVelocity, CEntityIdentity::GetDebugName, DevWarning, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CBaseEntity::GetGroundEntity, DevMsg, CBaseEntity::ApplyAbsVelocityImpulse, CBaseEntity::GetAllInHierarchy, CBaseEntity::VPhysicsGetObject (17 total)
// strings: "TRAIN(%s): Blocked by %s (dmg:%.2f)\n", "TRAIN(%s): Blocked by %s\n"
// local variable allocation has failed, the output may be wrong!
void __fastcall CFuncTrackTrain::Blocked(CFuncTrackTrain *const this, CBaseEntity *pOther)
{
  const Vector *AbsOrigin; // rbx
  const Vector *v4; // rax
  float v5; // xmm2_4
  float v6; // xmm0_4
  float m_flBlockDamage; // xmm0_4
  const char *v8; // rbx
  CEntityIdentity *v9; // rax
  const char *v10; // rax
  float v11; // xmm0_4
  const char *m_pAsString; // rbx
  CEntityIdentity *m_pEntity; // rax
  const char *DebugName; // rax
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  CBaseEntity *v17; // r14
  IPhysicsObject *Object; // rax
  __int64 i; // rbx
  const IPhysicsBody *v20; // rax
  CBaseEntity *GameData; // r12
  float v22; // xmm0_4
  float v23; // xmm0_4
  int m_lastBlockTick; // eax
  const Vector *v25; // rax
  vec_t z; // xmm0_4
  CGlobalVars *v27; // rax
  const Vector *v28; // rax
  IPhysicsObject *v30; // [rsp+18h] [rbp-F8h]
  __int64 v31; // [rsp+20h] [rbp-F0h]
  int v32; // [rsp+28h] [rbp-E8h]
  float v33; // [rsp+2Ch] [rbp-E4h]
  float v34; // [rsp+30h] [rbp-E0h]
  float v35; // [rsp+34h] [rbp-DCh]
  double distc; // [rsp+38h] [rbp-D8h]
  unsigned __int32 dist; // [rsp+38h] [rbp-D8h]
  float dista; // [rsp+38h] [rbp-D8h]
  float distb; // [rsp+38h] [rbp-D8h]
  Vector vecNewVelocity_0; // [rsp+40h] [rbp-D0h] BYREF
  __int128 vecNewVelocity; // [rsp+50h] [rbp-C0h] OVERLAPPED BYREF
  int v42; // [rsp+60h] [rbp-B0h]
  int v43; // [rsp+64h] [rbp-ACh]
  __int64 v44; // [rsp+D8h] [rbp-38h]

  if ( (pOther->m_fFlags.m_Value & 1) != 0 && CBaseEntity::GetGroundEntity(pOther) == this )
  {
    m_pAsString = "";
    m_pEntity = pOther->m_pEntity;
    if ( m_pEntity->m_designerName.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg(1, "TRAIN(%s): Blocked by %s\n", DebugName, m_pAsString);
    v15.m128_i32[0] = fabs(this->m_flSpeed);
    v16 = _mm_cmpge_ss(0x42480000u, v15);
    dist = COERCE_UNSIGNED_INT(_mm_andnot_ps(v16, 0x42480000u).m128_f32[0]) | v15.m128_i32[0] & v16.m128_i32[0];
    (*(pOther->_vptr_IHandleEntity + 173))(pOther, &vecNewVelocity_0, 0);
    if ( vecNewVelocity_0.z == 0.0 )
    {
      *&vecNewVelocity = 0;
      DWORD2(vecNewVelocity) = dist;
      CBaseEntity::ApplyAbsVelocityImpulse(pOther, &vecNewVelocity);
    }
    return;
  }
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = CBaseEntity::GetAbsOrigin(pOther);
  v5 = v4->x - AbsOrigin->x;
  v6 = v4->z - AbsOrigin->z;
  *(&vecNewVelocity + 1) = v4->y - AbsOrigin->y;
  *&vecNewVelocity = v5;
  *(&vecNewVelocity + 2) = v6;
  VectorNormalize(&vecNewVelocity);
  m_flBlockDamage = this->m_flBlockDamage;
  *&vecNewVelocity = *&vecNewVelocity * m_flBlockDamage;
  *(&vecNewVelocity + 1) = *(&vecNewVelocity + 1) * m_flBlockDamage;
  *(&vecNewVelocity + 2) = m_flBlockDamage * *(&vecNewVelocity + 2);
  CBaseEntity::SetAbsVelocity(pOther, &vecNewVelocity);
  if ( (this->m_spawnflags.m_Value & 0x200) != 0 )
  {
    LODWORD(vecNewVelocity) = 0;
    *(&vecNewVelocity + 1) = 0;
    v42 = 0;
    v43 = 0;
    if ( this != 0 && (CBaseEntity::GetAllInHierarchy(this, &vecNewVelocity), vecNewVelocity > 0) )
    {
      v17 = 0;
      v31 = 0;
      dista = 0.0;
      v32 = 0;
      do
      {
        Object = CBaseEntity::VPhysicsGetObject(*(*(&vecNewVelocity + 1) + v31));
        v30 = Object;
        if ( Object != 0 )
        {
          for ( i = (*(*Object + 1872LL))(Object); (*(*i + 16LL))(i) != 0; (*(*i + 96LL))(i) )
          {
            v20 = (*(*i + 24LL))(i, 1);
            GameData = IPhysicsBody::GetGameData(v20);
            if ( GameData->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
            {
              (*(*i + 48LL))(i, &vecNewVelocity_0);
              v22 = (*(*i + 56LL))(i);
              v35 = vecNewVelocity_0.x * v22;
              v34 = vecNewVelocity_0.y * v22;
              v33 = v22 * vecNewVelocity_0.z;
              if ( (this->m_iEFlags & 0x1000) != 0 )
                CBaseEntity::CalcAbsoluteVelocity(this);
              v23 = ((v35 * this->m_vecAbsVelocity.m_Value.x) + (v34 * this->m_vecAbsVelocity.m_Value.y))
                  + (v33 * this->m_vecAbsVelocity.m_Value.z);
              if ( v17 != 0 && v23 <= dista )
              {
                v23 = dista;
                GameData = v17;
              }
              dista = v23;
              v17 = GameData;
            }
          }
          (*(*v30 + 1880LL))(v30, i);
        }
        ++v32;
        v31 += 8;
      }
      while ( v32 < vecNewVelocity );
    }
    else
    {
      v17 = 0;
    }
    LODWORD(vecNewVelocity) = 0;
    if ( (v43 & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseEntity *,int>::Purge((&vecNewVelocity + 8));
      if ( (v43 & 0xC0000000) == 0 )
        CUtlMemory<CBaseEntity *,int>::Purge((&vecNewVelocity + 8));
    }
    if ( v17 == 0 )
    {
LABEL_34:
      if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 )
        return;
      goto LABEL_3;
    }
    m_lastBlockTick = this->m_lastBlockTick;
    if ( gpGlobals->tickcount - m_lastBlockTick > 10 )
    {
      v28 = CBaseEntity::GetAbsOrigin(this);
      distb = fsqrt(
                (((v28->x - this->m_lastBlockPos.x) * (v28->x - this->m_lastBlockPos.x))
               + ((v28->y - this->m_lastBlockPos.y) * (v28->y - this->m_lastBlockPos.y)))
              + ((v28->z - this->m_lastBlockPos.z) * (v28->z - this->m_lastBlockPos.z)));
      if ( (this->m_iEFlags & 0x1000) != 0 )
        CBaseEntity::CalcAbsoluteVelocity(this);
      if ( (((fsqrt(
                ((this->m_vecAbsVelocity.m_Value.x * this->m_vecAbsVelocity.m_Value.x)
               + (this->m_vecAbsVelocity.m_Value.y * this->m_vecAbsVelocity.m_Value.y))
              + (this->m_vecAbsVelocity.m_Value.z * this->m_vecAbsVelocity.m_Value.z))
            * gpGlobals->interval_per_tick)
           * 10.0)
          * 0.1) > distb )
        EntityPhysics_CreateSolver(this, v17, 1, 4.0);
      if ( distb > 1.0 )
      {
LABEL_36:
        v25 = CBaseEntity::GetAbsOrigin(this);
        this->m_lastBlockPos.x = v25->x;
        this->m_lastBlockPos.y = v25->y;
        z = v25->z;
        v27 = gpGlobals;
        this->m_lastBlockPos.z = z;
        this->m_lastBlockTick = v27->tickcount;
        goto LABEL_34;
      }
      m_lastBlockTick = this->m_lastBlockTick;
    }
    if ( m_lastBlockTick >= 0 )
      goto LABEL_34;
    goto LABEL_36;
  }
LABEL_3:
  v8 = "";
  v9 = pOther->m_pEntity;
  if ( v9->m_designerName.u.m_Id != 0 )
    v8 = v9->m_designerName.u.m_pAsString;
  distc = this->m_flBlockDamage;
  v10 = CEntityIdentity::GetDebugName(this->m_pEntity);
  DevWarning(2, "TRAIN(%s): Blocked by %s (dmg:%.2f)\n", v10, v8, distc);
  v11 = this->m_flBlockDamage;
  if ( v11 > 0.0 )
  {
    CTakeDamageInfo::CTakeDamageInfo(&vecNewVelocity, this, this, v11, 1, 0);
    CBaseEntity::TakeDamage(pOther, &vecNewVelocity);
    *&vecNewVelocity = off_3FC92D0;
    if ( v44 != 0 )
      (*(*g_pScriptVM + 136LL))(g_pScriptVM);
  }
}


// CFuncTrackTrain::SoundStop  (line 1650, @0x00000000023cc780, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CPASAttenuationFilter, CPASFilter, CReliableBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, InValidate, Init, StopSoundEvent, String, ToCStr, V_memcpy, entindex, memcpy, ~CBroadcastRecipientFilter, ~CPASAttenuationFilter, ~CPASFilter, ~CReliableBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], __stack_chk_fail (14 total)
// callers: CFuncTrackTrain::Stop, CFuncTrackTrain::UpdateOnRemove, CFuncTrackTrain::Next
// strings: "volume_atten"
void __fastcall CFuncTrackTrain::SoundStop(CFuncTrackTrain *const this)
{
  CSoundOpGameSystem *v2; // r14
  bool v3; // zf
  uint v4; // xmm1_4
  float v5; // xmm1_4
  CEntityIndex v6; // eax
  const char *m_pAsString; // rdx
  SndOpEventGuid_t started; // r15
  float m_flVolume; // xmm2_4
  float *p_m_pData; // rax
  float v11; // [rsp+Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+10h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v14; // [rsp+168h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  if ( this->m_soundMoveGuid.m_nGuid.m_Data == 0 )
    goto LABEL_2;
  v2 = g_pSoundOpGameSystem;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  CSoundOpGameSystem::StopSoundEvent(v2, &filter, this->m_soundMoveGuid);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  v3 = this->m_iszSoundStop.u.m_Id == 0;
  this->m_soundMoveGuid.m_nGuid.m_Data = 0;
  this->m_soundMoveGuid.m_hStackHash = -1;
  if ( v3 )
    goto LABEL_2;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  origin.m_nAllocSize = v4;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
  *&origin.m_nAllocSize = v5;
  CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v5);
  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  m_pAsString = "";
  if ( this->m_iszSoundStop.u.m_Id != 0 )
    m_pAsString = this->m_iszSoundStop.u.m_pAsString;
  started = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v6, -1, 0.0);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  m_flVolume = this->m_flVolume;
  origin.m_nAllocSize = 0;
  origin.m_pData = 0;
  v11 = m_flVolume;
  origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
  origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
  if ( origin.m_nAllocSize <= 3 )
  {
    origin.m_nAllocSize = 4;
    goto LABEL_8;
  }
  if ( origin.m_nAllocSize <= 8 )
  {
LABEL_8:
    p_m_pData = &origin.m_pData;
LABEL_9:
    *p_m_pData = v11;
    goto LABEL_10;
  }
  p_m_pData = origin.m_pData;
  if ( origin.m_pData != 0 )
    goto LABEL_9;
LABEL_10:
  CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, started, "volume_atten", &origin, 0, 0);
  if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
    operator delete[](origin.m_pData);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
LABEL_2:
  this->m_soundMoveGuid.m_nGuid.m_Data = 0;
  this->m_soundMoveGuid.m_hStackHash = -1;
}


// CFuncTrackTrain::SoundUpdate  (line 1676, @0x00000000023ccb30, libserver.so)  // inlines: AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, ClearData, CopyData, GetDataPtr, Init, RemapVal, String, ToCStr, V_memcpy, curtime, entindex, memcpy, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat
// calls: CGlobalVarsBase::curtime, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CSosFieldDataFloat::CSosFieldDataFloat, CSosFieldData::ClearData (14 total)
// callers: CFuncTrackTrain::Next, CFuncTrackTrain::Find
// strings: "volume_atten"
void __fastcall CFuncTrackTrain::SoundUpdate(CFuncTrackTrain *const this)
{
  float m_flNextMPSoundTime; // r13d
  __m128d v3; // xmm0
  __m128d v4; // xmm0
  float v5; // xmm3_4
  uint v6; // xmm1_4
  float v7; // xmm1_4
  double v8; // xmm0_8
  vec_t v9; // xmm1_4
  float v10; // xmm1_4
  CEntityIndex v11; // eax
  const char *v12; // rdx
  float m_flVolume; // xmm7_4
  float *m_pData; // rax
  float *p_m_pData; // rax
  CGlobalVars *v16; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // xmm2_4
  CEntityIndex v19; // eax
  const char *v20; // rdx
  CEntityIndex v21; // eax
  const char *m_pAsString; // rdx
  float v23; // xmm1_4
  float *v24; // rax
  float *v25; // rax
  float nGuid; // [rsp+10h] [rbp-380h]
  SndOpEventGuid_t nGuida; // [rsp+10h] [rbp-380h]
  float flpitch; // [rsp+18h] [rbp-378h]
  float flSpeedRatio; // [rsp+1Ch] [rbp-374h]
  Vector v30; // [rsp+30h] [rbp-360h] BYREF
  CSosFieldDataFloat v31; // [rsp+40h] [rbp-350h] BYREF
  CSosFieldData fieldData; // [rsp+60h] [rbp-330h] BYREF
  CSosFieldData v33; // [rsp+80h] [rbp-310h] BYREF
  CSosFieldData v34; // [rsp+A0h] [rbp-2F0h] BYREF
  CSosFieldData origin; // [rsp+C0h] [rbp-2D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+E0h] [rbp-2B0h] BYREF
  CPASAttenuationFilter filterReliable; // [rsp+220h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+358h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( this->m_iszSoundMove.u.m_Id != 0 || this->m_iszSoundStart.u.m_Id != 0 || this->m_iszSoundMovePing.u.m_Id != 0 )
  {
    if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 && this->m_soundMoveGuid.m_nGuid.m_Data != 0 )
    {
      m_flNextMPSoundTime = this->m_flNextMPSoundTime;
      if ( m_flNextMPSoundTime > CGlobalVarsBase::curtime(gpGlobals, 0) )
        return;
      this->m_flNextMPSoundTime = CGlobalVarsBase::curtime(gpGlobals, 0) + 1.0;
    }
    v3.m128d_f64[0] = fabs(this->m_flSpeed);
    v3.m128d_f64[1] = v3.m128d_f64[0];
    if ( (this->m_spawnflags.m_Value & 0x100) == 0 )
    {
      v3.m128d_f64[0] = v3.m128d_f64[0] / 1000.0;
      flSpeedRatio = 1.0;
      if ( v3.m128d_f64[0] > 1.0 )
        goto LABEL_12;
      goto LABEL_11;
    }
    v3.m128d_f64[0] = v3.m128d_f64[0] / this->m_maxSpeed;
    flSpeedRatio = 1.0;
    if ( v3.m128d_f64[0] <= 1.0 )
    {
      if ( v3.m128d_f64[0] >= 0.0 )
      {
LABEL_11:
        flSpeedRatio = _mm_movedup_pd(v3).m128d_f64[0];
        goto LABEL_12;
      }
      flSpeedRatio = 0.0;
    }
LABEL_12:
    v4.m128d_f64[1] = (((this->m_flMoveSoundMaxPitch - this->m_flMoveSoundMinPitch) * flSpeedRatio)
                     + this->m_flMoveSoundMinPitch);
    v4.m128d_f64[0] = v4.m128d_f64[1] * 0.01;
    v5 = _mm_movedup_pd(v4).m128d_f64[0];
    flpitch = v5;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    origin.m_nAllocSize = v6;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&origin.m_nAllocSize = v7;
    CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v7);
    v8 = (*(this->_vptr_IHandleEntity + 186))(this);
    v30.z = v9;
    *&v30.x = v8;
    CRecipientFilter::CRecipientFilter(&filterReliable);
    filterReliable._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filterReliable, &v30);
    filterReliable._vptr_IRecipientFilter = &off_3FECD70;
    *&origin.m_fieldDataType = (*(this->_vptr_IHandleEntity + 186))(this);
    *&origin.m_nAllocSize = v10;
    CPASAttenuationFilter::Filter(&filterReliable, &origin, 0.80000001, v10);
    CRecipientFilter::MakeReliable(&filterReliable);
    (*(this->_vptr_IHandleEntity + 62))(this);
    if ( this->m_soundMoveGuid.m_nGuid.m_Data == 0 )
    {
      if ( this->m_iszSoundStart.u.m_Id != 0 )
      {
        v21.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        m_pAsString = "";
        if ( this->m_iszSoundStart.u.m_Id != 0 )
          m_pAsString = this->m_iszSoundStart.u.m_pAsString;
        nGuida = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, v21, -1, 0.0);
        CSosFieldDataFloat::CSosFieldDataFloat(&v31, LODWORD(this->m_flVolume), v23);
        CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, nGuida, "volume_atten", &v31, 0, 0);
        if ( v31.m_nAllocSize > 8 && v31.m_pData != 0 )
          operator delete[](v31.m_pData);
      }
      if ( this->m_iszSoundMove.u.m_Id == 0 )
        goto LABEL_31;
      v11.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      v12 = "";
      if ( this->m_iszSoundMove.u.m_Id != 0 )
        v12 = this->m_iszSoundMove.u.m_pAsString;
      this->m_soundMoveGuid = CSoundOpGameSystem::StartSoundEvent(
                                g_pSoundOpGameSystem,
                                &filterReliable,
                                v12,
                                v11,
                                -1,
                                0.0);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      m_flVolume = this->m_flVolume;
      fieldData.m_nAllocSize = 0;
      fieldData.m_pData = 0;
      nGuid = m_flVolume;
      fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
      if ( fieldData.m_nAllocSize > 3 )
      {
        if ( fieldData.m_nAllocSize > 8 )
        {
          m_pData = fieldData.m_pData;
          if ( fieldData.m_pData == 0 )
            goto LABEL_21;
          goto LABEL_20;
        }
      }
      else
      {
        fieldData.m_nAllocSize = 4;
      }
      m_pData = &fieldData.m_pData;
LABEL_20:
      *m_pData = nGuid;
LABEL_21:
      CSoundOpGameSystem::SetSoundEventParam(
        g_pSoundOpGameSystem,
        &filterReliable,
        this->m_soundMoveGuid,
        "volume_atten",
        &fieldData,
        0,
        0);
      if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
        operator delete[](fieldData.m_pData);
      v33.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      v33.m_nAllocSize = 0;
      v33.m_pData = 0;
      v33.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
      v33.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
      if ( v33.m_nAllocSize <= 3 )
      {
        v33.m_nAllocSize = 4;
      }
      else if ( v33.m_nAllocSize > 8 )
      {
        p_m_pData = v33.m_pData;
        if ( v33.m_pData == 0 )
        {
LABEL_28:
          CSoundOpGameSystem::SetSoundEventParam(
            g_pSoundOpGameSystem,
            &filterReliable,
            this->m_soundMoveGuid,
            "pitch",
            &v33,
            0,
            0);
          if ( v33.m_nAllocSize > 8 && v33.m_pData != 0 )
            operator delete[](v33.m_pData);
LABEL_31:
          v16 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            m_flCurrentTime = v16->m_flCurrentTime;
          }
          else
          {
            m_flCurrentTime = 0.0;
          }
          this->m_flNextMoveSoundTime = (((this->m_flMoveSoundMinTime - this->m_flMoveSoundMaxTime) * flSpeedRatio)
                                       + this->m_flMoveSoundMaxTime)
                                      + m_flCurrentTime;
LABEL_38:
          filterReliable._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::~CRecipientFilter(&filterReliable);
          filter._vptr_IRecipientFilter = &off_3FCB190;
          CRecipientFilter::~CRecipientFilter(&filter);
          return;
        }
LABEL_27:
        *p_m_pData = flpitch;
        goto LABEL_28;
      }
      p_m_pData = &v33.m_pData;
      goto LABEL_27;
    }
    if ( this->m_iszSoundMove.u.m_Id == 0 )
    {
LABEL_43:
      if ( this->m_iszSoundMovePing.u.m_Id != 0 && CGlobalVarsBase::curtime(gpGlobals, 0) > this->m_flNextMoveSoundTime )
      {
        v19.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
        v20 = "";
        if ( this->m_iszSoundMovePing.u.m_Id != 0 )
          v20 = this->m_iszSoundMovePing.u.m_pAsString;
        CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v20, v19, -1, 0.0);
        this->m_flNextMoveSoundTime = CGlobalVarsBase::curtime(gpGlobals, 0)
                                    + (((this->m_flMoveSoundMinTime - this->m_flMoveSoundMaxTime) * flSpeedRatio)
                                     + this->m_flMoveSoundMaxTime);
      }
      goto LABEL_38;
    }
    if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) != 0 )
    {
      v34.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      v34.m_nAllocSize = 0;
      v34.m_pData = 0;
      v34.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
      v34.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
      if ( v34.m_nAllocSize <= 3 )
      {
        v34.m_nAllocSize = 4;
      }
      else if ( v34.m_nAllocSize > 8 )
      {
        v24 = v34.m_pData;
        if ( v34.m_pData == 0 )
        {
LABEL_63:
          CSoundOpGameSystem::SetSoundEventParam(
            g_pSoundOpGameSystem,
            &filter,
            this->m_soundMoveGuid,
            "pitch",
            &v34,
            0,
            0);
          CSosFieldData::ClearData(&v34);
          goto LABEL_43;
        }
LABEL_62:
        *v24 = flpitch;
        goto LABEL_63;
      }
      v24 = &v34.m_pData;
      goto LABEL_62;
    }
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    origin.m_nAllocSize = 0;
    origin.m_pData = 0;
    origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( origin.m_nAllocSize <= 3 )
    {
      origin.m_nAllocSize = 4;
    }
    else if ( origin.m_nAllocSize > 8 )
    {
      v25 = origin.m_pData;
      if ( origin.m_pData == 0 )
      {
LABEL_68:
        CSoundOpGameSystem::SetSoundEventParam(
          g_pSoundOpGameSystem,
          &filterReliable,
          this->m_soundMoveGuid,
          "pitch",
          &origin,
          0,
          0);
        CSosFieldData::ClearData(&origin);
        goto LABEL_43;
      }
LABEL_67:
      *v25 = flpitch;
      goto LABEL_68;
    }
    v25 = &origin.m_pData;
    goto LABEL_67;
  }
}


// CFuncTrackTrain::ArriveAtNode  (line 1759, @0x00000000023dba70, libserver.so)  // inlines: GetDebugName, NetworkStateChanged, Set, operator|=<int>
// calls: CPathTrack::GetNext, CFuncTrackTrain::FirePassInputs, CFuncTrackTrain::SetSpeed, CEntityIdentity::GetDebugName, DevMsg
// callers: CFuncTrackTrain::Next, CFuncTrackTrain::Find
// strings: "TrackTrain %s arrived at %s, speed to %4.2f\n"
void __fastcall CFuncTrackTrain::ArriveAtNode(CFuncTrackTrain *const this, CPathTrack *pNode)
{
  CPathTrack *Next; // rax
  float v5; // xmm1_4
  unsigned int m_Value; // eax
  unsigned int v7; // r13d
  float m_flSpeed; // xmm0_4
  const char *DebugName; // rbx
  const char *v10; // rax
  double v11; // [rsp+8h] [rbp-28h]

  Next = CPathTrack::GetNext(pNode);
  CFuncTrackTrain::FirePassInputs(this, pNode, Next, 1);
  m_Value = this->m_spawnflags.m_Value;
  if ( (pNode->m_spawnflags.m_Value & 8) != 0 )
  {
    v7 = m_Value | 2;
    if ( m_Value != (m_Value | 2) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v7;
      LOBYTE(m_Value) = v7;
    }
  }
  if ( (m_Value & 2) != 0 )
  {
    m_flSpeed = pNode->m_flSpeed;
    if ( m_flSpeed != 0.0 )
    {
      CFuncTrackTrain::SetSpeed(this, m_flSpeed, v5, 0);
      v11 = pNode->m_flSpeed;
      DebugName = CEntityIdentity::GetDebugName(pNode->m_pEntity);
      v10 = CEntityIdentity::GetDebugName(this->m_pEntity);
      DevMsg(2, "TrackTrain %s arrived at %s, speed to %4.2f\n", v10, DebugName, v11);
    }
  }
}


// CFuncTrackTrain::GetTrainVelocityType  (line 1793, @0x00000000023cd4f0, libserver.so)
TrainVelocityType_t __fastcall CFuncTrackTrain::GetTrainVelocityType(CFuncTrackTrain *const this)
{
  return this->m_eVelocityType;
}


// CFuncTrackTrain::UpdateTrainVelocity  (line 1803, @0x00000000023cd500, libserver.so)  // inlines: Approach, FastSqrt, Length, SimpleSpline, SimpleSplineRemapVal, UTIL_Approach, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, abs<float>, operator*=, operator-
// calls: CBaseEntity::GetLocalOrigin, VectorNormalize, CBaseEntity::SetLocalVelocity
// callers: CFuncTrackTrain::Next
void __fastcall CFuncTrackTrain::UpdateTrainVelocity(
        CFuncTrackTrain *const this,
        CPathTrack *pPrev,
        CPathTrack *pNext,
        const Vector *const nextPos,
        float flInterval)
{
  TrainVelocityType_t m_eVelocityType; // eax
  float v8; // xmm1_4
  float m_flDesiredSpeed; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float m_flAccelSpeed; // xmm2_4
  float v13; // xmm2_4
  float m_flSpeed; // xmm0_4
  float v15; // xmm1_4
  const Vector *LocalOrigin; // r13
  const Vector *v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  CPathTrack *v21; // rdi
  const Vector *v22; // r13
  const Vector *v23; // rax
  float v24; // xmm4_4
  const Vector *v25; // rax
  vec_t v26; // xmm0_4
  vec_t v27; // xmm2_4
  float v28; // xmm0_4
  float flSegmentLen; // [rsp+8h] [rbp-48h]
  float flSegmentLena; // [rsp+8h] [rbp-48h]
  float v31; // [rsp+Ch] [rbp-44h]
  float v32; // [rsp+Ch] [rbp-44h]
  float pPrevb; // [rsp+10h] [rbp-40h]
  Vector velDesired; // [rsp+20h] [rbp-30h] BYREF

  m_eVelocityType = this->m_eVelocityType;
  if ( m_eVelocityType == TrainVelocityType_t::TrainVelocity_Instantaneous )
    goto LABEL_24;
  if ( m_eVelocityType > TrainVelocityType_t::TrainVelocity_EaseInEaseOut )
    return;
  if ( !this->m_bAccelToSpeed )
  {
    if ( pPrev == 0 || pNext == 0 )
      goto LABEL_24;
    m_flSpeed = pPrev->m_flSpeed;
    if ( m_flSpeed == 0.0 )
      m_flSpeed = this->m_flSpeed;
    v15 = pNext->m_flSpeed;
    if ( v15 == 0.0 )
      v15 = m_flSpeed;
    if ( m_flSpeed != v15 )
    {
      flSegmentLen = v15;
      v31 = m_flSpeed;
      LocalOrigin = CBaseEntity::GetLocalOrigin(pPrev);
      v17 = CBaseEntity::GetLocalOrigin(pNext);
      v18 = v31;
      v19 = flSegmentLen;
      v20 = fsqrt(
              (((v17->x - LocalOrigin->x) * (v17->x - LocalOrigin->x))
             + ((v17->y - LocalOrigin->y) * (v17->y - LocalOrigin->y)))
            + ((v17->z - LocalOrigin->z) * (v17->z - LocalOrigin->z)));
      if ( v20 != 0.0 )
      {
        v21 = pPrev;
        flSegmentLena = v20;
        v32 = v19;
        pPrevb = v18;
        v22 = CBaseEntity::GetLocalOrigin(v21);
        v23 = CBaseEntity::GetLocalOrigin(this);
        v24 = fsqrt(
                (((v23->x - v22->x) * (v23->x - v22->x)) + ((v23->y - v22->y) * (v23->y - v22->y)))
              + ((v23->z - v22->z) * (v23->z - v22->z)))
            / flSegmentLena;
        if ( this->m_eVelocityType == TrainVelocityType_t::TrainVelocity_EaseInEaseOut )
          v24 = ((3.0 * (v24 * v24)) - (((v24 * v24) + (v24 * v24)) * v24)) + 0.0;
        this->m_flSpeed = (((1.0 - v24) * pPrevb) + (v32 * v24)) * this->m_dir;
      }
      goto LABEL_24;
    }
    m_flDesiredSpeed = m_flSpeed * this->m_dir;
    goto LABEL_27;
  }
  v8 = this->m_flSpeed;
  m_flDesiredSpeed = this->m_flDesiredSpeed;
  if ( v8 != m_flDesiredSpeed )
  {
    v10 = this->m_flDesiredSpeed;
    if ( m_flDesiredSpeed < 0.0 )
      v10 = -m_flDesiredSpeed;
    if ( v8 < 0.0 )
      v11 = -v8;
    else
      v11 = this->m_flSpeed;
    if ( v10 > v11 )
      m_flAccelSpeed = this->m_flAccelSpeed;
    else
      m_flAccelSpeed = this->m_flDecelSpeed;
    v13 = m_flAccelSpeed * gpGlobals->frametime;
    if ( (m_flDesiredSpeed - v8) <= v13 )
    {
      if ( -v13 > (m_flDesiredSpeed - v8) )
        m_flDesiredSpeed = v8 - v13;
    }
    else
    {
      m_flDesiredSpeed = v8 + v13;
    }
LABEL_27:
    this->m_flSpeed = m_flDesiredSpeed;
  }
LABEL_24:
  v25 = CBaseEntity::GetLocalOrigin(this);
  v26 = nextPos->z - v25->z;
  v27 = nextPos->x - v25->x;
  velDesired.y = nextPos->y - v25->y;
  velDesired.z = v26;
  velDesired.x = v27;
  VectorNormalize(&velDesired);
  v28 = fabs(this->m_flSpeed);
  velDesired.x = velDesired.x * v28;
  velDesired.y = velDesired.y * v28;
  velDesired.z = v28 * velDesired.z;
  CBaseEntity::SetLocalVelocity(this, &velDesired);
}


// CFuncTrackTrain::GetTrainOrientationType  (line 1882, @0x00000000023cd870, libserver.so)
TrainOrientationType_t __fastcall CFuncTrackTrain::GetTrainOrientationType(CFuncTrackTrain *const this)
{
  return this->m_eOrientationType;
}


// CFuncTrackTrain::UpdateTrainOrientation  (line 1892, @0x00000000023ce090, libserver.so)  // inlines: GetTrainOrientationType
// calls: CFuncTrackTrain::UpdateOrientationBlend, CFuncTrackTrain::UpdateOrientationAtPathTracks
// callers: CFuncTrackTrain::Next
void __fastcall CFuncTrackTrain::UpdateTrainOrientation(
        CFuncTrackTrain *const this,
        CPathTrack *pPrev,
        CPathTrack *pNext,
        const Vector *const nextPos,
        __m128i flInterval)
{
  TrainOrientationType_t m_eOrientationType; // eax

  if ( (this->m_spawnflags.m_Value & 0x10) == 0 )
  {
    m_eOrientationType = this->m_eOrientationType;
    if ( m_eOrientationType == TrainOrientationType_t::TrainOrientation_AtPathTracks )
    {
      CFuncTrackTrain::UpdateOrientationAtPathTracks(this, pPrev, pNext, nextPos, flInterval);
    }
    else if ( m_eOrientationType >= TrainOrientationType_t::TrainOrientation_AtPathTracks
           && m_eOrientationType <= TrainOrientationType_t::TrainOrientation_EaseInEaseOut )
    {
      CFuncTrackTrain::UpdateOrientationBlend(this, m_eOrientationType, pPrev, pNext, nextPos, *flInterval.m128i_i32);
    }
  }
}


// CFuncTrackTrain::UpdateOrientationAtPathTracks  (line 1931, @0x00000000023cda80, libserver.so)  // inlines: IsDirForward, VectorSubtract, operator*=, operator-, operator=
// calls: CBaseEntity::GetLocalOrigin, CPathTrack::LookAhead, VectorAngles, FixupAngles, CPathTrack::GetOrientationType, CBaseEntity::GetLocalAngles, CFuncTrackTrain::DoUpdateOrientation, CPathTrack::GetOrientation
// callers: CFuncTrackTrain::UpdateTrainOrientation
void __fastcall CFuncTrackTrain::UpdateOrientationAtPathTracks(
        CFuncTrackTrain *const this,
        CPathTrack *pPrev,
        CPathTrack *pNext,
        const Vector *const nextPos,
        __m128i flInterval)
{
  float v6; // r15d
  const Vector *LocalOrigin; // rax
  float m_length; // xmm1_4
  __int64 v10; // rdx
  float v11; // r14d
  const Vector *v12; // rax
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  bool v16; // zf
  double v17; // xmm1_8
  float v18; // xmm2_4
  float v19; // xmm0_4
  CPathTrack *pNextNode; // [rsp+8h] [rbp-78h] BYREF
  Vector nextFront; // [rsp+10h] [rbp-70h] BYREF
  Vector vecFaceDir; // [rsp+20h] [rbp-60h] BYREF
  QAngle angles; // [rsp+30h] [rbp-50h] BYREF
  QAngle curAngles; // [rsp+40h] [rbp-40h] BYREF

  if ( this->m_ppath != 0 )
  {
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(flInterval));
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    m_length = this->m_length;
    v10 = *&LocalOrigin->x;
    pNextNode = 0;
    *&nextFront.x = v10;
    nextFront.z = LocalOrigin->z - this->m_height;
    if ( m_length <= 0.0 )
    {
      v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
      v19 = 100.0;
      if ( this->m_dir != 1.0 )
        v19 = -100.0;
    }
    else
    {
      v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
      v19 = m_length;
      if ( this->m_dir != 1.0 )
        v19 = -m_length;
    }
    CPathTrack::LookAhead(this->m_ppath, &nextFront, v19, 0, &pNextNode);
    nextFront.z = nextFront.z + this->m_height;
    v12 = CBaseEntity::GetLocalOrigin(this);
    v13 = nextFront.x - v12->x;
    v14 = nextFront.y - v12->y;
    v15 = nextFront.z - v12->z;
    v16 = v11 == this->m_dir;
    vecFaceDir.x = v13;
    vecFaceDir.y = v14;
    vecFaceDir.z = v15;
    if ( !v16 )
    {
      vecFaceDir.x = -v13;
      vecFaceDir.y = -v14;
      vecFaceDir.z = -v15;
    }
    VectorAngles(&vecFaceDir, &angles);
    FixupAngles(&angles);
    if ( this->m_bManualSpeedChanges
      && pNextNode != 0
      && CPathTrack::GetOrientationType(pNextNode) == TrackOrientationType_t::TrackOrientation_FacePathAngles )
    {
      curAngles = CPathTrack::GetOrientation(pNextNode, v11 == this->m_dir);
      angles = curAngles;
    }
    curAngles = *CBaseEntity::GetLocalAngles(this);
    FixupAngles(&curAngles);
    if ( pPrev == 0 || vecFaceDir.x == 0.0 && vecFaceDir.y == 0.0 )
      angles = curAngles;
    CFuncTrackTrain::DoUpdateOrientation(this, &curAngles, &angles, v6, v17, v18);
  }
}


// CFuncTrackTrain::UpdateOrientationBlend  (line 1985, @0x00000000023cdd00, libserver.so)  // inlines: FastSqrt, IsDirForward, Length, SimpleSpline, SimpleSplineRemapVal, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator!=, operator-, operator=
// calls: CPathTrack::GetOrientation, FixupAngles, CBaseEntity::GetLocalOrigin, AngleQuaternion, QuaternionAngleDiff, CBaseEntity::GetLocalAngles, CFuncTrackTrain::DoUpdateOrientation, QuaternionSlerp, QuaternionAngles
// callers: CFuncTrackTrain::UpdateTrainOrientation
void __fastcall CFuncTrackTrain::UpdateOrientationBlend(
        CFuncTrackTrain *const this,
        TrainOrientationType_t eOrientationType,
        CPathTrack *pPrev,
        CPathTrack *pNext,
        const Vector *const nextPos,
        float flInterval)
{
  const Vector *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  const QAngle *LocalAngles; // rax
  double v14; // xmm1_8
  float v15; // xmm2_4
  const Vector *LocalOrigin; // r12
  const Vector *v17; // rax
  float flSegmentLen; // [rsp+Ch] [rbp-A4h]
  const Vector *v19; // [rsp+10h] [rbp-A0h]
  float pa; // [rsp+1Ch] [rbp-94h]
  QAngle angPrev; // [rsp+20h] [rbp-90h] BYREF
  QAngle angNext; // [rsp+30h] [rbp-80h] BYREF
  QAngle angNew; // [rsp+40h] [rbp-70h] BYREF
  Quaternion qtPrev; // [rsp+50h] [rbp-60h] BYREF
  Quaternion qtNext; // [rsp+60h] [rbp-50h] BYREF
  Quaternion qtNew; // [rsp+70h] [rbp-40h] BYREF

  angPrev = CPathTrack::GetOrientation(pPrev, this->m_dir == 1.0);
  FixupAngles(&angPrev);
  if ( pNext != 0 )
  {
    *&qtNew.x = CPathTrack::GetOrientation(pNext, this->m_dir == 1.0);
    angNext = *&qtNew.x;
    FixupAngles(&angNext);
  }
  else
  {
    angNext = angPrev;
  }
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    angNext.x = angPrev.x;
  if ( pPrev == 0
    || angNext.x == angPrev.x && angNext.y == angPrev.y && angNext.z == angPrev.z
    || (v19 = CBaseEntity::GetLocalOrigin(pPrev),
        v9 = CBaseEntity::GetLocalOrigin(pNext),
        v10 = v9->z - v19->z,
        (v11 = fsqrt((((v9->x - v19->x) * (v9->x - v19->x)) + ((v9->y - v19->y) * (v9->y - v19->y))) + (v10 * v10))) == 0.0) )
  {
    v12 = 0.0;
  }
  else
  {
    flSegmentLen = v11;
    LocalOrigin = CBaseEntity::GetLocalOrigin(pPrev);
    v17 = CBaseEntity::GetLocalOrigin(this);
    v12 = fsqrt(
            (((v17->x - LocalOrigin->x) * (v17->x - LocalOrigin->x))
           + ((v17->y - LocalOrigin->y) * (v17->y - LocalOrigin->y)))
          + ((v17->z - LocalOrigin->z) * (v17->z - LocalOrigin->z)))
        / flSegmentLen;
  }
  if ( eOrientationType == TrainOrientationType_t::TrainOrientation_EaseInEaseOut )
    v12 = ((3.0 * (v12 * v12)) - (((v12 * v12) + (v12 * v12)) * v12)) + 0.0;
  pa = v12;
  AngleQuaternion(&angPrev, &qtPrev);
  AngleQuaternion(&angNext, &qtNext);
  angNew = angNext;
  if ( QuaternionAngleDiff(&qtPrev, &qtNext) != 0.0 )
  {
    QuaternionSlerp(&qtPrev, &qtNext, pa, &qtNew);
    QuaternionAngles(&qtNew, &angNew);
  }
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    angNew.x = angPrev.x;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  CFuncTrackTrain::DoUpdateOrientation(this, LocalAngles, &angNew, flInterval, v14, v15);
}


// CFuncTrackTrain::DoUpdateOrientation  (line 2056, @0x00000000023cd880, libserver.so)  // inlines: QAngle
// calls: AngleDistance, ApproachAngle, CBaseEntity::SetLocalAngularVelocity
// callers: CFuncTrackTrain::UpdateOrientationAtPathTracks, CFuncTrackTrain::UpdateOrientationBlend
void __fastcall CFuncTrackTrain::DoUpdateOrientation(
        CFuncTrackTrain *const this,
        const QAngle *const curAngles,
        const QAngle *const angles,
        float flInterval,
        double a5,
        float a6)
{
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float m_flBank; // xmm4_4
  float v12; // xmm3_4
  bool v13; // cc
  float z; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float vxb; // [rsp+Ch] [rbp-24h]
  float vx; // [rsp+Ch] [rbp-24h]
  float vxc; // [rsp+Ch] [rbp-24h]
  QAngle vecAngVel; // [rsp+10h] [rbp-20h] BYREF

  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    v8 = AngleDistance(curAngles->y, a6);
    v9 = flInterval;
LABEL_3:
    v10 = 0.0;
    goto LABEL_4;
  }
  vxc = AngleDistance(curAngles->x, a6);
  v8 = AngleDistance(curAngles->y, v19);
  v10 = vxc;
  v9 = flInterval;
  if ( fabs(vxc) < 0.1 )
    goto LABEL_3;
LABEL_4:
  if ( fabs(v8) < 0.1 )
    v8 = 0.0;
  if ( v9 == 0.0 )
    v9 = 0.1;
  vecAngVel.z = this->m_vecAngVelocity.z;
  m_flBank = this->m_flBank;
  v12 = v8 / v9;
  vecAngVel.x = v10 / v9;
  vecAngVel.y = v8 / v9;
  if ( m_flBank != 0.0 )
  {
    if ( v12 < -5.0 )
    {
      z = curAngles->z;
      v16 = m_flBank + m_flBank;
      v17 = z;
      vx = z;
LABEL_15:
      ApproachAngle(v17, v16, z);
      vecAngVel.z = AngleDistance(vx, v18);
      goto LABEL_11;
    }
    v13 = v12 <= 5.0;
    z = curAngles->z;
    if ( !v13 )
    {
      v17 = curAngles->z;
      vx = v17;
      v16 = m_flBank + m_flBank;
      goto LABEL_15;
    }
    vxb = curAngles->z;
    ApproachAngle(vxb, 4.0 * m_flBank, z);
    vecAngVel.z = AngleDistance(vxb, v15) * 4.0;
  }
LABEL_11:
  CBaseEntity::SetLocalAngularVelocity(this, &vecAngVel);
}


// CFuncTrackTrain::TeleportToPathTrack  (line 2113, @0x00000000023ce0d0, libserver.so)  // inlines: IsDirForward, operator=, operator==
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CPathTrack::LookAhead, CPathTrack::GetOrientation, CBaseEntity::SetLocalAngularVelocity
// callers: CFuncTrackTrain::Next
void __fastcall CFuncTrackTrain::TeleportToPathTrack(CFuncTrackTrain *const this, CPathTrack *pTeleport)
{
  vec_t v4; // r13d
  const Vector *LocalOrigin; // rax
  float m_length; // xmm0_4
  vec_t y; // xmm2_4
  vec_t z; // xmm3_4
  bool v9; // zf
  void (__fastcall *v10)(CFuncTrackTrain *const, const Vector *, QAngle *, _QWORD); // r13
  const Vector *v11; // rax
  float x; // [rsp+4h] [rbp-5Ch]
  float v13; // [rsp+8h] [rbp-58h]
  float v14; // [rsp+Ch] [rbp-54h]
  Vector look; // [rsp+10h] [rbp-50h] BYREF
  QAngle nextAngles; // [rsp+20h] [rbp-40h] BYREF
  QAngle v17; // [rsp+30h] [rbp-30h]
  QAngle Orientation; // 0:kr00_12.12

  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CBaseEntity::GetLocalAngles(this)->x)));
  LocalOrigin = CBaseEntity::GetLocalOrigin(pTeleport);
  m_length = this->m_length;
  y = LocalOrigin->y;
  z = LocalOrigin->z;
  look.x = LocalOrigin->x;
  x = look.x;
  look.y = y;
  v13 = y;
  look.z = z;
  v14 = z;
  CPathTrack::LookAhead(pTeleport, &look, m_length, 0, 0);
  if ( (this->m_spawnflags.m_Value & 0x10) != 0 || x == look.x && v13 == look.y && v14 == look.z )
  {
    nextAngles = *CBaseEntity::GetLocalAngles(this);
  }
  else
  {
    Orientation = CPathTrack::GetOrientation(pTeleport, this->m_dir == 1.0);
    v9 = (this->m_spawnflags.m_Value & 1) == 0;
    v17 = Orientation;
    nextAngles = Orientation;
    if ( !v9 )
      nextAngles.x = v4;
  }
  v10 = *(this->_vptr_IHandleEntity + 128);
  v11 = CBaseEntity::GetLocalOrigin(pTeleport);
  v10(this, v11, &nextAngles, 0);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
}


// CFuncTrackTrain::Next  (line 2143, @0x00000000023db170, libserver.so)  // inlines: CVariantBase, FastSqrt, FireOutput, Free, GetDebugName, Length, Vector, VectorAdd, VectorDivide, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator+, operator-, operator/, ~CVariantBase
// calls: CFuncTrackTrain::SoundUpdate, CBaseEntity::GetLocalOrigin, CPathTrack::LookAhead, CBaseEntity::HasDebugBitsSet, CBaseEntity::GetAbsOrigin, NDebugOverlay::Line, NDebugOverlay::Box, CFuncTrackTrain::UpdateTrainVelocity, CFuncTrackTrain::UpdateTrainOrientation, CFuncTrackTrain::ArriveAtNode, CPathTrack::GetNext, CEntityIOOutput::FireOutputInternal (24 total)
// callers: CFuncTrackTrain::Start, CFuncTrackTrain::SetSpeed
// strings: "TRAIN(%s): Speed is 0\n", "TRAIN(%s): Lost path\n"
// globals: CFuncTrackTrain::Next(void), CFuncTrackTrain::DeadEnd(void)
void __fastcall CFuncTrackTrain::Next(CFuncTrackTrain *const this)
{
  const Vector *LocalOrigin; // rax
  float m_flSpeed; // xmm1_4
  CPathTrack *v4; // rdx
  CPathTrack *m_ppath; // rdi
  float v6; // xmm0_4
  CPathTrack *v7; // r12
  const Vector *AbsOrigin; // r14
  const Vector *v9; // rax
  const Vector *v10; // rax
  float v11; // xmm2_4
  float v12; // xmm0_4
  const Vector *v13; // rax
  const Vector *v14; // rax
  const Vector *v15; // r14
  const Vector *v16; // rax
  const Vector *v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  const Vector *v20; // rax
  const Vector *v21; // rax
  CPathTrack *Next; // rax
  float v23; // xmm1_4
  double v24; // xmm1_8
  CGlobalVars *v25; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v27; // xmm0_8
  const char *DebugName; // rax
  const char *v29; // rax
  const Vector *v30; // rax
  float v31; // xmm0_4
  float v32; // xmm4_4
  double v33; // xmm1_8
  float v34; // xmm1_4
  float v35; // [rsp+10h] [rbp-78h]
  float v36; // [rsp+14h] [rbp-74h]
  float v37; // [rsp+18h] [rbp-70h]
  float v38; // [rsp+1Ch] [rbp-6Ch]
  float v39; // [rsp+1Ch] [rbp-6Ch]
  CPathTrack *v40; // [rsp+28h] [rbp-60h] BYREF
  CPathTrack *pNextNext; // [rsp+30h] [rbp-58h] BYREF
  Vector nextPos; // [rsp+38h] [rbp-50h] BYREF
  int v43; // [rsp+44h] [rbp-44h]
  int v44; // [rsp+48h] [rbp-40h]
  CVariant v45; // [rsp+50h] [rbp-38h] BYREF

  if ( this->m_flSpeed == 0.0 )
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg(2, "TRAIN(%s): Speed is 0\n", DebugName);
    CFuncTrackTrain::SoundStop(this);
    return;
  }
  if ( this->m_ppath == 0 )
  {
    v29 = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg(2, "TRAIN(%s): Lost path\n", v29);
    CFuncTrackTrain::SoundStop(this);
    this->m_flSpeed = 0.0;
    return;
  }
  CFuncTrackTrain::SoundUpdate(this);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  m_flSpeed = this->m_flSpeed;
  v4 = *&LocalOrigin->x;
  v40 = 0;
  m_ppath = this->m_ppath;
  v38 = m_flSpeed;
  pNextNext = v4;
  nextPos.x = LocalOrigin->z;
  nextPos.x = nextPos.x - this->m_height;
  v6 = m_flSpeed * 0.1;
  v7 = CPathTrack::LookAhead(m_ppath, &pNextNext, v6, 1, &v40);
  if ( this->m_bManualSpeedChanges && this->m_flDesiredSpeed < 0.0 != v38 < 0.0 )
  {
    if ( v7 != 0 )
    {
      if ( !CBaseEntity::HasDebugBitsSet(this, 4u) )
      {
        nextPos.x = nextPos.x + this->m_height;
        goto LABEL_15;
      }
LABEL_11:
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      v9 = CBaseEntity::GetAbsOrigin(this);
      NDebugOverlay::Line(v9, AbsOrigin, 0xFFu, 0, 0, 1, 0.1);
      v10 = CBaseEntity::GetAbsOrigin(v7);
      v11 = v10->x + 0.0;
      v12 = v10->z + 32.0;
      *(&v45.m_pszString + 1) = v10->y + 0.0;
      v45.m_float = v11;
      *&v45.m_type = v12;
      v13 = CBaseEntity::GetAbsOrigin(v7);
      NDebugOverlay::Line(v13, &v45, 0xFFu, 0, 0, 1, 0.1);
      v45.m_uint64 = 0x4100000041000000LL;
      *&v45.m_type = 1090519040;
      nextPos.z = -8.0;
      v43 = -1056964608;
      v44 = -1056964608;
      v14 = CBaseEntity::GetAbsOrigin(v7);
      NDebugOverlay::Box(v14, &nextPos.z, &v45, 0xFFu, 0, 0, 0.1, 0);
      goto LABEL_12;
    }
    v7 = this->m_ppath;
  }
  if ( !CBaseEntity::HasDebugBitsSet(this, 4u) )
    goto LABEL_14;
  if ( v7 != 0 )
    goto LABEL_11;
LABEL_12:
  if ( v40 != 0 )
  {
    v15 = CBaseEntity::GetAbsOrigin(v40);
    v16 = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Line(v16, v15, 0, 0xFFu, 0, 1, 0.1);
    v17 = CBaseEntity::GetAbsOrigin(v40);
    v18 = v17->x + 0.0;
    v19 = v17->z + 32.0;
    *(&v45.m_pszString + 1) = v17->y + 0.0;
    v45.m_float = v18;
    *&v45.m_type = v19;
    v20 = CBaseEntity::GetAbsOrigin(v40);
    NDebugOverlay::Line(v20, &v45, 0, 0xFFu, 0, 1, 0.1);
    v45.m_uint64 = 0x4100000041000000LL;
    *&v45.m_type = 1090519040;
    nextPos.z = -8.0;
    v43 = -1056964608;
    v44 = -1056964608;
    v21 = CBaseEntity::GetAbsOrigin(v40);
    NDebugOverlay::Box(v21, &nextPos.z, &v45, 0, 255, 0, 0.1, 0);
  }
LABEL_14:
  nextPos.x = nextPos.x + this->m_height;
  if ( v7 == 0 )
  {
    v30 = CBaseEntity::GetLocalOrigin(this);
    v35 = *&pNextNext - v30->x;
    v36 = *(&pNextNext + 1) - v30->y;
    v37 = nextPos.x - v30->z;
    CFuncTrackTrain::SoundStop(this);
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    v31 = fsqrt(((v35 * v35) + (v36 * v36)) + (v37 * v37));
    v32 = this->m_flSpeed;
    this->m_flSpeed = 0.0;
    this->m_oldSpeed = v32;
    if ( v31 <= 0.0 || v32 == 0.0 )
    {
      CFuncTrackTrain::DeadEnd(this);
    }
    else
    {
      v39 = v31 / fabs(v32);
      v45.m_float = v35 * (1.0 / v39);
      *(&v45.m_pszString + 1) = v36 * (1.0 / v39);
      *&v45.m_type = v37 * (1.0 / v39);
      CBaseEntity::SetLocalVelocity(this, &v45);
      this->m_pfnMoveDone.__pfn = CFuncTrackTrain::DeadEnd;
      this->m_pfnMoveDone.__delta = 0;
      CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v33, 0);
      CBaseEntity::SetMoveDoneTime(this, v39, v34);
    }
    return;
  }
LABEL_15:
  CFuncTrackTrain::UpdateTrainVelocity(this, v7, v40, &pNextNext, gpGlobals->frametime);
  CFuncTrackTrain::UpdateTrainOrientation(this, v7, v40, &pNextNext, LODWORD(gpGlobals->frametime));
  if ( this->m_ppath != v7 )
  {
    this->m_ppath = v7;
    CFuncTrackTrain::ArriveAtNode(this, v7);
    Next = CPathTrack::GetNext(v7);
    if ( Next != 0 && (Next->m_spawnflags.m_Value & 0x10) != 0 )
      CFuncTrackTrain::TeleportToPathTrack(this, Next);
  }
  v45.m_type = 0;
  v45.m_flags = 0;
  v45.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnNext, v7, this, &v45, 0.0);
  if ( (v45.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v45.m_uint64);
  CBaseEntity::ThinkSet(this, CFuncTrackTrain::Next, 0.0, 0, 0);
  CBaseEntity::SetMoveDoneTime(this, 0.5, v23);
  v25 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    *&v27 = LODWORD(v25->m_flCurrentTime);
  }
  else
  {
    v27 = 0.0;
  }
  CBaseEntity::SetNextThink(this, v27, v24, 0);
  this->m_pfnMoveDone.__pfn = 0;
  this->m_pfnMoveDone.__delta = 0;
}


// CFuncTrackTrain::FirePassInputs  (line 2269, @0x00000000023d7550, libserver.so)  // inlines: CVariantBase, Free, ~CVariantBase
// calls: CPathTrack::GetNext, CEntityInstance::AcceptInput, CPathTrack::GetPrevious, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFuncTrackTrain::ArriveAtNode
void __fastcall CFuncTrackTrain::FirePassInputs(
        CFuncTrackTrain *const this,
        CPathTrack *pStart,
        CPathTrack *pEnd,
        bool forward)
{
  CPathTrack *v5; // r13
  CPathTrack *v7; // rbx
  CPathTrack *Next; // rax
  variant_t emptyVariant; // [rsp+0h] [rbp-40h] BYREF

  v5 = pEnd;
  v7 = pStart;
  if ( !forward )
  {
    v5 = pStart;
    v7 = pEnd;
  }
  emptyVariant.m_uint64 = 0;
  emptyVariant.m_type = 0;
  emptyVariant.m_flags = 0;
  while ( v7 != v5 && v7 != 0 )
  {
    CEntityInstance::AcceptInput(v7, "InPass", this, this, &emptyVariant, 0);
    if ( forward )
      Next = CPathTrack::GetNext(v7);
    else
      Next = CPathTrack::GetPrevious(v7);
    v7 = Next;
  }
  if ( (emptyVariant.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
}


// CFuncTrackTrain::DeadEnd  (line 2290, @0x00000000023d7620, libserver.so)  // inlines: CVariantBase, Free, GetDebugName, ~CVariantBase
// calls: CEntityIdentity::GetDebugName, DevMsg, CPathTrack::GetNext, CPathTrack::ValidPath, CBaseEntity::SetLocalVelocity, CBaseEntity::SetLocalAngularVelocity, CEntityInstance::AcceptInput, CPathTrack::GetPrevious, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CFuncTrackTrain::Next
// strings: "TRAIN(%s): Dead end ", "at %s\n"
void __fastcall CFuncTrackTrain::DeadEnd(CFuncTrackTrain *const this)
{
  CPathTrack *m_ppath; // rbx
  const char *DebugName; // rax
  CPathTrack *Next; // rax
  CPathTrack *v5; // rax
  const char *v6; // rax
  CPathTrack *Previous; // rax
  CPathTrack *v8; // rax
  variant_t emptyVariant; // [rsp+0h] [rbp-30h] BYREF

  m_ppath = this->m_ppath;
  DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
  DevMsg(2, "TRAIN(%s): Dead end ", DebugName);
  if ( m_ppath != 0 )
  {
    if ( this->m_oldSpeed >= 0.0 )
    {
      while ( 1 )
      {
        Next = CPathTrack::GetNext(m_ppath);
        v5 = CPathTrack::ValidPath(Next, 1);
        if ( v5 == 0 )
          break;
        m_ppath = v5;
      }
    }
    else
    {
      while ( 1 )
      {
        Previous = CPathTrack::GetPrevious(m_ppath);
        v8 = CPathTrack::ValidPath(Previous, 1);
        if ( v8 == 0 )
          break;
        m_ppath = v8;
      }
    }
    CBaseEntity::SetLocalVelocity(this, &vec3_origin);
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    v6 = CEntityIdentity::GetDebugName(m_ppath->m_pEntity);
    DevMsg(2, "at %s\n", v6);
    emptyVariant.m_type = 0;
    emptyVariant.m_flags = 0;
    emptyVariant.m_uint64 = 0;
    CEntityInstance::AcceptInput(m_ppath, "InPass", this, this, &emptyVariant, 0);
    if ( (emptyVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
  }
  else
  {
    CBaseEntity::SetLocalVelocity(this, &vec3_origin);
    CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
    DevMsg(2, "\n");
  }
}


// CFuncTrackTrain::SetControls  (line 2338, @0x00000000023ce230, libserver.so)  // inlines: VectorAdd, WorldAlignMaxs, WorldAlignMins, operator+, operator=
// calls: CBaseEntity::GetLocalOrigin
// callers: CFuncTrainControls::Find
void __fastcall CFuncTrackTrain::SetControls(CFuncTrackTrain *const this, CBaseEntity *pControls)
{
  const Vector *LocalOrigin; // rax
  CCollisionProperty *m_pCollision; // rdi
  float x; // xmm0_4
  float y; // xmm2_4
  float z; // xmm1_4
  const Vector *v9; // rax
  vec_t v10; // xmm3_4
  vec_t v11; // xmm5_4
  CCollisionProperty *v12; // rdi
  const Vector *v13; // rax
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  float v16; // [rsp+4h] [rbp-1Ch]
  float v17; // [rsp+4h] [rbp-1Ch]
  vec_t v18; // [rsp+8h] [rbp-18h]
  float v19; // [rsp+8h] [rbp-18h]
  vec_t v20; // [rsp+Ch] [rbp-14h]
  float v21; // [rsp+Ch] [rbp-14h]

  LocalOrigin = CBaseEntity::GetLocalOrigin(pControls);
  m_pCollision = pControls->m_pCollision;
  x = LocalOrigin->x;
  y = LocalOrigin->y;
  z = LocalOrigin->z;
  if ( m_pCollision != 0 )
  {
    v16 = LocalOrigin->x;
    v18 = LocalOrigin->y;
    v20 = LocalOrigin->z;
    v9 = (*(m_pCollision->_vptr_ICollideable + 1))(m_pCollision);
    z = v20;
    y = v18;
    x = v16;
  }
  else
  {
    v9 = &vec3_origin;
  }
  v10 = v9->z + z;
  v11 = v9->x + x;
  this->m_controlMins.y = v9->y + y;
  this->m_controlMins.z = v10;
  this->m_controlMins.x = v11;
  v12 = pControls->m_pCollision;
  if ( v12 != 0 )
  {
    v17 = x;
    v19 = y;
    v21 = z;
    v13 = (*(v12->_vptr_ICollideable + 2))(v12);
    z = v21;
    y = v19;
    x = v17;
  }
  else
  {
    v13 = &vec3_origin;
  }
  v14 = z + v13->z;
  v15 = x + v13->x;
  this->m_controlMaxs.y = y + v13->y;
  this->m_controlMaxs.z = v14;
  this->m_controlMaxs.x = v15;
}


// CFuncTrackTrain::OnControls  (line 2350, @0x00000000023bc290, libserver.so)  // inlines: VMul3x3Transpose, VectorSubtract, operator-
// calls: CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles, SetupMatrixAngles
bool __fastcall CFuncTrackTrain::OnControls(CFuncTrackTrain *const this, CBaseEntity *pTest)
{
  const Vector *LocalOrigin; // r12
  const Vector *v5; // rax
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  bool v9; // r12
  const QAngle *LocalAngles; // rax
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // [rsp+4h] [rbp-6Ch]
  float v16; // [rsp+8h] [rbp-68h]
  float v17; // [rsp+Ch] [rbp-64h]
  VMatrix tmp; // [rsp+10h] [rbp-60h] BYREF

  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v5 = CBaseEntity::GetLocalOrigin(pTest);
  x = LocalOrigin->x;
  y = LocalOrigin->y;
  z = LocalOrigin->z;
  v9 = 0;
  if ( (this->m_spawnflags.m_Value & 2) == 0 )
  {
    v15 = v5->x - x;
    v16 = v5->y - y;
    v17 = v5->z - z;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    SetupMatrixAngles(&tmp, LocalAngles);
    v12 = ((tmp.m[0][0] * v15) + (tmp.m[1][0] * v16)) + (tmp.m[2][0] * v17);
    if ( v12 >= this->m_controlMins.x )
    {
      v13 = ((tmp.m[0][1] * v15) + (tmp.m[1][1] * v16)) + (tmp.m[2][1] * v17);
      if ( v13 >= this->m_controlMins.y )
      {
        v14 = ((v15 * tmp.m[0][2]) + (v16 * tmp.m[1][2])) + (v17 * tmp.m[2][2]);
        if ( v14 >= this->m_controlMins.z && this->m_controlMaxs.x >= v12 && this->m_controlMaxs.y >= v13 )
          return this->m_controlMaxs.z >= v14;
      }
    }
  }
  return v9;
}


// CFuncTrackTrain::Find  (line 2378, @0x00000000023dbb70, libserver.so)  // inlines: CUtlSymbolLarge, ClassMatches, FClassnameIs, VectorSubtract, curtime, operator-, operator=
// calls: CGameEntitySystem::FindEntityByName, CEntityIdentity::ClassMatches, CBaseEntity::GetLocalOrigin, CPathTrack::LookAhead, CBaseEntity::GetLocalAngles, CFuncTrackTrain::ArriveAtNode, VectorAngles, Warning, CBaseEntity::SetNextThink, CBaseEntity::ThinkSet, CFuncTrackTrain::SoundUpdate
// strings: "env_portal_path_track", "func_track_train must be on a path of path_track\n"
// globals: CFuncTrackTrain::Next(void)
void __fastcall CFuncTrackTrain::Find(CFuncTrackTrain *const this)
{
  CPathTrack *EntityByName; // rax
  const Vector *LocalOrigin; // rax
  CPathTrack *m_ppath; // rdi
  float m_length; // xmm0_4
  float m_height; // xmm0_4
  bool v7; // zf
  float v8; // xmm1_4
  float v9; // xmm0_4
  double v10; // xmm1_8
  CPathTrack *v11; // rax
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8
  Vector nextPos; // [rsp+10h] [rbp-60h] BYREF
  Vector look; // [rsp+20h] [rbp-50h] BYREF
  QAngle nextAngles; // [rsp+30h] [rbp-40h] BYREF
  Vector iszName[4]; // [rsp+40h] [rbp-30h] BYREF

  *&iszName[0].x = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, iszName, this, 0, 0, 0);
  this->m_ppath = EntityByName;
  if ( EntityByName != 0 )
  {
    if ( CEntityIdentity::ClassMatches(EntityByName->m_pEntity, "path_track")
      || (v11 = this->m_ppath) != 0 && CEntityIdentity::ClassMatches(v11->m_pEntity, "env_portal_path_track") )
    {
      LocalOrigin = CBaseEntity::GetLocalOrigin(this->m_ppath);
      m_ppath = this->m_ppath;
      m_length = this->m_length;
      *&nextPos.x = *&LocalOrigin->x;
      *&LocalOrigin = LocalOrigin->z;
      *&look.x = *&nextPos.x;
      LODWORD(nextPos.z) = LocalOrigin;
      LODWORD(look.z) = LocalOrigin;
      CPathTrack::LookAhead(m_ppath, &look, m_length, 0, 0);
      m_height = this->m_height;
      v7 = (this->m_spawnflags.m_Value & 0x10) == 0;
      v8 = nextPos.z + m_height;
      v9 = m_height + look.z;
      nextPos.z = v8;
      look.z = v9;
      if ( v7 )
      {
        iszName[0].z = v9 - v8;
        iszName[0].y = look.y - nextPos.y;
        iszName[0].x = look.x - nextPos.x;
        VectorAngles(iszName, &nextAngles);
        if ( (this->m_spawnflags.m_Value & 1) != 0 )
          nextAngles.x = 0.0;
      }
      else
      {
        nextAngles = *CBaseEntity::GetLocalAngles(this);
      }
      (*(this->_vptr_IHandleEntity + 128))(this, &nextPos, &nextAngles, 0);
      CFuncTrackTrain::ArriveAtNode(this, this->m_ppath);
      if ( this->m_flSpeed != 0.0 )
      {
        v12 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, 0.0);
          }
          HIDWORD(v14) = 0;
          *&v14 = v12->m_flCurrentTime + 0.1;
        }
        else
        {
          *&v14 = 1036831949;
        }
        CBaseEntity::SetNextThink(this, v14, v10, 0);
        CBaseEntity::ThinkSet(this, CFuncTrackTrain::Next, 0.0, 0, 0);
        CFuncTrackTrain::SoundUpdate(this);
      }
    }
    else
    {
      Warning("func_track_train must be on a path of path_track\n");
      this->m_ppath = 0;
    }
  }
}


// CFuncTrackTrain::NearestPath  (line 2431, @0x00000000023d5260, libserver.so)  // inlines: ClassMatches, ConvertToExternalMemory, FClassnameIs, FastSqrt, GetDebugName, Length, NextEntity, Purge, Purge_FixedGrowable, RemoveAll, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, ~CEntitySphereQuery, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CBaseEntity::GetAbsOrigin, CEntitySphereQuery::CEntitySphereQuery, CEntityIdentity::ClassMatches, CEntitySphereQuery::GetCurrentEntity, CEntityIdentity::GetDebugName, DevMsg, CPathTrack::GetNext, CBaseEntity::GetLocalOrigin, CBaseEntity::SetMoveDoneTime, CUtlMemory<COverlapHit, int>::Purge, Msg, CBaseEntity::ThinkSet (15 total)
// callers: CFuncTrackTrain::OnRestore
// strings: "TRAIN: %s, Nearest track is %s\n", "Can't find a nearby track !!!\n"
// globals: CFuncTrackTrain::Next(void)
void __fastcall CFuncTrackTrain::NearestPath(CFuncTrackTrain *const this)
{
  CPathTrack *v1; // r15
  const Vector *AbsOrigin; // rax
  float v4; // xmm1_4
  const Vector *v5; // r12
  const Vector *v6; // rax
  float v7; // xmm0_4
  CBaseEntity *CurrentEntity; // rax
  const CBaseEntity *v9; // rbx
  uint32 v10; // eax
  const char *DebugName; // rbx
  const char *v12; // rax
  CPathTrack *Next; // rax
  float v14; // xmm1_4
  CPathTrack *v15; // rbx
  const Vector *LocalOrigin; // r12
  const Vector *v17; // rax
  const Vector *v18; // r12
  const Vector *v19; // rax
  bool v20; // zf
  float closest; // [rsp+0h] [rbp-1080h]
  float closesta; // [rsp+0h] [rbp-1080h]
  CEntitySphereQuery sphere; // [rsp+20h] [rbp-1060h] BYREF
  unsigned __int64 v24; // [rsp+1048h] [rbp-38h]

  v1 = 0;
  v24 = __readfsqword(0x28u);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CEntitySphereQuery::CEntitySphereQuery(&sphere, AbsOrigin, 1024.0, v4);
  closest = 1024.0;
  while ( 1 )
  {
    CurrentEntity = CEntitySphereQuery::GetCurrentEntity(&sphere);
    v9 = CurrentEntity;
    if ( CurrentEntity == 0 )
      break;
    if ( (CurrentEntity->m_fFlags.m_Value & 0x2080) == 0
      && CEntityIdentity::ClassMatches(CurrentEntity->m_pEntity, "path_track") )
    {
      v5 = CBaseEntity::GetAbsOrigin(v9);
      v6 = CBaseEntity::GetAbsOrigin(this);
      v7 = fsqrt(
             (((v6->x - v5->x) * (v6->x - v5->x)) + ((v6->y - v5->y) * (v6->y - v5->y)))
           + ((v6->z - v5->z) * (v6->z - v5->z)));
      if ( closest > v7 )
      {
        closest = v7;
        v1 = v9;
      }
    }
    ++sphere.m_listIndex;
  }
  sphere.m_results.m_list.m_Size = 0;
  v10 = sphere.m_results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( sphere.m_results.m_list.m_Memory.m_nAllocationCount >= 0
    && sphere.m_results.m_list.m_Memory.m_pMemory != &sphere.m_results.m_list.m_Memory.m_FixedMemory )
  {
    if ( sphere.m_results.m_list.m_Memory.m_pMemory != 0 && v10 == 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
LABEL_13:
    if ( v1 != 0 )
      goto LABEL_14;
LABEL_22:
    Msg("Can't find a nearby track !!!\n");
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
    return;
  }
  if ( v10 != 0 )
    goto LABEL_13;
  CUtlMemory<COverlapHit,int>::Purge(&sphere.m_results.m_list.m_Memory);
  if ( v1 == 0 )
    goto LABEL_22;
LABEL_14:
  DebugName = CEntityIdentity::GetDebugName(v1->m_pEntity);
  v12 = CEntityIdentity::GetDebugName(this->m_pEntity);
  DevMsg(2, "TRAIN: %s, Nearest track is %s\n", v12, DebugName);
  Next = CPathTrack::GetNext(v1);
  v15 = Next;
  if ( Next != 0 )
  {
    LocalOrigin = CBaseEntity::GetLocalOrigin(Next);
    v17 = CBaseEntity::GetLocalOrigin(this);
    closesta = fsqrt(
                 (((v17->x - LocalOrigin->x) * (v17->x - LocalOrigin->x))
                + ((v17->y - LocalOrigin->y) * (v17->y - LocalOrigin->y)))
               + ((v17->z - LocalOrigin->z) * (v17->z - LocalOrigin->z)));
    v18 = CBaseEntity::GetLocalOrigin(v1);
    v19 = CBaseEntity::GetLocalOrigin(this);
    v14 = (v19->z - v18->z) * (v19->z - v18->z);
    if ( fsqrt((((v19->x - v18->x) * (v19->x - v18->x)) + ((v19->y - v18->y) * (v19->y - v18->y))) + v14) > closesta )
      v1 = v15;
  }
  v20 = this->m_flSpeed == 0.0;
  this->m_ppath = v1;
  if ( !v20 )
  {
    CBaseEntity::SetMoveDoneTime(this, 0.1, v14);
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CFuncTrackTrain::Next;
  }
}


// CFuncTrackTrain::OnRestore  (line 2478, @0x00000000023d55c0, libserver.so)
// calls: CBaseModelEntity::OnRestore, CFuncTrackTrain::NearestPath, CBaseEntity::ThinkSet
void __fastcall CFuncTrackTrain::OnRestore(CFuncTrackTrain *const this)
{
  CBaseModelEntity::OnRestore(this);
  if ( this->m_ppath == 0 )
  {
    CFuncTrackTrain::NearestPath(this);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
}


// CFuncTrackTrain::Instance  (line 2489, @0x00000000023ce410, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches
// strings: "func_tracktrain"
CFuncTrackTrain *__fastcall CFuncTrackTrain::Instance(CBaseEntity *pEntity)
{
  if ( pEntity != 0 && CEntityIdentity::ClassMatches(pEntity->m_pEntity, "func_tracktrain") )
    return pEntity;
  else
    return 0;
}


// CFuncTrackTrain::CreateVPhysics  (line 2497, @0x00000000023bc100, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncTrackTrain::CreateVPhysics(CFuncTrackTrain *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  return 1;
}


// CFuncTrackTrain::Precache  (line 2507, @0x00000000023e3c30, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues, CBaseEntity::PrecacheScriptSound
void __fastcall CFuncTrackTrain::Precache(CFuncTrackTrain *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  if ( this->m_iszSoundMove.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_iszSoundMove.u.m_pAsString, pContext);
  if ( this->m_iszSoundMovePing.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_iszSoundMovePing.u.m_pAsString, pContext);
  if ( this->m_iszSoundStart.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_iszSoundStart.u.m_pAsString, pContext);
  if ( this->m_iszSoundStop.u.m_Id != 0 )
    CBaseEntity::PrecacheScriptSound(this->m_iszSoundStop.u.m_pAsString, pContext);
}


// CFuncTrackTrain::UpdateOnRemove  (line 2536, @0x00000000023ccb10, libserver.so)
// calls: CFuncTrackTrain::SoundStop, CBaseModelEntity::UpdateOnRemove
void __fastcall CFuncTrackTrain::UpdateOnRemove(CFuncTrackTrain *const this)
{
  CFuncTrackTrain::SoundStop(this);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CFuncTrackTrain::MoveDone  (line 2542, @0x00000000023bfbe0, libserver.so)  // inlines: Init, MoveDone
void __fastcall CFuncTrackTrain::MoveDone(CFuncTrackTrain *const this)
{
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v2; // rdi

  pfn = this->m_pfnMoveDone.__pfn;
  this->m_lastBlockPos.x = 0.0;
  this->m_lastBlockPos.y = 0.0;
  this->m_lastBlockPos.z = 0.0;
  this->m_lastBlockTick = -1;
  if ( pfn != 0 )
  {
    v2 = (this + this->m_pfnMoveDone.__delta);
    if ( (pfn & 1) != 0 )
      (*(v2->_vptr_IHandleEntity + pfn - 1))();
    else
      pfn(v2);
  }
}


// CFuncTrainControls::~CFuncTrainControls  (line 2555, @0x00000000023e93b0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTrainControls::~CFuncTrainControls(CFuncTrainControls *const this)
{
  this->_vptr_IHandleEntity = &off_40BC2B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTrainControls::~CFuncTrainControls  (line 2555, @0x00000000023e93d0, libserver.so)  // inlines: ~CFuncTrainControls
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTrainControls::~CFuncTrainControls(CFuncTrainControls *const this)
{
  this->_vptr_IHandleEntity = &off_40BC2B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTrainControls::GetEntityClass  (line 2557, @0x00000000023e5d00, libserver.so)
CEntityClass *__cdecl CFuncTrainControls::GetEntityClass()
{
  return g_pEntityCFuncTrainControlsClass;
}


// CFuncTrainControls::Schema_DynamicBinding  (line 2557, @0x00000000023e5d10, libserver.so)
// globals: CFuncTrainControls::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrainControls::Schema_DynamicBinding(
        const CFuncTrainControls *const this)
{
  return CFuncTrainControls::s_pSchemaBinding;
}


// CFuncTrainControls::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2557, @0x00000000023e5d20, libserver.so)
// globals: CFuncTrainControls::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrainControls::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  return CFuncTrainControls::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTrainControls::CEntityInstanceEntityClass::DestructInstance  (line 2557, @0x00000000023e5d30, libserver.so)  // inlines: Destruct<CFuncTrainControls>
void __fastcall CFuncTrainControls::CEntityInstanceEntityClass::DestructInstance(
        CFuncTrainControls::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTrainControls::CEntityInstanceEntityClass::FreeInstance  (line 2557, @0x00000000023e5d50, libserver.so)
void __fastcall CFuncTrainControls::CEntityInstanceEntityClass::FreeInstance(
        CFuncTrainControls::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTrainControls::CEntityInstanceEntityClass::CanAllocate  (line 2557, @0x00000000023e5d70, libserver.so)
bool __fastcall CFuncTrainControls::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTrainControls::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2557, @0x00000000023e5d80, libserver.so)
// globals: CFuncTrainControls::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTrainControls::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  return CFuncTrainControls::s_pSchemaBinding;
}


// CFuncTrainControls::CEntityInstanceEntityClass::AllocateInstance  (line 2557, @0x00000000023e81f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTrainControls::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CFuncTrainControls::CEntityInstanceEntityClass::ConstructInstance  (line 2557, @0x00000000023e8d80, libserver.so)  // inlines: CFuncTrainControls, Construct<CFuncTrainControls>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncTrainControls::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTrainControls::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_40BC2B0;
  }
  return p;
}


// CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2557, @0x00000000023ea8d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2557, @0x00000000023ea8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrainControls::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTrainControls::GetEntityClassInternal  (line 2557, @0x00000000023f0ca0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_traincontrols", "CFuncTrainControls"
// globals: `guard variable for'CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass, CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass, __dso_handle, CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo, CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo
CEntityClass *__cdecl CFuncTrainControls::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass);
    CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass._vptr_CEntityClass = off_40BC230;
    __cxa_guard_release(&`guard variable for'CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass);
    __cxa_atexit(
      CFuncTrainControls::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTrainControlsClass != 0 )
    return &CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass;
  if ( `guard variable for'CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo,
      "CFuncTrainControls",
      "func_traincontrols",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo);
  }
  CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass.m_pClassInfo = &CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo;
  CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass.m_pBaseClassInfo = CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTrainControlsClass = &CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass;
  CFuncTrainControls::GetEntityClassInfo(void)::g_EntityCFuncTrainControlsClassInfo.m_pClass = &CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass;
  CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTrainControlsClass->m_pComponentOverrides = 0;
  return &CFuncTrainControls::GetEntityClassInternal(void)::g_EntityCFuncTrainControlsClass;
}


// CFuncTrainControls::GetDataDescMap  (line 2565, @0x00000000023bb1d0, libserver.so)
// globals: CFuncTrainControls::m_DataMap
datamap_t *__fastcall CFuncTrainControls::GetDataDescMap(CFuncTrainControls *const this)
{
  return &CFuncTrainControls::m_DataMap;
}


// CFuncTrainControls::AddDatadescMetadataKeys  (line 2565, @0x00000000023ce450, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTrainControls::GetEntityClass(void)
void __fastcall CFuncTrainControls::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTrainControls::GetEntityClass);
}


// CFuncTrainControls::GetBaseMap  (line 2565, @0x00000000023ce470, libserver.so)
datamap_t *__cdecl CFuncTrainControls::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncTrainControls>  (line 2565, @0x00000000023de2c0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTrainControls"
// globals: `guard variable for'DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder, `guard variable for'DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc, CFuncTrainControls::GetEntityClass(void), CFuncTrainControls::m_DataMap, DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTrainControls>(CFuncTrainControls *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_pszBase = "CFuncTrainControls";
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder,
      &_dso_handle);
  }
  CFuncTrainControls::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_pszBase), "Find");
    m_Size = DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc);
  }
  CFuncTrainControls::m_DataMap.dataNumFields = 1;
  CFuncTrainControls::m_DataMap.dataDesc = &DataMapInit<CFuncTrainControls>(CFuncTrainControls *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTrainControls::m_DataMap, CFuncTrainControls::GetEntityClass);
  return &CFuncTrainControls::m_DataMap;
}


// CFuncTrainControls::Find  (line 2573, @0x00000000023ce340, libserver.so)  // inlines: CUtlSymbolLarge, ClassMatches, FClassnameIs, String, ToCStr
// calls: CGameEntitySystem::FindEntityByName, CEntityIdentity::ClassMatches, CFuncTrackTrain::SetControls, CBaseEntity::ThinkSet, Msg
// strings: "func_tracktrain", "No train %s\n"
void __fastcall CFuncTrainControls::Find(CFuncTrainControls *const this)
{
  CFuncTrackTrain *v2; // rbx
  CBaseEntity *EntityByName; // rax
  const char *m_pAsString; // rsi
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  v2 = 0;
  while ( 1 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v2, &iszName, this, 0, 0, 0);
    v2 = EntityByName;
    if ( EntityByName == 0 )
      break;
    if ( CEntityIdentity::ClassMatches(EntityByName->m_pEntity, "func_tracktrain") )
    {
      CFuncTrackTrain::SetControls(v2, this);
      CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
      return;
    }
  }
  m_pAsString = "";
  if ( this->m_target.u.m_Id != 0 )
    m_pAsString = this->m_target.u.m_pAsString;
  Msg("No train %s\n", m_pAsString);
}


// CFuncTrainControls::Spawn  (line 2595, @0x00000000023c1000, libserver.so)  // inlines: SetSolid, curtime
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CFuncTrainControls::Find(void)
void __fastcall CFuncTrainControls::Spawn(CFuncTrainControls *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  double v5; // xmm0_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::AddEffects(this, 32);
  CBaseEntity::ThinkSet(this, CFuncTrainControls::Find, 0.0, 0, 0);
  v5 = 0.0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v5 = LODWORD(v6->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v5, v4, 0);
}


// CFuncTrackChange::~CFuncTrackChange  (line 2632, @0x00000000023f05a0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat, ~CFuncPlatRot
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTrackChange::~CFuncTrackChange(CFuncTrackChange *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTrackChange::~CFuncTrackChange  (line 2632, @0x00000000023f06a0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat, ~CFuncPlatRot, ~CFuncTrackChange
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTrackChange::~CFuncTrackChange(CFuncTrackChange *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTrackChange::GetEntityClass  (line 2634, @0x00000000023e5d90, libserver.so)
CEntityClass *__cdecl CFuncTrackChange::GetEntityClass()
{
  return g_pEntityCFuncTrackChangeClass;
}


// CFuncTrackChange::Schema_DynamicBinding  (line 2634, @0x00000000023e5da0, libserver.so)
// globals: CFuncTrackChange::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrackChange::Schema_DynamicBinding(const CFuncTrackChange *const this)
{
  return CFuncTrackChange::s_pSchemaBinding;
}


// CFuncTrackChange::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2634, @0x00000000023e5db0, libserver.so)
// globals: CFuncTrackChange::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrackChange::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackChange::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTrackChange::CEntityInstanceEntityClass::DestructInstance  (line 2634, @0x00000000023e5dc0, libserver.so)  // inlines: Destruct<CFuncTrackChange>
void __fastcall CFuncTrackChange::CEntityInstanceEntityClass::DestructInstance(
        CFuncTrackChange::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTrackChange::CEntityInstanceEntityClass::FreeInstance  (line 2634, @0x00000000023e5de0, libserver.so)
void __fastcall CFuncTrackChange::CEntityInstanceEntityClass::FreeInstance(
        CFuncTrackChange::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTrackChange::CEntityInstanceEntityClass::CanAllocate  (line 2634, @0x00000000023e5e00, libserver.so)
bool __fastcall CFuncTrackChange::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTrackChange::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2634, @0x00000000023e5e10, libserver.so)
// globals: CFuncTrackChange::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTrackChange::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackChange::s_pSchemaBinding;
}


// CFuncTrackChange::CEntityInstanceEntityClass::AllocateInstance  (line 2634, @0x00000000023e8230, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTrackChange::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1416);
  memset(v1, 0, 0x588u);
  return v1;
}


// CFuncTrackChange::CEntityInstanceEntityClass::ConstructInstance  (line 2634, @0x00000000023e9940, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CFuncPlat, CFuncPlatRot, CFuncTrackChange, CHandle, CUtlSymbolLarge, Construct<CFuncTrackChange>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncTrackChange::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTrackChange::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *(p + 160) = 0;
    *(p + 161) = 0;
    *(p + 165) = 0;
    *p = &off_40BC9F0;
    *(p + 172) = 0;
    *(p + 173) = 0;
    *(p + 174) = 0;
  }
  return p;
}


// CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2634, @0x00000000023ea6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2634, @0x00000000023ea710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackChange::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTrackChange::GetEntityClassInfo  (line 2634, @0x00000000023f0df0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CFuncPlat::GetEntityClassInfo
// callers: CFuncTrackAuto::GetEntityClassInternal
// strings: "func_trackchange", "CFuncTrackChange", "func_platrot", "CFuncPlatRot"
// globals: `guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo, CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo, `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo, CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo
CEntityClassInfo *__cdecl CFuncTrackChange::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo != 0 )
    return &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo) == 0 )
    return &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo;
  if ( `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo) != 0 )
  {
    EntityClassInfo = CFuncPlat::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo,
      "CFuncPlatRot",
      "func_platrot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo,
    "CFuncTrackChange",
    "func_trackchange",
    0,
    &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo);
  return &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo;
}


// CFuncTrackChange::GetEntityClassInternal  (line 2634, @0x00000000023f0ec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CFuncPlat::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_trackchange", "CFuncTrackChange", "func_platrot", "CFuncPlatRot"
// globals: `guard variable for'CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass, CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass, __dso_handle, CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo, CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo, `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo, CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo
CEntityClass *__cdecl CFuncTrackChange::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass);
    CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass._vptr_CEntityClass = off_40BC970;
    __cxa_guard_release(&`guard variable for'CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass);
    __cxa_atexit(
      CFuncTrackChange::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTrackChangeClass != 0 )
    return &CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass;
  if ( `guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo) != 0 )
    {
      EntityClassInfo = CFuncPlat::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo,
        "CFuncPlatRot",
        "func_platrot",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo,
      "CFuncTrackChange",
      "func_trackchange",
      0,
      &CFuncPlatRot::GetEntityClassInfo(void)::g_EntityCFuncPlatRotClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo);
  }
  CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass.m_pClassInfo = &CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo;
  CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass.m_pBaseClassInfo = CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTrackChangeClass = &CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass;
  CFuncTrackChange::GetEntityClassInfo(void)::g_EntityCFuncTrackChangeClassInfo.m_pClass = &CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass;
  CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTrackChangeClass->m_pComponentOverrides = 0;
  return &CFuncTrackChange::GetEntityClassInternal(void)::g_EntityCFuncTrackChangeClass;
}


// CFuncTrackChange::IsTogglePlat  (line 2651, @0x00000000023e5e20, libserver.so)
bool __fastcall CFuncTrackChange::IsTogglePlat(CFuncTrackChange *const this)
{
  return 1;
}


// CFuncTrackChange::GetDataDescMap  (line 2672, @0x00000000023bb1e0, libserver.so)
// globals: CFuncTrackChange::m_DataMap
datamap_t *__fastcall CFuncTrackChange::GetDataDescMap(CFuncTrackChange *const this)
{
  return &CFuncTrackChange::m_DataMap;
}


// CFuncTrackChange::AddDatadescMetadataKeys  (line 2672, @0x00000000023ce480, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTrackChange::GetEntityClass(void)
void __fastcall CFuncTrackChange::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTrackChange::GetEntityClass);
}


// CFuncTrackChange::GetBaseMap  (line 2672, @0x00000000023ce4a0, libserver.so)
// globals: CFuncPlatRot::m_DataMap
datamap_t *__cdecl CFuncTrackChange::GetBaseMap()
{
  return &CFuncPlatRot::m_DataMap;
}


// DataMapInit<CFuncTrackChange>  (line 2672, @0x00000000023dd9e0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTrackChange"
// globals: `guard variable for'DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder, `guard variable for'DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc, CFuncPlatRot::m_DataMap, CFuncTrackChange::GetEntityClass(void), CFuncTrackChange::m_DataMap, DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTrackChange>(CFuncTrackChange *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_pszBase = "CFuncTrackChange";
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder,
      &_dso_handle);
  }
  CFuncTrackChange::m_DataMap.baseMap = &CFuncPlatRot::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_pszBase), "Find");
    m_Size = DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc[10].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc);
  }
  CFuncTrackChange::m_DataMap.dataNumFields = 10;
  CFuncTrackChange::m_DataMap.dataDesc = &DataMapInit<CFuncTrackChange>(CFuncTrackChange *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTrackChange::m_DataMap, CFuncTrackChange::GetEntityClass);
  return &CFuncTrackChange::m_DataMap;
}


// CFuncTrackChange::Spawn  (line 2690, @0x00000000023cbbc0, libserver.so)  // inlines: EnableUse, Spawn, curtime
// calls: CFuncPlat::Spawn, CFuncPlatRot::SetupRotation, CFuncPlat::Setup, UTIL_SetOrigin, CBaseEntity::SetLocalAngles, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::GetLocalOrigin
// globals: CFuncTrackChange::Find(void)
void __fastcall CFuncTrackChange::Spawn(CFuncTrackChange *const this, const CEntityKeyValues *pKeyValues)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CFuncPlat::Spawn(this, pKeyValues);
  CFuncPlatRot::SetupRotation(this);
  CFuncPlat::Setup(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
    this->m_vecPosition2.z = CBaseEntity::GetLocalOrigin(this)->z;
  CFuncPlatRot::SetupRotation(this);
  if ( (this->m_spawnflags.m_Value & 8) != 0 )
  {
    UTIL_SetOrigin(this, &this->m_vecPosition2, 0);
    this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
    CBaseEntity::SetLocalAngles(this, &this->m_start);
    this->m_targetState = 0;
  }
  else
  {
    UTIL_SetOrigin(this, &this->m_vecPosition1, 0);
    this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
    CBaseEntity::SetLocalAngles(this, &this->m_end);
    this->m_targetState = 1;
  }
  this->m_use = 1;
  CBaseEntity::ThinkSet(this, CFuncTrackChange::Find, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v5->m_flCurrentTime + 2.0)), v4, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(0x40000000), v4, 0);
  }
}


// CFuncTrackChange::Precache  (line 2722, @0x00000000023e3ab0, libserver.so)
// calls: CBasePlatTrain::Precache, CBaseEntity::PrecacheScriptSound
// strings: "FuncTrackChange.Blocking"
void __fastcall CFuncTrackChange::Precache(CFuncTrackChange *const this, const CEntityPrecacheContext *pContext)
{
  CBasePlatTrain::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("FuncTrackChange.Blocking", pContext);
}


// CFuncTrackChange::Touch  (line 2731, @0x00000000023bb1f0, libserver.so)
void __fastcall CFuncTrackChange::Touch(CFuncTrackChange *const this, CBaseEntity *pOther)
{
  ;
}


// CFuncTrackChange::Find  (line 2737, @0x00000000023bc400, libserver.so)  // inlines: CUtlSymbolLarge, String, ToCStr
// calls: CGameEntitySystem::FindEntityByName, CPathTrack::Nearest, CBaseEntity::ThinkSet, Warning
// strings: "Can't find bottom track for track change! %s\n", "Can't find top track for track change! %s\n", "Can't find train for track change! %s\n"
void __fastcall CFuncTrackChange::Find(CFuncTrackChange *const this)
{
  CPathTrack *EntityByName; // rax
  CPathTrack *v3; // rax
  CFuncTrackTrain *v4; // rax
  double v5; // xmm0_8
  CPathTrack *m_trackBottom; // rdi
  vec_t v7; // xmm1_4
  CPathTrack *v8; // rax
  CPathTrack *m_trackTop; // rdi
  CPathTrack *v10; // rax
  __int64 m_toggle_state; // rsi
  const char *v12; // rsi
  const char *v13; // rsi
  const char *m_pAsString; // rsi
  Vector center; // [rsp+10h] [rbp-30h] BYREF

  *&center.x = this->m_trackTopName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &center, this, 0, 0, 0);
  if ( EntityByName != 0 )
  {
    this->m_trackTop = EntityByName;
    *&center.x = this->m_trackBottomName.u.m_Id;
    v3 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &center, this, 0, 0, 0);
    if ( v3 != 0 )
    {
      this->m_trackBottom = v3;
      *&center.x = this->m_trainName.u.m_Id;
      if ( CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &center, this, 0, 0, 0) != 0 )
      {
        *&center.x = this->m_trainName.u.m_Id;
        v4 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &center, this, 0, 0, 0);
        this->m_train = v4;
        if ( v4 != 0 )
        {
          v5 = (*(this->_vptr_IHandleEntity + 62))(this);
          m_trackBottom = this->m_trackBottom;
          *&center.x = v5;
          center.z = v7;
          v8 = CPathTrack::Nearest(m_trackBottom, &center);
          m_trackTop = this->m_trackTop;
          this->m_trackBottom = v8;
          v10 = CPathTrack::Nearest(m_trackTop, &center);
          m_toggle_state = this->m_toggle_state;
          this->m_trackTop = v10;
          (*(this->_vptr_IHandleEntity + 219))(this, m_toggle_state);
          CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
        }
        else
        {
          m_pAsString = "";
          if ( this->m_trainName.u.m_Id != 0 )
            m_pAsString = this->m_trainName.u.m_pAsString;
          Warning("Can't find train for track change! %s\n", m_pAsString);
        }
      }
      else
      {
        v13 = "";
        if ( this->m_trainName.u.m_Id != 0 )
          v13 = this->m_trainName.u.m_pAsString;
        Warning("Can't find train for track change! %s\n", v13);
        *&center.x = this->m_trainName.u.m_Id;
        CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &center, this, 0, 0, 0);
      }
    }
    else
    {
      v12 = "";
      if ( this->m_trackBottomName.u.m_Id != 0 )
        v12 = this->m_trackBottomName.u.m_pAsString;
      Warning("Can't find bottom track for track change! %s\n", v12);
    }
  }
  else if ( this->m_trackTopName.u.m_Id != 0 )
  {
    Warning("Can't find top track for track change! %s\n", this->m_trackTopName.u.m_pAsString);
  }
  else
  {
    Warning("Can't find top track for track change! %s\n", "");
  }
}


// CFuncTrackChange::EvaluateTrain  (line 2788, @0x00000000023ce4b0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetLocalOrigin
// callers: CFuncTrackChange::Use, CFuncTrackAuto::TriggerTrackChange, CFuncTrackAuto::Use
TRAIN_CODE __fastcall CFuncTrackChange::EvaluateTrain(CFuncTrackChange *const this, CPathTrack *pcurrent)
{
  CFuncTrackTrain *m_train; // rdi
  CPathTrack *m_ppath; // rcx
  CPathTrack *m_pprevious; // rax
  CPathTrack *m_pnext; // rsi
  const Vector *v7; // rax
  const Vector *LocalOrigin; // r12
  float v9; // xmm1_4
  float v10; // xmm0_4
  float m_length; // xmm1_4
  float v12; // xmm0_4

  if ( pcurrent != 0 )
  {
    m_train = this->m_train;
    if ( m_train != 0 )
    {
      m_ppath = m_train->m_ppath;
      if ( m_ppath == pcurrent
        || (m_pprevious = pcurrent->m_pprevious) != 0 && m_ppath == m_pprevious
        || (m_pnext = pcurrent->m_pnext, LODWORD(v7) = 0, m_pnext != 0) && m_ppath == m_pnext )
      {
        if ( m_train->m_flSpeed == 0.0 )
        {
          LocalOrigin = CBaseEntity::GetLocalOrigin(m_train);
          v7 = CBaseEntity::GetLocalOrigin(this);
          v9 = v7->y - LocalOrigin->y;
          v10 = ((v7->x - LocalOrigin->x) * (v7->x - LocalOrigin->x)) + (v9 * v9);
          m_length = this->m_train->m_length;
          LODWORD(v7) = 2;
          v12 = fsqrt(v10);
          if ( m_length <= v12 )
            return v12 <= (m_length + 150.0);
        }
        else
        {
          LODWORD(v7) = 1;
        }
      }
    }
    else
    {
      LODWORD(v7) = 0;
    }
  }
  else
  {
    LODWORD(v7) = 0;
  }
  return v7;
}


// CFuncTrackChange::UpdateTrain  (line 2814, @0x00000000023cea60, libserver.so)  // inlines: DotProduct, GetAbsVelocity, GetMoveDoneTime, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime, CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles, AngleVectorsTranspose, CBaseEntity::CalcAbsoluteVelocity
// callers: CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
void __fastcall CFuncTrackChange::UpdateTrain(CFuncTrackChange *const this, QAngle *const dest)
{
  float m_flMoveDoneTime; // xmm0_4
  float v5; // xmm1_4
  const Vector *LocalOrigin; // r13
  const Vector *v7; // rax
  const QAngle *LocalAngles; // rax
  float v9; // xmm5_4
  vec_t v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  CFuncTrackTrain *m_train; // rdi
  float v15; // xmm1_4
  vec_t v16; // xmm0_4
  float v17; // [rsp-18h] [rbp-88h]
  float v18; // [rsp-14h] [rbp-84h]
  float v19; // [rsp-14h] [rbp-84h]
  float v20; // [rsp-10h] [rbp-80h]
  float v21; // [rsp-10h] [rbp-80h]
  float v22; // [rsp-Ch] [rbp-7Ch]
  float v23; // [rsp-Ch] [rbp-7Ch]
  float v24[2]; // [rsp-8h] [rbp-78h] BYREF
  QAngle delta; // [rsp+0h] [rbp-70h] BYREF
  float v26; // [rsp+Ch] [rbp-64h]
  Vector forward; // [rsp+10h] [rbp-60h] BYREF
  float v28; // [rsp+1Ch] [rbp-54h]
  Vector right; // [rsp+20h] [rbp-50h] BYREF
  float v30; // [rsp+2Ch] [rbp-44h]
  Vector up; // [rsp+30h] [rbp-40h] BYREF
  float v32; // [rsp+3Ch] [rbp-34h]
  float v33; // [rsp+40h] [rbp-30h]

  m_flMoveDoneTime = this->m_flMoveDoneTime;
  if ( m_flMoveDoneTime < 0.0 )
    v22 = -1.0;
  else
    v22 = m_flMoveDoneTime - this->m_flLocalTime;
  if ( (this->m_iEFlags & 0x1000) != 0 )
    CBaseEntity::CalcAbsoluteVelocity(this);
  CBaseEntity::SetAbsVelocity(this->m_train, &this->m_vecAbsVelocity.m_Value);
  CBaseEntity::SetLocalAngularVelocity(this->m_train, &this->m_vecAngVelocity);
  CBaseEntity::SetMoveDoneTime(this->m_train, v22, v5);
  if ( v22 > 0.0 )
  {
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v7 = CBaseEntity::GetLocalOrigin(this->m_train);
    v17 = v7->x - LocalOrigin->x;
    v18 = v7->y - LocalOrigin->y;
    v20 = v7->z - LocalOrigin->z;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v9 = dest->x - LocalAngles->x;
    v10 = dest->z - LocalAngles->z;
    v24[1] = dest->y - LocalAngles->y;
    v24[0] = v9;
    delta.x = v10;
    AngleVectorsTranspose(v24, &delta.z, &forward.z, &right.z);
    v11 = ((((delta.z * v17) + (v26 * v18)) + (forward.x * v20)) - v17) * (1.0 / v22);
    v12 = ((((forward.z * v17) + (v28 * v18)) + (right.x * v20)) - v18) * (1.0 / v22);
    v13 = ((((v17 * right.z) + (v18 * v30)) + (up.x * v20)) - v20) * (1.0 / v22);
    if ( (this->m_iEFlags & 0x1000) != 0 )
    {
      v19 = ((((v17 * right.z) + (v18 * v30)) + (up.x * v20)) - v20) * (1.0 / v22);
      v21 = v12;
      v23 = v11;
      CBaseEntity::CalcAbsoluteVelocity(this);
      v13 = v19;
      v12 = v21;
      v11 = v23;
    }
    m_train = this->m_train;
    v15 = v13 + this->m_vecAbsVelocity.m_Value.z;
    v16 = v11 + this->m_vecAbsVelocity.m_Value.x;
    v32 = v12 + this->m_vecAbsVelocity.m_Value.y;
    v33 = v15;
    up.z = v16;
    CBaseEntity::SetAbsVelocity(m_train, &up.z);
  }
}


// CFuncTrackChange::GoDown  (line 2841, @0x00000000023cecc0, libserver.so)  // inlines: GetMoveDoneTime
// calls: CFuncPlatRot::GoDown, CFuncPlatRot::RotMove, CBaseToggle::AngularMove, CFuncTrackChange::UpdateTrain
// globals: CFuncPlat::CallHitBottom(void)
void __fastcall CFuncTrackChange::GoDown(CFuncTrackChange *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float m_flMoveDoneTime; // xmm0_4
  float v5; // xmm0_4
  QAngle *p_m_start; // r12
  float m_flSpeed; // xmm0_4

  if ( this->m_code == TRAIN_CODE::TRAIN_BLOCKING )
    return;
  (*(this->_vptr_IHandleEntity + 219))(this, 3);
  if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
  {
    m_flSpeed = this->m_flSpeed;
    p_m_start = &this->m_start;
    this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitBottom;
    this->m_pfnMoveDone.__delta = 0;
    this->m_toggle_state = TOGGLE_STATE::TS_GOING_DOWN;
    CBaseToggle::AngularMove(this, &this->m_start, m_flSpeed, v2);
    if ( this->m_code != TRAIN_CODE::TRAIN_FOLLOWING )
      return;
LABEL_8:
    CFuncTrackChange::UpdateTrain(this, p_m_start);
    this->m_train->m_ppath = 0;
    return;
  }
  CFuncPlatRot::GoDown(this);
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitBottom;
  this->m_pfnMoveDone.__delta = 0;
  if ( m_flMoveDoneTime < 0.0 )
    v5 = -1.0;
  else
    v5 = m_flMoveDoneTime - this->m_flLocalTime;
  p_m_start = &this->m_start;
  CFuncPlatRot::RotMove(this, &this->m_start, v5, v3);
  if ( this->m_code == TRAIN_CODE::TRAIN_FOLLOWING )
    goto LABEL_8;
}


// CFuncTrackChange::GoUp  (line 2877, @0x00000000023cedd0, libserver.so)  // inlines: GetMoveDoneTime
// calls: CFuncPlatRot::GoUp, CFuncPlatRot::RotMove, CBaseToggle::AngularMove, CFuncTrackChange::UpdateTrain
// globals: CFuncPlat::CallHitTop(void)
void __fastcall CFuncTrackChange::GoUp(CFuncTrackChange *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float m_flMoveDoneTime; // xmm0_4
  float v5; // xmm0_4
  QAngle *p_m_end; // r12
  float m_flSpeed; // xmm0_4

  if ( this->m_code == TRAIN_CODE::TRAIN_BLOCKING )
    return;
  (*(this->_vptr_IHandleEntity + 219))(this, 2);
  if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
  {
    m_flSpeed = this->m_flSpeed;
    p_m_end = &this->m_end;
    this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitTop;
    this->m_toggle_state = TOGGLE_STATE::TS_GOING_UP;
    this->m_pfnMoveDone.__delta = 0;
    CBaseToggle::AngularMove(this, &this->m_end, m_flSpeed, v2);
    if ( this->m_code != TRAIN_CODE::TRAIN_FOLLOWING )
      return;
LABEL_8:
    CFuncTrackChange::UpdateTrain(this, p_m_end);
    this->m_train->m_ppath = 0;
    return;
  }
  CFuncPlatRot::GoUp(this);
  m_flMoveDoneTime = this->m_flMoveDoneTime;
  this->m_pfnMoveDone.__pfn = CFuncPlat::CallHitTop;
  this->m_pfnMoveDone.__delta = 0;
  if ( m_flMoveDoneTime < 0.0 )
    v5 = -1.0;
  else
    v5 = m_flMoveDoneTime - this->m_flLocalTime;
  p_m_end = &this->m_end;
  CFuncPlatRot::RotMove(this, &this->m_end, v5, v3);
  if ( this->m_code == TRAIN_CODE::TRAIN_FOLLOWING )
    goto LABEL_8;
}


// CFuncTrackChange::UpdateAutoTargets  (line 2915, @0x00000000023bfe30, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>, operator|=<int>
void __fastcall CFuncTrackChange::UpdateAutoTargets(CFuncTrackChange *const this, int toggleState)
{
  CPathTrack *m_trackTop; // r12
  CPathTrack *m_trackBottom; // rbx
  unsigned int m_Value; // eax
  int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // r14d

  m_trackTop = this->m_trackTop;
  if ( m_trackTop != 0 )
  {
    m_trackBottom = this->m_trackBottom;
    if ( m_trackBottom != 0 )
    {
      m_Value = m_trackTop->m_spawnflags.m_Value;
      if ( toggleState != 0 )
      {
        v7 = m_Value | 1;
        if ( m_Value != (m_Value | 1) )
        {
          (*(m_trackTop->_vptr_IHandleEntity + 22))(this->m_trackTop, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_trackTop->m_spawnflags.m_Value = v7;
          m_trackBottom = this->m_trackBottom;
        }
        if ( toggleState == 1 )
        {
          v8 = m_trackBottom->m_spawnflags.m_Value & 0xFFFFFFFE;
          if ( m_trackBottom->m_spawnflags.m_Value == v8 )
            return;
LABEL_8:
          (*(m_trackBottom->_vptr_IHandleEntity + 22))(m_trackBottom, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_trackBottom->m_spawnflags.m_Value = v8;
          return;
        }
      }
      else
      {
        v9 = m_Value & 0xFFFFFFFE;
        if ( m_Value != (m_Value & 0xFFFFFFFE) )
        {
          (*(m_trackTop->_vptr_IHandleEntity + 22))(this->m_trackTop, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          m_trackTop->m_spawnflags.m_Value = v9;
          m_trackBottom = this->m_trackBottom;
        }
      }
      v8 = m_trackBottom->m_spawnflags.m_Value | 1;
      if ( m_trackBottom->m_spawnflags.m_Value == v8 )
        return;
      goto LABEL_8;
    }
  }
}


// CFuncTrackChange::Use  (line 2940, @0x00000000023ce5c0, libserver.so)  // inlines: CPASAttenuationFilter, CPASFilter, DisableUse, entindex, ~CPASAttenuationFilter, ~CPASFilter
// calls: CFuncTrackChange::EvaluateTrain, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CEntityInstance::GetEntityIndex, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// strings: "FuncTrackChange.Blocking"
void __fastcall CFuncTrackChange::Use(
        CFuncTrackChange *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  TOGGLE_STATE m_toggle_state; // eax
  TRAIN_CODE v7; // eax
  TOGGLE_STATE v8; // eax
  bool v9; // zf
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v11; // xmm1_4
  float v12; // xmm1_4
  CEntityIndex v13; // eax
  Vector origin; // [rsp+0h] [rbp-170h] BYREF
  CPASAttenuationFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v16; // [rsp+148h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  m_toggle_state = this->m_toggle_state;
  if ( m_toggle_state <= TOGGLE_STATE::TS_AT_BOTTOM )
  {
    if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
      v7 = CFuncTrackChange::EvaluateTrain(this, this->m_trackBottom);
    else
      v7 = CFuncTrackChange::EvaluateTrain(this, this->m_trackTop);
    this->m_code = v7;
    if ( v7 == TRAIN_CODE::TRAIN_BLOCKING )
    {
      *&origin.x = (*(this->_vptr_IHandleEntity + 186))(this);
      origin.z = v11;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&origin.x = (*(this->_vptr_IHandleEntity + 186))(this);
      origin.z = v12;
      CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v12);
      v13.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, "FuncTrackChange.Blocking", v13, -1, 0.0);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
    else
    {
      v8 = this->m_toggle_state;
      this->m_use = 0;
      v9 = v8 == TOGGLE_STATE::TS_AT_TOP;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      if ( v9 )
        vptr_IHandleEntity[216](this);
      else
        vptr_IHandleEntity[215](this);
    }
  }
}


// CFuncTrackChange::HitBottom  (line 2975, @0x00000000023cafa0, libserver.so)  // inlines: EnableUse, SetTrack
// calls: CFuncPlatRot::HitBottom, CBaseEntity::SetMoveDoneTime, CBaseEntity::GetLocalOrigin, CPathTrack::Nearest
void __fastcall CFuncTrackChange::HitBottom(CFuncTrackChange *const this)
{
  float v2; // xmm1_4
  CFuncTrackTrain *m_train; // r12
  CPathTrack *m_trackBottom; // r13
  const Vector *LocalOrigin; // rax

  CFuncPlatRot::HitBottom(this);
  if ( this->m_code == TRAIN_CODE::TRAIN_FOLLOWING )
  {
    m_train = this->m_train;
    m_trackBottom = this->m_trackBottom;
    LocalOrigin = CBaseEntity::GetLocalOrigin(m_train);
    m_train->m_ppath = CPathTrack::Nearest(m_trackBottom, LocalOrigin);
  }
  this->m_pfnMoveDone.__pfn = 0;
  this->m_pfnMoveDone.__delta = 0;
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
  (*(this->_vptr_IHandleEntity + 219))(this, this->m_toggle_state);
  this->m_use = 1;
}


// CFuncTrackChange::HitTop  (line 2995, @0x00000000023cb330, libserver.so)  // inlines: EnableUse, SetTrack
// calls: CFuncPlatRot::HitTop, CBaseEntity::SetMoveDoneTime, CBaseEntity::GetLocalOrigin, CPathTrack::Nearest
void __fastcall CFuncTrackChange::HitTop(CFuncTrackChange *const this)
{
  float v2; // xmm1_4
  CFuncTrackTrain *m_train; // r12
  CPathTrack *m_trackTop; // r13
  const Vector *LocalOrigin; // rax

  CFuncPlatRot::HitTop(this);
  if ( this->m_code == TRAIN_CODE::TRAIN_FOLLOWING )
  {
    m_train = this->m_train;
    m_trackTop = this->m_trackTop;
    LocalOrigin = CBaseEntity::GetLocalOrigin(m_train);
    m_train->m_ppath = CPathTrack::Nearest(m_trackTop, LocalOrigin);
  }
  this->m_pfnMoveDone.__pfn = 0;
  this->m_pfnMoveDone.__delta = 0;
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
  (*(this->_vptr_IHandleEntity + 219))(this, this->m_toggle_state);
  this->m_use = 1;
}


// CFuncTrackAuto::~CFuncTrackAuto  (line 3012, @0x00000000023f05e0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat, ~CFuncPlatRot, ~CFuncTrackChange
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncTrackAuto::~CFuncTrackAuto(CFuncTrackAuto *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncTrackAuto::~CFuncTrackAuto  (line 3012, @0x00000000023f06e0, libserver.so)  // inlines: ~CBasePlatTrain, ~CBaseToggle, ~CFuncPlat, ~CFuncPlatRot, ~CFuncTrackAuto, ~CFuncTrackChange
// calls: CBasePlatTrain::StopMovingSound, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncTrackAuto::~CFuncTrackAuto(CFuncTrackAuto *const this)
{
  this->_vptr_IHandleEntity = &off_40B9770;
  CBasePlatTrain::StopMovingSound(this);
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTrackAuto::GetEntityClass  (line 3014, @0x00000000023e5e30, libserver.so)
CEntityClass *__cdecl CFuncTrackAuto::GetEntityClass()
{
  return g_pEntityCFuncTrackAutoClass;
}


// CFuncTrackAuto::Schema_DynamicBinding  (line 3014, @0x00000000023e5e40, libserver.so)
// globals: CFuncTrackAuto::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrackAuto::Schema_DynamicBinding(const CFuncTrackAuto *const this)
{
  return CFuncTrackAuto::s_pSchemaBinding;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3014, @0x00000000023e5e50, libserver.so)
// globals: CFuncTrackAuto::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTrackAuto::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackAuto::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::DestructInstance  (line 3014, @0x00000000023e5e60, libserver.so)  // inlines: Destruct<CFuncTrackAuto>
void __fastcall CFuncTrackAuto::CEntityInstanceEntityClass::DestructInstance(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTrackAuto::CEntityInstanceEntityClass::FreeInstance  (line 3014, @0x00000000023e5e80, libserver.so)
void __fastcall CFuncTrackAuto::CEntityInstanceEntityClass::FreeInstance(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTrackAuto::CEntityInstanceEntityClass::CanAllocate  (line 3014, @0x00000000023e5ea0, libserver.so)
bool __fastcall CFuncTrackAuto::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3014, @0x00000000023e5eb0, libserver.so)
// globals: CFuncTrackAuto::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTrackAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  return CFuncTrackAuto::s_pSchemaBinding;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::AllocateInstance  (line 3014, @0x00000000023e8270, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTrackAuto::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1416);
  memset(v1, 0, 0x588u);
  return v1;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::ConstructInstance  (line 3014, @0x00000000023e98b0, libserver.so)  // inlines: CBasePlatTrain, CBaseToggle, CEntityHandle, CFuncPlat, CFuncPlatRot, CFuncTrackAuto, CFuncTrackChange, CHandle, CUtlSymbolLarge, Construct<CFuncTrackAuto>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncTrackAuto::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 309) = -1;
    *(p + 159) = 0;
    *(p + 1168) = 0;
    *(p + 160) = 0;
    *(p + 161) = 0;
    *(p + 165) = 0;
    *(p + 172) = 0;
    *(p + 173) = 0;
    *(p + 174) = 0;
    *p = &off_40BD170;
  }
  return p;
}


// CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3014, @0x00000000023ea740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3014, @0x00000000023ea760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTrackAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTrackAuto::GetEntityClassInternal  (line 3014, @0x00000000023f1050, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncTrackChange::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "func_trackautochange", "CFuncTrackAuto"
// globals: `guard variable for'CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass, CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass, __dso_handle, CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo, CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo
CEntityClass *__cdecl CFuncTrackAuto::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass);
    CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass._vptr_CEntityClass = off_40BD0F0;
    __cxa_guard_release(&`guard variable for'CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass);
    __cxa_atexit(
      CFuncTrackAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTrackAutoClass != 0 )
    return &CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass;
  if ( `guard variable for'CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo) != 0 )
  {
    EntityClassInfo = CFuncTrackChange::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo,
      "CFuncTrackAuto",
      "func_trackautochange",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo);
  }
  CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass.m_pClassInfo = &CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo;
  CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass.m_pBaseClassInfo = CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTrackAutoClass = &CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass;
  CFuncTrackAuto::GetEntityClassInfo(void)::g_EntityCFuncTrackAutoClassInfo.m_pClass = &CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass;
  CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncTrackAutoClass->m_pComponentOverrides = 0;
  return &CFuncTrackAuto::GetEntityClassInternal(void)::g_EntityCFuncTrackAutoClass;
}


// CFuncTrackAuto::GetDataDescMap  (line 3023, @0x00000000023bb200, libserver.so)
// globals: CFuncTrackAuto::m_DataMap
datamap_t *__fastcall CFuncTrackAuto::GetDataDescMap(CFuncTrackAuto *const this)
{
  return &CFuncTrackAuto::m_DataMap;
}


// CFuncTrackAuto::AddDatadescMetadataKeys  (line 3023, @0x00000000023ceee0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTrackAuto::GetEntityClass(void)
void __fastcall CFuncTrackAuto::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTrackAuto::GetEntityClass);
}


// CFuncTrackAuto::GetBaseMap  (line 3023, @0x00000000023cef00, libserver.so)
// globals: CFuncTrackChange::m_DataMap
datamap_t *__cdecl CFuncTrackAuto::GetBaseMap()
{
  return &CFuncTrackChange::m_DataMap;
}


// DataMapInit<CFuncTrackAuto>  (line 3023, @0x00000000023cef10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CFuncTrackAuto"
// globals: `guard variable for'DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder, CFuncTrackChange::m_DataMap, CFuncTrackAuto::GetEntityClass(void), CFuncTrackAuto::m_DataMap, DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_pszBase = "CFuncTrackAuto";
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::nameHolder,
      &_dso_handle);
  }
  CFuncTrackAuto::m_DataMap.dataNumFields = 1;
  CFuncTrackAuto::m_DataMap.baseMap = &CFuncTrackChange::m_DataMap;
  CFuncTrackAuto::m_DataMap.dataDesc = &DataMapInit<CFuncTrackAuto>(CFuncTrackAuto *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTrackAuto::m_DataMap, CFuncTrackAuto::GetEntityClass);
  return &CFuncTrackAuto::m_DataMap;
}


// CFuncTrackAuto::UpdateAutoTargets  (line 3029, @0x00000000023dc120, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>, operator|=<int>
// calls: CPathTrack::GetNext, CFuncTrackTrain::SetSpeed
void __fastcall CFuncTrackAuto::UpdateAutoTargets(CFuncTrackAuto *const this, int toggleState)
{
  CPathTrack *m_trackTop; // rax
  CPathTrack *m_trackBottom; // rdi
  CPathTrack *Next; // r13
  CPathTrack *v6; // r12
  unsigned int v7; // r14d
  int v8; // ebx
  CFuncTrackTrain *m_train; // rdi

  m_trackTop = this->m_trackTop;
  if ( m_trackTop != 0 )
  {
    m_trackBottom = this->m_trackBottom;
    if ( m_trackBottom != 0 )
    {
      if ( this->m_targetState != 0 )
      {
        Next = CPathTrack::GetNext(m_trackBottom);
        v6 = CPathTrack::GetNext(this->m_trackTop);
      }
      else
      {
        Next = CPathTrack::GetNext(m_trackTop);
        v6 = CPathTrack::GetNext(this->m_trackBottom);
      }
      if ( Next != 0 )
      {
        v7 = Next->m_spawnflags.m_Value & 0xFFFFFFFE;
        if ( Next->m_spawnflags.m_Value != v7 )
        {
          (*(Next->_vptr_IHandleEntity + 22))(Next, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          Next->m_spawnflags.m_Value = v7;
        }
        if ( this->m_code == TRAIN_CODE::TRAIN_FOLLOWING )
        {
          m_train = this->m_train;
          if ( m_train != 0 && m_train->m_flSpeed == 0.0 )
          {
            CFuncTrackTrain::SetSpeed(m_train, Next->m_flSpeed, 0.0, 0);
            (*(this->m_train->CFuncTrackChange::_vptr_IHandleEntity + 108))(this->m_train, this, this, 2, 0.0);
          }
        }
      }
      if ( v6 != 0 )
      {
        v8 = v6->m_spawnflags.m_Value | 1;
        if ( v6->m_spawnflags.m_Value != v8 )
        {
          (*(v6->_vptr_IHandleEntity + 22))(v6, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v6->m_spawnflags.m_Value = v8;
        }
      }
    }
  }
}


// CFuncTrackAuto::TriggerTrackChange  (line 3063, @0x00000000023ce790, libserver.so)  // inlines: ClassMatches, DisableUse, FClassnameIs
// calls: CEntityIdentity::ClassMatches, CFuncTrackChange::EvaluateTrain, CPathTrack::GetNext, CBaseEntity::ShouldToggle
// strings: "func_tracktrain"
void __fastcall CFuncTrackAuto::TriggerTrackChange(CFuncTrackAuto *const this, inputdata_t *const inputdata)
{
  TOGGLE_STATE m_toggle_state; // eax
  CPathTrack *m_trackBottom; // r12
  TRAIN_CODE v5; // eax
  TOGGLE_STATE v6; // eax
  bool v7; // zf
  int (**vptr_IHandleEntity)(...); // rax
  int (*v9)(...); // rax
  CPathTrack *Next; // rax
  __int64 m_targetState; // rsi

  if ( this->m_use != 0 )
  {
    m_toggle_state = this->m_toggle_state;
    if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
    {
      m_trackBottom = 0;
      if ( m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
        m_trackBottom = this->m_trackBottom;
    }
    else
    {
      m_trackBottom = this->m_trackTop;
    }
    if ( inputdata->pActivator != 0
      && CEntityIdentity::ClassMatches(inputdata->pActivator->m_pEntity, "func_tracktrain") )
    {
      v5 = CFuncTrackChange::EvaluateTrain(this, m_trackBottom);
      this->m_code = v5;
      if ( v5 == TRAIN_CODE::TRAIN_FOLLOWING )
      {
        v6 = this->m_toggle_state;
        if ( v6 != this->m_targetState )
        {
          this->m_use = 0;
          v7 = v6 == TOGGLE_STATE::TS_AT_TOP;
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          if ( v7 )
            v9 = vptr_IHandleEntity[216];
          else
            v9 = vptr_IHandleEntity[215];
          v9(this);
        }
      }
    }
    else
    {
      if ( m_trackBottom != 0
        && (Next = CPathTrack::GetNext(m_trackBottom)) != 0
        && Next != this->m_train->m_ppath
        && CBaseEntity::ShouldToggle(this, USE_TOGGLE, this->m_targetState) != 0 )
      {
        if ( this->m_targetState != 0 )
        {
          this->m_targetState = 0;
          m_targetState = 0;
        }
        else
        {
          this->m_targetState = 1;
          m_targetState = 1;
        }
      }
      else
      {
        m_targetState = this->m_targetState;
      }
      (*(this->_vptr_IHandleEntity + 219))(this, m_targetState);
    }
  }
}


// CFuncTrackAuto::Use  (line 3107, @0x00000000023ce8f0, libserver.so)  // inlines: ClassMatches, DisableUse, FClassnameIs
// calls: CEntityIdentity::ClassMatches, CPathTrack::GetNext, CBaseEntity::ShouldToggle, CFuncTrackChange::EvaluateTrain
// strings: "func_tracktrain"
void __fastcall CFuncTrackAuto::Use(
        CFuncTrackAuto *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  TOGGLE_STATE m_toggle_state; // eax
  CPathTrack *m_trackBottom; // r12
  CPathTrack *Next; // rax
  __int64 m_targetState; // rsi
  TRAIN_CODE v11; // eax
  TOGGLE_STATE v12; // eax
  bool v13; // zf
  int (**vptr_IHandleEntity)(...); // rax

  if ( this->m_use != 0 )
  {
    m_toggle_state = this->m_toggle_state;
    if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
    {
      m_trackBottom = 0;
      if ( m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
        m_trackBottom = this->m_trackBottom;
    }
    else
    {
      m_trackBottom = this->m_trackTop;
    }
    if ( pActivator != 0 && CEntityIdentity::ClassMatches(pActivator->m_pEntity, "func_tracktrain") )
    {
      v11 = CFuncTrackChange::EvaluateTrain(this, m_trackBottom);
      this->m_code = v11;
      if ( v11 == TRAIN_CODE::TRAIN_FOLLOWING )
      {
        v12 = this->m_toggle_state;
        if ( v12 != this->m_targetState )
        {
          this->m_use = 0;
          v13 = v12 == TOGGLE_STATE::TS_AT_TOP;
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          if ( v13 )
            vptr_IHandleEntity[216](this);
          else
            vptr_IHandleEntity[215](this);
        }
      }
    }
    else
    {
      if ( m_trackBottom != 0
        && (Next = CPathTrack::GetNext(m_trackBottom)) != 0
        && Next != this->m_train->m_ppath
        && CBaseEntity::ShouldToggle(this, useType, this->m_targetState) != 0 )
      {
        if ( this->m_targetState != 0 )
        {
          this->m_targetState = 0;
          m_targetState = 0;
        }
        else
        {
          this->m_targetState = 1;
          m_targetState = 1;
        }
      }
      else
      {
        m_targetState = this->m_targetState;
      }
      (*(this->_vptr_IHandleEntity + 219))(this, m_targetState);
    }
  }
}


