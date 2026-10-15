// Reconstructed from DWARF by pahole; not original source.

// src/game/server/props.cpp:98
class CEnableMotionFixup : public CBaseEntity {
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
	CEnableMotionFixup(CEnableMotionFixup &);
	CEnableMotionFixup(CEnableMotionFixup &);
	CEnableMotionFixup();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CEnableMotionFixup();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/props.cpp:107
class COrnamentProp : public CDynamicProp {
public:

private:

	static datamap_t m_DataMap;

	string_t m_initialOwner;  // +0x6d8
	typedef CDynamicProp BaseClass;

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
	COrnamentProp(COrnamentProp &);
	COrnamentProp(COrnamentProp &);
	COrnamentProp();
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
	void AttachTo(const char *, CBaseEntity *, CBaseEntity *);
	void DetachFromOwner();
	void InputSetAttached(inputdata_t &);
	void InputDetach(inputdata_t &);
	virtual ~COrnamentProp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 1760
};

// src/game/server/props.cpp:185
class CPhysicsPropAlias_physics_prop : public CPhysicsProp {
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
	CPhysicsPropAlias_physics_prop(CPhysicsPropAlias_physics_prop &);
	CPhysicsPropAlias_physics_prop(CPhysicsPropAlias_physics_prop &);
	CPhysicsPropAlias_physics_prop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysicsPropAlias_physics_prop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1960
};

// src/game/server/props.cpp:186
class CPhysicsPropOverride : public CPhysicsProp {
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
	CPhysicsPropOverride(CPhysicsPropOverride &);
	CPhysicsPropOverride(CPhysicsPropOverride &);
	CPhysicsPropOverride();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysicsPropOverride();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1960
};

// src/game/server/props.cpp:274
class C_CPhysicsProp_MapInstall {
	C_CPhysicsProp_MapInstall();

	// sizeof = 1
};

// src/game/server/props.cpp:2359
class CPhysBoxMultiplayer : public CPhysBox, public IMultiplayerPhysics {
	class NetworkVar_m_iPhysicsMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_fMass {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;
	typedef CPhysBox BaseClass;
	typedef CPhysBoxMultiplayer ThisClass;

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
	CPhysBoxMultiplayer(CPhysBoxMultiplayer &);
	CPhysBoxMultiplayer(CPhysBoxMultiplayer &);
	CPhysBoxMultiplayer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int GetMultiplayerPhysicsMode();
	virtual float GetMass();
	virtual bool IsAsleep();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Activate(ActivateType_t);
	virtual ~CPhysBoxMultiplayer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[252] GetMultiplayerPhysicsMode
	// vtable[253] GetMass
	// vtable[254] IsAsleep
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[10] Activate
	// sizeof = 1704
};

// src/game/server/props.cpp:2398
class C_CPhysBoxMultiplayer_MapInstall {
	C_CPhysBoxMultiplayer_MapInstall();

	// sizeof = 1
};

// src/game/server/props.cpp:2400
class CPhysicsPropMultiplayer : public CPhysicsProp {
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
	CPhysicsPropMultiplayer(CPhysicsPropMultiplayer &);
	CPhysicsPropMultiplayer(CPhysicsPropMultiplayer &);
	CPhysicsPropMultiplayer();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CPhysicsPropMultiplayer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1960
};

// src/game/server/props.cpp:2405
class CPhysicsPropRespawnable : public CPhysicsProp {
public:

private:

	static datamap_t m_DataMap;

	float m_flRespawnTime;  // +0x7d4
	typedef CPhysicsProp BaseClass;

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
	CPhysicsPropRespawnable(CPhysicsPropRespawnable &);
	CPhysicsPropRespawnable(CPhysicsPropRespawnable &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CPhysicsPropRespawnable();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	void Materialize();
	virtual ~CPhysicsPropRespawnable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[92] Event_Killed
	// sizeof = 2008
};

// src/game/server/props.cpp:2710
class CFuncPropRespawnZone : public CBaseEntity {
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
	CFuncPropRespawnZone(CFuncPropRespawnZone &);
	CFuncPropRespawnZone(CFuncPropRespawnZone &);
	CFuncPropRespawnZone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFuncPropRespawnZone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnableMotionFixup::~CEnableMotionFixup  (line 98, @0x0000000002372de0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnableMotionFixup::~CEnableMotionFixup(CEnableMotionFixup *const this)
{
  this->_vptr_IHandleEntity = &off_409BE10;
  CBaseEntity::~CBaseEntity(this);
}


// CEnableMotionFixup::~CEnableMotionFixup  (line 98, @0x0000000002372e00, libserver.so)  // inlines: ~CEnableMotionFixup
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnableMotionFixup::~CEnableMotionFixup(CEnableMotionFixup *const this)
{
  this->_vptr_IHandleEntity = &off_409BE10;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnableMotionFixup::Schema_DynamicBinding  (line 100, @0x0000000002370d40, libserver.so)
// globals: CEnableMotionFixup::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnableMotionFixup::Schema_DynamicBinding(
        const CEnableMotionFixup *const this)
{
  return CEnableMotionFixup::s_pSchemaBinding;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 100, @0x0000000002370d50, libserver.so)
// globals: CEnableMotionFixup::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnableMotionFixup::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  return CEnableMotionFixup::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::DestructInstance  (line 100, @0x0000000002370d60, libserver.so)  // inlines: Destruct<CEnableMotionFixup>
void __fastcall CEnableMotionFixup::CEntityInstanceEntityClass::DestructInstance(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnableMotionFixup::CEntityInstanceEntityClass::FreeInstance  (line 100, @0x0000000002370d80, libserver.so)
void __fastcall CEnableMotionFixup::CEntityInstanceEntityClass::FreeInstance(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnableMotionFixup::CEntityInstanceEntityClass::CanAllocate  (line 100, @0x0000000002370da0, libserver.so)
bool __fastcall CEnableMotionFixup::CEntityInstanceEntityClass::CanAllocate(
        const CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 100, @0x0000000002370db0, libserver.so)
// globals: CEnableMotionFixup::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnableMotionFixup::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  return CEnableMotionFixup::s_pSchemaBinding;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::AllocateInstance  (line 100, @0x0000000002372790, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnableMotionFixup::CEntityInstanceEntityClass::AllocateInstance(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::ConstructInstance  (line 100, @0x0000000002372bb0, libserver.so)  // inlines: CEnableMotionFixup, Construct<CEnableMotionFixup>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnableMotionFixup::CEntityInstanceEntityClass::ConstructInstance(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_409BE10;
  }
  return p;
}


// CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000002375050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000002375070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnableMotionFixup::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnableMotionFixup::GetEntityClassInternal  (line 100, @0x000000000237d530, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "point_enable_motion_fixup", "CEnableMotionFixup"
// globals: `guard variable for'CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass, CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo, CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo
CEntityClass *__cdecl CEnableMotionFixup::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass) != 0 )
  {
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_designerName.u.m_Id = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass._vptr_CEntityClass = off_3F79390;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_ComponentOffsets.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_AllHelpers.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classInputs.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classOutputs.m_Size = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_requiredEHandle.m_Index = -1;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_hNetworkSerializer = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pBaseClassInfo = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pClassInfo = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_flags = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_nAllHelpersFlags = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pScriptClassDesc = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pInputs = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_nInputCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pOutputs = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_nOutputCount = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pGameClass = 0;
    CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass._vptr_CEntityClass = off_409BD90;
    __cxa_guard_release(&`guard variable for'CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass);
    __cxa_atexit(
      CEnableMotionFixup::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnableMotionFixupClass != 0 )
    return &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass;
  if ( `guard variable for'CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo,
      "CEnableMotionFixup",
      "point_enable_motion_fixup",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo);
  }
  CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pClassInfo = &CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo;
  CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pBaseClassInfo = CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo.m_pBaseClassInfo;
  g_pEntityCEnableMotionFixupClass = &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass;
  CEnableMotionFixup::GetEntityClassInfo(void)::g_EntityCEnableMotionFixupClassInfo.m_pClass = &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass;
  CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnableMotionFixupClass->m_pComponentOverrides = 0;
  return &CEnableMotionFixup::GetEntityClassInternal(void)::g_EntityCEnableMotionFixupClass;
}


// COrnamentProp::~COrnamentProp  (line 107, @0x0000000002373ef0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall COrnamentProp::~COrnamentProp(COrnamentProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// COrnamentProp::~COrnamentProp  (line 107, @0x0000000002374260, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp, ~COrnamentProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall COrnamentProp::~COrnamentProp(COrnamentProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// COrnamentProp::GetEntityClass  (line 109, @0x0000000002370dc0, libserver.so)
CEntityClass *__cdecl COrnamentProp::GetEntityClass()
{
  return g_pEntityCOrnamentPropClass;
}


// COrnamentProp::Schema_DynamicBinding  (line 109, @0x0000000002370dd0, libserver.so)
// globals: COrnamentProp::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall COrnamentProp::Schema_DynamicBinding(const COrnamentProp *const this)
{
  return COrnamentProp::s_pSchemaBinding;
}


// COrnamentProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 109, @0x0000000002370de0, libserver.so)
// globals: COrnamentProp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall COrnamentProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const COrnamentProp::CEntityInstanceEntityClass *const this)
{
  return COrnamentProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// COrnamentProp::CEntityInstanceEntityClass::DestructInstance  (line 109, @0x0000000002370df0, libserver.so)  // inlines: Destruct<COrnamentProp>
void __fastcall COrnamentProp::CEntityInstanceEntityClass::DestructInstance(
        COrnamentProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// COrnamentProp::CEntityInstanceEntityClass::FreeInstance  (line 109, @0x0000000002370e10, libserver.so)
void __fastcall COrnamentProp::CEntityInstanceEntityClass::FreeInstance(
        COrnamentProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// COrnamentProp::CEntityInstanceEntityClass::CanAllocate  (line 109, @0x0000000002370e30, libserver.so)
bool __fastcall COrnamentProp::CEntityInstanceEntityClass::CanAllocate(
        const COrnamentProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// COrnamentProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 109, @0x0000000002370e40, libserver.so)
// globals: COrnamentProp::s_pSchemaBinding
const ISchemaBinding *__fastcall COrnamentProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        COrnamentProp::CEntityInstanceEntityClass *const this)
{
  return COrnamentProp::s_pSchemaBinding;
}


// COrnamentProp::CEntityInstanceEntityClass::AllocateInstance  (line 109, @0x00000000023727d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall COrnamentProp::CEntityInstanceEntityClass::AllocateInstance(
        COrnamentProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1760);
  memset(v1, 0, 0x6E0u);
  return v1;
}


// COrnamentProp::CEntityInstanceEntityClass::ConstructInstance  (line 109, @0x0000000002372f50, libserver.so)  // inlines: COrnamentProp, CUtlSymbolLarge, Construct<COrnamentProp>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall COrnamentProp::CEntityInstanceEntityClass::ConstructInstance(
        COrnamentProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *(p + 219) = 0;
    *p = &off_409C530;
    *(p + 152) = off_409CE80;
    *(p + 153) = &off_409CF98;
  }
  return p;
}


// COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002374dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        COrnamentProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x0000000002374df0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        COrnamentProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// COrnamentProp::GetEntityClassInternal  (line 109, @0x000000000237bdd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CDynamicProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_dynamic_ornament", "COrnamentProp"
// globals: `guard variable for'COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass, COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo, COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo
CEntityClass *__cdecl COrnamentProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass == 0
    && __cxa_guard_acquire(&`guard variable for'COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass) != 0 )
  {
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_designerName.u.m_Id = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass._vptr_CEntityClass = off_3F79390;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_ComponentOffsets.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_AllHelpers.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_atomicFields,
      4);
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classInputs.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classInputs.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classOutputs.m_Size = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classOutputs.m_Memory.m_pMemory = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_requiredEHandle.m_Index = -1;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_hNetworkSerializer = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pBaseClassInfo = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pClassInfo = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_flags = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_nAllHelpersFlags = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pScriptClassDesc = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pInputs = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_nInputCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pOutputs = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_nOutputCount = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pGameClass = 0;
    COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass._vptr_CEntityClass = off_409C4B0;
    __cxa_guard_release(&`guard variable for'COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass);
    __cxa_atexit(
      COrnamentProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass,
      &_dso_handle);
  }
  if ( g_pEntityCOrnamentPropClass != 0 )
    return &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass;
  if ( `guard variable for'COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo) != 0 )
  {
    EntityClassInfo = CDynamicProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo,
      "COrnamentProp",
      "prop_dynamic_ornament",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo);
  }
  COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pClassInfo = &COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo;
  COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pBaseClassInfo = COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo.m_pBaseClassInfo;
  g_pEntityCOrnamentPropClass = &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass;
  COrnamentProp::GetEntityClassInfo(void)::g_EntityCOrnamentPropClassInfo.m_pClass = &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass;
  COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCOrnamentPropClass->m_pComponentOverrides = 0;
  return &COrnamentProp::GetEntityClassInternal(void)::g_EntityCOrnamentPropClass;
}


// COrnamentProp::GetDataDescMap  (line 126, @0x000000000234ade0, libserver.so)
// globals: COrnamentProp::m_DataMap
datamap_t *__fastcall COrnamentProp::GetDataDescMap(COrnamentProp *const this)
{
  return &COrnamentProp::m_DataMap;
}


// COrnamentProp::AddDatadescMetadataKeys  (line 126, @0x000000000235bc20, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: COrnamentProp::GetEntityClass(void)
void __fastcall COrnamentProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, COrnamentProp::GetEntityClass);
}


// COrnamentProp::GetBaseMap  (line 126, @0x000000000235bc40, libserver.so)
datamap_t *__cdecl COrnamentProp::GetBaseMap()
{
  return &CDynamicProp::m_DataMap;
}


// DataMapInit<COrnamentProp>  (line 126, @0x000000000235bc50, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "COrnamentProp"
// globals: `guard variable for'DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder, COrnamentProp::GetEntityClass(void), COrnamentProp::m_DataMap, DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<COrnamentProp>(COrnamentProp *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder) != 0 )
  {
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_pszBase = "COrnamentProp";
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<COrnamentProp>(COrnamentProp *)::nameHolder,
      &_dso_handle);
  }
  COrnamentProp::m_DataMap.dataNumFields = 3;
  COrnamentProp::m_DataMap.baseMap = &CDynamicProp::m_DataMap;
  COrnamentProp::m_DataMap.dataDesc = &DataMapInit<COrnamentProp>(COrnamentProp *)::dataDesc[1];
  AddDatadescMetadataKeys(&COrnamentProp::m_DataMap, COrnamentProp::GetEntityClass);
  return &COrnamentProp::m_DataMap;
}


// COrnamentProp::Spawn  (line 135, @0x000000000235bd70, libserver.so)
// calls: CDynamicProp::Spawn, COrnamentProp::DetachFromOwner
void __fastcall COrnamentProp::Spawn(COrnamentProp *const this, const CEntityKeyValues *pKeyValues)
{
  CDynamicProp::Spawn(this, pKeyValues);
  COrnamentProp::DetachFromOwner(this);
}


// COrnamentProp::DetachFromOwner  (line 141, @0x000000000235bd20, libserver.so)
// calls: CBaseEntity::SetMoveType, CBaseEntity::AddEffects
// callers: COrnamentProp::Spawn, COrnamentProp::InputDetach
void __fastcall COrnamentProp::DetachFromOwner(COrnamentProp *const this)
{
  (*(this->_vptr_IHandleEntity + 40))(this, 0);
  (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::AddEffects(this, 32);
}


// COrnamentProp::Activate  (line 149, @0x000000000235be30, libserver.so)
// calls: CBaseProp::Activate, COrnamentProp::AttachTo
void __fastcall COrnamentProp::Activate(COrnamentProp *const this, ActivateType_t activateType)
{
  CBaseProp::Activate(this, activateType);
  if ( this->m_initialOwner.u.m_Id != 0 )
    COrnamentProp::AttachTo(this, this->m_initialOwner.u.m_pAsString, 0, 0);
}


// COrnamentProp::InputSetAttached  (line 159, @0x000000000235be70, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: COrnamentProp::AttachTo, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_235BEAC, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall COrnamentProp::InputSetAttached(COrnamentProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  CBaseEntity *pCaller; // r13
  CBaseEntity *pActivator; // r12
  char *m_pszString; // rsi
  const char *v7; // rax
  const char *v8; // rcx
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
        v8 = "true";
        if ( inputdata->value.m_char == 0 )
          v8 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v8);
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
        v7 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v7);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  COrnamentProp::AttachTo(this, m_pszString, pActivator, pCaller);
}


// COrnamentProp::AttachTo  (line 164, @0x000000000235bda0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CGameEntitySystem::FindEntityByName, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::FollowEntity
// callers: COrnamentProp::Activate, COrnamentProp::InputSetAttached
void __fastcall COrnamentProp::AttachTo(
        COrnamentProp *const this,
        const char *pAttachName,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  CBaseEntity *EntityByName; // r12

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pAttachName, this, pActivator, pCaller, 0);
  if ( EntityByName != 0 )
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    CBaseEntity::FollowEntity(this, EntityByName, 1);
  }
}


// COrnamentProp::InputDetach  (line 175, @0x000000000235bd90, libserver.so)
// calls: COrnamentProp::DetachFromOwner
void __fastcall COrnamentProp::InputDetach(COrnamentProp *const this, inputdata_t *const inputdata)
{
  COrnamentProp::DetachFromOwner(this);
}


// CPhysicsPropAlias_physics_prop::Schema_DynamicBinding  (line 185, @0x0000000002370e50, libserver.so)
// globals: CPhysicsPropAlias_physics_prop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropAlias_physics_prop::Schema_DynamicBinding(
        const CPhysicsPropAlias_physics_prop *const this)
{
  return CPhysicsPropAlias_physics_prop::s_pSchemaBinding;
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 185, @0x0000000002370e60, libserver.so)
// globals: CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::DestructInstance  (line 185, @0x0000000002370e70, libserver.so)  // inlines: Destruct<CPhysicsPropAlias_physics_prop>
void __fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::FreeInstance  (line 185, @0x0000000002370e90, libserver.so)
void __fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::CanAllocate  (line 185, @0x0000000002370eb0, libserver.so)
bool __fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 185, @0x0000000002370ec0, libserver.so)
// globals: CPhysicsPropAlias_physics_prop::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropAlias_physics_prop::s_pSchemaBinding;
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::AllocateInstance  (line 185, @0x0000000002372810, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1960);
  memset(v1, 0, 0x7A8u);
  return v1;
}


// CPhysicsPropAlias_physics_prop::~CPhysicsPropAlias_physics_prop  (line 185, @0x0000000002373f50, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPhysicsPropAlias_physics_prop::~CPhysicsPropAlias_physics_prop(
        CPhysicsPropAlias_physics_prop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysicsPropAlias_physics_prop::~CPhysicsPropAlias_physics_prop  (line 185, @0x0000000002374410, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp, ~CPhysicsPropAlias_physics_prop
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPhysicsPropAlias_physics_prop::~CPhysicsPropAlias_physics_prop(
        CPhysicsPropAlias_physics_prop *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 185, @0x0000000002374e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 185, @0x0000000002374e40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::ConstructInstance  (line 185, @0x0000000002377db0, libserver.so)  // inlines: CPhysicsPropAlias_physics_prop, Construct<CPhysicsPropAlias_physics_prop>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysicsProp::CPhysicsProp(p);
    *p = &off_409D090;
    *(p + 152) = off_409DA18;
    *(p + 153) = &off_409DB30;
    *(p + 202) = &off_409DB98;
  }
  return p;
}


// CPhysicsPropAlias_physics_prop::GetEntityClassInternal  (line 185, @0x000000000237c4b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPhysicsProp::InitScriptDesc, CPhysicsProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPhysicsPropAlias_physics_prop"
// globals: `guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass, CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo, CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo
CEntityClass *__cdecl CPhysicsPropAlias_physics_prop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass) != 0 )
  {
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_designerName.u.m_Id = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass._vptr_CEntityClass = off_3F79390;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_AllHelpers.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classInputs.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classOutputs.m_Size = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_requiredEHandle.m_Index = -1;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_hNetworkSerializer = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pBaseClassInfo = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pClassInfo = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_flags = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_nAllHelpersFlags = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pScriptClassDesc = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pInputs = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_nInputCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pOutputs = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_nOutputCount = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pGameClass = 0;
    CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass._vptr_CEntityClass = off_409D010;
    __cxa_guard_release(&`guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass);
    __cxa_atexit(
      CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsPropAlias_physics_propClass != 0 )
    return &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass;
  if ( `guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo) != 0 )
  {
    EntityClassInfo = CPhysicsProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo,
      "CPhysicsPropAlias_physics_prop",
      "physics_prop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo);
  }
  CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pClassInfo = &CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo;
  CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pBaseClassInfo = CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsPropAlias_physics_propClass = &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass;
  CPhysicsPropAlias_physics_prop::GetEntityClassInfo(void)::g_EntityCPhysicsPropAlias_physics_propClassInfo.m_pClass = &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass;
  CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass.m_pScriptClassDesc = CPhysicsProp::InitScriptDesc();
  g_pEntityCPhysicsPropAlias_physics_propClass->m_pComponentOverrides = 0;
  return &CPhysicsPropAlias_physics_prop::GetEntityClassInternal(void)::g_EntityCPhysicsPropAlias_physics_propClass;
}


// CPhysicsPropOverride::Schema_DynamicBinding  (line 186, @0x0000000002370ed0, libserver.so)
// globals: CPhysicsPropOverride::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropOverride::Schema_DynamicBinding(
        const CPhysicsPropOverride *const this)
{
  return CPhysicsPropOverride::s_pSchemaBinding;
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 186, @0x0000000002370ee0, libserver.so)
// globals: CPhysicsPropOverride::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropOverride::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::DestructInstance  (line 186, @0x0000000002370ef0, libserver.so)  // inlines: Destruct<CPhysicsPropOverride>
void __fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::FreeInstance  (line 186, @0x0000000002370f10, libserver.so)
void __fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::CanAllocate  (line 186, @0x0000000002370f30, libserver.so)
bool __fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 186, @0x0000000002370f40, libserver.so)
// globals: CPhysicsPropOverride::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropOverride::s_pSchemaBinding;
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::AllocateInstance  (line 186, @0x0000000002372850, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1960);
  memset(v1, 0, 0x7A8u);
  return v1;
}


// CPhysicsPropOverride::~CPhysicsPropOverride  (line 186, @0x00000000023740a0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPhysicsPropOverride::~CPhysicsPropOverride(CPhysicsPropOverride *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysicsPropOverride::~CPhysicsPropOverride  (line 186, @0x00000000023743a0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp, ~CPhysicsPropOverride
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPhysicsPropOverride::~CPhysicsPropOverride(CPhysicsPropOverride *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 186, @0x0000000002374e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 186, @0x0000000002374e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsPropOverride::CEntityInstanceEntityClass::ConstructInstance  (line 186, @0x0000000002377e10, libserver.so)  // inlines: CPhysicsPropOverride, Construct<CPhysicsPropOverride>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CPhysicsPropOverride::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsPropOverride::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysicsProp::CPhysicsProp(p);
    *p = &off_409DC70;
    *(p + 152) = off_409E5F8;
    *(p + 153) = &off_409E710;
    *(p + 202) = &off_409E778;
  }
  return p;
}


// CPhysicsPropOverride::GetEntityClassInternal  (line 186, @0x000000000237d880, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPhysicsProp::InitScriptDesc, CPhysicsProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_physics_override", "CPhysicsPropOverride"
// globals: `guard variable for'CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass, CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo, CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo
CEntityClass *__cdecl CPhysicsPropOverride::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass) != 0 )
  {
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_designerName.u.m_Id = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass._vptr_CEntityClass = off_3F79390;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_AllHelpers.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classInputs.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classOutputs.m_Size = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_requiredEHandle.m_Index = -1;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_hNetworkSerializer = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pBaseClassInfo = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pClassInfo = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_flags = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_nAllHelpersFlags = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pScriptClassDesc = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pInputs = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_nInputCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pOutputs = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_nOutputCount = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pGameClass = 0;
    CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass._vptr_CEntityClass = off_409DBF0;
    __cxa_guard_release(&`guard variable for'CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass);
    __cxa_atexit(
      CPhysicsPropOverride::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsPropOverrideClass != 0 )
    return &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass;
  if ( `guard variable for'CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo) != 0 )
  {
    EntityClassInfo = CPhysicsProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo,
      "CPhysicsPropOverride",
      "prop_physics_override",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo);
  }
  CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pClassInfo = &CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo;
  CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pBaseClassInfo = CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsPropOverrideClass = &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass;
  CPhysicsPropOverride::GetEntityClassInfo(void)::g_EntityCPhysicsPropOverrideClassInfo.m_pClass = &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass;
  CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass.m_pScriptClassDesc = CPhysicsProp::InitScriptDesc();
  g_pEntityCPhysicsPropOverrideClass->m_pComponentOverrides = 0;
  return &CPhysicsPropOverride::GetEntityClassInternal(void)::g_EntityCPhysicsPropOverrideClass;
}


