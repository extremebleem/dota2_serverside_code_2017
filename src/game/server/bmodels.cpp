// Reconstructed from DWARF by pahole; not original source.

// src/game/server/bmodels.cpp:24
class CFuncWall : public CBaseModelEntity {
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

	int m_nState;  // +0x480
	typedef CBaseModelEntity BaseClass;
	CFuncWall(CFuncWall &);
	CFuncWall(CFuncWall &);
	CFuncWall();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CFuncWall();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// vtable[108] Use
	// sizeof = 1160
};

// src/game/server/bmodels.cpp:87
class CFuncWallToggle : public CFuncWall {
public:

private:

	static datamap_t m_DataMap;
	typedef CFuncWall BaseClass;

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
	CFuncWallToggle(CFuncWallToggle &);
	CFuncWallToggle(CFuncWallToggle &);
	CFuncWallToggle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputToggle(inputdata_t &);
	void TurnOff();
	void TurnOn();
	bool IsOn();
	virtual ~CFuncWallToggle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[108] Use
	// sizeof = 1160
};

// src/game/server/bmodels.cpp:168
class CFuncVehicleClip : public CBaseModelEntity {
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
	CFuncVehicleClip(CFuncVehicleClip &);
	CFuncVehicleClip(CFuncVehicleClip &);
	CFuncVehicleClip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CFuncVehicleClip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// sizeof = 1152
};

// src/game/server/bmodels.cpp:238
class CFuncConveyor : public CFuncWall {
	class NetworkVar_m_flConveyorSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CFuncWall BaseClass;
	typedef CFuncConveyor ThisClass;

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
	CFuncConveyor(CFuncConveyor &);
	CFuncConveyor(CFuncConveyor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CFuncConveyor();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void UpdateSpeed(float);
	virtual void GetGroundVelocityToApply(Vector &);
	void InputToggleDirection(inputdata_t &);
	void InputSetSpeed(inputdata_t &);
	virtual ~CFuncConveyor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[108] Use
	// vtable[176] GetGroundVelocityToApply
	// sizeof = 1176
};

// src/game/server/bmodels.cpp:274
class C_CFuncConveyor_MapInstall {
	C_CFuncConveyor_MapInstall();

	// sizeof = 1
};

// src/game/server/bmodels.cpp:344
class CFuncIllusionary : public CBaseModelEntity {
public:

private:

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
	CFuncIllusionary(CFuncIllusionary &);
	CFuncIllusionary(CFuncIllusionary &);
	CFuncIllusionary();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CFuncIllusionary();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// sizeof = 1152
};

// src/game/server/bmodels.cpp:409
class C_CFuncRotating_MapInstall {
	C_CFuncRotating_MapInstall();

	// sizeof = 1
};

// src/game/server/bmodels.cpp:1163
class CFuncVPhysicsClip : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iFilterName;  // +0x480
	bool m_bDisabled;  // +0x48c
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
	CFuncVPhysicsClip(CFuncVPhysicsClip &);
	CFuncVPhysicsClip(CFuncVPhysicsClip &);
	CFuncVPhysicsClip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual bool CreateVPhysics();
	virtual void Precache(const CEntityPrecacheContext *);
	bool EntityPassesFilter(CBaseEntity *);
	virtual bool ForceVPhysicsCollide(CBaseEntity *);
	virtual uint64 PhysicsSolidMaskForEntity();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CFuncVPhysicsClip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[49] CreateVPhysics
	// vtable[6] Precache
	// vtable[60] ForceVPhysicsCollide
	// vtable[123] PhysicsSolidMaskForEntity
	// sizeof = 1168
};

// src/game/server/bmodels.cpp:1285
class CFuncInteractionLayerClip : public CBaseModelEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bDisabled;  // +0x480

	string_t m_iszInteractsAs;  // +0x488
	string_t m_iszInteractsWith;  // +0x490
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
	CFuncInteractionLayerClip(CFuncInteractionLayerClip &);
	CFuncInteractionLayerClip(CFuncInteractionLayerClip &);
	CFuncInteractionLayerClip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool CreateVPhysics();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual ~CFuncInteractionLayerClip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[49] CreateVPhysics
	// sizeof = 1176
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncWall::~CFuncWall  (line 24, @0x00000000021b28b0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncWall::~CFuncWall(CFuncWall *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncWall::~CFuncWall  (line 24, @0x00000000021b28d0, libserver.so)  // inlines: ~CFuncWall
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncWall::~CFuncWall(CFuncWall *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncWall::GetEntityClass  (line 26, @0x00000000021b0cc0, libserver.so)
CEntityClass *__cdecl CFuncWall::GetEntityClass()
{
  return g_pEntityCFuncWallClass;
}


// CFuncWall::Schema_DynamicBinding  (line 26, @0x00000000021b0cd0, libserver.so)
// globals: CFuncWall::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWall::Schema_DynamicBinding(const CFuncWall *const this)
{
  return CFuncWall::s_pSchemaBinding;
}


// CFuncWall::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x00000000021b0ce0, libserver.so)
// globals: CFuncWall::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWall::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncWall::CEntityInstanceEntityClass *const this)
{
  return CFuncWall::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncWall::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x00000000021b0cf0, libserver.so)  // inlines: Destruct<CFuncWall>
void __fastcall CFuncWall::CEntityInstanceEntityClass::DestructInstance(
        CFuncWall::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncWall::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x00000000021b0d10, libserver.so)
void __fastcall CFuncWall::CEntityInstanceEntityClass::FreeInstance(
        CFuncWall::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncWall::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x00000000021b0d30, libserver.so)
bool __fastcall CFuncWall::CEntityInstanceEntityClass::CanAllocate(
        const CFuncWall::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncWall::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x00000000021b0d40, libserver.so)
// globals: CFuncWall::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncWall::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncWall::CEntityInstanceEntityClass *const this)
{
  return CFuncWall::s_pSchemaBinding;
}


// CFuncWall::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x00000000021b1e80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncWall::CEntityInstanceEntityClass::AllocateInstance(
        CFuncWall::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CFuncWall::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x00000000021b2380, libserver.so)  // inlines: CFuncWall, Construct<CFuncWall>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncWall::CEntityInstanceEntityClass::ConstructInstance(
        CFuncWall::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_400A4B0;
  }
  return p;
}


// CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x00000000021b3830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x00000000021b3850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncWall::GetEntityClassInfo  (line 26, @0x00000000021b4ed0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CFuncWallToggle::GetEntityClassInternal, CFuncConveyor::GetEntityClassInternal
// strings: "func_wall", "CFuncWall", "basemodelentity", "CBaseModelEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo, CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CFuncWall::GetEntityClassInfo()
{
  if ( `guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo != 0 )
    return &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo) == 0 )
    return &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo,
    "CFuncWall",
    "func_wall",
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo);
  return &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo;
}


// CFuncWall::GetEntityClassInternal  (line 26, @0x00000000021b74e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_wall", "CFuncWall"
// globals: `guard variable for'CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass, CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass, __dso_handle, CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo, CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo
CEntityClass *__cdecl CFuncWall::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass);
    CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass._vptr_CEntityClass = off_400A430;
    __cxa_guard_release(&`guard variable for'CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass);
    __cxa_atexit(
      CFuncWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncWallClass != 0 )
    return &CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass;
  if ( `guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo,
      "CFuncWall",
      "func_wall",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo);
  }
  CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass.m_pClassInfo = &CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo;
  CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass.m_pBaseClassInfo = CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncWallClass = &CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass;
  CFuncWall::GetEntityClassInfo(void)::g_EntityCFuncWallClassInfo.m_pClass = &CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass;
  CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncWallClass->m_pComponentOverrides = 0;
  return &CFuncWall::GetEntityClassInternal(void)::g_EntityCFuncWallClass;
}


// CFuncWall::GetDataDescMap  (line 40, @0x0000000002187380, libserver.so)
// globals: CFuncWall::m_DataMap
datamap_t *__fastcall CFuncWall::GetDataDescMap(CFuncWall *const this)
{
  return &CFuncWall::m_DataMap;
}


// CFuncWall::AddDatadescMetadataKeys  (line 40, @0x00000000021914e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncWall::GetEntityClass(void)
void __fastcall CFuncWall::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncWall::GetEntityClass);
}


// CFuncWall::GetBaseMap  (line 40, @0x0000000002191500, libserver.so)
datamap_t *__cdecl CFuncWall::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncWall>  (line 40, @0x0000000002191510, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncWall"
// globals: `guard variable for'DataMapInit<CFuncWall>(CFuncWall *)::nameHolder, CFuncWall::GetEntityClass(void), CFuncWall::m_DataMap, DataMapInit<CFuncWall>(CFuncWall *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncWall>(CFuncWall *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncWall>(CFuncWall *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncWall>(CFuncWall *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_pszBase = "CFuncWall";
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncWall>(CFuncWall *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncWall>(CFuncWall *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncWall>(CFuncWall *)::nameHolder,
      &_dso_handle);
  }
  CFuncWall::m_DataMap.dataNumFields = 1;
  CFuncWall::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncWall::m_DataMap.dataDesc = &DataMapInit<CFuncWall>(CFuncWall *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncWall::m_DataMap, CFuncWall::GetEntityClass);
  return &CFuncWall::m_DataMap;
}


// CFuncWall::Spawn  (line 46, @0x00000000021880d0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, GetParent
// calls: CBaseEntity::Spawn, CBaseModelEntity::SetModelFromKeyValues, CGameSceneNode::GetOwnerEntity, CBaseEntity::AddFlag
// callers: CFuncWallToggle::Spawn, CFuncConveyor::Spawn
void __fastcall CFuncWall::Spawn(CFuncWall *const this, const CEntityKeyValues *pKeyValues)
{
  CGameSceneNode *m_pParent; // rdi

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_pEntity->m_name.u.m_Id == 0 )
  {
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent == 0 || CGameSceneNode::GetOwnerEntity(m_pParent) == 0 )
      CBaseEntity::AddFlag(this, 0x1000000);
  }
  (*(this->_vptr_IHandleEntity + 49))(this);
}


// CFuncWall::Precache  (line 61, @0x00000000021b09b0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncWall::Precache(CFuncWall *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncWall::CreateVPhysics  (line 68, @0x0000000002199060, libserver.so)
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncWall::CreateVPhysics(CFuncWall *const this)
{
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    4,
    0);
  return 1;
}


// CFuncWall::Use  (line 76, @0x0000000002188140, libserver.so)
// calls: CBaseEntity::ShouldToggle
void __fastcall CFuncWall::Use(
        CFuncWall *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( CBaseEntity::ShouldToggle(this, useType, this->m_nState) != 0 )
    this->m_nState = 1 - this->m_nState;
}


// CFuncWallToggle::~CFuncWallToggle  (line 87, @0x00000000021b2900, libserver.so)  // inlines: ~CFuncWall
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncWallToggle::~CFuncWallToggle(CFuncWallToggle *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncWallToggle::~CFuncWallToggle  (line 87, @0x00000000021b2920, libserver.so)  // inlines: ~CFuncWall, ~CFuncWallToggle
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncWallToggle::~CFuncWallToggle(CFuncWallToggle *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncWallToggle::GetEntityClass  (line 89, @0x00000000021b0d50, libserver.so)
CEntityClass *__cdecl CFuncWallToggle::GetEntityClass()
{
  return g_pEntityCFuncWallToggleClass;
}


// CFuncWallToggle::Schema_DynamicBinding  (line 89, @0x00000000021b0d60, libserver.so)
// globals: CFuncWallToggle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWallToggle::Schema_DynamicBinding(const CFuncWallToggle *const this)
{
  return CFuncWallToggle::s_pSchemaBinding;
}


// CFuncWallToggle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 89, @0x00000000021b0d70, libserver.so)
// globals: CFuncWallToggle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWallToggle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  return CFuncWallToggle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncWallToggle::CEntityInstanceEntityClass::DestructInstance  (line 89, @0x00000000021b0d80, libserver.so)  // inlines: Destruct<CFuncWallToggle>
void __fastcall CFuncWallToggle::CEntityInstanceEntityClass::DestructInstance(
        CFuncWallToggle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncWallToggle::CEntityInstanceEntityClass::FreeInstance  (line 89, @0x00000000021b0da0, libserver.so)
void __fastcall CFuncWallToggle::CEntityInstanceEntityClass::FreeInstance(
        CFuncWallToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncWallToggle::CEntityInstanceEntityClass::CanAllocate  (line 89, @0x00000000021b0dc0, libserver.so)
bool __fastcall CFuncWallToggle::CEntityInstanceEntityClass::CanAllocate(
        const CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncWallToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 89, @0x00000000021b0dd0, libserver.so)
// globals: CFuncWallToggle::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncWallToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  return CFuncWallToggle::s_pSchemaBinding;
}


// CFuncWallToggle::CEntityInstanceEntityClass::AllocateInstance  (line 89, @0x00000000021b1ec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncWallToggle::CEntityInstanceEntityClass::AllocateInstance(
        CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CFuncWallToggle::CEntityInstanceEntityClass::ConstructInstance  (line 89, @0x00000000021b23b0, libserver.so)  // inlines: CFuncWall, CFuncWallToggle, Construct<CFuncWallToggle>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncWallToggle::CEntityInstanceEntityClass::ConstructInstance(
        CFuncWallToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_400ABF0;
  }
  return p;
}


// CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x00000000021b3880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x00000000021b38a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWallToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncWallToggle::GetEntityClassInternal  (line 89, @0x00000000021b7630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncWall::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_wall_toggle", "CFuncWallToggle"
// globals: `guard variable for'CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass, CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass, __dso_handle, CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo, CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo
CEntityClass *__cdecl CFuncWallToggle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass);
    CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass._vptr_CEntityClass = off_400AB70;
    __cxa_guard_release(&`guard variable for'CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass);
    __cxa_atexit(
      CFuncWallToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncWallToggleClass != 0 )
    return &CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass;
  if ( `guard variable for'CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo) != 0 )
  {
    EntityClassInfo = CFuncWall::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo,
      "CFuncWallToggle",
      "func_wall_toggle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo);
  }
  CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass.m_pClassInfo = &CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo;
  CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass.m_pBaseClassInfo = CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncWallToggleClass = &CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass;
  CFuncWallToggle::GetEntityClassInfo(void)::g_EntityCFuncWallToggleClassInfo.m_pClass = &CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass;
  CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncWallToggleClass->m_pComponentOverrides = 0;
  return &CFuncWallToggle::GetEntityClassInternal(void)::g_EntityCFuncWallToggleClass;
}


