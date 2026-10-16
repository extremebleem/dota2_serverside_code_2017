// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physobj.cpp:47
class CPhysicsSpring : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_isLocal;  // +0x310

	float m_tempConstant;  // +0x314
	float m_tempLength;  // +0x318
	float m_tempDamping;  // +0x31c
	float m_tempRelativeDamping;  // +0x320

	string_t m_nameAttachStart;  // +0x328
	string_t m_nameAttachEnd;  // +0x330
	uint32 m_teleportTick;  // +0x350
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
	CPhysicsSpring(CPhysicsSpring &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPhysicsSpring();
	virtual ~CPhysicsSpring();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	void InputSetSpringConstant(inputdata_t &);
	void InputSetSpringDamping(inputdata_t &);
	void InputSetSpringLength(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	virtual void DrawEntityDebugOverlays(uint64);
	void GetSpringObjectConnections(string_t, string_t, HPhysicsBody *, HPhysicsBody *);
	virtual void NotifySystemEvent(CBaseEntity *, notify_system_event_t, const notify_system_event_params_t &);
	IPhysicsObject * GetStartObject();
	IPhysicsObject * GetEndObject();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[79] DrawDebugTextOverlays
	// vtable[14] DrawEntityDebugOverlays
	// vtable[127] NotifySystemEvent
	// vtable[34] GetDataDescMap
	// sizeof = 856
};

// src/game/server/physobj.cpp:374
class C_CPhysBox_MapInstall {
	C_CPhysBox_MapInstall();

	// sizeof = 1
};

// src/game/server/physobj.cpp:1335
class CSimplePhysicsBrush : public CBaseModelEntity {
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
	CSimplePhysicsBrush(CSimplePhysicsBrush &);
	CSimplePhysicsBrush(CSimplePhysicsBrush &);
	CSimplePhysicsBrush();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CSimplePhysicsBrush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 1152
};

// src/game/server/physobj.cpp:1348
class CSimplePhysicsProp : public CBaseProp {
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
	CSimplePhysicsProp(CSimplePhysicsProp &);
	CSimplePhysicsProp(CSimplePhysicsProp &);
	CSimplePhysicsProp();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int ObjectCaps();
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual ~CSimplePhysicsProp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[19] ObjectCaps
	// vtable[108] Use
	// sizeof = 1216
};

// src/game/server/physobj.cpp:1453
class CPhysConvert : public CLogicalEntity {
public:

private:

	COutputEvent m_OnConvert;  // +0x308

	static datamap_t m_DataMap;

	string_t m_swapModel;  // +0x320
	float m_flMassOverride;  // +0x328
	typedef CLogicalEntity BaseClass;

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
	CPhysConvert(CPhysConvert &);
	CPhysConvert(CPhysConvert &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPhysConvert();
	void InputConvertTarget(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPhysConvert();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 816
};

// src/game/server/physobj.cpp:1616
class C_CPhysMagnet_MapInstall {
	C_CPhysMagnet_MapInstall();

	// sizeof = 1
};

// src/game/server/physobj.cpp:1994
class CPointPush : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bEnabled;  // +0x308

	float m_flMagnitude;  // +0x30c
	float m_flRadius;  // +0x310
	float m_flInnerRadius;  // +0x314
	float m_flConeOfInfluence;  // +0x318

	string_t m_iszFilterName;  // +0x320
	typedef CPointEntity BaseClass;

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
	CPointPush(CPointPush &);
	CPointPush(CPointPush &);
	CPointPush();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	void PushThink();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	virtual void DrawEntityDebugOverlays(uint64);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	bool PassesFilter(CBaseEntity *);
	void PushEntity(CBaseEntity *, const Vector &);
	virtual ~CPointPush();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[14] DrawEntityDebugOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsSpring::GetEntityClass  (line 49, @0x0000000002304330, libserver.so)
CEntityClass *__cdecl CPhysicsSpring::GetEntityClass()
{
  return g_pEntityCPhysicsSpringClass;
}


// CPhysicsSpring::Schema_DynamicBinding  (line 49, @0x0000000002304340, libserver.so)
// globals: CPhysicsSpring::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsSpring::Schema_DynamicBinding(const CPhysicsSpring *const this)
{
  return CPhysicsSpring::s_pSchemaBinding;
}


// CPhysicsSpring::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000002304350, libserver.so)
// globals: CPhysicsSpring::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsSpring::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  return CPhysicsSpring::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsSpring::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000002304360, libserver.so)  // inlines: Destruct<CPhysicsSpring>
void __fastcall CPhysicsSpring::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsSpring::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsSpring::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000002304380, libserver.so)
void __fastcall CPhysicsSpring::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsSpring::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsSpring::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x00000000023043a0, libserver.so)
bool __fastcall CPhysicsSpring::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsSpring::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x00000000023043b0, libserver.so)
// globals: CPhysicsSpring::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsSpring::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  return CPhysicsSpring::s_pSchemaBinding;
}


// CPhysicsSpring::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000002305dc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsSpring::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 856);
  memset(v1, 0, 0x358u);
  return v1;
}


// CPhysicsSpring::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000002306260, libserver.so)  // inlines: CPhysicsSpring, CUtlSymbolLarge, Construct<CPhysicsSpring>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysicsSpring::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsSpring::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 101) = 0;
    *p = &off_4081C70;
    *(p + 102) = 0;
    *(p + 97) = 0;
    *(p + 197) = 1125515264;
    *(p + 198) = 0;
    *(p + 199) = 0x40000000;
    *(p + 200) = 1008981770;
    *(p + 784) = 0;
    *(p + 212) = -1;
  }
  return p;
}


// CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002309350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002309370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsSpring::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsSpring::GetEntityClassInternal  (line 49, @0x0000000002314180, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_spring", "CPhysicsSpring"
// globals: `guard variable for'CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass, CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo, CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo
CEntityClass *__cdecl CPhysicsSpring::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass) != 0 )
  {
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_designerName.u.m_Id = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass._vptr_CEntityClass = off_3F79390;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_AllHelpers.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classInputs.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classOutputs.m_Size = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_requiredEHandle.m_Index = -1;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_hNetworkSerializer = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pBaseClassInfo = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pClassInfo = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_flags = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_nAllHelpersFlags = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pScriptClassDesc = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pInputs = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_nInputCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pOutputs = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_nOutputCount = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pGameClass = 0;
    CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass._vptr_CEntityClass = off_4081BF0;
    __cxa_guard_release(&`guard variable for'CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass);
    __cxa_atexit(
      CPhysicsSpring::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsSpringClass != 0 )
    return &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass;
  if ( `guard variable for'CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo,
      "CPhysicsSpring",
      "phys_spring",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo);
  }
  CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pClassInfo = &CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo;
  CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pBaseClassInfo = CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsSpringClass = &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass;
  CPhysicsSpring::GetEntityClassInfo(void)::g_EntityCPhysicsSpringClassInfo.m_pClass = &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass;
  CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysicsSpringClass->m_pComponentOverrides = 0;
  return &CPhysicsSpring::GetEntityClassInternal(void)::g_EntityCPhysicsSpringClass;
}


// CPhysicsSpring::GetDataDescMap  (line 91, @0x00000000022b7ad0, libserver.so)
// globals: CPhysicsSpring::m_DataMap
datamap_t *__fastcall CPhysicsSpring::GetDataDescMap(CPhysicsSpring *const this)
{
  return &CPhysicsSpring::m_DataMap;
}


// CPhysicsSpring::AddDatadescMetadataKeys  (line 91, @0x00000000022de320, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsSpring::GetEntityClass(void)
void __fastcall CPhysicsSpring::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsSpring::GetEntityClass);
}


// CPhysicsSpring::GetBaseMap  (line 91, @0x00000000022de340, libserver.so)
datamap_t *__cdecl CPhysicsSpring::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPhysicsSpring>  (line 91, @0x00000000022de350, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, GetPhysObjSaveRestoreOps
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysicsSpring"
// globals: `guard variable for'DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder, `guard variable for'DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc, CPhysicsSpring::GetEntityClass(void), CPhysicsSpring::m_DataMap, GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited, DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsSpring>(CPhysicsSpring *a1)
{
  PhysInterfaceId_t *p_m_type; // rdx
  PhysInterfaceId_t i; // eax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_pszBase = "CPhysicsSpring";
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsSpring::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc) != 0 )
  {
    if ( !GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited )
    {
      GetPhysObjSaveRestoreOps(PhysInterfaceId_t)::inited = 1;
      p_m_type = &g_PhysObjSaveRestoreOps[0].m_type;
      for ( i = PhysInterfaceId_t::PIID_UNKNOWN; i != PhysInterfaceId_t::PIID_NUM_TYPES; ++i )
      {
        *p_m_type = i;
        p_m_type += 4;
      }
    }
    DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc[1].pSaveRestoreOps = &g_PhysObjSaveRestoreOps[4];
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc);
  }
  CPhysicsSpring::m_DataMap.dataNumFields = 14;
  CPhysicsSpring::m_DataMap.dataDesc = &DataMapInit<CPhysicsSpring>(CPhysicsSpring *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsSpring::m_DataMap, CPhysicsSpring::GetEntityClass);
  return &CPhysicsSpring::m_DataMap;
}


// GetSpringAttachments  (line 119, @0x00000000022de4a0, libserver.so)  // inlines: GetEndObject, GetStartObject
// calls: __dynamic_cast, IPhysicsBody::GetGameData
// globals: `typeinfo for'CPhysicsSpring
bool __fastcall GetSpringAttachments(CBaseEntity *pEntity, CBaseEntity **pAttachOut, IPhysicsObject **pAttachVPhysics)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  const IPhysicsBody *v8; // rax
  IPhysicsObject *v9; // r14
  CBaseEntity *GameData; // rax
  __int64 v11; // rdi
  const IPhysicsBody *v12; // rax
  IPhysicsObject *v13; // rbx
  CBaseEntity *v14; // rax

  if ( pEntity == 0 )
    return 0;
  v5 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CPhysicsSpring, 0);
  v6 = v5;
  if ( v5 == 0 )
    return 0;
  v7 = v5[97];
  if ( v7 != 0 && (v8 = (*(*v7 + 48LL))(v7), v9 = v8, v8 != 0) )
  {
    GameData = IPhysicsBody::GetGameData(v8);
  }
  else
  {
    v9 = 0;
    GameData = 0;
  }
  *pAttachOut = GameData;
  *pAttachVPhysics = v9;
  v11 = v6[97];
  if ( v11 != 0 && (v12 = (*(*v11 + 56LL))(v11), v13 = v12, v12 != 0) )
  {
    v14 = IPhysicsBody::GetGameData(v12);
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  pAttachOut[1] = v14;
  pAttachVPhysics[1] = v13;
  return 1;
}


// CPhysicsSpring::CPhysicsSpring  (line 136, @0x00000000022de570, libserver.so)  // inlines: CUtlSymbolLarge
// calls: CBaseEntity::CBaseEntity
void __fastcall CPhysicsSpring::CPhysicsSpring(CPhysicsSpring *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_nameAttachStart.u.m_Id = 0;
  this->_vptr_IHandleEntity = &off_4081C70;
  this->m_nameAttachEnd.u.m_Id = 0;
  this->m_pSpring = 0;
  this->m_tempConstant = 150.0;
  this->m_tempLength = 0.0;
  this->m_tempDamping = 2.0;
  this->m_tempRelativeDamping = 0.0099999998;
  this->m_isLocal = 0;
  this->m_teleportTick = -1;
}


// CPhysicsSpring::~CPhysicsSpring  (line 151, @0x00000000022b8d10, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysicsSpring::~CPhysicsSpring(CPhysicsSpring *const this)
{
  this->_vptr_IHandleEntity = &off_4081C70;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysicsSpring::~CPhysicsSpring  (line 151, @0x00000000022b8d30, libserver.so)  // inlines: ~CPhysicsSpring
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysicsSpring::~CPhysicsSpring(CPhysicsSpring *const this)
{
  this->_vptr_IHandleEntity = &off_4081C70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsSpring::UpdateOnRemove  (line 155, @0x00000000022b95e0, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CBaseEntity::UpdateOnRemove
void __fastcall CPhysicsSpring::UpdateOnRemove(CPhysicsSpring *const this)
{
  IVPhysics2World *v2; // rax

  if ( this->m_pSpring != 0 )
  {
    v2 = CBaseEntity::VPhysicsWorld(this);
    (*(*v2 + 360LL))(v2, this->m_pSpring);
    this->m_pSpring = 0;
  }
  CBaseEntity::UpdateOnRemove(this);
}


// CPhysicsSpring::InputSetSpringConstant  (line 170, @0x00000000022b7ae0, libserver.so)  // inlines: Float, operator float
void __fastcall CPhysicsSpring::InputSetSpringConstant(CPhysicsSpring *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  void (__fastcall *v3)(double); // rax

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_tempConstant = m_float64;
  v3 = *(this->m_pSpring->_vptr_IPhysicsSpring + 3);
  if ( inputdata->value.m_type == 34 )
    v3(inputdata->value.m_float64);
  else
    v3(inputdata->value.m_float);
}


// CPhysicsSpring::InputSetSpringDamping  (line 180, @0x00000000022b7b40, libserver.so)  // inlines: Float, operator float
void __fastcall CPhysicsSpring::InputSetSpringDamping(CPhysicsSpring *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  void (__fastcall *v3)(double); // rax

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_tempDamping = m_float64;
  v3 = *(this->m_pSpring->_vptr_IPhysicsSpring + 4);
  if ( inputdata->value.m_type == 34 )
    v3(inputdata->value.m_float64);
  else
    v3(inputdata->value.m_float);
}


// CPhysicsSpring::InputSetSpringLength  (line 190, @0x00000000022b7ba0, libserver.so)  // inlines: Float, operator float
void __fastcall CPhysicsSpring::InputSetSpringLength(CPhysicsSpring *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  void (__fastcall *v3)(double); // rax

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_tempLength = m_float64;
  v3 = *(this->m_pSpring->_vptr_IPhysicsSpring + 5);
  if ( inputdata->value.m_type == 34 )
    v3(inputdata->value.m_float64);
  else
    v3(inputdata->value.m_float);
}


// CPhysicsSpring::DrawDebugTextOverlays  (line 201, @0x00000000022b87d0, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Constant: %3.2f", "Length: %3.2f", "Damping: %3.2f"
int __fastcall CPhysicsSpring::DrawDebugTextOverlays(
        CPhysicsSpring *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x800) != 0 )
  {
    V_snprintf(tempstr, 512, "Constant: %3.2f", this->m_tempConstant);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "Length: %3.2f", this->m_tempLength);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    V_snprintf(tempstr, 512, "Damping: %3.2f", this->m_tempDamping);
    CBaseEntity::EntityText(this, v6 + 2, tempstr, 0.0, 255, 255, 255, 255);
    v6 += 3;
  }
  return v6;
}


// CPhysicsSpring::DrawEntityDebugOverlays  (line 229, @0x00000000022b9010, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: CBaseEntity::DrawEntityDebugOverlays, VectorNormalize, NDebugOverlay::Line
void __fastcall CPhysicsSpring::DrawEntityDebugOverlays(CPhysicsSpring *const this, uint64 nDebugOverlayBits)
{
  IPhysicsSpring *m_pSpring; // rdi
  float m_tempLength; // xmm0_4
  Vector vStartPos; // [rsp+0h] [rbp-70h] BYREF
  Vector vEndPos; // [rsp+10h] [rbp-60h] BYREF
  Vector vSpringDir; // [rsp+20h] [rbp-50h] BYREF
  Vector vLength; // [rsp+30h] [rbp-40h] BYREF

  m_pSpring = this->m_pSpring;
  if ( m_pSpring != 0 )
  {
    if ( (nDebugOverlayBits & 4) != 0 )
    {
      (*(m_pSpring->_vptr_IPhysicsSpring + 2))(m_pSpring, &vStartPos, &vEndPos);
      vSpringDir.y = vEndPos.y - vStartPos.y;
      vSpringDir.x = vEndPos.x - vStartPos.x;
      vSpringDir.z = vEndPos.z - vStartPos.z;
      VectorNormalize(&vSpringDir);
      m_tempLength = this->m_tempLength;
      vLength.y = (vSpringDir.y * m_tempLength) + vStartPos.y;
      vLength.z = (vSpringDir.z * m_tempLength) + vStartPos.z;
      vLength.x = (m_tempLength * vSpringDir.x) + vStartPos.x;
      NDebugOverlay::Line(&vStartPos, &vLength, 0, 0, 0xFFu, 0, 0.0);
      NDebugOverlay::Line(&vLength, &vEndPos, 0xFFu, 0, 0, 0, 0.0);
    }
    CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
  }
}


// PointIsNearer  (line 254, @0x00000000022de5f0, libserver.so)  // inlines: LengthSqr, VectorSubtract, operator-
// callers: CPhysicsSpring::Activate
bool __fastcall PointIsNearer(HPhysicsBody hBody, const Vector *const point1, const Vector *const point2)
{
  float v5; // xmm1_4
  double center; // [rsp+0h] [rbp-20h]

  center = (*(*hBody + 368LL))(hBody);
  return ((((*&center - point2->x) * (*&center - point2->x))
         + ((*(&center + 1) - point2->y) * (*(&center + 1) - point2->y)))
        + ((v5 - point2->z) * (v5 - point2->z))) > ((((*&center - point1->x) * (*&center - point1->x))
                                                   + ((*(&center + 1) - point1->y) * (*(&center + 1) - point1->y)))
                                                  + ((v5 - point1->z) * (v5 - point1->z)));
}


// CPhysicsSpring::GetSpringObjectConnections  (line 267, @0x00000000022eb4f0, libserver.so)  // inlines: CEntityHandle, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, LookupEntity, String, ToCStr, operator CBaseEntity*
// calls: FindPhysicsBodyByName, CPhysicsGameSystem::GetLevelAggregateInstance
// callers: CPhysicsSpring::Activate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsSpring::GetSpringObjectConnections(
        CPhysicsSpring *const this,
        string_t nameStart,
        string_t nameEnd,
        HPhysicsBody *pStart,
        HPhysicsBody *pEnd)
{
  const char *v8; // rdi
  HPhysicsBody PhysicsBodyByName; // rax
  const char *v11; // rdi
  IPhysicsBody *v12; // rbx
  HPhysicsBody v13; // rax
  IPhysicsBody *v14; // r12
  int v15; // eax
  CConcreteEntityList *v16; // rsi
  CEntityIdentity *v17; // rdx
  __int64 v18; // rcx
  CEntityIdentity *v19; // rdx
  int v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  IPhysAggregateInstance *LevelAggregateInstance; // rax
  IPhysAggregateInstance *v24; // rax

  v8 = "";
  if ( *nameStart.u.m_Id != 0 )
    v8 = *nameStart.u.m_pAsString;
  PhysicsBodyByName = FindPhysicsBodyByName(v8, this);
  v11 = "";
  v12 = PhysicsBodyByName;
  if ( *nameEnd.u.m_Id != 0 )
    v11 = *nameEnd.u.m_pAsString;
  v13 = FindPhysicsBodyByName(v11, this);
  v14 = v13;
  if ( v12 != 0 )
  {
    if ( v13 != 0 )
    {
      v15 = (*(*v12 + 1328LL))(v12);
      v16 = CEntityHandle::gm_pEntityList;
      if ( (v15 + 2) > 1 )
      {
        v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v15 >> 9) & 0x3F];
        if ( v17 != 0 )
        {
          v18 = v15 & 0x1FF;
          v16 = (8 * v18);
          v19 = &v17[v18];
          if ( v19 != 0 && v15 == v19->m_EHandle.m_Index && v19->m_pInstance != 0 )
            (*g_pNotify->_vptr_INotify)(g_pNotify, this);
        }
      }
      v20 = (*(*v14 + 1328LL))(v14, v16);
      if ( (v20 + 2) > 1 )
      {
        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v20 >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[v20 & 0x1FF];
          if ( v22 != 0 && v20 == v22->m_EHandle.m_Index && v22->m_pInstance != 0 )
            (*g_pNotify->_vptr_INotify)(g_pNotify, this);
        }
      }
    }
    else
    {
      v14 = v12;
      LevelAggregateInstance = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
      v12 = (*(LevelAggregateInstance->_vptr_IPhysAggregateInstance + 10))(LevelAggregateInstance, 0);
    }
  }
  else
  {
    v24 = CPhysicsGameSystem::GetLevelAggregateInstance(g_pPhysicsGameSystem);
    v12 = (*(v24->_vptr_IPhysAggregateInstance + 10))(v24, 0);
  }
  *pStart = v12;
  *pEnd = v14;
}


