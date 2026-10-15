// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_dust.cpp:15
class CFunc_Dust : public CBaseModelEntity {
	class NetworkVar_m_Color {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_SpawnRate {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_SpeedMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSizeMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSizeMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_DistMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LifetimeMin {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LifetimeMax {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_FallSpeed {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_DustFlags {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	int m_iAlpha;  // +0x4a8
	typedef CBaseModelEntity BaseClass;
	typedef CFunc_Dust ThisClass;

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
	CFunc_Dust(CFunc_Dust &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CFunc_Dust();
	virtual ~CFunc_Dust();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Precache(const CEntityPrecacheContext *);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[6] Precache
	// sizeof = 1200
};

// src/game/server/func_dust.cpp:63
class CFunc_DustMotes : public CFunc_Dust {
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
	CFunc_DustMotes(CFunc_DustMotes &);
	CFunc_DustMotes(CFunc_DustMotes &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CFunc_DustMotes();
	virtual ~CFunc_DustMotes();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1200
};

// src/game/server/func_dust.cpp:71
class CFunc_DustCloud : public CFunc_Dust {
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
	CFunc_DustCloud(CFunc_DustCloud &);
	CFunc_DustCloud(CFunc_DustCloud &);
	CFunc_DustCloud();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFunc_DustCloud();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1200
};

// src/game/server/func_dust.cpp:77
class C_CFunc_Dust_MapInstall {
	C_CFunc_Dust_MapInstall();

