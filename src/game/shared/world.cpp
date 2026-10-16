// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/world.cpp:66
class CInfoGameEventProxy : public CPointEntity {
public:

private:

	string_t m_iszEventName;  // +0x308
	float m_flRange;  // +0x310

	static datamap_t m_DataMap;
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
	CInfoGameEventProxy(CInfoGameEventProxy &);
	CInfoGameEventProxy(CInfoGameEventProxy &);
	CInfoGameEventProxy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputGenerateGameEvent(inputdata_t &);
	bool GameEventProxyCallback(CBaseEntity *, CBasePlayer *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CInfoGameEventProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/shared/world.cpp:154
class CDecal : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_nTexture;  // +0x308
	bool m_bLowPriority;  // +0x30c

	string_t m_entityName;  // +0x310
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
	CDecal(CDecal &);
	CDecal(CDecal &);
	CDecal();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void TriggerDecal(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputActivate(inputdata_t &);
	CBaseEntity * GetDecalEntityAndPosition(Vector *, Vector *, Vector *, bool);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void StaticDecal();
	virtual ~CDecal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// src/game/shared/world.cpp:242
class CTraceFilterValidForDecal : public CTraceFilterSimple {
public:

	CTraceFilterValidForDecal(CTraceFilterValidForDecal &);
	CTraceFilterValidForDecal(const CTraceFilterValidForDecal &);
	CTraceFilterValidForDecal(const CBaseEntity *, int);
	virtual bool ShouldHitEntity(CBaseEntity *);
	virtual ~CTraceFilterValidForDecal();

	// vtable[2] ShouldHitEntity
	// sizeof = 64
};

// src/game/shared/world.cpp:401
class CProjectedDecal : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_nTexture;  // +0x308
	float m_flDistance;  // +0x30c
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
	CProjectedDecal(CProjectedDecal &);
	CProjectedDecal(CProjectedDecal &);
	CProjectedDecal();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Activate(ActivateType_t);
	void TriggerDecal(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	void InputActivate(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void ProjectDecal(CRecipientFilter &);
	void StaticDecal();
	virtual ~CProjectedDecal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/shared/world.cpp:537
class CWorld : public CBaseModelEntity {
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
	CWorld(CWorld &);
	CWorld(CWorld &);
	CWorld();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual CEntityIndex RequiredEdictIndex();

protected:

	virtual void AddedToEntityDatabase();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	virtual bool IsWorld();
	virtual int UpdateTransmitState();
	virtual void DecalTrace(trace_t *, const char *);
	virtual void VPhysicsCollision(int, gamevcollisionevent_t *);
	virtual void VPhysicsFriction(IPhysicsObject *, float, CUtlStringToken, CUtlStringToken);
	virtual ~CWorld();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[20] RequiredEdictIndex
	// vtable[7] AddedToEntityDatabase
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[143] IsWorld
	// vtable[64] UpdateTransmitState
	// vtable[96] DecalTrace
	// vtable[57] VPhysicsCollision
	// vtable[58] VPhysicsFriction
	// sizeof = 1152
};

// src/game/shared/world.cpp:576
class C_CWorld_MapInstall {
	C_CWorld_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoGameEventProxy::~CInfoGameEventProxy  (line 66, @0x0000000002139e20, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoGameEventProxy::~CInfoGameEventProxy(CInfoGameEventProxy *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoGameEventProxy::~CInfoGameEventProxy  (line 66, @0x0000000002139e40, libserver.so)  // inlines: ~CInfoGameEventProxy, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoGameEventProxy::~CInfoGameEventProxy(CInfoGameEventProxy *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoGameEventProxy::GetEntityClass  (line 68, @0x0000000002139720, libserver.so)
CEntityClass *__cdecl CInfoGameEventProxy::GetEntityClass()
{
  return g_pEntityCInfoGameEventProxyClass;
}


// CInfoGameEventProxy::Schema_DynamicBinding  (line 68, @0x0000000002139730, libserver.so)
// globals: CInfoGameEventProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoGameEventProxy::Schema_DynamicBinding(
        const CInfoGameEventProxy *const this)
{
  return CInfoGameEventProxy::s_pSchemaBinding;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002139740, libserver.so)
// globals: CInfoGameEventProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  return CInfoGameEventProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002139750, libserver.so)  // inlines: Destruct<CInfoGameEventProxy>
void __fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::DestructInstance(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002139770, libserver.so)
void __fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::FreeInstance(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002139790, libserver.so)
bool __fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::CanAllocate(
        const CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x00000000021397a0, libserver.so)
// globals: CInfoGameEventProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  return CInfoGameEventProxy::s_pSchemaBinding;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002139c20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::AllocateInstance(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002139d20, libserver.so)  // inlines: CInfoGameEventProxy, CPointEntity, CUtlSymbolLarge, Construct<CInfoGameEventProxy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::ConstructInstance(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_3FFD290;
  }
  return p;
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x000000000213a1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x000000000213a1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoGameEventProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoGameEventProxy::GetEntityClassInternal  (line 68, @0x000000000213b100, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "info_game_event_proxy", "CInfoGameEventProxy"
// globals: `guard variable for'CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass, CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo, CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo
CEntityClass *__cdecl CInfoGameEventProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass) != 0 )
  {
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_designerName.u.m_Id = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass._vptr_CEntityClass = off_3F79390;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_ComponentOffsets.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_AllHelpers.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classInputs.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classOutputs.m_Size = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_requiredEHandle.m_Index = -1;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_hNetworkSerializer = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pBaseClassInfo = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pClassInfo = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_flags = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_nAllHelpersFlags = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pScriptClassDesc = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pInputs = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_nInputCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pOutputs = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_nOutputCount = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pGameClass = 0;
    CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass._vptr_CEntityClass = off_3FFD210;
    __cxa_guard_release(&`guard variable for'CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass);
    __cxa_atexit(
      CInfoGameEventProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoGameEventProxyClass != 0 )
    return &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass;
  if ( `guard variable for'CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo,
      "CInfoGameEventProxy",
      "info_game_event_proxy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo);
  }
  CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pClassInfo = &CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo;
  CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pBaseClassInfo = CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoGameEventProxyClass = &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass;
  CInfoGameEventProxy::GetEntityClassInfo(void)::g_EntityCInfoGameEventProxyClassInfo.m_pClass = &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass;
  CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoGameEventProxyClass->m_pComponentOverrides = 0;
  return &CInfoGameEventProxy::GetEntityClassInternal(void)::g_EntityCInfoGameEventProxyClass;
}


// CInfoGameEventProxy::Spawn  (line 86, @0x0000000002134750, libserver.so)
// calls: CPointEntity::Spawn, VisibilityMonitor_AddEntity
// globals: CInfoGameEventProxy::GameEventProxyCallback(CBaseEntity *,CBasePlayer *)
void __fastcall CInfoGameEventProxy::Spawn(CInfoGameEventProxy *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // zf
  float v4; // xmm0_4

  CPointEntity::Spawn(this, pKeyValues);
  v3 = (this->m_spawnflags.m_Value & 1) == 0;
  v4 = 12.0 * this->m_flRange;
  this->m_flRange = v4;
  if ( !v3 )
    VisibilityMonitor_AddEntity(this, v4, CInfoGameEventProxy::GameEventProxyCallback, 0);
}


// CInfoGameEventProxy::UpdateTransmitState  (line 102, @0x00000000021346f0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CInfoGameEventProxy::UpdateTransmitState(CInfoGameEventProxy *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CInfoGameEventProxy::InputGenerateGameEvent  (line 109, @0x00000000021351d0, libserver.so)  // inlines: CreateEvent, GetUserID, String, ToBasePlayer, ToCStr, entindex
// calls: CEntityInstance::GetEntityIndex
// strings: "subject"
void __fastcall CInfoGameEventProxy::InputGenerateGameEvent(
        CInfoGameEventProxy *const this,
        inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx
  const CEntityInstance *v4; // r12
  const char *m_pAsString; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, char *, _QWORD); // r15
  CEntityIndex v9; // eax
  unsigned int v10; // eax
  void (__fastcall *v11)(__int64, const char *, _QWORD); // r12
  CEntityIndex v12; // eax

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0 )
  {
    v4 = 0;
    if ( (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
      v4 = pActivator;
  }
  else
  {
    v4 = 0;
  }
  m_pAsString = "";
  if ( this->m_iszEventName.u.m_Id != 0 )
    m_pAsString = this->m_iszEventName.u.m_pAsString;
  v6 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, m_pAsString, 0, 0);
  v7 = v6;
  if ( v6 != 0 )
  {
    if ( v4 != 0 )
    {
      v8 = *(*v6 + 112LL);
      v9.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
      v10 = (*(*engine + 224LL))(engine, (v9.m_Data - 1));
      v8(v7, "userid", v10);
    }
    v11 = *(*v7 + 112LL);
    v12.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    v11(v7, "subject", v12.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v7, 0);
  }
}


// CInfoGameEventProxy::GameEventProxyCallback  (line 129, @0x00000000021350c0, libserver.so)  // inlines: CreateEvent, GetUserID, String, ToCStr, entindex
// calls: __dynamic_cast, CEntityInstance::GetEntityIndex
// strings: "subject"
// globals: `typeinfo for'CInfoGameEventProxy
bool __fastcall CInfoGameEventProxy::GameEventProxyCallback(CBaseEntity *pProxy, CBasePlayer *pViewingPlayer)
{
  void *v3; // rax
  const CEntityInstance *v4; // r12
  const char *v5; // rsi
  bool v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  CEntityIndex v9; // eax
  unsigned int v10; // eax
  void (__fastcall *v11)(__int64, const char *, _QWORD); // r13
  CEntityIndex v12; // eax
  void (__fastcall *v14)(__int64, char *, _QWORD); // [rsp+8h] [rbp-38h]

  if ( pProxy == 0 )
    return 1;
  v3 = __dynamic_cast(pProxy, &`typeinfo for'CBaseEntity, &`typeinfo for'CInfoGameEventProxy, 0);
  v4 = v3;
  if ( v3 == 0 )
    return 1;
  v5 = "";
  if ( *(v3 + 97) != 0 )
    v5 = *(v3 + 97);
  v6 = 0;
  v7 = (*(gameeventmanager->_vptr_IBaseInterface + 7))(gameeventmanager, v5, 0, 0);
  v8 = v7;
  if ( v7 != 0 )
  {
    v14 = *(*v7 + 112LL);
    v9.m_Data = CEntityInstance::GetEntityIndex(pViewingPlayer).m_Data;
    v10 = (*(*engine + 224LL))(engine, (v9.m_Data - 1));
    v14(v8, "userid", v10);
    v11 = *(*v8 + 112LL);
    v12.m_Data = CEntityInstance::GetEntityIndex(v4).m_Data;
    v11(v8, "subject", v12.m_Data);
    (*(gameeventmanager->_vptr_IBaseInterface + 8))(gameeventmanager, v8, 0);
  }
  return v6;
}


// CInfoGameEventProxy::GetDataDescMap  (line 148, @0x00000000021346b0, libserver.so)
// globals: CInfoGameEventProxy::m_DataMap
datamap_t *__fastcall CInfoGameEventProxy::GetDataDescMap(CInfoGameEventProxy *const this)
{
  return &CInfoGameEventProxy::m_DataMap;
}


// CInfoGameEventProxy::AddDatadescMetadataKeys  (line 148, @0x00000000021359f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoGameEventProxy::GetEntityClass(void)
void __fastcall CInfoGameEventProxy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoGameEventProxy::GetEntityClass);
}


// CInfoGameEventProxy::GetBaseMap  (line 148, @0x0000000002135a10, libserver.so)
datamap_t *__cdecl CInfoGameEventProxy::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CInfoGameEventProxy>  (line 148, @0x0000000002135a20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "CInfoGameEventProxy"
// globals: `guard variable for'DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder, CInfoGameEventProxy::GetEntityClass(void), CInfoGameEventProxy::m_DataMap, DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_pszBase = "CInfoGameEventProxy";
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder.m_nLenBase = 19;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::nameHolder,
      &_dso_handle);
  }
  CInfoGameEventProxy::m_DataMap.dataNumFields = 3;
  CInfoGameEventProxy::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CInfoGameEventProxy::m_DataMap.dataDesc = &DataMapInit<CInfoGameEventProxy>(CInfoGameEventProxy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoGameEventProxy::m_DataMap, CInfoGameEventProxy::GetEntityClass);
  return &CInfoGameEventProxy::m_DataMap;
}


// CDecal::~CDecal  (line 154, @0x0000000002139e70, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CDecal::~CDecal(CDecal *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CDecal::~CDecal  (line 154, @0x0000000002139e90, libserver.so)  // inlines: ~CDecal, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CDecal::~CDecal(CDecal *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CDecal::GetEntityClass  (line 156, @0x00000000021397b0, libserver.so)
CEntityClass *__cdecl CDecal::GetEntityClass()
{
  return g_pEntityCDecalClass;
}


// CDecal::Schema_DynamicBinding  (line 156, @0x00000000021397c0, libserver.so)
// globals: CDecal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDecal::Schema_DynamicBinding(const CDecal *const this)
{
  return CDecal::s_pSchemaBinding;
}


// CDecal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 156, @0x00000000021397d0, libserver.so)
// globals: CDecal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDecal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDecal::CEntityInstanceEntityClass *const this)
{
  return CDecal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDecal::CEntityInstanceEntityClass::DestructInstance  (line 156, @0x00000000021397e0, libserver.so)  // inlines: Destruct<CDecal>
void __fastcall CDecal::CEntityInstanceEntityClass::DestructInstance(
        CDecal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDecal::CEntityInstanceEntityClass::FreeInstance  (line 156, @0x0000000002139800, libserver.so)
void __fastcall CDecal::CEntityInstanceEntityClass::FreeInstance(
        CDecal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDecal::CEntityInstanceEntityClass::CanAllocate  (line 156, @0x0000000002139820, libserver.so)
bool __fastcall CDecal::CEntityInstanceEntityClass::CanAllocate(const CDecal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDecal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 156, @0x0000000002139830, libserver.so)
// globals: CDecal::s_pSchemaBinding
const ISchemaBinding *__fastcall CDecal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDecal::CEntityInstanceEntityClass *const this)
{
  return CDecal::s_pSchemaBinding;
}


// CDecal::CEntityInstanceEntityClass::AllocateInstance  (line 156, @0x0000000002139c60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDecal::CEntityInstanceEntityClass::AllocateInstance(CDecal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CDecal::CEntityInstanceEntityClass::ConstructInstance  (line 156, @0x0000000002139d60, libserver.so)  // inlines: CDecal, CPointEntity, CUtlSymbolLarge, Construct<CDecal>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CDecal::CEntityInstanceEntityClass::ConstructInstance(
        CDecal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_3FFD9B0;
  }
  return p;
}


// CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x000000000213a220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDecal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 156, @0x000000000213a240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDecal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDecal::GetEntityClassInternal  (line 156, @0x000000000213b870, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "infodecal", "CDecal"
// globals: `guard variable for'CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass, CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo, CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo
CEntityClass *__cdecl CDecal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass) != 0 )
  {
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_designerName.u.m_Id = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass._vptr_CEntityClass = off_3F79390;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_ComponentOffsets.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_AllHelpers.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classInputs.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classOutputs.m_Size = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_requiredEHandle.m_Index = -1;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_hNetworkSerializer = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pBaseClassInfo = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pClassInfo = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_flags = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_nAllHelpersFlags = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pScriptClassDesc = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pInputs = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_nInputCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pOutputs = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_nOutputCount = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pGameClass = 0;
    CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass._vptr_CEntityClass = off_3FFD930;
    __cxa_guard_release(&`guard variable for'CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass);
    __cxa_atexit(
      CDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDecalClass != 0 )
    return &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass;
  if ( `guard variable for'CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo,
      "CDecal",
      "infodecal",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo);
  }
  CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pClassInfo = &CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo;
  CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pBaseClassInfo = CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo.m_pBaseClassInfo;
  g_pEntityCDecalClass = &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass;
  CDecal::GetEntityClassInfo(void)::g_EntityCDecalClassInfo.m_pClass = &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass;
  CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCDecalClass->m_pComponentOverrides = 0;
  return &CDecal::GetEntityClassInternal(void)::g_EntityCDecalClass;
}


