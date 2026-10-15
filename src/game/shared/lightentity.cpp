// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/lightentity.cpp:26
class CLightEntity : public CBaseModelEntity {
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

protected:

	Storage_t m_CLightComponent;  // +0x480

	static datamap_t m_DataMap;
	typedef CBaseModelEntity BaseClass;
	CLightEntity(CLightEntity &);
	CLightEntity(CLightEntity &);
	CLightEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CLightComponent * GetComponent_CLightComponent();
	const CLightComponent * GetComponent(const CLightComponent *);
	CLightComponent * GetComponent(CLightComponent *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual int UpdateTransmitState();
	virtual bool ShouldDraw();
	virtual int ObjectCaps();
	void SetBrightnessMultiplier(float);
	void TurnOn();
	void TurnOff();
	void SetFlicker(bool);

private:

	void Input_SetLightEnabled(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_TurnOn(inputdata2_t &);
	void Input_TurnOff(inputdata2_t &);
	void Input_Toggle(inputdata2_t &);
	void Input_SetLightColor(inputdata2_t &);
	void Input_SetLightBrightness(inputdata2_t &);
	virtual ~CLightEntity();
	/* tag__fprintf: const_type tag not supported! */;
	CLightComponent * GetComponent<CLightComponent>();

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[64] UpdateTransmitState
	// vtable[78] ShouldDraw
	// vtable[19] ObjectCaps
	// sizeof = 1160
};

// src/game/shared/lightentity.cpp:105
class C_CLightEntity_MapInstall {
	C_CLightEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/lightentity.cpp:176
class CLightSpotEntity : public CLightEntity {
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
	CLightSpotEntity(CLightSpotEntity &);
	CLightSpotEntity(CLightSpotEntity &);
	CLightSpotEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CLightSpotEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1160
};

// src/game/shared/lightentity.cpp:182
class C_CLightSpotEntity_MapInstall {
	C_CLightSpotEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/lightentity.cpp:185
class CLightDirectionalEntity : public CLightEntity {
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

	CLightDirectionalEntity(CLightDirectionalEntity &);
	CLightDirectionalEntity(CLightDirectionalEntity &);
	CLightDirectionalEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CLightDirectionalEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1160
};

// src/game/shared/lightentity.cpp:191
class C_CLightDirectionalEntity_MapInstall {
	C_CLightDirectionalEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/lightentity.cpp:194
class CLightEnvironmentEntity : public CLightDirectionalEntity {
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
	CLightEnvironmentEntity(CLightEnvironmentEntity &);
	CLightEnvironmentEntity(CLightEnvironmentEntity &);
	CLightEnvironmentEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CLightEnvironmentEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1160
};

// src/game/shared/lightentity.cpp:200
class C_CLightEnvironmentEntity_MapInstall {
	C_CLightEnvironmentEntity_MapInstall();

	// sizeof = 1
};

// src/game/shared/lightentity.cpp:204
class CMultiLightProxy : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

protected:

	string_t m_iszLightNameFilter;  // +0x308
	string_t m_iszLightClassFilter;  // +0x310
	float m_flTargetBrightnessMultiplier;  // +0x318
	float m_flCurrentBrightnessMultiplier;  // +0x31c
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
	CMultiLightProxy(CMultiLightProxy &);
	CMultiLightProxy(CMultiLightProxy &);
	CMultiLightProxy();
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
	void InputFlickerLights(inputdata_t &);
	void InputDisableLights(inputdata_t &);
	void InputSetLightsBrightnessMultiplier(inputdata_t &);
	void RestoreFlashlightThink();
	void ApproachBrightnessThink();
	virtual ~CMultiLightProxy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 824
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLightEntity::~CLightEntity  (line 26, @0x0000000001eec930, libserver.so)
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CLightEntity::~CLightEntity(CLightEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CLightEntity::~CLightEntity  (line 26, @0x0000000001eec950, libserver.so)  // inlines: ~CLightEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CLightEntity::~CLightEntity(CLightEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightEntity::GetEntityClass  (line 28, @0x0000000001eead10, libserver.so)
CEntityClass *__cdecl CLightEntity::GetEntityClass()
{
  return g_pEntityCLightEntityClass;
}


// CLightEntity::Schema_DynamicBinding  (line 28, @0x0000000001eead20, libserver.so)
// globals: CLightEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightEntity::Schema_DynamicBinding(const CLightEntity *const this)
{
  return CLightEntity::s_pSchemaBinding;
}


// CLightEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000001eead30, libserver.so)
// globals: CLightEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightEntity::CEntityInstanceEntityClass *const this)
{
  return CLightEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightEntity::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000001eead40, libserver.so)  // inlines: Destruct<CLightEntity>
void __fastcall CLightEntity::CEntityInstanceEntityClass::DestructInstance(
        CLightEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightEntity::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000001eead60, libserver.so)
void __fastcall CLightEntity::CEntityInstanceEntityClass::FreeInstance(
        CLightEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightEntity::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000001eead80, libserver.so)
bool __fastcall CLightEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLightEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000001eead90, libserver.so)
// globals: CLightEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightEntity::CEntityInstanceEntityClass *const this)
{
  return CLightEntity::s_pSchemaBinding;
}


// CLightEntity::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000001eec1a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLightEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CLightEntity::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000001eec4c0, libserver.so)  // inlines: CLightEntity, Construct<CLightEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CLightEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLightEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FBEE50;
  }
  return p;
}


// CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001eedd10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000001eedd30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightEntity::GetEntityClassInfo  (line 28, @0x0000000001ef1c90, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CLightDirectionalEntity::GetEntityClassInternal, CLightSpotEntity::GetEntityClassInternal
// strings: "An omnidirectional light entity", "light_omni", "CLightEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CLightEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo != 0 )
    return &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo) == 0 )
    return &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo;
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
    &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo,
    "CLightEntity",
    "light_omni",
    "An omnidirectional light entity",
    &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo);
  return &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo;
}


// CLightEntity::GetEntityClassInternal  (line 28, @0x0000000001ef86d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CLightEntity::SetupEntClassInputs, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "An omnidirectional light entity", "light_omni", "CLightEntity", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass, CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo (9 total)
CEntityClass *__cdecl CLightEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass) != 0 )
  {
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_designerName.u.m_Id = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass._vptr_CEntityClass = off_3F79390;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_ComponentOffsets.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_AllHelpers.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classInputs.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classOutputs.m_Size = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_requiredEHandle.m_Index = -1;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_hNetworkSerializer = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pBaseClassInfo = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pClassInfo = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_flags = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_nAllHelpersFlags = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pScriptClassDesc = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pInputs = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_nInputCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pOutputs = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_nOutputCount = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pGameClass = 0;
    CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass._vptr_CEntityClass = off_3FBEDD0;
    __cxa_guard_release(&`guard variable for'CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass);
    __cxa_atexit(
      CLightEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightEntityClass != 0 )
    return &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass;
  if ( `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo) != 0 )
  {
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
      &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo,
      "CLightEntity",
      "light_omni",
      "An omnidirectional light entity",
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo);
  }
  CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pClassInfo = &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo;
  CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pBaseClassInfo = CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLightEntityClass = &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass;
  CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo.m_pClass = &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass;
  CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  CLightEntity::SetupEntClassInputs(g_pEntityCLightEntityClass);
  g_pEntityCLightEntityClass->m_pComponentOverrides = 0;
  return &CLightEntity::GetEntityClassInternal(void)::g_EntityCLightEntityClass;
}