// IsPhysPropClassName  (line 190, @0x000000000235c110, libserver.so)  // inlines: operator==
// calls: __cxa_guard_acquire, AllocPooledString, __cxa_guard_release, __cxa_guard_abort, _Unwind_Resume
// strings: "prop_physics", "prop_physics_override"
// globals: `guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics, `guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride, IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics, IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride
bool __fastcall IsPhysPropClassName(string_t classname)
{
  if ( `guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics == 0
    && __cxa_guard_acquire(&`guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics) != 0 )
  {
    AllocPooledString(&IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics, "prop_physics");
    __cxa_guard_release(&`guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics);
  }
  if ( `guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride == 0
    && __cxa_guard_acquire(&`guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride) != 0 )
  {
    AllocPooledString(&IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride, "prop_physics_override");
    __cxa_guard_release(&`guard variable for'IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride);
  }
  return *classname.u.m_Id == IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysics.u.m_Id
      || *classname.u.m_Id == IsPhysPropClassName(CUtlSymbolLarge)::classNamePropPhysicsOverride.u.m_Id;
}


// CPhysicsProp::GetDataDescMap  (line 197, @0x000000000234adf0, libserver.so)
// globals: CPhysicsProp::m_DataMap
datamap_t *__fastcall CPhysicsProp::GetDataDescMap(CPhysicsProp *const this)
{
  return &CPhysicsProp::m_DataMap;
}


// CPhysicsProp::AddDatadescMetadataKeys  (line 197, @0x000000000235c200, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsProp::GetEntityClass(void)
void __fastcall CPhysicsProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsProp::GetEntityClass);
}


// CPhysicsProp::GetBaseMap  (line 197, @0x000000000235c220, libserver.so)
datamap_t *__cdecl CPhysicsProp::GetBaseMap()
{
  return &CBreakableProp::m_DataMap;
}


// DataMapInit<CPhysicsProp>  (line 197, @0x0000000002366360, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPhysicsProp"
// globals: `guard variable for'DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder, `guard variable for'DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc, CPhysicsProp::GetEntityClass(void), CPhysicsProp::m_DataMap, DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsProp>(CPhysicsProp *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_pszBase = "CPhysicsProp";
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsProp::m_DataMap.baseMap = &CBreakableProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc) != 0 )
  {
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[26].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[27].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[28].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[29].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[30].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[31].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[32].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[33].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[34].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[35].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_nLenBase + 16);
    strcpy(stpcpy(v2, DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_pszBase), "ClearFlagsThink");
    m_Size = DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPhysicsProp>(CPhysicsProp *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[39].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc);
  }
  CPhysicsProp::m_DataMap.dataNumFields = 44;
  CPhysicsProp::m_DataMap.dataDesc = &DataMapInit<CPhysicsProp>(CPhysicsProp *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsProp::m_DataMap, CPhysicsProp::GetEntityClass);
  return &CPhysicsProp::m_DataMap;
}


// CPhysicsProp::YouForgotToImplementOrDeclareServerClass  (line 274, @0x000000000234ae00, libserver.so)
int __fastcall CPhysicsProp::YouForgotToImplementOrDeclareServerClass(CPhysicsProp *const this)
{
  return 0;
}


// CPhysicsProp::GetServerClass  (line 274, @0x0000000002351d90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPhysicsProp::GetServerClass(CPhysicsProp *const this)
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


// PropIsGib  (line 279, @0x000000000235c230, libserver.so)  // inlines: ClassMatches, FClassnameIs, IsGib
// calls: CEntityIdentity::ClassMatches
// strings: "prop_physics"
bool __fastcall PropIsGib(CBaseEntity *pEntity)
{
  return pEntity != 0
      && CEntityIdentity::ClassMatches(pEntity->m_pEntity, "prop_physics")
      && (pEntity->m_spawnflags.m_Value & 0x400000) != 0;
}


// CPhysicsProp::CPhysicsProp  (line 291, @0x000000000235c280, libserver.so)  // inlines: CEntityIOOutput, CNetworkVarBase, Color, EnsureValidValue<bool>
// calls: CBreakableProp::CBreakableProp
// callers: CPhysicsProp::CEntityInstanceEntityClass::ConstructInstance, CShatterGlassShardPhysics::CEntityInstanceEntityClass::ConstructInstance, CPhysicsPropAlias_physics_prop::CEntityInstanceEntityClass::ConstructInstance, CPhysicsPropOverride::CEntityInstanceEntityClass::ConstructInstance, CPhysicsPropMultiplayer::CEntityInstanceEntityClass::ConstructInstance, CPhysicsPropRespawnable::CEntityInstanceEntityClass::ConstructInstance, CPhysicsPropRespawnable::CPhysicsPropRespawnable
void __fastcall CPhysicsProp::CPhysicsProp(CPhysicsProp *const this)
{
  CBreakableProp::CBreakableProp(this);
  this->m_glowColor = 0;
  this->_vptr_IHandleEntity = &off_409E7D0;
  this->_vptr_IBreakableWithPropData = off_409F158;
  this->_vptr_IPlayerPickupVPhysics = &off_409F270;
  this->_vptr_INavObstacle = &off_409F2D8;
  this->m_MotionEnabled._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnAwakened._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnAwake._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnAsleep._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysGunPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysGunPunt._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysGunOnlyPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPhysGunDrop._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPlayerUse._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnPlayerPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnOutOfWorld._vptr_CEntityIOOutput = off_3F7C190;
  this->m_bAwake.m_Value = 0;
  this->m_bIsOverrideProp = 0;
  this->m_bHasBeenAwakened = 0;
  this->m_fNextCheckDisableMotionContactsTime = 0.0;
  this->m_iInitialGlowState = 0;
  this->m_nGlowRangeMin = 0;
  this->m_nCollisionGroupOverride = -1;
}


// CPhysicsProp::UpdateOnRemove  (line 321, @0x000000000234c240, libserver.so)
// calls: GetNavObstructionMgr, CNavObstructionManager::RemoveObstacle, CBreakableProp::UpdateOnRemove
// globals: g_ActiveGibCount
void __fastcall CPhysicsProp::UpdateOnRemove(CPhysicsProp *const this)
{
  CNavObstructionManager *NavObstructionMgr; // rax

  if ( (this->m_spawnflags.m_Value & 0x400000) != 0 )
    --g_ActiveGibCount;
  NavObstructionMgr = GetNavObstructionMgr();
  CNavObstructionManager::RemoveObstacle(NavObstructionMgr, &this->INavObstacle);
  CBreakableProp::UpdateOnRemove(this);
}


// CPhysicsProp::IsGib  (line 335, @0x000000000235c370, libserver.so)
bool __fastcall CPhysicsProp::IsGib(CPhysicsProp *const this)
{
  return (this->m_spawnflags.m_Value & 0x400000) != 0;
}


// CPhysicsProp::Spawn  (line 342, @0x0000000002365670, libserver.so)  // inlines: AddEFlags, AssignTo, Base, Element, FindKeyHash, Get<int>, GetClassNameAsCStr, GetClassname, GetSpawnGroupHandle, GetValue, GetValue<bool>, GetValue<int>, HasSpawnFlags, IsNavObstacle, NetworkStateChanged, Set, SetAIAddOn, SetCollisionGroup, SetCollisionGroupOverride, SetNavIgnore, SetNoGhostCollisions, String, ToCStr, Vector, _V_strcmp, operator=, operator=<bool>, operator=<float>, operator=<int>, operator[]
// calls: V_stricmp_fast, CBreakableProp::Spawn, CBaseEntity::SetNetworkQuantizeOriginAngAngles, CCollisionProperty::SetCollisionGroup, CBaseEntity::VPhysicsGetAggregate, CGlowProperty::SetGlowState, CGlowProperty::SetGlowRange, CGlowProperty::SetGlowRangeMin, CGlowProperty::SetGlowColorOverride, CBaseAnimating::GetModelPtr, KeyValues::operator new, KeyValues::KeyValues (35 total)
// callers: CPhysicsPropRespawnable::Spawn
// strings: "prop_physics_override", "ai_addon", "ai_addon_thrownprojectile", "false", "true", "Invalid conversion : CString '%s' to bool\n" (7 total)
// globals: g_ActiveGibCount, CEntityKeyValues::sm_EmptyVariant, jpt_2365ADF
void __fastcall CPhysicsProp::Spawn(CPhysicsProp *const this, const CEntityKeyValues *pKeyValues)
{
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rdi
  unsigned int m_Value; // eax
  IPhysAggregateInstance *Aggregate; // rax
  int v8; // r8d
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v9; // si
  __int64 v10; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v11; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v12; // rcx
  CEntityVariant *v13; // rcx
  int16 m_type; // dx
  const CModel *ModelPtr; // r15
  KeyValues *v16; // r14
  const char *v17; // rax
  KeyValues *Key; // rdi
  const char *String; // rax
  const char *v20; // rax
  CEntityIdentity *v21; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // esi
  CNavMesh *NavForSpawnGroup; // r14
  int v24; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // cx
  __int64 v26; // rdx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rcx
  CEntityVariant *v29; // rdi
  int m_nCount; // esi
  void (__fastcall *v31)(CPhysicsProp *const, _QWORD); // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v33; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CNavObstructionManager *NavObstructionMgr; // rax
  IPhysicsObject *Object; // rax
  float v37; // xmm0_4
  float v38; // xmm1_4
  int AutoMultiplayerPhysicsMode; // r15d
  int x_low; // esi
  char m_char; // dl
  const char *m_uint64; // rdx
  const char *v43; // rax
  const CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rdx
  char *pBuffer; // [rsp+8h] [rbp-48h]
  Vector vTraceDelta; // [rsp+10h] [rbp-40h] BYREF

  m_pEntity = this->m_pEntity;
  m_pAsString = "";
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  this->m_bIsOverrideProp = V_stricmp_fast(m_pAsString, "prop_physics_override") == 0;
  CBreakableProp::Spawn(this, pKeyValues);
  if ( this->m_bIsOverrideProp && CEntityKeyValues::HasValue(pKeyValues, -1700328872) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    v31 = *(this->_vptr_IHandleEntity + 157);
    if ( m_nCount <= 0 )
    {
LABEL_102:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    }
    else
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      v33 = 0;
      while ( 1 )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        if ( m_pElements[v33] == -1700328872 )
          break;
        if ( m_nCount <= ++v33 )
          goto LABEL_102;
      }
      if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
        v45 = pKeyValues->m_keyValues.m_pElements;
      else
        v45 = 0;
      p_m_value = &v45[v33].m_value;
    }
    vTraceDelta.x = 0.0;
    CVariantBase<CEntityVariantAllocator>::AssignTo(p_m_value, &vTraceDelta);
    v31(this, LODWORD(vTraceDelta.x));
  }
  CBaseEntity::SetNetworkQuantizeOriginAngAngles(this, 1);
  if ( (this->m_spawnflags.m_Value & 0x400000) != 0 )
    ++g_ActiveGibCount;
  if ( (this->m_pEntity->m_flags & 0x200) != 0 )
    return;
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 24);
  if ( this->m_bForceNavIgnore && this->m_flNavIgnoreUntilTime.m_Value < 3.4028235e38 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flNavIgnoreUntilTime.m_Value = 3.4028235e38;
  }
  if ( (this->m_spawnflags.m_Value & 4) != 0 || (*(this->_vptr_IHandleEntity + 284))(this, 9) != 0 )
  {
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x1000) != 0 )
    {
      CCollisionProperty::ForceTouchTriggers(&this->m_Collision);
      m_Value = this->m_spawnflags.m_Value;
    }
  }
  else
  {
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 19) != 0 )
      CCollisionProperty::SetCollisionGroup(&this->m_Collision, 14);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 0x80u) != 0 )
    this->m_iEFlags |= 0x200000u;
  (*(this->_vptr_IHandleEntity + 49))(this);
  Aggregate = CBaseEntity::VPhysicsGetAggregate(this);
  if ( Aggregate == 0 )
    goto LABEL_25;
  v8 = pKeyValues->m_keyHashes.m_nCount;
  if ( v8 <= 0 )
  {
LABEL_62:
    v13 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_25;
    goto LABEL_63;
  }
  v9 = pKeyValues->m_keyHashes.m_nAllocated;
  v10 = 0;
  while ( v9 == 0 )
  {
    if ( *(4 * v10) == 1522596209 )
      goto LABEL_22;
LABEL_19:
    if ( v8 <= ++v10 )
      goto LABEL_62;
  }
  v11 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v9 > 9 )
    v11 = pKeyValues->m_keyHashes.m_pElements;
  if ( v11[v10] != 1522596209 )
    goto LABEL_19;
LABEL_22:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v12 = pKeyValues->m_keyValues.m_pElements;
  else
    v12 = 0;
  v13 = &v12[v10].m_value;
  m_type = v13->m_type;
  if ( m_type == 0 )
    goto LABEL_25;
LABEL_63:
  switch ( m_type )
  {
    case 1:
      m_char = v13->m_float != 0.0;
      goto LABEL_88;
    case 5:
    case 37:
      m_char = v13->m_int != 0;
      goto LABEL_88;
    case 6:
      m_char = v13->m_char;
      goto LABEL_88;
    case 26:
    case 33:
      m_char = v13->m_uint64 != 0;
      goto LABEL_88;
    case 30:
      m_uint64 = v13->m_uint64;
      if ( strcmp(v13->m_pszString, "0") == 0 || strcmp(m_uint64, "false") == 0 || strcmp(m_uint64, "no") == 0 )
        break;
      if ( strcmp(m_uint64, "1") == 0 || strcmp(m_uint64, "true") == 0 || strcmp(m_uint64, "yes") == 0 )
        goto LABEL_89;
      Warning("Invalid conversion : CString '%s' to bool\n", m_uint64);
      break;
    case 34:
      m_char = v13->m_float64 != 0.0;
LABEL_88:
      if ( m_char != 0 )
      {
LABEL_89:
        vTraceDelta.x = 0.0;
        vTraceDelta.y = 0.0;
        vTraceDelta.z = -1200.0;
        (*(Aggregate->_vptr_IPhysAggregateInstance + 39))(Aggregate, &vTraceDelta);
      }
      break;
    default:
      v43 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to bool now\n", v43);
      break;
  }
LABEL_25:
  if ( !this->m_bBlockLOSSetByPropData )
    CBaseProp::CalculateBlockLOS(this);
  CGlowProperty::SetGlowState(&this->m_Glow, this->m_iInitialGlowState);
  CGlowProperty::SetGlowRange(&this->m_Glow, this->m_nGlowRange);
  CGlowProperty::SetGlowRangeMin(&this->m_Glow, this->m_nGlowRangeMin);
  CGlowProperty::SetGlowColorOverride(&this->m_Glow, this->m_glowColor);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  v16 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v16, "");
  if ( ModelPtr != 0 )
  {
    pBuffer = CModel::KeyValueText(ModelPtr);
    v17 = CModel::name(ModelPtr);
    if ( KeyValues::LoadFromBuffer(v16, v17, pBuffer, 0, 0, 0, 0) )
    {
      Key = KeyValues::FindKey(v16, "ai_addon", 0);
      if ( Key != 0 )
      {
        String = KeyValues::GetString(Key, 0, "", 0, 0);
        AllocPooledString(&vTraceDelta, String);
        this->m_AIAddOn.u.m_Id = *&vTraceDelta.x;
        KeyValues::deleteThis(v16);
        return;
      }
      (*(this->_vptr_IHandleEntity + 185))(&vTraceDelta, this);
      v20 = "";
      if ( *&vTraceDelta.x != 0 )
        v20 = *&vTraceDelta.x;
      if ( *v20 == 0 )
      {
        MakeEntitySystemString("ai_addon_thrownprojectile");
        this->m_AIAddOn.u.m_Id = *&vTraceDelta.x;
      }
    }
  }
  KeyValues::deleteThis(v16);
  if ( g_pNavGameSystem != 0 )
  {
    v21 = this->m_pEntity;
    if ( v21 != 0 )
      m_hSpawnGroup = v21->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    NavForSpawnGroup = CNavGameSystem::GetNavForSpawnGroup(g_pNavGameSystem, m_hSpawnGroup);
  }
  else
  {
    NavForSpawnGroup = 0;
  }
  if ( this->m_iPhysicsMode.m_Value == 0 )
  {
    if ( CBaseEntity::VPhysicsGetObject(this) == 0 )
    {
      UTIL_Remove(this);
      return;
    }
    Object = CBaseEntity::VPhysicsGetObject(this);
    v37 = (*(*Object + 208LL))(Object);
    AutoMultiplayerPhysicsMode = GetAutoMultiplayerPhysicsMode(v37, v38);
    if ( AutoMultiplayerPhysicsMode != this->m_iPhysicsMode.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1332, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_iPhysicsMode.m_Value = AutoMultiplayerPhysicsMode;
    }
  }
  if ( (this->m_spawnflags.m_Value & 0x2000) != 0 )
    (*(this->_vptr_IHandleEntity + 288))(this, 2);
  v24 = pKeyValues->m_keyHashes.m_nCount;
  if ( v24 <= 0 )
  {
LABEL_64:
    v29 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_65;
  }
  v25 = pKeyValues->m_keyHashes.m_nAllocated;
  v26 = 0;
  while ( 2 )
  {
    if ( v25 == 0 )
    {
      if ( *(4 * v26) == 965206476 )
        break;
      goto LABEL_47;
    }
    v27 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v25 > 9 )
      v27 = pKeyValues->m_keyHashes.m_pElements;
    if ( v27[v26] != 965206476 )
    {
LABEL_47:
      if ( v24 <= ++v26 )
        goto LABEL_64;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v28 = pKeyValues->m_keyValues.m_pElements;
  else
    v28 = 0;
  v29 = &v28[v26].m_value;
LABEL_65:
  if ( v29->m_type != 0 && CVariantBase<CEntityVariantAllocator>::AssignTo(v29, &vTraceDelta) )
  {
    x_low = LODWORD(vTraceDelta.x);
    if ( LODWORD(vTraceDelta.x) != -1 )
    {
      this->m_nCollisionGroupOverride = LODWORD(vTraceDelta.x);
      CCollisionProperty::SetCollisionGroup(&this->m_Collision, x_low);
    }
  }
  if ( NavForSpawnGroup != 0
    && ((*(this->_vptr_INavObstacle + 3))(&this->INavObstacle) != 0
     || (*(this->_vptr_INavObstacle + 6))(&this->INavObstacle) != 0) )
  {
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::UpdateObstacle(NavObstructionMgr, &this->INavObstacle);
  }
  if ( !this->m_noGhostCollision.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1608, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_noGhostCollision.m_Value = 1;
  }
  CEntityInstance::ValidatePrivateScriptScope(this);
}


// CPhysicsProp::Precache  (line 611, @0x000000000234b9f0, libserver.so)
// calls: CBreakableProp::Precache
void __fastcall CPhysicsProp::Precache(CPhysicsProp *const this, const CEntityPrecacheContext *pContext)
{
  CBreakableProp::Precache(this, pContext);
}


// CPhysicsProp::CreateVPhysics  (line 618, @0x000000000234c330, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline, GetEntityClass, GetEntityNameAsCStr, GetNameAsCStr, HasSpawnFlags, String
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject, CBaseEntity::PhysicsEnableMotion, PhysSetGameFlags, CCollisionProperty::EnableInteractsExcludeMask, CBaseEntity::GetAbsOrigin, Warning
// strings: "Cannot create physics for %s \"%s\" @{%g,%g,%g}\n"
bool __fastcall CPhysicsProp::CreateVPhysics(CPhysicsProp *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  unsigned int v3; // ecx
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  IPhysAggregateInstance *v6; // rax
  float m_massScale; // xmm0_4
  IPhysicsObject *Object; // rax
  IPhysicsObject *v9; // r13
  IPhysicsObject *v10; // rax
  void (__fastcall *v12)(IPhysAggregateInstance *, float); // r13
  float v13; // xmm0_4
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rdx
  float z; // xmm2_4
  float y; // xmm1_4
  float x; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  double v20; // xmm2_8
  double v21; // xmm1_8
  double v22; // xmm0_8
  const char *v23; // rsi
  unsigned int pAgg; // [rsp+8h] [rbp-28h]
  IPhysAggregateInstance *pAgga; // [rsp+8h] [rbp-28h]

  p_m_Collision = &this->m_Collision;
  v3 = this->m_spawnflags.m_Value & 1;
  if ( (this->m_spawnflags.m_Value & 0x200000) != 0 )
  {
    p_m_Collision = &this->m_Collision;
    pAgg = this->m_spawnflags.m_Value & 1;
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
    m_pCollision = this->m_pCollision;
    LOBYTE(v3) = pAgg;
    if ( m_pCollision != 0 )
      goto LABEL_3;
  }
  else
  {
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
    {
LABEL_3:
      m_Value = m_pCollision->m_CollisionGroup.m_Value;
      goto LABEL_4;
    }
  }
  m_Value = 4;
LABEL_4:
  v6 = CCollisionProperty::SetupPhysicsFromUnscaledModel(
         p_m_Collision,
         VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
         m_Value,
         v3);
  if ( v6 != 0 )
  {
    m_massScale = this->m_massScale;
    if ( m_massScale <= 0.0 || m_massScale == 1.0 )
    {
      if ( this->m_contactSoftness == 0 )
        goto LABEL_8;
      goto LABEL_24;
    }
    pAgga = v6;
    v12 = *(v6->_vptr_IPhysAggregateInstance + 53);
    v13 = (*(v6->_vptr_IPhysAggregateInstance + 52))(v6);
    v12(pAgga, v13 * this->m_massScale);
    v6 = pAgga;
    if ( this->m_contactSoftness != 0 )
LABEL_24:
      (*(v6->_vptr_IPhysAggregateInstance + 85))(v6);
  }
LABEL_8:
  Object = CBaseEntity::VPhysicsGetObject(this);
  v9 = Object;
  if ( Object != 0 )
  {
    if ( this->m_damageType == 1 )
      PhysSetGameFlags(Object, 1u);
    if ( (this->m_spawnflags.m_Value & 8) != 0
      || this->m_damageToEnableMotion > 0
      || this->m_flForceToEnableMotion > 0.0 )
    {
      CBaseEntity::PhysicsEnableMotion(this, 0);
    }
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 5) != 0 )
    {
      v10 = CBaseEntity::VPhysicsGetObject(this);
      if ( ((*(*v10 + 1296LL))(v10) & 1) == 0 )
        PhysSetGameFlags(v9, 1u);
    }
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 8) != 0 )
      PhysSetGameFlags(v9, 0x400u);
    if ( (this->m_spawnflags.m_Value & 0x200) != 0 )
      PhysSetGameFlags(v9, 0x80u);
    CCollisionProperty::EnableInteractsExcludeMask(p_m_Collision, &loc_2000000);
    return 1;
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_pAsString = "";
    z = AbsOrigin->z;
    y = AbsOrigin->y;
    x = AbsOrigin->x;
    m_pEntity = this->m_pEntity;
    v20 = z;
    v21 = y;
    v22 = x;
    if ( m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = m_pEntity->m_name.u.m_pAsString;
    v23 = "";
    if ( g_pEntityCPhysicsPropClass->m_designerName.u.m_Id != 0 )
      v23 = g_pEntityCPhysicsPropClass->m_designerName.u.m_pAsString;
    Warning("Cannot create physics for %s \"%s\" @{%g,%g,%g}\n", v23, m_pAsString, v22, v21, v20);
    return 0;
  }
}


// CPhysicsProp::CanBePickedUpByPhyscannon  (line 723, @0x000000000235c390, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
bool __fastcall CPhysicsProp::CanBePickedUpByPhyscannon(CPhysicsProp *const this)
{
  bool result; // al
  IPhysicsObject *Object; // rax

  result = 0;
  if ( (this->m_spawnflags.m_Value & 0x200) == 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    if ( Object == 0 || (*(*Object + 1512LL))(Object) != 0 || (this->m_spawnflags.m_Value & 0x40) != 0 )
      return 1;
  }
  return result;
}


// CPhysicsProp::OverridePropdata  (line 741, @0x000000000234ae10, libserver.so)
bool __fastcall CPhysicsProp::OverridePropdata(CPhysicsProp *const this)
{
  return this->m_bIsOverrideProp;
}


// CPhysicsProp::InputWake  (line 749, @0x000000000234be10, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysicsProp::InputWake(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    (*(*Object + 1592LL))(Object);
}