// CDecal::GetDataDescMap  (line 187, @0x00000000021346c0, libserver.so)
// globals: CDecal::m_DataMap
datamap_t *__fastcall CDecal::GetDataDescMap(CDecal *const this)
{
  return &CDecal::m_DataMap;
}


// CDecal::AddDatadescMetadataKeys  (line 187, @0x0000000002135af0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDecal::GetEntityClass(void)
void __fastcall CDecal::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDecal::GetEntityClass);
}


// CDecal::GetBaseMap  (line 187, @0x0000000002135b10, libserver.so)
datamap_t *__cdecl CDecal::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CDecal>  (line 187, @0x0000000002137170, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "CDecal"
// globals: `guard variable for'DataMapInit<CDecal>(CDecal *)::nameHolder, `guard variable for'DataMapInit<CDecal>(CDecal *)::dataDesc, CDecal::GetEntityClass(void), CDecal::m_DataMap, DataMapInit<CDecal>(CDecal *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDecal>(CDecal *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::nameHolder) != 0 )
  {
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_pszBase = "CDecal";
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_nLenBase = 6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDecal>(CDecal *)::nameHolder,
      &_dso_handle);
  }
  CDecal::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CDecal>(CDecal *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CDecal>(CDecal *)::nameHolder.m_pszBase), "StaticDecal");
    m_Size = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size == DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CDecal>(CDecal *)::dataDesc[4].fieldName = v2;
    v6 = operator new[](DataMapInit<CDecal>(CDecal *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CDecal>(CDecal *)::nameHolder.m_pszBase), "TriggerDecal");
    v7 = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size == DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CDecal>(CDecal *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CDecal>(CDecal *)::dataDesc[5].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDecal>(CDecal *)::dataDesc);
  }
  CDecal::m_DataMap.dataNumFields = 6;
  CDecal::m_DataMap.dataDesc = &DataMapInit<CDecal>(CDecal *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDecal::m_DataMap, CDecal::GetEntityClass);
  return &CDecal::m_DataMap;
}