// CLightEntity::Spawn  (line 39, @0x0000000001eecbd0, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, StaticInvalidHandle
// calls: CBaseModelEntity::SetModel, CBaseEntity::Spawn
void __fastcall CLightEntity::Spawn(CLightEntity *const this, const CEntityKeyValues *pKeyValues)
{
  HModel hModel; // [rsp+0h] [rbp-20h] BYREF

  hModel.m_pBinding = 0;
  CBaseModelEntity::SetModel(this, &hModel);
  CBaseEntity::Spawn(this, pKeyValues);
}


// CLightEntity::Activate  (line 46, @0x0000000001eecc10, libserver.so)
// calls: CLightComponent::Activate, CBaseModelEntity::Activate
void __fastcall CLightEntity::Activate(CLightEntity *const this, ActivateType_t activateType)
{
  CLightComponent::Activate(this->m_CLightComponent, this);
  CBaseModelEntity::Activate(this, activateType);
}


// CLightEntity::UpdateOnRemove  (line 52, @0x0000000001eecc40, libserver.so)
// calls: CLightComponent::UpdateOnRemove, CBaseModelEntity::UpdateOnRemove
void __fastcall CLightEntity::UpdateOnRemove(CLightEntity *const this)
{
  CLightComponent::UpdateOnRemove(this->m_CLightComponent, this);
  CBaseModelEntity::UpdateOnRemove(this);
}


// CLightEntity::UpdateTransmitState  (line 58, @0x0000000001eecbb0, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CLightEntity::UpdateTransmitState(CLightEntity *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CLightEntity::ShouldDraw  (line 63, @0x0000000001eeada0, libserver.so)
bool __fastcall CLightEntity::ShouldDraw(CLightEntity *const this)
{
  return 1;
}


// CLightEntity::ObjectCaps  (line 69, @0x0000000001eec450, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CLightEntity::ObjectCaps(CLightEntity *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CLightEntity::YouForgotToImplementOrDeclareServerClass  (line 105, @0x0000000001ecc060, libserver.so)
int __fastcall CLightEntity::YouForgotToImplementOrDeclareServerClass(CLightEntity *const this)
{
  return 0;
}


// CLightEntity::GetServerClass  (line 105, @0x0000000001ed12a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CLightEntity::GetServerClass(CLightEntity *const this)
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


// CLightEntity::GetDataDescMap  (line 107, @0x0000000001ecc070, libserver.so)
// globals: CLightEntity::m_DataMap
datamap_t *__fastcall CLightEntity::GetDataDescMap(CLightEntity *const this)
{
  return &CLightEntity::m_DataMap;
}


// CLightEntity::AddDatadescMetadataKeys  (line 107, @0x0000000001edeac0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLightEntity::GetEntityClass(void)
void __fastcall CLightEntity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLightEntity::GetEntityClass);
}


// CLightEntity::GetBaseMap  (line 107, @0x0000000001edeae0, libserver.so)
datamap_t *__cdecl CLightEntity::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CLightEntity>  (line 107, @0x0000000001edeaf0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CLightEntity"
// globals: `guard variable for'DataMapInit<CLightEntity>(CLightEntity *)::nameHolder, `guard variable for'DataMapInit<CLightEntity>(CLightEntity *)::dataDesc, CLightEntity::GetEntityClass(void), CLightEntity::m_DataMap, GetEntityComponentDataOps<CLightComponent>(void)::ops, DataMapInit<CLightEntity>(CLightEntity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLightEntity>(CLightEntity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::nameHolder) != 0 )
  {
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_pszBase = "CLightEntity";
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLightEntity>(CLightEntity *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLightEntity>(CLightEntity *)::nameHolder,
      &_dso_handle);
  }
  CLightEntity::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::dataDesc) != 0 )
  {
    DataMapInit<CLightEntity>(CLightEntity *)::dataDesc[1].pSaveRestoreOps = &GetEntityComponentDataOps<CLightComponent>(void)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLightEntity>(CLightEntity *)::dataDesc);
  }
  CLightEntity::m_DataMap.dataNumFields = 1;
  CLightEntity::m_DataMap.dataDesc = &DataMapInit<CLightEntity>(CLightEntity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLightEntity::m_DataMap, CLightEntity::GetEntityClass);
  return &CLightEntity::m_DataMap;
}