	// sizeof = 1
};

// src/game/server/func_dust.cpp:186
class CEnvDustPuff : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	float m_flScale;  // +0x308
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
	CEnvDustPuff(CEnvDustPuff &);
	CEnvDustPuff(CEnvDustPuff &);
	CEnvDustPuff();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputSpawnDust(inputdata_t &);
	virtual ~CEnvDustPuff();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFunc_Dust::GetEntityClass  (line 18, @0x00000000022455c0, libserver.so)
CEntityClass *__cdecl CFunc_Dust::GetEntityClass()
{
  return g_pEntityCFunc_DustClass;
}


// CFunc_Dust::Schema_DynamicBinding  (line 18, @0x00000000022455d0, libserver.so)
// globals: CFunc_Dust::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_Dust::Schema_DynamicBinding(const CFunc_Dust *const this)
{
  return CFunc_Dust::s_pSchemaBinding;
}


// CFunc_Dust::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x00000000022455e0, libserver.so)
// globals: CFunc_Dust::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_Dust::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  return CFunc_Dust::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFunc_Dust::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x00000000022455f0, libserver.so)  // inlines: Destruct<CFunc_Dust>
void __fastcall CFunc_Dust::CEntityInstanceEntityClass::DestructInstance(
        CFunc_Dust::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFunc_Dust::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x0000000002245610, libserver.so)
void __fastcall CFunc_Dust::CEntityInstanceEntityClass::FreeInstance(
        CFunc_Dust::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFunc_Dust::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000002245630, libserver.so)
bool __fastcall CFunc_Dust::CEntityInstanceEntityClass::CanAllocate(
        const CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFunc_Dust::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000002245640, libserver.so)
// globals: CFunc_Dust::s_pSchemaBinding
const ISchemaBinding *__fastcall CFunc_Dust::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  return CFunc_Dust::s_pSchemaBinding;
}


// CFunc_Dust::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002246850, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFunc_Dust::CEntityInstanceEntityClass::AllocateInstance(
        CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002248fc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002248fe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_Dust::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFunc_Dust::GetEntityClassInfo  (line 18, @0x000000000224b240, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CFunc_DustCloud::GetEntityClassInternal, CFunc_DustMotes::GetEntityClassInternal
// strings: "CFunc_Dust", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo, CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CFunc_Dust::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo != 0 )
    return &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo) == 0 )
    return &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo;
  if ( `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo,
      "CBaseModelEntity",
      "basemodelentity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo,
    "CFunc_Dust",
    0,
    0,
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo);
  return &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo;
}


// CFunc_Dust::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x000000000224b300, libserver.so)  // inlines: Construct<CFunc_Dust>
// calls: CFunc_Dust::CFunc_Dust
CEntityInstance *__fastcall CFunc_Dust::CEntityInstanceEntityClass::ConstructInstance(
        CFunc_Dust::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFunc_Dust::CFunc_Dust(p);
  return p;
}


// CFunc_Dust::GetEntityClassInternal  (line 18, @0x000000000224d2b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseModelEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFunc_Dust"
// globals: `guard variable for'CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass, CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo, CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo
CEntityClass *__cdecl CFunc_Dust::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass) != 0 )
  {
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_designerName.u.m_Id = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass._vptr_CEntityClass = off_3F79390;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_ComponentOffsets.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_AllHelpers.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classInputs.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classOutputs.m_Size = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_requiredEHandle.m_Index = -1;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_hNetworkSerializer = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pBaseClassInfo = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pClassInfo = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_flags = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_nAllHelpersFlags = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pScriptClassDesc = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pInputs = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_nInputCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pOutputs = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_nOutputCount = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pGameClass = 0;
    CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass._vptr_CEntityClass = off_4043330;
    __cxa_guard_release(&`guard variable for'CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass);
    __cxa_atexit(
      CFunc_Dust::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass,
      &_dso_handle);
  }
  if ( g_pEntityCFunc_DustClass != 0 )
    return &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass;
  if ( `guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo) != 0 )
  {
    EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo,
      "CFunc_Dust",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo);
  }
  CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pClassInfo = &CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo;
  CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pBaseClassInfo = CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo.m_pBaseClassInfo;
  g_pEntityCFunc_DustClass = &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass;
  CFunc_Dust::GetEntityClassInfo(void)::g_EntityCFunc_DustClassInfo.m_pClass = &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass;
  CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFunc_DustClass->m_pComponentOverrides = 0;
  return &CFunc_Dust::GetEntityClassInternal(void)::g_EntityCFunc_DustClass;
}


// CFunc_DustMotes::~CFunc_DustMotes  (line 63, @0x0000000002247020, libserver.so)  // inlines: ~CFunc_Dust
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFunc_DustMotes::~CFunc_DustMotes(CFunc_DustMotes *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFunc_DustMotes::~CFunc_DustMotes  (line 63, @0x0000000002247040, libserver.so)  // inlines: ~CFunc_Dust, ~CFunc_DustMotes
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFunc_DustMotes::~CFunc_DustMotes(CFunc_DustMotes *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFunc_DustMotes::Schema_DynamicBinding  (line 65, @0x0000000002245650, libserver.so)
// globals: CFunc_DustMotes::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_DustMotes::Schema_DynamicBinding(const CFunc_DustMotes *const this)
{
  return CFunc_DustMotes::s_pSchemaBinding;
}


// CFunc_DustMotes::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 65, @0x0000000002245660, libserver.so)
// globals: CFunc_DustMotes::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_DustMotes::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  return CFunc_DustMotes::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFunc_DustMotes::CEntityInstanceEntityClass::DestructInstance  (line 65, @0x0000000002245670, libserver.so)  // inlines: Destruct<CFunc_DustMotes>
void __fastcall CFunc_DustMotes::CEntityInstanceEntityClass::DestructInstance(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFunc_DustMotes::CEntityInstanceEntityClass::FreeInstance  (line 65, @0x0000000002245690, libserver.so)
void __fastcall CFunc_DustMotes::CEntityInstanceEntityClass::FreeInstance(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFunc_DustMotes::CEntityInstanceEntityClass::CanAllocate  (line 65, @0x00000000022456b0, libserver.so)
bool __fastcall CFunc_DustMotes::CEntityInstanceEntityClass::CanAllocate(
        const CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFunc_DustMotes::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 65, @0x00000000022456c0, libserver.so)
// globals: CFunc_DustMotes::s_pSchemaBinding
const ISchemaBinding *__fastcall CFunc_DustMotes::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  return CFunc_DustMotes::s_pSchemaBinding;
}


// CFunc_DustMotes::CEntityInstanceEntityClass::AllocateInstance  (line 65, @0x0000000002246890, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFunc_DustMotes::CEntityInstanceEntityClass::AllocateInstance(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002249010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002249030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFunc_DustMotes::CEntityInstanceEntityClass::ConstructInstance  (line 65, @0x000000000224b360, libserver.so)  // inlines: Construct<CFunc_DustMotes>
// calls: CFunc_DustMotes::CFunc_DustMotes
CEntityInstance *__fastcall CFunc_DustMotes::CEntityInstanceEntityClass::ConstructInstance(
        CFunc_DustMotes::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFunc_DustMotes::CFunc_DustMotes(p);
  return p;
}


// CFunc_DustMotes::GetEntityClassInternal  (line 65, @0x000000000224feb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFunc_Dust::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_dustmotes", "CFunc_DustMotes"
// globals: `guard variable for'CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass, CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo, CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo
CEntityClass *__cdecl CFunc_DustMotes::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass) != 0 )
  {
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_designerName.u.m_Id = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass._vptr_CEntityClass = off_3F79390;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_ComponentOffsets.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_AllHelpers.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classInputs.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classOutputs.m_Size = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_requiredEHandle.m_Index = -1;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_hNetworkSerializer = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pBaseClassInfo = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pClassInfo = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_flags = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_nAllHelpersFlags = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pScriptClassDesc = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pInputs = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_nInputCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pOutputs = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_nOutputCount = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pGameClass = 0;
    CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass._vptr_CEntityClass = off_40433B0;
    __cxa_guard_release(&`guard variable for'CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass);
    __cxa_atexit(
      CFunc_DustMotes::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass,
      &_dso_handle);
  }
  if ( g_pEntityCFunc_DustMotesClass != 0 )
    return &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass;
  if ( `guard variable for'CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo) != 0 )
  {
    EntityClassInfo = CFunc_Dust::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo,
      "CFunc_DustMotes",
      "func_dustmotes",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo);
  }
  CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pClassInfo = &CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo;
  CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pBaseClassInfo = CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo.m_pBaseClassInfo;
  g_pEntityCFunc_DustMotesClass = &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass;
  CFunc_DustMotes::GetEntityClassInfo(void)::g_EntityCFunc_DustMotesClassInfo.m_pClass = &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass;
  CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFunc_DustMotesClass->m_pComponentOverrides = 0;
  return &CFunc_DustMotes::GetEntityClassInternal(void)::g_EntityCFunc_DustMotesClass;
}


// CFunc_DustCloud::~CFunc_DustCloud  (line 71, @0x0000000002247070, libserver.so)  // inlines: ~CFunc_Dust
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFunc_DustCloud::~CFunc_DustCloud(CFunc_DustCloud *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFunc_DustCloud::~CFunc_DustCloud  (line 71, @0x0000000002247090, libserver.so)  // inlines: ~CFunc_Dust, ~CFunc_DustCloud
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFunc_DustCloud::~CFunc_DustCloud(CFunc_DustCloud *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFunc_DustCloud::Schema_DynamicBinding  (line 73, @0x00000000022456d0, libserver.so)
// globals: CFunc_DustCloud::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_DustCloud::Schema_DynamicBinding(const CFunc_DustCloud *const this)
{
  return CFunc_DustCloud::s_pSchemaBinding;
}


// CFunc_DustCloud::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 73, @0x00000000022456e0, libserver.so)
// globals: CFunc_DustCloud::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFunc_DustCloud::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  return CFunc_DustCloud::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFunc_DustCloud::CEntityInstanceEntityClass::DestructInstance  (line 73, @0x00000000022456f0, libserver.so)  // inlines: Destruct<CFunc_DustCloud>
void __fastcall CFunc_DustCloud::CEntityInstanceEntityClass::DestructInstance(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFunc_DustCloud::CEntityInstanceEntityClass::FreeInstance  (line 73, @0x0000000002245710, libserver.so)
void __fastcall CFunc_DustCloud::CEntityInstanceEntityClass::FreeInstance(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFunc_DustCloud::CEntityInstanceEntityClass::CanAllocate  (line 73, @0x0000000002245730, libserver.so)
bool __fastcall CFunc_DustCloud::CEntityInstanceEntityClass::CanAllocate(
        const CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFunc_DustCloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 73, @0x0000000002245740, libserver.so)
// globals: CFunc_DustCloud::s_pSchemaBinding
const ISchemaBinding *__fastcall CFunc_DustCloud::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  return CFunc_DustCloud::s_pSchemaBinding;
}


// CFunc_DustCloud::CEntityInstanceEntityClass::AllocateInstance  (line 73, @0x00000000022468d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFunc_DustCloud::CEntityInstanceEntityClass::AllocateInstance(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002249060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002249080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFunc_DustCloud::CEntityInstanceEntityClass::ConstructInstance  (line 73, @0x000000000224b330, libserver.so)  // inlines: CFunc_DustCloud, Construct<CFunc_DustCloud>
// calls: CFunc_Dust::CFunc_Dust
CEntityInstance *__fastcall CFunc_DustCloud::CEntityInstanceEntityClass::ConstructInstance(
        CFunc_DustCloud::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CFunc_Dust::CFunc_Dust(p);
    *p = &off_4043B70;
  }
  return p;
}


// CFunc_DustCloud::GetEntityClassInternal  (line 73, @0x000000000224f440, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CFunc_Dust::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_dustcloud", "CFunc_DustCloud"
// globals: `guard variable for'CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass, CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo, CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo
CEntityClass *__cdecl CFunc_DustCloud::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass) != 0 )
  {
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_designerName.u.m_Id = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass._vptr_CEntityClass = off_3F79390;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_ComponentOffsets.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_AllHelpers.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classInputs.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classOutputs.m_Size = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_requiredEHandle.m_Index = -1;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_hNetworkSerializer = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pBaseClassInfo = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pClassInfo = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_flags = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_nAllHelpersFlags = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pScriptClassDesc = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pInputs = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_nInputCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pOutputs = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_nOutputCount = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pGameClass = 0;
    CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass._vptr_CEntityClass = off_4043AF0;
    __cxa_guard_release(&`guard variable for'CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass);
    __cxa_atexit(
      CFunc_DustCloud::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass,
      &_dso_handle);
  }
  if ( g_pEntityCFunc_DustCloudClass != 0 )
    return &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass;
  if ( `guard variable for'CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo) != 0 )
  {
    EntityClassInfo = CFunc_Dust::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo,
      "CFunc_DustCloud",
      "func_dustcloud",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo);
  }
  CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pClassInfo = &CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo;
  CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pBaseClassInfo = CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo.m_pBaseClassInfo;
  g_pEntityCFunc_DustCloudClass = &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass;
  CFunc_DustCloud::GetEntityClassInfo(void)::g_EntityCFunc_DustCloudClassInfo.m_pClass = &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass;
  CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFunc_DustCloudClass->m_pComponentOverrides = 0;
  return &CFunc_DustCloud::GetEntityClassInternal(void)::g_EntityCFunc_DustCloudClass;
}


// CFunc_Dust::YouForgotToImplementOrDeclareServerClass  (line 77, @0x000000000221a470, libserver.so)
int __fastcall CFunc_Dust::YouForgotToImplementOrDeclareServerClass(CFunc_Dust *const this)
{
  return 0;
}


// CFunc_Dust::GetServerClass  (line 77, @0x0000000002221880, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFunc_Dust::GetServerClass(CFunc_Dust *const this)
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


// CFunc_Dust::GetDataDescMap  (line 79, @0x000000000221a480, libserver.so)
// globals: CFunc_Dust::m_DataMap
datamap_t *__fastcall CFunc_Dust::GetDataDescMap(CFunc_Dust *const this)
{
  return &CFunc_Dust::m_DataMap;
}


// CFunc_Dust::AddDatadescMetadataKeys  (line 79, @0x0000000002228390, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFunc_Dust::GetEntityClass(void)
void __fastcall CFunc_Dust::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFunc_Dust::GetEntityClass);
}


// CFunc_Dust::GetBaseMap  (line 79, @0x00000000022283b0, libserver.so)
datamap_t *__cdecl CFunc_Dust::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CFunc_Dust>  (line 79, @0x00000000022283c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFunc_Dust"
// globals: `guard variable for'DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder, CFunc_Dust::GetEntityClass(void), CFunc_Dust::m_DataMap, DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFunc_Dust>(CFunc_Dust *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder) != 0 )
  {
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_pszBase = "CFunc_Dust";
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFunc_Dust>(CFunc_Dust *)::nameHolder,
      &_dso_handle);
  }
  CFunc_Dust::m_DataMap.dataNumFields = 13;
  CFunc_Dust::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CFunc_Dust::m_DataMap.dataDesc = &DataMapInit<CFunc_Dust>(CFunc_Dust *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFunc_Dust::m_DataMap, CFunc_Dust::GetEntityClass);
  return &CFunc_Dust::m_DataMap;
}


// CFunc_DustMotes::CFunc_DustMotes  (line 105, @0x0000000002228610, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>, ~CFunc_Dust
// calls: CFunc_Dust::CFunc_Dust, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFunc_DustMotes::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFunc_DustMotes::CFunc_DustMotes(CFunc_DustMotes *const this)
{
  unsigned int v2; // r12d

  CFunc_Dust::CFunc_Dust(this);
  this->_vptr_IHandleEntity = &off_4043430;
  v2 = this->m_DustFlags.m_Value | 2;
  if ( this->m_DustFlags.m_Value != v2 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x4A4u, -1, -1);
    this->m_DustFlags.m_Value = v2;
  }
}