// CPhysicsProp::InputSleep  (line 761, @0x000000000234be40, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysicsProp::InputSleep(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    (*(*Object + 848LL))(Object, 0);
}


// CPhysicsProp::InputEnableMotion  (line 773, @0x0000000002362480, libserver.so)
// calls: CPhysicsProp::EnableMotion
void __fastcall CPhysicsProp::InputEnableMotion(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CPhysicsProp::EnableMotion(this);
}


// CPhysicsProp::InputDisableMotion  (line 781, @0x000000000234c320, libserver.so)
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CPhysicsProp::InputDisableMotion(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity::PhysicsEnableMotion(this, 0);
}


// CPhysicsProp::ScriptDisableMotion  (line 790, @0x000000000235c3e0, libserver.so)
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CPhysicsProp::ScriptDisableMotion(CPhysicsProp *const this)
{
  CBaseEntity::PhysicsEnableMotion(this, 0);
}


// CPhysicsProp::ScriptSetDynamicVsDynamicContinuous  (line 799, @0x000000000235c3f0, libserver.so)
void __fastcall CPhysicsProp::ScriptSetDynamicVsDynamicContinuous(
        CPhysicsProp *const this,
        bool bIsDynamicVsDynamicContinuousEnabled)
{
  __int64 v3; // rax

  if ( this != -840LL )
  {
    v3 = (*(this->m_Collision._vptr_ICollideable + 12))();
    if ( v3 != 0 )
      (*(*v3 + 952LL))(v3, bIsDynamicVsDynamicContinuousEnabled);
  }
}


// CPhysicsProp::InputDisableFloating  (line 812, @0x000000000234ae20, libserver.so)
void __fastcall CPhysicsProp::InputDisableFloating(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  ;
}


// CPhysicsProp::InputStartGlowing  (line 820, @0x000000000234c280, libserver.so)  // inlines: ForceStartGlowing
// calls: CGlowProperty::SetGlowState
void __fastcall CPhysicsProp::InputStartGlowing(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CGlowProperty::SetGlowState(&this->m_Glow, 3);
}


// CPhysicsProp::InputStopGlowing  (line 827, @0x000000000234c2a0, libserver.so)  // inlines: ForceStopGlowing
// calls: CGlowProperty::SetGlowState
void __fastcall CPhysicsProp::InputStopGlowing(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CGlowProperty::SetGlowState(&this->m_Glow, 0);
}


// CPhysicsProp::InputSetGlowOverride  (line 834, @0x0000000002350a60, libserver.so)  // inlines: AssignTo, VariantFieldTypeName, Vector3D, operator=
// calls: CBaseProp::SetGlowOverrideColor, V_sscanf, Warning
// strings: "No free conversion of %s variant to Vector right now\n", "js_raw_args", "js_array", "js_object", "js_value", "hscript_lightbinding" (20 total)
// globals: jpt_2350B50
void __fastcall CPhysicsProp::InputSetGlowOverride(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  Vector *m_pszString; // rax
  const char *v5; // rsi
  Vector tmpColor; // [rsp+0h] [rbp-20h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type == 0 )
    {
      m_pszString = &vec3_origin;
      goto LABEL_6;
    }
LABEL_12:
    switch ( m_type )
    {
      case 1:
        v5 = "float";
        break;
      case 4:
        v5 = "quaternion";
        break;
      case 5:
        v5 = "integer";
        break;
      case 6:
        v5 = "boolean";
        break;
      case 8:
        v5 = "character";
        break;
      case 9:
        v5 = "color";
        break;
      case 13:
        v5 = "ehandle";
        break;
      case 25:
        v5 = "vector2d";
        break;
      case 26:
        v5 = "int64";
        break;
      case 27:
        v5 = "vector4d";
        break;
      case 28:
        v5 = "resourcehandle";
        break;
      case 31:
        v5 = "hscript";
        break;
      case 32:
        v5 = "variant";
        break;
      case 33:
        v5 = "uint64";
        break;
      case 34:
        v5 = "float64";
        break;
      case 37:
        v5 = "unsigned";
        break;
      case 38:
        v5 = "utlstringtoken";
        break;
      case 48:
        v5 = "hscript_lightbinding";
        break;
      case 49:
        v5 = "js_value";
        break;
      case 50:
        v5 = "js_object";
        break;
      case 51:
        v5 = "js_array";
        break;
      case 52:
        v5 = "js_raw_args";
        break;
      default:
        v5 = "unknown_variant_type";
        break;
    }
    Warning("No free conversion of %s variant to Vector right now\n", v5);
    goto LABEL_7;
  }
  if ( m_type != 30 )
  {
    if ( m_type == 39 )
    {
LABEL_5:
      m_pszString = inputdata->value.m_pszString;
LABEL_6:
      tmpColor = *m_pszString;
      goto LABEL_7;
    }
    goto LABEL_12;
  }
  if ( V_sscanf(inputdata->value.m_uint64, "%g %g %g", &tmpColor, &tmpColor.y, &tmpColor.z) != 3 )
    tmpColor = vec3_origin;
LABEL_7:
  CBaseProp::SetGlowOverrideColor(this, &tmpColor);
}


// CPhysicsProp::InputSetGlowRange  (line 843, @0x000000000234c2c0, libserver.so)  // inlines: Int, SetGlowRange, operator int
// calls: CGlowProperty::SetGlowRange
void __fastcall CPhysicsProp::InputSetGlowRange(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_float);
  }
  else if ( m_type == 34 )
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_float64);
  }
  else
  {
    CGlowProperty::SetGlowRange(&this->m_Glow, inputdata->value.m_int);
  }
}


// CPhysicsProp::InputSetMass  (line 850, @0x000000000234e840, libserver.so)  // inlines: Float, GetComponent<CBodyComponent>, GetSkeletonInstance, operator float, operator[]
void __fastcall CPhysicsProp::InputSetMass(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  void (__fastcall *v8)(double); // rax

  m_pEntity = this->m_pEntity;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v6 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v6 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v6 = 0;
  }
  v7 = *((*(**(v6 + 8) + 72LL))(*(v6 + 8)) + 536);
  if ( v7 != 0 )
  {
    v8 = *(*v7 + 424LL);
    if ( inputdata->value.m_type == 34 )
      v8(inputdata->value.m_float64);
    else
      v8(inputdata->value.m_float);
  }
}


// CPhysicsProp::InputEnablePickup  (line 860, @0x000000000234e940, libserver.so)  // inlines: AddSpawnFlags, NetworkStateChanged, Set, operator|=<int>
// calls: CBaseEntity::VPhysicsGetObject, PhysClearGameFlags
void __fastcall CPhysicsProp::InputEnablePickup(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax
  unsigned int v4; // r12d

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    PhysClearGameFlags(Object, 0x80u);
  v4 = this->m_spawnflags.m_Value | 0x200;
  if ( this->m_spawnflags.m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
}


// CPhysicsProp::InputDisablePickup  (line 872, @0x000000000234e8e0, libserver.so)  // inlines: NetworkStateChanged, RemoveSpawnFlags, Set, operator&=<int>
// calls: CBaseEntity::VPhysicsGetObject, PhysSetGameFlags
void __fastcall CPhysicsProp::InputDisablePickup(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax
  unsigned int v4; // r12d

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
    PhysSetGameFlags(Object, 0x80u);
  v4 = this->m_spawnflags.m_Value & 0xFFFFFDFF;
  if ( this->m_spawnflags.m_Value != v4 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
}


// CPhysicsProp::EnableMotion  (line 922, @0x0000000002362390, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::VPhysicsGetObject, CBreakableProp::GetEnableMotionPosition, CBaseEntity::PhysicsEnableMotion, CEntityIOOutput::FireOutputInternal, CBreakableProp::CheckRemoveRagdolls, CBreakableProp::ClearEnableMotionPosition, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPhysicsProp::InputEnableMotion, CPhysicsProp::VPhysicsCollision, CPhysicsProp::OnTakeDamage, CPhysicsProp::OnPhysGunPickup
void __fastcall CPhysicsProp::EnableMotion(CPhysicsProp *const this)
{
  Vector pos; // [rsp+0h] [rbp-50h] BYREF
  QAngle angles; // [rsp+10h] [rbp-40h] BYREF
  CVariant value; // [rsp+20h] [rbp-30h] BYREF

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    if ( CBreakableProp::GetEnableMotionPosition(this, &pos, &angles) )
    {
      CBreakableProp::ClearEnableMotionPosition(this);
      (*(this->_vptr_IHandleEntity + 128))(this, &pos, &angles, 0);
    }
    CBaseEntity::PhysicsEnableMotion(this, 1);
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_MotionEnabled, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  CBreakableProp::CheckRemoveRagdolls(this);
}


// CPhysicsProp::OnPhysGunPickup  (line 947, @0x0000000002364f80, libserver.so)  // inlines: CVariantBase, FireOutput, Free, SetCollisionGroup, ~CVariantBase
// calls: CBreakableProp::OnPhysGunPickup, CBaseEntity::VPhysicsGetObject, CEntityIOOutput::FireOutputInternal, CBreakableProp::CheckRemoveRagdolls, CPhysicsProp::EnableMotion, CCollisionProperty::SetCollisionGroup, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysicsProp::OnPhysGunPickup(
        CPhysicsProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  IPhysicsObject *Object; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  CBreakableProp::OnPhysGunPickup(this, pPhysGunUser, reason, nVRControllerID);
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object == 0 || (*(*Object + 1512LL))(Object) != 0 )
    goto LABEL_3;
  if ( (this->m_spawnflags.m_Value & 0x40) != 0 )
  {
    CPhysicsProp::EnableMotion(this);
    if ( (*(this->_vptr_IHandleEntity + 284))(this, 0) != 0 )
      CCollisionProperty::SetCollisionGroup(&this->m_Collision, 6);
LABEL_3:
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunPickup, pPhysGunUser, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      if ( reason != PhysGunPickup_t::PICKED_UP_BY_CANNON )
        goto LABEL_5;
    }
    else if ( reason != PhysGunPickup_t::PICKED_UP_BY_CANNON )
    {
LABEL_5:
      if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
      {
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunPunt, pPhysGunUser, this, &value, 0.0);
        if ( (value.m_flags & 1) == 0 )
          goto LABEL_7;
        goto LABEL_16;
      }
      if ( (reason & 0xFFFFFFFD) != 0 )
      {
LABEL_7:
        CBreakableProp::CheckRemoveRagdolls(this);
        return;
      }
LABEL_15:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerPickup, pPhysGunUser, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_7;
LABEL_16:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      goto LABEL_7;
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunOnlyPickup, pPhysGunUser, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    goto LABEL_15;
  }
}


// CPhysicsProp::OnPhysGunDrop  (line 988, @0x0000000002363860, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, FireOutput, Free, Purge, RemoveAll, SetCollisionGroup, Vector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase
// calls: CBreakableProp::OnPhysGunDrop, CEntityIOOutput::FireOutputInternal, CBaseEntity::GetAllChildren, __dynamic_cast, CUtlMemory<CBaseEntity*, int>::Purge, CBaseEntity::VPhysicsGetObject, PhysSetGameFlags, CCollisionProperty::SetCollisionGroup, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: `typeinfo for'IParentPropInteraction
void __fastcall CPhysicsProp::OnPhysGunDrop(
        CPhysicsProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  __int64 i; // rbx
  CBaseEntity *v8; // rdi
  void *v9; // rax
  IPhysicsObject *v10; // rax
  IPhysicsObject *Object; // rax
  IPhysicsObject *v12; // rax
  float angDrag; // [rsp+Ch] [rbp-44h] BYREF
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > children; // [rsp+10h] [rbp-40h] BYREF

  CBreakableProp::OnPhysGunDrop(this, pPhysGunUser, Reason, nVRControllerID);
  switch ( Reason )
  {
    case PhysGunDrop_t::LAUNCHED_BY_CANNON:
      if ( (*(this->_vptr_IHandleEntity + 284))(this, 5) != 0 )
      {
        children.m_Size = 0;
        *(&children.m_Size + 1) = 0;
        LODWORD(children.m_Memory.m_pMemory) = 1159479296;
        Object = CBaseEntity::VPhysicsGetObject(this);
        (*(*Object + 1720LL))(Object, &children);
        angDrag = 0.0;
        v12 = CBaseEntity::VPhysicsGetObject(this);
        (*(*v12 + 1640LL))(v12, 0, &angDrag);
      }
      v10 = CBaseEntity::VPhysicsGetObject(this);
      PhysSetGameFlags(v10, 0x100u);
      this->m_bFirstCollisionAfterLaunch = 1;
      break;
    case PhysGunDrop_t::THROWN_BY_PLAYER:
      this->m_bThrownByPlayer = 1;
      CCollisionProperty::SetCollisionGroup(&this->m_Collision, 20);
      break;
    case PhysGunDrop_t::DROPPED_BY_PLAYER:
      this->m_bDroppedByPlayer = 1;
      break;
    default:
      break;
  }
  LODWORD(children.m_Memory.m_pMemory) = 0;
  *&children.m_Size = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunDrop, pPhysGunUser, this, &children, 0.0);
  if ( (BYTE2(children.m_Memory.m_pMemory) & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&children.m_Size);
  if ( (*(this->_vptr_IHandleEntity + 284))(this, 11) != 0 )
  {
    children.m_Size = 0;
    children.m_Memory.m_pMemory = 0;
    children.m_Memory.m_nAllocationCount = 0;
    children.m_Memory.m_nGrowSize = 0;
    CBaseEntity::GetAllChildren(this, &children);
    for ( i = 0; children.m_Size > i; ++i )
    {
      v8 = children.m_Memory.m_pMemory[i];
      if ( v8 != 0 )
      {
        v9 = __dynamic_cast(v8, &`typeinfo for'CBaseEntity, &`typeinfo for'IParentPropInteraction, -2);
        if ( v9 != 0 )
          (*(*v9 + 8LL))(v9, pPhysGunUser, Reason);
      }
    }
    children.m_Size = 0;
    if ( (children.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseEntity *,int>::Purge(&children.m_Memory);
      if ( (children.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CBaseEntity *,int>::Purge(&children.m_Memory);
    }
  }
}


// CPhysicsProp::HandleAnyCollisionInteractions  (line 1052, @0x000000000235c540, libserver.so)  // inlines: DotProduct, VectorRotate
// calls: CPhysicsProp::GetPropDataAngles, CBreakableProp::CheckRemoveRagdolls, AngleVectors, CBaseEntity::EntityToWorldTransform, VectorRotate, CBreakableProp::HandleInteractionStick
// callers: CPhysicsProp::VPhysicsCollision
// strings: "impale_forward"
void __fastcall CPhysicsProp::HandleAnyCollisionInteractions(
        CPhysicsProp *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  matrix3x4_t *v6; // rax
  CBaseEntity *v7; // rdi
  int v8; // xmm2_4
  float x; // [rsp+4h] [rbp-6Ch]
  float y; // [rsp+8h] [rbp-68h]
  float sign; // [rsp+Ch] [rbp-64h]
  float signa; // [rsp+Ch] [rbp-64h]
  Vector forward; // [rsp+10h] [rbp-60h] BYREF
  QAngle angImpaleForward; // [rsp+20h] [rbp-50h] BYREF
  Vector normal; // [rsp+30h] [rbp-40h] BYREF

  if ( (*(this->_vptr_IHandleEntity + 284))(this, 3) != 0 )
  {
    x = pEvent->preVelocity[index].x;
    y = pEvent->preVelocity[index].y;
    sign = pEvent->preVelocity[index].z;
    if ( CPhysicsProp::GetPropDataAngles(this, "impale_forward", &angImpaleForward) )
    {
      AngleVectors(&angImpaleForward, &normal, 0, 0);
      v6 = CBaseEntity::EntityToWorldTransform(this);
      VectorRotate(&normal.x, v6, &forward.x);
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 61))(this, &forward, 0, 0);
    }
    if ( (((x * forward.x) + (y * forward.y)) + (sign * forward.z)) >= 1000.0 )
    {
      v7 = pEvent->pEntities[index == 0];
      if ( (*(v7->_vptr_IHandleEntity + 143))(v7) != 0 )
      {
        v8 = 1065353216;
        if ( index != 0 )
          v8 = -1082130432;
        signa = *&v8;
        (*pEvent->pInternalData->_vptr_IPhysicsCollisionData)(pEvent->pInternalData, &normal);
        if ( ((((forward.x * normal.x) + (forward.y * normal.y)) + (forward.z * normal.z)) * signa) >= 0.707106781187 )
          CBreakableProp::HandleInteractionStick(this, index, pEvent);
      }
    }
    else
    {
      CBreakableProp::CheckRemoveRagdolls(this);
    }
  }
}


// CPhysicsProp::GetPropDataAngles  (line 1141, @0x000000000235c440, libserver.so)
// calls: CBaseAnimating::GetModelPtr, KeyValues::operator new, KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::FindKey, KeyValues::GetString, KeyValues::deleteThis, UTIL_StringToVector, KeyValues::operator delete, _Unwind_Resume
// callers: CPhysicsProp::HandleAnyCollisionInteractions
// strings: "physgun_interactions"
bool __fastcall CPhysicsProp::GetPropDataAngles(
        CPhysicsProp *const this,
        const char *pKeyName,
        QAngle *const vecAngles)
{
  const CModel *ModelPtr; // rbx
  KeyValues *v6; // r12
  const char *v7; // r15
  const char *v8; // rax
  bool v9; // bl
  KeyValues *Key; // rax
  const char *String; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0;
  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, "");
  v7 = CModel::KeyValueText(ModelPtr);
  v8 = CModel::name(ModelPtr);
  v9 = KeyValues::LoadFromBuffer(v6, v8, v7, 0, 0, 0, 0);
  if ( v9
    && (Key = KeyValues::FindKey(v6, "physgun_interactions", 0)) != 0
    && (String = KeyValues::GetString(Key, pKeyName, "", 0, 0)) != 0
    && *String != 0 )
  {
    UTIL_StringToVector(&vecAngles->x, String);
    KeyValues::deleteThis(v6);
  }
  else
  {
    v9 = 0;
    KeyValues::deleteThis(v6);
  }
  return v9;
}


// CPhysicsProp::GetCarryDistanceOffset  (line 1171, @0x000000000235c700, libserver.so)
// calls: CBaseAnimating::GetModelPtr, KeyValues::operator new, KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::FindKey, KeyValues::GetFloat, KeyValues::deleteThis, KeyValues::operator delete, _Unwind_Resume
// strings: "physgun_interactions", "carry_distance_offset"
float __fastcall CPhysicsProp::GetCarryDistanceOffset(CPhysicsProp *const this)
{
  const CModel *ModelPtr; // rbx
  KeyValues *v2; // r12
  const char *v3; // r13
  const char *v4; // rax
  KeyValues *Key; // rax
  float v6; // xmm1_4
  float flDistance; // [rsp+Ch] [rbp-24h]

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ModelPtr == 0 )
    return 0.0;
  v2 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v2, "");
  v3 = CModel::KeyValueText(ModelPtr);
  v4 = CModel::name(ModelPtr);
  if ( KeyValues::LoadFromBuffer(v2, v4, v3, 0, 0, 0, 0)
    && (Key = KeyValues::FindKey(v2, "physgun_interactions", 0)) != 0 )
  {
    flDistance = KeyValues::GetFloat(Key, "carry_distance_offset", v6);
    KeyValues::deleteThis(v2);
    return flDistance;
  }
  else
  {
    KeyValues::deleteThis(v2);
    return 0.0;
  }
}


// CPhysicsProp::ObjectCaps  (line 1198, @0x000000000234c640, libserver.so)  // inlines: GetBool, GetInt, HasSpawnFlags
// calls: CBaseEntity::ObjectCaps, CBasePlayer::CanPickupObject
int __fastcall CPhysicsProp::ObjectCaps(CPhysicsProp *const this)
{
  int v2; // eax
  float v3; // xmm2_4
  unsigned int m_Value; // edx
  int v5; // r13d
  int v6; // ebx
  int v8; // ebx

  v2 = CBaseEntity::ObjectCaps(this);
  m_Value = this->m_spawnflags.m_Value;
  v5 = v2;
  if ( (m_Value & 0x100) != 0 )
  {
    v6 = v2 | 0x40000001;
  }
  else
  {
    v8 = v2;
    if ( CBasePlayer::CanPickupObject(this, COERCE_DOUBLE(1108082688), 128.0, v3) != 0 )
    {
      v6 = v8 | 0x40000001;
      if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 && (*(this->_vptr_IHandleEntity + 284))(this, 9) != 0 )
      {
        m_Value = this->m_spawnflags.m_Value;
        v6 = v5 | 0x40000021;
      }
      else
      {
        m_Value = this->m_spawnflags.m_Value;
      }
    }
    else
    {
      v6 = v8 | 0x40000000;
      m_Value = this->m_spawnflags.m_Value;
    }
  }
  if ( (m_Value & 0x4000) != 0 )
    return v6 | 0x20;
  return v6;
}


// CPhysicsProp::UseEx  (line 1249, @0x0000000002363240, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Int, ToBasePlayer, VRHandSlotFromUseData, operator int, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysicsProp::UseEx(CPhysicsProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx
  __int64 m_uint; // rcx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0
    && (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0
    && pActivator->m_MoveType.m_Value != MoveType_t::MOVETYPE_LADDER )
  {
    if ( (this->m_spawnflags.m_Value & 0x100) != 0 )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerUse, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    m_uint = 0;
    if ( inputdata->value.m_type == 5 )
      m_uint = inputdata->value.m_uint;
    (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, m_uint);
  }
}


// CPhysicsProp::OnAttemptPhysGunPull  (line 1274, @0x0000000002362d10, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
bool __fastcall CPhysicsProp::OnAttemptPhysGunPull(CPhysicsProp *const this, CBasePlayer *pPhysGunUser, int nHandID)
{
  CVariant v4; // [rsp-28h] [rbp-28h] BYREF

  if ( (this->m_spawnflags.m_Value & 0x100) == 0 )
    return 1;
  v4.m_type = 0;
  v4.m_flags = 0;
  v4.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerPickup, pPhysGunUser, this, &v4, 0.0);
  if ( (v4.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v4.m_uint64);
  return 1;
}


// CPhysicsProp::ShouldDisableMotionOnFreeze  (line 1287, @0x000000000235c800, libserver.so)  // inlines: curtime
// calls: CBaseEntity::VPhysicsGetObject, IPhysicsBody::GetGameData, __dynamic_cast
// callers: CPhysicsProp::VPhysicsUpdate
// globals: `typeinfo for'CPhysicsProp
bool __fastcall CPhysicsProp::ShouldDisableMotionOnFreeze(CPhysicsProp *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v6; // rbx
  float v7; // xmm0_4
  IPhysicsObject *Object; // r12
  __int64 i; // rbx
  const IPhysicsBody *v10; // rax
  void *GameData; // rax
  _BYTE *v12; // rax
  FnGlobalVarsWarningFunc v13; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  if ( this->m_fNextCheckDisableMotionContactsTime > m_flCurrentTime )
    return 0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      v13 = gpGlobals->m_pfnWarningFunc;
      if ( v13 != 0 )
        v13(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v7 = v6->m_flCurrentTime + 0.5;
  }
  else
  {
    v7 = 0.5;
  }
  this->m_fNextCheckDisableMotionContactsTime = v7;
  Object = CBaseEntity::VPhysicsGetObject(this);
  for ( i = (*(*Object + 1872LL))(Object); (*(*i + 16LL))(i) != 0; (*(*i + 96LL))(i) )
  {
    v10 = (*(*i + 24LL))(i, 1);
    GameData = IPhysicsBody::GetGameData(v10);
    if ( GameData != 0 )
    {
      v12 = __dynamic_cast(GameData, &`typeinfo for'CBaseEntity, &`typeinfo for'CPhysicsProp, 0);
      if ( v12 != 0 && (v12[406] & 1) == 0 )
        return 0;
    }
  }
  (*(*Object + 1880LL))(Object, i);
  return 1;
}


// CPhysicsProp::VPhysicsUpdate  (line 1319, @0x0000000002364be0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, RemoveSpawnFlags, Set, SetCollisionGroup, operator&=<int>, operator=<bool>, ~CVariantBase
// calls: CBaseEntity::VPhysicsUpdate, CBaseEntity::VPhysicsGetObject, CBaseEntity::IsInWorld, CEntityIOOutput::FireOutputInternal, CPhysicsProp::ShouldDisableMotionOnFreeze, DevMsg(char const*,...), CBaseEntity::PhysicsEnableMotion, GetNavObstructionMgr, CNavObstructionManager::UpdateObstacle, CCollisionProperty::SetCollisionGroup, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// strings: "Disabling motion on phys prop"
void __fastcall CPhysicsProp::VPhysicsUpdate(CPhysicsProp *const this, IPhysicsObject *pPhysics)
{
  bool m_Value; // r13
  char v5; // r12
  IPhysicsObject *Object; // r12
  __int64 v7; // rax
  IPhysicsObject *v8; // rdi
  char v9; // r12
  CNavObstructionManager *NavObstructionMgr; // rax
  unsigned int v11; // r14d
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_Value = this->m_bAwake.m_Value;
  CBaseEntity::VPhysicsUpdate(this, pPhysics);
  v5 = (*(*pPhysics + 1464LL))(pPhysics) ^ 1;
  if ( v5 != this->m_bAwake.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1949, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bAwake.m_Value = v5;
  }
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( (this->m_spawnflags.m_Value & 1) != 0 && this->m_bAwake.m_Value )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnAwakened, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    v11 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
    if ( this->m_spawnflags.m_Value != v11 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v11;
    }
    if ( Object != 0 && (*(*Object + 1512LL))(Object) != 0 )
      this->m_bHasBeenAwakened = 1;
  }
  if ( this->m_bThrownByPlayer && !this->m_bAwake.m_Value )
  {
    this->m_bThrownByPlayer = 0;
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 4);
    if ( CBaseEntity::IsInWorld(this) )
      goto LABEL_8;
  }
  else if ( CBaseEntity::IsInWorld(this) )
  {
    goto LABEL_8;
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnOutOfWorld, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
LABEL_8:
  if ( !this->m_bAwake.m_Value || Object == 0 || (v7 = *Object, v8 = Object, v9 = 1, (*(v7 + 1512))(v8) == 0) )
  {
    if ( this->m_bHasBeenAwakened
      && (this->m_spawnflags.m_Value & 0x10000) != 0
      && CPhysicsProp::ShouldDisableMotionOnFreeze(this) )
    {
      DevMsg("Disabling motion on phys prop");
      CBaseEntity::PhysicsEnableMotion(this, 0);
    }
    v9 = 0;
  }
  if ( m_Value != this->m_bAwake.m_Value && this->m_breakableType == 0 )
  {
    NavObstructionMgr = GetNavObstructionMgr();
    CNavObstructionManager::UpdateObstacle(NavObstructionMgr, &this->INavObstacle);
  }
  if ( v9 != 0 )
  {
    if ( !m_Value )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnAwake, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
LABEL_21:
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
  else if ( m_Value )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnAsleep, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      goto LABEL_21;
  }
}