// CLightEntity::Input_SetLightEnabled  (line 112, @0x0000000001ee1360, libserver.so)  // inlines: AssignTo, Get, Get<bool>, NetworkStateChanged, Set, SetEnabled, TempString, operator CEntityInstance*, operator=<bool>
// calls: V_stricmp_fast
// strings: "false"
void __fastcall CLightEntity::Input_SetLightEnabled(
        CLightEntity *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // ax
  CLightComponent::Storage_t m_CLightComponent; // rbx
  uint64 m_uint64; // r12
  CEntityInstance *v8; // rdi
  char m_char; // r12
  CEntityInstance *v10; // rdi
  CEntityInstance *m_pObj; // rdi

  m_type = value->m_type;
  m_CLightComponent = this->m_CLightComponent;
  if ( m_type == 30 )
  {
    m_uint64 = value->m_uint64;
    if ( V_stricmp_fast(value->m_uint64, "false") != 0 && V_stricmp_fast(m_uint64, "0") != 0 )
    {
      if ( !m_CLightComponent->m_bEnabled.m_Value )
      {
        m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
        if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
          (*(m_pObj->_vptr_IHandleEntity + 22))(
            m_pObj,
            224,
            0xFFFFFFFFLL,
            m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
        m_CLightComponent->m_bEnabled.m_Value = 1;
      }
    }
    else if ( m_CLightComponent->m_bEnabled.m_Value )
    {
      v8 = m_CLightComponent->__m_pChainEntity.m_pObj;
      if ( v8 != 0 && (v8->m_pEntity->m_flags & 0x400) == 0 )
        (*(v8->_vptr_IHandleEntity + 22))(
          v8,
          224,
          0xFFFFFFFFLL,
          m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
      m_CLightComponent->m_bEnabled.m_Value = 0;
    }
  }
  else
  {
    if ( m_type == 5 )
    {
      m_char = value->m_int != 0;
      if ( m_char == m_CLightComponent->m_bEnabled.m_Value )
        return;
    }
    else
    {
      if ( m_type != 6 )
        return;
      m_char = value->m_char;
      if ( value->m_char == m_CLightComponent->m_bEnabled.m_Value )
        return;
    }
    v10 = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( v10 != 0 && (v10->m_pEntity->m_flags & 0x400) == 0 )
      (*(v10->_vptr_IHandleEntity + 22))(
        v10,
        224,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
    m_CLightComponent->m_bEnabled.m_Value = m_char;
  }
}


// CLightEntity::Input_TurnOn  (line 138, @0x0000000001ecf730, libserver.so)  // inlines: Get, NetworkStateChanged, Set, SetEnabled, TurnOn, operator CEntityInstance*, operator=<bool>
void __fastcall CLightEntity::Input_TurnOn(CLightEntity *const this, inputdata2_t *const input)
{
  CLightComponent::Storage_t m_CLightComponent; // rbx
  CEntityInstance *m_pObj; // rdi

  m_CLightComponent = this->m_CLightComponent;
  if ( !m_CLightComponent->m_bEnabled.m_Value )
  {
    m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        224,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
    m_CLightComponent->m_bEnabled.m_Value = 1;
  }
}


// CLightEntity::Input_TurnOff  (line 144, @0x0000000001ecf790, libserver.so)  // inlines: Get, NetworkStateChanged, Set, SetEnabled, TurnOff, operator CEntityInstance*, operator=<bool>
void __fastcall CLightEntity::Input_TurnOff(CLightEntity *const this, inputdata2_t *const input)
{
  CLightComponent::Storage_t m_CLightComponent; // rbx
  CEntityInstance *m_pObj; // rdi

  m_CLightComponent = this->m_CLightComponent;
  if ( m_CLightComponent->m_bEnabled.m_Value )
  {
    m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        224,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
    m_CLightComponent->m_bEnabled.m_Value = 0;
  }
}


// CLightEntity::Input_Toggle  (line 150, @0x0000000001ecf910, libserver.so)  // inlines: Get, IsEnabled, NetworkStateChanged, Set, SetEnabled, operator CEntityInstance*, operator=<bool>
void __fastcall CLightEntity::Input_Toggle(CLightEntity *const this, inputdata2_t *const input)
{
  CLightComponent::Storage_t m_CLightComponent; // rbx
  bool v3; // r12
  CEntityInstance *m_pObj; // rdi

  m_CLightComponent = this->m_CLightComponent;
  v3 = !m_CLightComponent->m_bEnabled.m_Value;
  if ( v3 != m_CLightComponent->m_bEnabled.m_Value )
  {
    m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        224,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
    m_CLightComponent->m_bEnabled.m_Value = v3;
  }
}


// CLightEntity::Input_SetLightColor  (line 157, @0x0000000001ed0640, libserver.so)  // inlines: AssignTo, EmptyValue<Vector>, Get, Get<Vector>, NetworkStateChanged, Set, SetColor, SetRawColor, operator CEntityInstance*, operator=
// calls: V_sscanf, VariantFieldTypeName, Warning
// strings: "No free conversion of %s variant to Vector right now\n"
void __fastcall CLightEntity::Input_SetLightColor(CLightEntity *const this, inputdata2_t *const input)
{
  const CVariant *value; // r9
  CLightComponent::Storage_t m_CLightComponent; // r12
  float z; // xmm0_4
  float x; // xmm2_4
  float y; // xmm1_4
  int16 m_type; // di
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  unsigned __int16 v11; // bx
  unsigned int v12; // ebx
  int v13; // eax
  CEntityInstance *m_pObj; // rdi
  const char *v15; // rax
  float v16; // [rsp+4h] [rbp-2Ch]
  float v17; // [rsp+8h] [rbp-28h]
  vec_t v18; // [rsp+Ch] [rbp-24h]
  vec_t v19; // [rsp+10h] [rbp-20h] BYREF
  float v20; // [rsp+14h] [rbp-1Ch] BYREF
  float v21; // [rsp+18h] [rbp-18h] BYREF

  value = input->value;
  m_CLightComponent = this->m_CLightComponent;
  z = vec3_origin.z;
  x = vec3_origin.x;
  v21 = z;
  y = vec3_origin.y;
  m_type = value->m_type;
  v19 = vec3_origin.x;
  v20 = y;
  if ( m_type == 3 )
    goto LABEL_5;
  if ( m_type <= 3 )
  {
    if ( m_type == 0 )
      goto LABEL_6;
    goto LABEL_24;
  }
  if ( m_type != 30 )
  {
    if ( m_type == 39 )
    {
LABEL_5:
      y = *(value->m_uint64 + 4);
      z = *(value->m_uint64 + 8);
      x = *value->m_pszString;
      goto LABEL_6;
    }
LABEL_24:
    v15 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to Vector right now\n", v15);
    x = v19;
    z = v21;
    y = v20;
    goto LABEL_6;
  }
  v16 = z;
  v17 = y;
  v18 = vec3_origin.x;
  v13 = V_sscanf(value->m_uint64, "%g %g %g", &v19, &v20, &v21);
  x = v18;
  y = v17;
  z = v16;
  if ( v13 == 3 )
  {
    x = v19;
    z = v21;
    y = v20;
  }
LABEL_6:
  LOBYTE(v8) = -1;
  if ( x <= 255.0 )
  {
    LOBYTE(v8) = 0;
    if ( x >= 0.0 )
      v8 = x;
  }
  LOBYTE(v9) = -1;
  if ( y <= 255.0 )
  {
    LOBYTE(v9) = 0;
    if ( y >= 0.0 )
      v9 = y;
  }
  LOBYTE(v10) = -1;
  if ( z <= 255.0 )
  {
    LOBYTE(v10) = 0;
    if ( z >= 0.0 )
      v10 = z;
  }
  LOBYTE(v11) = v8;
  HIBYTE(v11) = v9;
  v12 = (v10 << 16) | v11 | 0xFF000000;
  if ( *&m_CLightComponent->m_Color != v12 )
  {
    m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        132,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
    m_CLightComponent->m_Color = v12;
  }
}


// CLightEntity::Input_SetLightBrightness  (line 168, @0x0000000001ed0810, libserver.so)  // inlines: AssignTo, Get, Get<float>, NetworkStateChanged, Set, SetBrightness, atof, operator CEntityInstance*, operator=<float>
// calls: strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: jpt_1ED0843
void __fastcall CLightEntity::Input_SetLightBrightness(CLightEntity *const this, inputdata2_t *const input)
{
  const CVariant *value; // rdx
  CLightComponent::Storage_t m_CLightComponent; // rbx
  int16 m_type; // di
  float m_float; // xmm0_4
  bool v6; // zf
  CEntityInstance *m_pObj; // rdi
  const char *m_uint64; // rax
  const char *v9; // rax
  __int64 v10; // rdx
  float v11; // [rsp+Ch] [rbp-14h]

  value = input->value;
  m_CLightComponent = this->m_CLightComponent;
  m_type = value->m_type;
  switch ( m_type )
  {
    case 0:
      m_float = 0.0;
      break;
    case 1:
      m_float = value->m_float;
      v6 = value->m_float == m_CLightComponent->m_flBrightness.m_Value;
      goto LABEL_4;
    case 5:
      m_float = value->m_int;
      break;
    case 6:
      m_float = value->m_char;
      break;
    case 26:
      m_float = value->m_uint64;
      break;
    case 30:
      m_float = strtod(value->m_pszString, 0);
      break;
    case 33:
      m_uint64 = value->m_uint64;
      if ( value->m_int64 >= 0 )
        goto LABEL_13;
      v10 = value->m_uint64 & 1 | (value->m_uint64 >> 1);
      m_float = v10 + v10;
      break;
    case 34:
      m_float = value->m_float64;
      break;
    case 37:
      LODWORD(m_uint64) = value->m_int;
LABEL_13:
      m_float = m_uint64;
      break;
    default:
      v9 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v9);
      m_float = 0.0;
      break;
  }
  v6 = m_float == m_CLightComponent->m_flBrightness.m_Value;
LABEL_4:
  if ( !v6 )
  {
    m_pObj = m_CLightComponent->__m_pChainEntity.m_pObj;
    if ( m_pObj != 0 && (m_pObj->m_pEntity->m_flags & 0x400) == 0 )
    {
      v11 = m_float;
      (*(m_pObj->_vptr_IHandleEntity + 22))(
        m_pObj,
        136,
        0xFFFFFFFFLL,
        m_CLightComponent->__m_pChainEntity.m_PathIndex.m_Value);
      m_float = v11;
    }
    m_CLightComponent->m_flBrightness.m_Value = m_float;
  }
}


// CLightSpotEntity::~CLightSpotEntity  (line 176, @0x0000000001eec980, libserver.so)  // inlines: ~CLightEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CLightSpotEntity::~CLightSpotEntity(CLightSpotEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CLightSpotEntity::~CLightSpotEntity  (line 176, @0x0000000001eec9a0, libserver.so)  // inlines: ~CLightEntity, ~CLightSpotEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CLightSpotEntity::~CLightSpotEntity(CLightSpotEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightSpotEntity::Schema_DynamicBinding  (line 178, @0x0000000001eeadb0, libserver.so)
// globals: CLightSpotEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpotEntity::Schema_DynamicBinding(const CLightSpotEntity *const this)
{
  return CLightSpotEntity::s_pSchemaBinding;
}


// CLightSpotEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 178, @0x0000000001eeadc0, libserver.so)
// globals: CLightSpotEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightSpotEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  return CLightSpotEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightSpotEntity::CEntityInstanceEntityClass::DestructInstance  (line 178, @0x0000000001eeadd0, libserver.so)  // inlines: Destruct<CLightSpotEntity>
void __fastcall CLightSpotEntity::CEntityInstanceEntityClass::DestructInstance(
        CLightSpotEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightSpotEntity::CEntityInstanceEntityClass::FreeInstance  (line 178, @0x0000000001eeadf0, libserver.so)
void __fastcall CLightSpotEntity::CEntityInstanceEntityClass::FreeInstance(
        CLightSpotEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightSpotEntity::CEntityInstanceEntityClass::CanAllocate  (line 178, @0x0000000001eeae10, libserver.so)
bool __fastcall CLightSpotEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightSpotEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 178, @0x0000000001eeae20, libserver.so)
// globals: CLightSpotEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightSpotEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  return CLightSpotEntity::s_pSchemaBinding;
}


// CLightSpotEntity::CEntityInstanceEntityClass::AllocateInstance  (line 178, @0x0000000001eec1e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightSpotEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CLightSpotEntity::CEntityInstanceEntityClass::ConstructInstance  (line 178, @0x0000000001eec4f0, libserver.so)  // inlines: CLightEntity, CLightSpotEntity, Construct<CLightSpotEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CLightSpotEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLightSpotEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FBF590;
  }
  return p;
}


// CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 178, @0x0000000001eedd60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 178, @0x0000000001eedd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightSpotEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightSpotEntity::GetEntityClassInternal  (line 178, @0x0000000001ef7980, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CLightEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "A spot light entity", "light_spot", "CLightSpotEntity"
// globals: `guard variable for'CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass, CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo, CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo
CEntityClass *__cdecl CLightSpotEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass) != 0 )
  {
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_designerName.u.m_Id = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass._vptr_CEntityClass = off_3F79390;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_ComponentOffsets.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_AllHelpers.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classInputs.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classOutputs.m_Size = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_requiredEHandle.m_Index = -1;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_hNetworkSerializer = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pBaseClassInfo = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pClassInfo = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_flags = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_nAllHelpersFlags = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pScriptClassDesc = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pInputs = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_nInputCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pOutputs = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_nOutputCount = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pGameClass = 0;
    CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass._vptr_CEntityClass = off_3FBF510;
    __cxa_guard_release(&`guard variable for'CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass);
    __cxa_atexit(
      CLightSpotEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightSpotEntityClass != 0 )
    return &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass;
  if ( `guard variable for'CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo) != 0 )
  {
    EntityClassInfo = CLightEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo,
      "CLightSpotEntity",
      "light_spot",
      "A spot light entity",
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo);
  }
  CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pClassInfo = &CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo;
  CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pBaseClassInfo = CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLightSpotEntityClass = &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass;
  CLightSpotEntity::GetEntityClassInfo(void)::g_EntityCLightSpotEntityClassInfo.m_pClass = &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass;
  CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCLightSpotEntityClass->m_pComponentOverrides = 0;
  return &CLightSpotEntity::GetEntityClassInternal(void)::g_EntityCLightSpotEntityClass;
}


// CLightSpotEntity::YouForgotToImplementOrDeclareServerClass  (line 182, @0x0000000001ecc080, libserver.so)
int __fastcall CLightSpotEntity::YouForgotToImplementOrDeclareServerClass(CLightSpotEntity *const this)
{
  return 0;
}


// CLightSpotEntity::GetServerClass  (line 182, @0x0000000001ed1420, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CLightSpotEntity::GetServerClass(CLightSpotEntity *const this)
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


// CLightDirectionalEntity::~CLightDirectionalEntity  (line 185, @0x0000000001eec9d0, libserver.so)  // inlines: ~CLightEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CLightDirectionalEntity::~CLightDirectionalEntity(CLightDirectionalEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CLightDirectionalEntity::~CLightDirectionalEntity  (line 185, @0x0000000001eec9f0, libserver.so)  // inlines: ~CLightDirectionalEntity, ~CLightEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CLightDirectionalEntity::~CLightDirectionalEntity(CLightDirectionalEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightDirectionalEntity::Schema_DynamicBinding  (line 187, @0x0000000001eeae30, libserver.so)
// globals: CLightDirectionalEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightDirectionalEntity::Schema_DynamicBinding(
        const CLightDirectionalEntity *const this)
{
  return CLightDirectionalEntity::s_pSchemaBinding;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 187, @0x0000000001eeae40, libserver.so)
// globals: CLightDirectionalEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  return CLightDirectionalEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::DestructInstance  (line 187, @0x0000000001eeae50, libserver.so)  // inlines: Destruct<CLightDirectionalEntity>
void __fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::DestructInstance(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::FreeInstance  (line 187, @0x0000000001eeae70, libserver.so)
void __fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::FreeInstance(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::CanAllocate  (line 187, @0x0000000001eeae90, libserver.so)
bool __fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 187, @0x0000000001eeaea0, libserver.so)
// globals: CLightDirectionalEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  return CLightDirectionalEntity::s_pSchemaBinding;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::AllocateInstance  (line 187, @0x0000000001eec220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::ConstructInstance  (line 187, @0x0000000001eec520, libserver.so)  // inlines: CLightDirectionalEntity, CLightEntity, Construct<CLightDirectionalEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FBFCD0;
  }
  return p;
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 187, @0x0000000001eeddb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 187, @0x0000000001eeddd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightDirectionalEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightDirectionalEntity::GetEntityClassInfo  (line 187, @0x0000000001ef1d60, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release, CBaseEntity::GetEntityClassInfo
// callers: CLightEnvironmentEntity::GetEntityClassInternal
// strings: "A directional light entity", "light_directional", "CLightDirectionalEntity", "An omnidirectional light entity", "light_omni", "CLightEntity" (8 total)
// globals: `guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo, CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo, `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo, `guard variable for'CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo, CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo
CEntityClassInfo *__cdecl CLightDirectionalEntity::GetEntityClassInfo()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo != 0 )
    return &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo) == 0 )
    return &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo;
  if ( `guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo) != 0 )
  {
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
      &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo,
      "CLightEntity",
      "light_omni",
      "An omnidirectional light entity",
      &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo,
    "CLightDirectionalEntity",
    "light_directional",
    "A directional light entity",
    &CLightEntity::GetEntityClassInfo(void)::g_EntityCLightEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo);
  return &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo;
}


// CLightDirectionalEntity::GetEntityClassInternal  (line 187, @0x0000000001ef47e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CLightEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "A directional light entity", "light_directional", "CLightDirectionalEntity"
// globals: `guard variable for'CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass, CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo, CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo
CEntityClass *__cdecl CLightDirectionalEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass) != 0 )
  {
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_designerName.u.m_Id = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass._vptr_CEntityClass = off_3F79390;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_ComponentOffsets.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_AllHelpers.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classInputs.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classOutputs.m_Size = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_requiredEHandle.m_Index = -1;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_hNetworkSerializer = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pBaseClassInfo = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pClassInfo = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_flags = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_nAllHelpersFlags = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pScriptClassDesc = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pInputs = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_nInputCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pOutputs = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_nOutputCount = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pGameClass = 0;
    CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass._vptr_CEntityClass = off_3FBFC50;
    __cxa_guard_release(&`guard variable for'CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass);
    __cxa_atexit(
      CLightDirectionalEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightDirectionalEntityClass != 0 )
    return &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass;
  if ( `guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo) != 0 )
  {
    EntityClassInfo = CLightEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo,
      "CLightDirectionalEntity",
      "light_directional",
      "A directional light entity",
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo);
  }
  CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pClassInfo = &CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo;
  CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pBaseClassInfo = CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLightDirectionalEntityClass = &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass;
  CLightDirectionalEntity::GetEntityClassInfo(void)::g_EntityCLightDirectionalEntityClassInfo.m_pClass = &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass;
  CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCLightDirectionalEntityClass->m_pComponentOverrides = 0;
  return &CLightDirectionalEntity::GetEntityClassInternal(void)::g_EntityCLightDirectionalEntityClass;
}