// CPhysicsSpring::Activate  (line 303, @0x00000000022eb6b0, libserver.so)  // inlines: CUtlSymbolLarge, GetDebugName, HasSpawnFlags, String, ToCStr, memset, operator=, springparams_t
// calls: CBaseEntity::Activate, CPhysicsSpring::GetSpringObjectConnections, PointIsNearer, CBaseEntity::VPhysicsWorld, CEntityIdentity::GetDebugName, DevMsg(char const*,...), UTIL_Remove
void __fastcall CPhysicsSpring::Activate(CPhysicsSpring *const this, ActivateType_t activateType)
{
  vec_t x; // xmm6_4
  vec_t y; // xmm5_4
  vec_t z; // xmm4_4
  vec_t v6; // xmm3_4
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  unsigned int v9; // eax
  float m_tempDamping; // xmm0_4
  float m_tempLength; // xmm0_4
  float m_tempRelativeDamping; // xmm0_4
  IVPhysics2World *v13; // rax
  const char *m_pAsString; // r13
  const char *v15; // r12
  const char *DebugName; // rax
  string_t nameStart; // [rsp+0h] [rbp-70h] BYREF
  HPhysicsBody hStart; // [rsp+10h] [rbp-60h] BYREF
  HPhysicsBody hEnd; // [rsp+18h] [rbp-58h] BYREF
  springparams_t spring; // [rsp+20h] [rbp-50h] BYREF

  CBaseEntity::Activate(this, activateType);
  if ( this->m_pSpring == 0 )
  {
    *&spring.constant = this->m_nameAttachEnd.u.m_Id;
    nameStart.u.m_Id = this->m_nameAttachStart.u.m_Id;
    CPhysicsSpring::GetSpringObjectConnections(this, &nameStart, &spring, &hStart, &hEnd);
    if ( hStart != 0 && hEnd != 0 && hStart != hEnd )
    {
      if ( PointIsNearer(hEnd, &this->m_end, &this->m_start) )
      {
        x = this->m_start.x;
        y = this->m_start.y;
        z = this->m_start.z;
        v6 = this->m_end.x;
        v7 = this->m_end.y;
        v8 = this->m_end.z;
      }
      else
      {
        v6 = this->m_start.x;
        v7 = this->m_start.y;
        v8 = this->m_start.z;
        x = this->m_end.x;
        this->m_end.x = v6;
        y = this->m_end.y;
        this->m_end.y = v7;
        z = this->m_end.z;
        this->m_start.x = x;
        this->m_start.y = y;
        this->m_start.z = z;
        this->m_end.z = v8;
      }
      memset(&spring, 0, sizeof(spring));
      v9 = this->m_spawnflags.m_Value & 1;
      spring.constant = this->m_tempConstant;
      m_tempDamping = this->m_tempDamping;
      spring.onlyStretch = v9;
      spring.damping = m_tempDamping;
      m_tempLength = this->m_tempLength;
      spring.startPosition.x = x;
      spring.naturalLength = m_tempLength;
      m_tempRelativeDamping = this->m_tempRelativeDamping;
      spring.startPosition.y = y;
      spring.relativeDamping = m_tempRelativeDamping;
      spring.startPosition.z = z;
      spring.endPosition.x = v6;
      spring.onlyStretch = v9 & 1;
      spring.endPosition.y = v7;
      spring.endPosition.z = v8;
      v13 = CBaseEntity::VPhysicsWorld(this);
      this->m_pSpring = (*(*v13 + 352LL))(v13, hStart, hEnd, &spring);
    }
    else
    {
      m_pAsString = "";
      if ( this->m_nameAttachEnd.u.m_Id != 0 )
        m_pAsString = this->m_nameAttachEnd.u.m_pAsString;
      v15 = "";
      if ( this->m_nameAttachStart.u.m_Id != 0 )
        v15 = this->m_nameAttachStart.u.m_pAsString;
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      DevMsg(&stru_333F690.m_OnUser3, DebugName, v15, m_pAsString);
      UTIL_Remove(this);
    }
  }
}


// CPhysicsSpring::Spawn  (line 346, @0x00000000022ba730, libserver.so)  // inlines: FastSqrt, Length, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CBaseEntity::Spawn, CBaseEntity::GetAbsOrigin
void __fastcall CPhysicsSpring::Spawn(CPhysicsSpring *const this, const CEntityKeyValues *pKeyValues)
{
  const Vector *AbsOrigin; // rax
  bool v4; // cf
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm3_4

  CBaseEntity::Spawn(this, pKeyValues);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = this->m_tempLength > 0.0;
  x = AbsOrigin->x;
  this->m_start.x = AbsOrigin->x;
  y = AbsOrigin->y;
  this->m_start.y = y;
  z = AbsOrigin->z;
  this->m_start.z = z;
  if ( !v4 )
    this->m_tempLength = fsqrt(
                           (((this->m_end.x - x) * (this->m_end.x - x)) + ((this->m_end.y - y) * (this->m_end.y - y)))
                         + ((this->m_end.z - z) * (this->m_end.z - z)));
}


// CPhysicsSpring::NotifySystemEvent  (line 357, @0x00000000022ce330, libserver.so)
// calls: PhysTeleportConstrainedEntity
void __fastcall CPhysicsSpring::NotifySystemEvent(
        CPhysicsSpring *const this,
        CBaseEntity *pNotify,
        notify_system_event_t eventType,
        const notify_system_event_params_t *const params)
{
  uint32 tickcount; // eax
  const notify_teleport_params_t *pTeleport; // r12
  bool physicsRotate; // r14
  IPhysicsObject *v9; // r15
  IPhysicsObject *v10; // rax

  if ( eventType == notify_system_event_t::NOTIFY_EVENT_TELEPORT )
  {
    tickcount = gpGlobals->tickcount;
    if ( tickcount != this->m_teleportTick )
    {
      this->m_teleportTick = tickcount;
      pTeleport = params->pTeleport;
      physicsRotate = params->pTeleport->physicsRotate;
      v9 = (*(this->m_pSpring->_vptr_IPhysicsSpring + 7))(this->m_pSpring);
      v10 = (*(this->m_pSpring->_vptr_IPhysicsSpring + 6))(this->m_pSpring);
      PhysTeleportConstrainedEntity(pNotify, v10, v9, &pTeleport->prevOrigin, &pTeleport->prevAngles, physicsRotate);
    }
  }
}


// CPhysBox::YouForgotToImplementOrDeclareServerClass  (line 374, @0x00000000022b7c00, libserver.so)
int __fastcall CPhysBox::YouForgotToImplementOrDeclareServerClass(CPhysBox *const this)
{
  return 0;
}


// CPhysBox::GetServerClass  (line 374, @0x00000000022c8020, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPhysBox::GetServerClass(CPhysBox *const this)
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


// CPhysBox::GetDataDescMap  (line 377, @0x00000000022b7c10, libserver.so)
// globals: CPhysBox::m_DataMap
datamap_t *__fastcall CPhysBox::GetDataDescMap(CPhysBox *const this)
{
  return &CPhysBox::m_DataMap;
}


// CPhysBox::AddDatadescMetadataKeys  (line 377, @0x00000000022de680, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysBox::GetEntityClass(void)
void __fastcall CPhysBox::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysBox::GetEntityClass);
}


// CPhysBox::GetBaseMap  (line 377, @0x00000000022de6a0, libserver.so)
datamap_t *__cdecl CPhysBox::GetBaseMap()
{
  return &CBreakable::m_DataMap;
}


// DataMapInit<CPhysBox>  (line 377, @0x00000000022f3b30, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysBox"
// globals: `guard variable for'DataMapInit<CPhysBox>(CPhysBox *)::nameHolder, `guard variable for'DataMapInit<CPhysBox>(CPhysBox *)::dataDesc, CPhysBox::GetEntityClass(void), CPhysBox::m_DataMap, DataMapInit<CPhysBox>(CPhysBox *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysBox>(CPhysBox *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_pszBase = "CPhysBox";
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysBox>(CPhysBox *)::nameHolder,
      &_dso_handle);
  }
  CPhysBox::m_DataMap.baseMap = &CBreakable::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v2, DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_pszBase), "BreakTouch");
    m_Size = DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPhysBox>(CPhysBox *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[16].fieldName = v2;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[17].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[20].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[21].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[22].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[23].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[24].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysBox>(CPhysBox *)::dataDesc);
  }
  CPhysBox::m_DataMap.dataNumFields = 25;
  CPhysBox::m_DataMap.dataDesc = &DataMapInit<CPhysBox>(CPhysBox *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysBox::m_DataMap, CPhysBox::GetEntityClass);
  return &CPhysBox::m_DataMap;
}


// CPhysBox::Spawn  (line 428, @0x00000000022be900, libserver.so)  // inlines: AddSpawnFlags, GetDebugName, GetFloat, NetworkStateChanged, Set, SetCollisionGroup, SetSolid, operator->, operator=, operator|=<int>
// calls: CBreakable::Spawn, CBreakable::ParsePropData, CBaseEntity::GetHealth, CBaseEntity::SetMaxHealth, CBaseEntity::SetDamageOptions, CBaseEntity::SetMoveType, CBaseEntity::SetAbsVelocity, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetModel, CModel::name, CBaseEntity::GetAbsOrigin, CEntityIdentity::GetDebugName (15 total)
// strings: "func_physbox '%s' at (%.2f, %.2f, %.2f) with model '%s' has no physics!\n"
void __fastcall CPhysBox::Spawn(CPhysBox *const this, const CEntityKeyValues *pKeyValues)
{
  float m_fValue; // xmm0_4
  int Health; // eax
  int v6; // esi
  unsigned int v7; // r13d
  bool v8; // zf
  const CModel *v9; // rdi
  const char *v10; // r12
  const char *DebugName; // rax
  double z; // [rsp+8h] [rbp-48h]
  double y; // [rsp+10h] [rbp-40h]
  double x; // [rsp+18h] [rbp-38h]
  const CModel **v15; // [rsp+20h] [rbp-30h] BYREF

  CBreakable::Spawn(this, pKeyValues);
  this->m_flDmgModBullet = func_breakdmg_bullet.m_pParent->m_Value.m_fValue;
  this->m_flDmgModClub = func_breakdmg_club.m_pParent->m_Value.m_fValue;
  m_fValue = func_breakdmg_explosive.m_pParent->m_Value.m_fValue;
  this->m_flDmgModFire = 1.0;
  this->m_flDmgModExplosive = m_fValue;
  CBreakable::ParsePropData(this);
  Health = CBaseEntity::GetHealth(this);
  v6 = 1;
  if ( Health > 0 )
    v6 = CBaseEntity::GetHealth(this);
  CBaseEntity::SetMaxHealth(this, v6);
  if ( (this->m_spawnflags.m_Value & 1) == 0 && CBaseEntity::GetHealth(this) != 0 )
  {
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  }
  else
  {
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
    v7 = this->m_spawnflags.m_Value | 0x400;
    if ( this->m_spawnflags.m_Value != v7 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v7;
    }
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  if ( (this->m_spawnflags.m_Value & 0x4000) != 0 )
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
  if ( this->m_bNotSolidToWorld )
    (*(this->m_Collision._vptr_ICollideable + 16))(&this->m_Collision);
  if ( (*(this->_vptr_IHandleEntity + 49))(this) != 0 )
  {
    this->m_hCarryingPlayer.m_Index = -1;
    v8 = (this->m_spawnflags.m_Value & 1) == 0;
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CBreakable::BreakTouch;
    if ( !v8 )
      this->m_pfnTouch.__pfn = 0;
    if ( this->m_impactEnergyScale == 0.0 )
      this->m_impactEnergyScale = 1.0;
  }
  else
  {
    CBaseEntity::GetModel(&v15, this);
    if ( v15 != 0 )
      v9 = *v15;
    else
      v9 = 0;
    v10 = CModel::name(v9);
    z = CBaseEntity::GetAbsOrigin(this)->z;
    y = CBaseEntity::GetAbsOrigin(this)->y;
    x = CBaseEntity::GetAbsOrigin(this)->x;
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    Warning("func_physbox '%s' at (%.2f, %.2f, %.2f) with model '%s' has no physics!\n", DebugName, v10, x, y, z);
    UTIL_Remove(this);
  }
}


// CPhysBox::CreateVPhysics  (line 500, @0x00000000022ba460, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline, PhysSetGameFlags
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject, CBaseEntity::PhysicsEnableMotion
bool __fastcall CPhysBox::CreateVPhysics(CPhysBox *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx
  IPhysAggregateInstance *v4; // rax
  float m_massScale; // xmm0_4
  IPhysicsObject *Object; // rax
  IPhysicsObject *v7; // r12
  unsigned int v8; // eax
  void (__fastcall *v10)(IPhysAggregateInstance *, float); // r12
  float v11; // xmm0_4
  unsigned __int16 v12; // ax
  IPhysAggregateInstance *pAgg; // [rsp+8h] [rbp-18h]

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  v4 = CCollisionProperty::SetupPhysicsFromUnscaledModel(
         &this->m_Collision,
         VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
         m_Value,
         1);
  if ( v4 != 0 )
  {
    m_massScale = this->m_massScale;
    if ( m_massScale > 0.0 && m_massScale != 1.0 )
    {
      pAgg = v4;
      v10 = *(v4->_vptr_IPhysAggregateInstance + 53);
      v11 = (*(v4->_vptr_IPhysAggregateInstance + 52))(v4);
      v10(pAgg, v11 * this->m_massScale);
      Object = CBaseEntity::VPhysicsGetObject(this);
      v7 = Object;
      if ( Object != 0 )
        goto LABEL_7;
      return 0;
    }
  }
  Object = CBaseEntity::VPhysicsGetObject(this);
  v7 = Object;
  if ( Object == 0 )
    return 0;
LABEL_7:
  if ( this->m_damageType == 1 )
  {
    v12 = (*(*Object + 1296LL))(v7);
    (*(*v7 + 1304LL))(v7, v12 | 1u);
  }
  v8 = this->m_spawnflags.m_Value;
  if ( (v8 & 0x100000) == 0 )
  {
    (*(*v7 + 1592LL))(v7);
    v8 = this->m_spawnflags.m_Value;
  }
  if ( (v8 & 0x8000) != 0 || this->m_damageToEnableMotion > 0 || this->m_flForceToEnableMotion > 0.0 )
    CBaseEntity::PhysicsEnableMotion(this, 0);
  return 1;
}


// CPhysBox::ObjectCaps  (line 558, @0x00000000022b85e0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CPhysBox::ObjectCaps(CPhysBox *const this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v2 = CBaseEntity::ObjectCaps(this);
  v3 = v2 | 0x40000021;
  v4 = v2 | 0x40000000;
  if ( (this->m_spawnflags.m_Value & 0x80000) != 0 )
    return v3;
  return v4;
}


// CPhysBox::UseEx  (line 579, @0x00000000022f2aa0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, HasSpawnFlags, Int, ToBasePlayer, VRHandSlotFromUseData, operator int, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysBox::UseEx(CPhysBox *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx
  unsigned int m_Value; // eax
  __int64 m_uint; // rcx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x80000) != 0 )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerUse, this, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x40000) == 0 )
    {
      m_uint = 0;
      if ( inputdata->value.m_type == 5 )
        m_uint = inputdata->value.m_uint;
      (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, m_uint);
    }
  }
}


// CPhysBox::CanBePickedUpByPhyscannon  (line 600, @0x00000000022de6b0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
bool __fastcall CPhysBox::CanBePickedUpByPhyscannon(CPhysBox *const this)
{
  bool result; // al
  IPhysicsObject *Object; // rax

  if ( (this->m_spawnflags.m_Value & 0x200000) != 0 )
    return 0;
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object == 0 )
    return 0;
  result = (*(*Object + 1504LL))(Object);
  if ( !result )
    return (this->m_spawnflags.m_Value & 0x20000) != 0;
  return result;
}


// CPhysBox::DrawDebugTextOverlays  (line 620, @0x00000000022ba7d0, libserver.so)
// calls: CBreakable::DrawDebugTextOverlays, CBaseEntity::VPhysicsGetObject, GetMassEquivalent, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Mass: %.2f kg / %.2f lb (%s)"
int __fastcall CPhysBox::DrawDebugTextOverlays(CPhysBox *const this, uint64 nDebugOverlayBits, int iDebugFilterFlags)
{
  __int16 v3; // r13
  char v5; // bl
  int v6; // r14d
  IPhysicsObject *Object; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  const char *MassEquivalent; // r13
  IPhysicsObject *v12; // rax
  IPhysicsObject *v13; // rax
  double v14; // xmm0_8
  int v15; // esi
  float v16; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v18; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v18 = __readfsqword(0x28u);
  v6 = CBreakable::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v3 & 0x800) != 0 && CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    v9 = (*(*Object + 208LL))(Object);
    MassEquivalent = GetMassEquivalent(v9, v10);
    v12 = CBaseEntity::VPhysicsGetObject(this);
    v16 = (*(*v12 + 208LL))(v12);
    v13 = CBaseEntity::VPhysicsGetObject(this);
    v14 = (*(*v13 + 208LL))(v13);
    V_snprintf(tempstr, 512, "Mass: %.2f kg / %.2f lb (%s)", *&v14, (v16 * 2.2), MassEquivalent);
    v15 = v6++;
    CBaseEntity::EntityText(this, v15, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPhysBox::InputWake  (line 643, @0x00000000022b9cb0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysBox::InputWake(CPhysBox *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    (*(*Object + 1592LL))(Object);
  }
}


// CPhysBox::InputSleep  (line 655, @0x00000000022b9cf0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysBox::InputSleep(CPhysBox *const this, inputdata_t *const inputdata)
{
  IPhysicsObject *Object; // rax

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    (*(*Object + 848LL))(Object, 0);
  }
}


// CPhysBox::InputEnableMotion  (line 666, @0x00000000022f1fd0, libserver.so)
// calls: CPhysBox::EnableMotion
void __fastcall CPhysBox::InputEnableMotion(CPhysBox *const this, inputdata_t *const inputdata)
{
  CPhysBox::EnableMotion(this);
}


// CPhysBox::EnableMotion  (line 674, @0x00000000022f1f30, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CBaseEntity::PhysicsEnableMotion, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPhysBox::InputEnableMotion, CPhysBox::VPhysicsCollision, CPhysBox::ReactToDamage, CPhysBox::OnTakeDamage, CPhysBox::OnPhysGunPickup
void __fastcall CPhysBox::EnableMotion(CPhysBox *const this)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::PhysicsEnableMotion(this, 1);
  value.m_type = 0;
  this->m_flForceToEnableMotion = 0.0;
  this->m_damageToEnableMotion = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnMotionEnabled, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CPhysBox::InputDisableMotion  (line 687, @0x00000000022ba440, libserver.so)
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CPhysBox::InputDisableMotion(CPhysBox *const this, inputdata_t *const inputdata)
{
  CBaseEntity::PhysicsEnableMotion(this, 0);
}


// CPhysBox::InputDisableFloating  (line 693, @0x00000000022b7c20, libserver.so)
void __fastcall CPhysBox::InputDisableFloating(CPhysBox *const this, inputdata_t *const inputdata)
{
  ;
}


// CPhysBox::InputForceDrop  (line 701, @0x00000000022c1d00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, operator->
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysBox::InputForceDrop(CPhysBox *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = this->m_hCarryingPlayer.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCarryingPlayer.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hCarryingPlayer.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
        (*(v4->m_pInstance->_vptr_IHandleEntity + 480))(v4->m_pInstance, 0);
    }
  }
}


// CPhysBox::Move  (line 712, @0x00000000022de700, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject
void __fastcall CPhysBox::Move(CPhysBox *const this, const Vector *const direction)
{
  IPhysicsObject *Object; // rax

  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(this);
    (*(*Object + 1776LL))(Object, direction);
  }
}


// CPhysBox::VPhysicsUpdate  (line 721, @0x00000000022f2990, libserver.so)  // inlines: CVariantBase, FireOutput, Free, NetworkStateChanged, RemoveSpawnFlags, Set, String, ToCStr, operator&=<int>, ~CVariantBase
// calls: CBaseEntity::VPhysicsUpdate, CEntityIOOutput::FireOutputInternal, FireTargets, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysBox::VPhysicsUpdate(CPhysBox *const this, IPhysicsObject *pPhysics)
{
  const char *m_pAsString; // rdi
  unsigned int v5; // r12d
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CBaseEntity::VPhysicsUpdate(this, pPhysics);
  if ( (this->m_spawnflags.m_Value & 0x100000) != 0 && (*(*pPhysics + 1464LL))(pPhysics) == 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnAwakened, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    m_pAsString = "";
    if ( this->m_target.u.m_Id != 0 )
      m_pAsString = this->m_target.u.m_pAsString;
    FireTargets(m_pAsString, this, this, USE_TOGGLE, 0.0);
    v5 = this->m_spawnflags.m_Value & 0xFFEFFFFF;
    if ( this->m_spawnflags.m_Value != v5 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v5;
    }
  }
}


// CPhysBox::OnPhysGunPickup  (line 740, @0x00000000022f2be0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, ~CVariantBase
// calls: CBaseEntity::VPhysicsGetObject, CEntityIOOutput::FireOutputInternal, CPhysBox::EnableMotion, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysBox::OnPhysGunPickup(
        CPhysBox *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  IPhysicsObject *Object; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunPunt, pPhysGunUser, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 && (*(*Object + 1512LL))(Object) == 0 )
  {
    if ( (this->m_spawnflags.m_Value & 0x20000) == 0 )
      return;
    CPhysBox::EnableMotion(this);
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunPickup, pPhysGunUser, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
      return;
  }
  else if ( reason == PhysGunPickup_t::PUNTED_BY_CANNON )
  {
    return;
  }
  if ( reason == PhysGunPickup_t::PICKED_UP_BY_CANNON )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunOnlyPickup, pPhysGunUser, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v10 = 0x7FFF;
    else
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hCarryingPlayer.m_Index) = v10 | this->m_hCarryingPlayer.m_Index & 0x8000;
    this->m_hCarryingPlayer.m_Index = (v9 << 15) | this->m_hCarryingPlayer.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hCarryingPlayer.m_Index = -1;
  }
}


// CPhysBox::OnPhysGunDrop  (line 772, @0x00000000022f2110, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Set, operator=, ~CVariantBase
// calls: CBreakable::OnPhysGunDrop, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CPhysBox::OnPhysGunDrop(
        CPhysBox *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  CBreakable::OnPhysGunDrop(this, pPhysGunUser, Reason, nVRControllerID);
  value.m_type = 0;
  this->m_hCarryingPlayer.m_Index = -1;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPhysGunDrop, pPhysGunUser, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CPhysBox::VPhysicsCollision  (line 783, @0x00000000022f1fe0, libserver.so)
// calls: CBreakable::VPhysicsCollision, IPhysicsBody::GetGameData, CPhysBox::EnableMotion
void __fastcall CPhysBox::VPhysicsCollision(CPhysBox *const this, int index, gamevcollisionevent_t *pEvent)
{
  const IPhysicsBody *const *v6; // r13
  void *GameData; // rax
  float collisionSpeed; // [rsp+Ch] [rbp-24h]

  CBreakable::VPhysicsCollision(this, index, pEvent);
  v6 = &pEvent->pObjects[index == 0];
  if ( this->m_flForceToEnableMotion != 0.0 )
  {
    GameData = IPhysicsBody::GetGameData(*v6);
    if ( GameData == 0 || (*(*GameData + 1120LL))(GameData) == 0 || (this->m_spawnflags.m_Value & 0x800000) == 0 )
    {
      collisionSpeed = pEvent->collisionSpeed;
      if ( ((*(**v6 + 208LL))(*v6) * collisionSpeed) >= this->m_flForceToEnableMotion )
        CPhysBox::EnableMotion(this);
    }
  }
}