// CDecal::Spawn  (line 202, @0x00000000021353f0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CPointEntity::Spawn, CEntityKeyValues::HasValue, UTIL_Remove, UTIL_GetPrecachedDecalIndex, Warning
// strings: "Can't find decal %s\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDecal::Spawn(CDecal *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rbx
  CEntityVariant *p_m_value; // rax
  int PrecachedDecalIndex; // eax

  CPointEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1622107784) )
  {
LABEL_2:
    if ( this->m_nTexture >= 0 )
      goto LABEL_3;
    goto LABEL_5;
  }
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_19:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_18;
    goto LABEL_20;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1622107784 )
      goto LABEL_15;
LABEL_12:
    if ( m_nCount <= ++v6 )
      goto LABEL_19;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1622107784 )
    goto LABEL_12;
LABEL_15:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_18:
    m_uint64 = p_m_value->m_uint64;
LABEL_20:
  PrecachedDecalIndex = UTIL_GetPrecachedDecalIndex(m_uint64);
  this->m_nTexture = PrecachedDecalIndex;
  if ( PrecachedDecalIndex < 0 )
  {
    Warning("Can't find decal %s\n", m_uint64);
    goto LABEL_2;
  }
LABEL_3:
  if ( gpGlobals->maxClients > 1 && (this->m_spawnflags.m_Value & 0x800) != 0 )
LABEL_5:
    UTIL_Remove(this);
}


// CDecal::Activate  (line 226, @0x0000000002136470, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseEntity::Activate, CBaseEntity::ThinkSet, CDecal::StaticDecal
// globals: CDecal::TriggerDecal(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CDecal::Activate(CDecal *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
  {
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_DoNothing, 0.0, 0, 0);
    this->m_pfnUse.__delta = 0;
    this->m_pfnUse.__pfn = CDecal::TriggerDecal;
  }
  else
  {
    CDecal::StaticDecal(this);
  }
}


// CTraceFilterValidForDecal::~CTraceFilterValidForDecal  (line 242, @0x00000000021399a0, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple
void __fastcall CTraceFilterValidForDecal::~CTraceFilterValidForDecal(CTraceFilterValidForDecal *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
}


// CTraceFilterValidForDecal::~CTraceFilterValidForDecal  (line 242, @0x0000000002139c00, libserver.so)  // inlines: ~CTraceFilter, ~CTraceFilterSimple, ~CTraceFilterValidForDecal
// calls: operator delete
void __fastcall CTraceFilterValidForDecal::~CTraceFilterValidForDecal(CTraceFilterValidForDecal *const this)
{
  this->_vptr_CTraceFilter = off_3FE6970;  // vptr: CTraceFilter
  operator delete(this);
}


// CTraceFilterValidForDecal::ShouldHitEntity  (line 250, @0x000000000213a000, libserver.so)  // inlines: ClassMatches
// calls: CEntityIdentity::ClassMatches, CTraceFilterSimple::ShouldHitEntity
// globals: CTraceFilterValidForDecal::ShouldHitEntity(CBaseEntity *)::ppszIgnoredClasses
bool __fastcall CTraceFilterValidForDecal::ShouldHitEntity(CTraceFilterValidForDecal *const this, CBaseEntity *pEntity)
{
  const char **v3; // rbx

  if ( (pEntity->m_fEffects.m_Value & 0x20) == 0 )
  {
    v3 = CTraceFilterValidForDecal::ShouldHitEntity(CBaseEntity *)::ppszIgnoredClasses;
    while ( !CEntityIdentity::ClassMatches(pEntity->m_pEntity, *v3) )
    {
      if ( ++v3 == &unk_4865C98 )
        return CTraceFilterSimple::ShouldHitEntity(this, pEntity);
    }
  }
  return 0;
}