// CPhysicsProp::IsNavAvoidanceObstacle  (line 1494, @0x000000000235ccb0, libserver.so)  // inlines: Extent, Init, IsLengthGreaterThan, IsSolid, LengthSqr, VectorSubtract, WorldSpaceAABB, operator-
// calls: CPhysicsProp::GetMass, CCollisionProperty::CollisionAABBToWorldAABB
bool __fastcall CPhysicsProp::IsNavAvoidanceObstacle(const CPhysicsProp *const this)
{
  CCollisionProperty *m_pCollision; // rbx
  Extent extent; // [rsp+0h] [rbp-30h] BYREF

  m_pCollision = this->m_pCollision;
  if ( m_pCollision == 0 )
    return 0;
  if ( (*((*(m_pCollision->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) != 0 )
  {
    if ( m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
      return 0;
  }
  else if ( (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0
         || m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
  {
    return 0;
  }
  if ( (*((*(this->m_Collision._vptr_ICollideable + 13))(&this->m_Collision) + 31) & 1) == 0
    || CPhysicsProp::GetMass(this) <= 100.0 )
  {
    return 0;
  }
  extent.lo.x = 3.4028235e38;
  extent.lo.y = 3.4028235e38;
  extent.lo.z = 3.4028235e38;
  extent.hi.x = -3.4028235e38;
  extent.hi.y = -3.4028235e38;
  extent.hi.z = -3.4028235e38;
  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &extent.lo,
    &extent.hi);
  return ((((extent.hi.x - extent.lo.x) * (extent.hi.x - extent.lo.x))
         + ((extent.hi.y - extent.lo.y) * (extent.hi.y - extent.lo.y)))
        + ((extent.hi.z - extent.lo.z) * (extent.hi.z - extent.lo.z))) > 324.0;
}


// CPhysicsProp::IsVRTeleportObstacle  (line 1511, @0x000000000235c970, libserver.so)  // inlines: IsSolid
bool __fastcall CPhysicsProp::IsVRTeleportObstacle(const CPhysicsProp *const this)
{
  CCollisionProperty *m_pCollision; // rbx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision == 0 )
    return 0;
  if ( (*((*(m_pCollision->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) != 0 )
  {
    if ( m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
      return 0;
  }
  else if ( (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0
         || m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
  {
    return 0;
  }
  if ( (*((*(this->m_Collision._vptr_ICollideable + 13))(&this->m_Collision) + 31) & 1) == 0 )
    return 0;
  return (*(this->_vptr_IHandleEntity + 302))(this) > 18.0;
}


// CPhysicsProp::GetNavObstructionHeight  (line 1529, @0x000000000234be70, libserver.so)  // inlines: Extent, Init, WorldSpaceAABB
// calls: CCollisionProperty::CollisionAABBToWorldAABB
float __fastcall CPhysicsProp::GetNavObstructionHeight(const CPhysicsProp *const this)
{
  Extent extent; // [rsp+0h] [rbp-20h] BYREF

  extent.lo.x = 3.4028235e38;
  extent.lo.y = 3.4028235e38;
  extent.lo.z = 3.4028235e38;
  extent.hi.x = -3.4028235e38;
  extent.hi.y = -3.4028235e38;
  extent.hi.z = -3.4028235e38;
  CCollisionProperty::CollisionAABBToWorldAABB(
    &this->m_Collision,
    &this->m_Collision.m_vecMins.m_Value,
    &this->m_Collision.m_vecMaxs.m_Value,
    &extent.lo,
    &extent.hi);
  return extent.hi.z - extent.lo.z;
}


// CPhysicsProp::IsNavAvoidanceObstacleActive  (line 1538, @0x000000000235cde0, libserver.so)  // inlines: Extent, Init, IsSolid, WorldSpaceAABB
// calls: CPhysicsProp::GetMass, CCollisionProperty::CollisionAABBToWorldAABB, CBaseEntity::GetHealth, CBaseEntity::GetDamageOptions
bool __fastcall CPhysicsProp::IsNavAvoidanceObstacleActive(const CPhysicsProp *const this)
{
  bool m_Value; // bl
  CCollisionProperty *m_pCollision; // r13
  Extent extent; // [rsp+0h] [rbp-40h] BYREF

  m_Value = this->m_bAwake.m_Value;
  if ( m_Value )
    return 0;
  if ( this->m_breakableType != 0 )
    return 0;
  if ( CPhysicsProp::GetMass(this) <= 100.0 )
    return 0;
  m_pCollision = this->m_pCollision;
  if ( m_pCollision == 0
    || (*((*(m_pCollision->_vptr_ICollideable + 13))(this->m_pCollision) + 31) & 1) == 0
    && (*((*(m_pCollision->_vptr_ICollideable + 13))(m_pCollision) + 31) & 2) == 0 )
  {
    return 0;
  }
  if ( m_pCollision->m_nSolidType.m_Value == SolidType_t::SOLID_NONE )
    return 0;
  if ( (*((*(this->m_Collision._vptr_ICollideable + 13))(&this->m_Collision) + 31) & 1) != 0 )
  {
    extent.lo.x = 3.4028235e38;
    extent.lo.y = 3.4028235e38;
    extent.lo.z = 3.4028235e38;
    extent.hi.x = -3.4028235e38;
    extent.hi.y = -3.4028235e38;
    extent.hi.z = -3.4028235e38;
    CCollisionProperty::CollisionAABBToWorldAABB(
      &this->m_Collision,
      &this->m_Collision.m_vecMins.m_Value,
      &this->m_Collision.m_vecMaxs.m_Value,
      &extent.lo,
      &extent.hi);
    if ( (extent.hi.z - extent.lo.z) >= 18.0
      && (CBaseEntity::GetHealth(this) > 299 || CBaseEntity::GetDamageOptions(this) != DamageOptions_t::DAMAGE_YES) )
    {
      return 1;
    }
  }
  return m_Value;
}


// CPhysicsProp::WorldSpaceSurroundingBounds  (line 1568, @0x000000000234ae30, libserver.so)
void __fastcall CPhysicsProp::WorldSpaceSurroundingBounds(
        const CPhysicsProp *const this,
        Vector *pMinsOut,
        Vector *pMaxsOut)
{
  (*(this->m_Collision._vptr_ICollideable + 10))(&this->m_Collision, pMinsOut, pMaxsOut);
}


// CPhysicsProp::WorldSpaceOrientedBounds  (line 1575, @0x000000000234ae60, libserver.so)  // inlines: operator=
void __fastcall CPhysicsProp::WorldSpaceOrientedBounds(
        const CPhysicsProp *const this,
        Vector *pCenter,
        Vector *pMins,
        Vector *pMaxs,
        QAngle *pAngles)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12

  p_m_Collision = &this->m_Collision;
  *pCenter = *(*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
  *pMins = *(*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
  *pMaxs = *(*(this->m_Collision._vptr_ICollideable + 2))(p_m_Collision);
  *pAngles = *(*(this->m_Collision._vptr_ICollideable + 5))(p_m_Collision);
}


// CPhysicsProp::ClearFlagsThink  (line 1587, @0x000000000234c5f0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject, PhysClearGameFlags, CBaseEntity::ThinkSet
void __fastcall CPhysicsProp::ClearFlagsThink(CPhysicsProp *const this)
{
  IPhysicsObject *Object; // rax

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    PhysClearGameFlags(Object, 0x100u);
    CBaseEntity::ThinkSet(this, 0LL, -1.0, 1079859942, 0);
  }
}


// CPhysicsProp::ComputeEnablingImpulse  (line 1601, @0x000000000235ca00, libserver.so)  // inlines: CrossProduct, operator*=, operator+=, operator-=
// callers: CPhysicsProp::VPhysicsCollision
void __fastcall CPhysicsProp::ComputeEnablingImpulse(
        CPhysicsProp *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r15
  _BOOL8 v5; // r14
  IPhysicsObject *v6; // rbx
  double v7; // xmm0_8
  float v8; // xmm1_4
  float x; // xmm6_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  IPhysicsObject *v14; // rdi
  Vector vecContactPoint; // [rsp+10h] [rbp-70h] BYREF
  Vector vecLocalContactPoint; // [rsp+20h] [rbp-60h] BYREF
  Vector vecLocalContactVelocity; // [rsp+30h] [rbp-50h] BYREF
  Vector vecContactVelocity; // [rsp+40h] [rbp-40h] BYREF

  v3 = index;
  (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &vecContactPoint);
  v5 = v3 == 0;
  v6 = pEvent->pObjects[v5];
  (*(*v6 + 1752LL))(v6, &vecLocalContactPoint, &vecContactPoint);
  v7 = (*(*v6 + 296LL))(v6);
  vecContactVelocity.z = v8;
  *&vecContactVelocity.x = v7;
  x = pEvent->preAngularVelocity[v5].x;
  vecLocalContactPoint.z = vecLocalContactPoint.z - v8;
  v10 = x * 0.017453292;
  v11 = pEvent->preAngularVelocity[v5].y * 0.017453292;
  v12 = 0.017453292 * pEvent->preAngularVelocity[v5].z;
  vecLocalContactPoint.y = vecLocalContactPoint.y - *(&v7 + 1);
  vecLocalContactPoint.x = vecLocalContactPoint.x - *&v7;
  vecLocalContactVelocity.x = (vecLocalContactPoint.z * v11) - (vecLocalContactPoint.y * v12);
  vecLocalContactVelocity.y = (v12 * vecLocalContactPoint.x) - (vecLocalContactPoint.z * v10);
  vecLocalContactVelocity.z = (vecLocalContactPoint.y * v10) - (vecLocalContactPoint.x * v11);
  (*(*v6 + 1760LL))(v6, &vecContactVelocity, &vecLocalContactVelocity);
  vecContactVelocity.x = vecContactVelocity.x + pEvent->preVelocity[v5].x;
  vecContactVelocity.y = vecContactVelocity.y + pEvent->preVelocity[v5].y;
  vecContactVelocity.z = vecContactVelocity.z + pEvent->preVelocity[v5].z;
  v13 = (*(*v6 + 208LL))(v6);
  v14 = pEvent->pObjects[v3];
  vecContactVelocity.x = vecContactVelocity.x * v13;
  vecContactVelocity.y = vecContactVelocity.y * v13;
  vecContactVelocity.z = v13 * vecContactVelocity.z;
  (*(*v14 + 1784LL))(v14, &vecContactVelocity, &vecContactPoint);
}


// CPhysicsProp::VPhysicsCollision  (line 1633, @0x0000000002362490, libserver.so)  // inlines: CUtlSymbolLarge, GetInstance, IndexToIdentity, Instance, IsUsed, LookupEntityByIndex, LookupEntityByNetworkIndex, VectorMultiply, curtime, operator*, operator=, operator==
// calls: CBaseEntity::VPhysicsCollision, CPhysicsProp::HandleAnyCollisionInteractions, CBaseEntity::RegisterThinkContext, CBaseEntity::ThinkSet, CalculateDefaultPhysicsDamage, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBreakableProp::HandleFirstCollisionInteractions, IPhysicsBody::GetGameData, CPhysicsProp::EnableMotion, CPhysicsProp::ComputeEnablingImpulse (14 total)
// globals: CPhysicsProp::ClearFlagsThink(void)
void __fastcall CPhysicsProp::VPhysicsCollision(CPhysicsProp *const this, int index, gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r13
  const IPhysicsBody **v6; // r14
  const IPhysicsBody *v7; // r15
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int (**vptr_IBreakableWithPropData)(...); // rax
  int (**m_Id)(...); // rax
  float m_impactEnergyScale; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  CBaseEntity *m_pInstance; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  vec_t v19; // xmm2_4
  CBaseEntity *v20; // rax
  float v21; // xmm3_4
  float v22; // xmm0_4
  void *GameData; // rax
  float v24; // xmm0_4
  vec_t v25; // xmm3_4
  vec_t v26; // xmm2_4
  vec_t v27; // xmm0_4
  CEntityIdentity *v28; // rdx
  CBaseEntity *pHitEntity; // [rsp+10h] [rbp-120h]
  float damage; // [rsp+18h] [rbp-118h]
  float damagePosition; // [rsp+20h] [rbp-110h]
  int damageType; // [rsp+3Ch] [rbp-F4h] BYREF
  string_t iszDamageTable; // [rsp+40h] [rbp-F0h] BYREF
  Vector damagePos; // [rsp+50h] [rbp-E0h] BYREF
  Vector damageForce; // [rsp+60h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+70h] [rbp-C0h] BYREF

  v3 = index;
  CBaseEntity::VPhysicsCollision(this, index, pEvent);
  v6 = &pEvent->pObjects[v3 == 0];
  v7 = *v6;
  if ( this->m_flForceToEnableMotion != 0.0 )
  {
    GameData = IPhysicsBody::GetGameData(*v6);
    if ( GameData == 0 || (*(*GameData + 1120LL))(GameData) == 0 || (this->m_spawnflags.m_Value & 0x400) == 0 )
    {
      damagePosition = pEvent->collisionSpeed;
      if ( ((*(*v7 + 208LL))(v7) * damagePosition) >= this->m_flForceToEnableMotion )
      {
        CPhysicsProp::EnableMotion(this);
        CPhysicsProp::ComputeEnablingImpulse(this, v3, pEvent);
        this->m_flForceToEnableMotion = 0.0;
      }
    }
  }
  if ( this->m_bFirstCollisionAfterLaunch )
    CBreakableProp::HandleFirstCollisionInteractions(this, v3, pEvent);
  if ( (*(this->_vptr_IHandleEntity + 190))(this, 2.0) != 0 )
    CPhysicsProp::HandleAnyCollisionInteractions(this, v3, pEvent);
  if ( (this->m_spawnflags.m_Value & 2) == 0 )
  {
    vptr_IBreakableWithPropData = this->_vptr_IBreakableWithPropData;
    damageType = 0;
    vptr_IBreakableWithPropData[13](&iszDamageTable, &this->IBreakableWithPropData);
    m_Id = iszDamageTable.u.m_Id;
    if ( iszDamageTable.u.m_Id == 0 )
    {
      MakeEntitySystemString("props");
      m_Id = info._vptr_CTakeDamageInfo;
      iszDamageTable.u.m_Id = info._vptr_CTakeDamageInfo;
    }
    m_impactEnergyScale = this->m_impactEnergyScale;
    info._vptr_CTakeDamageInfo = m_Id;
    v14 = CalculateDefaultPhysicsDamage(v3, pEvent, m_impactEnergyScale, 1, &damageType, &info, 0);
    v15 = v14;
    if ( v14 > 0.0 )
    {
      if ( this->m_bFirstCollisionAfterLaunch && !this->m_bThrownByPlayer )
        v15 = v14 * 10.0;
      m_pInstance = v6[18];
      if ( m_pInstance == 0 )
      {
        v28 = g_pGameEntitySystem->m_EntityList.m_pIdentityChunks[0];
        if ( v28 != 0 && (v28->m_EHandle.m_Index & 0x7FFF) == 0 )
          m_pInstance = v28->m_pInstance;
      }
      pHitEntity = m_pInstance;
      damage = v15;
      (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &damagePos);
      v17 = (*(*pEvent->pObjects[v3] + 208LL))(pEvent->pObjects[v3]);
      v18 = damage;
      v19 = pEvent->postVelocity[v3].x * v17;
      v20 = pHitEntity;
      v21 = pEvent->postVelocity[v3].y * v17;
      v22 = v17 * pEvent->postVelocity[v3].z;
      damageForce.x = v19;
      damageForce.y = v21;
      damageForce.z = v22;
      if ( v19 == vec3_origin.x && v21 == vec3_origin.y && v22 == vec3_origin.z )
      {
        v24 = (*(**v6 + 208LL))(*v6);
        v18 = damage;
        v20 = pHitEntity;
        v25 = pEvent->postVelocity[v3 == 0].y * v24;
        v26 = pEvent->postVelocity[v3 == 0].z * v24;
        v27 = v24 * pEvent->postVelocity[v3 == 0].x;
        damageForce.y = v25;
        damageForce.z = v26;
        damageForce.x = v27;
      }
      CTakeDamageInfo::CTakeDamageInfo(&info, v20, v20, &damageForce, &damagePos, v18, damageType, 0, 0);
      CBaseEntity::TakeDamage(this, &info);
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
  }
  if ( this->m_bFirstCollisionAfterLaunch )
  {
    this->m_bFirstCollisionAfterLaunch = 0;
    CBaseEntity::RegisterThinkContext(this, 1079859942);
    m_flCurrentTime = 0.0;
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          (m_pfnWarningFunc)(1, 0.0);
      }
      m_flCurrentTime = v9->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CPhysicsProp::ClearFlagsThink, m_flCurrentTime, 1079859942, 0);
  }
}


// CPhysicsProp::OnSpawnBreakProp  (line 1776, @0x000000000234af60, libserver.so)
void __fastcall CPhysicsProp::OnSpawnBreakProp(CPhysicsProp *const this, CBreakableProp *pSpawnedProp)
{
  ;
}


// CPhysicsProp::SetCollisionGroupOverride  (line 1794, @0x000000000235cba0, libserver.so)  // inlines: SetCollisionGroup
// calls: CCollisionProperty::SetCollisionGroup
void __fastcall CPhysicsProp::SetCollisionGroupOverride(CPhysicsProp *const this, int nOverride)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // rdi

  p_m_Collision = &this->m_Collision;
  LODWORD(p_m_Collision[6].m_vecSpecifiedSurroundingMaxs.m_Value.x) = nOverride;
  CCollisionProperty::SetCollisionGroup(p_m_Collision, nOverride);
}


// CPhysicsProp::GetCollisionGroupOverride  (line 1801, @0x000000000235cbc0, libserver.so)
int __fastcall CPhysicsProp::GetCollisionGroupOverride(CPhysicsProp *const this)
{
  return this->m_nCollisionGroupOverride;
}


// CPhysicsProp::OnTakeDamage  (line 1853, @0x00000000023628f0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetBool, GetDamageForce, GetFloat, GetInt, Init, Length, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator+
// calls: CTakeDamageInfo::CTakeDamageInfo, CBreakableProp::OnTakeDamage, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetHealth, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CSoundEnt::InsertSound, CPhysicsProp::EnableMotion, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
int __fastcall CPhysicsProp::OnTakeDamage(CPhysicsProp *const this, const CTakeDamageInfo *const info)
{
  int v4; // r14d
  IPhysicsObject *Object; // rax
  double v6; // xmm0_8
  float v7; // xmm1_4
  float v8; // xmm1_4
  double v9; // xmm0_8
  float v10; // xmm5_4
  ConVar *m_pParent; // rax
  vec_t v12; // xmm1_4
  float m_flForceToEnableMotion; // xmm1_4
  int dangerRadius; // [rsp+8h] [rbp-248h]
  float v16; // [rsp+Ch] [rbp-244h]
  double vel; // [rsp+20h] [rbp-230h]
  float vel_8; // [rsp+28h] [rbp-228h]
  double v19; // [rsp+40h] [rbp-210h]
  CTraceFilterSimple v20; // [rsp+50h] [rbp-200h] BYREF
  Ray_t ray; // [rsp+90h] [rbp-1C0h] BYREF
  CTakeDamageInfo subInfo; // [rsp+E0h] [rbp-170h] BYREF
  trace_t tr; // [rsp+170h] [rbp-E0h] BYREF

  CTakeDamageInfo::CTakeDamageInfo(&subInfo, info);
  v4 = CBreakableProp::OnTakeDamage(this, &subInfo);
  if ( (this->m_fFlags.m_Value & 0x8000000) != 0
    && (info->m_bitsDamageType & 0x10000008) == 0x10000008
    && CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    v6 = (*(*Object + 1688LL))(Object);
    vel_8 = v7;
    vel = v6;
    if ( hl2_episodic.m_pParent->m_Value.m_nValue != 0 && CBaseEntity::GetHealth(this) <= 0 )
      dangerRadius = 120;
    else
      dangerRadius = 256;
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    v19 = (*(this->_vptr_IHandleEntity + 62))(this);
    v16 = v8 + vel_8;
    v9 = (*(this->_vptr_IHandleEntity + 62))(this);
    v10 = *&v9;
    ray.m_Start.w = 0.0;
    m_pParent = phys_traceline_radius.m_pParent;
    memset(&ray.m_Delta.w, 0, 36);
    *&v9 = m_pParent->m_Value.m_fValue;
    ray.m_Delta.y = (*(&v19 + 1) + *(&vel + 1)) - *(&v9 + 1);
    ray.m_flRadius = *&v9;
    ray.m_Delta.z = v16 - v12;
    ray.m_IsRay = 1;
    ray.m_Delta.x = (*&v19 + *&vel) - v10;
    *&ray.m_Start.x = __PAIR64__(HIDWORD(v9), LODWORD(v10));
    ray.m_Start.z = v12;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&v20, this, 4, 0);
    v20.m_attr.m_nInteractsWith |= 0x185003uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v20, &tr);
    CSoundEnt::InsertSound(8, &tr.endpos, dangerRadius, 1.0, this, 2, 0);
  }
  m_flForceToEnableMotion = this->m_flForceToEnableMotion;
  if ( m_flForceToEnableMotion != 0.0
    && fsqrt(
         ((info->m_vecDamageForce.x * info->m_vecDamageForce.x) + (info->m_vecDamageForce.y * info->m_vecDamageForce.y))
       + (info->m_vecDamageForce.z * info->m_vecDamageForce.z)) >= m_flForceToEnableMotion )
  {
    CPhysicsProp::EnableMotion(this);
    this->m_flForceToEnableMotion = 0.0;
  }
  if ( this->m_damageToEnableMotion > 0 && CBaseEntity::GetHealth(this) < this->m_damageToEnableMotion )
  {
    this->m_damageToEnableMotion = 0;
    if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      CPhysicsProp::EnableMotion(this);
      (*(this->_vptr_IHandleEntity + 55))(this, info);
    }
  }
  CTakeDamageInfo::~CTakeDamageInfo(&subInfo);
  return v4;
}


// CPhysicsProp::GetMassCenter  (line 2010, @0x000000000235cbd0, libserver.so)  // inlines: Init, VectorTransform
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::EntityToWorldTransform, VectorTransform
void __fastcall CPhysicsProp::GetMassCenter(CPhysicsProp *const this, Vector *pMassCenter)
{
  IPhysicsObject *Object; // rax
  vec_t v5; // xmm1_4
  matrix3x4_t *v6; // rax
  Vector vecLocal; // [rsp+0h] [rbp-20h] BYREF

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    *&vecLocal.x = (*(*Object + 296LL))(Object);
    vecLocal.z = v5;
    v6 = CBaseEntity::EntityToWorldTransform(this);
    VectorTransform(&vecLocal.x, v6, &pMassCenter->x);
  }
  else
  {
    pMassCenter->x = 0.0;
    pMassCenter->y = 0.0;
    pMassCenter->z = 0.0;
  }
}


// CPhysicsProp::GetMass  (line 2024, @0x000000000235cc60, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
// callers: CPhysicsProp::IsNavAvoidanceObstacle, CPhysicsProp::IsNavAvoidanceObstacleActive
float __fastcall CPhysicsProp::GetMass(const CPhysicsProp *const this)
{
  IPhysicsObject *Object; // rax

  if ( CBaseEntity::VPhysicsGetObject(this) == 0 )
    return 1.0;
  Object = CBaseEntity::VPhysicsGetObject(this);
  return (*(*Object + 208LL))(Object);
}


// CPhysicsProp::DrawDebugTextOverlays  (line 2034, @0x000000000234c710, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CBaseAnimating::DrawDebugTextOverlays, CBaseEntity::VPhysicsGetObject, GetMassEquivalent, V_snprintf, CBaseEntity::EntityText, CalculateObjectStress, CBaseAnimating::GetS1Skin, CBaseEntity::PhysicsGetMotionType, CBaseEntity::GetHealth, __stack_chk_fail
// strings: "Mass: %.2f kg / %.2f lb (%s)", "Stress: %.2f (%.2f / %.2f)", "Base PropData: %s", "Skin: %d", "Health: %d, collision group: %d, motion: %s", "Motion Disabled" (9 total)
int __fastcall CPhysicsProp::DrawDebugTextOverlays(
        CPhysicsProp *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  IPhysicsObject *Object; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  const char *MassEquivalent; // r14
  IPhysicsObject *v12; // rax
  IPhysicsObject *v13; // rax
  double v14; // xmm0_8
  const char *v15; // rcx
  int v16; // r14d
  IPhysicsObject *v17; // rax
  float v18; // xmm0_4
  IPhysicsObject *v19; // rax
  int S1Skin; // eax
  VPhysicsMotionType_t MotionType; // eax
  char *v22; // r13
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // r8d
  int Health; // eax
  const char *v26; // r9
  int v27; // eax
  float v28; // [rsp+Ch] [rbp-254h]
  int v29; // [rsp+Ch] [rbp-254h]
  vphysics_objectstress_t stressOut; // [rsp+10h] [rbp-250h] BYREF
  char tempstr[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v32; // [rsp+228h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v32 = __readfsqword(0x28u);
  v6 = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x800) != 0 && CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    v9 = (*(*Object + 208LL))(Object);
    MassEquivalent = GetMassEquivalent(v9, v10);
    v12 = CBaseEntity::VPhysicsGetObject(this);
    v28 = (*(*v12 + 208LL))(v12);
    v13 = CBaseEntity::VPhysicsGetObject(this);
    v14 = (*(*v13 + 208LL))(v13);
    v15 = MassEquivalent;
    v16 = v6 + 2;
    V_snprintf(tempstr, 512, "Mass: %.2f kg / %.2f lb (%s)", *&v14, (v28 * 2.2), v15);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v17 = CBaseEntity::VPhysicsGetObject(this);
    v18 = CalculateObjectStress(v17, this, &stressOut);
    V_snprintf(tempstr, 512, "Stress: %.2f (%.2f / %.2f)", v18, stressOut.exertedStress, stressOut.receivedStress);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v19 = CBaseEntity::VPhysicsGetObject(this);
    if ( (*(*v19 + 1512LL))(v19) == 0 )
    {
      V_snprintf(tempstr, 512, "Motion Disabled");
      v16 = v6 + 3;
      CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( this->m_iszBasePropData.u.m_Id != 0 )
    {
      V_snprintf(tempstr, 512, "Base PropData: %s", this->m_iszBasePropData.u.m_pAsString);
      CBaseEntity::EntityText(this, v16++, tempstr, 0.0, 255, 255, 255, 255);
    }
    if ( this->m_iNumBreakableChunks != 0 )
    {
      v27 = (*(this->_vptr_IBreakableWithPropData + 21))(&this->IBreakableWithPropData);
      V_snprintf(tempstr, 512, "Breakable Chunks: %d (Max Size %d)", this->m_iNumBreakableChunks, v27);
      CBaseEntity::EntityText(this, v16++, tempstr, 0.0, 255, 255, 255, 255);
    }
    S1Skin = CBaseAnimating::GetS1Skin(this);
    V_snprintf(tempstr, 512, "Skin: %d", S1Skin);
    CBaseEntity::EntityText(this, v16, tempstr, 0.0, 255, 255, 255, 255);
    MotionType = CBaseEntity::PhysicsGetMotionType(this);
    if ( MotionType == VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC )
    {
      v22 = "Dynamic - Awake";
      if ( !this->m_bAwake.m_Value )
        v22 = "Dynamic - Asleep";
    }
    else
    {
      v22 = "Kinematic";
      if ( MotionType != VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED )
        v22 = "Fixed";
    }
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      m_Value = m_pCollision->m_CollisionGroup.m_Value;
    else
      m_Value = 4;
    v29 = m_Value;
    Health = CBaseEntity::GetHealth(this);
    v26 = v22;
    v6 = v16 + 2;
    V_snprintf(tempstr, 512, "Health: %d, collision group: %d, motion: %s", Health, v29, v26);
    CBaseEntity::EntityText(this, v16 + 1, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// OnPhysShootSpawnComplete  (line 2115, @0x0000000002351730, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, GetFloat, GetValue, GetValue<Vector>, Vector, operator=, operator[]
// calls: CBaseEntity::VPhysicsGetObject, VariantFieldTypeName, Warning, V_sscanf
// strings: "No free conversion of %s variant to Vector right now\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall OnPhysShootSpawnComplete(CPhysicsProp *pEntity, const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *m_pElements; // rcx
  __int64 v5; // r9
  IPhysicsObject *Object; // r12
  __int64 m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  vec_t **v9; // rdi
  int16 m_type; // ax
  const char *v11; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm2_4
  void (__fastcall *v15)(IPhysicsObject *, float *); // rax
  float m_fValue; // xmm0_4
  Vector vVelocity; // [rsp+0h] [rbp-30h] BYREF
  float v18; // [rsp+10h] [rbp-20h] BYREF
  float v19; // [rsp+14h] [rbp-1Ch] BYREF
  float v20; // [rsp+18h] [rbp-18h] BYREF

  Object = CBaseEntity::VPhysicsGetObject(pEntity);
  if ( Object == 0 )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_17:
    v9 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_13;
    goto LABEL_18;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v3 = 0;
  v5 = m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    m_pElements = 0;
    if ( *(4 * v3) == -1093122415 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v3 )
      goto LABEL_17;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( *(&m_pElements->m_value.m_int + v3) != -1093122415 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    m_pElements = pKeyValues->m_keyValues.m_pElements;
  else
    m_pElements = 0;
  v9 = &m_pElements[v3];
  m_type = *(v9 + 4);
  if ( m_type == 0 )
  {
LABEL_18:
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    goto LABEL_19;
  }
LABEL_13:
  if ( m_type == 30 )
  {
    if ( V_sscanf(*v9, "%g %g %g", &v18, &v19, &v20) == 3 )
    {
      x = v18;
      y = v19;
      z = v20;
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  if ( m_type != 39 && m_type != 3 )
  {
    v11 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to Vector right now\n", v11);
    goto LABEL_18;
  }
  z = (*v9)[2];
  y = (*v9)[1];
  x = **v9;
LABEL_19:
  vVelocity.x = x;
  vVelocity.y = y;
  vVelocity.z = z;
  (*(*Object + 552LL))(Object, &vVelocity, v3, m_pElements, m_nCount, v5);
  v15 = *(*Object + 1792LL);
  m_fValue = phys_shoot_torque.m_pParent->m_Value.m_fValue;
  v18 = 0.0;
  v19 = 0.0;
  v20 = m_fValue;
  v15(Object, &v18);
}


// phys_shoot  (line 2127, @0x0000000002368e80, libserver.so)  // inlines: AddKeyValue<CEntityHandle>, AddToTail, Arg, Base, Bind, CEntityKeyValuesModifyScope, CEntitySpawnerAsync, CEntitySpawnerAsyncBase, CEntitySpawnerBase, CGameTrace, CUtlAbstractDelegate, CUtlDelegate, CUtlMemory, CUtlString, CUtlVector, CUtlVectorBase, Convert<FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>, void (FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>::*)(CPhysicsProp*, const CEntityKeyValues*)const, void (detail::GenericClass::*)()>, CopyFrom<FastDelegate2<CEntityInstance*, const CEntityKeyValues*, void> >, CopyFrom<FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void> >, Element, EnableInteractsWith, EntitySpawnerAsyncDesc_t, FastDelegate2, FilterSpawnGroupEntity, FindKeyHash, Free, GetClassInfo, GetFloat, Init, IsEmpty, LengthSqr, OverrideAllocator, Purge, QueueContextCallbacks, Ray_t, Release, ReleaseEntitySpawnerEntityVariantAllocator, RemoveAll, RnCollisionAttr_t, SetMementoFrom, SetToIdentity, SetValue, SetValue<CEntityHandle>, SetValue<QAngle>, SetValue<Vector>, SetValues, SetWorldTransform, Spawn, SpawnInternal, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, UtlMakeDelegate<CPhysicsProp*, const CEntityKeyValues*, void>, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, _V_strcmp, bindmemfunc<FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>, void (FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>::*)(CPhysicsProp*, const CEntityKeyValues*)const>, bindstaticfunc<FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>, void (FastDelegate2<CPhysicsProp*, const CEntityKeyValues*, void>::*)(CPhysicsProp*, const CEntityKeyValues*)const>, operator!, operator*, operator+, operator+=, operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawnerAsync, ~CEntitySpawnerAsyncBase, ~CEntitySpawnerBase, ~CUtlMemory, ~CUtlString, ~CUtlVector, ~CUtlVectorBase
// calls: UTIL_GetCommandClient, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CEntityKeyValuesModifyScope::BeginModify, CEntitySpawnerAsync<CPhysicsProp>::Init, CEntityKeyValues::SetValue, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle>, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release (27 total)
// strings: "models/props_plants/claypot03.vmdl", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Using model \"%s\"\n"
// globals: FastDelegate2<CPhysicsProp *,CEntityKeyValues const*,void>::InvokeStaticFunction(CPhysicsProp *,CEntityKeyValues const*), OnPhysShootSpawnComplete(CPhysicsProp *,CEntityKeyValues const*), CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall phys_shoot(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CBaseEntity *v4; // rbx
  __m128i x_low; // xmm7
  unsigned int v6; // r13d
  double v7; // xmm0_8
  __m128i v8; // xmm5
  float v9; // xmm1_4
  float v10; // r13d
  float v11; // xmm1_4
  float v12; // xmm2_4
  float m_fValue; // xmm1_4
  int v14; // ebx
  unsigned __int64 v15; // r8
  const char *v16; // r15
  const char *v17; // r9
  char *v18; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  __int64 v20; // r15
  __int64 v21; // rbx
  bool HasValue; // al
  const char *m_pszClassname; // rdx
  CEntityKeyValues *v24; // r12
  bool v25; // zf
  CEntityInstance *v26; // rax
  CEntityInstance *v27; // r14
  CEntitySpawnerContext<CPhysicsProp> *m_pContext; // rbx
  __int64 delta; // rcx
  double v30; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  CUtlScratchMemoryPool *v34; // rdi
  CEntityKeyValues *v35; // rbx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v39; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v47; // rax
  __int16 v48; // ax
  float v49; // xmm0_4
  unsigned __int64 v50; // [rsp+8h] [rbp-2D8h]
  const char *v51; // [rsp+10h] [rbp-2D0h]
  float v52; // [rsp+18h] [rbp-2C8h]
  float hSpawnGroupa; // [rsp+20h] [rbp-2C0h]
  float hSpawnGroupb; // [rsp+20h] [rbp-2C0h]
  SpawnGroupHandle_t hSpawnGroup; // [rsp+20h] [rbp-2C0h]
  float flShootSpeeda; // [rsp+28h] [rbp-2B8h]
  float flShootSpeedb; // [rsp+28h] [rbp-2B8h]
  float flShootSpeed; // [rsp+28h] [rbp-2B8h]
  CEntityKeyValues *v59; // [rsp+30h] [rbp-2B0h] BYREF
  CEntityKeyValues *v60; // [rsp+38h] [rbp-2A8h] BYREF
  Vector vForward; // [rsp+40h] [rbp-2A0h] BYREF
  Vector vVelocity; // [rsp+50h] [rbp-290h] BYREF
  Vector spawnPos; // [rsp+60h] [rbp-280h] BYREF
  void (__fastcall *v64)(const FastDelegate2<CPhysicsProp*,const CEntityKeyValues*,void> *const, CPhysicsProp *, const CEntityKeyValues *); // [rsp+78h] [rbp-268h]
  __int64 v65; // [rsp+80h] [rbp-260h]
  __int64 v66[4]; // [rsp+90h] [rbp-250h] BYREF
  int v67; // [rsp+B0h] [rbp-230h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v68; // [rsp+B8h] [rbp-228h] BYREF
  int (**v69)(...); // [rsp+D0h] [rbp-210h] BYREF
  CUtlMemory<const CEntityKeyValues*,int> v70; // [rsp+D8h] [rbp-208h] BYREF
  double v71; // [rsp+F0h] [rbp-1F0h] BYREF
  void (*pfn)(detail::GenericClass *); // [rsp+F8h] [rbp-1E8h]
  __int64 v73; // [rsp+100h] [rbp-1E0h]
  CTraceFilterSimple v74; // [rsp+110h] [rbp-1D0h] BYREF
  trace_t tr; // [rsp+150h] [rbp-190h] BYREF
  CEntitySpawnerAsync<CPhysicsProp> spawner; // [rsp+200h] [rbp-E0h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v4 = CommandClient;
  if ( CommandClient == 0 )
    return;
  CBasePlayer::EyeVectors(CommandClient, &vForward, 0, 0);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  x_low = LODWORD(vForward.x);
  *x_low.m128i_i32 = vForward.x * 100.0;
  v6 = _mm_cvtsi128_si32(x_low);
  hSpawnGroupa = vForward.y * 100.0;
  flShootSpeeda = 100.0 * vForward.z;
  v7 = (*(v4->_vptr_IHandleEntity + 164))(v4);
  v8 = _mm_cvtsi32_si128(v6);
  *&pfn = v9;
  v71 = v7;
  *v8.m128i_i32 = *v8.m128i_i32 + *&v7;
  flShootSpeedb = v9 + flShootSpeeda;
  hSpawnGroupb = hSpawnGroupa + *(&v7 + 1);
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v69 = COERCE_INT_((*(v4->_vptr_IHandleEntity + 164))(v4));
  *&v70.m_pMemory = v11;
  spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  *(&spawner.m_modifyScope.m_pKeyValues + 1) = hSpawnGroupb - *(&v69 + 1);
  *&spawner.m_modifyScope.m_pPrevAllocator = flShootSpeedb - v11;
  memset(&spawner.m_modifyScope.m_pPrevAllocator + 4, 0, 36);
  *&spawner.m_modifyScope.m_pKeyValues = v10 - *&v69;
  spawner.m_pEntityKeyValues = LODWORD(v11);
  spawner._vptr_CEntitySpawnerBase = v69;
  LOBYTE(spawner.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = 1;
  BYTE1(spawner.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = (((*&spawner.m_modifyScope.m_pKeyValues
                                                          * *&spawner.m_modifyScope.m_pKeyValues)
                                                         + (*(&spawner.m_modifyScope.m_pKeyValues + 1)
                                                          * *(&spawner.m_modifyScope.m_pKeyValues + 1)))
                                                        + (*&spawner.m_modifyScope.m_pPrevAllocator
                                                         * *&spawner.m_modifyScope.m_pPrevAllocator)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v74, v4, 4, 0);
  v74.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &spawner, &v74, &tr);
  v12 = 0.0;
  m_fValue = g_cv_phys_shoot_speed.m_pParent->m_Value.m_fValue;
  if ( args->m_nArgc <= 1 )
  {
    v16 = "models/props_plants/claypot03.vmdl";
  }
  else
  {
    v14 = 1;
    v15 = 2;
    v16 = "models/props_plants/claypot03.vmdl";
    v17 = "0";
    do
    {
      v18 = args + 8 * v14;
      if ( memcmp(*(v18 + 129), v17, v15) == 0 )
      {
        m_fValue = v12;
      }
      else
      {
        v50 = v15;
        v51 = v17;
        v52 = v12;
        flShootSpeed = m_fValue;
        v49 = V_atof(*(v18 + 129));
        v12 = v52;
        v17 = v51;
        v15 = v50;
        if ( v49 == v52 )
        {
          v16 = "";
          if ( args->m_nArgc > v14 )
            v16 = args->m_ppArgv[v14];
          DevMsg("Using model \"%s\"\n", v16);
          m_fValue = flShootSpeed;
          v12 = v52;
          v17 = v51;
          v15 = v50;
        }
        else
        {
          m_fValue = v49;
        }
      }
      ++v14;
    }
    while ( args->m_nArgc > v14 );
  }
  spawnPos = tr.endpos;
  vVelocity.z = vForward.z * m_fValue;
  vVelocity.y = vForward.y * m_fValue;
  vVelocity.x = m_fValue * vForward.x;
  if ( tr.fraction != 1.0 )
  {
    spawnPos.x = spawnPos.x + v12;
    spawnPos.y = v12 + spawnPos.y;
    spawnPos.z = spawnPos.z + 24.0;
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner._vptr_CEntitySpawnerBase = off_409F330;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = 0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pFilter = 0;
  spawner._vptr_CEntitySpawnerBase = off_409F370;
  v74._vptr_CTraceFilter = 0xFFFFFFFF00000000LL;
  LODWORD(v74.m_attr.m_nInteractsWith) = 0x40000000;
  v74.m_attr.m_nInteractsExclude = 0;
  v74.m_attr.m_nInteractsAs = 0;
  v74.m_attr.m_nEntityIdToIgnore = -1;
  *&v74.m_attr.m_nHierarchyId = -2;
  LOBYTE(v74.m_attr.m_nObjectSetMask) = 0;
  *(&v74.m_attr.m_nObjectSetMask + 1) = 0;
  CEntitySpawnerAsync<CPhysicsProp>::Init(&spawner, &v74);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, v16);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -1093122415, &vVelocity);
  v64 = FastDelegate2<CPhysicsProp *,CEntityKeyValues const*,void>::InvokeStaticFunction;
  v65 = 0;
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &spawnPos);
  CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vec3_angle);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
    v20 = v64;
    v21 = v65;
    goto LABEL_10;
  }
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v39 = 0;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      if ( m_pElements[v39] == -1104771937 )
        break;
      if ( m_nCount <= ++v39 )
        goto LABEL_58;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v31 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v32 = v39;
      v33 = &v31[v32];
      if ( v31[v32].m_pAttributeName != 0 )
      {
LABEL_30:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v31[v32].m_pAttributeName);
LABEL_31:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_32;
      }
    }
    else
    {
      v32 = v39;
      v31 = 0;
      v33 = v32 * 24;
      if ( *(v32 * 24 + 16) != 0 )
        goto LABEL_30;
    }
    v48 = *(v33 + 10);
    if ( (v48 & 1) != 0 )
      *(v33 + 10) = v48 & 0xFFFE;
    *v33 = 0;
    *(v33 + 8) = 13;
    *v33 = -1;
    goto LABEL_31;
  }
LABEL_58:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v41) = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
  v42 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
  if ( v42 != 0 )
  {
    if ( v42 <= 9 )
      v43 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    else
      v43 = m_pEntityKeyValues->m_keyHashes.m_pElements;
  }
  else
  {
    v43 = 0;
  }
  v41 = v41;
  v43[v41] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v44 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v44 = 0;
  v45 = &v44[v41];
  m_flags = v45->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v45->m_value.m_flags = m_flags & 0xFFFE;
  v45->m_value.m_uint64 = 0;
  v45->m_value.m_type = 13;
  v45->m_value.m_int = -1;
  if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    v47 = m_pEntityKeyValues->m_keyValues.m_pElements;
  else
    v47 = 0;
  v47[v41].m_pAttributeName = 0;
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
LABEL_32:
  v20 = v64;
  v21 = v65;
  if ( m_pEntityKeyValues != 0 )
  {
LABEL_10:
    if ( spawner.m_pEntityClass != 0 )
    {
      HasValue = CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( !HasValue && m_pszClassname != 0 )
      {
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
        m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      }
      (*(*engine + 464LL))(engine, spawner.m_hSpawnGroupHandle, m_pszClassname);
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v24 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pFilter == 0 )
        goto LABEL_20;
      v59 = spawner.m_pEntityKeyValues;
      v68.m_pMemory = &v59;
      v60 = 0;
      v67 = 1;
      v68.m_nAllocationCount = 1;
      v68.m_nGrowSize = 0x40000000;
      LODWORD(v69) = 0;
      v70.m_pMemory = &v60;
      v70.m_nAllocationCount = 1;
      v70.m_nGrowSize = 0x40000000;
      (*(spawner.m_pFilter->_vptr_ISpawnGroupEntityFilter + 2))(
        spawner.m_pFilter,
        spawner.m_hSpawnGroupHandle,
        spawner.m_behavior == EntitySpawnerAsyncBehavior_t::ENTITY_SPAWNER_ASYNC_PRECACHE_ONLY,
        &v67,
        &v69);
      v24 = 0;
      v25 = v69 == 1;
      LODWORD(v69) = 0;
      if ( v25 )
        v24 = v60;
      if ( (v70.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v70);
        if ( (v70.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v70);
      }
      v67 = 0;
      if ( (v68.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityKeyValues const*,int>::Purge(&v68);
        if ( (v68.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityKeyValues const*,int>::Purge(&v68);
      }
      if ( v24 != 0 )
      {
LABEL_20:
        SetIdentityMatrix(&v74);
        v26 = (*(spawner.m_pLoadingSpawnGroup->_vptr_ILoadingSpawnGroup + 9))(
                spawner.m_pLoadingSpawnGroup,
                spawner.m_hOwnerSpawnGroup,
                &v74,
                1,
                v24);
        v27 = v26;
        if ( v26 != 0 )
        {
          v66[1] = v20;
          v66[2] = v21;
          v66[0] = OnPhysShootSpawnComplete;
          CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
            g_pGameEntitySystem,
            spawner.m_hSpawnGroupHandle,
            v26,
            v24,
            0,
            v66);
          m_pContext = spawner.m_pContext;
          for ( hSpawnGroup = spawner.m_hSpawnGroupHandle; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            v30 = *&m_pContext->m_callback.m_Closure.m_pthis;
            if ( v30 != 0.0 || m_pContext->m_callback.m_Closure.m_pFunction.__pfn != 0 )
            {
              delta = m_pContext->m_callback.m_Closure.m_pFunction.__delta;
              pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
              v71 = v30;
              v73 = delta;
              CGameEntitySystem::ListenForEntityInSpawnGroupToFinish(
                g_pGameEntitySystem,
                hSpawnGroup,
                v27,
                v24,
                m_pContext->m_pCompletionListener,
                &v71);
            }
          }
        }
      }
    }
    else
    {
      CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790);
    }
  }
  v34 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_409F330;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v34 == &g_pEntitySystem->m_entitySpawnerData )
  {
    v25 = g_pEntitySystem->m_nEntitySpawnerDataUseCount-- == 1;
    if ( v25 )
      CUtlScratchMemoryPool::FreeAll(v34);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v35 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v35);
      operator delete(v35);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// CollectEntityModelName  (line 2177, @0x000000000234cb20, libserver.so)  // inlines: String, ToCStr
// calls: UTIL_GetCommandClient, CBaseEntity::GetModelName
// strings: "CollectedEntities.txt"
void __fastcall CollectEntityModelName(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // r13
  __int64 v3; // r12
  void (__fastcall *v4)(IFileSystem *, __int64, const char *, const char *); // r14
  const char *v5; // rcx
  const char *v6; // [rsp+0h] [rbp-30h] BYREF

  CommandClient = UTIL_GetCommandClient();
  v3 = (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 2))(
         &g_pFullFileSystem->IBaseFileSystem,
         "CollectedEntities.txt",
         "at",
         0);
  if ( v3 != 0 )
  {
    v4 = *(g_pFullFileSystem->_vptr_IAppSystem + 34);
    CBaseEntity::GetModelName(&v6, CommandClient);
    v5 = "";
    if ( v6 != 0 )
      v5 = v6;
    v4(g_pFullFileSystem, v3, "%s\n", v5);
    (*(g_pFullFileSystem->_vptr_IBaseFileSystem + 3))(&g_pFullFileSystem->IBaseFileSystem, v3);
  }
}


// BreakModelCreateSingle  (line 2287, @0x0000000002367b40, libserver.so)  // inlines: AddKeyValue<CEntityHandle>, AddKeyValue<char [512]>, AddSpawnFlags, AddToTail, Base, BreakModelCreate_Prop, CEntityHandle, CEntityKeyValuesModifyScope, Element, FindKeyHash, Free, Get, GetEHandle, GetEffectEntity, GetEntryIndex, GetSerialNumber, Init, Min<float>, NetworkStateChanged, RemoveSpawnFlags, Set, SetCollisionGroup, SetValue<CEntityHandle>, SetValue<char [512]>, operator&=<int>, operator=, operator[], operator|=<int>, ~CEntityKeyValuesModifyScope
// calls: CreateEntityByName, operator new, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntityKeyValues::SetValue, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle>, CEntityKeyValuesModifyScope::Release, __dynamic_cast, CBreakableProp::CopyFadeFrom, DispatchSpawn, CCollisionProperty::SetCollisionGroup (27 total)
// callers: CreatePiecesFromPropData, CreatePiece, CreateGibsFromList
// strings: "prop_physics", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: g_ActiveGibCount
CBaseEntity *__fastcall BreakModelCreateSingle(
        CBaseEntity *pOwner,
        breakmodel_t *pModel,
        const Vector *const position,
        const QAngle *const angles,
        const Vector *const velocity,
        const AngularImpulse *const angVelocity,
        CUtlStringToken nSkin,
        const breakablepropparams_t *const params)
{
  CBreakableProp *EntityByName; // rbx
  CEntityKeyValues *v13; // r13
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  double v16; // xmm1_8
  double v17; // xmm2_8
  double v18; // xmm3_8
  unsigned int m_Value; // edx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  CBreakableProp *v22; // rax
  CBreakableProp *v23; // r15
  double v24; // xmm0_8
  double v25; // xmm4_8
  const CEntityHandle *v26; // rax
  IHandleEntity *HandleEntity; // rax
  const CEntityFlame *v28; // rax
  void (__fastcall *v29)(CBreakableProp *, _QWORD, _QWORD, double, double); // r13
  double v30; // xmm0_8
  __m128 fadeTime_low; // xmm1
  __m128 v32; // xmm0
  float fadeTime; // xmm0_4
  IPhysAggregateInstance *Aggregate; // rax
  IPhysAggregateInstance *v35; // r12
  CBaseEntity *v36; // rax
  CBaseEntity *v37; // r12
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  unsigned __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rax
  __int64 v44; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  __int16 m_nQueuedForSpawnCount; // ax
  int v50; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v51; // cx
  __int64 v52; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v53; // rdx
  unsigned __int64 v54; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v55; // rax
  __int64 v56; // r15
  bool v57; // dl
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rdi
  __int64 v59; // r15
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v60; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rdx
  __int64 v62; // rax
  CVariantBase<CEntityVariantAllocator> *p_m_value; // rdi
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  void (__fastcall *v67)(CBreakableProp *, _QWORD, _QWORD, double, double); // r13
  double v68; // xmm0_8
  __int16 v69; // ax
  int positionb; // [rsp+8h] [rbp-68h]
  unsigned int positione; // [rsp+8h] [rbp-68h]
  const Vector *positionf; // [rsp+8h] [rbp-68h]
  const Vector *positiong; // [rsp+8h] [rbp-68h]
  const Vector *positionh; // [rsp+8h] [rbp-68h]
  const Vector *positioni; // [rsp+8h] [rbp-68h]
  int positionc; // [rsp+8h] [rbp-68h]
  char *positiond; // [rsp+8h] [rbp-68h]
  CEntityKeyValuesModifyScope v81; // [rsp+30h] [rbp-40h] BYREF

  if ( g_ActiveGibCount >= prop_active_gib_limit.m_pParent->m_Value.m_nValue )
    return 0;
  if ( pModel->isRagdoll )
    return 0;
  EntityByName = CreateEntityByName("prop_physics", -1);
  if ( EntityByName == 0 )
    return 0;
  v13 = operator new(0x70u);
  CEntityKeyValues::CEntityKeyValues(v13);
  v81.m_pKeyValues = 0;
  v81.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&v81, v13);
  CEntityKeyValues::SetValue(v13, -971301790, "prop_physics");
  CEntityKeyValues::SetValue<Vector>(v13, -467664362, position);
  CEntityKeyValues::SetValue<QAngle>(v13, -1164387633, angles);
  positionb = -1;
  if ( pOwner != 0 )
  {
    m_pEntity = pOwner->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      positionb = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
  }
  if ( v13->m_nQueuedForSpawnCount > 0 )
    goto LABEL_11;
  m_nCount = v13->m_keyHashes.m_nCount;
  if ( m_nCount > 0 )
  {
    m_nAllocated = v13->m_keyHashes.m_nAllocated;
    v40 = 0;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&v13->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = v13->m_keyHashes.m_pElements;
      }
      else
      {
        m_pElements = 0;
      }
      if ( m_pElements[v40] == -1104771937 )
        break;
      if ( m_nCount <= ++v40 )
        goto LABEL_52;
    }
    if ( v13->m_keyValues.m_nAllocated != 0 )
    {
      v64 = v13->m_keyValues.m_pElements;
      v65 = v40;
      v66 = &v64[v65];
      if ( v64[v65].m_pAttributeName != 0 )
      {
LABEL_84:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v64[v65].m_pAttributeName);
LABEL_85:
        m_nQueuedForSpawnCount = v13->m_nQueuedForSpawnCount;
        goto LABEL_62;
      }
    }
    else
    {
      v65 = v40;
      v64 = 0;
      v66 = v65 * 24;
      if ( *(v65 * 24 + 16) != 0 )
        goto LABEL_84;
    }
    v69 = *(v66 + 10);
    if ( (v69 & 1) != 0 )
      *(v66 + 10) = v69 & 0xFFFE;
    *v66 = 0;
    *(v66 + 8) = 13;
    *v66 = positionb;
    goto LABEL_85;
  }
