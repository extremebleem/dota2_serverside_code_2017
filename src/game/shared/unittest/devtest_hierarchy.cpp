// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/unittest/devtest_hierarchy.cpp:30
class CDevtestHierarchy : public CDynamicProp {
	enum TestMode_t {
		NONE = 0,
		ATTACH_AND_DETACH_FROM_PARENT = 0x1,
		CYCLE_ATTACHMENT_TYPE = 0x2,
		SWITCH_PARENT = 0x3,
		CHILD_DORMANCY = 0x4,
		SWITCH_MODEL = 0x5,
		SWITCH_CHILD_MODEL = 0x6,
	};

	class NetworkVar_m_nTestMode {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_attachName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vDynamicAttachOffset {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nDynamicResetCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bChildIsDynamic {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bCreateChildSideChild {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_alternateAttachName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hClientSideChildModel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flEntityStartTime {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	float m_flRotationSpeed;  // +0x6e0
	EHANDLE m_hChild;  // +0x6e8
	int m_nDynamicDetachCount;  // +0x700

	EHANDLE m_hAlternateParent;  // +0x70c
	HModelStrong m_hAlternateModel;  // +0x710
	HModelStrong m_hOriginalModel;  // +0x718
	int m_nTestIndex;  // +0x72c
	int m_nCurrentModel;  // +0x734

	static datamap_t m_DataMap;
	typedef CDynamicProp BaseClass;
	typedef CDevtestHierarchy ThisClass;

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
	CDevtestHierarchy(CDevtestHierarchy &);
	CDevtestHierarchy(CDevtestHierarchy &);
	CDevtestHierarchy();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void HandleAnimEvent(animevent_t *);
	void AnimationThink();
	void SpinThink();
	void AttachAndDetachThink();
	void CycleAttachmentTypeThink();
	void SwitchParentThink();
	void ChildDormancyThink();
	void SwitchModelThink();
	void SwitchChildModelThink();
	void StartupClientThinks();
	void ResetDynamicChildPosition(CUtlStringToken);
	CUtlStringToken GetAttachNameForType(HierarchyType_t);
	void StartupTestModeThinkFunction();
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
	virtual ~CDevtestHierarchy();
	/* tag__fprintf: const_type tag not supported! */;
	/* tag__fprintf: const_type tag not supported! */;
	CBodyComponent * GetComponent<CBodyComponent>(CBodyComponent *);
	CBodyComponent * GetComponent<CBodyComponent>();

	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[229] HandleAnimEvent
	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1848
};

// src/game/shared/unittest/devtest_hierarchy.cpp:94
class C_CDevtestHierarchy_MapInstall {
	C_CDevtestHierarchy_MapInstall();