// CLightDirectionalEntity::YouForgotToImplementOrDeclareServerClass  (line 191, @0x0000000001ecc090, libserver.so)
int __fastcall CLightDirectionalEntity::YouForgotToImplementOrDeclareServerClass(CLightDirectionalEntity *const this)
{
  return 0;
}


// CLightDirectionalEntity::GetServerClass  (line 191, @0x0000000001ed1360, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CLightDirectionalEntity::GetServerClass(CLightDirectionalEntity *const this)
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


// CLightEnvironmentEntity::~CLightEnvironmentEntity  (line 194, @0x0000000001eeca20, libserver.so)  // inlines: ~CLightDirectionalEntity, ~CLightEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CLightEnvironmentEntity::~CLightEnvironmentEntity(CLightEnvironmentEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CLightEnvironmentEntity::~CLightEnvironmentEntity  (line 194, @0x0000000001eeca40, libserver.so)  // inlines: ~CLightDirectionalEntity, ~CLightEntity, ~CLightEnvironmentEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CLightEnvironmentEntity::~CLightEnvironmentEntity(CLightEnvironmentEntity *const this)
{
  this->_vptr_IHandleEntity = &off_3FBEE50;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CLightEnvironmentEntity::Schema_DynamicBinding  (line 196, @0x0000000001eeaeb0, libserver.so)
// globals: CLightEnvironmentEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightEnvironmentEntity::Schema_DynamicBinding(
        const CLightEnvironmentEntity *const this)
{
  return CLightEnvironmentEntity::s_pSchemaBinding;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 196, @0x0000000001eeaec0, libserver.so)
// globals: CLightEnvironmentEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  return CLightEnvironmentEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::DestructInstance  (line 196, @0x0000000001eeaed0, libserver.so)  // inlines: Destruct<CLightEnvironmentEntity>
void __fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::DestructInstance(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::FreeInstance  (line 196, @0x0000000001eeaef0, libserver.so)
void __fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::FreeInstance(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::CanAllocate  (line 196, @0x0000000001eeaf10, libserver.so)
bool __fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::CanAllocate(
        const CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 196, @0x0000000001eeaf20, libserver.so)
// globals: CLightEnvironmentEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  return CLightEnvironmentEntity::s_pSchemaBinding;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::AllocateInstance  (line 196, @0x0000000001eec260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::AllocateInstance(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1160);
  memset(v1, 0, 0x488u);
  return v1;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::ConstructInstance  (line 196, @0x0000000001eec550, libserver.so)  // inlines: CLightDirectionalEntity, CLightEntity, CLightEnvironmentEntity, Construct<CLightEnvironmentEntity>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::ConstructInstance(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *p = &off_3FC0410;
  }
  return p;
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 196, @0x0000000001eede00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 196, @0x0000000001eede20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLightEnvironmentEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLightEnvironmentEntity::GetEntityClassInternal  (line 196, @0x0000000001ef6250, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CLightDirectionalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "An environment light entity", "light_environment", "CLightEnvironmentEntity"
// globals: `guard variable for'CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass, CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo, CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo
CEntityClass *__cdecl CLightEnvironmentEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass) != 0 )
  {
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_designerName.u.m_Id = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass._vptr_CEntityClass = off_3F79390;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_ComponentOffsets.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_AllHelpers.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_atomicFields,
      4);
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classInputs.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classInputs.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classOutputs.m_Size = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_requiredEHandle.m_Index = -1;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_hNetworkSerializer = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pBaseClassInfo = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pClassInfo = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_flags = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_nAllHelpersFlags = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pScriptClassDesc = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pInputs = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_nInputCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pOutputs = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_nOutputCount = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pGameClass = 0;
    CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass._vptr_CEntityClass = off_3FC0390;
    __cxa_guard_release(&`guard variable for'CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass);
    __cxa_atexit(
      CLightEnvironmentEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCLightEnvironmentEntityClass != 0 )
    return &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass;
  if ( `guard variable for'CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo) != 0 )
  {
    EntityClassInfo = CLightDirectionalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo,
      "CLightEnvironmentEntity",
      "light_environment",
      "An environment light entity",
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo);
  }
  CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pClassInfo = &CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo;
  CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pBaseClassInfo = CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCLightEnvironmentEntityClass = &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass;
  CLightEnvironmentEntity::GetEntityClassInfo(void)::g_EntityCLightEnvironmentEntityClassInfo.m_pClass = &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass;
  CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCLightEnvironmentEntityClass->m_pComponentOverrides = 0;
  return &CLightEnvironmentEntity::GetEntityClassInternal(void)::g_EntityCLightEnvironmentEntityClass;
}


// CLightEnvironmentEntity::YouForgotToImplementOrDeclareServerClass  (line 200, @0x0000000001ecc0a0, libserver.so)
int __fastcall CLightEnvironmentEntity::YouForgotToImplementOrDeclareServerClass(CLightEnvironmentEntity *const this)
{
  return 0;
}


// CLightEnvironmentEntity::GetServerClass  (line 200, @0x0000000001ed14a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CLightEnvironmentEntity::GetServerClass(CLightEnvironmentEntity *const this)
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