// CPhysBox::StartTouch  (line 807, @0x00000000022fcbe0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CVariantBase, CopyConstruct<CPhysBox::RecentlyTouchedEntity_t>, Element, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, RecentlyTouchedEntity_t, Remove, Set, ShiftElementsLeft, V_memmove, curtime, memmove, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CVariantBase
// calls: CBaseEntity::StartTouch, memmove, CGlobalVarsBase::curtime, CEntityIOOutput::FireOutputInternal, CUtlMemory<CPhysBox::RecentlyTouchedEntity_t, int>::Grow, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysBox::StartTouch(CPhysBox *const this, CBaseEntity *pOther)
{
  int v4; // ebx
  const CGlobalVarsBase *const *v5; // r8
  __int64 v6; // r14
  CPhysBox::RecentlyTouchedEntity_t *v7; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  int m_Size; // eax
  float v11; // xmm0_4
  float v12; // xmm0_4
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  int m_int; // r14d
  __int64 v16; // rbx
  int v17; // edx
  CPhysBox::RecentlyTouchedEntity_t *v18; // rdx
  CBaseEntity *m_pInstance; // rdx
  const CGlobalVarsBase *v20; // r15
  float m_flCurrentTime; // xmm1_4
  float m_flExpireTime; // xmm0_4
  void (__fastcall *m_pfnWarningFunc)(__int64, float, double); // rax
  const CGlobalVarsBase *const *v24; // [rsp+8h] [rbp-58h]
  CBaseEntity *v25; // [rsp+10h] [rbp-50h]
  const CGlobalVarsBase *const *v26; // [rsp+18h] [rbp-48h]
  float v27; // [rsp+18h] [rbp-48h]
  float v28; // [rsp+18h] [rbp-48h]
  CVariant value; // [rsp+20h] [rbp-40h] BYREF

  CBaseEntity::StartTouch(this, pOther);
  if ( this->m_flTouchOutputPerEntityDelay > 0.0 )
  {
    v4 = this->m_RecentlyTouchedEntities.m_Size - 1;
    if ( v4 >= 0 )
    {
      v5 = &gpGlobals;
      v6 = v4;
      while ( 1 )
      {
        v7 = &this->m_RecentlyTouchedEntities.m_Memory.m_pMemory[v6];
        if ( v7->m_hEntity.m_Index + 2 <= 1 )
          goto LABEL_10;
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_hEntity.m_Index) >> 9) & 0x3F];
        if ( v8 == 0 )
          goto LABEL_10;
        v9 = &v8[v7->m_hEntity.m_Index & 0x1FF];
        if ( v9 == 0 )
          goto LABEL_10;
        if ( v7->m_hEntity.m_Index != v9->m_EHandle.m_Index )
          goto LABEL_10;
        m_pInstance = v9->m_pInstance;
        if ( v9->m_pInstance == 0 )
          goto LABEL_10;
        v20 = *v5;
        m_flCurrentTime = 0.0;
        m_flExpireTime = v7->m_flExpireTime;
        if ( *v5 != 0 )
        {
          if ( !v20->m_bEnableAssertions && !v20->m_bInSimulation )
          {
            m_pfnWarningFunc = v20->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
            {
              v24 = v5;
              v25 = v9->m_pInstance;
              v28 = m_flExpireTime;
              m_pfnWarningFunc(1, m_flExpireTime, 0.0);
              v5 = v24;
              m_pInstance = v25;
              m_flExpireTime = v28;
            }
          }
          m_flCurrentTime = v20->m_flCurrentTime;
        }
        if ( m_flCurrentTime < m_flExpireTime )
        {
          if ( pOther == m_pInstance )
            return;
        }
        else
        {
LABEL_10:
          m_Size = this->m_RecentlyTouchedEntities.m_Size;
          if ( m_Size - v4 - 1 > 0 )
          {
            v26 = v5;
            memmove(
              &this->m_RecentlyTouchedEntities.m_Memory.m_pMemory[v6],
              &this->m_RecentlyTouchedEntities.m_Memory.m_pMemory[v6 + 1],
              8LL * (this->m_RecentlyTouchedEntities.m_Size - v4 - 1));
            m_Size = this->m_RecentlyTouchedEntities.m_Size;
            v5 = v26;
          }
          this->m_RecentlyTouchedEntities.m_Size = m_Size - 1;
        }
        --v4;
        --v6;
        if ( v4 == -1 )
          goto LABEL_13;
      }
    }
    v5 = &gpGlobals;
LABEL_13:
    v11 = CGlobalVarsBase::curtime(*v5, 0);
    value.m_int = -1;
    v12 = v11 + this->m_flTouchOutputPerEntityDelay;
    if ( pOther != 0 && (m_pEntity = pOther->m_pEntity) != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      value.m_int = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
      m_int = value.m_int;
    }
    else
    {
      m_int = -1;
    }
    v16 = this->m_RecentlyTouchedEntities.m_Size;
    v17 = this->m_RecentlyTouchedEntities.m_Size;
    if ( v16 == this->m_RecentlyTouchedEntities.m_Memory.m_nAllocationCount )
    {
      v27 = v12;
      CUtlMemory<CPhysBox::RecentlyTouchedEntity_t,int>::Grow(&this->m_RecentlyTouchedEntities.m_Memory, 1);
      v17 = this->m_RecentlyTouchedEntities.m_Size;
      v12 = v27;
    }
    this->m_RecentlyTouchedEntities.m_Size = v17 + 1;
    v18 = &this->m_RecentlyTouchedEntities.m_Memory.m_pMemory[v16];
    if ( v18 != 0 )
    {
      v18->m_hEntity.m_Index = m_int;
      v18->m_flExpireTime = v12;
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnStartTouch, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
}


// CPhysBox::OnTakeDamage  (line 839, @0x00000000022f26a0, libserver.so)  // inlines: CVariantBase, FastSqrt, FireOutput, Free, Get, GetAttacker, GetDamageForce, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CBreakable::OnTakeDamage, CBaseEntity::GetHealth, CPhysBox::EnableMotion, CBaseEntity::VPhysicsGetObject, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CPhysBox::OnTakeDamage(CPhysBox *const this, const CTakeDamageInfo *const info)
{
  int result; // eax
  int v5; // eax
  uint32 m_Index; // edx
  int v7; // r13d
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  float m_flForceToEnableMotion; // xmm1_4
  uint32 v11; // edx
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  result = 0;
  if ( (this->m_pEntity->m_flags & 0x200) == 0 )
  {
    v5 = CBreakable::OnTakeDamage(this, info);
    m_Index = info->m_hInflictor.m_Index;
    v7 = v5;
    if ( m_Index + 2 > 1 )
    {
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[info->m_hInflictor.m_Index & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v11 = info->m_hAttacker.m_Index;
          m_pInstance = 0;
          if ( v11 + 2 > 1 )
          {
            v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
            if ( v13 != 0 )
            {
              v14 = &v13[info->m_hAttacker.m_Index & 0x1FF];
              if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
                m_pInstance = v14->m_pInstance;
            }
          }
          value.m_type = 0;
          value.m_flags = 0;
          value.m_uint64 = 0;
          CEntityIOOutput::FireOutputInternal(&this->m_OnDamaged, m_pInstance, this, &value, 0.0);
          if ( (value.m_flags & 1) != 0 )
            (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        }
      }
    }
    if ( CBaseEntity::GetHealth(this) > 0 )
    {
      m_flForceToEnableMotion = this->m_flForceToEnableMotion;
      if ( m_flForceToEnableMotion != 0.0
        && fsqrt(
             ((info->m_vecDamageForce.x * info->m_vecDamageForce.x)
            + (info->m_vecDamageForce.y * info->m_vecDamageForce.y))
           + (info->m_vecDamageForce.z * info->m_vecDamageForce.z)) >= m_flForceToEnableMotion
        && CBaseEntity::VPhysicsGetObject(this) != 0 )
      {
        CPhysBox::EnableMotion(this);
      }
      if ( this->m_damageToEnableMotion > 0 && CBaseEntity::GetHealth(this) < this->m_damageToEnableMotion )
      {
        CPhysBox::EnableMotion(this);
        (*(this->_vptr_IHandleEntity + 55))(this, info);
      }
    }
    return v7;
  }
  return result;
}


// CPhysBox::RejectDamage  (line 884, @0x00000000022ba910, libserver.so)
// calls: CBreakable::RejectDamage
bool __fastcall CPhysBox::RejectDamage(CPhysBox *const this, const CTakeDamageInfo *const info)
{
  return (this->m_pEntity->m_flags & 0x200) != 0 || CBreakable::RejectDamage(this, info);
}


// CPhysBox::ReactToDamage  (line 893, @0x00000000022f24c0, libserver.so)  // inlines: CVariantBase, FastSqrt, FireOutput, Free, Get, GetAttacker, GetDamageForce, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CBreakable::ReactToDamage, CBaseEntity::GetHealth, CPhysBox::EnableMotion, CBaseEntity::VPhysicsGetObject, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysBox::ReactToDamage(CPhysBox *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float m_flForceToEnableMotion; // xmm1_4
  uint32 v8; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  CBreakable::ReactToDamage(this, info);
  m_Index = info->m_hInflictor.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[info->m_hInflictor.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index && v6->m_pInstance != 0 )
      {
        v8 = info->m_hAttacker.m_Index;
        m_pInstance = 0;
        if ( v8 + 2 > 1 )
        {
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hAttacker.m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[info->m_hAttacker.m_Index & 0x1FF];
            if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
              m_pInstance = v11->m_pInstance;
          }
        }
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnDamaged, m_pInstance, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      }
    }
  }
  if ( CBaseEntity::GetHealth(this) > 0 )
  {
    m_flForceToEnableMotion = this->m_flForceToEnableMotion;
    if ( m_flForceToEnableMotion != 0.0
      && fsqrt(
           ((info->m_vecDamageForce.x * info->m_vecDamageForce.x) + (info->m_vecDamageForce.y * info->m_vecDamageForce.y))
         + (info->m_vecDamageForce.z * info->m_vecDamageForce.z)) >= m_flForceToEnableMotion
      && CBaseEntity::VPhysicsGetObject(this) != 0 )
    {
      CPhysBox::EnableMotion(this);
    }
    if ( this->m_damageToEnableMotion > 0 && CBaseEntity::GetHealth(this) < this->m_damageToEnableMotion )
    {
      CPhysBox::EnableMotion(this);
      (*(this->_vptr_IHandleEntity + 55))(this, info);
    }
  }
}


// CPhysBox::HasPreferredCarryAnglesForPlayer  (line 932, @0x00000000022b7c30, libserver.so)  // inlines: HasSpawnFlags
bool __fastcall CPhysBox::HasPreferredCarryAnglesForPlayer(CPhysBox *const this, CBasePlayer *pPlayer)
{
  return HIWORD(this->m_spawnflags.m_Value) & 1;
}


// CPhysExplosion::GetDataDescMap  (line 943, @0x00000000022b7c50, libserver.so)
// globals: CPhysExplosion::m_DataMap
datamap_t *__fastcall CPhysExplosion::GetDataDescMap(CPhysExplosion *const this)
{
  return &CPhysExplosion::m_DataMap;
}


// CPhysExplosion::AddDatadescMetadataKeys  (line 943, @0x00000000022de740, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysExplosion::GetEntityClass(void)
void __fastcall CPhysExplosion::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysExplosion::GetEntityClass);
}


// CPhysExplosion::GetBaseMap  (line 943, @0x00000000022de760, libserver.so)
datamap_t *__cdecl CPhysExplosion::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPhysExplosion>  (line 943, @0x00000000022de770, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysExplosion"
// globals: `guard variable for'DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder, `guard variable for'DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc, CPhysExplosion::GetEntityClass(void), CPhysExplosion::m_DataMap, DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysExplosion>(CPhysExplosion *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_pszBase = "CPhysExplosion";
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysExplosion>(CPhysExplosion *)::nameHolder,
      &_dso_handle);
  }
  CPhysExplosion::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc) != 0 )
  {
    DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc);
  }
  CPhysExplosion::m_DataMap.dataNumFields = 8;
  CPhysExplosion::m_DataMap.dataDesc = &DataMapInit<CPhysExplosion>(CPhysExplosion *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysExplosion::m_DataMap, CPhysExplosion::GetEntityClass);
  return &CPhysExplosion::m_DataMap;
}


// CPhysExplosion::Spawn  (line 961, @0x00000000022b9f90, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CPhysExplosion::Spawn(CPhysExplosion *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  if ( this->m_flPushScale == 0.0 )
    this->m_flPushScale = 1.0;
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
}


// CPhysExplosion::Activate  (line 975, @0x00000000022f1080, libserver.so)
// calls: CBaseEntity::Activate, CPhysExplosion::Explode, UTIL_Remove
void __fastcall CPhysExplosion::Activate(CPhysExplosion *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( this->m_bExplodeOnSpawn )
  {
    CPhysExplosion::Explode(this, this, this);
    UTIL_Remove(this);
  }
}


// CPhysExplosion::GetRadius  (line 987, @0x00000000022de890, libserver.so)
float __fastcall CPhysExplosion::GetRadius(CPhysExplosion *const this)
{
  float result; // xmm0_4

  result = this->m_radius;
  if ( result <= 0.0 )
    return 2.5 * this->m_damage;
  return result;
}


// CPhysExplosion::FindEntity  (line 1000, @0x00000000022de8d0, libserver.so)  // inlines: CUtlSymbolLarge, GetRadius, String, ToCStr, operator!=
// calls: CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityInSphere, CGameEntitySystem::FindEntityByName, CGameEntitySystem::FindEntityByClassnameWithin
// callers: CPhysExplosion::Explode
CBaseEntity *__fastcall CPhysExplosion::FindEntity(
        CPhysExplosion *const this,
        CBaseEntity *pEntity,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller)
{
  float v6; // xmm0_4
  const Vector *v7; // rax
  CBaseEntity *result; // rax
  float m_radius; // xmm0_4
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rdx
  float flRadiusa; // [rsp+Ch] [rbp-34h]
  float flRadius; // [rsp+Ch] [rbp-34h]
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_targetEntityName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_targetEntityName.u.m_Id;
    result = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, pEntity, &iszName, this, pActivator, pCaller, 0);
    if ( result == 0 )
    {
      m_radius = this->m_radius;
      if ( m_radius <= 0.0 )
        m_radius = 2.5 * this->m_damage;
      flRadius = m_radius;
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      m_pAsString = "";
      if ( this->m_targetEntityName.u.m_Id != 0 )
        m_pAsString = this->m_targetEntityName.u.m_pAsString;
      return CGameEntitySystem::FindEntityByClassnameWithin(
               g_pGameEntitySystem,
               pEntity,
               m_pAsString,
               AbsOrigin,
               flRadius);
    }
  }
  else
  {
    v6 = this->m_radius;
    if ( v6 <= 0.0 )
      v6 = 2.5 * this->m_damage;
    flRadiusa = v6;
    v7 = CBaseEntity::GetAbsOrigin(this);
    return CGameEntitySystem::FindEntityInSphere(g_pGameEntitySystem, pEntity, v7, flRadiusa);
  }
  return result;
}


// CPhysExplosion::InputExplode  (line 1022, @0x00000000022f10d0, libserver.so)
// calls: CPhysExplosion::Explode
void __fastcall CPhysExplosion::InputExplode(CPhysExplosion *const this, inputdata_t *const inputdata)
{
  CPhysExplosion::Explode(this, inputdata->pActivator, inputdata->pCaller);
}