// CFunc_Dust::CFunc_Dust  (line 116, @0x0000000002228490, libserver.so)  // inlines: CNetworkColorBase, CNetworkVarBase, Color, EnsureValidValue<float>, EnsureValidValue<unsigned int>, Init, NetworkStateChanged, Set, SetAlpha, SetBlue, SetComponent, SetGreen, SetVal, operator=<float>, operator=<int>
// calls: CBaseModelEntity::CBaseModelEntity, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CFunc_Dust::CEntityInstanceEntityClass::ConstructInstance, CFunc_DustCloud::CEntityInstanceEntityClass::ConstructInstance, CFunc_DustMotes::CFunc_DustMotes
void __fastcall CFunc_Dust::CFunc_Dust(CFunc_Dust *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  bool v3; // zf

  CBaseModelEntity::CBaseModelEntity(this);
  vptr_IHandleEntity = &off_4044230;
  this->m_Color = 0;
  v3 = this->m_Color.m_Value._color[1] == 0;
  this->_vptr_IHandleEntity = &off_4044230;
  if ( !v3 )
  {
    CBaseEntity::NetworkStateChanged(this, 0x480u, -1, -1);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_Color.m_Value._color[1] = 0;
  }
  if ( this->m_Color.m_Value._color[2] != 0 )
  {
    vptr_IHandleEntity[22](this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_Color.m_Value._color[2] = 0;
  }
  if ( this->m_Color.m_Value._color[3] != 0 )
  {
    vptr_IHandleEntity[22](this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_Color.m_Value._color[3] = 0;
  }
  this->m_SpawnRate.m_Value = 0;
  this->m_SpeedMax.m_Value = 0;
  this->m_flSizeMin.m_Value = 0.0;
  this->m_flSizeMax.m_Value = 0.0;
  this->m_DistMax.m_Value = 0;
  this->m_LifetimeMin.m_Value = 0;
  this->m_LifetimeMax.m_Value = 0;
  this->m_FallSpeed.m_Value = 0.0;
  this->m_DustFlags.m_Value = 0;
  vptr_IHandleEntity[22](this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  this->m_DustFlags.m_Value = 1;
  if ( this->m_FallSpeed.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_FallSpeed.m_Value = 0.0;
  }
}


// CFunc_Dust::~CFunc_Dust  (line 123, @0x000000000221ad40, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CFunc_Dust::~CFunc_Dust(CFunc_Dust *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFunc_Dust::~CFunc_Dust  (line 123, @0x000000000221ad60, libserver.so)  // inlines: ~CFunc_Dust
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFunc_Dust::~CFunc_Dust(CFunc_Dust *const this)
{
  this->_vptr_IHandleEntity = &off_4044230;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFunc_Dust::Spawn  (line 128, @0x0000000002221100, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, NetworkStateChanged, Set, SetAlpha, SetComponent, SetVal, atoi, operator&=<int>, operator[], operator|=<int>
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseModelEntity::SetModelFromKeyValues, CCollisionProperty::SetupPhysicsAsNoCollision, VariantFieldTypeName, Warning, strtol
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_22212AA, jpt_2221332
void __fastcall CFunc_Dust::Spawn(CFunc_Dust *const this, const CEntityKeyValues *pKeyValues)
{
  unsigned __int8 m_iAlpha; // bl
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *p_m_value; // rcx
  int v11; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v12; // cx
  __int64 v13; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v14; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *v16; // rcx
  int16 m_type; // ax
  const char *v18; // rax
  unsigned int v19; // r13d
  int16 v20; // ax
  const char *v21; // rax
  unsigned int v22; // r13d
  const char *v23; // rax
  const char *m_uint64; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, -1517872836) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_28:
      p_m_value = &CEntityKeyValues::sm_EmptyVariant;
      goto LABEL_29;
    }
    m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
    v7 = 0;
    while ( 1 )
    {
      if ( m_nAllocated != 0 )
      {
        m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( m_nAllocated > 9 )
          m_pElements = pKeyValues->m_keyHashes.m_pElements;
        if ( m_pElements[v7] == -1517872836 )
        {
LABEL_14:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v9 = pKeyValues->m_keyValues.m_pElements;
          else
            v9 = 0;
          p_m_value = &v9[v7].m_value;
LABEL_29:
          m_type = p_m_value->m_type;
          switch ( m_type )
          {
            case 0:
              goto LABEL_31;
            case 1:
              LODWORD(m_uint64) = p_m_value->m_float;
              goto LABEL_54;
            case 5:
              LODWORD(m_uint64) = p_m_value->m_int;
              goto LABEL_54;
            case 6:
              LODWORD(m_uint64) = p_m_value->m_char;
              goto LABEL_54;
            case 26:
              m_uint64 = p_m_value->m_uint64;
              if ( p_m_value->m_int64 > 0x7FFFFFFF )
                goto LABEL_31;
              if ( m_uint64 < 0xFFFFFFFF80000000LL )
                LODWORD(m_uint64) = 0x80000000;
LABEL_54:
              if ( m_uint64 == 1 )
              {
                v19 = this->m_DustFlags.m_Value & 0xFFFFFFFE;
                if ( this->m_DustFlags.m_Value == v19 )
                  goto LABEL_2;
              }
              else
              {
LABEL_31:
                v19 = this->m_DustFlags.m_Value | 1;
                if ( this->m_DustFlags.m_Value == v19 )
                  goto LABEL_2;
              }
              (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
              this->m_DustFlags.m_Value = v19;
              goto LABEL_2;
            case 30:
              LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
              goto LABEL_54;
            case 33:
              m_uint64 = p_m_value->m_uint64;
              if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
                goto LABEL_54;
              goto LABEL_31;
            case 34:
              LODWORD(m_uint64) = p_m_value->m_float64;
              goto LABEL_54;
            case 37:
              LODWORD(m_uint64) = p_m_value->m_int;
              if ( p_m_value->m_int <= 0x7FFFFFFEu )
                goto LABEL_54;
              goto LABEL_31;
            default:
              v18 = VariantFieldTypeName(m_type);
              Warning("No conversion from %s to int now\n", v18);
              goto LABEL_31;
          }
        }
      }
      else if ( *(4 * v7) == -1517872836 )
      {
        goto LABEL_14;
      }
      if ( m_nCount <= ++v7 )
        goto LABEL_28;
    }
  }
LABEL_2:
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1658658249) )
    goto LABEL_3;
  v11 = pKeyValues->m_keyHashes.m_nCount;
  if ( v11 <= 0 )
  {
LABEL_33:
    v16 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_34;
  }
  v12 = pKeyValues->m_keyHashes.m_nAllocated;
  v13 = 0;
  while ( v12 == 0 )
  {
    if ( *(4 * v13) == 1658658249 )
      goto LABEL_25;
LABEL_22:
    if ( v11 <= ++v13 )
      goto LABEL_33;
  }
  v14 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v12 > 9 )
    v14 = pKeyValues->m_keyHashes.m_pElements;
  if ( v14[v13] != 1658658249 )
    goto LABEL_22;
LABEL_25:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v15 = pKeyValues->m_keyValues.m_pElements;
  else
    v15 = 0;
  v16 = &v15[v13].m_value;
LABEL_34:
  v20 = v16->m_type;
  switch ( v20 )
  {
    case 0:
      goto LABEL_36;
    case 1:
      LODWORD(v23) = v16->m_float;
      goto LABEL_39;
    case 5:
      LODWORD(v23) = v16->m_int;
      goto LABEL_39;
    case 6:
      LODWORD(v23) = v16->m_char;
      goto LABEL_39;
    case 26:
      v23 = v16->m_uint64;
      if ( v16->m_int64 > 0x7FFFFFFF )
        goto LABEL_36;
      if ( v23 < 0xFFFFFFFF80000000LL )
        LODWORD(v23) = 0x80000000;
LABEL_39:
      if ( v23 != 1 )
      {
LABEL_36:
        v22 = this->m_DustFlags.m_Value & 0xFFFFFFFB;
        if ( this->m_DustFlags.m_Value == v22 )
          goto LABEL_3;
        goto LABEL_37;
      }
      v22 = this->m_DustFlags.m_Value | 4;
      if ( this->m_DustFlags.m_Value != v22 )
      {
LABEL_37:
        (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_DustFlags.m_Value = v22;
      }
LABEL_3:
      CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
      CCollisionProperty::SetupPhysicsAsNoCollision(&this->m_Collision, 1);
      m_iAlpha = this->m_iAlpha;
      if ( m_iAlpha != this->m_Color.m_Value._color[3] )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->m_Color.m_Value._color[3] = m_iAlpha;
      }
      return;
    case 30:
      LODWORD(v23) = strtol(v16->m_pszString, 0, 10);
      goto LABEL_39;
    case 33:
      v23 = v16->m_uint64;
      if ( v16->m_uint64 <= 0x7FFFFFFE )
        goto LABEL_39;
      goto LABEL_36;
    case 34:
      LODWORD(v23) = v16->m_float64;
      goto LABEL_39;
    case 37:
      LODWORD(v23) = v16->m_int;
      if ( v16->m_int <= 0x7FFFFFFEu )
        goto LABEL_39;
      goto LABEL_36;
    default:
      v21 = VariantFieldTypeName(v20);
      Warning("No conversion from %s to int now\n", v21);
      goto LABEL_36;
  }
}