// CFuncWallToggle::GetDataDescMap  (line 104, @0x0000000002187390, libserver.so)
// globals: CFuncWallToggle::m_DataMap
datamap_t *__fastcall CFuncWallToggle::GetDataDescMap(CFuncWallToggle *const this)
{
  return &CFuncWallToggle::m_DataMap;
}


// CFuncWallToggle::AddDatadescMetadataKeys  (line 104, @0x00000000021915e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncWallToggle::GetEntityClass(void)
void __fastcall CFuncWallToggle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncWallToggle::GetEntityClass);
}


// CFuncWallToggle::GetBaseMap  (line 104, @0x0000000002191600, libserver.so)
// globals: CFuncWall::m_DataMap
datamap_t *__cdecl CFuncWallToggle::GetBaseMap()
{
  return &CFuncWall::m_DataMap;
}


// DataMapInit<CFuncWallToggle>  (line 104, @0x0000000002191610, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncWallToggle"
// globals: `guard variable for'DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder, CFuncWall::m_DataMap, CFuncWallToggle::GetEntityClass(void), CFuncWallToggle::m_DataMap, DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncWallToggle>(CFuncWallToggle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_pszBase = "CFuncWallToggle";
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::nameHolder,
      &_dso_handle);
  }
  CFuncWallToggle::m_DataMap.dataNumFields = 1;
  CFuncWallToggle::m_DataMap.baseMap = &CFuncWall::m_DataMap;
  CFuncWallToggle::m_DataMap.dataDesc = &DataMapInit<CFuncWallToggle>(CFuncWallToggle *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncWallToggle::m_DataMap, CFuncWallToggle::GetEntityClass);
  return &CFuncWallToggle::m_DataMap;
}


// CFuncWallToggle::Spawn  (line 111, @0x0000000002191720, libserver.so)
// calls: CFuncWall::Spawn, CFuncWallToggle::TurnOff, CBaseEntity::SetMoveType
void __fastcall CFuncWallToggle::Spawn(CFuncWallToggle *const this, const CEntityKeyValues *pKeyValues)
{
  CFuncWall::Spawn(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
    CFuncWallToggle::TurnOff(this);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CFuncWallToggle::TurnOff  (line 121, @0x00000000021916e0, libserver.so)
// calls: CBaseEntity::AddEffects
// callers: CFuncWallToggle::Spawn, CFuncWallToggle::InputToggle, CFuncWallToggle::Use
void __fastcall CFuncWallToggle::TurnOff(CFuncWallToggle *const this)
{
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CBaseEntity::AddEffects(this, 32);
}


// CFuncWallToggle::TurnOn  (line 128, @0x0000000002191760, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
// callers: CFuncWallToggle::InputToggle, CFuncWallToggle::Use
void __fastcall CFuncWallToggle::TurnOn(CFuncWallToggle *const this)
{
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CFuncWallToggle::IsOn  (line 135, @0x0000000002191890, libserver.so)  // inlines: IsSolidContactEnabled
bool __fastcall CFuncWallToggle::IsOn(CFuncWallToggle *const this)
{
  return this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value & 1;
}


// CFuncWallToggle::InputToggle  (line 140, @0x00000000021917b0, libserver.so)  // inlines: IsOn, IsSolidContactEnabled
// calls: CBaseEntity::ShouldToggle, CFuncWallToggle::TurnOn, CFuncWallToggle::TurnOff
void __fastcall CFuncWallToggle::InputToggle(CFuncWallToggle *const this, inputdata_t *const inputdata)
{
  int v3; // r12d

  v3 = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value & 1;
  if ( CBaseEntity::ShouldToggle(this, USE_TOGGLE, v3) != 0 )
  {
    if ( v3 != 0 )
      CFuncWallToggle::TurnOff(this);
    else
      CFuncWallToggle::TurnOn(this);
  }
}


// CFuncWallToggle::Use  (line 154, @0x0000000002191820, libserver.so)  // inlines: IsOn, IsSolidContactEnabled
// calls: CBaseEntity::ShouldToggle, CFuncWallToggle::TurnOn, CFuncWallToggle::TurnOff
void __fastcall CFuncWallToggle::Use(
        CFuncWallToggle *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  int v6; // r12d

  v6 = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value & 1;
  if ( CBaseEntity::ShouldToggle(this, useType, v6) != 0 )
  {
    if ( v6 != 0 )
      CFuncWallToggle::TurnOff(this);
    else
      CFuncWallToggle::TurnOn(this);
  }
}


// CFuncVehicleClip::~CFuncVehicleClip  (line 168, @0x00000000021b29f0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncVehicleClip::~CFuncVehicleClip(CFuncVehicleClip *const this)
{
  this->_vptr_IHandleEntity = &off_400B330;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncVehicleClip::~CFuncVehicleClip  (line 168, @0x00000000021b2a10, libserver.so)  // inlines: ~CFuncVehicleClip
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncVehicleClip::~CFuncVehicleClip(CFuncVehicleClip *const this)
{
  this->_vptr_IHandleEntity = &off_400B330;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncVehicleClip::GetEntityClass  (line 170, @0x00000000021b0de0, libserver.so)
CEntityClass *__cdecl CFuncVehicleClip::GetEntityClass()
{
  return g_pEntityCFuncVehicleClipClass;
}


// CFuncVehicleClip::Schema_DynamicBinding  (line 170, @0x00000000021b0df0, libserver.so)
// globals: CFuncVehicleClip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncVehicleClip::Schema_DynamicBinding(const CFuncVehicleClip *const this)
{
  return CFuncVehicleClip::s_pSchemaBinding;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 170, @0x00000000021b0e00, libserver.so)
// globals: CFuncVehicleClip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncVehicleClip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  return CFuncVehicleClip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::DestructInstance  (line 170, @0x00000000021b0e10, libserver.so)  // inlines: Destruct<CFuncVehicleClip>
void __fastcall CFuncVehicleClip::CEntityInstanceEntityClass::DestructInstance(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncVehicleClip::CEntityInstanceEntityClass::FreeInstance  (line 170, @0x00000000021b0e30, libserver.so)
void __fastcall CFuncVehicleClip::CEntityInstanceEntityClass::FreeInstance(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncVehicleClip::CEntityInstanceEntityClass::CanAllocate  (line 170, @0x00000000021b0e50, libserver.so)
bool __fastcall CFuncVehicleClip::CEntityInstanceEntityClass::CanAllocate(
        const CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 170, @0x00000000021b0e60, libserver.so)
// globals: CFuncVehicleClip::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncVehicleClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  return CFuncVehicleClip::s_pSchemaBinding;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::AllocateInstance  (line 170, @0x00000000021b1f00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncVehicleClip::CEntityInstanceEntityClass::AllocateInstance(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::ConstructInstance  (line 170, @0x00000000021b23e0, libserver.so)  // inlines: CFuncVehicleClip, Construct<CFuncVehicleClip>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncVehicleClip::CEntityInstanceEntityClass::ConstructInstance(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_400B330;
  }
  return p;
}


// CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 170, @0x00000000021b3920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 170, @0x00000000021b3940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncVehicleClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncVehicleClip::GetEntityClassInternal  (line 170, @0x00000000021b78d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_vehicleclip", "CFuncVehicleClip"
// globals: `guard variable for'CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass, CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass, __dso_handle, CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo, CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo
CEntityClass *__cdecl CFuncVehicleClip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass);
    CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass._vptr_CEntityClass = off_400B2B0;
    __cxa_guard_release(&`guard variable for'CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass);
    __cxa_atexit(
      CFuncVehicleClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncVehicleClipClass != 0 )
    return &CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass;
  if ( `guard variable for'CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo,
      "CFuncVehicleClip",
      "func_vehicleclip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo);
  }
  CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass.m_pClassInfo = &CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo;
  CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass.m_pBaseClassInfo = CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncVehicleClipClass = &CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass;
  CFuncVehicleClip::GetEntityClassInfo(void)::g_EntityCFuncVehicleClipClassInfo.m_pClass = &CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass;
  CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncVehicleClipClass->m_pComponentOverrides = 0;
  return &CFuncVehicleClip::GetEntityClassInternal(void)::g_EntityCFuncVehicleClipClass;
}


// CFuncVehicleClip::GetDataDescMap  (line 184, @0x00000000021873a0, libserver.so)
// globals: CFuncVehicleClip::m_DataMap
datamap_t *__fastcall CFuncVehicleClip::GetDataDescMap(CFuncVehicleClip *const this)
{
  return &CFuncVehicleClip::m_DataMap;
}


// CFuncVehicleClip::AddDatadescMetadataKeys  (line 184, @0x00000000021918a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncVehicleClip::GetEntityClass(void)
void __fastcall CFuncVehicleClip::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncVehicleClip::GetEntityClass);
}


// CFuncVehicleClip::GetBaseMap  (line 184, @0x00000000021918c0, libserver.so)
datamap_t *__cdecl CFuncVehicleClip::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncVehicleClip>  (line 184, @0x00000000021918d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncVehicleClip"
// globals: `guard variable for'DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder, CFuncVehicleClip::GetEntityClass(void), CFuncVehicleClip::m_DataMap, DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_pszBase = "CFuncVehicleClip";
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::nameHolder,
      &_dso_handle);
  }
  CFuncVehicleClip::m_DataMap.dataNumFields = 2;
  CFuncVehicleClip::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncVehicleClip::m_DataMap.dataDesc = &DataMapInit<CFuncVehicleClip>(CFuncVehicleClip *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncVehicleClip::m_DataMap, CFuncVehicleClip::GetEntityClass);
  return &CFuncVehicleClip::m_DataMap;
}


// CFuncVehicleClip::Spawn  (line 191, @0x0000000002188180, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::SetLocalAngles, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::AddEffects
void __fastcall CFuncVehicleClip::Spawn(CFuncVehicleClip *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->_vptr_IHandleEntity + 49))(this);
  CBaseEntity::AddEffects(this, 32);
}


// CFuncVehicleClip::Precache  (line 210, @0x00000000021b09e0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncVehicleClip::Precache(CFuncVehicleClip *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncVehicleClip::CreateVPhysics  (line 216, @0x0000000002199090, libserver.so)
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncVehicleClip::CreateVPhysics(CFuncVehicleClip *const this)
{
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    15,
    0);
  return 1;
}


// CFuncVehicleClip::InputEnable  (line 223, @0x00000000021873b0, libserver.so)
void __fastcall CFuncVehicleClip::InputEnable(CFuncVehicleClip *const this, inputdata_t *const data)
{
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision, data);
}


// CFuncVehicleClip::InputDisable  (line 228, @0x00000000021873d0, libserver.so)
void __fastcall CFuncVehicleClip::InputDisable(CFuncVehicleClip *const this, inputdata_t *const data)
{
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision, data);
}