// CPhysExplosion::Explode  (line 1031, @0x00000000022f0530, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, FastSqrt, GetFlags, GetFloat, HasSpawnFlags, Init, Length, LengthSqr, NetworkStateChanged, Ray_t, RemapValClamped, RnCollisionAttr_t, ScaleDamageForce, Set, SetBaseVelocity, SnapEyeAngles, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator!=, operator*, operator*=, operator+, operator-, operator=
// calls: CEntitySystem::SuppressAutoDeletionExecution, CPhysExplosion::FindEntity, CBaseEntity::GetDamageOptions, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetAbsOrigin, CTakeDamageInfo::CTakeDamageInfo, CalculateExplosiveDamageForce, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::TakeDamage, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay (21 total)
// callers: CPhysExplosion::Activate, CPhysExplosion::InputExplode
// local variable allocation has failed, the output may be wrong!
void __fastcall CPhysExplosion::Explode(CPhysExplosion *const this, CBaseEntity *pActivator, CBaseEntity *pCaller)
{
  CBaseEntity *v5; // rbx
  CBaseEntity *Entity; // rax
  double v7; // xmm0_8
  float z; // xmm1_4
  unsigned int m_Value; // eax
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float m_radius; // xmm1_4
  float v15; // xmm2_4
  float m_flPushScale; // xmm0_4
  unsigned int v17; // eax
  double v18; // xmm0_8
  bool v19; // zf
  vec_t v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  double v25; // xmm0_8
  float v26; // xmm1_4
  float m_flInnerRadius; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t v29; // xmm1_4
  vec_t v30; // xmm0_4
  const Vector *v31; // r14
  const Vector *v32; // rsi
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  double v37; // xmm3_8
  double v38; // xmm5_8
  float v39; // xmm1_4
  double v40; // xmm2_8
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  double v43; // xmm4_8
  unsigned int v44; // eax
  float v45; // xmm7_4
  double v46; // xmm1_8
  double v47; // xmm0_8
  double v48; // xmm6_8
  const Vector *v49; // rax
  double v50; // xmm7_8
  float v51; // xmm0_4
  int v52; // eax
  CBasePlayer *v53; // r14
  const QAngle *LocalAngles; // rax
  vec_t v55; // xmm1_4
  vec_t v56; // xmm0_4
  vec_t v57; // xmm2_4
  float v58; // [rsp+Ch] [rbp-1E4h]
  double v59; // [rsp+10h] [rbp-1E0h]
  float v60; // [rsp+14h] [rbp-1DCh]
  float v61; // [rsp+18h] [rbp-1D8h]
  float v62; // [rsp+18h] [rbp-1D8h]
  float v63; // [rsp+18h] [rbp-1D8h]
  float v64; // [rsp+18h] [rbp-1D8h]
  float v65; // [rsp+18h] [rbp-1D8h]
  float vecPushb; // [rsp+1Ch] [rbp-1D4h]
  double vecPush; // [rsp+1Ch] [rbp-1D4h]
  float vecPushd; // [rsp+1Ch] [rbp-1D4h]
  float vecPushc; // [rsp+1Ch] [rbp-1D4h]
  float vecPusha; // [rsp+1Ch] [rbp-1D4h]
  float flFalloffb; // [rsp+20h] [rbp-1D0h]
  float flFalloffd; // [rsp+20h] [rbp-1D0h]
  float flFalloffc; // [rsp+20h] [rbp-1D0h]
  double (__fastcall *flFalloffe)(CBaseEntity *, const Vector *, _QWORD); // [rsp+20h] [rbp-1D0h]
  float flFalloff; // [rsp+20h] [rbp-1D0h]
  float flFalloffa; // [rsp+20h] [rbp-1D0h]
  float vecSpot; // [rsp+28h] [rbp-1C8h]
  float vecSpota; // [rsp+28h] [rbp-1C8h]
  Vector vecOrigin; // [rsp+40h] [rbp-1B0h] BYREF
  Vector vecStartPos; // [rsp+50h] [rbp-1A0h] BYREF
  Vector vecEndPos; // [rsp+60h] [rbp-190h]
  double v83; // [rsp+70h] [rbp-180h]
  float v84; // [rsp+78h] [rbp-178h]
  __int128 vecPushDir; // [rsp+80h] [rbp-170h] OVERLAPPED BYREF
  Vector origin; // [rsp+C0h] [rbp-130h] BYREF
  int v87; // [rsp+CCh] [rbp-124h]
  float v88; // [rsp+D0h] [rbp-120h]
  float v89; // [rsp+D4h] [rbp-11Ch]
  float v90; // [rsp+D8h] [rbp-118h]
  int v91; // [rsp+DCh] [rbp-114h]
  int v92; // [rsp+E0h] [rbp-110h]
  int v93; // [rsp+E4h] [rbp-10Ch]
  int v94; // [rsp+E8h] [rbp-108h]
  int v95; // [rsp+ECh] [rbp-104h]
  int v96; // [rsp+F0h] [rbp-100h]
  int v97; // [rsp+F4h] [rbp-FCh]
  int v98; // [rsp+F8h] [rbp-F8h]
  int v99; // [rsp+FCh] [rbp-F4h]
  int v100; // [rsp+100h] [rbp-F0h]
  char v101; // [rsp+104h] [rbp-ECh]
  bool v102; // [rsp+105h] [rbp-EBh]
  Vector vecDirToTarget; // [rsp+110h] [rbp-E0h] BYREF
  float v104; // [rsp+11Ch] [rbp-D4h]
  float v105; // [rsp+120h] [rbp-D0h]
  float v106; // [rsp+13Ch] [rbp-B4h]
  CBaseEntity *v107; // [rsp+158h] [rbp-98h]
  __int64 v108; // [rsp+178h] [rbp-78h]
  __int64 v109; // [rsp+180h] [rbp-70h]
  __int64 v110; // [rsp+188h] [rbp-68h]
  int v111; // [rsp+190h] [rbp-60h]
  __int16 v112; // [rsp+194h] [rbp-5Ch]
  char v113; // [rsp+196h] [rbp-5Ah]
  char v114; // [rsp+197h] [rbp-59h]

  v5 = 0;
  CEntitySystem::SuppressAutoDeletionExecution(g_pGameEntitySystem, 1);
  while ( 1 )
  {
    Entity = CPhysExplosion::FindEntity(this, v5, pActivator, pCaller);
    v5 = Entity;
    if ( Entity == 0 )
      break;
    if ( CBaseEntity::GetDamageOptions(Entity) != DamageOptions_t::DAMAGE_NO
      && (v5->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS || CBaseEntity::VPhysicsGetObject(v5) != 0) )
    {
      vecOrigin = *CBaseEntity::GetAbsOrigin(this);
      v7 = (*(v5->_vptr_IHandleEntity + 169))(v5, &vecOrigin, 1);
      m_Value = this->m_spawnflags.m_Value;
      *&vecDirToTarget.x = v7;
      v10 = z;
      vecDirToTarget.z = z;
      v11 = *&v7;
      v12 = *(&v7 + 1);
      if ( (m_Value & 4) != 0 )
        vecOrigin.z = z;
      else
        z = vecOrigin.z;
      v13 = (((vecOrigin.x - *&v7) * (vecOrigin.x - *&v7)) + ((vecOrigin.y - *(&v7 + 1)) * (vecOrigin.y - *(&v7 + 1))))
          + ((z - v10) * (z - v10));
      m_radius = this->m_radius;
      *&v7 = fsqrt(v13);
      v15 = *&v7;
      if ( m_radius == 0.0 || m_radius >= *&v7 )
      {
        if ( (m_Value & 8) == 0 )
          goto LABEL_11;
        v62 = v10;
        vecPush = v7;
        vecSpot = v11;
        vecStartPos = *CBaseEntity::GetAbsOrigin(this);
        v18 = (*(v5->_vptr_IHandleEntity + 169))(v5, &vecStartPos, 0);
        v19 = this->m_flInnerRadius == 0.0;
        vecEndPos.z = v20;
        v21 = vecSpot;
        *&vecEndPos.x = v18;
        v22 = *(&vecPush + 1);
        v23 = *&vecPush;
        v24 = v62;
        if ( !v19 )
        {
          v58 = v62;
          v59 = vecPush;
          v64 = vecSpot;
          vecDirToTarget.y = vecEndPos.y - vecStartPos.y;
          vecDirToTarget.x = vecEndPos.x - vecStartPos.x;
          vecDirToTarget.z = vecEndPos.z - vecStartPos.z;
          VectorNormalize(&vecDirToTarget);
          m_flInnerRadius = this->m_flInnerRadius;
          vecPushc = vecDirToTarget.x * m_flInnerRadius;
          flFalloffc = vecDirToTarget.y * m_flInnerRadius;
          vecSpota = m_flInnerRadius * vecDirToTarget.z;
          AbsOrigin = CBaseEntity::GetAbsOrigin(this);
          v29 = vecPushc + AbsOrigin->x;
          v30 = vecSpota + AbsOrigin->z;
          vecStartPos.y = flFalloffc + AbsOrigin->y;
          v24 = v58;
          vecStartPos.x = v29;
          v23 = *&v59;
          vecStartPos.z = v30;
          v22 = *(&v59 + 1);
          v21 = v64;
        }
        v60 = v24;
        v63 = v23;
        vecPushd = v22;
        flFalloffd = v21;
        v112 = 0;
        v108 = 0;
        v109 = 0;
        v110 = 0;
        v113 = 0;
        v114 = 7;
        v111 = 0;
        CGameTrace::Init(&vecDirToTarget);
        v25 = (*(v5->_vptr_IHandleEntity + 169))(v5, &vecStartPos, 0);
        v83 = v25;
        v84 = v26;
        *&v25 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        v89 = *(&v25 + 1) - vecStartPos.y;
        v101 = 1;
        v100 = LODWORD(v25);
        v90 = v26 - vecStartPos.z;
        origin = vecStartPos;
        v88 = *&v83 - vecStartPos.x;
        v87 = 0;
        v91 = 0;
        v95 = 0;
        v99 = 0;
        v98 = 0;
        v97 = 0;
        v96 = 0;
        v94 = 0;
        v93 = 0;
        v92 = 0;
        v102 = (((v88 * v88) + (v89 * v89)) + (v90 * v90)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&vecPushDir, this, 4, 0);
        *(&vecPushDir + 1) |= 0x7001uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &origin, &vecPushDir, &vecDirToTarget);
        v11 = flFalloffd;
        v12 = vecPushd;
        v15 = v63;
        v10 = v60;
        if ( v106 >= 1.0 || v5 == v107 )
        {
LABEL_11:
          v61 = v10;
          vecPushb = v12;
          flFalloffb = v11;
          CTakeDamageInfo::CTakeDamageInfo(
            &vecDirToTarget,
            this,
            this,
            fmaxf(1.0, this->m_damage - (v15 * 0.40000001)),
            64,
            0);
          origin.y = vecPushb - vecOrigin.y;
          origin.z = v61 - vecOrigin.z;
          origin.x = flFalloffb - vecOrigin.x;
          CalculateExplosiveDamageForce(&vecDirToTarget, &origin, &vecOrigin, 1.0);
          m_flPushScale = this->m_flPushScale;
          v17 = this->m_spawnflags.m_Value;
          vecDirToTarget.z = vecDirToTarget.z * m_flPushScale;
          v104 = v104 * m_flPushScale;
          v105 = m_flPushScale * v105;
          if ( (v17 & 2) == 0 )
            goto LABEL_12;
          if ( (*(v5->_vptr_IHandleEntity + 140))(v5) == 0 )
          {
            v17 = this->m_spawnflags.m_Value;
LABEL_12:
            if ( (v17 & 1) != 0 )
              (*(v5->_vptr_IHandleEntity + 55))(v5, &vecDirToTarget);
            else
              CBaseEntity::TakeDamage(v5, &vecDirToTarget);
            goto LABEL_14;
          }
          v31 = CBaseEntity::GetAbsOrigin(this);
          flFalloffe = *(v5->_vptr_IHandleEntity + 169);
          v32 = CBaseEntity::GetAbsOrigin(this);
          *&origin.x = flFalloffe(v5, v32, 0);
          origin.z = v33;
          v34 = v33 - v31->z;
          v35 = origin.x - v31->x;
          *(&vecPushDir + 1) = origin.y - v31->y;
          *(&vecPushDir + 2) = v34;
          *&vecPushDir = v35;
          v36 = VectorNormalize(&vecPushDir);
          v39 = this->m_radius;
          HIDWORD(v40) = 0;
          *&v40 = 0.75 * v39;
          if ( v39 == (0.75 * v39) )
          {
            v41.m128_f32[0] = v36 - *&v40;
            v42 = _mm_cmple_ss(0LL, v41);
            LODWORD(flFalloff) = _mm_andnot_ps(v42, 0LL).m128_u32[0] | v42.m128_i32[0] & 0x3F800000;
          }
          else
          {
            flFalloff = 0.0;
            *&v40 = *&v40 - v39;
            v51 = (v36 - v39) / *&v40;
            if ( v51 >= 0.0 )
            {
              *&v38 = 1065353216;
              flFalloff = 1.0;
              if ( v51 <= 1.0 )
                flFalloff = v51 + 0.0;
            }
          }
          if ( (this->m_spawnflags.m_Value & 0x10) != 0 )
          {
            origin.x = (*(*random_valve + 16LL))(random_valve, 4294967266LL, 30);
            v52 = (*(*random_valve + 16LL))(random_valve, 4294967266LL, 30);
            origin.z = 0.0;
            origin.y = v52;
            v53 = ToBasePlayer(v5);
            LocalAngles = CBaseEntity::GetLocalAngles(this);
            v55 = LocalAngles->y + origin.y;
            v56 = LocalAngles->z + origin.z;
            v57 = LocalAngles->x + origin.x;
            v53->m_FixAngle.fixangle = 1;
            v53->m_pl.v_angle.y = v55;
            v53->m_pl.v_angle.z = v56;
            v53->m_pl.v_angle.x = v57;
            CBaseEntity::ViewPunch(v5, &origin);
          }
          *&v46 = LODWORD(this->m_damage);
          *&v43 = LODWORD(flFalloff);
          v44 = v5->m_fFlags.m_Value;
          *&v47 = LODWORD(this->m_flPushScale);
          vecPusha = (((*&vecPushDir * *&v46) * flFalloff) + ((*&vecPushDir * *&v46) * flFalloff)) * *&v47;
          v45 = *(&vecPushDir + 1) * *&v46;
          *&v46 = *&v46 * *(&vecPushDir + 2);
          v65 = ((v45 * flFalloff) + (v45 * flFalloff)) * *&v47;
          *&v47 = *&v47 * ((flFalloff * *&v46) + (flFalloff * *&v46));
          flFalloffa = *&v47;
          if ( (v44 & 0x800000) != 0 )
          {
            *&v38 = LODWORD(v65);
            *&v38 = v65 + v5->m_vecBaseVelocity.m_Value.y;
            vecPusha = vecPusha + v5->m_vecBaseVelocity.m_Value.x;
            v65 = *&v38;
            flFalloffa = v5->m_vecBaseVelocity.m_Value.z + *&v47;
          }
          v48 = 0.0;
          if ( flFalloffa > 0.0 && (v44 & 1) != 0 )
          {
            CBaseEntity::SetGroundEntity(v5, 0);
            v49 = CBaseEntity::GetAbsOrigin(v5);
            *&origin.x = *&v49->x;
            origin.z = v49->z + 1.0;
            CBaseEntity::SetAbsOrigin(v5, &origin);
          }
          *&v50 = LODWORD(vecPusha);
          if ( vecPusha != v5->m_vecBaseVelocity.m_Value.x
            || (*&v48 = LODWORD(v65), v65 != v5->m_vecBaseVelocity.m_Value.y)
            || (*&v50 = LODWORD(flFalloffa), flFalloffa != v5->m_vecBaseVelocity.m_Value.z) )
          {
            (*(v5->_vptr_IHandleEntity + 22))(
              v5,
              512,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              v47,
              v46,
              v40,
              v37,
              v43,
              v38,
              v48,
              v50);
            v5->m_vecBaseVelocity.m_Value.x = vecPusha;
            v5->m_vecBaseVelocity.m_Value.y = v65;
            v5->m_vecBaseVelocity.m_Value.z = flFalloffa;
          }
          CBaseEntity::AddFlag(v5, 0x800000);
          CEntityIOOutput::FireOutput(&this->m_OnPushedPlayer, this, this);
LABEL_14:
          CTakeDamageInfo::~CTakeDamageInfo(&vecDirToTarget);
        }
      }
    }
  }
  CEntitySystem::SuppressAutoDeletionExecution(g_pGameEntitySystem, 0);
}


// CPhysExplosion::DrawDebugTextOverlays  (line 1170, @0x00000000022b8940, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    magnitude: %f", "    limit to: %s"
int __fastcall CPhysExplosion::DrawDebugTextOverlays(
        CPhysExplosion *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r12
  int v6; // r13d
  int v8; // r14d
  const char *m_pAsString; // rcx
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v11; // [rsp+218h] [rbp-28h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v11 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x800) != 0 )
  {
    V_snprintf(tempstr, 512, "    magnitude: %f", this->m_damage);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    v8 = v6 + 1;
    m_pAsString = "";
    if ( this->m_targetEntityName.u.m_Id != 0 )
      m_pAsString = this->m_targetEntityName.u.m_pAsString;
    v6 += 2;
    V_snprintf(tempstr, 512, "    limit to: %s", m_pAsString);
    CBaseEntity::EntityText(this, v8, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPhysImpact::GetDataDescMap  (line 1202, @0x00000000022b7c60, libserver.so)
// globals: CPhysImpact::m_DataMap
datamap_t *__fastcall CPhysImpact::GetDataDescMap(CPhysImpact *const this)
{
  return &CPhysImpact::m_DataMap;
}


// CPhysImpact::AddDatadescMetadataKeys  (line 1202, @0x00000000022de9f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysImpact::GetEntityClass(void)
void __fastcall CPhysImpact::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysImpact::GetEntityClass);
}


// CPhysImpact::GetBaseMap  (line 1202, @0x00000000022dea10, libserver.so)
datamap_t *__cdecl CPhysImpact::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPhysImpact>  (line 1202, @0x00000000022f3400, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysImpact"
// globals: `guard variable for'DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder, `guard variable for'DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc, CPhysImpact::GetEntityClass(void), CPhysImpact::m_DataMap, DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysImpact>(CPhysImpact *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_pszBase = "CPhysImpact";
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder,
      &_dso_handle);
  }
  CPhysImpact::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v2, DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_pszBase), "PointAtEntity");
    m_Size = DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size == DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPhysImpact>(CPhysImpact *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc[4].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc);
  }
  CPhysImpact::m_DataMap.dataNumFields = 5;
  CPhysImpact::m_DataMap.dataDesc = &DataMapInit<CPhysImpact>(CPhysImpact *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysImpact::m_DataMap, CPhysImpact::GetEntityClass);
  return &CPhysImpact::m_DataMap;
}


// CPhysImpact::Activate  (line 1219, @0x00000000022b8ef0, libserver.so)
// calls: CBaseEntity::Activate
void __fastcall CPhysImpact::Activate(CPhysImpact *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
}


// CPhysImpact::Spawn  (line 1227, @0x00000000022b9fd0, libserver.so)
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CPhysImpact::Spawn(CPhysImpact *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( this->m_distance == 0.0 )
    this->m_distance = 256.0;
}


// CPhysImpact::PointAtEntity  (line 1243, @0x00000000022ba930, libserver.so)  // inlines: CUtlSymbolLarge, operator==
// calls: UTIL_PointAtNamedEntity
void __fastcall CPhysImpact::PointAtEntity(CPhysImpact *const this)
{
  __int64 v1; // rbp
  UtlSymLargeId_t m_Id; // rax
  _QWORD v3[3]; // [rsp-18h] [rbp-18h] BYREF

  m_Id = this->m_directionEntityName.u.m_Id;
  if ( m_Id != 0 )
  {
    v3[2] = v1;
    v3[0] = m_Id;
    UTIL_PointAtNamedEntity(this, v3);
  }
}


// CPhysImpact::InputImpact  (line 1259, @0x00000000022bfef0, libserver.so)  // inlines: CGameTrace, CUtlSymbolLarge, EnableInteractsWith, GetBool, GetEHandle, GetEntryIndex, GetFloat, GetInt, GetSerialNumber, HasSpawnFlags, Init, LengthSqr, PointAtEntity, Ray_t, RnCollisionAttr_t, Set, SetAttacker, SetDamage, SetDamageForce, SetDamageType, SetInflictor, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator!=, operator*, operator+, operator-, operator=
// calls: CGameTrace::Init, UTIL_PointAtNamedEntity, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CBaseEntity::VPhysicsGetObject, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::DispatchTraceAttack, ApplyMultiDamage, CTakeDamageInfo::~CTakeDamageInfo (15 total)
void __fastcall CPhysImpact::InputImpact(CPhysImpact *const this, inputdata_t *const inputdata)
{
  const QAngle *AbsAngles; // rax
  float m_distance; // xmm1_4
  float m_fValue; // xmm7_4
  IPhysicsObject *Object; // r15
  CEntityIdentity *m_pEntity; // rax
  __int16 v8; // si
  int v9; // edx
  int v10; // edx
  __int16 v11; // cx
  unsigned int m_Value; // eax
  float x; // xmm3_4
  float y; // xmm2_4
  float z; // xmm0_4
  void (__fastcall *v16)(IPhysicsObject *, CTraceFilterSimple *, Vector *); // rax
  float v17; // xmm1_4
  float damageb; // [rsp+8h] [rbp-1D8h]
  CBaseEntity *damage; // [rsp+8h] [rbp-1D8h]
  float damagea; // [rsp+8h] [rbp-1D8h]
  Vector dir; // [rsp+10h] [rbp-1D0h] BYREF
  Vector start; // [rsp+20h] [rbp-1C0h] BYREF
  CTraceFilterSimple v23; // [rsp+30h] [rbp-1B0h] BYREF
  CTakeDamageInfo info; // [rsp+70h] [rbp-170h] BYREF
  trace_t trace; // [rsp+100h] [rbp-E0h] BYREF

  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  if ( this->m_directionEntityName.u.m_Id != 0 )
  {
    info._vptr_CTakeDamageInfo = this->m_directionEntityName.u.m_Id;
    UTIL_PointAtNamedEntity(this, &info);
  }
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &dir, 0, 0);
  m_distance = 56755.84;
  if ( (this->m_spawnflags.m_Value & 2) == 0 )
    m_distance = this->m_distance;
  damageb = m_distance;
  start = *CBaseEntity::GetAbsOrigin(this);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  info.m_vecDamageForce.z = ((dir.x * damageb) + start.x) - start.x;
  info.m_vecDamagePosition.x = ((dir.y * damageb) + start.y) - start.y;
  info.m_vecDamagePosition.y = ((damageb * dir.z) + start.z) - start.z;
  info.m_vecDamageForce.y = 0.0;
  memset(&info.m_vecDamagePosition.z, 0, 36);
  *&info.m_hWeapon.m_Index = m_fValue;
  *&info._vptr_CTakeDamageInfo = start;
  BYTE1(info.m_flDamage) = (((info.m_vecDamageForce.z * info.m_vecDamageForce.z)
                           + (info.m_vecDamagePosition.x * info.m_vecDamagePosition.x))
                          + (info.m_vecDamagePosition.y * info.m_vecDamagePosition.y)) != 0.0;
  LOBYTE(info.m_flDamage) = 1;
  CTraceFilterSimple::CTraceFilterSimple(&v23, this, 4, 0);
  v23.m_attr.m_nInteractsWith |= 0x185003uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &info, &v23, &trace);
  if ( debug_physimpact.m_pParent->m_Value.m_nValue != 0 )
  {
    NDebugOverlay::Cross3D(&start, 24.0, 0xFFu, 0xFFu, 0xFFu, 0, 30.0);
    NDebugOverlay::Line(&trace.startpos, &trace.endpos, 0, 0xFFu, 0, 0, 30.0);
  }
  if ( trace.fraction != 1.0 )
  {
    if ( trace.startsolid )
    {
      trace.plane.normal.z = -dir.z;
      trace.plane.normal.y = -dir.y;
      trace.plane.normal.x = -dir.x;
    }
    damage = trace.m_pEnt;
    Object = CBaseEntity::VPhysicsGetObject(trace.m_pEnt);
    if ( Object != 0 && damage != 0 )
    {
      CTakeDamageInfo::CTakeDamageInfo(&info);
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v8 = 0x7FFF;
        v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.m_hAttacker.m_Index) = v8 | info.m_hAttacker.m_Index & 0x8000;
        info.m_hAttacker.m_Index = (v9 << 15) | info.m_hAttacker.m_Index & 0x7FFF;
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.m_hInflictor.m_Index) = v11 | info.m_hInflictor.m_Index & 0x8000;
        info.m_hInflictor.m_Index = (v10 << 15) | info.m_hInflictor.m_Index & 0x7FFF;
      }
      else
      {
        info.m_hAttacker.m_Index = -1;
        info.m_hInflictor.m_Index = -1;
      }
      info.m_flDamage = 0.0;
      info.m_bitsDamageType = 0;
      info.m_vecDamageForce = vec3_origin;
      CBaseEntity::DispatchTraceAttack(damage, &info, &dir, &trace);
      ApplyMultiDamage();
      m_Value = this->m_spawnflags.m_Value;
      if ( (m_Value & 3) != 0 )
        damagea = this->m_damage;
      else
        damagea = (1.0 - trace.fraction) * this->m_damage;
      if ( (m_Value & 4) != 0 )
        damagea = (*(*Object + 208LL))(Object) * damagea;
      if ( debug_physimpact.m_pParent->m_Value.m_nValue != 0 )
      {
        *(&v23._vptr_CTraceFilter + 1) = (trace.plane.normal.y * -128.0) + trace.endpos.y;
        *&v23.m_attr.m_nInteractsWith = (trace.plane.normal.z * -128.0) + trace.endpos.z;
        *&v23._vptr_CTraceFilter = (-128.0 * trace.plane.normal.x) + trace.endpos.x;
        NDebugOverlay::Line(&trace.endpos, &v23, 0xFFu, 0, 0, 0, 30.0);
      }
      if ( (this->m_spawnflags.m_Value & 8) != 0 )
      {
        x = dir.x;
        y = dir.y;
        z = dir.z;
      }
      else
      {
        z = -trace.plane.normal.z;
        dir.z = -trace.plane.normal.z;
        y = -trace.plane.normal.y;
        dir.y = -trace.plane.normal.y;
        x = -trace.plane.normal.x;
        dir.x = -trace.plane.normal.x;
      }
      v16 = *(*Object + 1784LL);
      v17 = phys_pushscale.m_pParent->m_Value.m_fValue;
      *&v23._vptr_CTraceFilter = (x * damagea) * v17;
      *(&v23._vptr_CTraceFilter + 1) = (y * damagea) * v17;
      *&v23.m_attr.m_nInteractsWith = (z * damagea) * v17;
      v16(Object, &v23, &trace.endpos);
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
  }
}