// CDecal::GetDecalEntityAndPosition  (line 278, @0x0000000002135b20, libserver.so)  // inlines: CGameTrace, CTraceFilterValidForDecal, CUtlSymbolLarge, DidHit, DidHitNonWorldEntity, EnableInteractsWith, GetFloat, Init, IsNullString, IsValid, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, Vector, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator!, operator*, operator+, operator-, operator-=, operator=, operator==
// calls: CGameTrace::Init, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, AngleVectorsForward, CGameEntitySystem::FindEntityByName, AngleVectorsFLU
// callers: CDecal::TriggerDecal, CDecal::StaticDecal
CBaseEntity *__fastcall CDecal::GetDecalEntityAndPosition(
        CDecal *const this,
        Vector *pPosition,
        Vector *pNormal,
        Vector *pSAxis,
        bool bStatic)
{
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm5_4
  vec_t y; // xmm6_4
  const QAngle *AbsAngles; // rax
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float m_fValue; // xmm4_4
  const QAngle *v20; // rax
  const QAngle *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // [rsp+14h] [rbp-1ACh]
  float v27; // [rsp+18h] [rbp-1A8h]
  float v28; // [rsp+1Ch] [rbp-1A4h]
  float z; // [rsp+28h] [rbp-198h]
  float v30; // [rsp+2Ch] [rbp-194h]
  float pEntity; // [rsp+30h] [rbp-190h]
  CBaseEntity *pEntitya; // [rsp+30h] [rbp-190h]
  Vector direction; // [rsp+40h] [rbp-180h] BYREF
  CTraceFilterValidForDecal traceFilter; // [rsp+50h] [rbp-170h] BYREF
  Vector vLeft; // [rsp+90h] [rbp-130h] BYREF
  int v37; // [rsp+9Ch] [rbp-124h]
  float v38; // [rsp+A0h] [rbp-120h]
  float v39; // [rsp+A4h] [rbp-11Ch]
  float v40; // [rsp+A8h] [rbp-118h]
  int v41; // [rsp+ACh] [rbp-114h]
  int v42; // [rsp+B0h] [rbp-110h]
  int v43; // [rsp+B4h] [rbp-10Ch]
  int v44; // [rsp+B8h] [rbp-108h]
  int v45; // [rsp+BCh] [rbp-104h]
  int v46; // [rsp+C0h] [rbp-100h]
  int v47; // [rsp+C4h] [rbp-FCh]
  int v48; // [rsp+C8h] [rbp-F8h]
  int v49; // [rsp+CCh] [rbp-F4h]
  float v50; // [rsp+D0h] [rbp-F0h]
  char v51; // [rsp+D4h] [rbp-ECh]
  bool v52; // [rsp+D5h] [rbp-EBh]
  trace_t trace; // [rsp+E0h] [rbp-E0h] BYREF

  if ( this->m_entityName.u.m_Id != 0 )
  {
    *&trace.startpos.x = this->m_entityName.u.m_Id;
    pEntitya = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &trace, this, 0, 0, 0);
  }
  else
  {
    memset(&trace.m_ShapeAttributes, 0, 31);
    trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&trace);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    x = AbsOrigin->x;
    direction.x = 1.0;
    y = AbsOrigin->y;
    direction.y = 1.0;
    v30 = x;
    pEntity = y;
    z = AbsOrigin->z;
    direction.z = 1.0;
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    if ( vec3_angle.x == AbsAngles->x && vec3_angle.y == AbsAngles->y && vec3_angle.z == AbsAngles->z )
    {
      v13 = direction.x;
      v14 = direction.y;
      v15 = direction.z;
      v30 = v30 - (direction.x * 5.0);
      pEntity = pEntity - (direction.y * 5.0);
      z = z - (5.0 * direction.z);
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 61))(this, &direction, 0, 0);
      v13 = direction.x;
      v14 = direction.y;
      v15 = direction.z;
    }
    v16 = (v13 * 10.0) + v30;
    v17 = (v14 * 10.0) + pEntity;
    v18 = (v15 * 10.0) + z;
    if ( bStatic )
    {
      v26 = v18;
      v27 = v17;
      v28 = v16;
      CTraceFilterSimple::CTraceFilterSimple(&traceFilter, this, 4, 0);
      traceFilter._vptr_CTraceFilter = off_3FFE050;
      m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      v38 = v28 - v30;
      v39 = v27 - pEntity;
      v40 = v26 - z;
      v37 = 0;
      v41 = 0;
      v45 = 0;
      v49 = 0;
      v50 = m_fValue;
      v48 = 0;
      v47 = 0;
      v46 = 0;
      v51 = 1;
      v44 = 0;
      v43 = 0;
      v42 = 0;
      vLeft.x = v30;
      vLeft.y = pEntity;
      v52 = (((v38 * v38) + (v39 * v39)) + (v40 * v40)) != 0.0;
      vLeft.z = z;
      traceFilter.m_attr.m_nInteractsWith |= 0x87001uLL;
    }
    else
    {
      v25 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
      v39 = v17 - pEntity;
      v40 = v18 - z;
      v50 = v25;
      v37 = 0;
      v41 = 0;
      v45 = 0;
      v49 = 0;
      v38 = v16 - v30;
      v48 = 0;
      v47 = 0;
      v46 = 0;
      v51 = 1;
      v44 = 0;
      v43 = 0;
      v42 = 0;
      vLeft.x = v30;
      vLeft.y = pEntity;
      vLeft.z = z;
      v52 = (((v38 * v38) + (v39 * v39)) + (v40 * v40)) != 0.0;
      CTraceFilterSimple::CTraceFilterSimple(&traceFilter, this, 4, 0);
      traceFilter.m_attr.m_nInteractsWith |= 0x7001uLL;
    }
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &vLeft, &traceFilter, &trace);
    if ( (trace.fraction < 1.0 || trace.startsolid) && trace.m_ShapeAttributes.m_nEntityId != 0x8000 )
    {
      *pPosition = trace.endpos;
      *pNormal = trace.plane.normal;
      v20 = CBaseEntity::GetAbsAngles(this);
      AngleVectorsForward(v20, pSAxis);
      return trace.m_pEnt;
    }
    pEntitya = 0;
  }
  *pPosition = *CBaseEntity::GetAbsOrigin(this);
  v22 = CBaseEntity::GetAbsAngles(this);
  AngleVectorsFLU(v22, pSAxis, &vLeft, &trace.startpos);
  v23 = trace.startpos.y;
  v24 = trace.startpos.x;
  pNormal->z = -trace.startpos.z;
  pNormal->y = -v23;
  pNormal->x = -v24;
  return pEntitya;
}


// CDecal::TriggerDecal  (line 328, @0x0000000002136170, libserver.so)  // inlines: CBroadcastRecipientFilter, CGameTrace, RnCollisionAttr_t, curtime, entindex, ~CBroadcastRecipientFilter
// calls: CGameTrace::Init, CDecal::GetDecalEntityAndPosition, CEntityInstance::GetEntityIndex, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CDecal::InputActivate
void __fastcall CDecal::TriggerDecal(
        CDecal *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  CBaseEntity *DecalEntityAndPosition; // rax
  double v7; // xmm1_8
  CGlobalVars *v8; // r13
  double v9; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  unsigned int m_Data; // [rsp+Ch] [rbp-254h]
  Vector position; // [rsp+10h] [rbp-250h] BYREF
  Vector normal; // [rsp+20h] [rbp-240h] BYREF
  Vector saxis; // [rsp+30h] [rbp-230h] BYREF
  trace_t trace; // [rsp+40h] [rbp-220h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+F0h] [rbp-170h] BYREF
  unsigned __int64 v17; // [rsp+228h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  memset(&trace.m_ShapeAttributes, 0, 31);
  trace.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&trace);
  DecalEntityAndPosition = CDecal::GetDecalEntityAndPosition(this, &position, &normal, &saxis, 0);
  m_Data = 0;
  if ( DecalEntityAndPosition != 0 )
    m_Data = CEntityInstance::GetEntityIndex(DecalEntityAndPosition).m_Data;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  (*(te->_vptr_IPredictionSystem + 10))(te, &filter, &position, &normal, &saxis, m_Data, 0.0, this->m_nTexture);
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v9) = 0;
    *&v9 = v8->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v9 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v9, v7, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDecal::InputActivate  (line 350, @0x0000000002136370, libserver.so)
// calls: CDecal::TriggerDecal
void __fastcall CDecal::InputActivate(CDecal *const this, inputdata_t *const inputdata)
{
  CDecal::TriggerDecal(this, inputdata->pActivator, inputdata->pCaller, USE_ON, 0.0);
}


// CDecal::StaticDecal  (line 356, @0x0000000002136390, libserver.so)  // inlines: CEntityIndex, VectorITransform, entindex, operator=
// calls: CDecal::GetDecalEntityAndPosition, CEntityInstance::GetEntityIndex, CBaseEntity::EntityToWorldTransform, VectorITransform, CBaseEntity::SUB_Remove, CBaseEntity::GetAbsOrigin
// callers: CDecal::Activate
void __fastcall CDecal::StaticDecal(CDecal *const this)
{
  unsigned int m_Data; // r14d
  CBaseEntity *DecalEntityAndPosition; // rax
  CBaseEntity *v4; // r13
  matrix3x4_t *v5; // rax
  Vector position; // [rsp+0h] [rbp-60h] BYREF
  Vector normal; // [rsp+10h] [rbp-50h] BYREF
  Vector saxis; // [rsp+20h] [rbp-40h] BYREF
  Vector worldspace; // [rsp+30h] [rbp-30h] BYREF

  m_Data = 0;
  DecalEntityAndPosition = CDecal::GetDecalEntityAndPosition(this, &position, &normal, &saxis, 1);
  v4 = DecalEntityAndPosition;
  if ( DecalEntityAndPosition != 0 )
  {
    m_Data = CEntityInstance::GetEntityIndex(DecalEntityAndPosition).m_Data;
    worldspace = position;
    v5 = CBaseEntity::EntityToWorldTransform(v4);
    VectorITransform(&worldspace.x, v5, &position.x);
  }
  else
  {
    position = *CBaseEntity::GetAbsOrigin(this);
  }
  (*(*engine + 304LL))(engine, &position, this->m_nTexture, m_Data, 0, this->m_bLowPriority);
  CBaseEntity::SUB_Remove(this);
}


// CDecal::Precache  (line 386, @0x0000000002139520, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, Precache, TempString, operator[]
// calls: CEntityInstance::Precache, CEntityKeyValues::HasValue, UTIL_PrecacheDecal
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CDecal::Precache(CDecal *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v4; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rdi
  CEntityVariant *p_m_value; // rax

  CEntityInstance::Precache(this, pContext);
  if ( !CEntityKeyValues::HasValue(pContext->m_pKeyValues, 1622107784) )
    return;
  m_pKeyValues = pContext->m_pKeyValues;
  v4 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v4 <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_13;
    goto LABEL_15;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1622107784 )
      goto LABEL_10;