// CFuncConveyor::~CFuncConveyor  (line 238, @0x00000000021b2950, libserver.so)  // inlines: ~CFuncWall
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncConveyor::~CFuncConveyor(CFuncConveyor *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncConveyor::~CFuncConveyor  (line 238, @0x00000000021b2970, libserver.so)  // inlines: ~CFuncConveyor, ~CFuncWall
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncConveyor::~CFuncConveyor(CFuncConveyor *const this)
{
  this->_vptr_IHandleEntity = &off_400A4B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncConveyor::GetEntityClass  (line 240, @0x00000000021b0e70, libserver.so)
CEntityClass *__cdecl CFuncConveyor::GetEntityClass()
{
  return g_pEntityCFuncConveyorClass;
}


// CFuncConveyor::Schema_DynamicBinding  (line 240, @0x00000000021b0e80, libserver.so)
// globals: CFuncConveyor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncConveyor::Schema_DynamicBinding(const CFuncConveyor *const this)
{
  return CFuncConveyor::s_pSchemaBinding;
}


// CFuncConveyor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 240, @0x00000000021b0e90, libserver.so)
// globals: CFuncConveyor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncConveyor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  return CFuncConveyor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncConveyor::CEntityInstanceEntityClass::DestructInstance  (line 240, @0x00000000021b0ea0, libserver.so)  // inlines: Destruct<CFuncConveyor>
void __fastcall CFuncConveyor::CEntityInstanceEntityClass::DestructInstance(
        CFuncConveyor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncConveyor::CEntityInstanceEntityClass::FreeInstance  (line 240, @0x00000000021b0ec0, libserver.so)
void __fastcall CFuncConveyor::CEntityInstanceEntityClass::FreeInstance(
        CFuncConveyor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncConveyor::CEntityInstanceEntityClass::CanAllocate  (line 240, @0x00000000021b0ee0, libserver.so)
bool __fastcall CFuncConveyor::CEntityInstanceEntityClass::CanAllocate(
        const CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncConveyor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 240, @0x00000000021b0ef0, libserver.so)
// globals: CFuncConveyor::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncConveyor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  return CFuncConveyor::s_pSchemaBinding;
}


// CFuncConveyor::CEntityInstanceEntityClass::AllocateInstance  (line 240, @0x00000000021b1f40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncConveyor::CEntityInstanceEntityClass::AllocateInstance(
        CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1176);
  memset(v1, 0, 0x498u);
  return v1;
}


// CFuncConveyor::CEntityInstanceEntityClass::ConstructInstance  (line 240, @0x00000000021b24e0, libserver.so)  // inlines: CFuncConveyor, CFuncWall, CNetworkVarBase, Construct<CFuncConveyor>, EnsureValidValue<float>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncConveyor::CEntityInstanceEntityClass::ConstructInstance(
        CFuncConveyor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 292) = 0;
    *p = &off_400BA70;
  }
  return p;
}


// CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x00000000021b38d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x00000000021b38f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncConveyor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncConveyor::GetEntityClassInternal  (line 240, @0x00000000021b7780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFuncWall::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_conveyor", "CFuncConveyor"
// globals: `guard variable for'CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass, CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass, __dso_handle, CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo, CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo
CEntityClass *__cdecl CFuncConveyor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass);
    CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass._vptr_CEntityClass = off_400B9F0;
    __cxa_guard_release(&`guard variable for'CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass);
    __cxa_atexit(
      CFuncConveyor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncConveyorClass != 0 )
    return &CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass;
  if ( `guard variable for'CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo) != 0 )
  {
    EntityClassInfo = CFuncWall::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo,
      "CFuncConveyor",
      "func_conveyor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo);
  }
  CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass.m_pClassInfo = &CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo;
  CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass.m_pBaseClassInfo = CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncConveyorClass = &CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass;
  CFuncConveyor::GetEntityClassInfo(void)::g_EntityCFuncConveyorClassInfo.m_pClass = &CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass;
  CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncConveyorClass->m_pComponentOverrides = 0;
  return &CFuncConveyor::GetEntityClassInternal(void)::g_EntityCFuncConveyorClass;
}


// CFuncConveyor::GetDataDescMap  (line 263, @0x00000000021873f0, libserver.so)
// globals: CFuncConveyor::m_DataMap
datamap_t *__fastcall CFuncConveyor::GetDataDescMap(CFuncConveyor *const this)
{
  return &CFuncConveyor::m_DataMap;
}


// CFuncConveyor::AddDatadescMetadataKeys  (line 263, @0x00000000021919a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncConveyor::GetEntityClass(void)
void __fastcall CFuncConveyor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncConveyor::GetEntityClass);
}


// CFuncConveyor::GetBaseMap  (line 263, @0x00000000021919c0, libserver.so)
// globals: CFuncWall::m_DataMap
datamap_t *__cdecl CFuncConveyor::GetBaseMap()
{
  return &CFuncWall::m_DataMap;
}


// DataMapInit<CFuncConveyor>  (line 263, @0x00000000021919d0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncConveyor"
// globals: `guard variable for'DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder, CFuncWall::m_DataMap, CFuncConveyor::GetEntityClass(void), CFuncConveyor::m_DataMap, DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncConveyor>(CFuncConveyor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_pszBase = "CFuncConveyor";
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncConveyor>(CFuncConveyor *)::nameHolder,
      &_dso_handle);
  }
  CFuncConveyor::m_DataMap.dataNumFields = 4;
  CFuncConveyor::m_DataMap.baseMap = &CFuncWall::m_DataMap;
  CFuncConveyor::m_DataMap.dataDesc = &DataMapInit<CFuncConveyor>(CFuncConveyor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncConveyor::m_DataMap, CFuncConveyor::GetEntityClass);
  return &CFuncConveyor::m_DataMap;
}


// CFuncConveyor::YouForgotToImplementOrDeclareServerClass  (line 274, @0x0000000002187400, libserver.so)
int __fastcall CFuncConveyor::YouForgotToImplementOrDeclareServerClass(CFuncConveyor *const this)
{
  return 0;
}


// CFuncConveyor::GetServerClass  (line 274, @0x000000000218f180, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncConveyor::GetServerClass(CFuncConveyor *const this)
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


// CFuncConveyor::CFuncConveyor  (line 278, @0x0000000002191aa0, libserver.so)  // inlines: CFuncWall, CNetworkVarBase, EnsureValidValue<float>
// calls: CBaseModelEntity::CBaseModelEntity
void __fastcall CFuncConveyor::CFuncConveyor(CFuncConveyor *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_flConveyorSpeed.m_Value = 0.0;
  this->_vptr_IHandleEntity = &off_400BA70;
}


// CFuncConveyor::Spawn  (line 283, @0x0000000002191b30, libserver.so)  // inlines: QAngle
// calls: AngleVectors, CFuncWall::Spawn, CFuncConveyor::UpdateSpeed, CBaseEntity::AddFlag
void __fastcall CFuncConveyor::Spawn(CFuncConveyor *const this, const CEntityKeyValues *pKeyValues)
{
  vec_t y; // xmm1_4
  vec_t x; // xmm2_4
  float v6; // xmm1_4
  unsigned int m_Value; // eax
  double v8; // xmm0_8
  QAngle angMoveDir; // [rsp+0h] [rbp-20h] BYREF

  y = this->m_vecMoveDir.y;
  x = this->m_vecMoveDir.x;
  angMoveDir.z = this->m_vecMoveDir.z;
  angMoveDir.y = y;
  angMoveDir.x = x;
  AngleVectors(&angMoveDir, &this->m_vecMoveDir, 0, 0);
  CFuncWall::Spawn(this, pKeyValues);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    if ( (m_Value & 2) == 0 )
      goto LABEL_3;
  }
  else
  {
    CBaseEntity::AddFlag(this, 4096);
    if ( (this->m_spawnflags.m_Value & 2) == 0 )
      goto LABEL_3;
  }
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
LABEL_3:
  *&v8 = LODWORD(this->m_flSpeed);
  if ( *&v8 == 0.0 )
  {
    *&v8 = 1120403456;
    this->m_flSpeed = 100.0;
  }
  CFuncConveyor::UpdateSpeed(this, v8, v6);
}


// CFuncConveyor::UpdateSpeed  (line 307, @0x0000000002191ad0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<float>
// callers: CFuncConveyor::Spawn, CFuncConveyor::Use, CFuncConveyor::InputSetSpeed
void __fastcall CFuncConveyor::UpdateSpeed(CFuncConveyor *const this, double a2, float flNewSpeed)
{
  float flNewSpeeda; // [rsp+Ch] [rbp-14h]

  if ( *&a2 != this->m_flConveyorSpeed.m_Value )
  {
    flNewSpeeda = *&a2;
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL, a2, flNewSpeed);
    this->m_flConveyorSpeed.m_Value = flNewSpeeda;
  }
}


// CFuncConveyor::Use  (line 313, @0x0000000002191c00, libserver.so)
// calls: CFuncConveyor::UpdateSpeed
void __fastcall CFuncConveyor::Use(
        CFuncConveyor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  double v5; // xmm0_8

  *&v5 = -this->m_flSpeed;
  this->m_flSpeed = *&v5;
  CFuncConveyor::UpdateSpeed(this, v5, -0.0);
}


// CFuncConveyor::InputToggleDirection  (line 320, @0x0000000002187410, libserver.so)
void __fastcall CFuncConveyor::InputToggleDirection(CFuncConveyor *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 108))(this, inputdata->pActivator, inputdata->pCaller, 3, 0.0);
}


// CFuncConveyor::InputSetSpeed  (line 326, @0x0000000002191c30, libserver.so)  // inlines: Float, operator float
// calls: CFuncConveyor::UpdateSpeed
void __fastcall CFuncConveyor::InputSetSpeed(CFuncConveyor *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  double m_float64; // xmm0_8

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    *&m_float64 = inputdata->value.m_uint;
  this->m_flSpeed = *&m_float64;
  CFuncConveyor::UpdateSpeed(this, m_float64, v2);
}


// CFuncConveyor::GetGroundVelocityToApply  (line 336, @0x0000000002187430, libserver.so)  // inlines: VectorMultiply, operator*, operator=
void __fastcall CFuncConveyor::GetGroundVelocityToApply(CFuncConveyor *const this, Vector *const vecGroundVel)
{
  float m_flSpeed; // xmm0_4
  vec_t v3; // xmm2_4
  vec_t v4; // xmm1_4
  vec_t v5; // xmm0_4

  m_flSpeed = this->m_flSpeed;
  v3 = this->m_vecMoveDir.y * m_flSpeed;
  v4 = this->m_vecMoveDir.z * m_flSpeed;
  v5 = m_flSpeed * this->m_vecMoveDir.x;
  vecGroundVel->y = v3;
  vecGroundVel->z = v4;
  vecGroundVel->x = v5;
}


// CFuncIllusionary::~CFuncIllusionary  (line 344, @0x00000000021b2a40, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncIllusionary::~CFuncIllusionary(CFuncIllusionary *const this)
{
  this->_vptr_IHandleEntity = &off_400C1B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncIllusionary::~CFuncIllusionary  (line 344, @0x00000000021b2a60, libserver.so)  // inlines: ~CFuncIllusionary
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncIllusionary::~CFuncIllusionary(CFuncIllusionary *const this)
{
  this->_vptr_IHandleEntity = &off_400C1B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncIllusionary::Schema_DynamicBinding  (line 346, @0x00000000021b0f00, libserver.so)
// globals: CFuncIllusionary::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncIllusionary::Schema_DynamicBinding(const CFuncIllusionary *const this)
{
  return CFuncIllusionary::s_pSchemaBinding;
}


// CFuncIllusionary::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 346, @0x00000000021b0f10, libserver.so)
// globals: CFuncIllusionary::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncIllusionary::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  return CFuncIllusionary::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncIllusionary::CEntityInstanceEntityClass::DestructInstance  (line 346, @0x00000000021b0f20, libserver.so)  // inlines: Destruct<CFuncIllusionary>
void __fastcall CFuncIllusionary::CEntityInstanceEntityClass::DestructInstance(
        CFuncIllusionary::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncIllusionary::CEntityInstanceEntityClass::FreeInstance  (line 346, @0x00000000021b0f40, libserver.so)
void __fastcall CFuncIllusionary::CEntityInstanceEntityClass::FreeInstance(
        CFuncIllusionary::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncIllusionary::CEntityInstanceEntityClass::CanAllocate  (line 346, @0x00000000021b0f60, libserver.so)
bool __fastcall CFuncIllusionary::CEntityInstanceEntityClass::CanAllocate(
        const CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncIllusionary::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 346, @0x00000000021b0f70, libserver.so)
// globals: CFuncIllusionary::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncIllusionary::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  return CFuncIllusionary::s_pSchemaBinding;
}


// CFuncIllusionary::CEntityInstanceEntityClass::AllocateInstance  (line 346, @0x00000000021b1f80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncIllusionary::CEntityInstanceEntityClass::AllocateInstance(
        CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CFuncIllusionary::CEntityInstanceEntityClass::ConstructInstance  (line 346, @0x00000000021b2410, libserver.so)  // inlines: CFuncIllusionary, Construct<CFuncIllusionary>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncIllusionary::CEntityInstanceEntityClass::ConstructInstance(
        CFuncIllusionary::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_400C1B0;
  }
  return p;
}


// CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 346, @0x00000000021b3970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 346, @0x00000000021b3990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncIllusionary::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncIllusionary::GetEntityClassInternal  (line 346, @0x00000000021b7a20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_illusionary", "CFuncIllusionary"
// globals: `guard variable for'CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass, CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass, __dso_handle, CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo, CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo
CEntityClass *__cdecl CFuncIllusionary::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass);
    CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass._vptr_CEntityClass = off_400C130;
    __cxa_guard_release(&`guard variable for'CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass);
    __cxa_atexit(
      CFuncIllusionary::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncIllusionaryClass != 0 )
    return &CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass;
  if ( `guard variable for'CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo,
      "CFuncIllusionary",
      "func_illusionary",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo);
  }
  CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass.m_pClassInfo = &CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo;
  CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass.m_pBaseClassInfo = CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncIllusionaryClass = &CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass;
  CFuncIllusionary::GetEntityClassInfo(void)::g_EntityCFuncIllusionaryClassInfo.m_pClass = &CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass;
  CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncIllusionaryClass->m_pComponentOverrides = 0;
  return &CFuncIllusionary::GetEntityClassInternal(void)::g_EntityCFuncIllusionaryClass;
}