// CSimplePhysicsBrush::~CSimplePhysicsBrush  (line 1335, @0x00000000023070f0, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CSimplePhysicsBrush::~CSimplePhysicsBrush(CSimplePhysicsBrush *const this)
{
  this->_vptr_IHandleEntity = &off_4083A50;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSimplePhysicsBrush::~CSimplePhysicsBrush  (line 1335, @0x0000000002307110, libserver.so)  // inlines: ~CSimplePhysicsBrush
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSimplePhysicsBrush::~CSimplePhysicsBrush(CSimplePhysicsBrush *const this)
{
  this->_vptr_IHandleEntity = &off_4083A50;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSimplePhysicsBrush::Schema_DynamicBinding  (line 1337, @0x00000000023043c0, libserver.so)
// globals: CSimplePhysicsBrush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimplePhysicsBrush::Schema_DynamicBinding(
        const CSimplePhysicsBrush *const this)
{
  return CSimplePhysicsBrush::s_pSchemaBinding;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1337, @0x00000000023043d0, libserver.so)
// globals: CSimplePhysicsBrush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  return CSimplePhysicsBrush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::DestructInstance  (line 1337, @0x00000000023043e0, libserver.so)  // inlines: Destruct<CSimplePhysicsBrush>
void __fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::DestructInstance(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::FreeInstance  (line 1337, @0x0000000002304400, libserver.so)
void __fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::FreeInstance(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::CanAllocate  (line 1337, @0x0000000002304420, libserver.so)
bool __fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::CanAllocate(
        const CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1337, @0x0000000002304430, libserver.so)
// globals: CSimplePhysicsBrush::s_pSchemaBinding
const ISchemaBinding *__fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  return CSimplePhysicsBrush::s_pSchemaBinding;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::AllocateInstance  (line 1337, @0x0000000002305e00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::AllocateInstance(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::ConstructInstance  (line 1337, @0x0000000002306480, libserver.so)  // inlines: CSimplePhysicsBrush, Construct<CSimplePhysicsBrush>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::ConstructInstance(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_4083A50;
  }
  return p;
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1337, @0x00000000023093a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1337, @0x00000000023093c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimplePhysicsBrush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSimplePhysicsBrush::GetEntityClassInternal  (line 1337, @0x0000000002314820, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "simple_physics_brush", "CSimplePhysicsBrush"
// globals: `guard variable for'CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass, CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo, CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo
CEntityClass *__cdecl CSimplePhysicsBrush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass) != 0 )
  {
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_designerName.u.m_Id = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass._vptr_CEntityClass = off_3F79390;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_ComponentOffsets.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_AllHelpers.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classInputs.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classOutputs.m_Size = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_requiredEHandle.m_Index = -1;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_hNetworkSerializer = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pBaseClassInfo = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pClassInfo = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_flags = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_nAllHelpersFlags = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pScriptClassDesc = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pInputs = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_nInputCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pOutputs = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_nOutputCount = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pGameClass = 0;
    CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass._vptr_CEntityClass = off_40839D0;
    __cxa_guard_release(&`guard variable for'CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass);
    __cxa_atexit(
      CSimplePhysicsBrush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass,
      &_dso_handle);
  }
  if ( g_pEntityCSimplePhysicsBrushClass != 0 )
    return &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass;
  if ( `guard variable for'CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo,
      "CSimplePhysicsBrush",
      "simple_physics_brush",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo);
  }
  CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pClassInfo = &CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo;
  CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pBaseClassInfo = CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo.m_pBaseClassInfo;
  g_pEntityCSimplePhysicsBrushClass = &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass;
  CSimplePhysicsBrush::GetEntityClassInfo(void)::g_EntityCSimplePhysicsBrushClassInfo.m_pClass = &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass;
  CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCSimplePhysicsBrushClass->m_pComponentOverrides = 0;
  return &CSimplePhysicsBrush::GetEntityClassInternal(void)::g_EntityCSimplePhysicsBrushClass;
}


// CSimplePhysicsBrush::Spawn  (line 1339, @0x00000000023073e0, libserver.so)  // inlines: SetSolid
// calls: CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions
void __fastcall CSimplePhysicsBrush::Spawn(CSimplePhysicsBrush *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
}


// CSimplePhysicsProp::~CSimplePhysicsProp  (line 1348, @0x0000000002307060, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CSimplePhysicsProp::~CSimplePhysicsProp(CSimplePhysicsProp *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CSimplePhysicsProp::~CSimplePhysicsProp  (line 1348, @0x0000000002308430, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CSimplePhysicsProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CSimplePhysicsProp::~CSimplePhysicsProp(CSimplePhysicsProp *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CSimplePhysicsProp::Schema_DynamicBinding  (line 1350, @0x0000000002304440, libserver.so)
// globals: CSimplePhysicsProp::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimplePhysicsProp::Schema_DynamicBinding(
        const CSimplePhysicsProp *const this)
{
  return CSimplePhysicsProp::s_pSchemaBinding;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1350, @0x0000000002304450, libserver.so)
// globals: CSimplePhysicsProp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  return CSimplePhysicsProp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::DestructInstance  (line 1350, @0x0000000002304460, libserver.so)  // inlines: Destruct<CSimplePhysicsProp>
void __fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::DestructInstance(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::FreeInstance  (line 1350, @0x0000000002304480, libserver.so)
void __fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::FreeInstance(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::CanAllocate  (line 1350, @0x00000000023044a0, libserver.so)
bool __fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::CanAllocate(
        const CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1350, @0x00000000023044b0, libserver.so)
// globals: CSimplePhysicsProp::s_pSchemaBinding
const ISchemaBinding *__fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  return CSimplePhysicsProp::s_pSchemaBinding;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::AllocateInstance  (line 1350, @0x0000000002305e40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::AllocateInstance(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::ConstructInstance  (line 1350, @0x0000000002306fc0, libserver.so)  // inlines: CBaseProp, CSimplePhysicsProp, Construct<CSimplePhysicsProp>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::ConstructInstance(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_4084190;
  }
  return p;
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1350, @0x0000000002309300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1350, @0x0000000002309320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CSimplePhysicsProp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CSimplePhysicsProp::GetEntityClassInternal  (line 1350, @0x0000000002313070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "simple_physics_prop", "CSimplePhysicsProp", "CBaseProp"
// globals: `guard variable for'CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass, CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo, CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo, `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo (9 total)
CEntityClass *__cdecl CSimplePhysicsProp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass == 0
    && __cxa_guard_acquire(&`guard variable for'CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass) != 0 )
  {
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_designerName.u.m_Id = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass._vptr_CEntityClass = off_3F79390;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_ComponentOffsets.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_AllHelpers.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_atomicFields,
      4);
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classInputs.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classInputs.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classOutputs.m_Size = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_requiredEHandle.m_Index = -1;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_hNetworkSerializer = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pBaseClassInfo = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pClassInfo = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_flags = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_nAllHelpersFlags = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pScriptClassDesc = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pInputs = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_nInputCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pOutputs = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_nOutputCount = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pGameClass = 0;
    CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass._vptr_CEntityClass = off_4084110;
    __cxa_guard_release(&`guard variable for'CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass);
    __cxa_atexit(
      CSimplePhysicsProp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass,
      &_dso_handle);
  }
  if ( g_pEntityCSimplePhysicsPropClass != 0 )
    return &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass;
  if ( `guard variable for'CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
        "CBaseProp",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo,
      "CSimplePhysicsProp",
      "simple_physics_prop",
      0,
      &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
    __cxa_guard_release(&`guard variable for'CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo);
  }
  CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pClassInfo = &CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo;
  CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pBaseClassInfo = CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo.m_pBaseClassInfo;
  g_pEntityCSimplePhysicsPropClass = &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass;
  CSimplePhysicsProp::GetEntityClassInfo(void)::g_EntityCSimplePhysicsPropClassInfo.m_pClass = &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass;
  CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCSimplePhysicsPropClass->m_pComponentOverrides = 0;
  return &CSimplePhysicsProp::GetEntityClassInternal(void)::g_EntityCSimplePhysicsPropClass;
}


// CSimplePhysicsProp::Spawn  (line 1353, @0x0000000002307540, libserver.so)  // inlines: SetSolid
// calls: CBaseProp::Spawn, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions
void __fastcall CSimplePhysicsProp::Spawn(CSimplePhysicsProp *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseProp::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 6);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
}


// CSimplePhysicsProp::ObjectCaps  (line 1361, @0x0000000002306470, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CSimplePhysicsProp::ObjectCaps(CSimplePhysicsProp *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x40000000;
}


// CSimplePhysicsProp::Use  (line 1373, @0x0000000002308a90, libserver.so)  // inlines: ToBasePlayer
void __fastcall CSimplePhysicsProp::Use(
        CSimplePhysicsProp *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator, value) != 0 )
    (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, 0);
}


// TransferPhysicsObject  (line 1385, @0x00000000022dea20, libserver.so)
bool __fastcall TransferPhysicsObject(CBaseEntity *pFrom, CBaseEntity *pTo, bool wakeUp)
{
  return 0;
}


// CPhysConvert::~CPhysConvert  (line 1453, @0x0000000002306ed0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysConvert::~CPhysConvert(CPhysConvert *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysConvert::~CPhysConvert  (line 1453, @0x0000000002306ef0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysConvert, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysConvert::~CPhysConvert(CPhysConvert *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysConvert::GetEntityClass  (line 1455, @0x00000000023044c0, libserver.so)
CEntityClass *__cdecl CPhysConvert::GetEntityClass()
{
  return g_pEntityCPhysConvertClass;
}


// CPhysConvert::Schema_DynamicBinding  (line 1455, @0x00000000023044d0, libserver.so)
// globals: CPhysConvert::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysConvert::Schema_DynamicBinding(const CPhysConvert *const this)
{
  return CPhysConvert::s_pSchemaBinding;
}


// CPhysConvert::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1455, @0x00000000023044e0, libserver.so)
// globals: CPhysConvert::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysConvert::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysConvert::CEntityInstanceEntityClass *const this)
{
  return CPhysConvert::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysConvert::CEntityInstanceEntityClass::DestructInstance  (line 1455, @0x00000000023044f0, libserver.so)  // inlines: Destruct<CPhysConvert>
void __fastcall CPhysConvert::CEntityInstanceEntityClass::DestructInstance(
        CPhysConvert::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysConvert::CEntityInstanceEntityClass::FreeInstance  (line 1455, @0x0000000002304510, libserver.so)
void __fastcall CPhysConvert::CEntityInstanceEntityClass::FreeInstance(
        CPhysConvert::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysConvert::CEntityInstanceEntityClass::CanAllocate  (line 1455, @0x0000000002304530, libserver.so)
bool __fastcall CPhysConvert::CEntityInstanceEntityClass::CanAllocate(
        const CPhysConvert::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysConvert::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1455, @0x0000000002304540, libserver.so)
// globals: CPhysConvert::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysConvert::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysConvert::CEntityInstanceEntityClass *const this)
{
  return CPhysConvert::s_pSchemaBinding;
}


// CPhysConvert::CEntityInstanceEntityClass::AllocateInstance  (line 1455, @0x0000000002305e80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysConvert::CEntityInstanceEntityClass::AllocateInstance(
        CPhysConvert::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPhysConvert::CEntityInstanceEntityClass::ConstructInstance  (line 1455, @0x00000000023062f0, libserver.so)  // inlines: CEntityIOOutput, CLogicalEntity, CPhysConvert, CServerOnlyEntity, CUtlSymbolLarge, Construct<CPhysConvert>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysConvert::CEntityInstanceEntityClass::ConstructInstance(
        CPhysConvert::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 100) = 0;
    *p = &off_4084A50;
    *(p + 97) = off_3F7C190;
    *(p + 202) = 0;
  }
  return p;
}


// CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1455, @0x0000000002308ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysConvert::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1455, @0x0000000002308ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysConvert::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysConvert::GetEntityClassInternal  (line 1455, @0x0000000002313750, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "phys_convert", "CPhysConvert"
// globals: `guard variable for'CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass, CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo, CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo
CEntityClass *__cdecl CPhysConvert::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass) != 0 )
  {
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_designerName.u.m_Id = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass._vptr_CEntityClass = off_3F79390;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_ComponentOffsets.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_AllHelpers.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classInputs.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classOutputs.m_Size = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_requiredEHandle.m_Index = -1;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_hNetworkSerializer = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pBaseClassInfo = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pClassInfo = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_flags = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_nAllHelpersFlags = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pScriptClassDesc = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pInputs = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_nInputCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pOutputs = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_nOutputCount = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pGameClass = 0;
    CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass._vptr_CEntityClass = off_40849D0;
    __cxa_guard_release(&`guard variable for'CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass);
    __cxa_atexit(
      CPhysConvert::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysConvertClass != 0 )
    return &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass;
  if ( `guard variable for'CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo,
      "CPhysConvert",
      "phys_convert",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo);
  }
  CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pClassInfo = &CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo;
  CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pBaseClassInfo = CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysConvertClass = &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass;
  CPhysConvert::GetEntityClassInfo(void)::g_EntityCPhysConvertClassInfo.m_pClass = &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass;
  CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysConvertClass->m_pComponentOverrides = 0;
  return &CPhysConvert::GetEntityClassInternal(void)::g_EntityCPhysConvertClass;
}


// CPhysConvert::GetDataDescMap  (line 1471, @0x00000000022b7c70, libserver.so)
// globals: CPhysConvert::m_DataMap
datamap_t *__fastcall CPhysConvert::GetDataDescMap(CPhysConvert *const this)
{
  return &CPhysConvert::m_DataMap;
}


// CPhysConvert::AddDatadescMetadataKeys  (line 1471, @0x00000000022dea30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysConvert::GetEntityClass(void)
void __fastcall CPhysConvert::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysConvert::GetEntityClass);
}


// CPhysConvert::GetBaseMap  (line 1471, @0x00000000022dea50, libserver.so)
datamap_t *__cdecl CPhysConvert::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPhysConvert>  (line 1471, @0x00000000022dea60, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysConvert"
// globals: `guard variable for'DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder, `guard variable for'DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc, CPhysConvert::GetEntityClass(void), CPhysConvert::m_DataMap, DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysConvert>(CPhysConvert *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_pszBase = "CPhysConvert";
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysConvert>(CPhysConvert *)::nameHolder,
      &_dso_handle);
  }
  CPhysConvert::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc) != 0 )
  {
    DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc);
  }
  CPhysConvert::m_DataMap.dataNumFields = 4;
  CPhysConvert::m_DataMap.dataDesc = &DataMapInit<CPhysConvert>(CPhysConvert *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysConvert::m_DataMap, CPhysConvert::GetEntityClass);
  return &CPhysConvert::m_DataMap;
}


// CPhysConvert::InputConvertTarget  (line 1489, @0x00000000022f56e0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddToTail, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CUtlSymbolLarge, CVProfScope, CopyData<QAngle>, CopyData<Vector>, CreateSimplePhysicsObject, Element, FindKeyHash, Free, Get, GetClassInfo, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityClass, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, GetSerialNumber, HasSpawnFlags, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetEntityName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, String, ToCStr, operator CEntityInstance*, operator CSimplePhysicsProp*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope
// calls: CEntityIOOutput::FireOutput, CGameEntitySystem::FindEntityByName, Msg, CBaseEntity::SetParent, CBaseEntity::GetModelName, CBaseModelEntity::SetModel, CBaseEntity::GetModel, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin (38 total)
// strings: "ERROR phys_convert %s ! Already MOVETYPE_VPHYSICS\n", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall CPhysConvert::InputConvertTarget(CPhysConvert *const this, inputdata_t *const inputdata)
{
  __int64 v4; // r12
  CBaseEntity *pCaller; // r9
  CBaseEntity *pActivator; // r8
  CBaseEntity *EntityByName; // rax
  int v8; // r14d
  CBaseEntity *v9; // r9
  CBaseEntity *v10; // r8
  __int64 v11; // r13
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // rsi
  CBaseModelEntity *v14; // r12
  char *v15; // rsi
  CUtlScratchMemoryPool *v16; // rax
  CEntitySystem *v17; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v19; // rax
  char v20; // al
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *v22; // rbx
  _DWORD *p_x; // r14
  const char *v24; // rdx
  CEntityKeyValues *v25; // rdi
  int m_enabled; // r10d
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t v28; // ebx
  const char *v29; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v31; // r14
  CEntityIdentity *v32; // rax
  __int16 v33; // si
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  char *v36; // rax
  _QWORD *v37; // rdi
  CEntityIdentity *v38; // rax
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *v40; // rax
  CUtlScratchMemoryPool *v41; // rdi
  CEntityKeyValues *v42; // r14
  IPhysicsObject *Object; // rax
  CEntityIdentity *v45; // rdi
  CBaseEntity *j; // rax
  CCollisionProperty *m_pCollision; // rdi
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v49; // cx
  __int64 v50; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v56; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rax
  uint16 m_flags; // ax
  _DWORD *v61; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v62; // rax
  CEntityKeyValues *v63; // rbx
  int v64; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v65; // cx
  __int64 v66; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned __int64 v71; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v72; // rax
  __int64 v73; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rdx
  __int64 v75; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v76; // r14
  uint16 v77; // ax
  _DWORD *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rax
  bool v80; // zf
  __int16 v81; // ax
  _DWORD *v82; // rax
  __int16 v83; // ax
  _DWORD *v84; // rax
  int v85; // eax
  __int64 v86; // [rsp+20h] [rbp-1160h]
  CBaseEntity *pSwap; // [rsp+28h] [rbp-1158h]
  unsigned int v89; // [rsp+40h] [rbp-1140h]
  unsigned int createAsleep; // [rsp+44h] [rbp-113Ch]
  bool v91; // [rsp+50h] [rbp-1130h]
  __int64 v92; // [rsp+50h] [rbp-1130h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v93; // [rsp+50h] [rbp-1130h]
  __int64 v94; // [rsp+50h] [rbp-1130h]
  bool v95; // [rsp+5Bh] [rbp-1125h]
  int count; // [rsp+5Ch] [rbp-1124h]
  const QAngle *AbsAngles; // [rsp+68h] [rbp-1118h]
  CEntityKeyValues *i; // [rsp+68h] [rbp-1118h]
  int v99; // [rsp+80h] [rbp-1100h]
  __int64 v100; // [rsp+90h] [rbp-10F0h] BYREF
  char *pString[2]; // [rsp+A0h] [rbp-10E0h] BYREF
  char *pModelName; // [rsp+B0h] [rbp-10D0h] BYREF
  CEntityKeyValues *pInitializationData; // [rsp+B8h] [rbp-10C8h]
  CEntityKeyValuesModifyScope v104; // [rsp+C0h] [rbp-10C0h] BYREF
  CEntityClass *pClass; // [rsp+D0h] [rbp-10B0h]
  CUtlString v106; // [rsp+D8h] [rbp-10A8h] BYREF
  EntityNetworkingMode_t networkMode; // [rsp+E0h] [rbp-10A0h]
  SpawnGroupHandle_t hSpawnGroup; // [rsp+E4h] [rbp-109Ch]
  _QWORD v109[6]; // [rsp+F0h] [rbp-1090h] BYREF
  char v110; // [rsp+120h] [rbp-1060h]
  CUtlScratchMemoryPool *v111; // [rsp+128h] [rbp-1058h]
  _QWORD *v112; // [rsp+130h] [rbp-1050h]
  __int64 v113; // [rsp+140h] [rbp-1040h]
  CBaseEntity *entlist[512]; // [rsp+150h] [rbp-1030h] BYREF

  v4 = 0;
  v89 = this->m_spawnflags.m_Value & 2;
  createAsleep = this->m_spawnflags.m_Value & 1;
  CEntityIOOutput::FireOutput(&this->m_OnConvert, inputdata->pActivator, this);
  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  entlist[0] = this->m_swapModel.u.m_Id;
  pSwap = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, entlist, this, pActivator, pCaller, 0);
  EntityByName = 0;
  while ( 1 )
  {
    v9 = inputdata->pCaller;
    v10 = inputdata->pActivator;
    pModelName = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, &pModelName, this, v10, v9, 0);
    if ( EntityByName == 0 )
      break;
    v8 = v4 + 1;
    entlist[v4++] = EntityByName;
    if ( v4 == 512 )
    {
      count = v8;
      v95 = pSwap != 0;
      if ( v8 > 0 )
      {
        v85 = 1;
        if ( pSwap == 0 )
          v85 = v8;
        count = v85;
      }
      goto LABEL_6;
    }
  }
  count = v4;
  v95 = pSwap != 0;
  if ( v4 > 0 && pSwap != 0 )
  {
    count = 1;
  }
  else if ( v4 == 0 )
  {
    return;
  }
LABEL_6:
  v11 = 0;
  do
  {
    while ( 1 )
    {
      v14 = entlist[v11];
      if ( v14->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
      {
        m_pEntity = v14->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        Msg("ERROR phys_convert %s ! Already MOVETYPE_VPHYSICS\n", m_pAsString);
        goto LABEL_10;
      }
      CBaseEntity::SetParent(entlist[v11], 0, 0, 0);
      if ( v95 )
      {
        (*(v14->_vptr_IHandleEntity + 51))(v14);
        CBaseEntity::GetModelName(&pModelName, pSwap);
        v15 = "";
        if ( pModelName != 0 )
          v15 = pModelName;
        CBaseModelEntity::SetModel(v14, v15);
      }
      CBaseEntity::GetModel(&v100, v14);
      v104.m_pKeyValues = 0;
      pModelName = off_4084990;
      v104.m_pPrevAllocator = 0;
      CEntityKeyValuesModifyScope::BeginModify(&v104, 0);
      pModelName = off_40849B0;
      v16 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      v106.m_pString = 0;
      v112 = 0;
      v113 = 0;
      v17 = g_pEntitySystem;
      ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
      v111 = v16;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v17->m_entitySpawnerData;
      hSpawnGroup = CEntitySystem::GetActiveSpawnGroupHandle(v17);
      SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
      qmemcpy(v109, SpawnOriginOffset, 40);
      v19 = *&SpawnOriginOffset->m_flMatVal[2][2];
      pInitializationData = 0;
      v109[5] = v19;
      pClass = g_pEntityCSimplePhysicsPropClass;
      if ( g_pApplication != 0 )
        v20 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
      else
        v20 = 0;
      v110 = v20;
      networkMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
      (*pModelName)(&pModelName);
      AbsAngles = CBaseEntity::GetAbsAngles(v14);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
      v22 = pInitializationData;
      p_x = &AbsOrigin->x;
      if ( pInitializationData->m_nQueuedForSpawnCount > 0 )
        goto LABEL_19;
      m_nCount = pInitializationData->m_keyHashes.m_nCount;
      if ( m_nCount <= 0 )
      {
LABEL_80:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pInitializationData->m_keyHashes);
        v56 = v22->m_keyHashes.m_nCount - 1;
        m_nAllocated = v22->m_keyHashes.m_nAllocated;
        if ( m_nAllocated != 0 )
        {
          if ( m_nAllocated <= 9 )
            m_pElements = (&v22->m_keyHashes.m_nAllocAllocated + 1);
          else
            m_pElements = v22->m_keyHashes.m_pElements;
        }
        else
        {
          m_pElements = 0;
        }
        m_pElements[(v22->m_keyHashes.m_nCount - 1)] = -467664362;
        v92 = v56;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v22->m_keyValues);
        if ( v22->m_keyValues.m_nAllocated != 0 )
          v59 = v22->m_keyValues.m_pElements;
        else
          v59 = 0;
        v86 = v92;
        v93 = &v59[v92];
        m_flags = v93->m_value.m_flags;
        if ( (m_flags & 1) != 0 )
          v93->m_value.m_flags = m_flags & 0xFFFE;
        v93->m_value.m_uint64 = 0;
        v93->m_value.m_type = 3;
        v61 = CEntityVariantAllocator::Allocate(0xCu);
        v93->m_value.m_uint64 = v61;
        *v61 = *p_x;
        v61[1] = p_x[1];
        v61[2] = p_x[2];
        v93->m_value.m_flags |= 1u;
        if ( v22->m_keyValues.m_nAllocated != 0 )
          v62 = v22->m_keyValues.m_pElements;
        else
          v62 = 0;
        v62[v86].m_pAttributeName = 0;
        goto LABEL_90;
      }
      v49 = pInitializationData->m_keyHashes.m_nAllocated;
      v50 = 0;
      while ( v49 == 0 )
      {
        if ( *(4 * v50) == -467664362 )
          goto LABEL_75;
LABEL_72:
        if ( m_nCount <= ++v50 )
          goto LABEL_80;
      }
      v51 = (&pInitializationData->m_keyHashes.m_nAllocAllocated + 1);
      if ( v49 > 9 )
        v51 = pInitializationData->m_keyHashes.m_pElements;
      if ( v51[v50] != -467664362 )
        goto LABEL_72;
LABEL_75:
      if ( pInitializationData->m_keyValues.m_nAllocated != 0 )
      {
        v52 = pInitializationData->m_keyValues.m_pElements;
        v53 = v50;
        v54 = &v52[v53];
        if ( v52[v53].m_pAttributeName != 0 )
          goto LABEL_77;
LABEL_117:
        v83 = *(v54 + 10);
        if ( (v83 & 1) != 0 )
          *(v54 + 10) = v83 & 0xFFFE;
        *v54 = 0;
        *(v54 + 8) = 3;
        v84 = CEntityVariantAllocator::Allocate(0xCu);
        *v54 = v84;
        *v84 = *p_x;
        v84[1] = p_x[1];
        v84[2] = p_x[2];
        *(v54 + 10) |= 1u;
      }
      else
      {
        v52 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v50) == 0;
        v54 = 24 * v50;
        v53 = v50;
        if ( v80 )
          goto LABEL_117;
LABEL_77:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v52[v53].m_pAttributeName);
      }