LABEL_52:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v13->m_keyHashes);
  v42 = v13->m_keyHashes.m_nAllocated;
  if ( v42 != 0 )
  {
    if ( v42 <= 9 )
      v43 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
    else
      v43 = v13->m_keyHashes.m_pElements;
  }
  else
  {
    v43 = 0;
  }
  v44 = (v13->m_keyHashes.m_nCount - 1);
  v43[v44] = -1104771937;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
  if ( v13->m_keyValues.m_nAllocated != 0 )
    v45 = v13->m_keyValues.m_pElements;
  else
    v45 = 0;
  v46 = &v45[v44];
  m_flags = v46->m_value.m_flags;
  if ( (m_flags & 1) != 0 )
    v46->m_value.m_flags = m_flags & 0xFFFE;
  v46->m_value.m_uint64 = 0;
  v46->m_value.m_type = 13;
  v46->m_value.m_int = positionb;
  if ( v13->m_keyValues.m_nAllocated != 0 )
    v48 = v13->m_keyValues.m_pElements;
  else
    v48 = 0;
  v48[v44].m_pAttributeName = 0;
  m_nQueuedForSpawnCount = v13->m_nQueuedForSpawnCount;
LABEL_62:
  if ( m_nQueuedForSpawnCount > 0 )
    goto LABEL_11;
  v50 = v13->m_keyHashes.m_nCount;
  positiond = pModel->modelName;
  if ( v50 <= 0 )
  {
LABEL_71:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&v13->m_keyHashes);
    v54 = v13->m_keyHashes.m_nAllocated;
    if ( v54 != 0 )
    {
      if ( v54 <= 9 )
        v55 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
      else
        v55 = v13->m_keyHashes.m_pElements;
    }
    else
    {
      v55 = 0;
    }
    v56 = (v13->m_keyHashes.m_nCount - 1);
    v55[v56] = -926958586;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v13->m_keyValues);
    if ( v13->m_keyValues.m_nAllocated != 0 )
      v58 = v13->m_keyValues.m_pElements;
    else
      v58 = 0;
    v59 = v56;
    CVariantBase<CEntityVariantAllocator>::CopyData(&v58[v59].m_value, positiond, v57);
    if ( v13->m_keyValues.m_nAllocated != 0 )
      v60 = v13->m_keyValues.m_pElements;
    else
      v60 = 0;
    v60[v59].m_pAttributeName = 0;
  }
  else
  {
    v51 = v13->m_keyHashes.m_nAllocated;
    v52 = 0;
    while ( 1 )
    {
      if ( v51 != 0 )
      {
        v53 = (&v13->m_keyHashes.m_nAllocAllocated + 1);
        if ( v51 > 9 )
          v53 = v13->m_keyHashes.m_pElements;
      }
      else
      {
        v53 = 0;
      }
      if ( v53[v52] == -926958586 )
        break;
      if ( v50 <= ++v52 )
        goto LABEL_71;
    }
    if ( v13->m_keyValues.m_nAllocated != 0 )
    {
      v61 = v13->m_keyValues.m_pElements;
      v62 = v52;
      p_m_value = &v61[v62].m_value;
      if ( v61[v62].m_pAttributeName != 0 )
      {
LABEL_81:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v61[v62].m_pAttributeName);
        goto LABEL_11;
      }
    }
    else
    {
      v62 = v52;
      v61 = 0;
      p_m_value = (v62 * 24);
      if ( *(v62 * 24 + 16) != 0 )
        goto LABEL_81;
    }
    CVariantBase<CEntityVariantAllocator>::CopyData(p_m_value, positiond, v61);
  }