// CFuncIllusionary::Spawn  (line 352, @0x0000000002188060, libserver.so)  // inlines: SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CFuncIllusionary::Spawn(CFuncIllusionary *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 0);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision);
}


// CFuncIllusionary::Precache  (line 362, @0x00000000021b0a10, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncIllusionary::Precache(CFuncIllusionary *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncRotating::GetDataDescMap  (line 370, @0x0000000002187470, libserver.so)
// globals: CFuncRotating::m_DataMap
datamap_t *__fastcall CFuncRotating::GetDataDescMap(CFuncRotating *const this)
{
  return &CFuncRotating::m_DataMap;
}


// CFuncRotating::AddDatadescMetadataKeys  (line 370, @0x0000000002191c70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncRotating::GetEntityClass(void)
void __fastcall CFuncRotating::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncRotating::GetEntityClass);
}


// CFuncRotating::GetBaseMap  (line 370, @0x0000000002191c90, libserver.so)
datamap_t *__cdecl CFuncRotating::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncRotating>  (line 370, @0x00000000021aecb0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncRotating"
// globals: `guard variable for'DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder, `guard variable for'DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc, CFuncRotating::GetEntityClass(void), CFuncRotating::m_DataMap, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncRotating>(CFuncRotating *a1)
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
  char *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  char **v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  char **v25; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase = "CFuncRotating";
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder,
      &_dso_handle);
  }
  CFuncRotating::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "SpinUpMove");
    m_Size = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[12].fieldName = v2;
    v6 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "SpinDownMove");
    v7 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[13].fieldName = v6;
    v10 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v10, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "HurtTouch");
    v11 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[14].fieldName = v10;
    v14 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v14, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "RotatingUse");
    v15 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[15].fieldName = v14;
    v18 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v18, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "RotateMove");
    v19 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v20 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v20 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v20 + 1;
    v21 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = v18;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[16].fieldName = v18;
    v22 = operator new[](DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v22, DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_pszBase), "ReverseMove");
    v23 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    v24 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size == DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory, 1);
      v24 = DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Size = v24 + 1;
    v25 = &DataMapInit<CFuncRotating>(CFuncRotating *)::nameHolder.m_Names.m_Memory.m_pMemory[v23];
    if ( v25 != 0 )
      *v25 = v22;
    DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[17].fieldName = v22;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc);
  }
  CFuncRotating::m_DataMap.dataNumFields = 29;
  CFuncRotating::m_DataMap.dataDesc = &DataMapInit<CFuncRotating>(CFuncRotating *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncRotating::m_DataMap, CFuncRotating::GetEntityClass);
  return &CFuncRotating::m_DataMap;
}


// CFuncRotating::YouForgotToImplementOrDeclareServerClass  (line 409, @0x0000000002187480, libserver.so)
int __fastcall CFuncRotating::YouForgotToImplementOrDeclareServerClass(CFuncRotating *const this)
{
  return 0;
}


// CFuncRotating::GetServerClass  (line 409, @0x000000000218f280, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncRotating::GetServerClass(CFuncRotating *const this)
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


// CFuncRotating::Spawn  (line 415, @0x000000000218e900, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<float>, GetValue, GetValue<float>, HasSpawnFlags, SetSolid, String, ToCStr, V_strlen, atof, operator*, operator=, operator[]
// calls: CBaseEntity::Spawn, strlen, CEntityKeyValues::HasValue, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, AllocPooledString, strtod (14 total)
// strings: "DoorSound.Null", "No conversion from %s to float now\n"
// globals: CFuncRotating::RotatingUse(CBaseEntity *,CBaseEntity *,USE_TYPE,float), CFuncRotating::HurtTouch(CBaseEntity *), CBaseEntity::SUB_CallUseToggle(void), CEntityKeyValues::sm_EmptyVariant, jpt_218EDEE, jpt_218EE16
void __fastcall CFuncRotating::Spawn(CFuncRotating *const this, const CEntityKeyValues *pKeyValues)
{
  const char *m_pAsString; // rdi
  double m_float64; // xmm1_8
  double v6; // xmm2_8
  __int64 v7; // xmm3_8
  double v8; // xmm4_8
  __int64 m_flVolume_low; // xmm0_8
  unsigned int m_Value; // eax
  __int64 z_low; // xmm1_8
  __int64 x_low; // xmm3_8
  float m_flMaxSpeed; // xmm0_4
  float v14; // xmm0_4
  unsigned int v15; // eax
  QAngle *LocalAngles; // rax
  bool v17; // zf
  float v18; // xmm0_4
  double v19; // xmm1_8
  int v20; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v21; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v24; // rdx
  CEntityVariant *v25; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v28; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 v32; // ax
  int16 m_type; // ax
  float v34; // xmm0_4
  float m_char; // xmm1_4
  __m128d v36; // xmm0
  float m_uint64; // xmm0_4
  const char *v38; // rax
  const char *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  UtlSymLargeId_t v42[6]; // [rsp+10h] [rbp-30h] BYREF

  CBaseEntity::Spawn(this, pKeyValues);
  m_pAsString = this->m_NoiseRunning.u.m_pAsString;
  if ( m_pAsString == 0 || strlen(m_pAsString) == 0 )
  {
    AllocPooledString(v42, "DoorSound.Null");
    this->m_NoiseRunning.u.m_Id = v42[0];
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, -1067701035) )
    goto LABEL_4;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_59:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_60;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v28 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v28) == -1067701035 )
      goto LABEL_54;
LABEL_51:
    if ( m_nCount <= ++v28 )
      goto LABEL_59;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v28] != -1067701035 )
    goto LABEL_51;
LABEL_54:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v30 = pKeyValues->m_keyValues.m_pElements;
  else
    v30 = 0;
  p_m_value = &v30[v28].m_value;
LABEL_60:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      v34 = 0.0;
      break;
    case 1:
      v34 = p_m_value->m_float / 100.0;
      break;
    case 5:
      v34 = p_m_value->m_int / 100.0;
      break;
    case 6:
      v34 = p_m_value->m_char / 100.0;
      break;
    case 26:
      v34 = p_m_value->m_uint64 / 100.0;
      break;
    case 30:
      m_uint64 = strtod(p_m_value->m_pszString, 0);
      goto LABEL_80;
    case 33:
      if ( p_m_value->m_int64 < 0 )
      {
        v40 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
        m_uint64 = v40 + v40;
      }
      else
      {
        m_uint64 = p_m_value->m_uint64;
      }
LABEL_80:
      v34 = m_uint64 / 100.0;
      break;
    case 34:
      v34 = p_m_value->m_float64 / 100.0;
      break;
    case 37:
      v34 = p_m_value->m_int / 100.0;
      break;
    default:
      v38 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v38);
      v34 = 0.0;
      break;
  }
  this->m_flFanFriction = v34;
LABEL_4:
  if ( CEntityKeyValues::HasValue(pKeyValues, 1555011263) )
  {
    v20 = pKeyValues->m_keyHashes.m_nCount;
    if ( v20 > 0 )
    {
      v21 = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; v20 > i; ++i )
      {
        if ( v21 != 0 )
        {
          v23 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v21 > 9 )
            v23 = pKeyValues->m_keyHashes.m_pElements;
          if ( v23[i] == 1555011263 )
          {
LABEL_43:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v24 = pKeyValues->m_keyValues.m_pElements;
            else
              v24 = 0;
            v25 = &v24[i].m_value;
            goto LABEL_58;
          }
        }
        else if ( *(4 * i) == 1555011263 )
        {
          goto LABEL_43;
        }
      }
    }
    v25 = &CEntityKeyValues::sm_EmptyVariant;
LABEL_58:
    v32 = v25->m_type;
    switch ( v32 )
    {
      case 0:
        m_float64 = 0.0;
        goto LABEL_64;
      case 1:
        *&m_float64 = v25->m_uint;
        *&m_float64 = *&m_float64 / 10.0;
        goto LABEL_64;
      case 5:
        *&m_float64 = v25->m_int / 10.0;
        goto LABEL_64;
      case 6:
        m_char = v25->m_char;
        goto LABEL_69;
      case 26:
        *&m_float64 = v25->m_uint64 / 10.0;
        goto LABEL_64;
      case 30:
        v36.m128d_f64[0] = strtod(v25->m_pszString, 0);
        m_float64 = _mm_movedup_pd(v36).m128d_f64[0];
        *&m_float64 = *&m_float64 / 10.0;
        goto LABEL_64;
      case 33:
        if ( v25->m_int64 < 0 )
        {
          v41 = v25->m_uint64 & 1 | (v25->m_uint64 >> 1);
          m_char = v41 + v41;
        }
        else
        {
          m_char = v25->m_uint64;
        }
LABEL_69:
        *&m_float64 = m_char / 10.0;
        goto LABEL_64;
      case 34:
        m_float64 = v25->m_float64;
        *&m_float64 = *&m_float64 / 10.0;
        goto LABEL_64;
      case 37:
        *&m_float64 = v25->m_int / 10.0;
LABEL_64:
        m_flVolume_low = 1065353216;
        this->m_flVolume = *&m_float64;
        if ( *&m_float64 > 1.0 )
          goto LABEL_65;
        m_flVolume_low = 0;
        if ( *&m_float64 < 0.0 )
          goto LABEL_65;
        goto LABEL_88;
      default:
        v39 = VariantFieldTypeName(v32);
        Warning("No conversion from %s to float now\n", v39);
        m_float64 = 0.0;
LABEL_88:
        m_flVolume_low = *&m_float64;
LABEL_65:
        LODWORD(this->m_flVolume) = m_flVolume_low;
        break;
    }
  }
  else
  {
    m_flVolume_low = LODWORD(this->m_flVolume);
  }
  if ( *&m_flVolume_low == 0.0 )
  {
    this->m_flVolume = 1.0;
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x80u) == 0 )
      goto LABEL_30;
LABEL_8:
    this->m_flAttenuation = 2.0;
  }
  else
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x80u) != 0 )
      goto LABEL_8;
LABEL_30:
    if ( (m_Value & 0x100) != 0 )
      this->m_flAttenuation = 1.25;
    else
      this->m_flAttenuation = 0.80000001;
  }
  if ( this->m_flFanFriction == 0.0 )
  {
    this->m_flFanFriction = 1.0;
    if ( (m_Value & 4) == 0 )
      goto LABEL_26;
LABEL_11:
    this->m_vecMoveAng.x = 0.0;
    this->m_vecMoveAng.y = 0.0;
    this->m_vecMoveAng.z = 1.0;
  }
  else
  {
    if ( (m_Value & 4) != 0 )
      goto LABEL_11;
LABEL_26:
    if ( (m_Value & 8) != 0 )
    {
      this->m_vecMoveAng.x = 1.0;
      this->m_vecMoveAng.y = 0.0;
    }
    else
    {
      this->m_vecMoveAng.x = 0.0;
      this->m_vecMoveAng.y = 1.0;
    }
    this->m_vecMoveAng.z = 0.0;
  }
  if ( (m_Value & 2) != 0 )
  {
    m_flVolume_low = 0x80000000LL;
    z_low = LODWORD(this->m_vecMoveAng.z);
    x_low = LODWORD(this->m_vecMoveAng.x);
    *&v6 = -this->m_vecMoveAng.y;
    this->m_vecMoveAng.y = *&v6;
    *&m_float64 = z_low ^ 0x80000000LL;
    this->m_vecMoveAng.z = *&m_float64;
    v7 = x_low ^ 0x80000000LL;
    LODWORD(this->m_vecMoveAng.x) = v7;
  }
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6, *&m_flVolume_low, m_float64, v6, *&v7, v8, 0.0);
  if ( (this->m_spawnflags.m_Value & 0x40) != 0 )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  m_flMaxSpeed = this->m_flMaxSpeed;
  this->m_pfnUse.__delta = 0;
  v14 = fabs(m_flMaxSpeed);
  this->m_pfnUse.__pfn = CFuncRotating::RotatingUse;
  if ( v14 == 0.0 )
  {
    this->m_flMaxSpeed = 100.0;
    v15 = this->m_spawnflags.m_Value;
    if ( (v15 & 1) != 0 )
      goto LABEL_24;
  }
  else
  {
    v15 = this->m_spawnflags.m_Value;
    this->m_flMaxSpeed = v14;
    if ( (v15 & 1) == 0 )
      goto LABEL_18;
LABEL_24:
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_CallUseToggle, 0.0, 0, 0);
    v18 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::SetNextThink(this, v18 + 0.2, v19, 0);
    v15 = this->m_spawnflags.m_Value;
  }
LABEL_18:
  if ( (v15 & 0x20) != 0 )
  {
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CFuncRotating::HurtTouch;
  }
  this->m_flSpeed = 0.0;
  (*(this->_vptr_IHandleEntity + 49))(this);
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v17 = (this->m_spawnflags.m_Value & 0x400) == 0;
  this->m_angStart = *LocalAngles;
  if ( !v17 )
  {
    this->m_vecClientOrigin = *CBaseEntity::GetLocalOrigin(this);
    this->m_vecClientAngles = *CBaseEntity::GetLocalAngles(this);
  }
}