// CMultiLightProxy::~CMultiLightProxy  (line 204, @0x0000000001eed4e0, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CLightEntity>, int>::Purge
void __fastcall CMultiLightProxy::~CMultiLightProxy(CMultiLightProxy *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecLights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3FC0B50;
  this->m_vecLights.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecLights.m_Memory;
    CUtlMemory<CHandle<CLightEntity>,int>::Purge(&this->m_vecLights.m_Memory);
    if ( (this->m_vecLights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CLightEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CMultiLightProxy::~CMultiLightProxy  (line 204, @0x0000000001eed550, libserver.so)  // inlines: Purge, RemoveAll, ~CLogicalEntity, ~CMultiLightProxy, ~CServerOnlyEntity, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CLightEntity>, int>::Purge
void __fastcall CMultiLightProxy::~CMultiLightProxy(CMultiLightProxy *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vecLights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_3FC0B50;
  this->m_vecLights.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vecLights.m_Memory;
    CUtlMemory<CHandle<CLightEntity>,int>::Purge(&this->m_vecLights.m_Memory);
    if ( (this->m_vecLights.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CLightEntity>,int>::Purge(p_m_Memory);
  }
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CMultiLightProxy::GetEntityClass  (line 206, @0x0000000001eeaf30, libserver.so)
CEntityClass *__cdecl CMultiLightProxy::GetEntityClass()
{
  return g_pEntityCMultiLightProxyClass;
}


// CMultiLightProxy::Schema_DynamicBinding  (line 206, @0x0000000001eeaf40, libserver.so)
// globals: CMultiLightProxy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMultiLightProxy::Schema_DynamicBinding(const CMultiLightProxy *const this)
{
  return CMultiLightProxy::s_pSchemaBinding;
}


// CMultiLightProxy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 206, @0x0000000001eeaf50, libserver.so)
// globals: CMultiLightProxy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CMultiLightProxy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  return CMultiLightProxy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CMultiLightProxy::CEntityInstanceEntityClass::DestructInstance  (line 206, @0x0000000001eeaf60, libserver.so)  // inlines: Destruct<CMultiLightProxy>
void __fastcall CMultiLightProxy::CEntityInstanceEntityClass::DestructInstance(
        CMultiLightProxy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CMultiLightProxy::CEntityInstanceEntityClass::FreeInstance  (line 206, @0x0000000001eeaf80, libserver.so)
void __fastcall CMultiLightProxy::CEntityInstanceEntityClass::FreeInstance(
        CMultiLightProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CMultiLightProxy::CEntityInstanceEntityClass::CanAllocate  (line 206, @0x0000000001eeafa0, libserver.so)
bool __fastcall CMultiLightProxy::CEntityInstanceEntityClass::CanAllocate(
        const CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CMultiLightProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 206, @0x0000000001eeafb0, libserver.so)
// globals: CMultiLightProxy::s_pSchemaBinding
const ISchemaBinding *__fastcall CMultiLightProxy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  return CMultiLightProxy::s_pSchemaBinding;
}


// CMultiLightProxy::CEntityInstanceEntityClass::AllocateInstance  (line 206, @0x0000000001eec2a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CMultiLightProxy::CEntityInstanceEntityClass::AllocateInstance(
        CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 824);
  memset(v1, 0, 0x338u);
  return v1;
}


// CMultiLightProxy::CEntityInstanceEntityClass::ConstructInstance  (line 206, @0x0000000001eed320, libserver.so)  // inlines: CLogicalEntity, CMultiLightProxy, CServerOnlyEntity, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CMultiLightProxy>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CMultiLightProxy::CEntityInstanceEntityClass::ConstructInstance(
        CMultiLightProxy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_3FC0B50;
    *(p + 98) = 0;
    *(p + 200) = 0;
    *(p + 101) = 0;
    *(p + 204) = 0;
    *(p + 205) = 0;
  }
  return p;
}


// CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 206, @0x0000000001eeda40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 206, @0x0000000001eeda60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CMultiLightProxy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CMultiLightProxy::GetEntityClassInternal  (line 206, @0x0000000001ef72e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "logic_multilight_proxy", "CMultiLightProxy"
// globals: `guard variable for'CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass, CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo, CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo
CEntityClass *__cdecl CMultiLightProxy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass) != 0 )
  {
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_designerName.u.m_Id = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass._vptr_CEntityClass = off_3F79390;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_ComponentOffsets.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_AllHelpers.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classInputs.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classOutputs.m_Size = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_requiredEHandle.m_Index = -1;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_hNetworkSerializer = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pBaseClassInfo = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pClassInfo = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_flags = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_nAllHelpersFlags = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pScriptClassDesc = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pInputs = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_nInputCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pOutputs = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_nOutputCount = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pGameClass = 0;
    CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass._vptr_CEntityClass = off_3FC0AD0;
    __cxa_guard_release(&`guard variable for'CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass);
    __cxa_atexit(
      CMultiLightProxy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass,
      &_dso_handle);
  }
  if ( g_pEntityCMultiLightProxyClass != 0 )
    return &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass;
  if ( `guard variable for'CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo,
      "CMultiLightProxy",
      "logic_multilight_proxy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo);
  }
  CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pClassInfo = &CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo;
  CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pBaseClassInfo = CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo.m_pBaseClassInfo;
  g_pEntityCMultiLightProxyClass = &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass;
  CMultiLightProxy::GetEntityClassInfo(void)::g_EntityCMultiLightProxyClassInfo.m_pClass = &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass;
  CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCMultiLightProxyClass->m_pComponentOverrides = 0;
  return &CMultiLightProxy::GetEntityClassInternal(void)::g_EntityCMultiLightProxyClass;
}


// CMultiLightProxy::GetDataDescMap  (line 227, @0x0000000001ecc0b0, libserver.so)
// globals: CMultiLightProxy::m_DataMap
datamap_t *__fastcall CMultiLightProxy::GetDataDescMap(CMultiLightProxy *const this)
{
  return &CMultiLightProxy::m_DataMap;
}


// CMultiLightProxy::AddDatadescMetadataKeys  (line 227, @0x0000000001edec10, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CMultiLightProxy::GetEntityClass(void)
void __fastcall CMultiLightProxy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CMultiLightProxy::GetEntityClass);
}


// CMultiLightProxy::GetBaseMap  (line 227, @0x0000000001edec30, libserver.so)
datamap_t *__cdecl CMultiLightProxy::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CMultiLightProxy>  (line 227, @0x0000000001ee3ba0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CLightEntity> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CMultiLightProxy"
// globals: `guard variable for'DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder, `guard variable for'DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc, CMultiLightProxy::GetEntityClass(void), CMultiLightProxy::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CL, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemo, DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CMultiLightProxy>(CMultiLightProxy *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder) != 0 )
  {
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_pszBase = "CMultiLightProxy";
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder,
      &_dso_handle);
  }
  CMultiLightProxy::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>> *)::ops = off_3FC1F50;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>> *)::ops);
    }
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc[3].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>>>(CUtlVector<CHandle<CLightEntity>,CUtlMemory<CHandle<CLightEntity>,int>> *)::ops;
    v2 = operator new[](DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_nLenBase + 23);
    strcpy(
      stpcpy(v2, DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_pszBase),
      "RestoreFlashlightThink");
    m_Size = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size == DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc[7].fieldName = v2;
    v6 = operator new[](DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_nLenBase + 24);
    strcpy(
      stpcpy(v6, DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_pszBase),
      "ApproachBrightnessThink");
    v7 = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size == DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc[8].fieldName = v6;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc);
  }
  CMultiLightProxy::m_DataMap.dataNumFields = 8;
  CMultiLightProxy::m_DataMap.dataDesc = &DataMapInit<CMultiLightProxy>(CMultiLightProxy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CMultiLightProxy::m_DataMap, CMultiLightProxy::GetEntityClass);
  return &CMultiLightProxy::m_DataMap;
}


// CMultiLightProxy::Spawn  (line 243, @0x0000000001eccbd0, libserver.so)
// calls: CLogicalEntity::Spawn
void __fastcall CMultiLightProxy::Spawn(CMultiLightProxy *const this, const CEntityKeyValues *pKeyValues)
{
  CLogicalEntity::Spawn(this, pKeyValues);
  this->m_flCurrentBrightnessMultiplier = 1.0;
  this->m_flTargetBrightnessMultiplier = 1.0;
}