LABEL_90:
      v63 = pInitializationData;
      if ( pInitializationData->m_nQueuedForSpawnCount > 0 )
        goto LABEL_19;
      v64 = pInitializationData->m_keyHashes.m_nCount;
      if ( v64 <= 0 )
      {
LABEL_102:
        CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pInitializationData->m_keyHashes);
        v71 = v63->m_keyHashes.m_nAllocated;
        if ( v71 != 0 )
        {
          if ( v71 <= 9 )
            v72 = (&v63->m_keyHashes.m_nAllocAllocated + 1);
          else
            v72 = v63->m_keyHashes.m_pElements;
        }
        else
        {
          v72 = 0;
        }
        v73 = (v63->m_keyHashes.m_nCount - 1);
        v72[v73] = -1164387633;
        CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v63->m_keyValues);
        if ( v63->m_keyValues.m_nAllocated != 0 )
          v74 = v63->m_keyValues.m_pElements;
        else
          v74 = 0;
        v75 = 24 * v73;
        v76 = &v74[v73];
        v94 = v75;
        v77 = v76->m_value.m_flags;
        if ( (v77 & 1) != 0 )
          v76->m_value.m_flags = v77 & 0xFFFE;
        v76->m_value.m_uint64 = 0;
        v76->m_value.m_type = 39;
        v78 = CEntityVariantAllocator::Allocate(0xCu);
        v76->m_value.m_uint64 = v78;
        *v78 = LODWORD(AbsAngles->x);
        v78[1] = LODWORD(AbsAngles->y);
        v78[2] = LODWORD(AbsAngles->z);
        v76->m_value.m_flags |= 1u;
        if ( v63->m_keyValues.m_nAllocated != 0 )
          v79 = v63->m_keyValues.m_pElements;
        else
          v79 = 0;
        *(&v79->m_pAttributeName + v94) = 0;
        goto LABEL_19;
      }
      v65 = pInitializationData->m_keyHashes.m_nAllocated;
      v66 = 0;
      while ( 2 )
      {
        if ( v65 == 0 )
        {
          if ( *(4 * v66) == -1164387633 )
            break;
          goto LABEL_96;
        }
        v67 = (&pInitializationData->m_keyHashes.m_nAllocAllocated + 1);
        if ( v65 > 9 )
          v67 = pInitializationData->m_keyHashes.m_pElements;
        if ( v67[v66] != -1164387633 )
        {
LABEL_96:
          if ( v64 <= ++v66 )
            goto LABEL_102;
          continue;
        }
        break;
      }
      if ( pInitializationData->m_keyValues.m_nAllocated != 0 )
      {
        v68 = pInitializationData->m_keyValues.m_pElements;
        v69 = v66;
        v70 = &v68[v69];
        if ( v68[v69].m_pAttributeName != 0 )
          goto LABEL_101;
LABEL_113:
        v81 = *(v70 + 10);
        if ( (v81 & 1) != 0 )
          *(v70 + 10) = v81 & 0xFFFE;
        *v70 = 0;
        *(v70 + 8) = 39;
        v82 = CEntityVariantAllocator::Allocate(0xCu);
        *v70 = v82;
        *v82 = LODWORD(AbsAngles->x);
        v82[1] = LODWORD(AbsAngles->y);
        v82[2] = LODWORD(AbsAngles->z);
        *(v70 + 10) |= 1u;
      }
      else
      {
        v68 = 0;
        v80 = *(&stru_10.m_Lock.gap0 + 3 * v66) == 0;
        v70 = 24 * v66;
        v69 = v66;
        if ( v80 )
          goto LABEL_113;
LABEL_101:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v68[v69].m_pAttributeName);
      }
LABEL_19:
      CBaseEntity::GetModelName(pString, v14);
      v24 = "";
      if ( pString[0] != 0 )
        v24 = pString[0];
      CEntityKeyValues::SetValue(pInitializationData, -926958586, v24);
      v25 = pInitializationData;
      v99 = -1;
      if ( pInitializationData == 0 )
        goto LABEL_65;
      m_enabled = g_VProfCurrentProfile.m_enabled;
      v91 = m_enabled != 0;
      if ( m_enabled != 0 )
      {
        CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
        v25 = pInitializationData;
      }
      if ( !CEntityKeyValues::HasValue(v25, -971301790) )
      {
        m_pszClassname = pClass->m_pClassInfo->m_pszClassname;
        if ( m_pszClassname != 0 )
          CEntityKeyValues::SetValue(pInitializationData, -971301790, m_pszClassname);
      }
      CEntityKeyValuesModifyScope::Release(&v104);
      v28 = networkMode;
      v29 = CUtlString::Get(&v106);
      Entity = CEntitySystem::CreateEntity(g_pEntitySystem, hSpawnGroup, pClass, v29, v28, -1, -1, 0, 0);
      v31 = Entity;
      if ( Entity != 0 )
      {
        v32 = Entity->m_pEntity;
        if ( v32 != 0 )
        {
          v33 = 0x7FFF;
          if ( v32->m_EHandle.m_Index != -1 )
            v33 = v32->m_EHandle.m_Index & 0x7FFF;
          v99 = (((v32->m_EHandle.m_Index >> 15) - (v32->m_flags & 1)) << 15) | v33 & 0x7FFF;
        }
        pString[0] = v32;
        pString[1] = pInitializationData;
        (*(*g_pGameResourceService + 280LL))(g_pGameResourceService, hSpawnGroup, 1, pString, v109);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v31, pInitializationData);
        if ( v113 == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        v34 = v112;
        for ( i = pInitializationData; v34 != 0; v34 = v34[14] )
        {
          v35 = v34[16];
          v36 = v34[17];
          if ( v35 != 0 || v36 != 0 )
          {
            v37 = (v35 + v34[18]);
            if ( (v36 & 1) != 0 )
              v36 = *&v36[*v37 - 1];
            (v36)(v37, v31, i);
          }
        }
      }
      if ( v91 )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
      if ( (v99 + 2) > 1 && (v38 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v99 >> 9) & 0x3F]) != 0 )
      {
        m_pInstance = 0;
        v40 = &v38[v99 & 0x1FF];
        if ( v40 != 0 && v99 == v40->m_EHandle.m_Index )
          m_pInstance = v40->m_pInstance;
      }
      else
      {
LABEL_65:
        m_pInstance = 0;
      }
      v41 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
      pModelName = off_4084990;
      CEntityKeyValuesModifyScope::sm_pAllocatorOverride = v111;
      if ( v41 == &g_pEntitySystem->m_entitySpawnerData )
      {
        m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
        g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
        if ( m_nEntitySpawnerDataUseCount == 1 )
          CUtlScratchMemoryPool::FreeAll(v41);
      }
      if ( pInitializationData != 0 )
      {
        CEntityKeyValuesModifyScope::Release(&v104);
        v42 = pInitializationData;
        if ( --pInitializationData->m_nRefCount <= 0 )
        {
          CEntityKeyValues::~CEntityKeyValues(v42);
          operator delete(v42);
        }
      }
      if ( v106.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&v106);
      CEntityKeyValuesModifyScope::Release(&v104);
      CCollisionProperty::SetupPhysicsFromUnscaledModel(
        &m_pInstance[17].m_iszPrivateVScripts,
        VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
        5 - (v89 == 0),
        createAsleep);
      if ( m_pInstance != 0 )
        break;
LABEL_10:
      if ( count <= ++v11 )
        return;
    }
    if ( this->m_flMassOverride > 0.0 )
    {
      Object = CBaseEntity::VPhysicsGetObject(m_pInstance);
      if ( Object != 0 )
        (*(*Object + 200LL))(Object, this->m_flMassOverride);
    }
    v45 = m_pInstance->m_pEntity;
    pModelName = v14->m_pEntity->m_name.u.m_Id;
    CEntityIdentity::SetEntityName(v45, &pModelName);
    UTIL_TransferPoseParameters(v14, m_pInstance);
    for ( j = CBaseEntity::FirstMoveChild(v14); j != 0; j = CBaseEntity::FirstMoveChild(v14) )
      CBaseEntity::SetParent(j, m_pInstance, 0, 0);
    m_pCollision = v14->m_pCollision;
    if ( m_pCollision != 0 )
      (*(m_pCollision->_vptr_ICollideable + 16))(m_pCollision);
    ++v11;
    CBaseEntity::AddEffects(v14, 32);
    UTIL_Remove(v14);
  }
  while ( count > v11 );
}


// magnetted_objects_t::AddDatadescMetadataKeys  (line 1578, @0x00000000022deb80, libserver.so)
void __fastcall magnetted_objects_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// magnetted_objects_t::GetBaseMap  (line 1578, @0x00000000022deb90, libserver.so)
datamap_t *__cdecl magnetted_objects_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<magnetted_objects_t>  (line 1578, @0x00000000022deba0, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "magnetted_objects_t"
// globals: `guard variable for'DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder, magnetted_objects_t::m_DataMap, DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<magnetted_objects_t>(magnetted_objects_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder) != 0 )
  {
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_pszBase = "magnetted_objects_t";
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::nameHolder,
      &_dso_handle);
  }
  magnetted_objects_t::m_DataMap.baseMap = 0;
  magnetted_objects_t::m_DataMap.dataDesc = &DataMapInit<magnetted_objects_t>(magnetted_objects_t *)::dataDesc[1];
  magnetted_objects_t::m_DataMap.dataNumFields = 1;
  return &magnetted_objects_t::m_DataMap;
}


// CPhysMagnet::GetDataDescMap  (line 1585, @0x00000000022b7c80, libserver.so)
// globals: CPhysMagnet::m_DataMap
datamap_t *__fastcall CPhysMagnet::GetDataDescMap(CPhysMagnet *const this)
{
  return &CPhysMagnet::m_DataMap;
}


// CPhysMagnet::AddDatadescMetadataKeys  (line 1585, @0x00000000022dec60, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysMagnet::GetEntityClass(void)
void __fastcall CPhysMagnet::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysMagnet::GetEntityClass);
}


// CPhysMagnet::GetBaseMap  (line 1585, @0x00000000022dec80, libserver.so)
datamap_t *__cdecl CPhysMagnet::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CPhysMagnet>  (line 1585, @0x00000000022dec90, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CUtlVector<magnetted_objects_t> >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysMagnet"
// globals: `guard variable for'DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder, `guard variable for'DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc, CPhysMagnet::GetEntityClass(void), CPhysMagnet::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_obje, CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<mag, DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CPhysMagnet>(CPhysMagnet *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_pszBase = "CPhysMagnet";
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysMagnet>(CPhysMagnet *)::nameHolder,
      &_dso_handle);
  }
  CPhysMagnet::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc) != 0 )
  {
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>> *)::ops = off_408A070;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>> *)::ops);
    }
    DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc[7].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<10>::GetDataOps<CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>>>(CUtlVector<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc);
  }
  CPhysMagnet::m_DataMap.dataNumFields = 15;
  CPhysMagnet::m_DataMap.dataDesc = &DataMapInit<CPhysMagnet>(CPhysMagnet *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysMagnet::m_DataMap, CPhysMagnet::GetEntityClass);
  return &CPhysMagnet::m_DataMap;
}


// CPhysMagnet::YouForgotToImplementOrDeclareServerClass  (line 1616, @0x00000000022b7c90, libserver.so)
int __fastcall CPhysMagnet::YouForgotToImplementOrDeclareServerClass(CPhysMagnet *const this)
{
  return 0;
}


// CPhysMagnet::GetServerClass  (line 1616, @0x00000000022c7fe0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPhysMagnet::GetServerClass(CPhysMagnet *const this)
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


// CPhysMagnet::CPhysMagnet  (line 1621, @0x00000000022dee10, libserver.so)  // inlines: CEntityIOOutput, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CBaseAnimating::CBaseAnimating
// callers: CPhysMagnet::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPhysMagnet::CPhysMagnet(CPhysMagnet *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_40850F0;
  this->m_OnMagnetAttach._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnMagnetDetach._vptr_CEntityIOOutput = off_3F7C190;
  this->m_MagnettedEntities.m_Size = 0;
  this->m_MagnettedEntities.m_Memory.m_pMemory = 0;
  this->m_MagnettedEntities.m_Memory.m_nAllocationCount = 0;
  this->m_MagnettedEntities.m_Memory.m_nGrowSize = 0;
  this->m_forceLimit = 0.0;
  this->m_torqueLimit = 0.0;
}


// CPhysMagnet::~CPhysMagnet  (line 1630, @0x00000000022bdf80, libserver.so)  // inlines: Purge, RemoveAll, ~CBaseAnimating, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<magnetted_objects_t, int>::Purge
// callers: CPhysMagnet::~CPhysMagnet
void __fastcall CPhysMagnet::~CPhysMagnet(CPhysMagnet *const this)
{
  bool v2; // zf
  CUtlVectorBase<magnetted_objects_t,CUtlMemory<magnetted_objects_t,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_MagnettedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_40850F0;
  this->m_MagnettedEntities.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_MagnettedEntities.m_Memory;
    CUtlMemory<magnetted_objects_t,int>::Purge(&this->m_MagnettedEntities.m_Memory);
    if ( (this->m_MagnettedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<magnetted_objects_t,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPhysMagnet::~CPhysMagnet  (line 1630, @0x00000000022be000, libserver.so)
// calls: CPhysMagnet::~CPhysMagnet, CBaseEntity::operator delete
void __fastcall CPhysMagnet::~CPhysMagnet(CPhysMagnet *const this)
{
  CPhysMagnet::~CPhysMagnet(this);
  CBaseEntity::operator delete(this);
}


// CPhysMagnet::UpdateOnRemove  (line 1632, @0x00000000022def40, libserver.so)
// calls: CPhysMagnet::DetachAll, CBaseAnimating::UpdateOnRemove
void __fastcall CPhysMagnet::UpdateOnRemove(CPhysMagnet *const this)
{
  CPhysMagnet::DetachAll(this);
  CBaseAnimating::UpdateOnRemove(this);
}


// CPhysMagnet::Spawn  (line 1641, @0x00000000022ba960, libserver.so)  // inlines: HasSpawnFlags
// calls: CBaseAnimating::Spawn, CCollisionProperty::EnableTouchPersistsNotification, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::SetDamageOptions, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::PhysicsEnableMotion
void __fastcall CPhysMagnet::Spawn(CPhysMagnet *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  IPhysAggregateInstance *v5; // rax
  float m_massScale; // xmm0_4
  unsigned int m_Value; // edx
  void (__fastcall *v8)(IPhysAggregateInstance *, float); // r12
  float v9; // xmm0_4
  IPhysAggregateInstance *pAgg; // [rsp+8h] [rbp-28h]

  p_m_Collision = &this->m_Collision;
  CBaseAnimating::Spawn(this, pKeyValues);
  CCollisionProperty::EnableTouchPersistsNotification(p_m_Collision);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  v5 = CCollisionProperty::SetupPhysicsFromUnscaledModel(
         p_m_Collision,
         VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
         4,
         1);
  if ( v5 != 0 )
  {
    m_massScale = this->m_massScale;
    if ( m_massScale > 0.0 && m_massScale != 1.0 )
    {
      pAgg = v5;
      v8 = *(v5->_vptr_IPhysAggregateInstance + 53);
      v9 = (*(v5->_vptr_IPhysAggregateInstance + 52))(v5);
      v8(pAgg, v9 * this->m_massScale);
      v5 = pAgg;
    }
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 1) == 0 )
    {
      (*(v5->_vptr_IPhysAggregateInstance + 29))(v5);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 2) != 0 )
      CBaseEntity::PhysicsEnableMotion(this, 0);
  }
  this->m_bActive = 1;
  this->m_flTotalMass = 0.0;
  this->m_flNextSuckTime = 0.0;
}


// CPhysMagnet::Precache  (line 1697, @0x00000000023028d0, libserver.so)  // inlines: Precache
// calls: CBaseEntity::PrecacheModelFromKeyValues, CEntityInstance::Precache
void __fastcall CPhysMagnet::Precache(CPhysMagnet *const this, const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CEntityInstance::Precache(this, pContext);
}


// CPhysMagnet::Touch  (line 1706, @0x00000000022b7ca0, libserver.so)
void __fastcall CPhysMagnet::Touch(CPhysMagnet *const this, CBaseEntity *pOther)
{
  ;
}