// CFuncRotating::CreateVPhysics  (line 562, @0x00000000021990c0, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncRotating::CreateVPhysics(CFuncRotating *const this)
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


// CFuncRotating::Precache  (line 572, @0x00000000021b0a40, libserver.so)  // inlines: Precache, String, ToCStr
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound, CBaseEntity::PrecacheModelFromKeyValues
// strings: "DoorSound.Null"
void __fastcall CFuncRotating::Precache(CFuncRotating *const this, const CEntityPrecacheContext *pContext)
{
  const char *m_pAsString; // rdi

  CEntityInstance::Precache(this, pContext);
  if ( this->m_NoiseRunning.u.m_Id != 0 && *(m_pAsString = this->m_NoiseRunning.u.m_pAsString) != 0 )
    CBaseEntity::PrecacheScriptSound(m_pAsString, pContext);
  else
    CBaseEntity::PrecacheScriptSound("DoorSound.Null", pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncRotating::Activate  (line 590, @0x0000000002189160, libserver.so)  // inlines: operator!=
// calls: CBaseModelEntity::Activate, CBaseEntity::SetMoveDoneTime
// globals: CFuncRotating::SpinUpMove(void)
void __fastcall CFuncRotating::Activate(CFuncRotating *const this, ActivateType_t activateType)
{
  float v3; // xmm1_4

  CBaseModelEntity::Activate(this, activateType);
  if ( vec3_angle.x != this->m_vecAngVelocity.x
    || vec3_angle.y != this->m_vecAngVelocity.y
    || vec3_angle.z != this->m_vecAngVelocity.z )
  {
    this->m_pfnMoveDone.__pfn = CFuncRotating::SpinUpMove;
    this->m_pfnMoveDone.__delta = 0;
    CBaseEntity::SetMoveDoneTime(this, 1.5, v3);
  }
}


// CFuncRotating::HurtTouch  (line 610, @0x0000000002188300, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*=, operator-
// calls: CBaseEntity::GetDamageOptions, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsVelocity, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CFuncRotating::HurtTouch(CFuncRotating *const this, CBaseEntity *pOther)
{
  float v4; // xmm0_4
  double v5; // xmm0_8
  float v6; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  float m_flBlockDamage; // xmm0_4
  Vector vecNewVelocity; // [rsp+10h] [rbp-D0h] BYREF
  double v12; // [rsp+20h] [rbp-C0h]
  float v13; // [rsp+28h] [rbp-B8h]
  CTakeDamageInfo info; // [rsp+30h] [rbp-B0h] BYREF

  if ( CBaseEntity::GetDamageOptions(pOther) != DamageOptions_t::DAMAGE_NO )
  {
    v4 = fsqrt(
           ((this->m_vecAngVelocity.x * this->m_vecAngVelocity.x) + (this->m_vecAngVelocity.y * this->m_vecAngVelocity.y))
         + (this->m_vecAngVelocity.z * this->m_vecAngVelocity.z))
       / 10.0;
    this->m_flBlockDamage = v4;
    CTakeDamageInfo::CTakeDamageInfo(&info, this, this, v4, 1, 0);
    CBaseEntity::TakeDamage(pOther, &info);
    v5 = (*(this->_vptr_IHandleEntity + 62))(this);
    v13 = v6;
    v12 = v5;
    AbsOrigin = CBaseEntity::GetAbsOrigin(pOther);
    v8 = AbsOrigin->z - v13;
    v9 = AbsOrigin->x - *&v12;
    vecNewVelocity.y = AbsOrigin->y - *(&v12 + 1);
    vecNewVelocity.z = v8;
    vecNewVelocity.x = v9;
    VectorNormalize(&vecNewVelocity);
    m_flBlockDamage = this->m_flBlockDamage;
    vecNewVelocity.x = vecNewVelocity.x * m_flBlockDamage;
    vecNewVelocity.y = vecNewVelocity.y * m_flBlockDamage;
    vecNewVelocity.z = m_flBlockDamage * vecNewVelocity.z;
    CBaseEntity::SetAbsVelocity(pOther, &vecNewVelocity);
    CTakeDamageInfo::~CTakeDamageInfo(&info);
  }
}


// CFuncRotating::RampPitchVol  (line 637, @0x00000000021a6c60, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CFuncRotating::UpdateSpeed
void __fastcall CFuncRotating::RampPitchVol(CFuncRotating *const this)
{
  float m_flSpeed; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  int v6; // r13d
  float v7; // xmm0_4
  float v8; // r15d
  const Vector *AbsOrigin; // r14
  float v10; // xmm1_4
  bool v11; // zf
  const char *m_pAsString; // rax
  float m_flAttenuation; // xmm1_4
  soundlevel_t v14; // eax
  CEntityIndex v15; // eax
  float fvol; // [rsp+Ch] [rbp-1D4h]
  EmitSound_t params; // [rsp+10h] [rbp-1D0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v19; // [rsp+1A8h] [rbp-38h]

  m_flSpeed = this->m_flSpeed;
  v19 = __readfsqword(0x28u);
  v3 = fabs(m_flSpeed) / this->m_flMaxSpeed;
  v4 = 1.0;
  v5 = this->m_flVolume * v3;
  if ( v5 <= 1.0 )
    v4 = fmaxf(0.0, v5);
  fvol = v4;
  v6 = 255;
  v7 = (v3 * 70.0) + 30.0;
  if ( v7 <= 255.0 )
  {
    LOBYTE(v6) = 0;
    if ( v7 >= 0.0 )
    {
      v6 = v7;
      if ( v7 == 100 )
        v6 = 99;
    }
  }
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flAttenuation)));
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, AbsOrigin);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, AbsOrigin, v8, v10);
  CRecipientFilter::MakeReliable(&filter);
  v11 = this->m_NoiseRunning.u.m_Id == 0;
  params.m_pOrigin = 0;
  m_pAsString = "";
  params.m_flSoundTime = 0.0;
  params.m_pflSoundDuration = 0;
  params.m_bEmitCloseCaption = 1;
  params.m_bWarnOnMissingCloseCaption = 0;
  params.m_bWarnOnDirectWaveReference = 0;
  params.m_nSpeakerEntity.m_Data = -1;
  params.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&params.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  params.m_nChannel = 6;
  if ( !v11 )
    m_pAsString = this->m_NoiseRunning.u.m_pAsString;
  m_flAttenuation = this->m_flAttenuation;
  params.m_pSoundName = m_pAsString;
  params.m_flVolume = fvol;
  if ( m_flAttenuation == 0.0 )
    v14 = soundlevel_t::SNDLVL_NONE;
  else
    v14 = ((20.0 / m_flAttenuation) + 50.0);
  params.m_nPitch = v6;
  params.m_SoundLevel = v14;
  params.m_nFlags = 3;
  v15.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CBaseEntity::EmitSound(&filter, v15, &params);
  params.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
    if ( (params.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&params.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CFuncRotating::GetNextMoveInterval  (line 674, @0x0000000002191ca0, libserver.so)
float __fastcall CFuncRotating::GetNextMoveInterval(const CFuncRotating *const this)
{
  if ( this->m_bStopAtStartPos )
    return gpGlobals->interval_per_tick;
  else
    return 0.1;
}


// CFuncRotating::UpdateSpeed  (line 687, @0x00000000021a6f70, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, operator*, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CFuncRotating::RampPitchVol, CBaseEntity::SetLocalAngularVelocity, CEntityInstance::GetEntityIndex, CBaseEntity::StopSound, CBaseEntity::GetLocalAngles, AngleDiff, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CBaseEntity::EmitSound (17 total)
// callers: CFuncRotating::SpinDown, CFuncRotating::SetTargetSpeed, CFuncRotating::SpinUpMove
void __fastcall CFuncRotating::UpdateSpeed(CFuncRotating *const this, float a2, float flNewSpeed)
{
  float m_flMaxSpeed; // xmm1_4
  float m_flSpeed; // xmm3_4
  bool v6; // zf
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // xmm0_4
  const char *v11; // r12
  CEntityIndex v12; // eax
  __int64 v13; // r12
  const QAngle *LocalAngles; // rax
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // r14d
  const Vector *AbsOrigin; // r12
  float v19; // xmm1_4
  const char *m_pAsString; // rax
  float m_flAttenuation; // xmm1_4
  soundlevel_t v22; // eax
  CEntityIndex v23; // eax
  float flOldSpeed; // [rsp+8h] [rbp-1C8h]
  EmitSound_t ep; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v28; // [rsp+1A8h] [rbp-28h]

  v28 = __readfsqword(0x28u);
  m_flMaxSpeed = this->m_flMaxSpeed;
  m_flSpeed = this->m_flSpeed;
  if ( a2 <= m_flMaxSpeed )
    m_flMaxSpeed = fmaxf(-m_flMaxSpeed, a2);
  v6 = !this->m_bStopAtStartPos;
  this->m_flSpeed = m_flMaxSpeed;
  if ( !v6 )
  {
    if ( this->m_vecMoveAng.x == 0.0 )
    {
      if ( this->m_vecMoveAng.y == 0.0 )
        v13 = 8;
      else
        v13 = 4;
    }
    else
    {
      v13 = 0;
    }
    flOldSpeed = m_flSpeed;
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v16 = AngleDiff(*(&LocalAngles->x + v13), v15);
    m_flSpeed = flOldSpeed;
    if ( v16 < 0.0 && a2 > 0.0 || v16 > 0.0 && a2 < 0.0 )
    {
      m_flMaxSpeed = -a2;
      this->m_flSpeed = -a2;
    }
    else
    {
      m_flMaxSpeed = this->m_flSpeed;
    }
  }
  if ( m_flSpeed == 0.0 )
  {
    if ( m_flMaxSpeed == 0.0 )
    {
LABEL_6:
      CFuncRotating::RampPitchVol(this);
      goto LABEL_7;
    }
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flAttenuation)));
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, AbsOrigin);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    CPASAttenuationFilter::Filter(&filter, AbsOrigin, v17, v19);
    CRecipientFilter::MakeReliable(&filter);
    v6 = this->m_NoiseRunning.u.m_Id == 0;
    ep.m_nFlags = 0;
    m_pAsString = "";
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    if ( !v6 )
      m_pAsString = this->m_NoiseRunning.u.m_pAsString;
    m_flAttenuation = this->m_flAttenuation;
    ep.m_pSoundName = m_pAsString;
    ep.m_flVolume = 0.0099999998;
    if ( m_flAttenuation == 0.0 )
      v22 = soundlevel_t::SNDLVL_NONE;
    else
      v22 = ((20.0 / m_flAttenuation) + 50.0);
    ep.m_SoundLevel = v22;
    ep.m_nPitch = 30;
    v23.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v23, &ep);
    CFuncRotating::RampPitchVol(this);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  else
  {
    if ( m_flMaxSpeed != 0.0 )
      goto LABEL_6;
    v11 = "";
    if ( this->m_NoiseRunning.u.m_Id != 0 )
      v11 = this->m_NoiseRunning.u.m_pAsString;
    v12.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::StopSound(v12, 6, v11, 0);
  }
LABEL_7:
  v7 = this->m_flSpeed;
  v8 = this->m_vecMoveAng.y * v7;
  v9 = this->m_vecMoveAng.z * v7;
  *&v10 = v7 * this->m_vecMoveAng.x;
  *(&ep.m_nChannel + 1) = v8;
  *&ep.m_pSoundName = v9;
  ep.m_nChannel = v10;
  CBaseEntity::SetLocalAngularVelocity(this, &ep);
}


// CFuncRotating::SpinUpMove  (line 751, @0x00000000021a7a80, libserver.so)  // inlines: GetNextMoveInterval
// calls: CFuncRotating::UpdateSpeed, CFuncRotating::RotateMove, CBaseEntity::SetMoveDoneTime
// globals: CFuncRotating::RotateMove(void)
void __fastcall CFuncRotating::SpinUpMove(CFuncRotating *const this)
{
  float m_flTargetSpeed; // xmm1_4
  float v3; // xmm0_4
  bool m_bStopAtStartPos; // r12
  float v5; // xmm1_4

  m_flTargetSpeed = this->m_flTargetSpeed;
  v3 = fabs(this->m_flSpeed) + this->m_flMaxSpeed * 0.2 * this->m_flFanFriction;
  if ( fabs(v3) < fabs(m_flTargetSpeed) )
  {
    if ( m_flTargetSpeed < 0.0 )
      CFuncRotating::UpdateSpeed(this, -v3, -0.0);
    else
      CFuncRotating::UpdateSpeed(this, v3, m_flTargetSpeed);
    if ( this->m_bStopAtStartPos )
      goto LABEL_5;
  }
  else
  {
    m_bStopAtStartPos = this->m_bStopAtStartPos;
    CFuncRotating::UpdateSpeed(this, this->m_flTargetSpeed, m_flTargetSpeed);
    if ( !m_bStopAtStartPos )
    {
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CFuncRotating::RotateMove;
      CFuncRotating::RotateMove(this);
    }
    if ( this->m_bStopAtStartPos )
    {
LABEL_5:
      CBaseEntity::SetMoveDoneTime(this, gpGlobals->interval_per_tick, v5);
      return;
    }
  }
  CBaseEntity::SetMoveDoneTime(this, 0.1, v5);
}