// CFunc_Dust::Precache  (line 158, @0x000000000223cb50, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/particle/sparkles"
void __fastcall CFunc_Dust::Precache(CFunc_Dust *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/particle/sparkles", pContext);
}


// CFunc_Dust::Activate  (line 164, @0x000000000221ae80, libserver.so)
// calls: CBaseModelEntity::Activate
void __fastcall CFunc_Dust::Activate(CFunc_Dust *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CFunc_Dust::InputTurnOn  (line 169, @0x000000000221ee90, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
void __fastcall CFunc_Dust::InputTurnOn(CFunc_Dust *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_DustFlags.m_Value;
  if ( (m_Value & 1) == 0 )
  {
    v4 = m_Value | 1;
    if ( m_Value != (m_Value | 1) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_DustFlags.m_Value = v4;
    }
  }
}


// CFunc_Dust::InputTurnOff  (line 178, @0x000000000221ee40, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
void __fastcall CFunc_Dust::InputTurnOff(CFunc_Dust *const this, inputdata_t *const inputdata)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  m_Value = this->m_DustFlags.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    v4 = m_Value & 0xFFFFFFFE;
    if ( m_Value != (m_Value & 0xFFFFFFFE) )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_DustFlags.m_Value = v4;
    }
  }
}


// CEnvDustPuff::~CEnvDustPuff  (line 186, @0x0000000002246d00, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CEnvDustPuff::~CEnvDustPuff(CEnvDustPuff *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvDustPuff::~CEnvDustPuff  (line 186, @0x0000000002246d20, libserver.so)  // inlines: ~CEnvDustPuff, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CEnvDustPuff::~CEnvDustPuff(CEnvDustPuff *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvDustPuff::GetEntityClass  (line 188, @0x0000000002245750, libserver.so)
CEntityClass *__cdecl CEnvDustPuff::GetEntityClass()
{
  return g_pEntityCEnvDustPuffClass;
}