LABEL_7:
    if ( *&v4 <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1622107784 )
    goto LABEL_7;
LABEL_10:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_13:
    m_uint64 = p_m_value->m_uint64;
LABEL_15:
  UTIL_PrecacheDecal(m_uint64, pContext, 1);
}


// CProjectedDecal::~CProjectedDecal  (line 401, @0x0000000002139ec0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CProjectedDecal::~CProjectedDecal(CProjectedDecal *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CProjectedDecal::~CProjectedDecal  (line 401, @0x0000000002139ee0, libserver.so)  // inlines: ~CPointEntity, ~CProjectedDecal
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CProjectedDecal::~CProjectedDecal(CProjectedDecal *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CProjectedDecal::GetEntityClass  (line 403, @0x0000000002139840, libserver.so)
CEntityClass *__cdecl CProjectedDecal::GetEntityClass()
{
  return g_pEntityCProjectedDecalClass;
}


// CProjectedDecal::Schema_DynamicBinding  (line 403, @0x0000000002139850, libserver.so)
// globals: CProjectedDecal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CProjectedDecal::Schema_DynamicBinding(const CProjectedDecal *const this)
{
  return CProjectedDecal::s_pSchemaBinding;
}


// CProjectedDecal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 403, @0x0000000002139860, libserver.so)
// globals: CProjectedDecal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CProjectedDecal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  return CProjectedDecal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CProjectedDecal::CEntityInstanceEntityClass::DestructInstance  (line 403, @0x0000000002139870, libserver.so)  // inlines: Destruct<CProjectedDecal>
void __fastcall CProjectedDecal::CEntityInstanceEntityClass::DestructInstance(
        CProjectedDecal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CProjectedDecal::CEntityInstanceEntityClass::FreeInstance  (line 403, @0x0000000002139890, libserver.so)
void __fastcall CProjectedDecal::CEntityInstanceEntityClass::FreeInstance(
        CProjectedDecal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CProjectedDecal::CEntityInstanceEntityClass::CanAllocate  (line 403, @0x00000000021398b0, libserver.so)
bool __fastcall CProjectedDecal::CEntityInstanceEntityClass::CanAllocate(
        const CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CProjectedDecal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 403, @0x00000000021398c0, libserver.so)
// globals: CProjectedDecal::s_pSchemaBinding
const ISchemaBinding *__fastcall CProjectedDecal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  return CProjectedDecal::s_pSchemaBinding;
}


// CProjectedDecal::CEntityInstanceEntityClass::AllocateInstance  (line 403, @0x0000000002139ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CProjectedDecal::CEntityInstanceEntityClass::AllocateInstance(
        CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CProjectedDecal::CEntityInstanceEntityClass::ConstructInstance  (line 403, @0x0000000002139da0, libserver.so)  // inlines: CPointEntity, CProjectedDecal, Construct<CProjectedDecal>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CProjectedDecal::CEntityInstanceEntityClass::ConstructInstance(
        CProjectedDecal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FFE110;
  }
  return p;
}


// CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 403, @0x000000000213a270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 403, @0x000000000213a290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CProjectedDecal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CProjectedDecal::GetEntityClassInternal  (line 403, @0x000000000213b450, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "info_projecteddecal", "CProjectedDecal", "CPointEntity", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass, CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo, CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (13 total)
CEntityClass *__cdecl CProjectedDecal::GetEntityClassInternal()
{
  if ( `guard variable for'CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass) != 0 )
  {
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_designerName.u.m_Id = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass._vptr_CEntityClass = off_3F79390;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_ComponentOffsets.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_AllHelpers.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classInputs.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classOutputs.m_Size = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_requiredEHandle.m_Index = -1;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_hNetworkSerializer = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pBaseClassInfo = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pClassInfo = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_flags = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_nAllHelpersFlags = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pScriptClassDesc = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pInputs = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_nInputCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pOutputs = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_nOutputCount = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pGameClass = 0;
    CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass._vptr_CEntityClass = off_3FFE090;
    __cxa_guard_release(&`guard variable for'CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass);
    __cxa_atexit(
      CProjectedDecal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass,
      &_dso_handle);
  }
  if ( g_pEntityCProjectedDecalClass != 0 )
    return &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass;
  if ( `guard variable for'CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
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
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo,
      "CProjectedDecal",
      "info_projecteddecal",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo);
  }
  CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pClassInfo = &CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo;
  CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pBaseClassInfo = CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo.m_pBaseClassInfo;
  g_pEntityCProjectedDecalClass = &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass;
  CProjectedDecal::GetEntityClassInfo(void)::g_EntityCProjectedDecalClassInfo.m_pClass = &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass;
  CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCProjectedDecalClass->m_pComponentOverrides = 0;
  return &CProjectedDecal::GetEntityClassInternal(void)::g_EntityCProjectedDecalClass;
}


// CProjectedDecal::GetDataDescMap  (line 432, @0x00000000021346d0, libserver.so)
// globals: CProjectedDecal::m_DataMap
datamap_t *__fastcall CProjectedDecal::GetDataDescMap(CProjectedDecal *const this)
{
  return &CProjectedDecal::m_DataMap;
}


// CProjectedDecal::AddDatadescMetadataKeys  (line 432, @0x00000000021364e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CProjectedDecal::GetEntityClass(void)
void __fastcall CProjectedDecal::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CProjectedDecal::GetEntityClass);
}


// CProjectedDecal::GetBaseMap  (line 432, @0x0000000002136500, libserver.so)
datamap_t *__cdecl CProjectedDecal::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CProjectedDecal>  (line 432, @0x00000000021373c0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "CProjectedDecal"
// globals: `guard variable for'DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder, `guard variable for'DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc, CProjectedDecal::GetEntityClass(void), CProjectedDecal::m_DataMap, DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CProjectedDecal>(CProjectedDecal *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder) != 0 )
  {
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_pszBase = "CProjectedDecal";
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder,
      &_dso_handle);
  }
  CProjectedDecal::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v2, DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_pszBase), "StaticDecal");
    m_Size = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size == DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc[3].fieldName = v2;
    v6 = operator new[](DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v6, DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_pszBase), "TriggerDecal");
    v7 = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size == DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CProjectedDecal>(CProjectedDecal *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc[4].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc);
  }
  CProjectedDecal::m_DataMap.dataNumFields = 5;
  CProjectedDecal::m_DataMap.dataDesc = &DataMapInit<CProjectedDecal>(CProjectedDecal *)::dataDesc[1];
  AddDatadescMetadataKeys(&CProjectedDecal::m_DataMap, CProjectedDecal::GetEntityClass);
  return &CProjectedDecal::m_DataMap;
}


// CProjectedDecal::Spawn  (line 447, @0x00000000021352d0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CPointEntity::Spawn, UTIL_GetPrecachedDecalIndex, UTIL_Remove, Warning
// strings: "Can't find decal %s\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CProjectedDecal::Spawn(CProjectedDecal *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rbx
  CEntityVariant *p_m_value; // rax
  int PrecachedDecalIndex; // eax

  CPointEntity::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_12;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1622107784 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1622107784 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_12:
    m_uint64 = p_m_value->m_uint64;
LABEL_14:
  PrecachedDecalIndex = UTIL_GetPrecachedDecalIndex(m_uint64);
  this->m_nTexture = PrecachedDecalIndex;
  if ( PrecachedDecalIndex < 0 && (Warning("Can't find decal %s\n", m_uint64), this->m_nTexture < 0)
    || gpGlobals->maxClients > 1 && (this->m_spawnflags.m_Value & 0x800) != 0 )
  {
    UTIL_Remove(this);
  }
}


// CProjectedDecal::Activate  (line 466, @0x00000000021367c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseEntity::Activate, CBaseEntity::ThinkSet, CProjectedDecal::StaticDecal
// globals: CProjectedDecal::TriggerDecal(CBaseEntity *,CBaseEntity *,USE_TYPE,float)
void __fastcall CProjectedDecal::Activate(CProjectedDecal *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
  {
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_DoNothing, 0.0, 0, 0);
    this->m_pfnUse.__delta = 0;
    this->m_pfnUse.__pfn = CProjectedDecal::TriggerDecal;
  }
  else
  {
    CProjectedDecal::StaticDecal(this);
  }
}