LABEL_11:
  CEntityKeyValuesModifyScope::Release(&v81);
  if ( pOwner != 0 )
  {
    m_Value = EntityByName->m_spawnflags.m_Value;
    v20 = m_Value | pOwner->m_spawnflags.m_Value;
    if ( m_Value != v20 )
    {
      positione = m_Value | pOwner->m_spawnflags.m_Value;
      (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v20 = positione;
      EntityByName->m_spawnflags.m_Value = positione;
    }
    v21 = v20 & 0xFFFFFFF7;
    if ( v20 != (v20 & 0xFFFFFFF7) )
    {
      (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      EntityByName->m_spawnflags.m_Value = v21;
    }
    EntityByName->m_impactEnergyScale = params->impactEnergyScale;
    v22 = __dynamic_cast(pOwner, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakableProp, 0);
    v23 = v22;
    if ( v22 != 0 )
    {
      positionf = *(EntityByName->_vptr_IHandleEntity + 257);
      (*(v22->_vptr_IHandleEntity + 261))(v22);
      (positionf)(EntityByName);
      positiong = *(EntityByName->_vptr_IHandleEntity + 258);
      (*(v23->_vptr_IHandleEntity + 262))(v23);
      (positiong)(EntityByName);
      positionh = *(EntityByName->_vptr_IHandleEntity + 259);
      (*(v23->_vptr_IHandleEntity + 263))(v23);
      (positionh)(EntityByName);
      positioni = *(EntityByName->_vptr_IHandleEntity + 260);
      (*(v23->_vptr_IHandleEntity + 264))(v23);
      (positioni)(EntityByName);
      CBreakableProp::CopyFadeFrom(EntityByName, v23);
    }
  }
  else
  {
    v23 = 0;
    EntityByName->m_impactEnergyScale = params->impactEnergyScale;
  }
  *&v24 = LODWORD(pModel->fadeMinDist);
  v25 = 0.0;
  if ( *&v24 > 0.0 )
  {
    *&v16 = LODWORD(pModel->fadeMaxDist);
    if ( *&v16 >= *&v24 )
      CBaseModelEntity::SetFadeDistance(EntityByName, v24, v16, v17);
  }
  if ( pModel->fadeTime != 0.0 )
  {
    positionc = EntityByName->m_spawnflags.m_Value | 0x400000;
    if ( EntityByName->m_spawnflags.m_Value != positionc )
    {
      (*(EntityByName->_vptr_IHandleEntity + 22))(
        EntityByName,
        404,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v24,
        v16,
        v17,
        v18,
        v25,
        0.0);
      EntityByName->m_spawnflags.m_Value = positionc;
    }
  }
  DispatchSpawn(EntityByName, v13);
  CCollisionProperty::SetCollisionGroup(&EntityByName->m_Collision, pModel->collisionGroup);
  if ( v23 != 0 )
    (*(v23->_vptr_IHandleEntity + 290))(v23, EntityByName);
  if ( pOwner != 0 )
  {
    v26 = __dynamic_cast(pOwner, &`typeinfo for'CBaseEntity, &`typeinfo for'CBreakableProp, 0);
    if ( v26 != 0 && (*(&v26[110].m_Parts + 3) & 8) != 0 )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(v26 + 134);
      if ( HandleEntity != 0
        && (v28 = __dynamic_cast(HandleEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CEntityFlame, 0)) != 0 )
      {
        v29 = *(EntityByName->_vptr_IHandleEntity + 239);
        *&v30 = CEntityFlame::GetRemainingLife(v28);
        v29(EntityByName, 0, 0, v30, 0.0);
      }
      else
      {
        v67 = *(EntityByName->_vptr_IHandleEntity + 239);
        (*(*random_valve + 8LL))(random_valve, 5.0, 10.0);
        v67(EntityByName, 0, 0, v68, 0.0);
      }
    }
  }
  if ( (EntityByName->m_pEntity->m_flags & 0x200) != 0 )
    return 0;
  CBaseAnimating::SetSkin(EntityByName, nSkin);
  (*(EntityByName->_vptr_IHandleEntity + 157))(EntityByName, pModel->health);
  if ( g_ActiveGibCount < prop_active_gib_max_fade_time.m_pParent->m_Value.m_nValue )
  {
    fadeTime = pModel->fadeTime;
  }
  else
  {
    fadeTime_low = LODWORD(pModel->fadeTime);
    v32 = _mm_cmplt_ss(0x40400000u, fadeTime_low);
    LODWORD(fadeTime) = _mm_andnot_ps(v32, fadeTime_low).m128_u32[0] | v32.m128_i32[0] & 0x40400000;
    pModel->fadeTime = fadeTime;
  }
  if ( fadeTime != 0.0 )
  {
    CBaseModelEntity::SUB_StartFadeOut(EntityByName, fadeTime, fadeTime_low.m128_f32[0], 0);
    v36 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseAnimating, &`typeinfo for'CBreakableProp, 0);
    v37 = v36;
    if ( v36 != 0
      && HIDWORD(v36[1].m_OnUser1.m_pConnections) == 0
      && CBaseEntity::GetDamageOptions(v36) == DamageOptions_t::DAMAGE_YES )
    {
      CBaseEntity::SetDamageOptions(v37, DamageOptions_t::DAMAGE_EVENTS_ONLY);
    }
  }
  Aggregate = CBaseEntity::VPhysicsGetAggregate(EntityByName);
  v35 = Aggregate;
  if ( Aggregate == 0 )
  {
    UTIL_Remove(EntityByName);
    return 0;
  }
  (*(Aggregate->_vptr_IPhysAggregateInstance + 8))(Aggregate, velocity);
  (*(v35->_vptr_IPhysAggregateInstance + 42))(v35, angVelocity);
  return EntityByName;
}


// CPhysBoxMultiplayer::~CPhysBoxMultiplayer  (line 2359, @0x0000000002374480, libserver.so)  // inlines: Purge, RemoveAll, ~CBreakable, ~CPhysBox, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>::Purge
void __fastcall CPhysBoxMultiplayer::~CPhysBoxMultiplayer(CPhysBoxMultiplayer *const this)
{
  bool v2; // zf
  CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t,CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int> >::CAllocator *p_m_Memory; // r12

  this->_vptr_IMultiplayerPhysics = off_409FD98;
  this->m_RecentlyTouchedEntities.m_Size = 0;
  this->_vptr_IHandleEntity = &off_4082310;
  v2 = (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IBreakableWithPropData = off_4082B00;
  this->_vptr_IPlayerPickupVPhysics = &off_4082C18;
  if ( v2 )
  {
    p_m_Memory = &this->m_RecentlyTouchedEntities.m_Memory;
    CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
    if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysBoxMultiplayer::~CPhysBoxMultiplayer  (line 2359, @0x0000000002374540, libserver.so)  // inlines: Purge, RemoveAll, ~CBreakable, ~CPhysBox, ~CPhysBoxMultiplayer, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>::Purge
void __fastcall CPhysBoxMultiplayer::~CPhysBoxMultiplayer(CPhysBoxMultiplayer *const this)
{
  bool v2; // zf
  CUtlVectorBase<CPhysBox::RecentlyTouchedEntity_t,CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int> >::CAllocator *p_m_Memory; // r12

  this->_vptr_IMultiplayerPhysics = off_409FD98;
  this->m_RecentlyTouchedEntities.m_Size = 0;
  this->_vptr_IHandleEntity = &off_4082310;
  v2 = (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IBreakableWithPropData = off_4082B00;
  this->_vptr_IPlayerPickupVPhysics = &off_4082C18;
  if ( v2 )
  {
    p_m_Memory = &this->m_RecentlyTouchedEntities.m_Memory;
    CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(&this->m_RecentlyTouchedEntities.m_Memory);
    if ( (this->m_RecentlyTouchedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40417B0;
  this->_vptr_IBreakableWithPropData = off_4041F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40420A8;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysBoxMultiplayer::GetEntityClass  (line 2361, @0x0000000002370f50, libserver.so)
CEntityClass *__cdecl CPhysBoxMultiplayer::GetEntityClass()
{
  return g_pEntityCPhysBoxMultiplayerClass;
}


// CPhysBoxMultiplayer::Schema_DynamicBinding  (line 2361, @0x0000000002370f60, libserver.so)
// globals: CPhysBoxMultiplayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysBoxMultiplayer::Schema_DynamicBinding(
        const CPhysBoxMultiplayer *const this)
{
  return CPhysBoxMultiplayer::s_pSchemaBinding;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2361, @0x0000000002370f70, libserver.so)
// globals: CPhysBoxMultiplayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  return CPhysBoxMultiplayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::DestructInstance  (line 2361, @0x0000000002370f80, libserver.so)  // inlines: Destruct<CPhysBoxMultiplayer>
void __fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::DestructInstance(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::FreeInstance  (line 2361, @0x0000000002370fa0, libserver.so)
void __fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::FreeInstance(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::CanAllocate  (line 2361, @0x0000000002370fc0, libserver.so)
bool __fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::CanAllocate(
        const CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2361, @0x0000000002370fd0, libserver.so)
// globals: CPhysBoxMultiplayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  return CPhysBoxMultiplayer::s_pSchemaBinding;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::AllocateInstance  (line 2361, @0x0000000002372890, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::AllocateInstance(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::ConstructInstance  (line 2361, @0x0000000002373c40, libserver.so)  // inlines: CBreakable, CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CNetworkVarBase, CPhysBox, CPhysBoxMultiplayer, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CPhysBoxMultiplayer>, EnsureValidValue<float>, EnsureValidValue<unsigned int>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::ConstructInstance(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 293) = -1;
    *(p + 158) = off_3F7C190;
    *(p + 161) = off_3FD2290;
    *(p + 180) = off_3F7C190;
    *(p + 183) = off_3F7C190;
    *(p + 186) = off_3F7C190;
    *(p + 189) = off_3F7C190;
    *(p + 192) = off_3F7C190;
    *(p + 195) = off_3F7C190;
    *(p + 198) = off_3F7C190;
    *(p + 201) = off_3F7C190;
    *(p + 204) = off_3F7C190;
    *p = &off_409F410;
    *(p + 144) = off_409FC18;
    *(p + 145) = &off_409FD30;
    *(p + 150) = 0;
    *(p + 151) = 0;
    *(p + 155) = 0;
    *(p + 156) = 0;
    *(p + 167) = 0;
    *(p + 168) = 0;
    *(p + 171) = 0;
    *(p + 347) = -1;
    *(p + 414) = -1;
    *(p + 416) = 0;
    *(p + 209) = 0;
    *(p + 420) = 0;
    *(p + 421) = 0;
    *(p + 211) = off_409FD98;
    *(p + 424) = 0;
    *(p + 425) = 0;
  }
  return p;
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2361, @0x0000000002374fb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2361, @0x0000000002374fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysBoxMultiplayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysBoxMultiplayer::GetEntityClassInternal  (line 2361, @0x000000000237df20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CPhysBox::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "func_physbox_multiplayer", "CPhysBoxMultiplayer"
// globals: `guard variable for'CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass, CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo, CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo
CEntityClass *__cdecl CPhysBoxMultiplayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass) != 0 )
  {
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_designerName.u.m_Id = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass._vptr_CEntityClass = off_3F79390;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_ComponentOffsets.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_AllHelpers.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classInputs.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classOutputs.m_Size = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_requiredEHandle.m_Index = -1;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_hNetworkSerializer = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pBaseClassInfo = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pClassInfo = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_flags = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_nAllHelpersFlags = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pScriptClassDesc = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pInputs = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_nInputCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pOutputs = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_nOutputCount = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pGameClass = 0;
    CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass._vptr_CEntityClass = off_409F390;
    __cxa_guard_release(&`guard variable for'CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass);
    __cxa_atexit(
      CPhysBoxMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysBoxMultiplayerClass != 0 )
    return &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass;
  if ( `guard variable for'CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo) != 0 )
  {
    EntityClassInfo = CPhysBox::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo,
      "CPhysBoxMultiplayer",
      "func_physbox_multiplayer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo);
  }
  CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pClassInfo = &CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo;
  CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pBaseClassInfo = CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysBoxMultiplayerClass = &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass;
  CPhysBoxMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysBoxMultiplayerClassInfo.m_pClass = &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass;
  CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPhysBoxMultiplayerClass->m_pComponentOverrides = 0;
  return &CPhysBoxMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysBoxMultiplayerClass;
}


// CPhysBoxMultiplayer::GetMultiplayerPhysicsMode  (line 2364, @0x0000000002370fe0, libserver.so)
int __fastcall CPhysBoxMultiplayer::GetMultiplayerPhysicsMode(CPhysBoxMultiplayer *const this)
{
  return this->m_iPhysicsMode.m_Value;
}


// CPhysBoxMultiplayer::GetMass  (line 2369, @0x0000000002371000, libserver.so)
float __fastcall CPhysBoxMultiplayer::GetMass(CPhysBoxMultiplayer *const this)
{
  return this->m_fMass.m_Value;
}


// CPhysBoxMultiplayer::IsAsleep  (line 2374, @0x0000000002372ff0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
bool __fastcall CPhysBoxMultiplayer::IsAsleep(CPhysBoxMultiplayer *const this)
{
  IPhysicsObject *Object; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  return (*(*Object + 1464LL))(Object);
}


// CPhysBoxMultiplayer::Activate  (line 2385, @0x00000000023738b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetCollisionGroup, operator=<float>
// calls: CBaseModelEntity::Activate, CCollisionProperty::SetCollisionGroup, CBaseEntity::VPhysicsGetObject
void __fastcall CPhysBoxMultiplayer::Activate(CPhysBoxMultiplayer *const this, ActivateType_t activateType)
{
  IPhysicsObject *Object; // rax
  float v4; // xmm0_4
  float v5; // [rsp+Ch] [rbp-14h]

  CBaseModelEntity::Activate(this, activateType);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 20);
  Object = CBaseEntity::VPhysicsGetObject(this);
  v4 = (*(*Object + 208LL))(Object);
  if ( v4 != this->m_fMass.m_Value )
  {
    v5 = v4;
    (*(this->_vptr_IHandleEntity + 22))(this, 1700, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_fMass.m_Value = v5;
  }
}


// CPhysBoxMultiplayer::GetDataDescMap  (line 2393, @0x000000000234af70, libserver.so)
// globals: CPhysBoxMultiplayer::m_DataMap
datamap_t *__fastcall CPhysBoxMultiplayer::GetDataDescMap(CPhysBoxMultiplayer *const this)
{
  return &CPhysBoxMultiplayer::m_DataMap;
}


// CPhysBoxMultiplayer::AddDatadescMetadataKeys  (line 2393, @0x000000000235cf40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysBoxMultiplayer::GetEntityClass(void)
void __fastcall CPhysBoxMultiplayer::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysBoxMultiplayer::GetEntityClass);
}


// CPhysBoxMultiplayer::GetBaseMap  (line 2393, @0x000000000235cf60, libserver.so)
datamap_t *__cdecl CPhysBoxMultiplayer::GetBaseMap()
{
  return &CPhysBox::m_DataMap;
}


// DataMapInit<CPhysBoxMultiplayer>  (line 2393, @0x000000000235cf70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPhysBoxMultiplayer"
// globals: `guard variable for'DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder, CPhysBoxMultiplayer::GetEntityClass(void), CPhysBoxMultiplayer::m_DataMap, DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_pszBase = "CPhysBoxMultiplayer";
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::nameHolder,
      &_dso_handle);
  }
  CPhysBoxMultiplayer::m_DataMap.dataNumFields = 2;
  CPhysBoxMultiplayer::m_DataMap.baseMap = &CPhysBox::m_DataMap;
  CPhysBoxMultiplayer::m_DataMap.dataDesc = &DataMapInit<CPhysBoxMultiplayer>(CPhysBoxMultiplayer *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysBoxMultiplayer::m_DataMap, CPhysBoxMultiplayer::GetEntityClass);
  return &CPhysBoxMultiplayer::m_DataMap;
}