// CEnvDustPuff::Schema_DynamicBinding  (line 188, @0x0000000002245760, libserver.so)
// globals: CEnvDustPuff::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDustPuff::Schema_DynamicBinding(const CEnvDustPuff *const this)
{
  return CEnvDustPuff::s_pSchemaBinding;
}


// CEnvDustPuff::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 188, @0x0000000002245770, libserver.so)
// globals: CEnvDustPuff::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDustPuff::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  return CEnvDustPuff::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvDustPuff::CEntityInstanceEntityClass::DestructInstance  (line 188, @0x0000000002245780, libserver.so)  // inlines: Destruct<CEnvDustPuff>
void __fastcall CEnvDustPuff::CEntityInstanceEntityClass::DestructInstance(
        CEnvDustPuff::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvDustPuff::CEntityInstanceEntityClass::FreeInstance  (line 188, @0x00000000022457a0, libserver.so)
void __fastcall CEnvDustPuff::CEntityInstanceEntityClass::FreeInstance(
        CEnvDustPuff::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvDustPuff::CEntityInstanceEntityClass::CanAllocate  (line 188, @0x00000000022457c0, libserver.so)
bool __fastcall CEnvDustPuff::CEntityInstanceEntityClass::CanAllocate(
        const CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvDustPuff::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 188, @0x00000000022457d0, libserver.so)
// globals: CEnvDustPuff::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvDustPuff::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  return CEnvDustPuff::s_pSchemaBinding;
}


// CEnvDustPuff::CEntityInstanceEntityClass::AllocateInstance  (line 188, @0x0000000002246910, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvDustPuff::CEntityInstanceEntityClass::AllocateInstance(
        CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CEnvDustPuff::CEntityInstanceEntityClass::ConstructInstance  (line 188, @0x0000000002246b50, libserver.so)  // inlines: CEnvDustPuff, CPointEntity, Color, Construct<CEnvDustPuff>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CEnvDustPuff::CEntityInstanceEntityClass::ConstructInstance(
        CEnvDustPuff::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = 0;
    *p = &off_4044970;
  }
  return p;
}


// CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 188, @0x0000000002248e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 188, @0x0000000002248e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDustPuff::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvDustPuff::GetEntityClassInternal  (line 188, @0x000000000224dfe0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "env_dustpuff", "CEnvDustPuff", "CPointEntity"
// globals: `guard variable for'CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass, CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo, CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (9 total)
CEntityClass *__cdecl CEnvDustPuff::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass) != 0 )
  {
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_designerName.u.m_Id = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass._vptr_CEntityClass = off_3F79390;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_ComponentOffsets.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_AllHelpers.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classInputs.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classOutputs.m_Size = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_requiredEHandle.m_Index = -1;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_hNetworkSerializer = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pBaseClassInfo = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pClassInfo = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_flags = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_nAllHelpersFlags = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pScriptClassDesc = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pInputs = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_nInputCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pOutputs = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_nOutputCount = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pGameClass = 0;
    CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass._vptr_CEntityClass = off_40448F0;
    __cxa_guard_release(&`guard variable for'CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass);
    __cxa_atexit(
      CEnvDustPuff::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvDustPuffClass != 0 )
    return &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass;
  if ( `guard variable for'CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo,
      "CEnvDustPuff",
      "env_dustpuff",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo);
  }
  CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pClassInfo = &CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo;
  CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pBaseClassInfo = CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvDustPuffClass = &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass;
  CEnvDustPuff::GetEntityClassInfo(void)::g_EntityCEnvDustPuffClassInfo.m_pClass = &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass;
  CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvDustPuffClass->m_pComponentOverrides = 0;
  return &CEnvDustPuff::GetEntityClassInternal(void)::g_EntityCEnvDustPuffClass;
}