// CProjectedDecal::InputActivate  (line 482, @0x00000000021366d0, libserver.so)
// calls: CProjectedDecal::TriggerDecal
void __fastcall CProjectedDecal::InputActivate(CProjectedDecal *const this, inputdata_t *const inputdata)
{
  CProjectedDecal::TriggerDecal(this, inputdata->pActivator, inputdata->pCaller, USE_ON, 0.0);
}


// CProjectedDecal::ProjectDecal  (line 487, @0x0000000002136510, libserver.so)
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::GetAbsOrigin
// callers: CProjectedDecal::TriggerDecal, CProjectedDecal::StaticDecal
void __fastcall CProjectedDecal::ProjectDecal(CProjectedDecal *const this, CRecipientFilter *const filter)
{
  unsigned int m_nTexture; // r15d
  const QAngle *AbsAngles; // r14
  const Vector *AbsOrigin; // rax
  void (__fastcall *v7)(ITempEntsSystem *, CRecipientFilter *const, const Vector *, const QAngle *, _QWORD, double, float); // [rsp+0h] [rbp-40h]
  float m_flDistance; // [rsp+Ch] [rbp-34h]

  m_nTexture = this->m_nTexture;
  m_flDistance = this->m_flDistance;
  v7 = *(te->_vptr_IPredictionSystem + 11);
  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v7(te, filter, AbsOrigin, AbsAngles, m_nTexture, 0.0, m_flDistance);
}


// CProjectedDecal::TriggerDecal  (line 493, @0x0000000002136590, libserver.so)  // inlines: CBroadcastRecipientFilter, curtime, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CProjectedDecal::ProjectDecal, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CProjectedDecal::InputActivate
void __fastcall CProjectedDecal::TriggerDecal(
        CProjectedDecal *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  double v6; // xmm1_8
  CGlobalVars *v7; // r12
  double v8; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v11; // [rsp+138h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  CProjectedDecal::ProjectDecal(this, &filter);
  CBaseEntity::ThinkSet(this, CBaseEntity::SUB_Remove, 0.0, 0, 0);
  v7 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v8) = 0;
    *&v8 = v7->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v8 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v8, v6, 0);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CProjectedDecal::StaticDecal  (line 503, @0x00000000021366f0, libserver.so)  // inlines: CBroadcastRecipientFilter, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeInitMessage, CProjectedDecal::ProjectDecal, CBaseEntity::SUB_Remove, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CProjectedDecal::Activate
void __fastcall CProjectedDecal::StaticDecal(CProjectedDecal *const this)
{
  CBroadcastRecipientFilter initFilter; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v3; // [rsp+138h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&initFilter);
  initFilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&initFilter);
  CRecipientFilter::MakeInitMessage(&initFilter);
  CProjectedDecal::ProjectDecal(this, &initFilter);
  CBaseEntity::SUB_Remove(this);
  initFilter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&initFilter);
}


// CProjectedDecal::Precache  (line 514, @0x00000000021395f0, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, Precache, TempString, operator[]
// calls: CEntityInstance::Precache, CEntityKeyValues::HasValue, UTIL_PrecacheDecal
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CProjectedDecal::Precache(CProjectedDecal *const this, const CEntityPrecacheContext *pContext)
{
  const CEntityKeyValues *m_pKeyValues; // rcx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::lambda::lambda v4; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // di
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rdi
  CEntityVariant *p_m_value; // rax

  CEntityInstance::Precache(this, pContext);
  if ( !CEntityKeyValues::HasValue(pContext->m_pKeyValues, 1622107784) )
    return;
  m_pKeyValues = pContext->m_pKeyValues;
  v4 = pContext->m_pKeyValues->m_keyHashes.0;
  if ( *&v4 <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_13;
    goto LABEL_15;
  }
  m_nAllocated = m_pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1622107784 )
      goto LABEL_10;
LABEL_7:
    if ( *&v4 <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&m_pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = m_pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1622107784 )
    goto LABEL_7;
LABEL_10:
  if ( m_pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = m_pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_13:
    m_uint64 = p_m_value->m_uint64;
LABEL_15:
  UTIL_PrecacheDecal(m_uint64, pContext, 1);
}


// CWorld::~CWorld  (line 537, @0x0000000002139f10, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CWorld::~CWorld(CWorld *const this)
{
  this->_vptr_IHandleEntity = &off_3FFE830;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CWorld::~CWorld  (line 537, @0x0000000002139f30, libserver.so)  // inlines: ~CWorld
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CWorld::~CWorld(CWorld *const this)
{
  this->_vptr_IHandleEntity = &off_3FFE830;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CWorld::Schema_DynamicBinding  (line 539, @0x00000000021398d0, libserver.so)
// globals: CWorld::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CWorld::Schema_DynamicBinding(const CWorld *const this)
{
  return CWorld::s_pSchemaBinding;
}


// CWorld::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 539, @0x00000000021398e0, libserver.so)
// globals: CWorld::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CWorld::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CWorld::CEntityInstanceEntityClass *const this)
{
  return CWorld::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CWorld::CEntityInstanceEntityClass::DestructInstance  (line 539, @0x00000000021398f0, libserver.so)  // inlines: Destruct<CWorld>
void __fastcall CWorld::CEntityInstanceEntityClass::DestructInstance(
        CWorld::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CWorld::CEntityInstanceEntityClass::FreeInstance  (line 539, @0x0000000002139910, libserver.so)
void __fastcall CWorld::CEntityInstanceEntityClass::FreeInstance(
        CWorld::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CWorld::CEntityInstanceEntityClass::CanAllocate  (line 539, @0x0000000002139930, libserver.so)
bool __fastcall CWorld::CEntityInstanceEntityClass::CanAllocate(const CWorld::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CWorld::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 539, @0x0000000002139940, libserver.so)
// globals: CWorld::s_pSchemaBinding
const ISchemaBinding *__fastcall CWorld::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CWorld::CEntityInstanceEntityClass *const this)
{
  return CWorld::s_pSchemaBinding;
}


// CWorld::CEntityInstanceEntityClass::AllocateInstance  (line 539, @0x0000000002139ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CWorld::CEntityInstanceEntityClass::AllocateInstance(CWorld::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1152);
  memset(v1, 0, 0x480u);
  return v1;
}


// CWorld::CEntityInstanceEntityClass::ConstructInstance  (line 539, @0x0000000002139dd0, libserver.so)  // inlines: CWorld, Construct<CWorld>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CWorld::CEntityInstanceEntityClass::ConstructInstance(
        CWorld::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FFE830;
  }
  return p;
}


// CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 539, @0x000000000213a2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWorld::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 539, @0x000000000213a2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWorld::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CWorld::GetEntityClassInternal  (line 539, @0x000000000213adb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "worldent", "CWorld"
// globals: `guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass, CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo, CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo
CEntityClass *__cdecl CWorld::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass) != 0 )
  {
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_designerName.u.m_Id = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass._vptr_CEntityClass = off_3F79390;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_atomicFields,
      4);
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_requiredEHandle.m_Index = -1;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_hNetworkSerializer = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pBaseClassInfo = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pClassInfo = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_flags = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nAllHelpersFlags = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pScriptClassDesc = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pInputs = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nInputCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pOutputs = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nOutputCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pGameClass = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass._vptr_CEntityClass = off_3FFE7B0;
    __cxa_guard_release(&`guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass);
    __cxa_atexit(
      CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass,
      &_dso_handle);
  }
  if ( g_pEntityCWorldClass != 0 )
    return &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
  if ( `guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo,
      "CWorld",
      "worldent",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo);
  }
  CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pClassInfo = &CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo;
  CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pBaseClassInfo = CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo.m_pBaseClassInfo;
  g_pEntityCWorldClass = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
  CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo.m_pClass = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
  CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCWorldClass->m_pComponentOverrides = 0;
  return &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
}


// CWorld::RequiredEdictIndex  (line 544, @0x0000000002139950, libserver.so)
CEntityIndex __fastcall CWorld::RequiredEdictIndex(CWorld *const this)
{
  return 0;
}


// CWorld::IsWorld  (line 550, @0x0000000002139960, libserver.so)
bool __fastcall CWorld::IsWorld(const CWorld *const this)
{
  return 1;
}