// CPhysBoxMultiplayer::YouForgotToImplementOrDeclareServerClass  (line 2398, @0x000000000234af80, libserver.so)
int __fastcall CPhysBoxMultiplayer::YouForgotToImplementOrDeclareServerClass(CPhysBoxMultiplayer *const this)
{
  return 0;
}


// CPhysBoxMultiplayer::GetServerClass  (line 2398, @0x0000000002351e90, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPhysBoxMultiplayer::GetServerClass(CPhysBoxMultiplayer *const this)
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


// CPhysicsPropMultiplayer::Schema_DynamicBinding  (line 2400, @0x0000000002371020, libserver.so)
// globals: CPhysicsPropMultiplayer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropMultiplayer::Schema_DynamicBinding(
        const CPhysicsPropMultiplayer *const this)
{
  return CPhysicsPropMultiplayer::s_pSchemaBinding;
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2400, @0x0000000002371030, libserver.so)
// globals: CPhysicsPropMultiplayer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropMultiplayer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::DestructInstance  (line 2400, @0x0000000002371040, libserver.so)  // inlines: Destruct<CPhysicsPropMultiplayer>
void __fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::FreeInstance  (line 2400, @0x0000000002371060, libserver.so)
void __fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::CanAllocate  (line 2400, @0x0000000002371080, libserver.so)
bool __fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2400, @0x0000000002371090, libserver.so)
// globals: CPhysicsPropMultiplayer::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropMultiplayer::s_pSchemaBinding;
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::AllocateInstance  (line 2400, @0x00000000023728d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1960);
  memset(v1, 0, 0x7A8u);
  return v1;
}


// CPhysicsPropMultiplayer::~CPhysicsPropMultiplayer  (line 2400, @0x0000000002373fc0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPhysicsPropMultiplayer::~CPhysicsPropMultiplayer(CPhysicsPropMultiplayer *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysicsPropMultiplayer::~CPhysicsPropMultiplayer  (line 2400, @0x00000000023742c0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp, ~CPhysicsPropMultiplayer
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPhysicsPropMultiplayer::~CPhysicsPropMultiplayer(CPhysicsPropMultiplayer *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2400, @0x0000000002374ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2400, @0x0000000002374ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsPropMultiplayer::CEntityInstanceEntityClass::ConstructInstance  (line 2400, @0x0000000002377e70, libserver.so)  // inlines: CPhysicsPropMultiplayer, Construct<CPhysicsPropMultiplayer>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CPhysicsPropMultiplayer::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsPropMultiplayer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysicsProp::CPhysicsProp(p);
    *p = &off_409FE50;
    *(p + 152) = off_40A07D8;
    *(p + 153) = &off_40A08F0;
    *(p + 202) = &off_40A0958;
  }
  return p;
}


// CPhysicsPropMultiplayer::GetEntityClassInternal  (line 2400, @0x000000000237e270, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPhysicsProp::InitScriptDesc, CPhysicsProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_physics_multiplayer", "CPhysicsPropMultiplayer"
// globals: `guard variable for'CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass, CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo, CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo
CEntityClass *__cdecl CPhysicsPropMultiplayer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass) != 0 )
  {
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_designerName.u.m_Id = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass._vptr_CEntityClass = off_3F79390;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_AllHelpers.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classInputs.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classOutputs.m_Size = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_requiredEHandle.m_Index = -1;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_hNetworkSerializer = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pBaseClassInfo = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pClassInfo = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_flags = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_nAllHelpersFlags = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pScriptClassDesc = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pInputs = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_nInputCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pOutputs = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_nOutputCount = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pGameClass = 0;
    CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass._vptr_CEntityClass = off_409FDD0;
    __cxa_guard_release(&`guard variable for'CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass);
    __cxa_atexit(
      CPhysicsPropMultiplayer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsPropMultiplayerClass != 0 )
    return &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass;
  if ( `guard variable for'CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo) != 0 )
  {
    EntityClassInfo = CPhysicsProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo,
      "CPhysicsPropMultiplayer",
      "prop_physics_multiplayer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo);
  }
  CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pClassInfo = &CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo;
  CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pBaseClassInfo = CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsPropMultiplayerClass = &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass;
  CPhysicsPropMultiplayer::GetEntityClassInfo(void)::g_EntityCPhysicsPropMultiplayerClassInfo.m_pClass = &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass;
  CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass.m_pScriptClassDesc = CPhysicsProp::InitScriptDesc();
  g_pEntityCPhysicsPropMultiplayerClass->m_pComponentOverrides = 0;
  return &CPhysicsPropMultiplayer::GetEntityClassInternal(void)::g_EntityCPhysicsPropMultiplayerClass;
}


// CPhysicsPropRespawnable::~CPhysicsPropRespawnable  (line 2405, @0x0000000002374030, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPhysicsPropRespawnable::~CPhysicsPropRespawnable(CPhysicsPropRespawnable *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysicsPropRespawnable::~CPhysicsPropRespawnable  (line 2405, @0x0000000002374330, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CPhysicsProp, ~CPhysicsPropRespawnable
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPhysicsPropRespawnable::~CPhysicsPropRespawnable(CPhysicsPropRespawnable *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[29].m_nHitboxHandle = &off_409F2D8;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsPropRespawnable::GetEntityClass  (line 2407, @0x00000000023710a0, libserver.so)
CEntityClass *__cdecl CPhysicsPropRespawnable::GetEntityClass()
{
  return g_pEntityCPhysicsPropRespawnableClass;
}


// CPhysicsPropRespawnable::Schema_DynamicBinding  (line 2407, @0x00000000023710b0, libserver.so)
// globals: CPhysicsPropRespawnable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropRespawnable::Schema_DynamicBinding(
        const CPhysicsPropRespawnable *const this)
{
  return CPhysicsPropRespawnable::s_pSchemaBinding;
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2407, @0x00000000023710c0, libserver.so)
// globals: CPhysicsPropRespawnable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropRespawnable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::DestructInstance  (line 2407, @0x00000000023710d0, libserver.so)  // inlines: Destruct<CPhysicsPropRespawnable>
void __fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::FreeInstance  (line 2407, @0x00000000023710f0, libserver.so)
void __fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::CanAllocate  (line 2407, @0x0000000002371110, libserver.so)
bool __fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2407, @0x0000000002371120, libserver.so)
// globals: CPhysicsPropRespawnable::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  return CPhysicsPropRespawnable::s_pSchemaBinding;
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::AllocateInstance  (line 2407, @0x0000000002372910, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 2008);
  memset(v1, 0, 0x7D8u);
  return v1;
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2407, @0x0000000002374f10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2407, @0x0000000002374f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsPropRespawnable::CEntityInstanceEntityClass::ConstructInstance  (line 2407, @0x0000000002377ed0, libserver.so)  // inlines: CPhysicsPropRespawnable, Construct<CPhysicsPropRespawnable>
// calls: CPhysicsProp::CPhysicsProp
CEntityInstance *__fastcall CPhysicsPropRespawnable::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsPropRespawnable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CPhysicsProp::CPhysicsProp(p);
    *(p + 501) = 0;
    *p = &off_40A0A30;
    *(p + 152) = off_40A13B8;
    *(p + 153) = &off_40A14D0;
    *(p + 202) = &off_40A1538;
  }
  return p;
}


// CPhysicsPropRespawnable::GetEntityClassInternal  (line 2407, @0x000000000237dbd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CPhysicsProp::InitScriptDesc, CPhysicsProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "prop_physics_respawnable", "CPhysicsPropRespawnable"
// globals: `guard variable for'CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass, CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo, CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo
CEntityClass *__cdecl CPhysicsPropRespawnable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass) != 0 )
  {
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_designerName.u.m_Id = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass._vptr_CEntityClass = off_3F79390;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_AllHelpers.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classInputs.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classOutputs.m_Size = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_requiredEHandle.m_Index = -1;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_hNetworkSerializer = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pBaseClassInfo = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pClassInfo = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_flags = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_nAllHelpersFlags = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pScriptClassDesc = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pInputs = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_nInputCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pOutputs = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_nOutputCount = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pGameClass = 0;
    CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass._vptr_CEntityClass = off_40A09B0;
    __cxa_guard_release(&`guard variable for'CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass);
    __cxa_atexit(
      CPhysicsPropRespawnable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsPropRespawnableClass != 0 )
    return &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass;
  if ( `guard variable for'CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo) != 0 )
  {
    EntityClassInfo = CPhysicsProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo,
      "CPhysicsPropRespawnable",
      "prop_physics_respawnable",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo);
  }
  CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pClassInfo = &CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo;
  CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pBaseClassInfo = CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsPropRespawnableClass = &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass;
  CPhysicsPropRespawnable::GetEntityClassInfo(void)::g_EntityCPhysicsPropRespawnableClassInfo.m_pClass = &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass;
  CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass.m_pScriptClassDesc = CPhysicsProp::InitScriptDesc();
  g_pEntityCPhysicsPropRespawnableClass->m_pComponentOverrides = 0;
  return &CPhysicsPropRespawnable::GetEntityClassInternal(void)::g_EntityCPhysicsPropRespawnableClass;
}


// CPhysicsPropRespawnable::GetDataDescMap  (line 2433, @0x000000000234af90, libserver.so)
// globals: CPhysicsPropRespawnable::m_DataMap
datamap_t *__fastcall CPhysicsPropRespawnable::GetDataDescMap(CPhysicsPropRespawnable *const this)
{
  return &CPhysicsPropRespawnable::m_DataMap;
}


// CPhysicsPropRespawnable::AddDatadescMetadataKeys  (line 2433, @0x000000000235d040, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsPropRespawnable::GetEntityClass(void)
void __fastcall CPhysicsPropRespawnable::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsPropRespawnable::GetEntityClass);
}


// CPhysicsPropRespawnable::GetBaseMap  (line 2433, @0x000000000235d060, libserver.so)
// globals: CPhysicsProp::m_DataMap
datamap_t *__cdecl CPhysicsPropRespawnable::GetBaseMap()
{
  return &CPhysicsProp::m_DataMap;
}


// DataMapInit<CPhysicsPropRespawnable>  (line 2433, @0x0000000002365fe0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPhysicsPropRespawnable"
// globals: `guard variable for'DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder, `guard variable for'DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc, CPhysicsProp::m_DataMap, CPhysicsPropRespawnable::GetEntityClass(void), CPhysicsPropRespawnable::m_DataMap, DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_pszBase = "CPhysicsPropRespawnable";
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsPropRespawnable::m_DataMap.baseMap = &CPhysicsProp::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_nLenBase + 12);
    strcpy(
      stpcpy(v2, DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_pszBase),
      "Materialize");
    m_Size = DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc);
  }
  CPhysicsPropRespawnable::m_DataMap.dataNumFields = 6;
  CPhysicsPropRespawnable::m_DataMap.dataDesc = &DataMapInit<CPhysicsPropRespawnable>(CPhysicsPropRespawnable *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsPropRespawnable::m_DataMap, CPhysicsPropRespawnable::GetEntityClass);
  return &CPhysicsPropRespawnable::m_DataMap;
}


// CPhysicsPropRespawnable::CPhysicsPropRespawnable  (line 2444, @0x000000000235d070, libserver.so)
// calls: CPhysicsProp::CPhysicsProp
void __fastcall CPhysicsPropRespawnable::CPhysicsPropRespawnable(CPhysicsPropRespawnable *const this)
{
  CPhysicsProp::CPhysicsProp(this);
  this->m_flRespawnTime = 0.0;
  this->_vptr_IHandleEntity = &off_40A0A30;
  this->_vptr_IBreakableWithPropData = off_40A13B8;
  this->_vptr_IPlayerPickupVPhysics = &off_40A14D0;
  this->_vptr_INavObstacle = &off_40A1538;
}


// CPhysicsPropRespawnable::Spawn  (line 2451, @0x0000000002365ed0, libserver.so)  // inlines: operator=
// calls: CPhysicsProp::Spawn, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles
void __fastcall CPhysicsPropRespawnable::Spawn(CPhysicsPropRespawnable *const this, const CEntityKeyValues *pKeyValues)
{
  const QAngle *AbsAngles; // rax
  vec_t z; // xmm0_4
  int (**vptr_ICollideable)(...); // rax
  __int64 v6; // rax
  vec_t v7; // xmm0_4
  int (**v8)(...); // rax

  CPhysicsProp::Spawn(this, pKeyValues);
  this->m_vOriginalSpawnOrigin = *CBaseEntity::GetAbsOrigin(this);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  this->m_vOriginalSpawnAngles.x = AbsAngles->x;
  this->m_vOriginalSpawnAngles.y = AbsAngles->y;
  z = AbsAngles->z;
  vptr_ICollideable = this->m_Collision._vptr_ICollideable;
  this->m_vOriginalSpawnAngles.z = z;
  v6 = (vptr_ICollideable[1])(&this->m_Collision);
  this->m_vOriginalMins.x = *v6;
  this->m_vOriginalMins.y = *(v6 + 4);
  v7 = *(v6 + 8);
  v8 = this->m_Collision._vptr_ICollideable;
  this->m_vOriginalMins.z = v7;
  this->m_vOriginalMaxs = *(v8[2])(&this->m_Collision);
  if ( this->m_flRespawnTime == 0.0 )
    this->m_flRespawnTime = 60.0;
  (*(this->_vptr_IHandleEntity + 40))(this, 0, 0.0);
}


// CPhysicsPropRespawnable::Event_Killed  (line 2471, @0x0000000002350e70, libserver.so)  // inlines: CEntityHandle, DestroyAllDataObjects, Get, GetEffectEntity, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInflictor, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::VPhysicsGetObject, CBreakableProp::Break, CPhysicsGameSystem::ShutdownFrictionSounds, CBaseEntity::PhysicsRemoveTouchedList, CBaseEntity::PhysicsRemoveGroundList, CEntityIdentity::DestroyAllDataObjects, CBaseEntity::AddEffects, UTIL_Remove, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CBaseEntity::PhysicsEnableMotion
// globals: CEntityHandle::gm_pEntityList, CPhysicsPropRespawnable::Materialize(void)
void __fastcall CPhysicsPropRespawnable::Event_Killed(
        CPhysicsPropRespawnable *const this,
        const CTakeDamageInfo *const info)
{
  IPhysicsObject *Object; // rax
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  unsigned __int16 v9; // cx
  int v10; // esi
  CEntityInstance *v11; // rdi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  double v15; // xmm1_8
  double v16; // xmm0_8
  CGlobalVars *v17; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 && (*(*Object + 1512LL))(Object) == 0 )
  {
    CBaseEntity::PhysicsEnableMotion(this, 1);
    (*(this->_vptr_IHandleEntity + 55))(this, info);
  }
  m_Index = info->m_hInflictor.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[info->m_hInflictor.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  CBreakableProp::Break(this, m_pInstance, info);
  CPhysicsGameSystem::ShutdownFrictionSounds(g_pPhysicsGameSystem, this);
  (*(this->_vptr_IHandleEntity + 51))(this);
  CBaseEntity::PhysicsRemoveTouchedList(this);
  CBaseEntity::PhysicsRemoveGroundList(this);
  CEntityIdentity::DestroyAllDataObjects(this->m_pEntity);
  CBaseEntity::AddEffects(this, 32);
  if ( (this->m_fFlags.m_Value & 0x18000000) != 0 )
  {
    if ( this->m_hEffectEntity.m_Value.m_Index == -1 )
    {
      v9 = 0x7FFF;
      v10 = 0x7FFF;
    }
    else
    {
      v9 = this->m_hEffectEntity.m_Value.m_Index & 0x7FFF;
      v10 = v9;
    }
    v11 = 0;
    v12 = (this->m_hEffectEntity.m_Value.m_Index >> 15 << 15) | v9 & 0x7FFF;
    if ( v12 + 2 > 1 )
    {
      v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
      if ( v13 != 0 )
      {
        v14 = &v13[v10 & 0x1FF];
        if ( v14 != 0 && v12 == v14->m_EHandle.m_Index )
          v11 = v14->m_pInstance;
      }
    }
    UTIL_Remove(v11);
  }
  (*(this->_vptr_IHandleEntity + 128))(this, &this->m_vOriginalSpawnOrigin, &this->m_vOriginalSpawnAngles, 0);
  CBaseEntity::ThinkSet(this, 0LL, -1.0, 1079859942, 0);
  CBaseEntity::ThinkSet(this, CPhysicsPropRespawnable::Materialize, 0.0, 0, 0);
  v16 = 0.0;
  v17 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v16 = LODWORD(v17->m_flCurrentTime);
  }
  *&v16 = *&v16 + this->m_flRespawnTime;
  CBaseEntity::SetNextThink(this, v16, v15, 0);
}


// CPhysicsPropRespawnable::Materialize  (line 2507, @0x0000000002350490, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, Init, LengthSqr, MarkPVSInformationDirty, Ray_t, RemoveEffects, RnCollisionAttr_t, TraceRay, UTIL_TraceHull, VectorAdd, VectorAligned, VectorSubtract, curtime, operator*=
// calls: CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetNextThink
void __fastcall CPhysicsPropRespawnable::Materialize(CPhysicsPropRespawnable *const this)
{
  float x; // xmm6_4
  float v3; // xmm12_4
  float y; // xmm5_4
  float z; // xmm4_4
  float v6; // xmm10_4
  float v7; // xmm7_4
  float v8; // xmm11_4
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  double v14; // xmm1_8
  CGlobalVars *v15; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v17; // xmm0_8
  CTraceFilterSimple v18; // [rsp+0h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+40h] [rbp-120h] BYREF
  trace_t tr; // [rsp+90h] [rbp-D0h] BYREF

  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  x = this->m_vOriginalSpawnOrigin.x;
  v3 = this->m_vOriginalMaxs.x;
  y = this->m_vOriginalSpawnOrigin.y;
  z = this->m_vOriginalSpawnOrigin.z;
  ray.m_Start.w = 0.0;
  v6 = this->m_vOriginalMaxs.y;
  ray.m_Delta.w = 0.0;
  v7 = this->m_vOriginalMins.z;
  ray.m_Delta.x = x - x;
  v8 = this->m_vOriginalMins.x;
  ray.m_StartOffset.w = 0.0;
  ray.m_Delta.y = y - y;
  v9 = this->m_vOriginalMins.y;
  ray.m_Delta.z = z - z;
  v10 = this->m_vOriginalMaxs.z;
  ray.m_Extents.w = 0.0;
  ray.m_flRadius = 0.0;
  ray.m_Extents.y = (v6 - v9) * 0.5;
  ray.m_Extents.z = (v10 - v7) * 0.5;
  ray.m_Extents.x = (v3 - v8) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v11 = (v3 + v8) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v12 = (v6 + v9) * 0.5;
  v13 = (v10 + v7) * 0.5;
  ray.m_Start.x = x + v11;
  ray.m_StartOffset.x = -v11;
  ray.m_StartOffset.y = -v12;
  ray.m_StartOffset.z = -v13;
  ray.m_Start.y = y + v12;
  ray.m_Start.z = z + v13;
  CTraceFilterSimple::CTraceFilterSimple(&v18, this, 4, 0);
  v18.m_attr.m_nInteractsWith |= 0x87001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v18, &tr);
  if ( tr.startsolid )
  {
    v15 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v17) = 0;
      *&v17 = v15->m_flCurrentTime + 1.0;
    }
    else
    {
      *&v17 = 1065353216;
    }
    CBaseEntity::SetNextThink(this, v17, v14, 0);
  }
  else
  {
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    (*(this->_vptr_IHandleEntity + 8))(this, 0);
  }
}