// CPhysMagnet::VPhysicsCollision  (line 1714, @0x00000000022fcee0, libserver.so)  // inlines: AddToTail, BuildObjectRelativeXform, CEntityHandle, CHandle, CUtlDelegate<CPhysMagnet, CPhysMagnet>, CVariantBase, ClassMatches, Convert<CPhysMagnet, void (CPhysMagnet::*)(IPhysicsJoint*), void (detail::GenericClass::*)()>, CopyConstruct<magnetted_objects_t>, Defaults, Element, FClassnameIs, FastDelegate1<CPhysMagnet, CPhysMagnet>, FireOutput, Free, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, IndexToIdentity, Init, InitWithCurrentObjectState, IsValid, LookupEntity, Set, String, UtlMakeDelegate<CPhysMagnet, CPhysMagnet, IPhysicsJoint*, void>, V_strncmp<int>, bindmemfunc<CPhysMagnet, void (CPhysMagnet::*)(IPhysicsJoint*)>, entindex, magnetted_objects_t, operator CEntityInstance*, operator=, operator==, operator[], ~CVariantBase
// calls: CPhysMagnet::DoMagnetSuck, CEntityIdentity::ClassMatches, CBaseAnimating::GetModelPtr, CModel::pszSurfaceProp, _V_strncmp, CBaseEntity::VPhysicsBody, CEntityIOOutput::FireOutputInternal, CBaseEntity::VPhysicsCollision, CBaseEntity::GetDamageOptions, CEntityInstance::GetEntityIndex, Warning, UTIL_Remove (23 total)
// strings: "prop_vehicle_jeep", "metal", "CPhysMagnet %s:%d blocking magnet\n"
// globals: CEntityHandle::gm_pEntityList, CPhysMagnet::ConstraintBroken(IPhysicsJoint *)
void __fastcall CPhysMagnet::VPhysicsCollision(CPhysMagnet *const this, int index, gamevcollisionevent_t *pEvent)
{
  CBaseEntity **v6; // r15
  CBaseEntity *v7; // r12
  int m_iMaxObjectsAttached; // eax
  __int64 v9; // rax
  char v10; // al
  const CBaseAnimating *v11; // rax
  const CModel *ModelPtr; // rax
  const char *v13; // rax
  HPhysicsBody v14; // rax
  HPhysicsBody v15; // r15
  CEntityIndex v16; // eax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  int m_Size; // eax
  magnetted_objects_t *v20; // r8
  magnetted_objects_t *m_pMemory; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v23; // rcx
  CEntityIdentity *v24; // rcx
  CEntityIdentity *v25; // rax
  __int16 v26; // cx
  float m_forceLimit; // xmm1_4
  IPhysicsCollisionData *pInternalData; // rdi
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm1_4
  IVPhysics2World *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  bool v37; // zf
  magnetted_objects_t *v38; // rdx
  uint32 v39; // ecx
  void (__fastcall *v40)(__int64, constraint_fixedparams_t *); // rdx
  float v41; // xmm1_4
  float v42; // xmm0_4
  IVPhysics2World *v43; // rax
  int Health; // eax
  int in; // [rsp+8h] [rbp-178h]
  HPhysicsBody newEntityOnMagnet; // [rsp+10h] [rbp-170h]
  HPhysicsBody newEntityOnMagneta; // [rsp+10h] [rbp-170h]
  _BOOL4 otherIndex; // [rsp+18h] [rbp-168h]
  matrix3x4_t v49; // [rsp+20h] [rbp-160h] BYREF
  int v50; // [rsp+58h] [rbp-128h]
  Vector vCollisionPoint; // [rsp+60h] [rbp-120h] BYREF
  matrix3x4_t v52; // [rsp+90h] [rbp-F0h] BYREF
  constraint_fixedparams_t fixedParams; // [rsp+C0h] [rbp-C0h] BYREF

  v6 = &pEvent->pObjects[index == 0];
  otherIndex = index == 0;
  v7 = v6[18];
  this->m_bHasHitSomething = 1;
  CPhysMagnet::DoMagnetSuck(this, v6[18]);
  if ( !this->m_bActive )
    return;
  m_iMaxObjectsAttached = this->m_iMaxObjectsAttached;
  if ( m_iMaxObjectsAttached != 0 && m_iMaxObjectsAttached <= this->m_MagnettedEntities.m_Size )
    return;
  if ( (this->m_spawnflags.m_Value & 0x10) != 0
    && (v7 == 0 || !CEntityIdentity::ClassMatches(v7->m_pEntity, "prop_vehicle_jeep")) )
  {
    if ( CBaseEntity::GetDamageOptions(v7) == DamageOptions_t::DAMAGE_NO
      || CBaseEntity::GetDamageOptions(v7) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
    {
      if ( (*((*v6)->_vptr_IHandleEntity + 189))(*v6) != 0 )
      {
        UTIL_Remove(v7);
      }
      else
      {
        v16.m_Data = CEntityInstance::GetEntityIndex(v7).m_Data;
        m_pEntity = v7->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        Warning("CPhysMagnet %s:%d blocking magnet\n", m_pAsString, v16.m_Data);
      }
    }
    else
    {
      Health = CBaseEntity::GetHealth(v7);
      CTakeDamageInfo::CTakeDamageInfo(&fixedParams, this, this, Health, 2048, 0);
      CBaseEntity::TakeDamage(v7, &fixedParams);
      CTakeDamageInfo::~CTakeDamageInfo(&fixedParams);
    }
    return;
  }
  v9 = (*(g_pVPhysics2->_vptr_IAppSystem + 18))(g_pVPhysics2);
  v10 = *((*(*v9 + 16LL))(v9, pEvent->surfaceProps[otherIndex].m_nHashCode, 0) + 176);
  if ( v10 != 80 && v10 != 77 )
  {
    if ( (*(v7->_vptr_IHandleEntity + 43))(v7) == 0 )
      return;
    v11 = (*(v7->_vptr_IHandleEntity + 43))(v7);
    ModelPtr = CBaseAnimating::GetModelPtr(v11);
    v13 = CModel::pszSurfaceProp(ModelPtr);
    if ( _V_strncmp(v13, "metal", 5) != 0 )
      return;
  }
  v14 = CBaseEntity::VPhysicsBody(v7);
  v15 = v14;
  if ( v14 == 0 || v7->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS || (*(*v14 + 40LL))(v14) != 2 )
  {
LABEL_12:
    CPhysMagnet::DoMagnetSuck(this, v7);
    fixedParams.attachedRefXform.m_flMatVal[0][2] = 0.0;
    *&fixedParams.attachedRefXform.m_flMatVal[0][0] = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnMagnetAttach, this, this, &fixedParams, 0.0);
    if ( (BYTE2(fixedParams.attachedRefXform.m_flMatVal[0][2]) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&fixedParams.attachedRefXform.m_flMatVal[0][0]);
    CBaseEntity::VPhysicsCollision(this, index, pEvent);
    return;
  }
  m_Size = this->m_MagnettedEntities.m_Size;
  if ( m_Size <= 0 )
  {
LABEL_34:
    v50 = -1;
    newEntityOnMagnet = CBaseEntity::VPhysicsBody(this);
    v25 = v7->m_pEntity;
    if ( v25 != 0 )
    {
      v26 = 0x7FFF;
      if ( v25->m_EHandle.m_Index != -1 )
        v26 = v25->m_EHandle.m_Index & 0x7FFF;
      v50 = (((v25->m_EHandle.m_Index >> 15) - (v25->m_flags & 1)) << 15) | v26 & 0x7FFF;
    }
    if ( (this->m_spawnflags.m_Value & 8) != 0 )
    {
      LOBYTE(fixedParams.attachedRefXform.m_flMatVal[2][3]) = 1;
      m_forceLimit = this->m_forceLimit;
      pInternalData = pEvent->pInternalData;
      *&fixedParams.attachedRefXform.m_flMatVal[2][1] = 0x3F8000003F800000LL;
      v29 = 0.45454544 * this->m_torqueLimit;
      memset(&fixedParams, 0, 20);
      fixedParams.attachedRefXform.m_flMatVal[1][3] = m_forceLimit * 0.45454544;
      fixedParams.attachedRefXform.m_flMatVal[2][0] = v29;
      *&fixedParams.attachedRefXform.m_flMatVal[1][1] = 0x3F80000000000000LL;
      (*(pInternalData->_vptr_IPhysicsCollisionData + 1))(pInternalData);
      *&v52.m_flMatVal[0][0] = (*(*newEntityOnMagnet + 1008LL))(newEntityOnMagnet, &vCollisionPoint);
      v52.m_flMatVal[0][2] = v30;
      fixedParams.attachedRefXform.m_flMatVal[0][2] = v30;
      *&fixedParams.attachedRefXform.m_flMatVal[0][0] = *&v52.m_flMatVal[0][0];
      *&v52.m_flMatVal[0][0] = (*(*v15 + 1008LL))(v15, &vCollisionPoint);
      v52.m_flMatVal[0][2] = v31;
      fixedParams.attachedRefXform.m_flMatVal[1][1] = v31;
      *&fixedParams.attachedRefXform.m_flMatVal[0][3] = *&v52.m_flMatVal[0][0];
      v32 = CBaseEntity::VPhysicsWorld(this);
      v33 = (*(*v32 + 304LL))(v32, newEntityOnMagnet, v15, &fixedParams);
    }
    else
    {
      SetIdentityMatrix(&fixedParams.attachedRefXform);
      fixedParams.constraint.isActive = 1;
      fixedParams.constraint.forceLimit = 0.0;
      fixedParams.constraint.torqueLimit = 0.0;
      fixedParams.constraint.strength = 1.0;
      fixedParams.constraint.bodyMassScale[1] = 1.0;
      fixedParams.constraint.bodyMassScale[0] = 1.0;
      if ( newEntityOnMagnet != 0 )
      {
        (*(*newEntityOnMagnet + 416LL))(&v52);
        MatrixInvert(&v52, &vCollisionPoint);
      }
      else
      {
        SetIdentityMatrix(&vCollisionPoint);
      }
      (*(*v15 + 416LL))(&v49, v15);
      v52 = v49;
      ConcatTransforms(&vCollisionPoint, &v52, &fixedParams.attachedRefXform);
      v41 = this->m_forceLimit;
      fixedParams.constraint.isActive = 1;
      fixedParams.constraint.strength = 1.0;
      fixedParams.constraint.bodyMassScale[1] = 1.0;
      v42 = 0.45454544 * this->m_torqueLimit;
      fixedParams.constraint.bodyMassScale[0] = 1.0;
      fixedParams.constraint.forceLimit = v41 * 0.45454544;
      fixedParams.constraint.torqueLimit = v42;
      v43 = CBaseEntity::VPhysicsWorld(this);
      v33 = (*(*v43 + 344LL))(v43, newEntityOnMagnet, v15, &fixedParams);
    }
    if ( v33 == 0 )
      return;
    v34 = this->m_MagnettedEntities.m_Size;
    v35 = this->m_MagnettedEntities.m_Size;
    if ( v34 == this->m_MagnettedEntities.m_Memory.m_nAllocationCount )
    {
      in = this->m_MagnettedEntities.m_Size;
      newEntityOnMagneta = v33;
      CUtlMemory<magnetted_objects_t,int>::Grow(&this->m_MagnettedEntities.m_Memory, 1);
      v35 = this->m_MagnettedEntities.m_Size;
      v34 = in;
      v33 = newEntityOnMagneta;
    }
    v36 = v34;
    v37 = &this->m_MagnettedEntities.m_Memory.m_pMemory[v36] == 0;
    v38 = &this->m_MagnettedEntities.m_Memory.m_pMemory[v36];
    this->m_MagnettedEntities.m_Size = v35 + 1;
    if ( !v37 )
    {
      v39 = v50;
      v38->hJoint = v33;
      v38->hEntity.m_Index = v39;
    }
    v40 = *(*v33 + 432LL);
    *&fixedParams.attachedRefXform.m_flMatVal[0][2] = CPhysMagnet::ConstraintBroken;
    *&fixedParams.attachedRefXform.m_flMatVal[1][0] = 0;
    *&fixedParams.attachedRefXform.m_flMatVal[0][0] = this;
    v40(v33, &fixedParams);
    this->m_flTotalMass = (*(*v15 + 208LL))(v15) + this->m_flTotalMass;
    goto LABEL_12;
  }
  v20 = &this->m_MagnettedEntities.m_Memory.m_pMemory[(m_Size - 1) + 1];
  m_pMemory = this->m_MagnettedEntities.m_Memory.m_pMemory;
  while ( 1 )
  {
    m_Index = m_pMemory->hEntity.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->hEntity.m_Index) >> 9) & 0x3F];
      if ( v23 != 0 )
      {
        v24 = &v23[m_pMemory->hEntity.m_Index & 0x1FF];
        if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index && v7 == v24->m_pInstance )
          break;
      }
    }
    if ( ++m_pMemory == v20 )
      goto LABEL_34;
  }
}


// CPhysMagnet::DoMagnetSuck  (line 1837, @0x00000000022f8000, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CGameTrace, COverlapList, CUtlVectorBase, CUtlVectorFixedGrowable, EnableInteractsWith, GetEntityIdentity, GetEntryIndex, GetFloat, GetHitEntity, GetInstance, HitEntitiesOnlyByCollisionGroup, IndexToIdentity, Init, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetObjectSetMask, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAligned, VectorClear, VectorCopy, VectorSubtract, VectorTransform, operator CBaseEntity*, operator*=, operator-, ~COverlapList, ~CUtlVectorFixedGrowable
// calls: CGlobalVarsBase::curtime, CBaseEntity::EntityToWorldTransform, VectorTransform, CUtlMemoryFixedGrowable<COverlapHit, 64ul, int>::CUtlMemoryFixedGrowable, EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CGamePhysicsQueryInterface::EntitiesInSphere, CBaseEntity::VPhysicsGetObject, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay (16 total)
// callers: CPhysMagnet::VPhysicsCollision
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysMagnet::DoMagnetSuck(CPhysMagnet *const this, CBaseEntity *pOther)
{
  float m_flNextSuckTime; // ebx
  matrix3x4_t *v4; // rax
  matrix3x4_t *v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const CBaseEntity *m_pInstance; // r15
  IPhysicsObject *Object; // rax
  IPhysicsObject *v13; // r14
  const Vector *AbsOrigin; // rax
  float m_fValue; // xmm0_4
  float v16; // xmm1_4
  const Vector *v17; // rax
  vec_t v18; // xmm0_4
  vec_t v19; // xmm2_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  const Vector *pTraceFilter; // [rsp+20h] [rbp-11F0h]
  Vector vecCheckPos; // [rsp+30h] [rbp-11E0h] BYREF
  Vector vecSuckPoint; // [rsp+40h] [rbp-11D0h] BYREF
  CGameQueryAttributes filter; // [rsp+50h] [rbp-11C0h] BYREF
  CTraceFilterSimple v27; // [rsp+80h] [rbp-1190h] BYREF
  Vector vVelocity; // [rsp+C0h] [rbp-1150h] BYREF
  int v29; // [rsp+CCh] [rbp-1144h]
  float v30; // [rsp+D0h] [rbp-1140h]
  float v31; // [rsp+D4h] [rbp-113Ch]
  float v32; // [rsp+D8h] [rbp-1138h]
  int v33; // [rsp+DCh] [rbp-1134h]
  int v34; // [rsp+E0h] [rbp-1130h]
  int v35; // [rsp+E4h] [rbp-112Ch]
  int v36; // [rsp+E8h] [rbp-1128h]
  int v37; // [rsp+ECh] [rbp-1124h]
  int v38; // [rsp+F0h] [rbp-1120h]
  int v39; // [rsp+F4h] [rbp-111Ch]
  int v40; // [rsp+F8h] [rbp-1118h]
  int v41; // [rsp+FCh] [rbp-1114h]
  float v42; // [rsp+100h] [rbp-1110h]
  char v43; // [rsp+104h] [rbp-110Ch]
  bool v44; // [rsp+105h] [rbp-110Bh]
  trace_t tr; // [rsp+110h] [rbp-1100h] BYREF
  COverlapList results; // [rsp+1C0h] [rbp-1050h] BYREF
  unsigned __int64 v47; // [rsp+11D8h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  if ( (this->m_spawnflags.m_Value & 4) != 0 && this->m_bActive )
  {
    m_flNextSuckTime = this->m_flNextSuckTime;
    if ( m_flNextSuckTime <= CGlobalVarsBase::curtime(gpGlobals, 0) )
    {
      v4 = CBaseEntity::EntityToWorldTransform(this);
      tr.startpos.x = 0.0;
      tr.startpos.y = 0.0;
      tr.startpos.z = -96.0;
      VectorTransform(&tr.startpos.x, v4, &vecCheckPos.x);
      v5 = CBaseEntity::EntityToWorldTransform(this);
      tr.startpos.x = 0.0;
      tr.startpos.y = 0.0;
      tr.startpos.z = -64.0;
      VectorTransform(&tr.startpos.x, v5, &vecSuckPoint.x);
      results.m_list.m_Size = 0;
      CUtlMemoryFixedGrowable<COverlapHit,64ul,int>::CUtlMemoryFixedGrowable(&results.m_list.m_Memory, 0, 64);
      filter.m_nHierarchyId = 0;
      memset(&filter, 0, 24);
      filter.m_nEntityIdToIgnore = -1;
      filter.m_nCollisionGroup = 4;
      *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
      filter.m_nObjectSetMask = 2;
      filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
      filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
      v6 = CGamePhysicsQueryInterface::EntitiesInSphere(g_pPhysicsQuery, &vecCheckPos, 80.0, &filter, 1u, &results);
      if ( v6 > 0 )
      {
        v7 = 0;
        v8 = ((v6 - 1) + 1LL) << 6;
        do
        {
          LODWORD(tr.startpos.x) = results.m_list.m_Memory.m_pMemory[v7 / 0x40].m_ShapeAttributes.m_nEntityId;
          if ( (LODWORD(tr.startpos.x) + 2) > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(tr.startpos.x) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[LOWORD(tr.startpos.x) & 0x1FF];
              if ( v10 != 0 && LODWORD(tr.startpos.x) == v10->m_EHandle.m_Index )
              {
                m_pInstance = v10->m_pInstance;
                if ( pOther != v10->m_pInstance && m_pInstance != 0 )
                {
                  Object = CBaseEntity::VPhysicsGetObject(v10->m_pInstance);
                  v13 = Object;
                  if ( Object != 0
                    && m_pInstance->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS
                    && (*(*Object + 208LL))(Object) < 5000.0 )
                  {
                    memset(&tr.m_ShapeAttributes, 0, 31);
                    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
                    CGameTrace::Init(&tr);
                    pTraceFilter = CBaseEntity::GetAbsOrigin(m_pInstance);
                    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
                    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
                    v29 = 0;
                    v33 = 0;
                    v37 = 0;
                    v41 = 0;
                    v42 = m_fValue;
                    v30 = pTraceFilter->x - AbsOrigin->x;
                    v31 = pTraceFilter->y - AbsOrigin->y;
                    v16 = pTraceFilter->z - AbsOrigin->z;
                    v43 = 1;
                    v40 = 0;
                    v39 = 0;
                    v32 = v16;
                    v38 = 0;
                    v36 = 0;
                    v35 = 0;
                    v34 = 0;
                    v44 = (((v30 * v30) + (v31 * v31)) + (v16 * v16)) != 0.0;
                    vVelocity = *AbsOrigin;
                    CTraceFilterSimple::CTraceFilterSimple(&v27, this, 4, 0);
                    v27.m_attr.m_nInteractsWith |= 0x185003uLL;
                    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vVelocity, &v27, &tr);
                    if ( tr.fraction == 1.0 || tr.m_pEnt == m_pInstance )
                    {
                      v17 = CBaseEntity::GetAbsOrigin(m_pInstance);
                      v18 = vecSuckPoint.z - v17->z;
                      v19 = vecSuckPoint.x - v17->x;
                      vVelocity.y = vecSuckPoint.y - v17->y;
                      vVelocity.z = v18;
                      vVelocity.x = v19;
                      v20 = VectorNormalize(&vVelocity);
                      v21 = (*(*v13 + 208LL))(v13, v20) * 5.0;
                      vVelocity.x = vVelocity.x * v21;
                      vVelocity.y = vVelocity.y * v21;
                      vVelocity.z = v21 * vVelocity.z;
                      (*(*v13 + 552LL))(v13, &vVelocity);
                    }
                  }
                }
              }
            }
          }
          v7 += 64LL;
        }
        while ( v7 != v8 );
      }
      this->m_flNextSuckTime = CGlobalVarsBase::curtime(gpGlobals, 0) + 2.0;
      CUtlVectorBase<COverlapHit,CUtlMemoryFixedGrowable<COverlapHit,64ul,int>>::~CUtlVectorBase(&results.m_list);
    }
  }
}


// CPhysMagnet::InputTurnOn  (line 1888, @0x00000000022b7cb0, libserver.so)
void __fastcall CPhysMagnet::InputTurnOn(CPhysMagnet *const this, inputdata_t *const inputdata)
{
  this->m_bActive = 1;
}


// CPhysMagnet::InputTurnOff  (line 1896, @0x00000000022def60, libserver.so)
// calls: CPhysMagnet::DetachAll
void __fastcall CPhysMagnet::InputTurnOff(CPhysMagnet *const this, inputdata_t *const inputdata)
{
  this->m_bActive = 0;
  CPhysMagnet::DetachAll(this);
}


// CPhysMagnet::InputToggle  (line 1905, @0x00000000022def80, libserver.so)  // inlines: InputTurnOff, InputTurnOn
// calls: CPhysMagnet::DetachAll
void __fastcall CPhysMagnet::InputToggle(CPhysMagnet *const this, inputdata_t *const inputdata)
{
  if ( this->m_bActive )
  {
    this->m_bActive = 0;
    CPhysMagnet::DetachAll(this);
  }
  else
  {
    this->m_bActive = 1;
  }
}


// CPhysMagnet::ConstraintBroken  (line 1920, @0x00000000022b7cc0, libserver.so)
void __fastcall CPhysMagnet::ConstraintBroken(CPhysMagnet *const this, HPhysicsJoint hJoint)
{
  ;
}


// CPhysMagnet::DetachAll  (line 1950, @0x00000000022dee90, libserver.so)  // inlines: Purge, RemoveAll
// calls: CBaseEntity::VPhysicsWorld, CUtlMemory<magnetted_objects_t, int>::Purge
// callers: CPhysMagnet::UpdateOnRemove, CPhysMagnet::InputTurnOff, CPhysMagnet::InputToggle
void __fastcall CPhysMagnet::DetachAll(CPhysMagnet *const this)
{
  int m_Size; // r13d
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  IVPhysics2World *v5; // rax
  bool v6; // zf

  m_Size = this->m_MagnettedEntities.m_Size;
  if ( m_Size > 0 )
  {
    v3 = 0;
    v4 = 16 * ((m_Size - 1) + 1LL);
    do
    {
      v5 = CBaseEntity::VPhysicsWorld(this);
      (*(*v5 + 904LL))(v5, this->m_MagnettedEntities.m_Memory.m_pMemory[v3 / 0x10].hJoint);
      this->m_MagnettedEntities.m_Memory.m_pMemory[v3 / 0x10].hJoint = 0;
      v3 += 16LL;
    }
    while ( v3 != v4 );
  }
  v6 = (this->m_MagnettedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_MagnettedEntities.m_Size = 0;
  if ( v6 )
    CUtlMemory<magnetted_objects_t,int>::Purge(&this->m_MagnettedEntities.m_Memory);
  this->m_flTotalMass = 0.0;
}


// CPhysMagnet::GetNumAttachedObjects  (line 1967, @0x00000000022defb0, libserver.so)
int __fastcall CPhysMagnet::GetNumAttachedObjects(CPhysMagnet *const this)
{
  return this->m_MagnettedEntities.m_Size;
}


// CPhysMagnet::GetTotalMassAttachedObjects  (line 1975, @0x00000000022defc0, libserver.so)
float __fastcall CPhysMagnet::GetTotalMassAttachedObjects(CPhysMagnet *const this)
{
  return this->m_flTotalMass;
}


// CPhysMagnet::GetAttachedObject  (line 1983, @0x00000000022defd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// globals: CEntityHandle::gm_pEntityList
CBaseEntity *__fastcall CPhysMagnet::GetAttachedObject(CPhysMagnet *const this, int iIndex)
{
  CBaseEntity *result; // rax
  magnetted_objects_t *v3; // rsi
  uint32 m_Index; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx

  result = 0;
  v3 = &this->m_MagnettedEntities.m_Memory.m_pMemory[iIndex];
  m_Index = v3->hEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(v3->hEntity.m_Index);
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[m_Index_low & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        return v7->m_pInstance;
    }
  }
  return result;
}


// CPointPush::~CPointPush  (line 1994, @0x00000000023069b0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointPush::~CPointPush(CPointPush *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointPush::~CPointPush  (line 1994, @0x00000000023069d0, libserver.so)  // inlines: ~CPointEntity, ~CPointPush
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointPush::~CPointPush(CPointPush *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointPush::GetEntityClass  (line 1996, @0x0000000002304550, libserver.so)
CEntityClass *__cdecl CPointPush::GetEntityClass()
{
  return g_pEntityCPointPushClass;
}


// CPointPush::Schema_DynamicBinding  (line 1996, @0x0000000002304560, libserver.so)
// globals: CPointPush::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointPush::Schema_DynamicBinding(const CPointPush *const this)
{
  return CPointPush::s_pSchemaBinding;
}


// CPointPush::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1996, @0x0000000002304570, libserver.so)
// globals: CPointPush::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointPush::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointPush::CEntityInstanceEntityClass *const this)
{
  return CPointPush::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointPush::CEntityInstanceEntityClass::DestructInstance  (line 1996, @0x0000000002304580, libserver.so)  // inlines: Destruct<CPointPush>
void __fastcall CPointPush::CEntityInstanceEntityClass::DestructInstance(
        CPointPush::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointPush::CEntityInstanceEntityClass::FreeInstance  (line 1996, @0x00000000023045a0, libserver.so)
void __fastcall CPointPush::CEntityInstanceEntityClass::FreeInstance(
        CPointPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointPush::CEntityInstanceEntityClass::CanAllocate  (line 1996, @0x00000000023045c0, libserver.so)
bool __fastcall CPointPush::CEntityInstanceEntityClass::CanAllocate(
        const CPointPush::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1996, @0x00000000023045d0, libserver.so)
// globals: CPointPush::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointPush::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointPush::CEntityInstanceEntityClass *const this)
{
  return CPointPush::s_pSchemaBinding;
}


// CPointPush::CEntityInstanceEntityClass::AllocateInstance  (line 1996, @0x0000000002305ec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointPush::CEntityInstanceEntityClass::AllocateInstance(
        CPointPush::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPointPush::CEntityInstanceEntityClass::ConstructInstance  (line 1996, @0x0000000002306410, libserver.so)  // inlines: CEntityHandle, CHandle, CPointEntity, CPointPush, CUtlSymbolLarge, Construct<CPointPush>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointPush::CEntityInstanceEntityClass::ConstructInstance(
        CPointPush::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 100) = 0;
    *p = &off_4085970;
    *(p + 202) = -1;
  }
  return p;
}


// CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1996, @0x0000000002309120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1996, @0x0000000002309140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointPush::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointPush::GetEntityClassInternal  (line 1996, @0x0000000002316940, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "point_push", "CPointPush"
// globals: `guard variable for'CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass, CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo, CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo
CEntityClass *__cdecl CPointPush::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass) != 0 )
  {
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_designerName.u.m_Id = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass._vptr_CEntityClass = off_3F79390;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_ComponentOffsets.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_AllHelpers.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classInputs.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classOutputs.m_Size = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_requiredEHandle.m_Index = -1;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_hNetworkSerializer = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pBaseClassInfo = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pClassInfo = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_flags = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_nAllHelpersFlags = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pScriptClassDesc = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pInputs = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_nInputCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pOutputs = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_nOutputCount = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pGameClass = 0;
    CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass._vptr_CEntityClass = off_40858F0;
    __cxa_guard_release(&`guard variable for'CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass);
    __cxa_atexit(
      CPointPush::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointPushClass != 0 )
    return &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass;
  if ( `guard variable for'CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo,
      "CPointPush",
      "point_push",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo);
  }
  CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pClassInfo = &CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo;
  CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pBaseClassInfo = CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo.m_pBaseClassInfo;
  g_pEntityCPointPushClass = &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass;
  CPointPush::GetEntityClassInfo(void)::g_EntityCPointPushClassInfo.m_pClass = &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass;
  CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointPushClass->m_pComponentOverrides = 0;
  return &CPointPush::GetEntityClassInternal(void)::g_EntityCPointPushClass;
}