// CFuncRotating::SpinDown  (line 793, @0x00000000021a73f0, libserver.so)
// calls: CFuncRotating::UpdateSpeed
// callers: CFuncRotating::ReverseMove, CFuncRotating::SpinDownMove
_BOOL8 __fastcall CFuncRotating::SpinDown(CFuncRotating *const this, float a2, float flTargetSpeed)
{
  __m128d v3; // xmm2
  float v4; // xmm1_4
  float v5; // xmm5_4
  _BOOL4 v6; // ebx

  v3.m128d_f64[1] = fabs(this->m_flSpeed);
  v3.m128d_f64[0] = v3.m128d_f64[1] - this->m_flMaxSpeed * 0.1 * this->m_flFanFriction;
  v4 = _mm_movedup_pd(v3).m128d_f64[0];
  if ( v4 < 0.0 )
  {
    v5 = 0.0;
    v4 = 0.0;
  }
  else
  {
    v5 = fabs(v4);
  }
  if ( fabs(a2) >= v5 )
  {
    v4 = a2;
    v6 = !this->m_bStopAtStartPos;
  }
  else
  {
    v6 = 0;
    if ( this->m_flSpeed < 0.0 )
    {
      v6 = 0;
      v4 = -v4;
    }
  }
  CFuncRotating::UpdateSpeed(this, v4, v4);
  return v6;
}


// CFuncRotating::SpinDownMove  (line 832, @0x00000000021a7800, libserver.so)  // inlines: GetNextMoveInterval
// calls: CFuncRotating::SpinDown, CBaseEntity::SetMoveDoneTime, CFuncRotating::RotateMove
// globals: CFuncRotating::RotateMove(void)
void __fastcall CFuncRotating::SpinDownMove(CFuncRotating *const this)
{
  float v1; // xmm1_4
  float v3; // xmm1_4
  float interval_per_tick; // xmm0_4

  if ( CFuncRotating::SpinDown(this, this->m_flTargetSpeed, v1) )
  {
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CFuncRotating::RotateMove;
    CFuncRotating::RotateMove(this);
  }
  else
  {
    interval_per_tick = 0.1;
    if ( this->m_bStopAtStartPos )
      interval_per_tick = gpGlobals->interval_per_tick;
    CBaseEntity::SetMoveDoneTime(this, interval_per_tick, v3);
  }
}


// CFuncRotating::ReverseMove  (line 853, @0x00000000021a7620, libserver.so)  // inlines: GetNextMoveInterval
// calls: CFuncRotating::SpinDown, CBaseEntity::SetMoveDoneTime, CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::ReverseMove(CFuncRotating *const this)
{
  float v1; // xmm1_4
  float v3; // xmm1_4
  float interval_per_tick; // xmm0_4

  if ( CFuncRotating::SpinDown(this, 0.0, v1) )
  {
    CFuncRotating::SetTargetSpeed(this, this->m_flTargetSpeed, v3);
  }
  else
  {
    interval_per_tick = 0.1;
    if ( this->m_bStopAtStartPos )
      interval_per_tick = gpGlobals->interval_per_tick;
    CBaseEntity::SetMoveDoneTime(this, interval_per_tick, v3);
  }
}


// CFuncRotating::RotateMove  (line 870, @0x00000000021a7690, libserver.so)  // inlines: GetNextMoveInterval, operator*
// calls: CBaseEntity::SetMoveDoneTime, CBaseEntity::GetLocalAngles, AngleDiff, CFuncRotating::SetTargetSpeed, CBaseEntity::SetLocalAngles
// callers: CFuncRotating::SpinDownMove, CFuncRotating::SpinUpMove
void __fastcall CFuncRotating::RotateMove(CFuncRotating *const this)
{
  float v1; // xmm1_4
  float v3; // xmm1_4
  QAngle *p_z; // r14
  __int64 v5; // r12
  const QAngle *LocalAngles; // rax
  float v7; // xmm2_4
  float v8; // xmm0_4
  float interval_per_tick; // xmm1_4
  vec_t v10; // xmm4_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  float m_flSpeed; // xmm1_4
  QAngle avelpertick; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::SetMoveDoneTime(this, 10.0, v1);
  if ( this->m_bStopAtStartPos )
  {
    CBaseEntity::SetMoveDoneTime(this, gpGlobals->interval_per_tick, v3);
    if ( this->m_vecMoveAng.x == 0.0 )
    {
      if ( this->m_vecMoveAng.y == 0.0 )
      {
        p_z = &avelpertick.z;
        v5 = 8;
      }
      else
      {
        p_z = &avelpertick.y;
        v5 = 4;
      }
    }
    else
    {
      p_z = &avelpertick;
      v5 = 0;
    }
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    v8 = AngleDiff(*(&LocalAngles->x + v5), v7);
    interval_per_tick = gpGlobals->interval_per_tick;
    v10 = this->m_vecAngVelocity.y * interval_per_tick;
    v11 = this->m_vecAngVelocity.z * interval_per_tick;
    v12 = interval_per_tick * this->m_vecAngVelocity.x;
    avelpertick.y = v10;
    avelpertick.z = v11;
    avelpertick.x = v12;
    m_flSpeed = fabs(p_z->x);
    if ( m_flSpeed >= fabs(v8) )
      goto LABEL_10;
    if ( v8 < 0.0 )
    {
      m_flSpeed = this->m_flSpeed;
      if ( m_flSpeed > 0.0 )
        goto LABEL_10;
    }
    if ( v8 > 0.0 && this->m_flSpeed < 0.0 )
    {
LABEL_10:
      CFuncRotating::SetTargetSpeed(this, 0.0, m_flSpeed);
      CBaseEntity::SetLocalAngles(this, &this->m_angStart);
      this->m_bStopAtStartPos = 0;
    }
  }
}


// CFuncRotating::GetMoveSpeed  (line 913, @0x0000000002191cd0, libserver.so)
float __fastcall CFuncRotating::GetMoveSpeed(CFuncRotating *const this, float a2, float flSpeed)
{
  float x; // xmm2_4

  x = this->m_vecMoveAng.x;
  if ( x == 0.0 && (x = this->m_vecMoveAng.y) == 0.0 )
    return a2 * this->m_vecMoveAng.z;
  else
    return a2 * x;
}


// CFuncRotating::SetTargetSpeed  (line 933, @0x00000000021a74b0, libserver.so)  // inlines: GetNextMoveInterval
// calls: CBaseEntity::SetMoveDoneTime, CFuncRotating::UpdateSpeed
// callers: CFuncRotating::ReverseMove, CFuncRotating::RotateMove, CFuncRotating::RotatingUse, CFuncRotating::InputReverse, CFuncRotating::InputSetSpeed, CFuncRotating::InputStart, CFuncRotating::InputStartForward, CFuncRotating::InputStartBackward, CFuncRotating::InputStop, CFuncRotating::InputStopAtStartPos, CFuncRotating::InputSnapToStartPos, CFuncRotating::InputToggle
// globals: CFuncRotating::SpinUpMove(void), CFuncRotating::ReverseMove(void), CFuncRotating::RotateMove(void), CFuncRotating::SpinDownMove(void)
void __fastcall CFuncRotating::SetTargetSpeed(CFuncRotating *const this, float a2, float flSpeed)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  bool v6; // zf
  float m_flSpeed; // xmm3_4
  float v8; // xmm3_4
  float v9; // xmm0_4

  v4 = NAN;
  v5 = fabs(a2);
  if ( this->m_bReversed )
    v5 = -v5;
  v6 = (this->m_spawnflags.m_Value & 0x10) == 0;
  this->m_flTargetSpeed = v5;
  if ( v6 )
  {
    CFuncRotating::UpdateSpeed(this, v5, NAN);
    this->m_pfnMoveDone.__delta = 0;
    this->m_pfnMoveDone.__pfn = CFuncRotating::RotateMove;
  }
  else
  {
    m_flSpeed = this->m_flSpeed;
    if ( m_flSpeed > 0.0 && v5 < 0.0 || m_flSpeed < 0.0 && v5 > 0.0 )
    {
      v6 = !this->m_bStopAtStartPos;
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CFuncRotating::ReverseMove;
      if ( v6 )
        goto LABEL_13;
LABEL_10:
      CBaseEntity::SetMoveDoneTime(this, gpGlobals->interval_per_tick, v4);
      return;
    }
    v8 = fabs(m_flSpeed);
    v9 = fabs(v5);
    if ( v9 <= v8 )
    {
      this->m_pfnMoveDone.__delta = 0;
      if ( v8 <= v9 )
        this->m_pfnMoveDone.__pfn = CFuncRotating::RotateMove;
      else
        this->m_pfnMoveDone.__pfn = CFuncRotating::SpinDownMove;
    }
    else
    {
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CFuncRotating::SpinUpMove;
    }
  }
  if ( this->m_bStopAtStartPos )
    goto LABEL_10;
LABEL_13:
  CBaseEntity::SetMoveDoneTime(this, 0.1, v4);
}


// CFuncRotating::RotatingUse  (line 1002, @0x00000000021a7880, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::RotatingUse(
        CFuncRotating *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value,
        float a6)
{
  if ( this->m_flSpeed == 0.0 )
    CFuncRotating::SetTargetSpeed(this, this->m_flMaxSpeed, a6);
  else
    CFuncRotating::SetTargetSpeed(this, 0.0, a6);
}


// CFuncRotating::InputReverse  (line 1024, @0x00000000021a78b0, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputReverse(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_flSpeed; // xmm0_4

  m_flSpeed = this->m_flSpeed;
  this->m_bStopAtStartPos = 0;
  this->m_bReversed ^= 1u;
  CFuncRotating::SetTargetSpeed(this, m_flSpeed, v2);
}


// CFuncRotating::InputSetSpeed  (line 1036, @0x00000000021a78d0, libserver.so)  // inlines: Float, operator float
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputSetSpeed(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v3; // xmm1_4

  this->m_bStopAtStartPos = 0;
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  v3 = fabs(m_float64);
  this->m_bReversed = m_float64 < 0.0;
  CFuncRotating::SetTargetSpeed(this, fminf(1.0, v3) * this->m_flMaxSpeed, v3);
}


// CFuncRotating::InputStart  (line 1049, @0x00000000021a7930, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputStart(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_flMaxSpeed; // xmm0_4

  m_flMaxSpeed = this->m_flMaxSpeed;
  this->m_bStopAtStartPos = 0;
  CFuncRotating::SetTargetSpeed(this, m_flMaxSpeed, v2);
}


// CFuncRotating::InputStartForward  (line 1059, @0x00000000021a7950, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputStartForward(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_flMaxSpeed; // xmm0_4

  m_flMaxSpeed = this->m_flMaxSpeed;
  this->m_bReversed = 0;
  CFuncRotating::SetTargetSpeed(this, m_flMaxSpeed, v2);
}


// CFuncRotating::InputStartBackward  (line 1069, @0x00000000021a7970, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputStartBackward(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float m_flMaxSpeed; // xmm0_4

  m_flMaxSpeed = this->m_flMaxSpeed;
  this->m_bStopAtStartPos = 0;
  this->m_bReversed = 1;
  CFuncRotating::SetTargetSpeed(this, m_flMaxSpeed, v2);
}


// CFuncRotating::InputStop  (line 1080, @0x00000000021a7990, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputStop(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  this->m_bStopAtStartPos = 0;
  CFuncRotating::SetTargetSpeed(this, 0.0, v2);
}


// CFuncRotating::InputStopAtStartPos  (line 1090, @0x00000000021a79b0, libserver.so)  // inlines: GetNextMoveInterval
// calls: CFuncRotating::SetTargetSpeed, CBaseEntity::SetMoveDoneTime
void __fastcall CFuncRotating::InputStopAtStartPos(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4
  float v4; // xmm1_4

  this->m_bStopAtStartPos = 1;
  CFuncRotating::SetTargetSpeed(this, this->m_flMaxSpeed, v2);
  if ( this->m_bStopAtStartPos )
    CBaseEntity::SetMoveDoneTime(this, gpGlobals->interval_per_tick, v4);
  else
    CBaseEntity::SetMoveDoneTime(this, 0.1, v4);
}


// CFuncRotating::InputSnapToStartPos  (line 1101, @0x00000000021a7a20, libserver.so)
// calls: CFuncRotating::SetTargetSpeed, CBaseEntity::SetLocalAngles
void __fastcall CFuncRotating::InputSnapToStartPos(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  this->m_bStopAtStartPos = 0;
  CFuncRotating::SetTargetSpeed(this, 0.0, v2);
  CBaseEntity::SetLocalAngles(this, &this->m_angStart);
}