// CMultiLightProxy::Activate  (line 254, @0x0000000001ee7e50, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlSymbolLarge, CopyConstruct<CHandle<CLightEntity> >, Element, GetEHandle, GetEntityName, GetEntryIndex, GetSerialNumber, GrowMemory, IsValid, Purge, RemoveAll, Set, operator[]
// calls: CBaseEntity::Activate, CUtlMemory<CHandle<CLightEntity>, int>::Purge, CGameEntitySystem::FindEntityByName, __dynamic_cast, CUtlMemory<CHandle<CLightEntity>, int>::Grow, CGameEntitySystem::FindEntityByClassnameFast, Warning
// strings: "logic_multilight_proxy '%s' has no Light Name or Class specified. Either is required to s
// globals: `typeinfo for'CLightEntity
void __fastcall CMultiLightProxy::Activate(CMultiLightProxy *const this, ActivateType_t activateType)
{
  bool v4; // zf
  UtlSymLargeId_t m_Id; // rax
  CBaseEntity *v6; // r15
  CHandle<CLightEntity> *v7; // rax
  CBaseEntity *EntityByName; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int16 v11; // si
  int v12; // eax
  __int64 m_Size; // rax
  int v14; // edx
  UtlSymLargeId_t v15; // rax
  CBaseEntity *v16; // r15
  CHandle<CLightEntity> *v17; // rax
  CBaseEntity *EntityByClassnameFast; // rax
  _QWORD *v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  __int16 v22; // ax
  __int64 v23; // rax
  int v24; // edx
  const char *m_pAsString; // rsi
  int v26; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+Ch] [rbp-44h]
  string_t iszName; // [rsp+10h] [rbp-40h] BYREF

  CBaseEntity::Activate(this, activateType);
  if ( activateType == ActivateType_t::ACTIVATE_TYPE_INITIAL_CREATION )
  {
    v4 = (this->m_vecLights.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_vecLights.m_Size = 0;
    if ( v4 )
      CUtlMemory<CHandle<CLightEntity>,int>::Purge(&this->m_vecLights.m_Memory);
    m_Id = this->m_iszLightNameFilter.u.m_Id;
    if ( m_Id != 0 )
    {
      v6 = 0;
      while ( 1 )
      {
        iszName.u.m_Id = m_Id;
        EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v6, &iszName, 0, 0, 0, 0);
        v6 = EntityByName;
        if ( EntityByName == 0 )
          break;
        v9 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CLightEntity, 0);
        if ( v9 != 0 )
        {
          LODWORD(iszName.u.m_Id) = -1;
          v10 = v9[1];
          if ( v10 != 0 )
          {
            v11 = 0x7FFF;
            v12 = (*(v10 + 16) >> 15) - (*(v10 + 48) & 1);
            if ( *(v10 + 16) != -1 )
              v11 = *(v10 + 16) & 0x7FFF;
            LOWORD(iszName.u.m_Id) = v11 | iszName.u.m_Id & 0x8000;
            LODWORD(iszName.u.m_Id) = (v12 << 15) | iszName.u.m_Id & 0x7FFF;
          }
          m_Size = this->m_vecLights.m_Size;
          v14 = this->m_vecLights.m_Size;
          if ( m_Size == this->m_vecLights.m_Memory.m_nAllocationCount )
          {
            v26 = this->m_vecLights.m_Size;
            CUtlMemory<CHandle<CLightEntity>,int>::Grow(&this->m_vecLights.m_Memory, 1);
            v14 = this->m_vecLights.m_Size;
            m_Size = v26;
          }
          this->m_vecLights.m_Size = v14 + 1;
          v7 = &this->m_vecLights.m_Memory.m_pMemory[m_Size];
          if ( v7 != 0 )
            v7->m_Index = iszName.u.m_Id;
        }
        m_Id = this->m_iszLightNameFilter.u.m_Id;
      }
    }
    else
    {
      v15 = this->m_iszLightClassFilter.u.m_Id;
      if ( v15 != 0 )
      {
        v16 = 0;
        while ( 1 )
        {
          iszName.u.m_Id = v15;
          EntityByClassnameFast = CGameEntitySystem::FindEntityByClassnameFast(g_pGameEntitySystem, v16, &iszName);
          v16 = EntityByClassnameFast;
          if ( EntityByClassnameFast == 0 )
            break;
          v19 = __dynamic_cast(EntityByClassnameFast, &`typeinfo for'CBaseEntity, &`typeinfo for'CLightEntity, 0);
          if ( v19 != 0 )
          {
            LODWORD(iszName.u.m_Id) = -1;
            v20 = v19[1];
            if ( v20 != 0 )
            {
              v21 = (*(v20 + 16) >> 15) - (*(v20 + 48) & 1);
              v22 = 0x7FFF;
              if ( *(v20 + 16) != -1 )
                v22 = *(v20 + 16) & 0x7FFF;
              LOWORD(iszName.u.m_Id) = v22 | iszName.u.m_Id & 0x8000;
              LODWORD(iszName.u.m_Id) = (v21 << 15) | iszName.u.m_Id & 0x7FFF;
            }
            v23 = this->m_vecLights.m_Size;
            v24 = this->m_vecLights.m_Size;
            if ( v23 == this->m_vecLights.m_Memory.m_nAllocationCount )
            {
              v27 = this->m_vecLights.m_Size;
              CUtlMemory<CHandle<CLightEntity>,int>::Grow(&this->m_vecLights.m_Memory, 1);
              v24 = this->m_vecLights.m_Size;
              v23 = v27;
            }
            this->m_vecLights.m_Size = v24 + 1;
            v17 = &this->m_vecLights.m_Memory.m_pMemory[v23];
            if ( v17 != 0 )
              v17->m_Index = iszName.u.m_Id;
          }
          v15 = this->m_iszLightClassFilter.u.m_Id;
        }
      }
      else
      {
        m_pAsString = "";
        if ( this->m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
        Warning(
          "logic_multilight_proxy '%s' has no Light Name or Class specified. Either is required to specify which lights to affect.\n",
          m_pAsString);
      }
    }
  }
}


// CMultiLightProxy::InputFlickerLights  (line 296, @0x0000000001ee7080, libserver.so)  // inlines: Float, Get, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetFlicker, curtime, operator CEntityInstance*, operator bool, operator float, operator=<bool>, operator[]
// calls: CBaseEntity::ThinkSet
// globals: CEntityHandle::gm_pEntityList, CMultiLightProxy::RestoreFlashlightThink(void)
void __fastcall CMultiLightProxy::InputFlickerLights(CMultiLightProxy *const this, inputdata_t *const inputdata)
{
  __int64 v4; // r12
  int i; // ebx
  CHandle<CLightEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int (**vptr_IHandleEntity)(...); // r15
  int (*v12)(...); // rdi
  CGlobalVars *v13; // rbx
  float m_flCurrentTime; // xmm0_4
  float m_float64; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v4 = 0;
  for ( i = 0; this->m_vecLights.m_Size > i; ++v4 )
  {
    while ( 1 )
    {
      v6 = &this->m_vecLights.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            vptr_IHandleEntity = v10->m_pInstance[24]._vptr_IHandleEntity;
            if ( *(vptr_IHandleEntity + 225) == 0 )
              break;
          }
        }
      }
      ++i;
      ++v4;
      if ( this->m_vecLights.m_Size <= i )
        goto LABEL_13;
    }
    v12 = vptr_IHandleEntity[9];
    if ( v12 != 0 && (*(*(v12 + 1) + 49LL) & 4) == 0 )
      (*(*v12 + 176LL))(v12, 225, 0xFFFFFFFFLL, *(vptr_IHandleEntity + 40));
    *(vptr_IHandleEntity + 225) = 1;
    ++i;
  }
LABEL_13:
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v13->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  CBaseEntity::ThinkSet(this, CMultiLightProxy::RestoreFlashlightThink, m_flCurrentTime + m_float64, 861914156, 0);
}


// CMultiLightProxy::InputDisableLights  (line 312, @0x0000000001ee7200, libserver.so)  // inlines: Float, Get, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetEnabled, TurnOff, curtime, operator CEntityInstance*, operator bool, operator float, operator=<bool>, operator[]
// calls: CBaseEntity::ThinkSet
// globals: CEntityHandle::gm_pEntityList, CMultiLightProxy::RestoreFlashlightThink(void)
void __fastcall CMultiLightProxy::InputDisableLights(CMultiLightProxy *const this, inputdata_t *const inputdata)
{
  __int64 v4; // r12
  int i; // ebx
  CHandle<CLightEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // cx
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int (**vptr_IHandleEntity)(...); // r15
  int (*v12)(...); // rdi
  CGlobalVars *v13; // rbx
  float m_flCurrentTime; // xmm0_4
  float m_float64; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v4 = 0;
  for ( i = 0; this->m_vecLights.m_Size > i; ++v4 )
  {
    while ( 1 )
    {
      v6 = &this->m_vecLights.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            vptr_IHandleEntity = v10->m_pInstance[24]._vptr_IHandleEntity;
            if ( *(vptr_IHandleEntity + 224) != 0 )
              break;
          }
        }
      }
      ++i;
      ++v4;
      if ( this->m_vecLights.m_Size <= i )
        goto LABEL_13;
    }
    v12 = vptr_IHandleEntity[9];
    if ( v12 != 0 && (*(*(v12 + 1) + 49LL) & 4) == 0 )
      (*(*v12 + 176LL))(v12, 224, 0xFFFFFFFFLL, *(vptr_IHandleEntity + 40));
    *(vptr_IHandleEntity + 224) = 0;
    ++i;
  }