// CPointPush::GetDataDescMap  (line 2028, @0x00000000022b7cd0, libserver.so)
// globals: CPointPush::m_DataMap
datamap_t *__fastcall CPointPush::GetDataDescMap(CPointPush *const this)
{
  return &CPointPush::m_DataMap;
}


// CPointPush::AddDatadescMetadataKeys  (line 2028, @0x00000000022df040, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointPush::GetEntityClass(void)
void __fastcall CPointPush::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointPush::GetEntityClass);
}


// CPointPush::GetBaseMap  (line 2028, @0x00000000022df060, libserver.so)
datamap_t *__cdecl CPointPush::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointPush>  (line 2028, @0x00000000022f35d0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPointPush"
// globals: `guard variable for'DataMapInit<CPointPush>(CPointPush *)::nameHolder, `guard variable for'DataMapInit<CPointPush>(CPointPush *)::dataDesc, CPointPush::GetEntityClass(void), CPointPush::m_DataMap, DataMapInit<CPointPush>(CPointPush *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointPush>(CPointPush *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::nameHolder) != 0 )
  {
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_pszBase = "CPointPush";
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointPush>(CPointPush *)::nameHolder,
      &_dso_handle);
  }
  CPointPush::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_pszBase), "PushThink");
    m_Size = DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size == DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPointPush>(CPointPush *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPointPush>(CPointPush *)::dataDesc[1].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointPush>(CPointPush *)::dataDesc);
  }
  CPointPush::m_DataMap.dataNumFields = 10;
  CPointPush::m_DataMap.dataDesc = &DataMapInit<CPointPush>(CPointPush *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointPush::m_DataMap, CPointPush::GetEntityClass);
  return &CPointPush::m_DataMap;
}


// CPointPush::DrawEntityDebugOverlays  (line 2053, @0x00000000022baa70, libserver.so)  // inlines: Vector
// calls: CBaseEntity::GetAbsOrigin, NDebugOverlay::Box, NDebugOverlay::Sphere
void __fastcall CPointPush::DrawEntityDebugOverlays(CPointPush *const this, uint64 nDebugOverlayBits)
{
  const Vector *AbsOrigin; // rax
  const Vector *v4; // rax
  float radius; // [rsp+Ch] [rbp-34h]
  Vector mins; // [rsp+10h] [rbp-30h] BYREF
  Vector maxs; // [rsp+20h] [rbp-20h] BYREF

  maxs.x = 2.0;
  maxs.y = 2.0;
  maxs.z = 2.0;
  mins.x = -2.0;
  mins.y = -2.0;
  mins.z = -2.0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  NDebugOverlay::Box(AbsOrigin, &mins, &maxs, 0, 255, 0, 0.050000001, 16);
  radius = this->m_flRadius;
  v4 = CBaseEntity::GetAbsOrigin(this);
  NDebugOverlay::Sphere(v4, &vec3_angle, radius, 0, 0xFFu, 0, 0, 0.050000001, 0);
}


// CPointPush::Activate  (line 2064, @0x00000000022c4040, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CPointPush::PushThink(void)
void __fastcall CPointPush::Activate(CPointPush *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  double v9; // xmm1_8
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  if ( this->m_bEnabled )
  {
    CBaseEntity::ThinkSet(this, CPointPush::PushThink, 0.0, 0, 0);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v12) = 0;
      *&v12 = v10->m_flCurrentTime + 0.050000001;
    }
    else
    {
      *&v12 = 1028443341;
    }
    CBaseEntity::SetNextThink(this, v12, v9, 0);
  }
  if ( this->m_iszFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iszFilterName.u.m_Id;
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
  CBaseEntity::Activate(this, activateType);
}


// CPointPush::PushEntity  (line 2086, @0x000000000230efe0, libserver.so)  // inlines: GetFlags, NetworkStateChanged, RemapValClamped, Set, SetBaseVelocity, VectorAdd, VectorMultiply, VectorSubtract, clamp<float, float>, operator!=, operator*, operator+, operator-, operator=
// calls: VectorNormalize, CBaseEntity::SetGroundEntity, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::AddFlag, CBaseEntity::VPhysicsGetObject
// callers: CPointPush::PushThink
// globals: jpt_230F0A8
void __fastcall CPointPush::PushEntity(CPointPush *const this, CBaseEntity *pTarget, const Vector *const vecPushPoint)
{
  float v5; // xmm0_4
  float m_flRadius; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float z; // xmm5_4
  float m_flMagnitude; // xmm0_4
  unsigned int m_Value; // eax
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v20; // xmm1_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm2_4
  IPhysicsObject *Object; // rax
  IPhysicsObject *v24; // rbx
  IPhysicsObject *v25; // rdi
  __int64 v26; // rax
  void (__fastcall *v27)(IPhysicsObject *, Vector *); // r13
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // [rsp+4h] [rbp-4Ch]
  vec_t v31; // [rsp+4h] [rbp-4Ch]
  float v32; // [rsp+8h] [rbp-48h]
  float frametime; // [rsp+8h] [rbp-48h]
  vec_t v34; // [rsp+8h] [rbp-48h]
  float flFalloffa; // [rsp+Ch] [rbp-44h]
  float flFalloff; // [rsp+Ch] [rbp-44h]
  vec_t flFalloffb; // [rsp+Ch] [rbp-44h]
  Vector vecPushDir; // [rsp+10h] [rbp-40h] BYREF
  Vector origin; // [rsp+20h] [rbp-30h] BYREF

  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 61))(this, &vecPushDir, 0, 0);
  }
  else
  {
    *&origin.x = (*(pTarget->_vptr_IHandleEntity + 169))(pTarget, vecPushPoint, 0);
    origin.z = v20;
    v21 = v20 - vecPushPoint->z;
    v22 = origin.x - vecPushPoint->x;
    vecPushDir.y = origin.y - vecPushPoint->y;
    vecPushDir.z = v21;
    vecPushDir.x = v22;
  }
  v5 = VectorNormalize(&vecPushDir);
  if ( (this->m_spawnflags.m_Value & 4) != 0 )
  {
LABEL_10:
    v10 = 1.0;
    goto LABEL_11;
  }
  m_flRadius = this->m_flRadius;
  v7 = 0.25 * m_flRadius;
  if ( m_flRadius == (0.25 * m_flRadius) )
  {
    v10 = 0.0;
    if ( (v5 - v7) < 0.0 )
      goto LABEL_11;
    goto LABEL_10;
  }
  v8 = v7 - m_flRadius;
  v9 = v5 - m_flRadius;
  v10 = 0.0;
  v11 = v9 / v8;
  if ( v11 >= 0.0 )
  {
    v10 = 1.0;
    if ( v11 <= 1.0 )
      v10 = v11 + 0.0;
  }
LABEL_11:
  switch ( pTarget->m_MoveType.m_Value )
  {
    case MoveType_t::MOVETYPE_NONE:
    case MoveType_t::MOVETYPE_PUSH:
    case MoveType_t::MOVETYPE_NOCLIP:
      return;
    case MoveType_t::MOVETYPE_STEP:
      vecPushDir.z = 0.0;
      z = 0.0;
      goto LABEL_13;
    case MoveType_t::MOVETYPE_VPHYSICS:
      flFalloff = v10;
      Object = CBaseEntity::VPhysicsGetObject(pTarget);
      v24 = Object;
      if ( Object != 0 )
      {
        v25 = Object;
        v26 = *Object;
        v27 = *(v26 + 1776);
        frametime = gpGlobals->frametime;
        v28 = (*(v26 + 208))(v25);
        v29 = (flFalloff * this->m_flMagnitude) * 100.0;
        origin.y = ((vecPushDir.y * v29) * v28) * frametime;
        origin.z = ((vecPushDir.z * v29) * v28) * frametime;
        origin.x = ((v29 * vecPushDir.x) * v28) * frametime;
        v27(v24, &origin);
      }
      break;
    default:
      z = vecPushDir.z;
LABEL_13:
      m_flMagnitude = this->m_flMagnitude;
      m_Value = pTarget->m_fFlags.m_Value;
      v15 = (vecPushDir.x * m_flMagnitude) * v10;
      v16 = (vecPushDir.y * m_flMagnitude) * v10;
      v17 = (m_flMagnitude * z) * v10;
      if ( (m_Value & 0x800000) != 0 )
      {
        v15 = v15 + pTarget->m_vecBaseVelocity.m_Value.x;
        v16 = v16 + pTarget->m_vecBaseVelocity.m_Value.y;
        v17 = v17 + pTarget->m_vecBaseVelocity.m_Value.z;
      }
      if ( v17 > 0.0 && (m_Value & 1) != 0 )
      {
        v30 = v17;
        v32 = v16;
        flFalloffa = v15;
        CBaseEntity::SetGroundEntity(pTarget, 0);
        AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
        *&origin.x = *&AbsOrigin->x;
        origin.z = AbsOrigin->z + 1.0;
        CBaseEntity::SetAbsOrigin(pTarget, &origin);
        v15 = flFalloffa;
        v16 = v32;
        v17 = v30;
      }
      if ( v15 != pTarget->m_vecBaseVelocity.m_Value.x
        || v16 != pTarget->m_vecBaseVelocity.m_Value.y
        || v17 != pTarget->m_vecBaseVelocity.m_Value.z )
      {
        v31 = v17;
        v34 = v16;
        flFalloffb = v15;
        (*(pTarget->_vptr_IHandleEntity + 22))(pTarget, 512, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pTarget->m_vecBaseVelocity.m_Value.x = flFalloffb;
        pTarget->m_vecBaseVelocity.m_Value.y = v34;
        pTarget->m_vecBaseVelocity.m_Value.z = v31;
      }
      CBaseEntity::AddFlag(pTarget, 0x800000);
      break;
  }
}


// CPointPush::PassesFilter  (line 2281, @0x00000000022df070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseFilter::PassesFilter
// callers: CPointPush::PushThink
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CPointPush::PassesFilter(CPointPush *const this, CBaseEntity *pEnt)
{
  uint32 m_Index; // ecx
  CEntityIdentity *v4; // rdi
  CEntityIdentity *v5; // rdi
  CBaseFilter *m_pInstance; // rdi

  m_Index = this->m_hFilter.m_Index;
  return m_Index + 2 <= 1
      || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFilter.m_Index) >> 9) & 0x3F]) == 0
      || (v5 = &v4[this->m_hFilter.m_Index & 0x1FF]) == 0
      || m_Index != v5->m_EHandle.m_Index
      || (m_pInstance = v5->m_pInstance) == 0
      || CBaseFilter::PassesFilter(m_pInstance, this, pEnt);
}


// CPointPush::PushThink  (line 2294, @0x00000000022ecf30, libserver.so)  // inlines: CEntityHandle, CGameQueryAttributes, CGameTrace, COverlapList, CUtlMemory, CUtlMemoryFixedGrowable, CUtlMemoryFixedGrowable_Base, CUtlVectorBase, CUtlVectorFixedGrowable, ConvertToExternalMemory, DEG2RAD, DotProduct, GetEntityIdentity, GetEntryIndex, GetFloat, GetHitEntity, GetInstance, GetMoveType, HitEntitiesOnlyByCollisionGroup, IndexToIdentity, Init, IsSolid, LookupEntity, Purge, Purge_FixedGrowable, RemoveAll, RnCollisionAttr_t, RnQueryAttr_t, RnQueryShapeAttr_t, SetCollisionGroup, SetEntityToIgnore, SetIgnore, SetObjectSetMask, UTIL_TraceLine, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator*, operator+, operator-, operator=, ~COverlapList, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: EntityIDFromBaseEntity, HierarchyIDFromBaseEntity, CBaseEntity::GetAbsOrigin, CGamePhysicsQueryInterface::EntitiesInSphere, CBaseEntity::GetMoveParent, CPointPush::PassesFilter, CGameTrace::Init, UTIL_TraceSphere, CPointPush::PushEntity, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CUtlMemory<COverlapHit, int>::Purge (19 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointPush::PushThink(CPointPush *const this)
{
  float m_flRadius; // ebx
  const Vector *AbsOrigin; // rax
  int v4; // eax
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  CEntityInstance *m_pInstance; // r13
  CConcreteEntityList *v8; // rsi
  CEntityIdentity *v9; // rdx
  __int64 v10; // rcx
  CEntityIdentity *v11; // rdx
  int (**vptr_IHandleEntity)(...); // rbx
  char v13; // al
  double v14; // xmm0_8
  bool v15; // zf
  vec_t v16; // xmm1_4
  vec_t v17; // xmm1_4
  const Vector *v18; // rax
  double v19; // xmm0_8
  double v20; // xmm1_8
  uint32 v21; // eax
  double (__fastcall *v22)(CEntityInstance *, const Vector *, _QWORD); // rbx
  const Vector *v23; // rax
  double v24; // xmm0_8
  vec_t v25; // xmm1_4
  const Vector *v26; // rax
  vec_t v27; // xmm0_4
  vec_t v28; // xmm2_4
  const QAngle *AbsAngles; // rax
  double v30; // xmm0_8
  float m_flInnerRadius; // xmm0_4
  const Vector *v32; // rax
  vec_t v33; // xmm3_4
  vec_t v34; // xmm0_4
  float v35; // [rsp+4h] [rbp-117Ch]
  float v36; // [rsp+8h] [rbp-1178h]
  float v37; // [rsp+Ch] [rbp-1174h]
  Vector vecStartPos; // [rsp+20h] [rbp-1160h] BYREF
  Vector vecEndPos; // [rsp+30h] [rbp-1150h]
  Vector vecDirToTarget_0; // [rsp+40h] [rbp-1140h] BYREF
  CGameQueryAttributes filter; // [rsp+50h] [rbp-1130h] BYREF
  Vector vecDirection; // [rsp+80h] [rbp-1100h] BYREF
  float v43; // [rsp+ACh] [rbp-10D4h]
  CEntityInstance *v44; // [rsp+C8h] [rbp-10B8h]
  __int64 v45; // [rsp+E8h] [rbp-1098h]
  __int64 v46; // [rsp+F0h] [rbp-1090h]
  __int64 v47; // [rsp+F8h] [rbp-1088h]
  int v48; // [rsp+100h] [rbp-1080h]
  __int16 v49; // [rsp+104h] [rbp-107Ch]
  char v50; // [rsp+106h] [rbp-107Ah]
  char v51; // [rsp+107h] [rbp-1079h]
  COverlapList results; // [rsp+130h] [rbp-1050h] BYREF
  unsigned __int64 v53; // [rsp+1148h] [rbp-38h]

  v53 = __readfsqword(0x28u);
  results.m_list.m_Size = 0;
  results.m_list.m_Memory.m_pMemory = &results.m_list.m_Memory.m_FixedMemory;
  results.m_list.m_Memory.m_nAllocationCount = 64;
  results.m_list.m_Memory.m_nGrowSize = 0x80000000;
  memset(&filter, 0, 24);
  *(&filter.RnQueryShapeAttr_t + 31) = *(&filter.RnQueryShapeAttr_t + 31) & 0xF0 | 9;
  filter.m_nObjectSetMask = 2;
  filter.m_nCollisionGroup = 4;
  filter.m_nEntityIdToIgnore = EntityIDFromBaseEntity(0);
  filter.m_nHierarchyId = HierarchyIDFromBaseEntity(0);
  m_flRadius = this->m_flRadius;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v4 = CGamePhysicsQueryInterface::EntitiesInSphere(g_pPhysicsQuery, AbsOrigin, m_flRadius, &filter, 1u, &results);
  if ( v4 > 0 )
  {
    v5 = 0;
    v6 = ((v4 - 1) + 1LL) << 6;
    while ( 1 )
    {
      m_pInstance = 0;
      v8 = CEntityHandle::gm_pEntityList;
      LODWORD(vecDirection.x) = results.m_list.m_Memory.m_pMemory[v5 / 0x40].m_ShapeAttributes.m_nEntityId;
      if ( (LODWORD(vecDirection.x) + 2) > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(vecDirection.x) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = LOWORD(vecDirection.x) & 0x1FF;
          v8 = (8 * v10);
          v11 = &v9[v10];
          if ( v11 != 0 && LODWORD(vecDirection.x) == v11->m_EHandle.m_Index )
            m_pInstance = v11->m_pInstance;
        }
      }
      vptr_IHandleEntity = m_pInstance[11]._vptr_IHandleEntity;
      if ( vptr_IHandleEntity == 0 )
        goto LABEL_3;
      if ( (*((*(*vptr_IHandleEntity + 13))(m_pInstance[11]._vptr_IHandleEntity, v8) + 31) & 1) != 0
        || (*((*(*vptr_IHandleEntity + 13))(vptr_IHandleEntity) + 31) & 2) != 0 )
      {
        if ( *(vptr_IHandleEntity + 83) != 0 && CBaseEntity::GetMoveParent(m_pInstance) == 0 )
        {
          v13 = BYTE5(m_pInstance[7]._vptr_IHandleEntity);
          if ( (v13 == 6 || (v13 - 2) <= 1u)
            && ((*(m_pInstance->_vptr_IHandleEntity + 140))(m_pInstance) == 0 || (this->m_spawnflags.m_Value & 8) != 0)
            && (BYTE5(m_pInstance[7]._vptr_IHandleEntity) != 6 || (this->m_spawnflags.m_Value & 0x10) != 0)
            && CPointPush::PassesFilter(this, m_pInstance) )
          {
            if ( this->m_flConeOfInfluence == 0.0 )
              goto LABEL_20;
            v22 = *(m_pInstance->_vptr_IHandleEntity + 169);
            v23 = CBaseEntity::GetAbsOrigin(this);
            v24 = v22(m_pInstance, v23, 0);
            vecEndPos.z = v25;
            *&vecEndPos.x = v24;
            v26 = CBaseEntity::GetAbsOrigin(this);
            v27 = vecEndPos.z - v26->z;
            v28 = vecEndPos.x - v26->x;
            vecDirToTarget_0.y = vecEndPos.y - v26->y;
            vecDirToTarget_0.z = v27;
            vecDirToTarget_0.x = v28;
            VectorNormalize(&vecDirToTarget_0);
            AbsAngles = CBaseEntity::GetAbsAngles(this);
            AngleVectors(AbsAngles, &vecDirection, 0, 0);
            v30 = cos((0.017453292 * this->m_flConeOfInfluence));
            if ( v30 <= (((vecDirToTarget_0.x * vecDirection.x) + (vecDirToTarget_0.y * vecDirection.y))
                       + (vecDirToTarget_0.z * vecDirection.z)) )
            {
LABEL_20:
              if ( (this->m_spawnflags.m_Value & 1) == 0 )
                goto LABEL_24;
              vecStartPos = *CBaseEntity::GetAbsOrigin(this);
              v14 = (*(m_pInstance->_vptr_IHandleEntity + 169))(m_pInstance, &vecStartPos, 0);
              v15 = this->m_flInnerRadius == 0.0;
              *&vecEndPos.x = v14;
              vecEndPos.z = v16;
              if ( !v15 )
              {
                vecDirection.y = vecEndPos.y - vecStartPos.y;
                vecDirection.z = vecEndPos.z - vecStartPos.z;
                vecDirection.x = vecEndPos.x - vecStartPos.x;
                VectorNormalize(&vecDirection);
                m_flInnerRadius = this->m_flInnerRadius;
                v37 = vecDirection.x * m_flInnerRadius;
                v36 = vecDirection.y * m_flInnerRadius;
                v35 = m_flInnerRadius * vecDirection.z;
                v32 = CBaseEntity::GetAbsOrigin(this);
                v33 = v37 + v32->x;
                v34 = v35 + v32->z;
                vecStartPos.y = v36 + v32->y;
                vecStartPos.x = v33;
                vecStartPos.z = v34;
              }
              v50 = 0;
              v45 = 0;
              v46 = 0;
              v47 = 0;
              v51 = 7;
              v48 = 0;
              v49 = 0;
              CGameTrace::Init(&vecDirection);
              *&vecDirToTarget_0.x = (*(m_pInstance->_vptr_IHandleEntity + 169))(m_pInstance, &vecStartPos, 0);
              vecDirToTarget_0.z = v17;
              UTIL_TraceSphere(
                &vecStartPos,
                &vecDirToTarget_0,
                phys_traceline_radius.m_pParent->m_Value.m_fValue,
                0x7001u,
                this,
                4,
                &vecDirection);
              if ( v43 >= 1.0 || v44 == m_pInstance )
              {
LABEL_24:
                v18 = CBaseEntity::GetAbsOrigin(this);
                CPointPush::PushEntity(this, m_pInstance, v18);
              }
            }
          }
        }
LABEL_3:
        v5 += 64LL;
        if ( v5 == v6 )
          break;
      }
      else
      {
        v5 += 64LL;
        if ( v5 == v6 )
          break;
      }
    }
  }
  *&v19 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.050000001;
  CBaseEntity::SetNextThink(this, v19, v20, 0);
  results.m_list.m_Size = 0;
  v21 = results.m_list.m_Memory.m_nGrowSize & 0xC0000000;
  if ( results.m_list.m_Memory.m_nAllocationCount < 0
    || results.m_list.m_Memory.m_pMemory == &results.m_list.m_Memory.m_FixedMemory )
  {
    if ( v21 == 0 )
      CUtlMemory<COverlapHit,int>::Purge(&results.m_list.m_Memory);
  }
  else if ( results.m_list.m_Memory.m_pMemory != 0 && v21 == 0 )
  {
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
  }
}


// CPointPush::InputEnable  (line 2394, @0x00000000022c1180, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CPointPush::PushThink(void)
void __fastcall CPointPush::InputEnable(CPointPush *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_bEnabled = 1;
  CBaseEntity::ThinkSet(this, CPointPush::PushThink, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v4->m_flCurrentTime + 0.050000001)), v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1028443341), v3, 0);
  }
}


// CPointPush::InputDisable  (line 2404, @0x00000000022c0fc0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
void __fastcall CPointPush::InputDisable(CPointPush *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  this->m_bEnabled = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v3, 0);
}