// CFuncRotating::InputSetStartPos  (line 1108, @0x000000000218c120, libserver.so)  // inlines: AssignTo, VariantFieldTypeName, Vector3D, operator=
// calls: V_sscanf, Warning
// strings: "No free conversion of %s variant to Vector right now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_218C20D
void __fastcall CFuncRotating::InputSetStartPos(CFuncRotating *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  const char *m_pszString; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  const char *v8; // rsi
  Vector vAngle; // [rsp+0h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type != 0 )
      goto LABEL_13;
LABEL_8:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    goto LABEL_6;
  }
  if ( m_type == 30 )
  {
    if ( V_sscanf(inputdata->value.m_uint64, "%g %g %g", &vAngle, &vAngle.y, &vAngle.z) == 3 )
    {
LABEL_11:
      z = vAngle.z;
      y = vAngle.y;
      x = vAngle.x;
      goto LABEL_6;
    }
    goto LABEL_8;
  }
  if ( m_type != 39 )
  {
LABEL_13:
    switch ( m_type )
    {
      case 1:
        v8 = "float";
        break;
      case 4:
        v8 = "quaternion";
        break;
      case 5:
        v8 = "integer";
        break;
      case 6:
        v8 = "boolean";
        break;
      case 8:
        v8 = "character";
        break;
      case 9:
        v8 = "color";
        break;
      case 13:
        v8 = "ehandle";
        break;
      case 25:
        v8 = "vector2d";
        break;
      case 26:
        v8 = "int64";
        break;
      case 27:
        v8 = "vector4d";
        break;
      case 28:
        v8 = "resourcehandle";
        break;
      case 31:
        v8 = "hscript";
        break;
      case 32:
        v8 = "variant";
        break;
      case 33:
        v8 = "uint64";
        break;
      case 34:
        v8 = "float64";
        break;
      case 37:
        v8 = "unsigned";
        break;
      case 38:
        v8 = "utlstringtoken";
        break;
      case 48:
        v8 = "hscript_lightbinding";
        break;
      case 49:
        v8 = "js_value";
        break;
      case 50:
        v8 = "js_object";
        break;
      case 51:
        v8 = "js_array";
        break;
      case 52:
        v8 = "js_raw_args";
        break;
      default:
        v8 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to Vector right now\n", v8);
    goto LABEL_11;
  }
LABEL_5:
  m_pszString = inputdata->value.m_pszString;
  x = *m_pszString;
  y = *(m_pszString + 1);
  z = *(m_pszString + 2);
LABEL_6:
  this->m_angStart.x = x;
  this->m_angStart.y = y;
  this->m_angStart.z = z;
}


// CFuncRotating::InputToggle  (line 1118, @0x00000000021a7a50, libserver.so)
// calls: CFuncRotating::SetTargetSpeed
void __fastcall CFuncRotating::InputToggle(CFuncRotating *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  if ( this->m_flSpeed == 0.0 )
    CFuncRotating::SetTargetSpeed(this, this->m_flMaxSpeed, v2);
  else
    CFuncRotating::SetTargetSpeed(this, 0.0, v2);
}


// CFuncRotating::Blocked  (line 1135, @0x0000000002188290, libserver.so)
// calls: CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
void __fastcall CFuncRotating::Blocked(CFuncRotating *const this, CBaseEntity *pOther)
{
  CTakeDamageInfo info; // [rsp+0h] [rbp-A0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&info, this, this, this->m_flBlockDamage, 1, 0);
  CBaseEntity::TakeDamage(pOther, &info);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CFuncRotating::DrawDebugTextOverlays  (line 1147, @0x000000000218a2c0, libserver.so)  // inlines: GetMoveSpeed
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Speed cur (target): %3.2f (%3.2f)"
int __fastcall CFuncRotating::DrawDebugTextOverlays(
        CFuncRotating *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  float x; // xmm0_4
  float m_flTargetSpeed; // xmm1_4
  float v9; // xmm0_4
  double v10; // xmm1_8
  float v11; // xmm1_4
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v14; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v14 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x4000) != 0 )
  {
    x = this->m_vecMoveAng.x;
    m_flTargetSpeed = this->m_flTargetSpeed;
    if ( x == 0.0 && (x = this->m_vecMoveAng.y) == 0.0 )
    {
      v9 = this->m_flSpeed * this->m_vecMoveAng.z;
      v10 = (m_flTargetSpeed * this->m_vecMoveAng.z);
    }
    else
    {
      v11 = m_flTargetSpeed * x;
      v9 = x * this->m_flSpeed;
      v10 = v11;
    }
    V_snprintf(tempstr, 512, "Speed cur (target): %3.2f (%3.2f)", v9, v10);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CFuncVPhysicsClip::~CFuncVPhysicsClip  (line 1163, @0x00000000021b2a90, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncVPhysicsClip::~CFuncVPhysicsClip(CFuncVPhysicsClip *const this)
{
  this->_vptr_IHandleEntity = &off_400CFB0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncVPhysicsClip::~CFuncVPhysicsClip  (line 1163, @0x00000000021b2ab0, libserver.so)  // inlines: ~CFuncVPhysicsClip
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncVPhysicsClip::~CFuncVPhysicsClip(CFuncVPhysicsClip *const this)
{
  this->_vptr_IHandleEntity = &off_400CFB0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncVPhysicsClip::GetEntityClass  (line 1165, @0x00000000021b0f80, libserver.so)
CEntityClass *__cdecl CFuncVPhysicsClip::GetEntityClass()
{
  return g_pEntityCFuncVPhysicsClipClass;
}


// CFuncVPhysicsClip::Schema_DynamicBinding  (line 1165, @0x00000000021b0f90, libserver.so)
// globals: CFuncVPhysicsClip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncVPhysicsClip::Schema_DynamicBinding(const CFuncVPhysicsClip *const this)
{
  return CFuncVPhysicsClip::s_pSchemaBinding;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1165, @0x00000000021b0fa0, libserver.so)
// globals: CFuncVPhysicsClip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  return CFuncVPhysicsClip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::DestructInstance  (line 1165, @0x00000000021b0fb0, libserver.so)  // inlines: Destruct<CFuncVPhysicsClip>
void __fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::DestructInstance(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::FreeInstance  (line 1165, @0x00000000021b0fd0, libserver.so)
void __fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::FreeInstance(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::CanAllocate  (line 1165, @0x00000000021b0ff0, libserver.so)
bool __fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::CanAllocate(
        const CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1165, @0x00000000021b1000, libserver.so)
// globals: CFuncVPhysicsClip::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  return CFuncVPhysicsClip::s_pSchemaBinding;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::AllocateInstance  (line 1165, @0x00000000021b1fc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::AllocateInstance(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::ConstructInstance  (line 1165, @0x00000000021b2490, libserver.so)  // inlines: CEntityHandle, CFuncVPhysicsClip, CHandle, CUtlSymbolLarge, Construct<CFuncVPhysicsClip>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::ConstructInstance(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 144) = 0;
    *p = &off_400CFB0;
    *(p + 290) = -1;
  }
  return p;
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1165, @0x00000000021b39c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1165, @0x00000000021b39e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncVPhysicsClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncVPhysicsClip::GetEntityClassInternal  (line 1165, @0x00000000021b7b70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_clip_vphysics", "CFuncVPhysicsClip"
// globals: `guard variable for'CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass, CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass, __dso_handle, CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo, CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo
CEntityClass *__cdecl CFuncVPhysicsClip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass);
    CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass._vptr_CEntityClass = off_400CF30;
    __cxa_guard_release(&`guard variable for'CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass);
    __cxa_atexit(
      CFuncVPhysicsClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncVPhysicsClipClass != 0 )
    return &CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass;
  if ( `guard variable for'CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo,
      "CFuncVPhysicsClip",
      "func_clip_vphysics",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo);
  }
  CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass.m_pClassInfo = &CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo;
  CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass.m_pBaseClassInfo = CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncVPhysicsClipClass = &CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass;
  CFuncVPhysicsClip::GetEntityClassInfo(void)::g_EntityCFuncVPhysicsClipClassInfo.m_pClass = &CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass;
  CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncVPhysicsClipClass->m_pComponentOverrides = 0;
  return &CFuncVPhysicsClip::GetEntityClassInternal(void)::g_EntityCFuncVPhysicsClipClass;
}


// CFuncVPhysicsClip::Precache  (line 1172, @0x00000000021bab50, libserver.so)  // inlines: Precache
// calls: CBaseEntity::PrecacheModelFromKeyValues, CEntityInstance::Precache
void __fastcall CFuncVPhysicsClip::Precache(CFuncVPhysicsClip *const this, const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CEntityInstance::Precache(this, pContext);
}


// CFuncVPhysicsClip::PhysicsSolidMaskForEntity  (line 1182, @0x00000000021b1010, libserver.so)
uint64 __fastcall CFuncVPhysicsClip::PhysicsSolidMaskForEntity(const CFuncVPhysicsClip *const this)
{
  return 0;
}


// CFuncVPhysicsClip::GetDataDescMap  (line 1195, @0x0000000002187490, libserver.so)
// globals: CFuncVPhysicsClip::m_DataMap
datamap_t *__fastcall CFuncVPhysicsClip::GetDataDescMap(CFuncVPhysicsClip *const this)
{
  return &CFuncVPhysicsClip::m_DataMap;
}


// CFuncVPhysicsClip::AddDatadescMetadataKeys  (line 1195, @0x0000000002191d10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncVPhysicsClip::GetEntityClass(void)
void __fastcall CFuncVPhysicsClip::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncVPhysicsClip::GetEntityClass);
}


// CFuncVPhysicsClip::GetBaseMap  (line 1195, @0x0000000002191d30, libserver.so)
datamap_t *__cdecl CFuncVPhysicsClip::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncVPhysicsClip>  (line 1195, @0x0000000002191d40, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncVPhysicsClip"
// globals: `guard variable for'DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder, CFuncVPhysicsClip::GetEntityClass(void), CFuncVPhysicsClip::m_DataMap, DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_pszBase = "CFuncVPhysicsClip";
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::nameHolder,
      &_dso_handle);
  }
  CFuncVPhysicsClip::m_DataMap.dataNumFields = 5;
  CFuncVPhysicsClip::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncVPhysicsClip::m_DataMap.dataDesc = &DataMapInit<CFuncVPhysicsClip>(CFuncVPhysicsClip *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncVPhysicsClip::m_DataMap, CFuncVPhysicsClip::GetEntityClass);
  return &CFuncVPhysicsClip::m_DataMap;
}


// CFuncVPhysicsClip::Spawn  (line 1208, @0x00000000021892d0, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::AddEffects, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CFuncVPhysicsClip::Spawn(CFuncVPhysicsClip *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi
  int (**vptr_ICollideable)(...); // rax

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->_vptr_IHandleEntity + 49))(this);
  p_m_Collision = &this->m_Collision;
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  if ( this->m_bDisabled )
    vptr_ICollideable[16](p_m_Collision);
  else
    vptr_ICollideable[15](p_m_Collision);
}


// CFuncVPhysicsClip::CreateVPhysics  (line 1226, @0x0000000002199100, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CFuncVPhysicsClip::CreateVPhysics(CFuncVPhysicsClip *const this)
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
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    m_Value,
    0);
  return 1;
}


// CFuncVPhysicsClip::Activate  (line 1233, @0x0000000002188520, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=
// calls: CBaseModelEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast
void __fastcall CFuncVPhysicsClip::Activate(CFuncVPhysicsClip *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_iFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v6 = v5[1]) != 0 )
    {
      v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
      v8 = 0x7FFF;
      if ( *(v6 + 16) != -1 )
        v8 = *(v6 + 16) & 0x7FFF;
      LOWORD(this->m_hFilter.m_Index) = v8 | this->m_hFilter.m_Index & 0x8000;
      this->m_hFilter.m_Index = (v7 << 15) | this->m_hFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hFilter.m_Index = -1;
    }
  }
  CBaseModelEntity::Activate(this, activateType);
}


// CFuncVPhysicsClip::EntityPassesFilter  (line 1248, @0x0000000002191e10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::VPhysicsGetObject, CBaseFilter::PassesFilter
// callers: CFuncVPhysicsClip::ForceVPhysicsCollide
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CFuncVPhysicsClip::EntityPassesFilter(CFuncVPhysicsClip *const this, CBaseEntity *pOther)
{
  uint32 m_Index; // ecx
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  bool result; // al
  IPhysicsObject *Object; // rax

  m_Index = this->m_hFilter.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hFilter.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[m_Index_low & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
        return CBaseFilter::PassesFilter(v6->m_pInstance, this, pOther);
    }
  }
  if ( CBaseEntity::VPhysicsGetObject(pOther) == 0 )
    return 0;
  if ( pOther->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
    return 0;
  Object = CBaseEntity::VPhysicsGetObject(pOther);
  result = (*(*Object + 1512LL))(Object);
  if ( !result )
    return 0;
  return result;
}


// CFuncVPhysicsClip::ForceVPhysicsCollide  (line 1265, @0x0000000002191ec0, libserver.so)
// calls: CFuncVPhysicsClip::EntityPassesFilter
bool __fastcall CFuncVPhysicsClip::ForceVPhysicsCollide(CFuncVPhysicsClip *const this, CBaseEntity *pEntity)
{
  return CFuncVPhysicsClip::EntityPassesFilter(this, pEntity);
}


// CFuncVPhysicsClip::InputEnable  (line 1270, @0x00000000021874a0, libserver.so)
void __fastcall CFuncVPhysicsClip::InputEnable(CFuncVPhysicsClip *const this, inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision, inputdata);
  this->m_bDisabled = 0;
}


// CFuncVPhysicsClip::InputDisable  (line 1276, @0x00000000021874d0, libserver.so)
void __fastcall CFuncVPhysicsClip::InputDisable(CFuncVPhysicsClip *const this, inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision, inputdata);
  this->m_bDisabled = 1;
}