LABEL_13:
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v13->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  CBaseEntity::ThinkSet(this, CMultiLightProxy::RestoreFlashlightThink, m_flCurrentTime + m_float64, 861914156, 0);
}


// CMultiLightProxy::InputSetLightsBrightnessMultiplier  (line 328, @0x0000000001ee7380, libserver.so)  // inlines: Float, curtime, operator float
// calls: CBaseEntity::ThinkSet
// globals: CMultiLightProxy::ApproachBrightnessThink(void)
void __fastcall CMultiLightProxy::InputSetLightsBrightnessMultiplier(
        CMultiLightProxy *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flTargetBrightnessMultiplier = m_float64;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    v6 = v4->m_flCurrentTime + 0.1;
  }
  else
  {
    v6 = 0.1;
  }
  CBaseEntity::ThinkSet(this, CMultiLightProxy::ApproachBrightnessThink, v6, -1270649959, 0);
}


// CMultiLightProxy::RestoreFlashlightThink  (line 337, @0x0000000001ecfd90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetEnabled, SetFlicker, TurnOn, operator CEntityInstance*, operator bool, operator->, operator=<bool>, operator[]
// globals: CEntityHandle::gm_pEntityList
void __fastcall CMultiLightProxy::RestoreFlashlightThink(CMultiLightProxy *const this)
{
  int v2; // r12d
  __int64 i; // rbx
  CConcreteEntityList *v4; // rsi
  CHandle<CLightEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  int (**vptr_IHandleEntity)(...); // r14
  int (*v11)(...); // rdi
  CHandle<CLightEntity> *v12; // rdx
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rax
  int (**v16)(...); // r14
  int (*v17)(...); // rdi

  v2 = 0;
  for ( i = 0; this->m_vecLights.m_Size > v2; ++i )
  {
    v4 = CEntityHandle::gm_pEntityList;
    v5 = &this->m_vecLights.m_Memory.m_pMemory[i];
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
          vptr_IHandleEntity = v9->m_pInstance[24]._vptr_IHandleEntity;
          if ( *(vptr_IHandleEntity + 224) == 0 )
          {
            v11 = vptr_IHandleEntity[9];
            if ( v11 != 0 && (*(*(v11 + 1) + 49LL) & 4) == 0 )
            {
              (*(*v11 + 176LL))(v11, 224, 0xFFFFFFFFLL, *(vptr_IHandleEntity + 40));
              v4 = CEntityHandle::gm_pEntityList;
            }
            *(vptr_IHandleEntity + 224) = 1;
            v12 = &this->m_vecLights.m_Memory.m_pMemory[i];
            m_Index = v12->m_Index;
            if ( v12->m_Index + 2 <= 1 )
              goto LABEL_16;
            v13 = v12->m_Index;
            v14 = v4->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
            if ( v14 == 0 )
              goto LABEL_16;
            v9 = &v14[v13 & 0x1FF];
            if ( v9 == 0 )
              goto LABEL_16;
          }
          if ( m_Index == v9->m_EHandle.m_Index )
            m_pInstance = v9->m_pInstance;
          else
LABEL_16:
            m_pInstance = 0;
          v16 = m_pInstance[24]._vptr_IHandleEntity;
          if ( *(v16 + 225) != 0 )
          {
            v17 = v16[9];
            if ( v17 != 0 && (*(*(v17 + 1) + 49LL) & 4) == 0 )
              (*(*v17 + 176LL))(v17, 225, 0xFFFFFFFFLL, *(v16 + 40));
            *(v16 + 225) = 0;
          }
        }
      }
    }
    ++v2;
  }
}


// CMultiLightProxy::ApproachBrightnessThink  (line 352, @0x0000000001ee7430, libserver.so)  // inlines: Approach, Get, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetBrightnessMultiplier, curtime, operator CEntityInstance*, operator bool, operator=<float>, operator[]
// calls: RandomFloat, CBaseEntity::ThinkSet
// globals: CEntityHandle::gm_pEntityList, CMultiLightProxy::ApproachBrightnessThink(void)
void __fastcall CMultiLightProxy::ApproachBrightnessThink(CMultiLightProxy *const this)
{
  float v2; // xmm0_4
  float m_flTargetBrightnessMultiplier; // xmm3_4
  float m_flCurrentBrightnessMultiplier; // xmm1_4
  float v5; // xmm0_4
  int m_Size; // r8d
  __int64 v7; // rbx
  CHandle<CLightEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  int (**vptr_IHandleEntity)(...); // r13
  int (*v14)(...); // rdi
  CGlobalVars *v15; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v17; // xmm0_4
  float v18; // [rsp+Ch] [rbp-24h]

  v2 = RandomFloat(0.0099999998, 0.1);
  m_flTargetBrightnessMultiplier = this->m_flTargetBrightnessMultiplier;
  m_flCurrentBrightnessMultiplier = this->m_flCurrentBrightnessMultiplier;
  if ( (m_flTargetBrightnessMultiplier - m_flCurrentBrightnessMultiplier) <= v2 )
  {
    if ( -v2 <= (m_flTargetBrightnessMultiplier - m_flCurrentBrightnessMultiplier) )
      v5 = this->m_flTargetBrightnessMultiplier;
    else
      v5 = m_flCurrentBrightnessMultiplier - v2;
  }
  else
  {
    v5 = v2 + m_flCurrentBrightnessMultiplier;
  }
  m_Size = this->m_vecLights.m_Size;
  this->m_flCurrentBrightnessMultiplier = v5;
  if ( m_Size > 0 )
  {
    v7 = 0;
    do
    {
      v8 = &this->m_vecLights.m_Memory.m_pMemory[v7];
      m_Index = v8->m_Index;
      if ( v8->m_Index + 2 > 1 )
      {
        v10 = v8->m_Index;
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10 & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
          {
            vptr_IHandleEntity = v12->m_pInstance[24]._vptr_IHandleEntity;
            if ( v5 != *(vptr_IHandleEntity + 35) )
            {
              v14 = vptr_IHandleEntity[9];
              if ( v14 != 0 && (*(*(v14 + 1) + 49LL) & 4) == 0 )
              {
                v18 = v5;
                (*(*v14 + 176LL))(v14, 140, 0xFFFFFFFFLL, *(vptr_IHandleEntity + 40));
                v5 = v18;
              }
              *(vptr_IHandleEntity + 35) = v5;
              v5 = this->m_flCurrentBrightnessMultiplier;
            }
          }
        }
      }
      ++v7;
    }
    while ( this->m_vecLights.m_Size > v7 );
    m_flTargetBrightnessMultiplier = this->m_flTargetBrightnessMultiplier;
  }
  if ( m_flTargetBrightnessMultiplier != v5 )
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
      v17 = v15->m_flCurrentTime + 0.05;
    }
    else
    {
      v17 = 0.050000001;
    }
    CBaseEntity::ThinkSet(this, CMultiLightProxy::ApproachBrightnessThink, v17, -1270649959, 0);
  }
}