// CEnvDustPuff::GetDataDescMap  (line 203, @0x000000000221a490, libserver.so)
// globals: CEnvDustPuff::m_DataMap
datamap_t *__fastcall CEnvDustPuff::GetDataDescMap(CEnvDustPuff *const this)
{
  return &CEnvDustPuff::m_DataMap;
}


// CEnvDustPuff::AddDatadescMetadataKeys  (line 203, @0x0000000002228680, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvDustPuff::GetEntityClass(void)
void __fastcall CEnvDustPuff::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvDustPuff::GetEntityClass);
}


// CEnvDustPuff::GetBaseMap  (line 203, @0x00000000022286a0, libserver.so)
datamap_t *__cdecl CEnvDustPuff::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CEnvDustPuff>  (line 203, @0x00000000022286b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CEnvDustPuff"
// globals: `guard variable for'DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder, CEnvDustPuff::GetEntityClass(void), CEnvDustPuff::m_DataMap, DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvDustPuff>(CEnvDustPuff *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_pszBase = "CEnvDustPuff";
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::nameHolder,
      &_dso_handle);
  }
  CEnvDustPuff::m_DataMap.dataNumFields = 3;
  CEnvDustPuff::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CEnvDustPuff::m_DataMap.dataDesc = &DataMapInit<CEnvDustPuff>(CEnvDustPuff *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvDustPuff::m_DataMap, CEnvDustPuff::GetEntityClass);
  return &CEnvDustPuff::m_DataMap;
}


// CEnvDustPuff::InputSpawnDust  (line 218, @0x0000000002226970, libserver.so)
// calls: CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CBaseEntity::GetAbsOrigin, ITempEntsSystem::Dust
void __fastcall CEnvDustPuff::InputSpawnDust(CEnvDustPuff *const this, inputdata_t *const inputdata)
{
  const QAngle *AbsAngles; // rax
  const Vector *AbsOrigin; // rax
  float speed; // [rsp+8h] [rbp-28h]
  float size; // [rsp+Ch] [rbp-24h]
  Vector dir; // [rsp+10h] [rbp-20h] BYREF

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &dir, 0, 0);
  VectorNormalize(&dir);
  speed = this->m_flSpeed;
  size = this->m_flScale;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  ITempEntsSystem::Dust(g_pEffects, AbsOrigin, &dir, LODWORD(size), speed);
}