	// sizeof = 1
};

// src/game/shared/unittest/devtest_hierarchy.cpp:120
class CDevtestHierarchyChild : public CDynamicProp {
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
	CDevtestHierarchyChild(CDevtestHierarchyChild &);
	CDevtestHierarchyChild(CDevtestHierarchyChild &);
	CDevtestHierarchyChild();
	virtual bool OverridePropdata();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDevtestHierarchyChild();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[252] OverridePropdata
	// vtable[0] Schema_DynamicBinding
	// sizeof = 1752
};

// src/game/shared/unittest/devtest_hierarchy.cpp:590
class CDevtestHierarchy2 : public CBaseAnimating {
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
	CDevtestHierarchy2(CDevtestHierarchy2 &);
	CDevtestHierarchy2(CDevtestHierarchy2 &);
	CDevtestHierarchy2();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDevtestHierarchy2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[0] Schema_DynamicBinding
	// sizeof = 1216
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDevtestHierarchy::~CDevtestHierarchy  (line 30, @0x0000000001ea4390, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDevtestHierarchy::~CDevtestHierarchy(CDevtestHierarchy *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CDevtestHierarchy::NetworkVar_m_hClientSideChildModel> *p_m_hClientSideChildModel; // rdi

  p_m_hClientSideChildModel = &this->m_hClientSideChildModel;
  p_m_hClientSideChildModel[-228].m_Value.m_pBinding = &off_3FB0310;
  p_m_hClientSideChildModel[-76].m_Value.m_pBinding = off_3FB0C60;
  p_m_hClientSideChildModel[-75].m_Value.m_pBinding = &off_3FB0D78;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_hClientSideChildModel->m_Value);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hOriginalModel);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hAlternateModel);
  this->_vptr_IPlayerPickupVPhysics = &off_3FF0E98;
  this->_vptr_IBreakableWithPropData = off_3FF0D80;
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDevtestHierarchy::~CDevtestHierarchy  (line 30, @0x0000000001ea44b0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDevtestHierarchy, ~CDynamicProp, ~CNetworkVarBase, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDevtestHierarchy::~CDevtestHierarchy(CDevtestHierarchy *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCModel>,CDevtestHierarchy::NetworkVar_m_hClientSideChildModel> *p_m_hClientSideChildModel; // rdi

  p_m_hClientSideChildModel = &this->m_hClientSideChildModel;
  p_m_hClientSideChildModel[-228].m_Value.m_pBinding = &off_3FB0310;
  p_m_hClientSideChildModel[-76].m_Value.m_pBinding = off_3FB0C60;
  p_m_hClientSideChildModel[-75].m_Value.m_pBinding = &off_3FB0D78;
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&p_m_hClientSideChildModel->m_Value);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hOriginalModel);
  CStrongHandle<InfoForResourceTypeCModel>::Shutdown(&this->m_hAlternateModel);
  this->_vptr_IPlayerPickupVPhysics = &off_3FF0E98;
  this->_vptr_IBreakableWithPropData = off_3FF0D80;
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDevtestHierarchy::GetEntityClass  (line 89, @0x0000000001ea1550, libserver.so)
CEntityClass *__cdecl CDevtestHierarchy::GetEntityClass()
{
  return g_pEntityCDevtestHierarchyClass;
}


// CDevtestHierarchy::Schema_DynamicBinding  (line 89, @0x0000000001ea1560, libserver.so)
// globals: CDevtestHierarchy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchy::Schema_DynamicBinding(const CDevtestHierarchy *const this)
{
  return CDevtestHierarchy::s_pSchemaBinding;
}


// CDevtestHierarchy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 89, @0x0000000001ea1570, libserver.so)
// globals: CDevtestHierarchy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDevtestHierarchy::CEntityInstanceEntityClass::DestructInstance  (line 89, @0x0000000001ea1580, libserver.so)  // inlines: Destruct<CDevtestHierarchy>
void __fastcall CDevtestHierarchy::CEntityInstanceEntityClass::DestructInstance(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDevtestHierarchy::CEntityInstanceEntityClass::FreeInstance  (line 89, @0x0000000001ea15a0, libserver.so)
void __fastcall CDevtestHierarchy::CEntityInstanceEntityClass::FreeInstance(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDevtestHierarchy::CEntityInstanceEntityClass::CanAllocate  (line 89, @0x0000000001ea15c0, libserver.so)
bool __fastcall CDevtestHierarchy::CEntityInstanceEntityClass::CanAllocate(
        const CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDevtestHierarchy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 89, @0x0000000001ea15d0, libserver.so)
// globals: CDevtestHierarchy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDevtestHierarchy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchy::s_pSchemaBinding;
}


// CDevtestHierarchy::CEntityInstanceEntityClass::AllocateInstance  (line 89, @0x0000000001ea1c10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDevtestHierarchy::CEntityInstanceEntityClass::AllocateInstance(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1848);
  memset(v1, 0, 0x738u);
  return v1;
}


// CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x0000000001ea28c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 89, @0x0000000001ea28e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDevtestHierarchy::CEntityInstanceEntityClass::ConstructInstance  (line 89, @0x0000000001ea4480, libserver.so)  // inlines: Construct<CDevtestHierarchy>
// calls: CDevtestHierarchy::CDevtestHierarchy
CEntityInstance *__fastcall CDevtestHierarchy::CEntityInstanceEntityClass::ConstructInstance(
        CDevtestHierarchy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDevtestHierarchy::CDevtestHierarchy(p);
  return p;
}


// CDevtestHierarchy::GetEntityClassInternal  (line 89, @0x0000000001ea5500, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume, CBaseEntity::GetEntityClassInfo
// callers: _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp
// strings: "devtest_hierarchy", "CDevtestHierarchy", "prop_dynamic", "CDynamicProp", "CBreakableProp", "CBaseProp" (10 total)
// globals: `guard variable for'CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass, CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo, CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo, `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo (17 total)
CEntityClass *__cdecl CDevtestHierarchy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass) != 0 )
  {
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_designerName.u.m_Id = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass._vptr_CEntityClass = off_3F79390;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_ComponentOffsets.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_AllHelpers.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classInputs.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classOutputs.m_Size = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_requiredEHandle.m_Index = -1;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_hNetworkSerializer = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pBaseClassInfo = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pClassInfo = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_flags = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_nAllHelpersFlags = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pScriptClassDesc = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pInputs = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_nInputCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pOutputs = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_nOutputCount = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pGameClass = 0;
    CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass._vptr_CEntityClass = off_3FAF730;
    __cxa_guard_release(&`guard variable for'CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass);
    __cxa_atexit(
      CDevtestHierarchy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDevtestHierarchyClass != 0 )
    return &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass;
  if ( `guard variable for'CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo) != 0 )
  {
    if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
    {
      if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
      {
        if ( `guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo == 0
          && __cxa_guard_acquire(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo) != 0 )
        {
          if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
            && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
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
              &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
              "CBaseAnimating",
              "baseanimating",
              0,
              &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
            __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
          }
          CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
            &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo,
            "CBaseProp",
            0,
            0,
            &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
          __cxa_guard_release(&`guard variable for'CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
        }
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
          "CBreakableProp",
          0,
          0,
          &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
        __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
        "CDynamicProp",
        "prop_dynamic",
        0,
        &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
      __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo,
      "CDevtestHierarchy",
      "devtest_hierarchy",
      0,
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    __cxa_guard_release(&`guard variable for'CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo);
  }
  CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pClassInfo = &CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo;
  CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pBaseClassInfo = CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo.m_pBaseClassInfo;
  g_pEntityCDevtestHierarchyClass = &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass;
  CDevtestHierarchy::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyClassInfo.m_pClass = &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass;
  CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDevtestHierarchyClass->m_pComponentOverrides = 0;
  return &CDevtestHierarchy::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyClass;
}


// CDevtestHierarchy::YouForgotToImplementOrDeclareServerClass  (line 94, @0x0000000001e9cc20, libserver.so)
int __fastcall CDevtestHierarchy::YouForgotToImplementOrDeclareServerClass(CDevtestHierarchy *const this)
{
  return 0;
}


// CDevtestHierarchy::GetServerClass  (line 94, @0x0000000001e9d3a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDevtestHierarchy::GetServerClass(CDevtestHierarchy *const this)
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


// CDevtestHierarchy::GetDataDescMap  (line 96, @0x0000000001e9cc30, libserver.so)
// globals: CDevtestHierarchy::m_DataMap
datamap_t *__fastcall CDevtestHierarchy::GetDataDescMap(CDevtestHierarchy *const this)
{
  return &CDevtestHierarchy::m_DataMap;
}


// CDevtestHierarchy::AddDatadescMetadataKeys  (line 96, @0x0000000001e9d3f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDevtestHierarchy::GetEntityClass(void)
void __fastcall CDevtestHierarchy::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDevtestHierarchy::GetEntityClass);
}


// CDevtestHierarchy::GetBaseMap  (line 96, @0x0000000001e9d410, libserver.so)
datamap_t *__cdecl CDevtestHierarchy::GetBaseMap()
{
  return &CDynamicProp::m_DataMap;
}


// DataMapInit<CDevtestHierarchy>  (line 96, @0x0000000001e9d420, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp
// strings: "CDevtestHierarchy"
// globals: `guard variable for'DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder, CDevtestHierarchy::GetEntityClass(void), CDevtestHierarchy::m_DataMap, DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder) != 0 )
  {
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_pszBase = "CDevtestHierarchy";
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::nameHolder,
      &_dso_handle);
  }
  CDevtestHierarchy::m_DataMap.dataNumFields = 19;
  CDevtestHierarchy::m_DataMap.baseMap = &CDynamicProp::m_DataMap;
  CDevtestHierarchy::m_DataMap.dataDesc = &DataMapInit<CDevtestHierarchy>(CDevtestHierarchy *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDevtestHierarchy::m_DataMap, CDevtestHierarchy::GetEntityClass);
  return &CDevtestHierarchy::m_DataMap;
}


// CDevtestHierarchyChild::~CDevtestHierarchyChild  (line 120, @0x0000000001ea24a0, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDevtestHierarchyChild::~CDevtestHierarchyChild(CDevtestHierarchyChild *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDevtestHierarchyChild::~CDevtestHierarchyChild  (line 120, @0x0000000001ea2560, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDevtestHierarchyChild, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDevtestHierarchyChild::~CDevtestHierarchyChild(CDevtestHierarchyChild *const this)
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


// CDevtestHierarchyChild::OverridePropdata  (line 123, @0x0000000001ea15e0, libserver.so)
bool __fastcall CDevtestHierarchyChild::OverridePropdata(CDevtestHierarchyChild *const this)
{
  return 1;
}


// CDevtestHierarchyChild::Schema_DynamicBinding  (line 126, @0x0000000001ea15f0, libserver.so)
// globals: CDevtestHierarchyChild::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchyChild::Schema_DynamicBinding(
        const CDevtestHierarchyChild *const this)
{
  return CDevtestHierarchyChild::s_pSchemaBinding;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 126, @0x0000000001ea1600, libserver.so)
// globals: CDevtestHierarchyChild::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchyChild::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::DestructInstance  (line 126, @0x0000000001ea1610, libserver.so)  // inlines: Destruct<CDevtestHierarchyChild>
void __fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::DestructInstance(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::FreeInstance  (line 126, @0x0000000001ea1630, libserver.so)
void __fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::FreeInstance(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::CanAllocate  (line 126, @0x0000000001ea1650, libserver.so)
bool __fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::CanAllocate(
        const CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 126, @0x0000000001ea1660, libserver.so)
// globals: CDevtestHierarchyChild::s_pSchemaBinding
const ISchemaBinding *__fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchyChild::s_pSchemaBinding;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::AllocateInstance  (line 126, @0x0000000001ea1c50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::AllocateInstance(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::ConstructInstance  (line 126, @0x0000000001ea21c0, libserver.so)  // inlines: CDevtestHierarchyChild, Construct<CDevtestHierarchyChild>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::ConstructInstance(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *p = &off_3FAF830;
    *(p + 152) = off_3FB0180;
    *(p + 153) = &off_3FB0298;
  }
  return p;
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 126, @0x0000000001ea2910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 126, @0x0000000001ea2930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchyChild::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDevtestHierarchyChild::GetEntityClassInternal  (line 126, @0x0000000001ea59b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp
// strings: "devtest_hierarchy_child", "CDevtestHierarchyChild", "prop_dynamic", "CDynamicProp", "CBreakableProp", "CBaseProp"
// globals: `guard variable for'CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass, CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo, CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo, `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo (13 total)
CEntityClass *__cdecl CDevtestHierarchyChild::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass) != 0 )
  {
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_designerName.u.m_Id = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass._vptr_CEntityClass = off_3F79390;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_ComponentOffsets.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_AllHelpers.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classInputs.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classOutputs.m_Size = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_requiredEHandle.m_Index = -1;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_hNetworkSerializer = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pBaseClassInfo = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pClassInfo = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_flags = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_nAllHelpersFlags = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pScriptClassDesc = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pInputs = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_nInputCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pOutputs = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_nOutputCount = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pGameClass = 0;
    CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass._vptr_CEntityClass = off_3FAF7B0;
    __cxa_guard_release(&`guard variable for'CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass);
    __cxa_atexit(
      CDevtestHierarchyChild::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass,
      &_dso_handle);
  }
  if ( g_pEntityCDevtestHierarchyChildClass != 0 )
    return &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass;
  if ( `guard variable for'CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo) != 0 )
  {
    if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
    {
      if ( `guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo) != 0 )
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
          &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo,
          "CBreakableProp",
          0,
          0,
          &CBaseProp::GetEntityClassInfo(void)::g_EntityCBasePropClassInfo);
        __cxa_guard_release(&`guard variable for'CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
        "CDynamicProp",
        "prop_dynamic",
        0,
        &CBreakableProp::GetEntityClassInfo(void)::g_EntityCBreakablePropClassInfo);
      __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo,
      "CDevtestHierarchyChild",
      "devtest_hierarchy_child",
      0,
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    __cxa_guard_release(&`guard variable for'CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo);
  }
  CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pClassInfo = &CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo;
  CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pBaseClassInfo = CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo.m_pBaseClassInfo;
  g_pEntityCDevtestHierarchyChildClass = &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass;
  CDevtestHierarchyChild::GetEntityClassInfo(void)::g_EntityCDevtestHierarchyChildClassInfo.m_pClass = &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass;
  CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDevtestHierarchyChildClass->m_pComponentOverrides = 0;
  return &CDevtestHierarchyChild::GetEntityClassInternal(void)::g_EntityCDevtestHierarchyChildClass;
}


// CDevtestHierarchy::CDevtestHierarchy  (line 129, @0x0000000001e9ee50, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CNetworkVectorBase, CStrongHandle, CUtlStringToken, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, NetworkStateChanged, Set, Zero, operator=<CDevtestHierarchy::TestMode_t>, operator=<bool>, ~CDynamicProp, ~CNetworkVarBase, ~CStrongHandle
// calls: CDynamicProp::CDynamicProp, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeCModel>::Shutdown, CBreakableProp::~CBreakableProp, _Unwind_Resume
// callers: CDevtestHierarchy::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDevtestHierarchy::CDevtestHierarchy(CDevtestHierarchy *const this)
{
  bool v2; // zf

  CDynamicProp::CDynamicProp(this);
  this->_vptr_IHandleEntity = &off_3FB0310;
  this->_vptr_IBreakableWithPropData = off_3FB0C60;
  this->m_nTestMode.m_Value = 0;
  this->_vptr_IPlayerPickupVPhysics = &off_3FB0D78;
  this->m_hChild.m_Index = -1;
  this->m_attachName.m_Value.m_nHashCode = 0;
  this->m_vDynamicAttachOffset.m_Value.z = 0.0;
  this->m_vDynamicAttachOffset.m_Value.y = 0.0;
  this->m_vDynamicAttachOffset.m_Value.x = 0.0;
  this->m_nDynamicResetCount.m_Value = 1;
  CBaseEntity::NetworkStateChanged(this, 0x6FCu, -1, -1);
  v2 = this->m_nTestMode.m_Value == 1;
  this->m_bChildIsDynamic.m_Value = 0;
  this->m_bCreateChildSideChild.m_Value = 0;
  this->m_alternateAttachName.m_Value.m_nHashCode = 0;
  this->m_hAlternateParent.m_Index = -1;
  this->m_hAlternateModel.m_pBinding = 0;
  this->m_hOriginalModel.m_pBinding = 0;
  this->m_hClientSideChildModel.m_Value.m_pBinding = 0;
  this->m_flEntityStartTime.m_Value = 0.0;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1764, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v2 = !this->m_bChildIsDynamic.m_Value;
    this->m_nTestMode.m_Value = 1;
    if ( !v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1796, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bChildIsDynamic.m_Value = 0;
    }
  }
  this->m_nTestIndex = 0;
  this->m_nCurrentModel = 0;
  this->m_nCurrType = HierarchyType_t::HIERARCHY_NONE;
}


// CDevtestHierarchy::StartupTestModeThinkFunction  (line 138, @0x0000000001e9f020, libserver.so)  // inlines: curtime, operator=
// calls: CBaseEntity::GetModel, CStrongHandle<InfoForResourceTypeCModel>::Init, CBaseEntity::ThinkSet
// callers: CDevtestHierarchy::StartupClientThinks, CDevtestHierarchy::Spawn
// globals: jpt_1E9F04F, CDevtestHierarchy::SwitchModelThink(void), CDevtestHierarchy::SwitchChildModelThink(void), CDevtestHierarchy::AttachAndDetachThink(void), CDevtestHierarchy::CycleAttachmentTypeThink(void), CDevtestHierarchy::ChildDormancyThink(void), CDevtestHierarchy::SwitchParentThink(void)
void __fastcall CDevtestHierarchy::StartupTestModeThinkFunction(CDevtestHierarchy *const this)
{
  CGlobalVars *v2; // r12
  FnGlobalVarsWarningFunc v3; // rax
  float v4; // xmm0_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc v6; // rax
  float v7; // xmm0_4
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v10; // xmm0_4
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc v12; // rax
  float v13; // xmm0_4
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc v15; // rax
  float v16; // xmm0_4
  CGlobalVars *v17; // r12
  FnGlobalVarsWarningFunc v18; // rax
  float v19; // xmm0_4
  const ResourceBinding_t<InfoForResourceTypeCModel> *hResource; // [rsp+0h] [rbp-20h]

  switch ( this->m_nTestMode.m_Value )
  {
    case 1:
      v8 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v10 = v8->m_flCurrentTime + 0.5;
      }
      else
      {
        v10 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::AttachAndDetachThink, v10, 900148579, 0);
      break;
    case 2:
      v11 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v12 = gpGlobals->m_pfnWarningFunc;
          if ( v12 != 0 )
            v12(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v13 = v11->m_flCurrentTime + 0.5;
      }
      else
      {
        v13 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::CycleAttachmentTypeThink, v13, 900148579, 0);
      break;
    case 3:
      v17 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v18 = gpGlobals->m_pfnWarningFunc;
          if ( v18 != 0 )
            v18(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v19 = v17->m_flCurrentTime + 0.5;
      }
      else
      {
        v19 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::SwitchParentThink, v19, 900148579, 0);
      break;
    case 4:
      v14 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v15 = gpGlobals->m_pfnWarningFunc;
          if ( v15 != 0 )
            v15(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v16 = v14->m_flCurrentTime + 0.5;
      }
      else
      {
        v16 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::ChildDormancyThink, v16, 900148579, 0);
      break;
    case 5:
      CBaseEntity::GetModel(this);
      CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hOriginalModel, hResource);
      v2 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v3 = gpGlobals->m_pfnWarningFunc;
          if ( v3 != 0 )
            v3(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v4 = v2->m_flCurrentTime + 0.5;
      }
      else
      {
        v4 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::SwitchModelThink, v4, 900148579, 0);
      break;
    case 6:
      v5 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          v6 = gpGlobals->m_pfnWarningFunc;
          if ( v6 != 0 )
            v6(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        v7 = v5->m_flCurrentTime + 0.5;
      }
      else
      {
        v7 = 0.5;
      }
      CBaseEntity::ThinkSet(this, CDevtestHierarchy::SwitchChildModelThink, v7, 900148579, 0);
      break;
    default:
      return;
  }
}


// CDevtestHierarchy::Spawn  (line 172, @0x0000000001e9f6b0, libserver.so)  // inlines: AssignTo<CBaseEntity>, Base, CEntityHandle, CHandle, Element, EmptyValue<CHandle<CBaseEntity> >, FindKeyHash, FromIndex, Get<CHandle<CBaseEntity> >, GetValue, GetValue<CHandle<CBaseEntity> >, NetworkStateChanged, Set, VariantFieldTypeName, curtime, operator!=, operator=, operator=<float>, operator[]
// calls: CBaseModelEntity::SetModelFromKeyValues, CDynamicProp::Spawn, CBaseEntity::ThinkSet, CDevtestHierarchy::StartupTestModeThinkFunction, CEntitySystem::FindFirstEntityHandleByName, Warning
// strings: "No free conversion of %s variant to CHandle<T> right now\n", "hscript_lightbinding", "js_value", "js_object", "js_array", "js_raw_args" (20 total)
// globals: CDevtestHierarchy::AnimationThink(void), CEntityKeyValues::sm_EmptyVariant, jpt_1E9F8F5, jpt_1E9F945, CDevtestHierarchy::SpinThink(void)
void __fastcall CDevtestHierarchy::Spawn(CDevtestHierarchy *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  uint32 m_int; // edx
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  CEntityVariant *v17; // rdx
  int16 v18; // ax
  uint32 v19; // edx
  CGlobalVars *v20; // rbx
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v22; // rbx
  CGlobalVars *v23; // rax
  void (__fastcall *v24)(__int64); // rax
  float v25; // xmm0_4
  CGlobalVars *v26; // rbx
  CGlobalVars *v27; // rax
  FnGlobalVarsWarningFunc v28; // rax
  float v29; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v31; // rsi
  const char *v32; // rsi
  float v33; // [rsp+Ch] [rbp-34h]
  uint32 v34; // [rsp+10h] [rbp-30h]

  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CDynamicProp::Spawn(this, pKeyValues);
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_40:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 13 )
      goto LABEL_12;
    goto LABEL_41;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 1536077671 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_40;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 1536077671 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 13 )
  {
LABEL_12:
    m_int = p_m_value->m_int;
    goto LABEL_13;
  }
LABEL_41:
  if ( m_type == 30 )
  {
    CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, p_m_value->m_pszString);
    m_int = v34;
  }
  else
  {
    m_int = -1;
    if ( m_type != 0 )
    {
      switch ( m_type )
      {
        case 1:
          v32 = "float";
          break;
        case 3:
          v32 = "vector";
          break;
        case 4:
          v32 = "quaternion";
          break;
        case 5:
          v32 = "integer";
          break;
        case 6:
          v32 = "boolean";
          break;
        case 8:
          v32 = "character";
          break;
        case 9:
          v32 = "color";
          break;
        case 25:
          v32 = "vector2d";
          break;
        case 26:
          v32 = "int64";
          break;
        case 27:
          v32 = "vector4d";
          break;
        case 28:
          v32 = "resourcehandle";
          break;
        case 31:
          v32 = "hscript";
          break;
        case 32:
          v32 = "variant";
          break;
        case 33:
          v32 = "uint64";
          break;
        case 34:
          v32 = "float64";
          break;
        case 37:
          v32 = "unsigned";
          break;
        case 38:
          v32 = "utlstringtoken";
          break;
        case 39:
          v32 = "qangle";
          break;
        case 48:
          v32 = "hscript_lightbinding";
          break;
        case 49:
          v32 = "js_value";
          break;
        case 50:
          v32 = "js_object";
          break;
        case 51:
          v32 = "js_array";
          break;
        case 52:
          v32 = "js_raw_args";
          break;
        default:
          v32 = "unknown_variant_type";
          break;
      }
      Warning("No free conversion of %s variant to CHandle<T> right now\n", v32);
      m_int = -1;
    }
  }
LABEL_13:
  this->m_hChild.m_Index = m_int;
  v12 = pKeyValues->m_keyHashes.m_nCount;
  if ( v12 <= 0 )
  {
LABEL_44:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    v18 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v18 == 13 )
      goto LABEL_24;
    goto LABEL_45;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( 2 )
  {
    if ( v13 == 0 )
    {
      if ( *(4 * v14) == -440431765 )
        break;
      goto LABEL_18;
    }
    v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v13 > 9 )
      v15 = pKeyValues->m_keyHashes.m_pElements;
    if ( v15[v14] != -440431765 )
    {
LABEL_18:
      if ( v12 <= ++v14 )
        goto LABEL_44;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14].m_value;
  v18 = v17->m_type;
  if ( v18 == 13 )
  {
LABEL_24:
    v19 = v17->m_int;
    goto LABEL_25;
  }
LABEL_45:
  if ( v18 == 30 )
  {
    CEntitySystem::FindFirstEntityHandleByName(g_pEntitySystem, v17->m_pszString);
    v19 = v34;
  }
  else
  {
    v19 = -1;
    if ( v18 != 0 )
    {
      switch ( v18 )
      {
        case 1:
          v31 = "float";
          break;
        case 3:
          v31 = "vector";
          break;
        case 4:
          v31 = "quaternion";
          break;
        case 5:
          v31 = "integer";
          break;
        case 6:
          v31 = "boolean";
          break;
        case 8:
          v31 = "character";
          break;
        case 9:
          v31 = "color";
          break;
        case 25:
          v31 = "vector2d";
          break;
        case 26:
          v31 = "int64";
          break;
        case 27:
          v31 = "vector4d";
          break;
        case 28:
          v31 = "resourcehandle";
          break;
        case 31:
          v31 = "hscript";
          break;
        case 32:
          v31 = "variant";
          break;
        case 33:
          v31 = "uint64";
          break;
        case 34:
          v31 = "float64";
          break;
        case 37:
          v31 = "unsigned";
          break;
        case 38:
          v31 = "utlstringtoken";
          break;
        case 39:
          v31 = "qangle";
          break;
        case 48:
          v31 = "hscript_lightbinding";
          break;
        case 49:
          v31 = "js_value";
          break;
        case 50:
          v31 = "js_object";
          break;
        case 51:
          v31 = "js_array";
          break;
        case 52:
          v31 = "js_raw_args";
          break;
        default:
          v31 = "unknown_variant_type";
          break;
      }
      Warning("No free conversion of %s variant to CHandle<T> right now\n", v31);
      v19 = -1;
    }
  }
LABEL_25:
  this->m_hAlternateParent.m_Index = v19;
  v20 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v20->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  if ( m_flCurrentTime != this->m_flEntityStartTime.m_Value )
  {
    v33 = m_flCurrentTime;
    (*(this->_vptr_IHandleEntity + 22))(this, 1832, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flEntityStartTime.m_Value = v33;
  }
  if ( this->m_bCreateChildSideChild.m_Value )
    this->m_hChild.m_Index = -1;
  if ( this->m_flRotationSpeed == 0.0
    || vec3_origin.x == this->m_vRotationAxis.x
    && vec3_origin.y == this->m_vRotationAxis.y
    && vec3_origin.z == this->m_vRotationAxis.z )
  {
    v22 = gpGlobals;
    if ( gpGlobals == 0 )
      goto LABEL_57;
  }
  else
  {
    v26 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v27 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v28 = gpGlobals->m_pfnWarningFunc;
        if ( v28 != 0 )
          v28(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v27 = gpGlobals;
      }
      v29 = v26->m_flCurrentTime;
    }
    else
    {
      v27 = 0;
      v29 = 0.0;
    }
    CBaseEntity::ThinkSet(this, CDevtestHierarchy::SpinThink, v29 + v27->interval_per_tick, -1880992764, 0);
    v22 = gpGlobals;
    if ( gpGlobals == 0 )
    {
LABEL_57:
      v23 = 0;
      v25 = 0.0;
      goto LABEL_39;
    }
  }
  v23 = v22;
  if ( !v22->m_bEnableAssertions && !v22->m_bInSimulation )
  {
    v24 = v22->m_pfnWarningFunc;
    if ( v24 != 0 )
    {
      v24(1);
      v23 = gpGlobals;
    }
    else
    {
      v23 = v22;
    }
  }
  v25 = v22->m_flCurrentTime;
LABEL_39:
  CBaseEntity::ThinkSet(this, CDevtestHierarchy::AnimationThink, v25 + v23->interval_per_tick, -1878396845, 0);
  CDevtestHierarchy::StartupTestModeThinkFunction(this);
}


// CDevtestHierarchy::HandleAnimEvent  (line 198, @0x0000000001e9cc40, libserver.so)
void __fastcall CDevtestHierarchy::HandleAnimEvent(CDevtestHierarchy *const this, animevent_t *pEvent)
{
  ;
}


// CDevtestHierarchy::StartupClientThinks  (line 202, @0x0000000001e9f380, libserver.so)
// calls: CDevtestHierarchy::StartupTestModeThinkFunction
void __fastcall CDevtestHierarchy::StartupClientThinks(CDevtestHierarchy *const this)
{
  CDevtestHierarchy::StartupTestModeThinkFunction(this);
}


// CDevtestHierarchy::Activate  (line 207, @0x0000000001e9d230, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseProp::Activate, CBaseEntity::SetMoveType
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDevtestHierarchy::Activate(CDevtestHierarchy *const this, ActivateType_t activateType)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *m_pInstance; // rdi

  CBaseProp::Activate(this, activateType);
  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hChild.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 )
        {
          if ( this->m_bChildIsDynamic.m_Value )
            CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
          else
            CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
        }
      }
    }
  }
}


// CDevtestHierarchy::SpinThink  (line 248, @0x0000000001e9d2d0, libserver.so)  // inlines: curtime
// calls: MatrixBuildRotationAboutAxis, CBaseEntity::EntityToWorldTransform, ConcatTransforms, CBaseEntity::SetEntityToWorldTransform, CBaseEntity::SetNextThink
void __fastcall CDevtestHierarchy::SpinThink(CDevtestHierarchy *const this)
{
  float v1; // xmm1_4
  matrix3x4_t *v3; // rax
  float v4; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  matrix3x4a_t rot; // [rsp+0h] [rbp-80h] BYREF
  matrix3x4a_t newPos; // [rsp+30h] [rbp-50h] BYREF

  MatrixBuildRotationAboutAxis(&this->m_vRotationAxis, v1, &rot);
  v3 = CBaseEntity::EntityToWorldTransform(this);
  ConcatTransforms(v3, &rot, &newPos);
  CBaseEntity::SetEntityToWorldTransform(this, &newPos);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  CBaseEntity::SetNextThink(this, v4, -1880992764);
}


// CDevtestHierarchy::AnimationThink  (line 257, @0x0000000001e9d1a0, libserver.so)  // inlines: curtime
// calls: CBaseAnimating::StudioFrameAdvance, CBaseAnimating::DispatchAnimEvents, CBaseEntity::SetNextThink
void __fastcall CDevtestHierarchy::AnimationThink(CDevtestHierarchy *const this)
{
  float v2; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseAnimating::StudioFrameAdvance(this, AnimationAdvanceType_t::ANIM_ADVANCE_NORMAL);
  CBaseAnimating::DispatchAnimEvents(this, 0);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  CBaseEntity::SetNextThink(this, v2, -1878396845);
}


// CDevtestHierarchy::ResetDynamicChildPosition  (line 264, @0x0000000001e9d4f0, libserver.so)  // inlines: Get, GetComponent<CBodyComponent>, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MatrixAngles, MatrixPosition, operator CBaseEntity*, operator CEntityInstance*, operator+=, operator[]
// calls: CBodyComponent::ComputeBoneOrAttachmentToWorld, MatrixAngles
// callers: CDevtestHierarchy::AttachAndDetachThink, CDevtestHierarchy::CycleAttachmentTypeThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDevtestHierarchy::ResetDynamicChildPosition(CDevtestHierarchy *const this, CUtlStringToken attachName)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  int v7; // eax
  bool v8; // cc
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *v10; // rdx
  const CBodyComponent *v11; // rdi
  __int64 m_nBaseOffset; // rax
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  Vector v; // [rsp+0h] [rbp-70h] BYREF
  QAngle a; // [rsp+10h] [rbp-60h] BYREF
  matrix3x4a_t attachmentToWorld; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_bChildIsDynamic.m_Value )
  {
    m_Index = this->m_hChild.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hChild.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0 )
          {
            v7 = this->m_nDynamicDetachCount + 1;
            v8 = v7 < this->m_nDynamicResetCount.m_Value;
            this->m_nDynamicDetachCount = v7;
            if ( !v8 )
            {
              this->m_nDynamicDetachCount = 0;
              m_pEntity = this->m_pEntity;
              v10 = m_pEntity->m_pInstance;
              if ( m_pEntity->m_pInstance != 0 )
              {
                v11 = 0;
                m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
                if ( m_nBaseOffset != 0xFFFF )
                  v11 = *(&v10->_vptr_IHandleEntity + m_nBaseOffset);
              }
              else
              {
                v11 = 0;
              }
              CBodyComponent::ComputeBoneOrAttachmentToWorld(v11, attachName, &attachmentToWorld);
              MatrixAngles(&attachmentToWorld, &a);
              v13 = attachmentToWorld.m_flMatVal[0][3] + this->m_vDynamicAttachOffset.m_Value.x;
              v14 = attachmentToWorld.m_flMatVal[2][3] + this->m_vDynamicAttachOffset.m_Value.z;
              v.y = attachmentToWorld.m_flMatVal[1][3] + this->m_vDynamicAttachOffset.m_Value.y;
              v.x = v13;
              v.z = v14;
              (*(m_pInstance->_vptr_IHandleEntity + 128))(m_pInstance, &v, 0, &vec3_origin);
            }
          }
        }
      }
    }
  }
}


// CDevtestHierarchy::GetAttachNameForType  (line 292, @0x0000000001e9d790, libserver.so)
// callers: CDevtestHierarchy::SwitchParentThink, CDevtestHierarchy::ChildDormancyThink, CDevtestHierarchy::SwitchModelThink, CDevtestHierarchy::CycleAttachmentTypeThink, CDevtestHierarchy::SwitchChildModelThink
CUtlStringToken __fastcall CDevtestHierarchy::GetAttachNameForType(CDevtestHierarchy *const this, HierarchyType_t type)
{
  CUtlStringToken result; // eax

  if ( type == HierarchyType_t::HIERARCHY_ATTACHMENT )
    return this->m_attachName.m_Value.m_nHashCode;
  if ( type > HierarchyType_t::HIERARCHY_ATTACHMENT )
  {
    result.m_nHashCode = -454460638;
    if ( type == HierarchyType_t::HIERARCHY_ABSORIGIN )
      return result;
    if ( type == HierarchyType_t::HIERARCHY_BONE )
      return this->m_alternateAttachName.m_Value.m_nHashCode;
    return 0;
  }
  result.m_nHashCode = 479676646;
  if ( type != HierarchyType_t::HIERARCHY_BONE_MERGE )
    return 0;
  return result;
}


// CDevtestHierarchy::AttachAndDetachThink  (line 331, @0x0000000001e9d640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::SetNextThink, CBaseEntity::GetHierarchyAttachType, CDevtestHierarchy::ResetDynamicChildPosition, CBaseEntity::SetParent, CBaseEntity::SetMoveType
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDevtestHierarchy::AttachAndDetachThink(CDevtestHierarchy *const this)
{
  float v1; // xmm1_4
  CConcreteEntityList *v2; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CBaseEntity *m_pInstance; // r12

  v2 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = this->m_hChild.m_Index & 0x1FF;
      v2 = (8 * v6);
      v7 = &v5[v6];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 )
        {
          if ( CBaseEntity::GetHierarchyAttachType(v7->m_pInstance) != HierarchyType_t::HIERARCHY_NONE )
          {
            CBaseEntity::SetParent(m_pInstance, 0, 0, 0);
            if ( this->m_bChildIsDynamic.m_Value )
              CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
          }
          else
          {
            CDevtestHierarchy::ResetDynamicChildPosition(this, this->m_attachName.m_Value);
            CBaseEntity::SetParent(m_pInstance, this, this->m_attachName.m_Value, 0);
            if ( this->m_bChildIsDynamic.m_Value )
              CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
          }
        }
      }
    }
  }
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      (m_pfnWarningFunc)(1, v2);
  }
  CBaseEntity::SetNextThink(this, v1, 900148579);
}


// CDevtestHierarchy::CycleAttachmentTypeThink  (line 359, @0x0000000001e9df50, libserver.so)  // inlines: Get, GetAttachNameStringForType, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHierarchyAttachType, CDevtestHierarchy::GetAttachNameForType, CBaseEntity::SetParent, IDebugOverlay::EntityText, CBaseEntity::SetNextThink, CDevtestHierarchy::ResetDynamicChildPosition, CBaseEntity::SetMoveType
// strings: "HIERARCHY_ATTACHMENT", "HIERARCHY_ABSORIGIN", "HIERARCHY_BONE", "HIERARCHY_NONE", "HIERARCHY_BONE_MERGE"
// globals: CEntityHandle::gm_pEntityList, CDevtestHierarchy::CycleAttachmentTypeThink(void)::s_Types
void __fastcall CDevtestHierarchy::CycleAttachmentTypeThink(CDevtestHierarchy *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pInstance; // r13
  HierarchyType_t HierarchyAttachType; // eax
  int m_nTestIndex; // ecx
  HierarchyType_t v8; // r14d
  __int64 v9; // rsi
  int v10; // ecx
  HierarchyType_t v11; // r12d
  int v12; // edx
  CUtlStringToken v13; // eax
  uint32 m_nHashCode; // r15d
  const char *v15; // rcx
  float v16; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 <= 1 )
    return;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return;
  v4 = &v3[this->m_hChild.m_Index & 0x1FF];
  if ( v4 == 0 )
    return;
  if ( m_Index != v4->m_EHandle.m_Index )
    return;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return;
  HierarchyAttachType = CBaseEntity::GetHierarchyAttachType(v4->m_pInstance);
  m_nTestIndex = this->m_nTestIndex;
  v8 = HierarchyAttachType;
  v9 = m_nTestIndex;
  v10 = m_nTestIndex + 1;
  v11 = CDevtestHierarchy::CycleAttachmentTypeThink(void)::s_Types[v9];
  v12 = 0;
  if ( v10 <= 0x17 )
    v12 = v10;
  this->m_nTestIndex = v12;
  if ( v11 == HierarchyType_t::HIERARCHY_NONE )
  {
    CBaseEntity::SetParent(m_pInstance, 0, 0, 0);
    if ( this->m_bChildIsDynamic.m_Value )
      CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    v15 = "HIERARCHY_NONE";
    goto LABEL_17;
  }
  v13.m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, v11).m_nHashCode;
  m_nHashCode = v13.m_nHashCode;
  if ( v8 == HierarchyType_t::HIERARCHY_NONE && v11 != HierarchyType_t::HIERARCHY_BONE_MERGE )
    CDevtestHierarchy::ResetDynamicChildPosition(this, v13);
  CBaseEntity::SetParent(m_pInstance, this, m_nHashCode, 0);
  if ( this->m_bChildIsDynamic.m_Value )
    CBaseEntity::SetMoveType(m_pInstance, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v15 = "HIERARCHY_ATTACHMENT";
  if ( v11 != HierarchyType_t::HIERARCHY_ATTACHMENT )
  {
    if ( v11 <= HierarchyType_t::HIERARCHY_ATTACHMENT )
    {
      v15 = "HIERARCHY_BONE_MERGE";
      if ( v11 == HierarchyType_t::HIERARCHY_BONE_MERGE )
        goto LABEL_17;
    }
    else
    {
      v15 = "HIERARCHY_ABSORIGIN";
      if ( v11 == HierarchyType_t::HIERARCHY_ABSORIGIN )
        goto LABEL_17;
      v15 = "HIERARCHY_BONE";
      if ( v11 == HierarchyType_t::HIERARCHY_BONE )
        goto LABEL_17;
    }
    v15 = "";
  }
LABEL_17:
  IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, v15, 0.5, 255, 255, 255, 255);
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
  }
  CBaseEntity::SetNextThink(this, v16, 900148579);
}


// CDevtestHierarchy::SwitchParentThink  (line 414, @0x0000000001e9d7e0, libserver.so)  // inlines: Get, GetAttachNameStringForType, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CDevtestHierarchy::GetAttachNameForType, CBaseEntity::GetMoveParent, CBaseEntity::SetParent, IDebugOverlay::EntityText, CBaseEntity::SetNextThink
// strings: "HIERARCHY_NONE", "HIERARCHY_BONE", "HIERARCHY_ABSORIGIN", "HIERARCHY_ATTACHMENT", "HIERARCHY_BONE_MERGE"
// globals: CEntityHandle::gm_pEntityList, jpt_1E9D8BE
void __fastcall CDevtestHierarchy::SwitchParentThink(CDevtestHierarchy *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pInstance; // r12
  HierarchyType_t v6; // esi
  uint32 m_nHashCode; // r13d
  CBaseEntity *v8; // rax
  const char *v9; // rcx
  float v10; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CUtlStringToken v12; // r13d
  CBaseEntity *MoveParent; // rax
  uint32 v14; // ecx
  CBaseEntity *v15; // rsi
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx

  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hChild.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          if ( (this->m_nTestIndex & 1) != 0 )
          {
            v12.m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, this->m_nCurrType).m_nHashCode;
            MoveParent = CBaseEntity::GetMoveParent(m_pInstance);
            v14 = this->m_hAlternateParent.m_Index;
            v15 = 0;
            if ( v14 + 2 > 1 )
            {
              v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAlternateParent.m_Index) >> 9)
                                                                   & 0x3F];
              if ( v16 != 0 )
              {
                v17 = &v16[this->m_hAlternateParent.m_Index & 0x1FF];
                if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
                  v15 = v17->m_pInstance;
              }
            }
            if ( MoveParent == v15 )
              CBaseEntity::SetParent(m_pInstance, this, v12, 0);
            else
              CBaseEntity::SetParent(m_pInstance, v15, v12, 0);
          }
          else
          {
            v6 = this->m_nCurrType + 1;
            if ( v6 > HierarchyType_t::HIERARCHY_BONE )
            {
              this->m_nCurrType = HierarchyType_t::HIERARCHY_BONE_MERGE;
              v6 = HierarchyType_t::HIERARCHY_BONE_MERGE;
            }
            else
            {
              this->m_nCurrType = v6;
            }
            m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, v6).m_nHashCode;
            v8 = CBaseEntity::GetMoveParent(m_pInstance);
            CBaseEntity::SetParent(m_pInstance, v8, m_nHashCode, 0);
            v9 = "";
            switch ( this->m_nCurrType )
            {
              case HierarchyType_t::HIERARCHY_NONE:
                v9 = "HIERARCHY_NONE";
                break;
              case HierarchyType_t::HIERARCHY_BONE_MERGE:
                v9 = "HIERARCHY_BONE_MERGE";
                break;
              case HierarchyType_t::HIERARCHY_ATTACHMENT:
                v9 = "HIERARCHY_ATTACHMENT";
                break;
              case HierarchyType_t::HIERARCHY_ABSORIGIN:
                v9 = "HIERARCHY_ABSORIGIN";
                break;
              case HierarchyType_t::HIERARCHY_BONE:
                v9 = "HIERARCHY_BONE";
                break;
              default:
                break;
            }
            IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, v9, 1.0, 255, 255, 255, 255);
          }
          ++this->m_nTestIndex;
          if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          CBaseEntity::SetNextThink(this, v10, 900148579);
        }
      }
    }
  }
}


// CDevtestHierarchy::ChildDormancyThink  (line 453, @0x0000000001e9da80, libserver.so)  // inlines: Get, GetAttachNameStringForType, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsEffectActive, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, curtime, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::SetNextThink, CDevtestHierarchy::GetAttachNameForType, CBaseEntity::SetParent, IDebugOverlay::EntityText, CBaseEntity::AddEffects
// strings: "HIERARCHY_NONE", "HIERARCHY_BONE", "HIERARCHY_ABSORIGIN", "HIERARCHY_ATTACHMENT", "HIERARCHY_BONE_MERGE", "dormant child"
// globals: CEntityHandle::gm_pEntityList, jpt_1E9DBFB
void __fastcall CDevtestHierarchy::ChildDormancyThink(CDevtestHierarchy *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseEntity *m_pInstance; // r12
  unsigned int m_Value; // esi
  float v7; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  HierarchyType_t v9; // esi
  CUtlStringToken v10; // eax
  const char *v11; // rcx

  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hChild.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          if ( this->m_nTestIndex == 3 * (this->m_nTestIndex / 3) )
          {
            v9 = this->m_nCurrType + 1;
            if ( v9 > HierarchyType_t::HIERARCHY_BONE )
            {
              this->m_nCurrType = HierarchyType_t::HIERARCHY_BONE_MERGE;
              v9 = HierarchyType_t::HIERARCHY_BONE_MERGE;
            }
            else
            {
              this->m_nCurrType = v9;
            }
            v10.m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, v9).m_nHashCode;
            CBaseEntity::SetParent(m_pInstance, this, v10, 0);
            v11 = "";
            switch ( this->m_nCurrType )
            {
              case HierarchyType_t::HIERARCHY_NONE:
                v11 = "HIERARCHY_NONE";
                break;
              case HierarchyType_t::HIERARCHY_BONE_MERGE:
                v11 = "HIERARCHY_BONE_MERGE";
                break;
              case HierarchyType_t::HIERARCHY_ATTACHMENT:
                v11 = "HIERARCHY_ATTACHMENT";
                break;
              case HierarchyType_t::HIERARCHY_ABSORIGIN:
                v11 = "HIERARCHY_ABSORIGIN";
                break;
              case HierarchyType_t::HIERARCHY_BONE:
                v11 = "HIERARCHY_BONE";
                break;
              default:
                break;
            }
            IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, v11, 1.0, 255, 255, 255, 255);
          }
          else
          {
            m_Value = m_pInstance->m_fEffects.m_Value;
            if ( (m_Value & 0x20) != 0 )
            {
              (*(m_pInstance->_vptr_IHandleEntity + 188))(m_pInstance, m_Value & 0xFFFFFFDF);
              m_pInstance->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
              CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
            }
            else
            {
              CBaseEntity::AddEffects(m_pInstance, 32);
              IDebugOverlay::EntityText(g_pDebugOverlay, this, 1, "dormant child", 0.5, 255, 255, 255, 255);
            }
          }
          ++this->m_nTestIndex;
          if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          CBaseEntity::SetNextThink(this, v7, 900148579);
        }
      }
    }
  }
}


// CDevtestHierarchy::SwitchModelThink  (line 492, @0x0000000001e9dd10, libserver.so)  // inlines: FromUntypedHandleUnchecked, Get, GetAttachNameStringForType, GetBinding, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, InitUntypedUnchecked, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*, operator CWeakHandle<InfoForResourceTypeCModel>, operator==<InfoForResourceTypeCModel>
// calls: CBaseEntity::SetNextThink, CBaseEntity::GetModel, CBaseModelEntity::SetModel, CDevtestHierarchy::GetAttachNameForType, CBaseEntity::SetParent, IDebugOverlay::EntityText
// strings: "HIERARCHY_NONE", "HIERARCHY_BONE", "HIERARCHY_ABSORIGIN", "HIERARCHY_ATTACHMENT", "HIERARCHY_BONE_MERGE"
// globals: CEntityHandle::gm_pEntityList, jpt_1E9DEA2
void __fastcall CDevtestHierarchy::SwitchModelThink(CDevtestHierarchy *const this)
{
  float v1; // xmm1_4
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rsi
  CEntityIdentity *v5; // rdx
  __int64 v6; // rcx
  CEntityIdentity *v7; // rdx
  int m_nTestIndex; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const ResourceBindingBase_t *m_pBinding; // rax
  CBaseEntity *m_pInstance; // r12
  HierarchyType_t v12; // esi
  CUtlStringToken v13; // eax
  const char *v14; // rcx
  HModel hModel; // [rsp+10h] [rbp-20h] BYREF

  m_Index = this->m_hChild.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = this->m_hChild.m_Index & 0x1FF, v4 = (8 * v6), (v7 = &v5[v6]) == 0)
    || m_Index != v7->m_EHandle.m_Index )
  {
    m_nTestIndex = this->m_nTestIndex;
    if ( (m_nTestIndex & 1) == 0 )
      goto LABEL_6;
    goto LABEL_12;
  }
  m_nTestIndex = this->m_nTestIndex;
  m_pInstance = v7->m_pInstance;
  if ( (m_nTestIndex & 1) != 0 )
  {
LABEL_12:
    CBaseEntity::GetModel(this);
    m_pBinding = this->m_hAlternateModel.m_pBinding;
    if ( hModel.m_pBinding == m_pBinding )
      m_pBinding = this->m_hOriginalModel.m_pBinding;
    hModel.m_pBinding = m_pBinding;
    CBaseModelEntity::SetModel(this, &hModel);
    m_nTestIndex = this->m_nTestIndex;
    goto LABEL_6;
  }
  if ( m_pInstance != 0 )
  {
    v12 = this->m_nCurrType + 1;
    if ( v12 > HierarchyType_t::HIERARCHY_BONE )
    {
      this->m_nCurrType = HierarchyType_t::HIERARCHY_BONE_MERGE;
      v12 = HierarchyType_t::HIERARCHY_BONE_MERGE;
    }
    else
    {
      this->m_nCurrType = v12;
    }
    v13.m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, v12).m_nHashCode;
    CBaseEntity::SetParent(m_pInstance, this, v13, 0);
    v14 = "";
    switch ( this->m_nCurrType )
    {
      case HierarchyType_t::HIERARCHY_NONE:
        v14 = "HIERARCHY_NONE";
        break;
      case HierarchyType_t::HIERARCHY_BONE_MERGE:
        v14 = "HIERARCHY_BONE_MERGE";
        break;
      case HierarchyType_t::HIERARCHY_ATTACHMENT:
        v14 = "HIERARCHY_ATTACHMENT";
        break;
      case HierarchyType_t::HIERARCHY_ABSORIGIN:
        v14 = "HIERARCHY_ABSORIGIN";
        break;
      case HierarchyType_t::HIERARCHY_BONE:
        v14 = "HIERARCHY_BONE";
        break;
      default:
        break;
    }
    IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, v14, 1.0, 255, 255, 255, 255);
    m_nTestIndex = this->m_nTestIndex;
  }
LABEL_6:
  this->m_nTestIndex = m_nTestIndex + 1;
  if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
  {
    m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      (m_pfnWarningFunc)(1, v4);
  }
  CBaseEntity::SetNextThink(this, v1, 900148579);
}


// CDevtestHierarchy::SwitchChildModelThink  (line 531, @0x0000000001e9f390, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, Get, GetAttachNameStringForType, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, InitUntypedUnchecked, IsValid, LookupEntity, StaticInvalidHandle, String, curtime, operator CBaseEntity*, operator CEntityInstance*, operator CWeakHandle<InfoForResourceTypeCModel>, operator=
// calls: __stack_chk_fail, CDevtestHierarchy::GetAttachNameForType, CBaseEntity::SetParent, CBaseEntity::GetModelName, V_sprintf_safe<256ul>, IDebugOverlay::EntityText, CBaseEntity::SetNextThink, CBaseModelEntity::SetModel, CBaseEntity::GetModel, CStrongHandle<InfoForResourceTypeCModel>::Init
// strings: "HIERARCHY_NONE", "%s - %s", "HIERARCHY_BONE", "HIERARCHY_ABSORIGIN", "HIERARCHY_ATTACHMENT", "HIERARCHY_BONE_MERGE"
// globals: CEntityHandle::gm_pEntityList, jpt_1E9F499
void __fastcall CDevtestHierarchy::SwitchChildModelThink(CDevtestHierarchy *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CBaseModelEntity *m_pInstance; // r12
  HierarchyType_t v6; // esi
  const char *v7; // r13
  CUtlStringToken v8; // eax
  const char *v9; // rcx
  float v10; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const ResourceBindingBase_t *m_pBinding; // rax
  const ResourceBindingBase_t *v13; // rdx
  unsigned __int64 m_nCurrentModel; // rcx
  HModel hModel; // [rsp+10h] [rbp-170h] BYREF
  HModel modelArray[5]; // [rsp+20h] [rbp-160h]
  char pText[256]; // [rsp+50h] [rbp-130h] BYREF
  unsigned __int64 v18; // [rsp+158h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  m_Index = this->m_hChild.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hChild.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hChild.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          if ( this->m_hOriginalModel.m_pBinding == 0 )
          {
            CBaseEntity::GetModel(v4->m_pInstance);
            CStrongHandle<InfoForResourceTypeCModel>::Init(&this->m_hOriginalModel, modelArray[0].m_pBinding);
          }
          if ( (this->m_nTestIndex & 1) != 0 )
          {
            m_pBinding = this->m_hOriginalModel.m_pBinding;
            v13 = this->m_hAlternateModel.m_pBinding;
            modelArray[2].m_pBinding = 0;
            m_nCurrentModel = this->m_nCurrentModel;
            modelArray[4].m_pBinding = 0;
            modelArray[0].m_pBinding = m_pBinding;
            modelArray[1].m_pBinding = v13;
            modelArray[3].m_pBinding = m_pBinding;
            hModel.m_pBinding = modelArray[m_nCurrentModel % 5].m_pBinding;
            CBaseModelEntity::SetModel(m_pInstance, &hModel);
            ++this->m_nCurrentModel;
          }
          else
          {
            v6 = this->m_nCurrType + 1;
            if ( v6 > HierarchyType_t::HIERARCHY_BONE )
            {
              this->m_nCurrType = HierarchyType_t::HIERARCHY_BONE_MERGE;
              v6 = HierarchyType_t::HIERARCHY_BONE_MERGE;
            }
            else
            {
              this->m_nCurrType = v6;
            }
            v7 = "";
            v8.m_nHashCode = CDevtestHierarchy::GetAttachNameForType(this, v6).m_nHashCode;
            CBaseEntity::SetParent(m_pInstance, this, v8, 0);
            switch ( this->m_nCurrType )
            {
              case HierarchyType_t::HIERARCHY_NONE:
                v7 = "HIERARCHY_NONE";
                break;
              case HierarchyType_t::HIERARCHY_BONE_MERGE:
                v7 = "HIERARCHY_BONE_MERGE";
                break;
              case HierarchyType_t::HIERARCHY_ATTACHMENT:
                v7 = "HIERARCHY_ATTACHMENT";
                break;
              case HierarchyType_t::HIERARCHY_ABSORIGIN:
                v7 = "HIERARCHY_ABSORIGIN";
                break;
              case HierarchyType_t::HIERARCHY_BONE:
                v7 = "HIERARCHY_BONE";
                break;
              default:
                break;
            }
            CBaseEntity::GetModelName(m_pInstance);
            v9 = "";
            if ( modelArray[0].m_pBinding != 0 )
              v9 = modelArray[0].m_pBinding;
            V_sprintf_safe<256ul>(pText, "%s - %s", v7, v9);
            IDebugOverlay::EntityText(g_pDebugOverlay, this, 0, pText, 1.0, 255, 255, 255, 255);
          }
          ++this->m_nTestIndex;
          if ( gpGlobals != 0 && !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          CBaseEntity::SetNextThink(this, v10, 900148579);
        }
      }
    }
  }
}


// CDevtestHierarchy2::~CDevtestHierarchy2  (line 590, @0x0000000001ea1fa0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CDevtestHierarchy2::~CDevtestHierarchy2(CDevtestHierarchy2 *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDevtestHierarchy2::~CDevtestHierarchy2  (line 590, @0x0000000001ea1fe0, libserver.so)  // inlines: ~CBaseAnimating, ~CDevtestHierarchy2
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CDevtestHierarchy2::~CDevtestHierarchy2(CDevtestHierarchy2 *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDevtestHierarchy2::Schema_DynamicBinding  (line 597, @0x0000000001ea1670, libserver.so)
// globals: CDevtestHierarchy2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchy2::Schema_DynamicBinding(
        const CDevtestHierarchy2 *const this)
{
  return CDevtestHierarchy2::s_pSchemaBinding;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 597, @0x0000000001ea1680, libserver.so)
// globals: CDevtestHierarchy2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchy2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::DestructInstance  (line 597, @0x0000000001ea1690, libserver.so)  // inlines: Destruct<CDevtestHierarchy2>
void __fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::DestructInstance(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::FreeInstance  (line 597, @0x0000000001ea16b0, libserver.so)
void __fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::FreeInstance(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::CanAllocate  (line 597, @0x0000000001ea16d0, libserver.so)
bool __fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::CanAllocate(
        const CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 597, @0x0000000001ea16e0, libserver.so)
// globals: CDevtestHierarchy2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  return CDevtestHierarchy2::s_pSchemaBinding;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::AllocateInstance  (line 597, @0x0000000001ea1c90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::AllocateInstance(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::ConstructInstance  (line 597, @0x0000000001ea1f10, libserver.so)  // inlines: CDevtestHierarchy2, Construct<CDevtestHierarchy2>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::ConstructInstance(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_3FB0EB0;
  }
  return p;
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 597, @0x0000000001ea2960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 597, @0x0000000001ea2980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDevtestHierarchy2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDevtestHierarchy2::GetEntityClassInternal  (line 597, @0x0000000001ea5dd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I_devtest_hierarchy_cpp_schema.gen_cpp
// strings: "devtest_hierarchy2", "CDevtestHierarchy2", "baseanimating", "CBaseAnimating", "basemodelentity", "CBaseModelEntity"
// globals: `guard variable for'CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class, CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo, CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo, `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo (11 total)
CEntityClass *__cdecl CDevtestHierarchy2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class) != 0 )
  {
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_designerName.u.m_Id = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class._vptr_CEntityClass = off_3F79390;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_ComponentOffsets.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_AllHelpers.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classInputs.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classOutputs.m_Size = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_requiredEHandle.m_Index = -1;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_hNetworkSerializer = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pBaseClassInfo = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pClassInfo = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_flags = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_nAllHelpersFlags = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pScriptClassDesc = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pInputs = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_nInputCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pOutputs = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_nOutputCount = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pGameClass = 0;
    CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class._vptr_CEntityClass = off_3FB0E30;
    __cxa_guard_release(&`guard variable for'CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class);
    __cxa_atexit(
      CDevtestHierarchy2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDevtestHierarchy2Class != 0 )
    return &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class;
  if ( `guard variable for'CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo) != 0 )
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
        &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo,
        "CBaseAnimating",
        "baseanimating",
        0,
        &CBaseModelEntity::GetEntityClassInfo(void)::g_EntityCBaseModelEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo,
      "CDevtestHierarchy2",
      "devtest_hierarchy2",
      0,
      &CBaseAnimating::GetEntityClassInfo(void)::g_EntityCBaseAnimatingClassInfo);
    __cxa_guard_release(&`guard variable for'CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo);
  }
  CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pClassInfo = &CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo;
  CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pBaseClassInfo = CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDevtestHierarchy2Class = &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class;
  CDevtestHierarchy2::GetEntityClassInfo(void)::g_EntityCDevtestHierarchy2ClassInfo.m_pClass = &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class;
  CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCDevtestHierarchy2Class->m_pComponentOverrides = 0;
  return &CDevtestHierarchy2::GetEntityClassInternal(void)::g_EntityCDevtestHierarchy2Class;
}


// CDevtestHierarchy2::Precache  (line 600, @0x0000000001ea0c00, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModel
// strings: "models/survivors/survivor_gambler.vmdl", "models/w_models/weapons/w_desert_rifle.vmdl"
void __fastcall CDevtestHierarchy2::Precache(CDevtestHierarchy2 *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/survivors/survivor_gambler.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/w_models/weapons/w_desert_rifle.vmdl", pContext);
}


// CDevtestHierarchy2::Spawn  (line 608, @0x0000000001e9fda0, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<char const*>, AddToTail, Allocate, Allocate<QAngle>, Allocate<Vector>, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlString, CVProfScope, CopyData, CopyData<QAngle>, CopyData<Vector>, Element, EnterScope, ExitScope, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, memcpy, operator CDevtestHierarchyChild*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CBaseAnimating::Spawn, CBaseModelEntity::SetModel, CBaseAnimating::LookupSequence, CBaseAnimating::SetSequence, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CBaseEntity::GetAbsOrigin, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CUtlString::Get, CEntitySystem::CreateEntity (32 total)
// strings: "models/survivors/survivor_gambler.vmdl", "gasCan_pull_back_layer", "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall CDevtestHierarchy2::Spawn(CDevtestHierarchy2 *const this, const CEntityKeyValues *pKeyValues)
{
  HSequence v3; // eax
  CEntitySystem *v4; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v6; // rdx
  char v7; // al
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  _DWORD *p_x; // r14
  int v11; // edx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // si
  CEntitySpawnerContext<CDevtestHierarchyChild> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v19; // rdi
  CEntityIdentity *v20; // rax
  CEntityIdentity *v21; // rax
  CUtlScratchMemoryPool *v22; // rdi
  CEntityKeyValues *v23; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v33; // cx
  __int64 v34; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v35; // rdx
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v37; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v40; // rax
  __int16 v41; // ax
  _DWORD *v42; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v43; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v44; // rdx
  __int64 v45; // rax
  int v46; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v47; // cx
  __int64 v48; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v49; // rdx
  __int16 v50; // r14
  unsigned __int64 v51; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v52; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v53; // rax
  __int64 v54; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v55; // r14
  uint16 m_flags; // ax
  QAngle *v57; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v58; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rdx
  __int64 v60; // rax
  int v61; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v62; // cx
  __int64 v63; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v64; // rdx
  __int16 v65; // r14
  unsigned __int64 v66; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  __int64 v69; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v70; // r14
  uint16 v71; // ax
  char *v72; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v73; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v74; // rdx
  __int64 v75; // rax
  __int64 SubNode; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  __int16 v79; // ax
  _DWORD *v80; // rax
  __int64 v81; // rbx
  __int16 v82; // ax
  QAngle *v83; // rax
  __int64 v84; // rbx
  __int16 v85; // ax
  char *v86; // rax
  bool v87; // [rsp+1Fh] [rbp-101h]
  CEntityKeyValues *i; // [rsp+20h] [rbp-100h]
  __int64 v89; // [rsp+20h] [rbp-100h]
  CEntityInstance *pEntity; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntitye; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntityf; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntitya; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntityb; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntityc; // [rsp+28h] [rbp-F8h]
  CEntityInstance *pEntityd; // [rsp+28h] [rbp-F8h]
  int v97; // [rsp+30h] [rbp-F0h]
  _QWORD v98[2]; // [rsp+40h] [rbp-E0h] BYREF
  CEntitySpawner<CDevtestHierarchyChild> spawner; // [rsp+50h] [rbp-D0h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/survivors/survivor_gambler.vmdl");
  v3.m_Data = CBaseAnimating::LookupSequence(this, "gasCan_pull_back_layer").m_Data;
  CBaseAnimating::SetSequence(this, v3, SetSequenceBehavior_t::SET_SEQUENCE_PRESERVE_CYCLE);
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner._vptr_CEntitySpawnerBase = off_3FB0E10;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pContext = 0;
  v4 = g_pEntitySystem;
  spawner.m_pSpawnBatch = 0;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v4->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v4);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v6 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v6;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCDevtestHierarchyChildClass;
  if ( g_pApplication != 0 )
    v7 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v7 = 0;
  spawner.m_bValidateKeys = v7;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  p_x = &AbsOrigin->x;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_58:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v37 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
    pEntitya = v37;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v40 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v40 = 0;
    v89 = pEntitya;
    pEntityb = &v40[pEntitya];
    v41 = WORD1(pEntityb->m_pEntity);
    if ( (v41 & 1) != 0 )
      WORD1(pEntityb->m_pEntity) = v41 & 0xFFFE;
    pEntityb->_vptr_IHandleEntity = 0;
    LOWORD(pEntityb->m_pEntity) = 3;
    v42 = CEntityVariantAllocator::Allocate(0xCu);
    pEntityb->_vptr_IHandleEntity = v42;
    *v42 = *p_x;
    v42[1] = p_x[1];
    v42[2] = p_x[2];
    WORD1(pEntityb->m_pEntity) |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v43 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v43 = 0;
    v43[v89].m_pAttributeName = 0;
  }
  else
  {
    v33 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v34 = 0;
    while ( 1 )
    {
      if ( v33 != 0 )
      {
        v35 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v33 > 9 )
          v35 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v35 = 0;
      }
      if ( v35[v34] == -467664362 )
        break;
      if ( m_nCount <= ++v34 )
        goto LABEL_58;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v44 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v45 = v34;
      if ( v44[v45].m_pAttributeName != 0 )
      {
LABEL_70:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v44[v45].m_pAttributeName);
        goto LABEL_71;
      }
      v78 = &v44[v45];
    }
    else
    {
      v45 = v34;
      v44 = 0;
      v78 = v45 * 24;
      if ( *(v45 * 24 + 16) != 0 )
        goto LABEL_70;
    }
    v79 = *(v78 + 10);
    if ( (v79 & 1) != 0 )
      *(v78 + 10) = v79 & 0xFFFE;
    *v78 = 0;
    *(v78 + 8) = 3;
    v80 = CEntityVariantAllocator::Allocate(0xCu);
    *v78 = v80;
    *v80 = *p_x;
    v80[1] = p_x[1];
    v80[2] = p_x[2];
    *(v78 + 10) |= 1u;
  }
LABEL_71:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_4;
  v46 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v46 <= 0 )
  {
LABEL_80:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v50 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    v51 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( v51 != 0 )
    {
      if ( v51 <= 9 )
        v52 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        v52 = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      v52 = 0;
    }
    v52[v50] = -1164387633;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v53 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v53 = 0;
    v54 = v50;
    v55 = &v53[v54];
    pEntityc = (v54 * 24);
    m_flags = v53[v54].m_value.m_flags;
    if ( (m_flags & 1) != 0 )
      v55->m_value.m_flags = m_flags & 0xFFFE;
    v55->m_value.m_uint64 = 0;
    v55->m_value.m_type = 39;
    v57 = CEntityVariantAllocator::Allocate(0xCu);
    v55->m_value.m_uint64 = v57;
    *v57 = vec3_angle;
    v55->m_value.m_flags |= 1u;
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v58 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v58 = 0;
    *(&pEntityc->m_hPrivateScope.m_hScope + v58) = 0;
  }
  else
  {
    v47 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v48 = 0;
    while ( 1 )
    {
      if ( v47 != 0 )
      {
        v49 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v47 > 9 )
          v49 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v49 = 0;
      }
      if ( v49[v48] == -1164387633 )
        break;
      if ( v46 <= ++v48 )
        goto LABEL_80;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v59 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v60 = v48;
      if ( v59[v60].m_pAttributeName != 0 )
      {
LABEL_92:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v59[v60].m_pAttributeName);
        goto LABEL_93;
      }
      v81 = &v59[v60];
    }
    else
    {
      v60 = v48;
      v59 = 0;
      v81 = v60 * 24;
      if ( *(v60 * 24 + 16) != 0 )
        goto LABEL_92;
    }
    v82 = *(v81 + 10);
    if ( (v82 & 1) != 0 )
      *(v81 + 10) = v82 & 0xFFFE;
    *v81 = 0;
    *(v81 + 8) = 39;
    v83 = CEntityVariantAllocator::Allocate(0xCu);
    *v81 = v83;
    *v83 = vec3_angle;
    *(v81 + 10) |= 1u;
  }
LABEL_93:
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    v61 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v61 <= 0 )
    {
LABEL_102:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v65 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      v66 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      if ( v66 != 0 )
      {
        if ( v66 <= 9 )
          v67 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        else
          v67 = m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v67 = 0;
      }
      v67[v65] = -926958586;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v68 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v68 = 0;
      v69 = v65;
      v70 = &v68[v69];
      pEntityd = (v69 * 24);
      v71 = v68[v69].m_value.m_flags;
      if ( (v71 & 1) != 0 )
        v70->m_value.m_flags = v71 & 0xFFFE;
      v70->m_value.m_uint64 = 0;
      v70->m_value.m_type = 30;
      v72 = CEntityVariantAllocator::Allocate(0x2Cu);
      v70->m_value.m_uint64 = v72;
      strcpy(v72, "models/w_models/weapons/w_desert_rifle.vmdl");
      v70->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v73 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v73 = 0;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      *(&pEntityd->m_hPrivateScope.m_hScope + v73) = 0;
LABEL_116:
      v97 = -1;
      if ( m_pEntityKeyValues == 0 )
        goto LABEL_25;
      goto LABEL_5;
    }
    v62 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v63 = 0;
    while ( 1 )
    {
      if ( v62 != 0 )
      {
        v64 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v62 > 9 )
          v64 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v64 = 0;
      }
      if ( v64[v63] == -926958586 )
        break;
      if ( v61 <= ++v63 )
        goto LABEL_102;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v74 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v75 = v63;
      if ( v74[v75].m_pAttributeName != 0 )
      {
LABEL_114:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v74[v75].m_pAttributeName);
LABEL_115:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_116;
      }
      v84 = &v74[v75];
    }
    else
    {
      v75 = v63;
      v74 = 0;
      v84 = v75 * 24;
      if ( *(v75 * 24 + 16) != 0 )
        goto LABEL_114;
    }
    v85 = *(v84 + 10);
    if ( (v85 & 1) != 0 )
      *(v84 + 10) = v85 & 0xFFFE;
    *v84 = 0;
    *(v84 + 8) = 30;
    v86 = CEntityVariantAllocator::Allocate(0x2Cu);
    *v84 = v86;
    strcpy(v86, "models/w_models/weapons/w_desert_rifle.vmdl");
    *(v84 + 10) |= 1u;
    goto LABEL_115;
  }
LABEL_4:
  v97 = -1;
LABEL_5:
  v11 = *(&g_VProfCurrentProfile + 1032);
  v87 = v11 != 0;
  if ( v11 != 0 )
  {
    v28 = __rdtsc();
    pEntityf = *(&g_VProfCurrentProfile + 963);
    if ( pEntityf == ThreadGetCurrentId() )
    {
      SubNode = *(&g_VProfCurrentProfile + 517);
      if ( *SubNode != "Spawn" )
      {
        SubNode = CVProfNode::GetSubNode(*(&g_VProfCurrentProfile + 517), "Spawn", 0, "Server Simulation", 4);
        *(&g_VProfCurrentProfile + 517) = SubNode;
      }
      v77 = *(&g_VProfCurrentProfile + 540) + 16LL * *(SubNode + 112);
      *(v77 + 8) |= 4u;
      CVProfNode::EnterScope(*(&g_VProfCurrentProfile + 517));
      *(&g_VProfCurrentProfile + 4132) = 0;
    }
    v29 = *(&g_VProfCurrentProfile + 514);
    ++*(&g_VProfCurrentProfile + 515);
    v30 = v29 - v28;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    *(&g_VProfCurrentProfile + 514) = v30 + __rdtsc();
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
  pEntity = CEntitySystem::CreateEntity(
              g_pEntitySystem,
              spawner.m_hSpawnGroupHandle,
              spawner.m_pEntityClass,
              v13,
              m_nMode,
              -1,
              -1,
              0,
              0);
  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v97 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
    }
    v98[0] = pEntity->m_pEntity;
    v98[1] = spawner.m_pEntityKeyValues;
    (*(*g_pGameResourceService + 280LL))(
      g_pGameResourceService,
      spawner.m_hSpawnGroupHandle,
      1,
      v98,
      &spawner.m_mSpawnGroupToWorld);
    CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, spawner.m_pEntityKeyValues);
    if ( spawner.m_pSpawnBatch == 0 )
      CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
    m_pContext = spawner.m_pContext;
    for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
    {
      m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
      pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
      if ( m_pthis != 0 || pfn != 0 )
      {
        v19 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
        if ( (pfn & 1) != 0 )
          pfn = *(pfn + *v19 - 1);
        (pfn)(v19, pEntity, i);
      }
    }
  }
  if ( v87 )
  {
    v26 = __rdtsc();
    if ( *(&g_VProfCurrentProfile + 4132) == 0 || *(&g_VProfCurrentProfile + 1032) != 0 )
    {
      pEntitye = *(&g_VProfCurrentProfile + 963);
      if ( pEntitye == ThreadGetCurrentId() )
      {
        if ( CVProfNode::ExitScope(*(&g_VProfCurrentProfile + 517)) != 0 )
        {
          v31 = *(*(&g_VProfCurrentProfile + 517) + 88LL);
          if ( v31 != 0 )
            *(&g_VProfCurrentProfile + 517) = v31;
          else
            v31 = *(&g_VProfCurrentProfile + 517);
        }
        else
        {
          v31 = *(&g_VProfCurrentProfile + 517);
        }
        *(&g_VProfCurrentProfile + 4132) = v31 == &g_VProfCurrentProfile + 4144;
      }
    }
    v27 = *(&g_VProfCurrentProfile + 514);
    ++*(&g_VProfCurrentProfile + 515);
    *(&g_VProfCurrentProfile + 514) = v27 - v26 + __rdtsc();
  }
  if ( (v97 + 2) > 1 )
  {
    v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v97 >> 9) & 0x3F];
    if ( v20 != 0 )
    {
      v21 = &v20[v97 & 0x1FF];
      if ( v21 != 0 && v97 == v21->m_EHandle.m_Index && v21->m_pInstance != 0 )
        CBaseEntity::FollowEntity(v21->m_pInstance, this, 1);
    }
  }
LABEL_25:
  v22 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_3FB0DF0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v22 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v22);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v23 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v23);
      operator delete(v23);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
}