// CFuncInteractionLayerClip::~CFuncInteractionLayerClip  (line 1285, @0x00000000021b2ae0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncInteractionLayerClip::~CFuncInteractionLayerClip(CFuncInteractionLayerClip *const this)
{
  this->_vptr_IHandleEntity = &off_400D6F0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncInteractionLayerClip::~CFuncInteractionLayerClip  (line 1285, @0x00000000021b2b00, libserver.so)  // inlines: ~CFuncInteractionLayerClip
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncInteractionLayerClip::~CFuncInteractionLayerClip(CFuncInteractionLayerClip *const this)
{
  this->_vptr_IHandleEntity = &off_400D6F0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncInteractionLayerClip::GetEntityClass  (line 1287, @0x00000000021b1020, libserver.so)
CEntityClass *__cdecl CFuncInteractionLayerClip::GetEntityClass()
{
  return g_pEntityCFuncInteractionLayerClipClass;
}


// CFuncInteractionLayerClip::Schema_DynamicBinding  (line 1287, @0x00000000021b1030, libserver.so)
// globals: CFuncInteractionLayerClip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncInteractionLayerClip::Schema_DynamicBinding(
        const CFuncInteractionLayerClip *const this)
{
  return CFuncInteractionLayerClip::s_pSchemaBinding;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1287, @0x00000000021b1040, libserver.so)
// globals: CFuncInteractionLayerClip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  return CFuncInteractionLayerClip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::DestructInstance  (line 1287, @0x00000000021b1050, libserver.so)  // inlines: Destruct<CFuncInteractionLayerClip>
void __fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::DestructInstance(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::FreeInstance  (line 1287, @0x00000000021b1070, libserver.so)
void __fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::FreeInstance(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::CanAllocate  (line 1287, @0x00000000021b1090, libserver.so)
bool __fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::CanAllocate(
        const CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1287, @0x00000000021b10a0, libserver.so)
// globals: CFuncInteractionLayerClip::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  return CFuncInteractionLayerClip::s_pSchemaBinding;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::AllocateInstance  (line 1287, @0x00000000021b2000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::AllocateInstance(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1176);
  memset(v1, 0, 0x498u);
  return v1;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::ConstructInstance  (line 1287, @0x00000000021b2440, libserver.so)  // inlines: CFuncInteractionLayerClip, CUtlSymbolLarge, Construct<CFuncInteractionLayerClip>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::ConstructInstance(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 145) = 0;
    *p = &off_400D6F0;
    *(p + 146) = 0;
  }
  return p;
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1287, @0x00000000021b3a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1287, @0x00000000021b3a30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncInteractionLayerClip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncInteractionLayerClip::GetEntityClassInternal  (line 1287, @0x00000000021b7cc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "func_clip_interaction_layer", "CFuncInteractionLayerClip"
// globals: `guard variable for'CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass, CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass, __dso_handle, CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo, CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo
CEntityClass *__cdecl CFuncInteractionLayerClip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass);
    CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass._vptr_CEntityClass = off_400D670;
    __cxa_guard_release(&`guard variable for'CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass);
    __cxa_atexit(
      CFuncInteractionLayerClip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncInteractionLayerClipClass != 0 )
    return &CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass;
  if ( `guard variable for'CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo,
      "CFuncInteractionLayerClip",
      "func_clip_interaction_layer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo);
  }
  CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass.m_pClassInfo = &CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo;
  CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass.m_pBaseClassInfo = CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncInteractionLayerClipClass = &CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass;
  CFuncInteractionLayerClip::GetEntityClassInfo(void)::g_EntityCFuncInteractionLayerClipClassInfo.m_pClass = &CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass;
  CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncInteractionLayerClipClass->m_pComponentOverrides = 0;
  return &CFuncInteractionLayerClip::GetEntityClassInternal(void)::g_EntityCFuncInteractionLayerClipClass;
}


// CFuncInteractionLayerClip::Precache  (line 1292, @0x00000000021bab80, libserver.so)  // inlines: Precache
// calls: CBaseEntity::PrecacheModelFromKeyValues, CEntityInstance::Precache
void __fastcall CFuncInteractionLayerClip::Precache(
        CFuncInteractionLayerClip *const this,
        const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CEntityInstance::Precache(this, pContext);
}


// CFuncInteractionLayerClip::GetDataDescMap  (line 1309, @0x0000000002187500, libserver.so)
// globals: CFuncInteractionLayerClip::m_DataMap
datamap_t *__fastcall CFuncInteractionLayerClip::GetDataDescMap(CFuncInteractionLayerClip *const this)
{
  return &CFuncInteractionLayerClip::m_DataMap;
}


// CFuncInteractionLayerClip::AddDatadescMetadataKeys  (line 1309, @0x0000000002191ed0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncInteractionLayerClip::GetEntityClass(void)
void __fastcall CFuncInteractionLayerClip::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncInteractionLayerClip::GetEntityClass);
}


// CFuncInteractionLayerClip::GetBaseMap  (line 1309, @0x0000000002191ef0, libserver.so)
datamap_t *__cdecl CFuncInteractionLayerClip::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFuncInteractionLayerClip>  (line 1309, @0x0000000002191f00, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CFuncInteractionLayerClip"
// globals: `guard variable for'DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder, CFuncInteractionLayerClip::GetEntityClass(void), CFuncInteractionLayerClip::m_DataMap, DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_pszBase = "CFuncInteractionLayerClip";
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder.m_nLenBase = 25;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::nameHolder,
      &_dso_handle);
  }
  CFuncInteractionLayerClip::m_DataMap.dataNumFields = 5;
  CFuncInteractionLayerClip::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFuncInteractionLayerClip::m_DataMap.dataDesc = &DataMapInit<CFuncInteractionLayerClip>(CFuncInteractionLayerClip *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncInteractionLayerClip::m_DataMap, CFuncInteractionLayerClip::GetEntityClass);
  return &CFuncInteractionLayerClip::m_DataMap;
}


// CFuncInteractionLayerClip::Spawn  (line 1322, @0x0000000002189340, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::AddEffects, CBaseModelEntity::SetModelFromKeyValues
void __fastcall CFuncInteractionLayerClip::Spawn(
        CFuncInteractionLayerClip *const this,
        const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi
  int (**vptr_ICollideable)(...); // rax

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::AddEffects(this, 32);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->_vptr_IHandleEntity + 49))(this);
  p_m_Collision = &this->m_Collision;
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  if ( this->m_bDisabled )
    vptr_ICollideable[16](p_m_Collision);
  else
    vptr_ICollideable[15](p_m_Collision);
}


// CFuncInteractionLayerClip::CreateVPhysics  (line 1339, @0x0000000002199140, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, CollisionAttributeChanged, CollisionRulesChanged, Compare, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, GetForModify, MakeStringToken, NetworkStateChanged, Release, String, ToCStr, VPhysicsCollisionAttribute_t, ~CCollisionAttributeWriter
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CPhysicsGameSystem::GetIntersectionDictionary, VPhysicsCollisionAttribute_t::operator=, V_stricmp_fast, CBaseEntity::CollisionRulesChanged, MurmurHash2LowerCase, RegisterStringToken, CCollisionAttributeWriter<RnCollisionAttr_t>::Release, _Unwind_Resume
bool __fastcall CFuncInteractionLayerClip::CreateVPhysics(CFuncInteractionLayerClip *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r13
  IPhysIntersectionDictionary *IntersectionDictionary; // r12
  _BYTE *m_Id; // rdi
  _BYTE *v5; // rdi
  const char *m_pAsString; // r15
  UtlSymLargeId_t v8; // rax
  uint32 v9; // edx
  const char *v10; // rdx
  char v11; // al
  const char *v12; // r15
  UtlSymLargeId_t v13; // rax
  uint32 v14; // edx
  const char *v15; // rdx
  char v16; // al
  CCollisionProperty *m_pCollisionProp; // rbx
  uint32 v18; // [rsp+Ch] [rbp-84h]
  uint32 v19; // [rsp+Ch] [rbp-84h]
  CUtlStringToken nInteractsWithToken; // [rsp+10h] [rbp-80h] BYREF
  CCollisionAttributeWriter<RnCollisionAttr_t>_0 writer; // [rsp+20h] [rbp-70h] BYREF

  p_m_Collision = &this->m_Collision;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_FIXED,
    3,
    0);
  writer.m_pCollisionProp = p_m_Collision;
  IntersectionDictionary = CPhysicsGameSystem::GetIntersectionDictionary();
  memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
  writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
  VPhysicsCollisionAttribute_t::operator=(&writer.m_OriginalState, &this->m_Collision.m_collisionAttribute);
  if ( this->m_iszInteractsAs.u.m_Id != 0 )
  {
    m_Id = this->m_iszInteractsAs.u.m_Id;
    if ( *m_Id != 0 && V_stricmp_fast(m_Id, "Default") != 0 )
    {
      if ( this->m_iszInteractsAs.u.m_Id != 0 )
      {
        m_pAsString = this->m_iszInteractsAs.u.m_pAsString;
        if ( m_pAsString == 0 )
        {
          nInteractsWithToken.m_nHashCode = 0;
          v11 = (*(IntersectionDictionary->_vptr_IPhysIntersectionDictionary + 7))(
                  IntersectionDictionary,
                  &nInteractsWithToken,
                  "");
LABEL_16:
          p_m_Collision->m_collisionAttribute.m_nInteractsAs.m_Value = 1LL << v11;
          goto LABEL_4;
        }
      }
      else
      {
        m_pAsString = "";
      }
      if ( *m_pAsString != 0 )
      {
        v19 = MurmurHash2LowerCase(m_pAsString, 0x31415926u);
        if ( g_bUpdateStringTokenDatabase )
          RegisterStringToken(v19, m_pAsString, 0, 1);
        v8 = this->m_iszInteractsAs.u.m_Id;
        v9 = v19;
      }
      else
      {
        v8 = this->m_iszInteractsAs.u.m_Id;
        v9 = 0;
      }
      nInteractsWithToken.m_nHashCode = v9;
      v10 = "";
      if ( v8 != 0 )
        v10 = v8;
      v11 = (*(IntersectionDictionary->_vptr_IPhysIntersectionDictionary + 7))(
              IntersectionDictionary,
              &nInteractsWithToken,
              v10);
      goto LABEL_16;
    }
  }
LABEL_4:
  if ( this->m_iszInteractsWith.u.m_Id != 0 )
  {
    v5 = this->m_iszInteractsWith.u.m_Id;
    if ( *v5 != 0 && V_stricmp_fast(v5, "Default") != 0 )
    {
      if ( this->m_iszInteractsWith.u.m_Id != 0 )
      {
        v12 = this->m_iszInteractsWith.u.m_pAsString;
        if ( v12 == 0 )
        {
          nInteractsWithToken.m_nHashCode = 0;
          v16 = (*(IntersectionDictionary->_vptr_IPhysIntersectionDictionary + 7))(
                  IntersectionDictionary,
                  &nInteractsWithToken,
                  "");
LABEL_26:
          p_m_Collision->m_collisionAttribute.m_nInteractsWith.m_Value = 1LL << v16;
          goto LABEL_7;
        }
        if ( *v12 == 0 )
          goto LABEL_22;
      }
      else
      {
        v12 = "";
        if ( asc_32DB004[2] == 0 )
        {
LABEL_22:
          v13 = this->m_iszInteractsWith.u.m_Id;
          v14 = 0;
LABEL_23:
          nInteractsWithToken.m_nHashCode = v14;
          v15 = "";
          if ( v13 != 0 )
            v15 = v13;
          v16 = (*(IntersectionDictionary->_vptr_IPhysIntersectionDictionary + 7))(
                  IntersectionDictionary,
                  &nInteractsWithToken,
                  v15);
          goto LABEL_26;
        }
      }
      v18 = MurmurHash2LowerCase(v12, 0x31415926u);
      if ( g_bUpdateStringTokenDatabase )
        RegisterStringToken(v18, v12, 0, 1);
      v13 = this->m_iszInteractsWith.u.m_Id;
      v14 = v18;
      goto LABEL_23;
    }
  }
LABEL_7:
  CBaseEntity::CollisionRulesChanged(this->m_Collision.m_pOuter);
  if ( !writer.m_bReleased )
  {
    m_pCollisionProp = writer.m_pCollisionProp;
    writer.m_bReleased = 1;
    if ( writer.m_pCollisionProp->m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
      (*(writer.m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_pCollisionProp->m_collisionAttribute,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        16,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
    if ( m_pCollisionProp->m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
      (*(m_pCollisionProp->m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
        &m_pCollisionProp->m_collisionAttribute,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
  }
  return 1;
}


// CFuncInteractionLayerClip::InputEnable  (line 1366, @0x0000000002187510, libserver.so)
void __fastcall CFuncInteractionLayerClip::InputEnable(
        CFuncInteractionLayerClip *const this,
        inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision, inputdata);
  this->m_bDisabled = 0;
}


// CFuncInteractionLayerClip::InputDisable  (line 1372, @0x0000000002187540, libserver.so)
void __fastcall CFuncInteractionLayerClip::InputDisable(
        CFuncInteractionLayerClip *const this,
        inputdata_t *const inputdata)
{
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision, inputdata);
  this->m_bDisabled = 1;
}