// CC_Prop_Dynamic_Create  (line 2534, @0x0000000002366e60, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, Arg, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CGameTrace, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CrossProduct, EnableInteractsWith, ExitScope, GetClassInfo, GetElapsed, GetEntityClass, GetFloat, GetTimebaseRegister, InTargetThread, Init, InvokeCallbacks, IsEmpty, IsEnabled, LengthSqr, OverrideAllocator, PLAT_CPU_TIME, Ray_t, Release, ReleaseEntitySpawnerEntityVariantAllocator, RnCollisionAttr_t, SetBasisVectors, SetForward, SetLeft, SetUp, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<char [512]>, SetWorldTransform, Spawn, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, V_DefaultExtension<long unsigned int>, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator!, operator(), operator*, operator+, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: UTIL_GetCommandClient, CBasePlayer::EyeVectors, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, V_snprintf, _V_DefaultExtension, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, VectorNormalize, MatrixToAngles, CEntityKeyValuesModifyScope::BeginModify (35 total)
// strings: "models/%s", "-1", "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __fastcall CC_Prop_Dynamic_Create(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // r12
  __m128i x_low; // xmm7
  unsigned int v5; // r13d
  double v6; // xmm0_8
  __m128i v7; // xmm6
  float v8; // xmm1_4
  float v9; // r13d
  double v10; // xmm0_8
  float v11; // xmm1_4
  float v12; // xmm6_4
  const char *v13; // rcx
  CUtlScratchMemoryPool *v14; // rax
  CEntitySystem *v15; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v17; // rax
  char v18; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // esi
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v22; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v24; // r14
  CEntitySpawnerContext<CDynamicProp> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v28; // rdi
  CUtlScratchMemoryPool *v29; // rdi
  CEntityKeyValues *v30; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v33; // rbx
  ThreadId_t m_TargetThreadId; // r14
  uint64 m_numTimeBaseTicks; // rcx
  int m_nEntitySpawnerDataUseCount; // ecx
  CVProfNode *m_pParent; // rax
  bool v38; // [rsp+23h] [rbp-42Dh]
  float bAllowPrecachea; // [rsp+24h] [rbp-42Ch]
  float bAllowPrecacheb; // [rsp+24h] [rbp-42Ch]
  bool bAllowPrecache; // [rsp+24h] [rbp-42Ch]
  float v42; // [rsp+28h] [rbp-428h]
  float v43; // [rsp+28h] [rbp-428h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-428h]
  Vector forward; // [rsp+30h] [rbp-420h] BYREF
  Vector xaxis; // [rsp+40h] [rbp-410h] BYREF
  Vector yaxis; // [rsp+50h] [rbp-400h] BYREF
  QAngle angles; // [rsp+60h] [rbp-3F0h] BYREF
  double v49; // [rsp+70h] [rbp-3E0h] BYREF
  CEntityKeyValues *v50; // [rsp+78h] [rbp-3D8h]
  VMatrix entToWorld; // [rsp+80h] [rbp-3D0h] BYREF
  CEntitySpawner<CDynamicProp> spawn; // [rsp+C0h] [rbp-390h] BYREF
  trace_t tr; // [rsp+160h] [rbp-2F0h] BYREF
  char pModelName[520]; // [rsp+210h] [rbp-240h] BYREF
  unsigned __int64 v55; // [rsp+418h] [rbp-38h]

  v55 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    CommandClient = UTIL_GetCommandClient();
    CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    x_low = LODWORD(forward.x);
    *x_low.m128i_i32 = forward.x * 56755.84;
    v5 = _mm_cvtsi128_si32(x_low);
    bAllowPrecachea = forward.y * 56755.84;
    v42 = 56755.84 * forward.z;
    v6 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    v7 = _mm_cvtsi32_si128(v5);
    *&v50 = v8;
    v49 = v6;
    *v7.m128i_i32 = *v7.m128i_i32 + *&v6;
    v43 = v8 + v42;
    bAllowPrecacheb = bAllowPrecachea + *(&v6 + 1);
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
    v10 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    *&angles.x = v10;
    angles.z = v11;
    v12 = *&v10;
    *&v10 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    *(&spawn.m_modifyScope.m_pKeyValues + 1) = bAllowPrecacheb - *(&v10 + 1);
    spawn.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&v10;
    *&spawn.m_modifyScope.m_pPrevAllocator = v43 - v11;
    memset(&spawn.m_modifyScope.m_pPrevAllocator + 4, 0, 36);
    *&spawn.m_modifyScope.m_pKeyValues = v9 - v12;
    spawn._vptr_CEntitySpawnerBase = __PAIR64__(HIDWORD(v10), LODWORD(v12));
    spawn.m_pEntityKeyValues = LODWORD(v11);
    LOBYTE(spawn.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = 1;
    BYTE1(spawn.m_mSpawnGroupToWorld.m_flMatVal[0][1]) = (((*&spawn.m_modifyScope.m_pKeyValues
                                                          * *&spawn.m_modifyScope.m_pKeyValues)
                                                         + (*(&spawn.m_modifyScope.m_pKeyValues + 1)
                                                          * *(&spawn.m_modifyScope.m_pKeyValues + 1)))
                                                        + (*&spawn.m_modifyScope.m_pPrevAllocator
                                                         * *&spawn.m_modifyScope.m_pPrevAllocator)) != 0.0;
    CTraceFilterSimple::CTraceFilterSimple(&entToWorld, CommandClient, 4, 0);
    *&entToWorld.m[0][2] |= 0x87021uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &spawn, &entToWorld, &tr);
    if ( tr.fraction != 1.0 )
    {
      v13 = "";
      if ( args->m_nArgc > 1 )
        v13 = args->m_ppArgv[1];
      V_snprintf(pModelName, 512, "models/%s", v13);
      _V_DefaultExtension(pModelName, ".vmdl", 512);
      bAllowPrecache = CBaseEntity::IsPrecacheAllowed();
      CBaseEntity::SetAllowPrecache(1);
      xaxis.x = 1.0;
      xaxis.y = 0.0;
      xaxis.z = 0.0;
      yaxis.x = (tr.plane.normal.y * 0.0) - (tr.plane.normal.z * 0.0);
      yaxis.y = tr.plane.normal.z - (tr.plane.normal.x * 0.0);
      yaxis.z = (tr.plane.normal.x * 0.0) - tr.plane.normal.y;
      if ( VectorNormalize(&yaxis) < 0.001 )
      {
        xaxis.x = 0.0;
        xaxis.y = 0.0;
        xaxis.z = 1.0;
        yaxis.x = tr.plane.normal.y - (tr.plane.normal.z * 0.0);
        yaxis.y = (tr.plane.normal.z * 0.0) - tr.plane.normal.x;
        yaxis.z = (tr.plane.normal.x * 0.0) - (0.0 * tr.plane.normal.y);
        VectorNormalize(&yaxis);
      }
      xaxis.x = (yaxis.y * tr.plane.normal.z) - (yaxis.z * tr.plane.normal.y);
      xaxis.y = (yaxis.z * tr.plane.normal.x) - (tr.plane.normal.z * yaxis.x);
      xaxis.z = (yaxis.x * tr.plane.normal.y) - (tr.plane.normal.x * yaxis.y);
      VectorNormalize(&xaxis);
      *&entToWorld.m[0][0] = __PAIR64__(LODWORD(yaxis.x), LODWORD(xaxis.x));
      *&entToWorld.m[1][0] = __PAIR64__(LODWORD(yaxis.y), LODWORD(xaxis.y));
      *&entToWorld.m[2][0] = __PAIR64__(LODWORD(yaxis.z), LODWORD(xaxis.z));
      entToWorld.m[0][2] = tr.plane.normal.x;
      entToWorld.m[1][2] = tr.plane.normal.y;
      entToWorld.m[2][2] = tr.plane.normal.z;
      MatrixToAngles(&entToWorld, &angles);
      spawn._vptr_CEntitySpawnerBase = off_40A1590;
      spawn.m_modifyScope.m_pKeyValues = 0;
      spawn.m_modifyScope.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&spawn.m_modifyScope, 0);
      spawn._vptr_CEntitySpawnerBase = off_40A15B0;
      v14 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      spawn.m_scriptClassName.m_pString = 0;
      spawn.m_pContext = 0;
      spawn.m_pSpawnBatch = 0;
      v15 = g_pEntitySystem;
      ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      spawn.m_pPrevAllocator = v14;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v15->m_entitySpawnerData;
      spawn.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v15);
      SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
      *&spawn.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
      qmemcpy(spawn.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
      v17 = *&SpawnOriginOffset->m_flMatVal[2][2];
      spawn.m_pEntityKeyValues = 0;
      *&spawn.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v17;
      spawn.m_pEntityClass = g_pEntityCDynamicPropClass;
      if ( g_pApplication != 0 )
        v18 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      else
        v18 = 0;
      spawn.m_bValidateKeys = v18;
      spawn.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
      (*spawn._vptr_CEntitySpawnerBase)(&spawn);
      CEntityKeyValues::SetValue<Vector>(spawn.m_pEntityKeyValues, -467664362, &tr.endpos);
      CEntityKeyValues::SetValue<QAngle>(spawn.m_pEntityKeyValues, -1164387633, &angles);
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, -926958586, pModelName);
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, -862567455, "6");
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, -455399261, "-1");
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, 1163236613, "0");
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, 2138764920, "1");
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, 783908205, "5");
      CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, -177388378, "10");
      m_pEntityKeyValues = spawn.m_pEntityKeyValues;
      if ( spawn.m_pEntityKeyValues != 0 )
      {
        m_enabled = g_VProfCurrentProfile.m_enabled;
        v38 = m_enabled != 0;
        if ( m_enabled != 0 )
        {
          CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
          m_pEntityKeyValues = spawn.m_pEntityKeyValues;
        }
        if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
        {
          m_pszClassname = spawn.m_pEntityClass->m_pClassInfo->m_pszClassname;
          if ( m_pszClassname != 0 )
            CEntityKeyValues::SetValue(spawn.m_pEntityKeyValues, -971301790, m_pszClassname);
        }
        CEntityKeyValuesModifyScope::Release(&spawn.m_modifyScope);
        m_nMode = spawn.m_nMode;
        v22 = CUtlString::Get(&spawn.m_scriptClassName);
        Entity = CEntitySystem::CreateEntity(
                   g_pEntitySystem,
                   spawn.m_hSpawnGroupHandle,
                   spawn.m_pEntityClass,
                   v22,
                   m_nMode,
                   -1,
                   -1,
                   0,
                   0);
        v24 = Entity;
        if ( Entity != 0 )
        {
          v49 = *&Entity->m_pEntity;
          v50 = spawn.m_pEntityKeyValues;
          (*(*g_pGameResourceService + 280LL))(
            g_pGameResourceService,
            spawn.m_hSpawnGroupHandle,
            1,
            &v49,
            &spawn.m_mSpawnGroupToWorld);
          CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v24, spawn.m_pEntityKeyValues);
          if ( spawn.m_pSpawnBatch == 0 )
            CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
          m_pContext = spawn.m_pContext;
          for ( i = spawn.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
          {
            m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
            pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
            if ( m_pthis != 0 || pfn != 0 )
            {
              v28 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
              if ( (pfn & 1) != 0 )
                pfn = *(pfn + *v28 - 1);
              (pfn)(v28, v24, i);
            }
          }
        }
        if ( v38 )
        {
          v33 = __rdtsc();
          if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
          {
            m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
            if ( m_TargetThreadId == ThreadGetCurrentId() )
            {
              if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
              {
                m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
                if ( m_pParent != 0 )
                  g_VProfCurrentProfile.m_pCurNode = m_pParent;
                else
                  m_pParent = g_VProfCurrentProfile.m_pCurNode;
              }
              else
              {
                m_pParent = g_VProfCurrentProfile.m_pCurNode;
              }
              g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
            }
          }
          m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
          ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
          g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v33 + __rdtsc();
        }
      }
      CBaseEntity::SetAllowPrecache(bAllowPrecache);
      v29 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      spawn._vptr_CEntitySpawnerBase = off_40A1590;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawn.m_pPrevAllocator;
      if ( v29 == &g_pEntitySystem->m_entitySpawnerData )
      {
        m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
        if ( m_nEntitySpawnerDataUseCount == 1 )
          CUtlScratchMemoryPool::FreeAll(v29);
      }
      if ( spawn.m_pEntityKeyValues != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&spawn.m_modifyScope);
        v30 = spawn.m_pEntityKeyValues;
        if ( --spawn.m_pEntityKeyValues->m_nRefCount <= 0 )
        {
          CEntityKeyValues::~CEntityKeyValues(v30);
          operator delete(v30);
        }
      }
      if ( spawn.m_scriptClassName.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&spawn.m_scriptClassName);
      CEntityKeyValuesModifyScope::Release(&spawn.m_modifyScope);
    }
  }
}


// CC_Prop_Physics_Create  (line 2599, @0x00000000023679c0, libserver.so)  // inlines: V_DefaultExtension<long unsigned int>, VectorAdd, VectorMultiply, operator*, operator+
// calls: V_snprintf, _V_DefaultExtension, UTIL_GetCommandClient, CBasePlayer::EyeVectors, CreatePhysicsProp<CPhysicsProp>, __stack_chk_fail
// strings: "models/%s"
void __fastcall CC_Prop_Physics_Create(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rbx
  double v3; // xmm0_8
  float v4; // xmm1_4
  vec_t v5; // xmm1_4
  float v6; // [rsp+4h] [rbp-26Ch]
  float v7; // [rsp+8h] [rbp-268h]
  float v8; // [rsp+Ch] [rbp-264h]
  Vector forward; // [rsp+10h] [rbp-260h] BYREF
  Vector vTraceStart; // [rsp+20h] [rbp-250h] BYREF
  double v11; // [rsp+30h] [rbp-240h]
  float v12; // [rsp+38h] [rbp-238h]
  Vector vTraceEnd; // [rsp+40h] [rbp-230h] BYREF
  char pModelName[520]; // [rsp+50h] [rbp-220h] BYREF
  unsigned __int64 v15; // [rsp+258h] [rbp-18h]

  v15 = __readfsqword(0x28u);
  if ( args->m_nArgc == 2 )
  {
    V_snprintf(pModelName, 512, "models/%s", args->m_ppArgv[1]);
    _V_DefaultExtension(pModelName, ".vmdl", 512);
    CommandClient = UTIL_GetCommandClient();
    CBasePlayer::EyeVectors(CommandClient, &forward, 0, 0);
    v6 = forward.x * 56755.84;
    v7 = forward.y * 56755.84;
    v8 = 56755.84 * forward.z;
    v3 = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    v12 = v4;
    v11 = v3;
    vTraceEnd.z = v4 + v8;
    vTraceEnd.y = v7 + *(&v3 + 1);
    vTraceEnd.x = v6 + *&v3;
    *&vTraceStart.x = (*(CommandClient->_vptr_IHandleEntity + 164))(CommandClient);
    vTraceStart.z = v5;
    CreatePhysicsProp<CPhysicsProp>(pModelName, &vTraceStart, &vTraceEnd, CommandClient, 1);
  }
}


// CreatePhysicsProp<CPhysicsProp>  (line 2621, @0x000000000237aad0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CGameTrace, CHandle, CUtlString, CVProfScope, CWeakHandle, EnableInteractsWith, FastSqrt, FindOrRegisterResourceByName<1818520950ull>, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetSerialNumber, Init, InvokeCallbacks, IsEmpty, IsEnabled, Length, LengthSqr, OverrideAllocator, QAngle, Ray_t, Release, ReleaseEntitySpawnerEntityVariantAllocator, RnCollisionAttr_t, Set, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, TraceRay, UTIL_TraceHull, V_SetExtension<long unsigned int>, V_StripExtension<long unsigned int>, VectorAdd, VectorAligned, VectorLength, VectorMA, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CPhysicsProp*, operator!, operator(), operator*=, operator-, operator=, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CStudioHdr, ~CUtlString, ~CVProfScope
// calls: _V_StripExtension, _V_SetExtension, CStudioHdr::CStudioHdr, CStudioHdr::hull_min, CStudioHdr::hull_max, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::IsPrecacheAllowed, CBaseEntity::SetAllowPrecache, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle (34 total)
// callers: CC_Prop_Physics_Create
// strings: "-1", "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CPhysicsProp *__fastcall CreatePhysicsProp<CPhysicsProp>(
        const char *pModelName,
        const Vector *const vTraceStart,
        const Vector *const vTraceEnd,
        const CBaseEntity *pTraceIgnore,
        bool bRequireVCollide)
{
  const CModel *const *v9; // rax
  const CModel *const *v10; // r13
  float x; // xmm6_4
  float y; // xmm5_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float z; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  CEntitySystem *v20; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v22; // rdx
  char v23; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // r8d
  EntityNetworkingMode_t m_nMode; // r14d
  const char *v27; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v29; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v31; // si
  CEntitySpawnerContext<CPhysicsProp> *m_pContext; // r14
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v35; // rdi
  CEntityInstance *v36; // r14
  CUtlScratchMemoryPool *v37; // rdi
  CEntityKeyValues *v38; // r12
  CPhysicsProp *v40; // rbx
  const char *m_pszClassname; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  bool v44; // [rsp+26h] [rbp-48Ah]
  bool bAllowPrecache; // [rsp+27h] [rbp-489h]
  CEntityKeyValues *pTraceIgnoreb; // [rsp+28h] [rbp-488h]
  CEntityHandle v48; // [rsp+30h] [rbp-480h] BYREF
  QAngle angles; // [rsp+40h] [rbp-470h] BYREF
  Vector vecSweepMins; // [rsp+50h] [rbp-460h]
  Vector vecSweepMaxs; // [rsp+60h] [rbp-450h]
  CStudioHdr hdr; // [rsp+70h] [rbp-440h] BYREF
  _QWORD v53[2]; // [rsp+80h] [rbp-430h] BYREF
  CTraceFilterSimple v54; // [rsp+90h] [rbp-420h] BYREF
  Ray_t ray; // [rsp+D0h] [rbp-3E0h] BYREF
  CEntitySpawner<CPhysicsProp> spawner; // [rsp+120h] [rbp-390h] BYREF
  trace_t tr; // [rsp+1C0h] [rbp-2F0h] BYREF
  char pFixedModelName[520]; // [rsp+270h] [rbp-240h] BYREF
  unsigned __int64 v59; // [rsp+478h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  _V_StripExtension(pModelName, pFixedModelName, 512);
  _V_SetExtension(pFixedModelName, ".vmdl", 512);
  v9 = (*(*g_pResourceSystem + 256LL))(g_pResourceSystem, pFixedModelName, 1818520950, 1);
  v10 = v9;
  if ( v9 == 0 || bRequireVCollide && !CModel::HasCollision(*v9) )
    return 0;
  *&tr.startpos.x = v10;
  CStudioHdr::CStudioHdr(&hdr, &tr, modelinfo);
  angles.x = 0.0;
  angles.y = 0.0;
  angles.z = 0.0;
  vecSweepMins = CStudioHdr::hull_min(&hdr);
  vecSweepMaxs = CStudioHdr::hull_max(&hdr);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  x = vTraceStart->x;
  y = vTraceStart->y;
  ray.m_Start.w = 0.0;
  v13 = vTraceEnd->x;
  ray.m_Delta.w = 0.0;
  v14 = vTraceEnd->y;
  ray.m_StartOffset.w = 0.0;
  z = vTraceStart->z;
  ray.m_Extents.w = 0.0;
  v16 = vTraceEnd->z;
  ray.m_flRadius = 0.0;
  ray.m_Delta.x = v13 - x;
  ray.m_Delta.y = v14 - y;
  ray.m_Delta.z = v16 - z;
  ray.m_Extents.y = (vecSweepMaxs.y - vecSweepMins.y) * 0.5;
  ray.m_Extents.z = (vecSweepMaxs.z - vecSweepMins.z) * 0.5;
  ray.m_Extents.x = (vecSweepMaxs.x - vecSweepMins.x) * 0.5;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  v17 = (vecSweepMaxs.x + vecSweepMins.x) * 0.5;
  ray.m_IsRay = (((ray.m_Extents.x * ray.m_Extents.x) + (ray.m_Extents.y * ray.m_Extents.y))
               + (ray.m_Extents.z * ray.m_Extents.z)) < 0.000001;
  v18 = (vecSweepMaxs.y + vecSweepMins.y) * 0.5;
  v19 = (vecSweepMaxs.z + vecSweepMins.z) * 0.5;
  ray.m_Start.x = x + v17;
  ray.m_StartOffset.x = -v17;
  ray.m_StartOffset.y = -v18;
  ray.m_Start.y = y + v18;
  ray.m_Start.z = z + v19;
  ray.m_StartOffset.z = -v19;
  CTraceFilterSimple::CTraceFilterSimple(&v54, pTraceIgnore, 4, 0);
  v54.m_attr.m_nInteractsWith |= 0x87021uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v54, &tr);
  if ( tr.fraction == 1.0
    && fsqrt(
         (((vTraceEnd->x - vTraceStart->x) * (vTraceEnd->x - vTraceStart->x))
        + ((vTraceEnd->y - vTraceStart->y) * (vTraceEnd->y - vTraceStart->y)))
       + ((vTraceEnd->z - vTraceStart->z) * (vTraceEnd->z - vTraceStart->z))) > 0.01 )
  {
    v40 = 0;
  }
  else
  {
    tr.endpos.x = tr.endpos.x + tr.plane.normal.x;
    tr.endpos.y = tr.endpos.y + tr.plane.normal.y;
    tr.endpos.z = tr.endpos.z + tr.plane.normal.z;
    bAllowPrecache = CBaseEntity::IsPrecacheAllowed();
    CBaseEntity::SetAllowPrecache(1);
    spawner.m_modifyScope.m_pKeyValues = 0;
    spawner.m_modifyScope.m_pPrevAllocator = 0;
    spawner._vptr_CEntitySpawnerBase = off_409F330;
    CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
    spawner.m_scriptClassName.m_pString = 0;
    spawner._vptr_CEntitySpawnerBase = off_40A3810;
    spawner.m_pContext = 0;
    spawner.m_pSpawnBatch = 0;
    v20 = g_pEntitySystem;
    spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v20->m_entitySpawnerData;
    spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v20);
    SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
    v22 = *&SpawnOriginOffset->m_flMatVal[0][2];
    spawner.m_pEntityKeyValues = 0;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v22;
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
    *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
    spawner.m_pEntityClass = g_pEntityCPhysicsPropClass;
    if ( g_pApplication != 0 )
      v23 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
    else
      v23 = 0;
    spawner.m_bValidateKeys = v23;
    spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
    (*spawner._vptr_CEntitySpawnerBase)(&spawner);
    CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, &tr.endpos);
    CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &angles);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "physics_prop");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -926958586, pModelName);
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -455399261, "-1");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -455399261, "-1");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, 1163236613, "0");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, 2138764920, "1");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -441102398, "1.0");
    CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -1016206309, "0.1");
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    v48.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v44 = m_enabled != 0;
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
      v27 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v27,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v29 = Entity;
      if ( Entity != 0 )
      {
        m_pEntity = Entity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v31 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v31 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v48.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v31 & 0x7FFF;
        }
        else
        {
          v48.m_Index = -1;
        }
        v53[0] = m_pEntity;
        v53[1] = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          v53,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v29, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( pTraceIgnoreb = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v35 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v35 - 1);
            (pfn)(v35, v29, pTraceIgnoreb);
          }
        }
      }
      if ( v44 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    v36 = CEntityHandle::operator CEntityInstance *(&v48);
    CBaseEntity::SetAllowPrecache(bAllowPrecache);
    v37 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
    spawner._vptr_CEntitySpawnerBase = off_409F330;
    CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
    if ( v37 == &g_pEntitySystem->m_entitySpawnerData )
    {
      m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
      if ( m_nEntitySpawnerDataUseCount == 1 )
        CUtlScratchMemoryPool::FreeAll(v37);
    }
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v38 = spawner.m_pEntityKeyValues;
      if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
      {
        CEntityKeyValues::~CEntityKeyValues(v38);
        operator delete(v38);
      }
    }
    if ( spawner.m_scriptClassName.m_pString != 0 )
      CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
    v40 = v36;
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  }
  CStudioHdr::Term(&hdr);
  return v40;
}


// CC_Ent_Rotate  (line 2685, @0x000000000234cbc0, libserver.so)  // inlines: atof
// calls: UTIL_GetCommandClient, CBaseEntity::GetLocalAngles, MatrixBuildRotateZ, MatrixFromAngles, MatrixMultiply, MatrixToAngles, CBaseEntity::SetLocalAngles, strtod
void __fastcall CC_Ent_Rotate(const CCommandContext *const ctx, const CCommand *const args)
{
  CBasePlayer *CommandClient; // rax
  const CBaseEntity *v4; // rax
  CBaseEntity *v5; // rbx
  QAngle *LocalAngles; // rax
  float v7; // xmm1_4
  bool v8; // zf
  QAngle angles; // [rsp+0h] [rbp-100h] BYREF
  VMatrix entToWorld; // [rsp+10h] [rbp-F0h] BYREF
  VMatrix rot; // [rsp+50h] [rbp-B0h] BYREF
  VMatrix newEntToWorld; // [rsp+90h] [rbp-70h] BYREF

  CommandClient = UTIL_GetCommandClient();
  if ( CommandClient != 0 )
  {
    v4 = (*(CommandClient->_vptr_IHandleEntity + 531))(CommandClient);
    v5 = v4;
    if ( v4 != 0 )
    {
      LocalAngles = CBaseEntity::GetLocalAngles(v4);
      v8 = args->m_nArgc == 2;
      angles = *LocalAngles;
      if ( v8 )
        strtod(args->m_ppArgv[1], 0);
      MatrixBuildRotateZ(&rot, v7);
      MatrixFromAngles(&angles, &entToWorld);
      MatrixMultiply(&entToWorld, &rot, &newEntToWorld);
      MatrixToAngles(&newEntToWorld, &angles);
      CBaseEntity::SetLocalAngles(v5, &angles);
    }
  }
}


// CFuncPropRespawnZone::Schema_DynamicBinding  (line 2710, @0x0000000002371130, libserver.so)
// globals: CFuncPropRespawnZone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPropRespawnZone::Schema_DynamicBinding(
        const CFuncPropRespawnZone *const this)
{
  return CFuncPropRespawnZone::s_pSchemaBinding;
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2710, @0x0000000002371140, libserver.so)
// globals: CFuncPropRespawnZone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  return CFuncPropRespawnZone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::DestructInstance  (line 2710, @0x0000000002371150, libserver.so)  // inlines: Destruct<CFuncPropRespawnZone>
void __fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::DestructInstance(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::FreeInstance  (line 2710, @0x0000000002371170, libserver.so)
void __fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::FreeInstance(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::CanAllocate  (line 2710, @0x0000000002371190, libserver.so)
bool __fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::CanAllocate(
        const CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2710, @0x00000000023711a0, libserver.so)
// globals: CFuncPropRespawnZone::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  return CFuncPropRespawnZone::s_pSchemaBinding;
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::AllocateInstance  (line 2710, @0x0000000002372950, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::AllocateInstance(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::ConstructInstance  (line 2710, @0x0000000002372be0, libserver.so)  // inlines: CFuncPropRespawnZone, Construct<CFuncPropRespawnZone>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::ConstructInstance(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40A1650;
  }
  return p;
}


// CFuncPropRespawnZone::~CFuncPropRespawnZone  (line 2710, @0x0000000002372e30, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFuncPropRespawnZone::~CFuncPropRespawnZone(CFuncPropRespawnZone *const this)
{
  this->_vptr_IHandleEntity = &off_40A1650;
  CBaseEntity::~CBaseEntity(this);
}


// CFuncPropRespawnZone::~CFuncPropRespawnZone  (line 2710, @0x0000000002372e50, libserver.so)  // inlines: ~CFuncPropRespawnZone
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFuncPropRespawnZone::~CFuncPropRespawnZone(CFuncPropRespawnZone *const this)
{
  this->_vptr_IHandleEntity = &off_40A1650;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2710, @0x00000000023750a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2710, @0x00000000023750c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncPropRespawnZone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncPropRespawnZone::GetEntityClassInternal  (line 2710, @0x000000000237c800, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "func_proprrespawnzone", "CFuncPropRespawnZone"
// globals: `guard variable for'CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass, CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo, CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo
CEntityClass *__cdecl CFuncPropRespawnZone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass) != 0 )
  {
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_designerName.u.m_Id = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass._vptr_CEntityClass = off_3F79390;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_ComponentOffsets.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_AllHelpers.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classInputs.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classOutputs.m_Size = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_requiredEHandle.m_Index = -1;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_hNetworkSerializer = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pBaseClassInfo = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pClassInfo = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_flags = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_nAllHelpersFlags = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pScriptClassDesc = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pInputs = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_nInputCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pOutputs = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_nOutputCount = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pGameClass = 0;
    CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass._vptr_CEntityClass = off_40A15D0;
    __cxa_guard_release(&`guard variable for'CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass);
    __cxa_atexit(
      CFuncPropRespawnZone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncPropRespawnZoneClass != 0 )
    return &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass;
  if ( `guard variable for'CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo,
      "CFuncPropRespawnZone",
      "func_proprrespawnzone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo);
  }
  CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pClassInfo = &CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo;
  CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pBaseClassInfo = CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncPropRespawnZoneClass = &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass;
  CFuncPropRespawnZone::GetEntityClassInfo(void)::g_EntityCFuncPropRespawnZoneClassInfo.m_pClass = &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass;
  CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFuncPropRespawnZoneClass->m_pComponentOverrides = 0;
  return &CFuncPropRespawnZone::GetEntityClassInternal(void)::g_EntityCFuncPropRespawnZoneClass;
}