// CWorld::VPhysicsCollision  (line 555, @0x0000000002139970, libserver.so)
void __fastcall CWorld::VPhysicsCollision(CWorld *const this, int index, gamevcollisionevent_t *pEvent)
{
  ;
}


// CWorld::VPhysicsFriction  (line 556, @0x0000000002139980, libserver.so)
void __fastcall CWorld::VPhysicsFriction(
        CWorld *const this,
        IPhysicsObject *pObject,
        float energy,
        CUtlStringToken surfaceProps,
        CUtlStringToken surfacePropsHit)
{
  ;
}


// CWorld::CEntityInstanceEntityClass::InitOptionalTables  (line 571, @0x0000000002138020, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, GetEntityClassInternal, Init, SetClassInfo, SetFlag, SetRequiredEntityHandle, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_source_files_04.cpp
// strings: "worldent", "CWorld"
// globals: `guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass, CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo, CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo
bool __cdecl CWorld::CEntityInstanceEntityClass::InitOptionalTables()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass) != 0 )
  {
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_designerName.u.m_Id = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass._vptr_CEntityClass = off_3F79390;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_atomicFields,
      4);
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Size = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_requiredEHandle.m_Index = -1;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_hNetworkSerializer = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pBaseClassInfo = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pClassInfo = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_flags = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nAllHelpersFlags = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pScriptClassDesc = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pInputs = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nInputCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pOutputs = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_nOutputCount = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pGameClass = 0;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass._vptr_CEntityClass = off_3FFE7B0;
    __cxa_guard_release(&`guard variable for'CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass);
    __cxa_atexit(
      CWorld::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass,
      &_dso_handle);
  }
  if ( g_pEntityCWorldClass == 0 )
  {
    if ( `guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo,
        "CWorld",
        "worldent",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo);
    }
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pClassInfo = &CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pBaseClassInfo = CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo.m_pBaseClassInfo;
    g_pEntityCWorldClass = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
    CWorld::GetEntityClassInfo(void)::g_EntityCWorldClassInfo.m_pClass = &CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass;
    CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
    g_pEntityCWorldClass->m_pComponentOverrides = 0;
  }
  CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_flags |= 0xCu;
  CWorld::GetEntityClassInternal(void)::g_EntityCWorldClass.m_requiredEHandle.m_Index = 0x8000;
  return 1;
}


// CWorld::YouForgotToImplementOrDeclareServerClass  (line 576, @0x00000000021346e0, libserver.so)
int __fastcall CWorld::YouForgotToImplementOrDeclareServerClass(CWorld *const this)
{
  return 0;
}


// CWorld::GetServerClass  (line 576, @0x0000000002135510, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CWorld::GetServerClass(CWorld *const this)
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


// GetWorldEntity  (line 581, @0x0000000002136830, libserver.so)
// callers: CBaseCombatCharacter::ApplyStressDamage, CBaseCombatCharacter::FVisible, CEnvInstructorHint::InputShowHint, FindPhysicsEntityByNameOrWorld, CPhysMotor::Activate, CalculateObjectStress, CDOTA_ActionRunner::SelectActionPoints
// globals: s_pWorldEntity
CBaseEntity *__cdecl GetWorldEntity()
{
  return s_pWorldEntity;
}


// CreateWorldEntity  (line 589, @0x0000000002137610, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<char const*>, AddToTail, AddToTailGetPtr, Allocate, Base, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, Element, EnsureCapacity, EnterScope, ExitScope, FindKeyHash, Free, GetClassInfo, GetElapsed, GetEntityClass, GetTimebaseRegister, InTargetThread, Init, InvokeCallbacks, IsEmpty, IsEnabled, LeafCodeInfo_t, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, SetValue, Spawn, V_strlen, memcpy, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity, CUtlString::FreeMemoryBlock, CEntityKeyValues::~CEntityKeyValues, operator delete, ThreadGetCurrentId (30 total)
// callers: CGameRulesGameSystem::GameActivate
// strings: "Spawn", "Server Simulation", "Attempted to set attribute %s as if it was a non-attribute key!\n", "../../public/tier1/utlleanvector.h", "EnsureCapacity", "%s allocation count overflow" (7 total)
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
void __cdecl CreateWorldEntity()
{
  CEntitySystem *v0; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v2; // rdx
  char v3; // al
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // esi
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v7; // rax
  CEntityInstance *Entity; // rax
  __int64 v9; // rdi
  CEntityInstance *v10; // r15
  CEntitySpawnerContext<CWorld> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v14; // rdi
  CUtlScratchMemoryPool *v15; // rdi
  CEntityKeyValues *v16; // rbx
  const char *m_pszClassname; // r15
  CEntityKeyValues *v19; // rbx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nCount; // r8
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v21; // cx
  __int64 v22; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v23; // rdx
  unsigned __int64 v24; // rbx
  ThreadId_t v25; // r15
  uint64 v26; // rcx
  ThreadId_t m_TargetThreadId; // r15
  unsigned __int64 v28; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  CVProfNode *m_pParent; // rax
  int m_nEntitySpawnerDataUseCount; // ecx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v33; // rax
  unsigned __int64 m_nAllocated; // rdx
  int v35; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rax
  uint16 m_flags; // ax
  void *v39; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int16 v44; // ax
  void *v45; // rax
  __int16 v46; // cx
  void *v47; // rcx
  unsigned __int64 v48; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // [rsp+18h] [rbp-138h]
  signed int v59; // [rsp+20h] [rbp-130h]
  bool v60; // [rsp+27h] [rbp-129h]
  CEntityKeyValues *i; // [rsp+28h] [rbp-128h]
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v62; // [rsp+28h] [rbp-128h]
  __int64 v63; // [rsp+28h] [rbp-128h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v64; // [rsp+28h] [rbp-128h]
  signed int v65; // [rsp+28h] [rbp-128h]
  _QWORD v66[2]; // [rsp+30h] [rbp-120h] BYREF
  LeafCodeInfo_t v67; // [rsp+40h] [rbp-110h] BYREF
  LeafCodeInfo_t v68; // [rsp+60h] [rbp-F0h] BYREF
  CEntitySpawner<CWorld> spawner; // [rsp+80h] [rbp-D0h] BYREF

  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FFEF10;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v0 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v0->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v0);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v2 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v2;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCWorldClass;
  if ( g_pApplication != 0 )
    v3 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v3 = 0;
  spawner.m_bValidateKeys = v3;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues == 0 )
    goto LABEL_16;
  m_enabled = g_VProfCurrentProfile.m_enabled;
  v60 = m_enabled != 0;
  if ( m_enabled != 0 )
  {
    m_TargetThreadId = g_VProfCurrentProfile.m_TargetThreadId;
    v28 = __rdtsc();
    if ( m_TargetThreadId == ThreadGetCurrentId(spawner.m_pEntityKeyValues) )
    {
      m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
      if ( m_pCurNode->m_pszName != "Spawn" )
      {
        m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
        g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
      }
      v33 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
      v33->m_BudgetFlags |= 4u;
      CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
      g_VProfCurrentProfile.m_fAtRoot = 0;
    }
    m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = m_numTimeBaseTicks - v28 + __rdtsc();
  }
  if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
  {
    m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
    if ( m_pszClassname != 0 )
    {
      v19 = spawner.m_pEntityKeyValues;
      if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
      {
        m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
        if ( spawner.m_pEntityKeyValues->m_keyHashes.m_nCount <= 0 )
        {
LABEL_52:
          if ( m_nCount == 0x7FFF )
          {
            if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
              goto LABEL_103;
            while ( 1 )
            {
              if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v56, v57, v54, v55) != 0 )
                loc_0 = -559038737;
              Plat_ExitProcess(1);
LABEL_103:
              v67.m_szFile = "../../public/tier1/utlleanvector.h";
              v67.m_szFunction = "AddToTailGetPtr";
              v67.m_nLine = 557;
              LoggingSystem_Log(
                LOG_GENERAL,
                LoggingSeverity_t::LS_ERROR,
                &v67,
                "%s allocation count overflow",
                "AddToTailGetPtr");
            }
          }
          m_nAllocated = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
          v35 = m_nCount + 1;
          if ( v35 > m_nAllocated )
          {
            if ( v35 > 9 )
            {
              if ( m_nCount == 0x7FFF )
              {
                if ( LoggingSystem_IsChannelEnabled(LOG_GENERAL, 4) != 0 )
                  goto LABEL_98;
                while ( 1 )
                {
                  if ( Plat_ShouldCollectMiniDumpsForFatalErrors(v52, v53, v50, v51) != 0 )
                    loc_0 = -559038737;
                  Plat_ExitProcess(1);
LABEL_98:
                  v68.m_szFile = "../../public/tier1/utlleanvector.h";
                  v68.m_szFunction = "EnsureCapacity";
                  v68.m_nLine = 104;
                  LoggingSystem_Log(
                    LOG_GENERAL,
                    LoggingSeverity_t::LS_ERROR,
                    &v68,
                    "%s allocation count overflow",
                    "EnsureCapacity");
                }
              }
              v62 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
              while ( v35 > v62 )
              {
                if ( v62 > 16382 )
                {
                  v62 = 0x7FFF;
                }
                else
                {
                  v46 = 2 * v62;
                  if ( 2 * v62 <= 7 )
                    v46 = 8;
                  v62 = v46;
                }
              }
            }
            else
            {
              v62 = m_nCount + 1;
            }
            if ( m_nAllocated > 9 )
            {
              v19->m_keyHashes.m_pElements = (*(*g_pMemAlloc + 8LL))(
                                               g_pMemAlloc,
                                               spawner.m_pEntityKeyValues->m_keyHashes.m_pElements,
                                               4LL * v62);
              m_nCount = v19->m_keyHashes.m_nCount;
            }
            else if ( v62 > 9 )
            {
              v47 = (**g_pMemAlloc)(g_pMemAlloc, 4LL * v62);
              v48 = v19->m_keyHashes.m_nAllocated;
              if ( v48 != 0 )
              {
                m_pElements = (&v19->m_keyHashes.m_nAllocAllocated + 1);
                if ( v48 > 9 )
                  m_pElements = v19->m_keyHashes.m_pElements;
              }
              else
              {
                m_pElements = 0;
              }
              v19->m_keyHashes.m_pElements = memcpy(v47, m_pElements, 4LL * v19->m_keyHashes.m_nCount);
              m_nCount = v19->m_keyHashes.m_nCount;
            }
            v19->m_keyHashes.m_nAllocated = v62;
            m_nAllocated = v62;
          }
          v19->m_keyHashes.m_nCount = m_nCount + 1;
          if ( m_nAllocated != 0 )
          {
            v36 = (&v19->m_keyHashes.m_nAllocAllocated + 1);
            if ( m_nAllocated > 9 )
              v36 = v19->m_keyHashes.m_pElements;
          }
          else
          {
            v36 = 0;
          }
          v36[m_nCount] = -971301790;
          v63 = m_nCount;
          CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v19->m_keyValues);
          if ( v19->m_keyValues.m_nAllocated != 0 )
            v37 = v19->m_keyValues.m_pElements;
          else
            v37 = 0;
          v58 = v63;
          v64 = &v37[v63];
          m_flags = v64->m_value.m_flags;
          if ( (m_flags & 1) != 0 )
            v64->m_value.m_flags = m_flags & 0xFFFE;
          v64->m_value.m_uint64 = 0;
          v64->m_value.m_type = 30;
          v59 = strlen(m_pszClassname) + 1;
          v39 = CEntityVariantAllocator::Allocate(v59);
          v64->m_value.m_uint64 = v39;
          memcpy(v39, m_pszClassname, v59);
          v64->m_value.m_flags |= 1u;
          if ( v19->m_keyValues.m_nAllocated != 0 )
            v40 = v19->m_keyValues.m_pElements;
          else
            v40 = 0;
          v40[v58].m_pAttributeName = 0;
          goto LABEL_6;
        }
        v21 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
        v22 = 0;
        while ( 1 )
        {
          if ( v21 != 0 )
          {
            v23 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
            if ( v21 > 9 )
              v23 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
          }
          else
          {
            v23 = 0;
          }
          if ( v23[v22] == -971301790 )
            break;
          if ( m_nCount <= ++v22 )
            goto LABEL_52;
        }
        if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        {
          v41 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
          v42 = v22;
          v43 = &v41[v42];
          if ( v41[v42].m_pAttributeName != 0 )
          {
LABEL_71:
            Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v41[v42].m_pAttributeName);
            goto LABEL_6;
          }
        }
        else
        {
          v42 = v22;
          v41 = 0;
          v43 = v42 * 24;
          if ( *(v42 * 24 + 16) != 0 )
            goto LABEL_71;
        }
        v44 = *(v43 + 10);
        if ( (v44 & 1) != 0 )
          *(v43 + 10) = v44 & 0xFFFE;
        *v43 = 0;
        *(v43 + 8) = 30;
        v65 = strlen(m_pszClassname) + 1;
        v45 = CEntityVariantAllocator::Allocate(v65);
        *v43 = v45;
        memcpy(v45, m_pszClassname, v65);
        *(v43 + 10) |= 1u;
      }
    }
  }
LABEL_6:
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  m_nMode = spawner.m_nMode;
  v7 = CUtlString::Get(&spawner.m_scriptClassName);
  Entity = CEntitySystem::CreateEntity(
             g_pEntitySystem,
             spawner.m_hSpawnGroupHandle,
             spawner.m_pEntityClass,
             v7,
             m_nMode,
             -1,
             -1,
             0,
             0);
  v10 = Entity;
  if ( Entity != 0 )
  {
    v66[0] = Entity->m_pEntity;
    v66[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v66,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v10, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v14 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v14 - 1);
        (pfn)(v14, v10, i);
      }
    }
  }
  if ( v60 )
  {
    v24 = __rdtsc();
    if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
    {
      v25 = g_VProfCurrentProfile.m_TargetThreadId;
      if ( v25 == ThreadGetCurrentId(v9) )
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
    v26 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
    ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
    g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v26 - v24 + __rdtsc();
  }
LABEL_16:
  v15 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FFEEF0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v15 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v15);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v16 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v16);
      operator delete(v16);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


// ShutdownWorldEntity  (line 595, @0x0000000002136840, libserver.so)
// calls: UTIL_Remove
// callers: CGameRulesGameSystem::GameDeactivate
// globals: s_pWorldEntity
void __cdecl ShutdownWorldEntity()
{
  if ( s_pWorldEntity != 0 )
    UTIL_Remove(s_pWorldEntity);
}


// CWorld::DecalTrace  (line 606, @0x0000000002134fd0, libserver.so)  // inlines: CBroadcastRecipientFilter, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
void __fastcall CWorld::DecalTrace(CWorld *const this, trace_t *pTrace, const char *decalName)
{
  int v4; // r12d
  CBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+138h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  v4 = decalsystem->GetDecalIndexForName(decalName);
  if ( v4 >= 0 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    (*(te->_vptr_IPredictionSystem + 24))(te, &filter, &pTrace->endpos, &pTrace->plane, v4, 0.0);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CWorld::AddedToEntityDatabase  (line 618, @0x0000000002134710, libserver.so)
// calls: CBaseEntity::AddedToEntityDatabase
// globals: s_pWorldEntity
void __fastcall CWorld::AddedToEntityDatabase(CWorld *const this)
{
  CBaseEntity::AddedToEntityDatabase(this);
  s_pWorldEntity = this;
}


// CWorld::Spawn  (line 625, @0x00000000021347b0, libserver.so)  // inlines: SetSolid
// calls: CBaseEntity::SetMoveType, CBaseEntity::Spawn, CBaseEntity::SetLocalOrigin, CBaseEntity::SetLocalAngles, CBaseEntity::AddFlag
void __fastcall CWorld::Spawn(CWorld *const this, const CEntityKeyValues *pKeyValues)
{
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetLocalOrigin(this, &vec3_origin);
  CBaseEntity::SetLocalAngles(this, &vec3_angle);
  CBaseEntity::AddFlag(this, 0x1000000);
}


// CWorld::UpdateTransmitState  (line 643, @0x0000000002134700, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CWorld::UpdateTransmitState(CWorld *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CWorld::UpdateOnRemove  (line 652, @0x0000000002134730, libserver.so)
// calls: CBaseModelEntity::UpdateOnRemove
// globals: s_pWorldEntity
void __fastcall CWorld::UpdateOnRemove(CWorld *const this)
{
  CBaseModelEntity::UpdateOnRemove(this);
  s_pWorldEntity = 0;
}


