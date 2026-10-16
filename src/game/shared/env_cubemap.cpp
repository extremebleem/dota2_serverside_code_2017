// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_cubemap.cpp:46
class CEnvCubemap : public CBaseEntity, public CBaseCubemap {
	class NetworkVar_m_hCubemapTexture {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flInfluenceRadius {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vBoxProjectMins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vBoxProjectMaxs {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_LightGroups {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStatic {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nHandshake {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bStartDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CBaseEntity BaseClass;
	typedef CEnvCubemap ThisClass;

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
	CEnvCubemap(CEnvCubemap &);
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
	CEnvCubemap();
	virtual ~CEnvCubemap();

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();

private:

	void Input_SetLightGroups(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_Enable(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_Disable(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// sizeof = 944
};

// src/game/shared/env_cubemap.cpp:98
class CEnvCubemapBox : public CEnvCubemap {
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
	CEnvCubemapBox(CEnvCubemapBox &);
	CEnvCubemapBox(CEnvCubemapBox &);
	CEnvCubemapBox();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CEnvCubemapBox();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 944
};

// src/game/shared/env_cubemap.cpp:214
class CEnvCubemapToolsResourceListener : IToolsResourceListener {
	CEnvCubemapToolsResourceListener(CEnvCubemapToolsResourceListener &);
	CEnvCubemapToolsResourceListener(const CEnvCubemapToolsResourceListener &);
	CEnvCubemapToolsResourceListener();
	void AddWatched(CBaseCubemap *);
	void RemoveWatched(CBaseCubemap *);
	virtual void NotifyResourceStatusChange(ResourceId_t, ResourceHandle_t, ResourceType_t, ResourceLoadType_t);
	~CEnvCubemapToolsResourceListener();

	// vtable[0] NotifyResourceStatusChange
	// sizeof = 112
};

// src/game/shared/env_cubemap.cpp:497
class C_CEnvCubemap_MapInstall {
	C_CEnvCubemap_MapInstall();

	// sizeof = 1
};

// src/game/shared/env_cubemap.cpp:498
class C_CEnvCubemapBox_MapInstall {
	C_CEnvCubemapBox_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvCubemap::GetEntityClass  (line 48, @0x0000000001eea720, libserver.so)
CEntityClass *__cdecl CEnvCubemap::GetEntityClass()
{
  return g_pEntityCEnvCubemapClass;
}


// CEnvCubemap::Schema_DynamicBinding  (line 48, @0x0000000001eea730, libserver.so)
// globals: CEnvCubemap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCubemap::Schema_DynamicBinding(const CEnvCubemap *const this)
{
  return CEnvCubemap::s_pSchemaBinding;
}


// CEnvCubemap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 48, @0x0000000001eea740, libserver.so)
// globals: CEnvCubemap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCubemap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  return CEnvCubemap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvCubemap::CEntityInstanceEntityClass::DestructInstance  (line 48, @0x0000000001eea750, libserver.so)  // inlines: Destruct<CEnvCubemap>
void __fastcall CEnvCubemap::CEntityInstanceEntityClass::DestructInstance(
        CEnvCubemap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvCubemap::CEntityInstanceEntityClass::FreeInstance  (line 48, @0x0000000001eea770, libserver.so)
void __fastcall CEnvCubemap::CEntityInstanceEntityClass::FreeInstance(
        CEnvCubemap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvCubemap::CEntityInstanceEntityClass::CanAllocate  (line 48, @0x0000000001eea790, libserver.so)
bool __fastcall CEnvCubemap::CEntityInstanceEntityClass::CanAllocate(
        const CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvCubemap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 48, @0x0000000001eea7a0, libserver.so)
// globals: CEnvCubemap::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvCubemap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  return CEnvCubemap::s_pSchemaBinding;
}


// CEnvCubemap::CEntityInstanceEntityClass::AllocateInstance  (line 48, @0x0000000001eebee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvCubemap::CEntityInstanceEntityClass::AllocateInstance(
        CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000001eedf40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 48, @0x0000000001eedf60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCubemap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvCubemap::GetEntityClassInfo  (line 48, @0x0000000001ef0c30, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CEnvCubemapBox::GetEntityClassInternal
// strings: "env_cubemap", "CEnvCubemap", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo, CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CEnvCubemap::GetEntityClassInfo()
{
  if ( `guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo != 0 )
    return &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo) == 0 )
    return &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo;
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
    &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo,
    "CEnvCubemap",
    "env_cubemap",
    0,
    &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
  __cxa_guard_release(&`guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo);
  return &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo;
}


// CEnvCubemap::CEntityInstanceEntityClass::ConstructInstance  (line 48, @0x0000000001ef2d50, libserver.so)  // inlines: Construct<CEnvCubemap>
// calls: CEnvCubemap::CEnvCubemap
CEntityInstance *__fastcall CEnvCubemap::CEntityInstanceEntityClass::ConstructInstance(
        CEnvCubemap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvCubemap::CEnvCubemap(p);
  return p;
}


// CEnvCubemap::GetEntityClassInternal  (line 48, @0x0000000001ef65a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvCubemap::SetupEntClassInputs, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_cubemap", "CEnvCubemap"
// globals: `guard variable for'CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass, CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo, CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo
CEntityClass *__cdecl CEnvCubemap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass) != 0 )
  {
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_designerName.u.m_Id = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass._vptr_CEntityClass = off_3F79390;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_ComponentOffsets.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_AllHelpers.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classInputs.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classOutputs.m_Size = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_requiredEHandle.m_Index = -1;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_hNetworkSerializer = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pBaseClassInfo = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pClassInfo = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_flags = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_nAllHelpersFlags = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pScriptClassDesc = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pInputs = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_nInputCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pOutputs = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_nOutputCount = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pGameClass = 0;
    CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass._vptr_CEntityClass = off_3FB8550;
    __cxa_guard_release(&`guard variable for'CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass);
    __cxa_atexit(
      CEnvCubemap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvCubemapClass != 0 )
    return &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass;
  if ( `guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo,
      "CEnvCubemap",
      "env_cubemap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo);
  }
  CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pClassInfo = &CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo;
  CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pBaseClassInfo = CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvCubemapClass = &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass;
  CEnvCubemap::GetEntityClassInfo(void)::g_EntityCEnvCubemapClassInfo.m_pClass = &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass;
  CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  CEnvCubemap::SetupEntClassInputs(g_pEntityCEnvCubemapClass);
  g_pEntityCEnvCubemapClass->m_pComponentOverrides = 0;
  return &CEnvCubemap::GetEntityClassInternal(void)::g_EntityCEnvCubemapClass;
}


// CEnvCubemap::UpdateTransmitState  (line 62, @0x0000000001eecb50, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CEnvCubemap::UpdateTransmitState(CEnvCubemap *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CEnvCubemapBox::~CEnvCubemapBox  (line 98, @0x0000000001ef2c50, libserver.so)
// calls: CEnvCubemap::~CEnvCubemap
void __fastcall CEnvCubemapBox::~CEnvCubemapBox(CEnvCubemapBox *const this)
{
  this->_vptr_IHandleEntity = &off_3FB8DB0;
  this->_vptr_IToolObject = off_3FB9438;
  CEnvCubemap::~CEnvCubemap(this);
}


// CEnvCubemapBox::~CEnvCubemapBox  (line 98, @0x0000000001ef2c90, libserver.so)  // inlines: ~CEnvCubemapBox
// calls: CEnvCubemap::~CEnvCubemap, CBaseEntity::operator delete
void __fastcall CEnvCubemapBox::~CEnvCubemapBox(CEnvCubemapBox *const this)
{
  this->_vptr_IHandleEntity = &off_3FB8DB0;
  this->_vptr_IToolObject = off_3FB9438;
  CEnvCubemap::~CEnvCubemap(this);
  CBaseEntity::operator delete(this);
}


// CEnvCubemapBox::Schema_DynamicBinding  (line 100, @0x0000000001eea7b0, libserver.so)
// globals: CEnvCubemapBox::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCubemapBox::Schema_DynamicBinding(const CEnvCubemapBox *const this)
{
  return CEnvCubemapBox::s_pSchemaBinding;
}


// CEnvCubemapBox::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 100, @0x0000000001eea7c0, libserver.so)
// globals: CEnvCubemapBox::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCubemapBox::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  return CEnvCubemapBox::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvCubemapBox::CEntityInstanceEntityClass::DestructInstance  (line 100, @0x0000000001eea7d0, libserver.so)  // inlines: Destruct<CEnvCubemapBox>
void __fastcall CEnvCubemapBox::CEntityInstanceEntityClass::DestructInstance(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvCubemapBox::CEntityInstanceEntityClass::FreeInstance  (line 100, @0x0000000001eea7f0, libserver.so)
void __fastcall CEnvCubemapBox::CEntityInstanceEntityClass::FreeInstance(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvCubemapBox::CEntityInstanceEntityClass::CanAllocate  (line 100, @0x0000000001eea810, libserver.so)
bool __fastcall CEnvCubemapBox::CEntityInstanceEntityClass::CanAllocate(
        const CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvCubemapBox::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 100, @0x0000000001eea820, libserver.so)
// globals: CEnvCubemapBox::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvCubemapBox::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  return CEnvCubemapBox::s_pSchemaBinding;
}


// CEnvCubemapBox::CEntityInstanceEntityClass::AllocateInstance  (line 100, @0x0000000001eebf20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvCubemapBox::CEntityInstanceEntityClass::AllocateInstance(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000001eedf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 100, @0x0000000001eedfb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvCubemapBox::CEntityInstanceEntityClass::ConstructInstance  (line 100, @0x0000000001ef2d80, libserver.so)  // inlines: CEnvCubemapBox, Construct<CEnvCubemapBox>
// calls: CEnvCubemap::CEnvCubemap
CEntityInstance *__fastcall CEnvCubemapBox::CEntityInstanceEntityClass::ConstructInstance(
        CEnvCubemapBox::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CEnvCubemap::CEnvCubemap(p);
    *p = &off_3FB8DB0;
    *(p + 97) = off_3FB9438;
  }
  return p;
}


// CEnvCubemapBox::GetEntityClassInternal  (line 100, @0x0000000001ef5860, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvCubemap::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_cubemap_box", "CEnvCubemapBox"
// globals: `guard variable for'CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass, CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo, CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo
CEntityClass *__cdecl CEnvCubemapBox::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass) != 0 )
  {
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_designerName.u.m_Id = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass._vptr_CEntityClass = off_3F79390;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_ComponentOffsets.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_AllHelpers.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classInputs.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classOutputs.m_Size = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_requiredEHandle.m_Index = -1;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_hNetworkSerializer = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pBaseClassInfo = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pClassInfo = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_flags = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_nAllHelpersFlags = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pScriptClassDesc = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pInputs = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_nInputCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pOutputs = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_nOutputCount = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pGameClass = 0;
    CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass._vptr_CEntityClass = off_3FB85D0;
    __cxa_guard_release(&`guard variable for'CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass);
    __cxa_atexit(
      CEnvCubemapBox::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvCubemapBoxClass != 0 )
    return &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass;
  if ( `guard variable for'CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo) != 0 )
  {
    EntityClassInfo = CEnvCubemap::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo,
      "CEnvCubemapBox",
      "env_cubemap_box",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo);
  }
  CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pClassInfo = &CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo;
  CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pBaseClassInfo = CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvCubemapBoxClass = &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass;
  CEnvCubemapBox::GetEntityClassInfo(void)::g_EntityCEnvCubemapBoxClassInfo.m_pClass = &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass;
  CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCEnvCubemapBoxClass->m_pComponentOverrides = 0;
  return &CEnvCubemapBox::GetEntityClassInternal(void)::g_EntityCEnvCubemapBoxClass;
}


// CEnvCubemap::GetDataDescMap  (line 104, @0x0000000001ecbf10, libserver.so)
// globals: CEnvCubemap::m_DataMap
datamap_t *__fastcall CEnvCubemap::GetDataDescMap(CEnvCubemap *const this)
{
  return &CEnvCubemap::m_DataMap;
}


// CEnvCubemap::AddDatadescMetadataKeys  (line 104, @0x0000000001ed9650, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvCubemap::GetEntityClass(void)
void __fastcall CEnvCubemap::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvCubemap::GetEntityClass);
}


// CEnvCubemap::GetBaseMap  (line 104, @0x0000000001ed9670, libserver.so)
datamap_t *__cdecl CEnvCubemap::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvCubemap>  (line 104, @0x0000000001ed9680, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CEnvCubemap"
// globals: `guard variable for'DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder, CEnvCubemap::GetEntityClass(void), CEnvCubemap::m_DataMap, DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvCubemap>(CEnvCubemap *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_pszBase = "CEnvCubemap";
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvCubemap>(CEnvCubemap *)::nameHolder,
      &_dso_handle);
  }
  CEnvCubemap::m_DataMap.dataNumFields = 10;
  CEnvCubemap::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvCubemap::m_DataMap.dataDesc = &DataMapInit<CEnvCubemap>(CEnvCubemap *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvCubemap::m_DataMap, CEnvCubemap::GetEntityClass);
  return &CEnvCubemap::m_DataMap;
}


// CBaseCubemap::AllocIndex  (line 155, @0x0000000001ed9750, libserver.so)
int __cdecl CBaseCubemap::AllocIndex()
{
  return -1;
}


// CBaseCubemap::FreeIndex  (line 188, @0x0000000001ed9760, libserver.so)
void __fastcall CBaseCubemap::FreeIndex(int *const i)
{
  ;
}


// CEnvCubemapToolsResourceListener::~CEnvCubemapToolsResourceListener  (line 214, @0x0000000001eebc20, libserver.so)  // inlines: InternalElement, Next, Purge, RemoveAll, operator[], ~CThreadMutex, ~CUtlLinkedList, ~CUtlMemory
// calls: pthread_mutex_destroy
void __fastcall CEnvCubemapToolsResourceListener::~CEnvCubemapToolsResourceListener(
        CEnvCubemapToolsResourceListener *const this)
{
  unsigned __int16 m_Head; // dx
  UtlLinkedListElem_t<CBaseCubemap*,short unsigned int> *v3; // rax
  unsigned __int16 m_Next; // cx
  unsigned __int16 v5; // ax

  this->_vptr_IToolsResourceListener = &off_3FB8640;
  if ( this->m_Watched.m_LastAlloc.index != 0xFFFF )
  {
    m_Head = this->m_Watched.m_Head;
    if ( m_Head != 0xFFFF )
    {
      while ( 1 )
      {
        v3 = &this->m_Watched.m_Memory.m_pMemory[m_Head];
        m_Next = v3->m_Next;
        v3->m_Previous = m_Head;
        if ( m_Next == 0xFFFF )
          break;
        m_Head = m_Next;
      }
      v3->m_Next = this->m_Watched.m_FirstFree;
      v5 = this->m_Watched.m_Head;
      if ( v5 != 0xFFFF )
        this->m_Watched.m_FirstFree = v5;
    }
    this->m_Watched.m_Head = -1;
    this->m_Watched.m_Tail = -1;
    this->m_Watched.m_ElementCount = 0;
  }
  if ( (this->m_Watched.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    if ( this->m_Watched.m_Memory.m_pMemory != 0 )
    {
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
      this->m_Watched.m_Memory.m_pMemory = 0;
    }
    this->m_Watched.m_Memory.m_nAllocationCount = 0;
  }
  pthread_mutex_destroy(&this->m_Mutex.m_Mutex);
}


// CEnvCubemapToolsResourceListener::AddWatched  (line 231, @0x0000000001ed9770, libserver.so)
void __fastcall CEnvCubemapToolsResourceListener::AddWatched(
        CEnvCubemapToolsResourceListener *const this,
        CBaseCubemap *pEnvCubeMap)
{
  ;
}


// CEnvCubemapToolsResourceListener::RemoveWatched  (line 248, @0x0000000001ed9780, libserver.so)
void __fastcall CEnvCubemapToolsResourceListener::RemoveWatched(
        CEnvCubemapToolsResourceListener *const this,
        CBaseCubemap *pEnvCubeMap)
{
  ;
}


// CEnvCubemapToolsResourceListener::NotifyResourceStatusChange  (line 265, @0x0000000001ecbf20, libserver.so)
void __fastcall CEnvCubemapToolsResourceListener::NotifyResourceStatusChange(
        CEnvCubemapToolsResourceListener *const this,
        ResourceId_t nResourceId,
        ResourceHandle_t hResource,
        ResourceType_t nResourceType,
        ResourceLoadType_t nLoadType)
{
  ;
}


// CBaseCubemap::CBaseCubemap  (line 290, @0x0000000001ed9790, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, IToolObject
void __fastcall CBaseCubemap::CBaseCubemap(CBaseCubemap *const this, IToolObjectContext *pContext)
{
  this->m_pContext = pContext;
  this->_vptr_IToolObject = off_3FB8670;  // vptr: CBaseCubemap
  this->m_hCubemapTexture.m_pBinding = 0;
  this->m_LightGroups.u.m_Id = 0;
  this->m_nCubeMapIndex = -1;
}


// CBaseCubemap::~CBaseCubemap  (line 300, @0x0000000001ee07a0, libserver.so)  // inlines: ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown
void __fastcall CBaseCubemap::~CBaseCubemap(CBaseCubemap *const this)
{
  CStrongHandle<InfoForResourceTypeCTextureBase> *p_m_hCubemapTexture; // rdi

  p_m_hCubemapTexture = &this->m_hCubemapTexture;
  p_m_hCubemapTexture[-2].m_pBinding = off_3FB8670;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(p_m_hCubemapTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
}


// CBaseCubemap::~CBaseCubemap  (line 300, @0x0000000001ee07e0, libserver.so)  // inlines: ~CBaseCubemap, ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, operator delete
void __fastcall CBaseCubemap::~CBaseCubemap(CBaseCubemap *const this)
{
  CStrongHandle<InfoForResourceTypeCTextureBase> *p_m_hCubemapTexture; // rdi

  p_m_hCubemapTexture = &this->m_hCubemapTexture;
  p_m_hCubemapTexture[-2].m_pBinding = off_3FB8670;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(p_m_hCubemapTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
  operator delete(this);
}


// CBaseCubemap::UpdateStateFromKeyValues  (line 308, @0x0000000001ee5190, libserver.so)  // inlines: AssignTo, Base, BlockingLoadResourceByName<2019914870ull>, CubemapProjectionModeFromClassname, Element, FindKeyHash, GetResourceName, GetResourceName<512ul>, GetValue, GetValue<Vector>, GetValue<bool>, GetValue<float>, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, ResourceGetName, String, TempString, V_strncpy<int>, _V_strcmp, atof, atoi, operator=, operator[]
// calls: VariantFieldTypeName, Warning, AllocPooledString, V_stricmp_fast, _V_strncpy, strcmp, CStrongHandle<InfoForResourceTypeCTextureBase>::Init, V_sscanf, strtod, strtol, __stack_chk_fail
// strings: "No free conversion of %s variant to Vector right now\n", "env_cubemap_box", "env_combined_light_probe_volume", "CubeMapTexture", "false", "true" (10 total)
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_1EE5540, jpt_1EE55ED, jpt_1EE568D, jpt_1EE58B3
void __fastcall CBaseCubemap::UpdateStateFromKeyValues(CBaseCubemap *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float m_float; // xmm0_4
  int v12; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // cx
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  vec_t **v17; // rdi
  int16 v18; // ax
  const char *v19; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  vec_t v22; // xmm1_4
  int v23; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // dx
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v27; // rdx
  vec_t **v28; // rdi
  int16 v29; // ax
  const char *v30; // rax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  vec_t v33; // xmm1_4
  int v34; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v35; // si
  __int64 v36; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v37; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v38; // rdx
  CEntityVariant *v39; // rax
  const char *v40; // rsi
  uint64 v41; // r8
  int v42; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v43; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v45; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rdx
  char m_char; // cl
  CEntityVariant *v48; // rdx
  int16 v49; // ax
  int v50; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v51; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v53; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v54; // rdx
  CEntityVariant *v55; // rcx
  int16 v56; // ax
  int v57; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v58; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v60; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v61; // rdx
  __int64 v62; // rcx
  CEntityVariant *v63; // rdx
  unsigned int v64; // eax
  int v65; // esi
  __int64 m; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rdx
  CEntityVariant *v69; // rdx
  _BOOL4 v70; // eax
  bool v71; // cf
  bool v72; // zf
  const char *v73; // rsi
  const char *v74; // rdi
  int v75; // esi
  __int64 v76; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v77; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rdx
  CEntityVariant *v79; // rax
  const char *v80; // r13
  const ResourceBindingBase_t *m_pBinding; // rax
  const char **m_Name; // rax
  const char *v83; // rsi
  const ResourceBinding_t<InfoForResourceTypeCTextureBase> *v84; // rax
  const char *m_uint64; // rax
  __int64 v86; // rdx
  const char *v87; // rax
  const char *v88; // rax
  const char *v89; // rax
  const char *v90; // rax
  UtlSymLargeId_t v91; // [rsp+0h] [rbp-240h] BYREF
  float v92; // [rsp+8h] [rbp-238h] BYREF
  char pCurrentTextureResourceName[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v94; // [rsp+218h] [rbp-28h]

  v94 = __readfsqword(0x28u);
  v4 = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_12:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_13;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == -1649715710 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      goto LABEL_12;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v4] != -1649715710 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v4].m_value;
LABEL_13:
  m_type = p_m_value->m_type;
  m_float = 512.0;
  if ( m_type != 0 )
  {
    switch ( m_type )
    {
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
          goto LABEL_153;
        v86 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
        m_float = v86 + v86;
        break;
      case 34:
        m_float = p_m_value->m_float64;
        break;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
LABEL_153:
        m_float = m_uint64;
        break;
      default:
        v88 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to float now\n", v88);
        m_float = 512.0;
        break;
    }
  }
  this->m_flInfluenceRadius = m_float;
  v12 = pKeyValues->m_keyHashes.m_nCount;
  if ( v12 <= 0 )
  {
LABEL_29:
    v17 = &CEntityKeyValues::sm_EmptyVariant;
    v18 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v18 != 0 )
      goto LABEL_25;
    goto LABEL_30;
  }
  v13 = pKeyValues->m_keyHashes.m_nAllocated;
  v14 = 0;
  while ( v13 == 0 )
  {
    if ( *(4 * v14) == -105468583 )
      goto LABEL_22;
LABEL_19:
    if ( v12 <= ++v14 )
      goto LABEL_29;
  }
  v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v13 > 9 )
    v15 = pKeyValues->m_keyHashes.m_pElements;
  if ( v15[v14] != -105468583 )
    goto LABEL_19;
LABEL_22:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v16 = pKeyValues->m_keyValues.m_pElements;
  else
    v16 = 0;
  v17 = &v16[v14];
  v18 = *(v17 + 4);
  if ( v18 == 0 )
  {
LABEL_30:
    v20 = -72.0;
    v21 = -72.0;
    v22 = -72.0;
    goto LABEL_31;
  }
LABEL_25:
  if ( v18 == 30 )
  {
    if ( V_sscanf(*v17, "%g %g %g", &v91, &v91 + 4, &v92) == 3 )
    {
      v20 = v92;
      v21 = *(&v91 + 1);
      v22 = *&v91;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( v18 != 39 && v18 != 3 )
  {
    v19 = VariantFieldTypeName(v18);
    Warning("No free conversion of %s variant to Vector right now\n", v19);
    goto LABEL_30;
  }
  v22 = **v17;
  v21 = (*v17)[1];
  v20 = (*v17)[2];
LABEL_31:
  this->m_vBoxProjectMins.x = v22;
  this->m_vBoxProjectMins.y = v21;
  this->m_vBoxProjectMins.z = v20;
  v23 = pKeyValues->m_keyHashes.m_nCount;
  if ( v23 <= 0 )
  {
LABEL_46:
    v28 = &CEntityKeyValues::sm_EmptyVariant;
    v29 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v29 != 0 )
      goto LABEL_42;
    goto LABEL_47;
  }
  v24 = pKeyValues->m_keyHashes.m_nAllocated;
  v25 = 0;
  while ( v24 == 0 )
  {
    if ( *(4 * v25) == -440909397 )
      goto LABEL_39;
LABEL_36:
    if ( v23 <= ++v25 )
      goto LABEL_46;
  }
  v26 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v24 > 9 )
    v26 = pKeyValues->m_keyHashes.m_pElements;
  if ( v26[v25] != -440909397 )
    goto LABEL_36;
LABEL_39:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v27 = pKeyValues->m_keyValues.m_pElements;
  else
    v27 = 0;
  v28 = &v27[v25];
  v29 = *(v28 + 4);
  if ( v29 == 0 )
  {
LABEL_47:
    v31 = 72.0;
    v32 = 72.0;
    v33 = 72.0;
    goto LABEL_48;
  }
LABEL_42:
  if ( v29 == 30 )
  {
    if ( V_sscanf(*v28, "%g %g %g", &v91, &v91 + 4, &v92) == 3 )
    {
      v32 = *(&v91 + 1);
      v31 = v92;
      v33 = *&v91;
      goto LABEL_48;
    }
    goto LABEL_47;
  }
  if ( v29 != 39 && v29 != 3 )
  {
    v30 = VariantFieldTypeName(v29);
    Warning("No free conversion of %s variant to Vector right now\n", v30);
    goto LABEL_47;
  }
  v33 = **v28;
  v31 = (*v28)[2];
  v32 = (*v28)[1];
LABEL_48:
  this->m_vBoxProjectMaxs.x = v33;
  this->m_vBoxProjectMaxs.y = v32;
  this->m_vBoxProjectMaxs.z = v31;
  v34 = pKeyValues->m_keyHashes.m_nCount;
  if ( v34 <= 0 )
  {
LABEL_60:
    v39 = &CEntityKeyValues::sm_EmptyVariant;
    v40 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_59;
    goto LABEL_61;
  }
  v35 = pKeyValues->m_keyHashes.m_nAllocated;
  v36 = 0;
  while ( 2 )
  {
    if ( v35 == 0 )
    {
      if ( *(4 * v36) == -892454307 )
        break;
      goto LABEL_53;
    }
    v37 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v35 > 9 )
      v37 = pKeyValues->m_keyHashes.m_pElements;
    if ( v37[v36] != -892454307 )
    {
LABEL_53:
      if ( v34 <= ++v36 )
        goto LABEL_60;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v38 = pKeyValues->m_keyValues.m_pElements;
  else
    v38 = 0;
  v39 = &v38[v36].m_value;
  v40 = "";
  if ( v39->m_type == 30 )
LABEL_59:
    v40 = v39->m_uint64;
LABEL_61:
  AllocPooledString(v40);
  this->m_LightGroups.u.m_Id = v91;
  v42 = pKeyValues->m_keyHashes.m_nCount;
  if ( v42 > 0 )
  {
    v43 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v42 > i; ++i )
    {
      if ( v43 != 0 )
      {
        v45 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v43 > 9 )
          v45 = pKeyValues->m_keyHashes.m_pElements;
        if ( v45[i] == 2019858286 )
        {
LABEL_69:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v46 = pKeyValues->m_keyValues.m_pElements;
          else
            v46 = 0;
          m_char = 1;
          v48 = &v46[i].m_value;
          v49 = v48->m_type;
          if ( v49 != 0 )
            goto LABEL_72;
          goto LABEL_74;
        }
      }
      else if ( *(4 * i) == 2019858286 )
      {
        goto LABEL_69;
      }
    }
  }
  v48 = &CEntityKeyValues::sm_EmptyVariant;
  m_char = 1;
  v49 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v49 != 0 )
  {
LABEL_72:
    switch ( v49 )
    {
      case 1:
        m_char = v48->m_float != 0.0;
        break;
      case 5:
      case 37:
        m_char = v48->m_int != 0;
        break;
      case 6:
        m_char = v48->m_char;
        break;
      case 26:
      case 33:
        m_char = v48->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(v48->m_pszString, "0") != 0
          && strcmp(v48->m_pszString, "false") != 0
          && strcmp(v48->m_pszString, "no") != 0 )
        {
          if ( strcmp(v48->m_pszString, "1") != 0
            && strcmp(v48->m_pszString, "true") != 0
            && strcmp(v48->m_pszString, "yes") != 0 )
          {
            Warning("Invalid conversion : CString '%s' to bool\n", v48->m_pszString);
          }
          goto LABEL_189;
        }
        m_char = 0;
        break;
      case 34:
        m_char = v48->m_float64 != 0.0;
        break;
      default:
        v90 = VariantFieldTypeName(v49);
        Warning("No conversion from %s to bool now\n", v90);
LABEL_189:
        m_char = 1;
        break;
    }
  }
LABEL_74:
  this->m_bStatic = m_char;
  v50 = pKeyValues->m_keyHashes.m_nCount;
  if ( v50 > 0 )
  {
    v51 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v50 > j; ++j )
    {
      if ( v51 != 0 )
      {
        v53 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v51 > 9 )
          v53 = pKeyValues->m_keyHashes.m_pElements;
        if ( v53[j] == 722659282 )
        {
LABEL_82:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v54 = pKeyValues->m_keyValues.m_pElements;
          else
            v54 = 0;
          v55 = &v54[j].m_value;
          LODWORD(v54) = 0;
          v56 = v55->m_type;
          if ( v56 != 0 )
            goto LABEL_85;
          goto LABEL_87;
        }
      }
      else if ( *(4 * j) == 722659282 )
      {
        goto LABEL_82;
      }
    }
  }
  v55 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(v54) = 0;
  v56 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v56 != 0 )
  {
LABEL_85:
    switch ( v56 )
    {
      case 1:
        LODWORD(v54) = v55->m_float;
        break;
      case 5:
        LODWORD(v54) = v55->m_int;
        break;
      case 6:
        LODWORD(v54) = v55->m_char;
        break;
      case 26:
        LODWORD(v54) = 0x7FFFFFFF;
        if ( v55->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v54) = 0x80000000;
          if ( v55->m_uint64 >= 0xFFFFFFFF80000000LL )
            v54 = v55->m_uint64;
        }
        break;
      case 30:
        LODWORD(v54) = strtol(v55->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(v54) = 0x7FFFFFFF;
        if ( v55->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v54) = v55->m_uint64;
        break;
      case 34:
        LODWORD(v54) = v55->m_float64;
        break;
      case 37:
        LODWORD(v54) = 0x7FFFFFFF;
        if ( v55->m_int <= 0x7FFFFFFEu )
          LODWORD(v54) = v55->m_int;
        break;
      default:
        v87 = VariantFieldTypeName(v56);
        Warning("No conversion from %s to int now\n", v87);
        LODWORD(v54) = 0;
        break;
    }
  }
LABEL_87:
  this->m_nHandshake = v54;
  v57 = pKeyValues->m_keyHashes.m_nCount;
  if ( v57 > 0 )
  {
    v58 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( k = 0; v57 > k; ++k )
    {
      if ( v58 != 0 )
      {
        v60 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v58 > 9 )
          v60 = pKeyValues->m_keyHashes.m_pElements;
        if ( v60[k] == -1517872836 )
        {
LABEL_95:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v61 = pKeyValues->m_keyValues.m_pElements;
          else
            v61 = 0;
          v62 = 0;
          v63 = &v61[k].m_value;
          v64 = v63->m_type;
          if ( v64 != 0 )
            goto LABEL_98;
          goto LABEL_100;
        }
      }
      else if ( *(4 * k) == -1517872836 )
      {
        goto LABEL_95;
      }
    }
  }
  v63 = &CEntityKeyValues::sm_EmptyVariant;
  v62 = 0;
  v64 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v64 != 0 )
  {
LABEL_98:
    switch ( v64 )
    {
      case 1:
        v62 = 1;
        LOBYTE(v64) = 0;
        if ( v63->m_float == 0.0 )
          v62 = v64;
        break;
      case 5:
      case 37:
        LOBYTE(v62) = v63->m_int != 0;
        break;
      case 6:
        v62 = v63->m_char;
        break;
      case 26:
      case 33:
        LOBYTE(v62) = v63->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(v63->m_pszString, "0") == 0
          || strcmp(v63->m_pszString, "false") == 0
          || strcmp(v63->m_pszString, "no") == 0 )
        {
          goto LABEL_202;
        }
        if ( strcmp(v63->m_pszString, "1") == 0
          || strcmp(v63->m_pszString, "true") == 0
          || strcmp(v63->m_pszString, "yes") == 0 )
        {
          v62 = 1;
        }
        else
        {
          Warning("Invalid conversion : CString '%s' to bool\n", v63->m_pszString);
          v62 = 0;
        }
        break;
      case 34:
        v62 = 1;
        LOBYTE(v64) = 0;
        if ( v63->m_float64 == 0.0 )
          v62 = v64;
        break;
      default:
        v89 = VariantFieldTypeName(v64);
        Warning("No conversion from %s to bool now\n", v89);
LABEL_202:
        v62 = 0;
        break;
    }
  }
LABEL_100:
  this->m_bStartDisabled = v62;
  v65 = pKeyValues->m_keyHashes.m_nCount;
  if ( v65 > 0 )
  {
    v62 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( m = 0; v65 > m; ++m )
    {
      if ( v62 != 0 )
      {
        v67 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v62 > 9 )
          v67 = pKeyValues->m_keyHashes.m_pElements;
        if ( v67[m] == -971301790 )
        {
LABEL_108:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v68 = pKeyValues->m_keyValues.m_pElements;
          else
            v68 = 0;
          v69 = &v68[m].m_value;
          v70 = 0;
          if ( v69->m_type == 30 )
            goto LABEL_111;
          goto LABEL_118;
        }
      }
      else if ( *(4 * m) == -971301790 )
      {
        goto LABEL_108;
      }
    }
  }
  v69 = &CEntityKeyValues::sm_EmptyVariant;
  v70 = 0;
  if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
  {
LABEL_111:
    v41 = v69->m_uint64;
    v71 = 0;
    v72 = v69->m_uint64 == 0;
    if ( v69->m_uint64 != 0 )
    {
      v62 = 16;
      v73 = v69->m_uint64;
      LOBYTE(v70) = 1;
      v74 = "env_cubemap_box";
      do
      {
        if ( v62 == 0 )
          break;
        v71 = *v73 < *v74;
        v72 = *v73++ == *v74++;
        --v62;
      }
      while ( v72 );
      LOBYTE(v62) = !v71 && !v72;
      if ( v62 != v71 )
        v70 = V_stricmp_fast(v41, "env_combined_light_probe_volume") == 0;
    }
  }
LABEL_118:
  this->m_nProjectionMode = v70;
  v75 = pKeyValues->m_keyHashes.m_nCount;
  if ( v75 <= 0 )
  {
LABEL_130:
    v79 = &CEntityKeyValues::sm_EmptyVariant;
    v80 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_129;
    goto LABEL_131;
  }
  v62 = pKeyValues->m_keyHashes.m_nAllocated;
  v76 = 0;
  while ( 2 )
  {
    if ( v62 == 0 )
    {
      if ( *(4 * v76) == 1911744926 )
        break;
      goto LABEL_123;
    }
    v77 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v62 > 9 )
      v77 = pKeyValues->m_keyHashes.m_pElements;
    if ( v77[v76] != 1911744926 )
    {
LABEL_123:
      if ( v75 <= ++v76 )
        goto LABEL_130;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v78 = pKeyValues->m_keyValues.m_pElements;
  else
    v78 = 0;
  v79 = &v78[v76].m_value;
  v80 = "";
  if ( v79->m_type == 30 )
LABEL_129:
    v80 = v79->m_uint64;
LABEL_131:
  m_pBinding = this->m_hCubemapTexture.m_pBinding;
  if ( m_pBinding != 0 && (m_Name = m_pBinding->m_Name) != 0 )
  {
    v83 = "";
    if ( *m_Name != 0 )
      v83 = *m_Name;
    _V_strncpy(pCurrentTextureResourceName, v83, 512, v62, v41);
  }
  else
  {
    _V_strncpy(pCurrentTextureResourceName, "", 512, v62, v41);
  }
  if ( strcmp(pCurrentTextureResourceName, v80) != 0 )
  {
    v84 = (*(*g_pResourceSystem + 384LL))(g_pResourceSystem, v80, 2019914870, "CubeMapTexture");
    CStrongHandle<InfoForResourceTypeCTextureBase>::Init(&this->m_hCubemapTexture, v84);
  }
}


// CBaseCubemap::CreateSceneObjectForRenderInstance  (line 336, @0x0000000001ecbf30, libserver.so)
CSceneObject *__fastcall CBaseCubemap::CreateSceneObjectForRenderInstance(
        const CBaseCubemap *const this,
        const matrix3x4_t *const mTransform,
        ISceneWorld *pSceneworld)
{
  return 0;
}


// CBaseCubemap::UpdateCubemapTexture  (line 351, @0x0000000001ed97c0, libserver.so)
void __fastcall CBaseCubemap::UpdateCubemapTexture(CBaseCubemap *const this)
{
  ;
}


// CBaseCubemap::CreateSceneObject  (line 364, @0x0000000001ed97d0, libserver.so)
CEnvMapSceneObject *__fastcall CBaseCubemap::CreateSceneObject(
        const CBaseCubemap *const this,
        ISceneWorld *pSceneWorld)
{
  return 0;
}


// CBaseCubemap::UpdateSceneObject  (line 379, @0x0000000001ed97e0, libserver.so)
void __fastcall CBaseCubemap::UpdateSceneObject(
        const CBaseCubemap *const this,
        CEnvMapSceneObject *pSceneObject,
        const matrix3x4_t *const mTransform,
        bool bEnabled)
{
  ;
}


// CBaseCubemap::UploadToTextureArray  (line 441, @0x0000000001ed97f0, libserver.so)
bool __fastcall CBaseCubemap::UploadToTextureArray(CBaseCubemap *const this)
{
  return 0;
}


// CEnvCubemap::YouForgotToImplementOrDeclareServerClass  (line 497, @0x0000000001ecbf40, libserver.so)
int __fastcall CEnvCubemap::YouForgotToImplementOrDeclareServerClass(CEnvCubemap *const this)
{
  return 0;
}


// CEnvCubemap::GetServerClass  (line 497, @0x0000000001ed1320, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvCubemap::GetServerClass(CEnvCubemap *const this)
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


// CEnvCubemapBox::YouForgotToImplementOrDeclareServerClass  (line 498, @0x0000000001ecbf50, libserver.so)
int __fastcall CEnvCubemapBox::YouForgotToImplementOrDeclareServerClass(CEnvCubemapBox *const this)
{
  return 0;
}


// CEnvCubemapBox::GetServerClass  (line 498, @0x0000000001ed12e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvCubemapBox::GetServerClass(CEnvCubemapBox *const this)
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


// CEnvCubemap::CEnvCubemap  (line 501, @0x0000000001ee0cb0, libserver.so)  // inlines: CBaseCubemap, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<float>, EnsureValidValue<int>, IToolObject, NetworkStateChanged, Zero, ~CBaseCubemap, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CEnvCubemap::CEntityInstanceEntityClass::ConstructInstance, CEnvCubemapBox::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvCubemap::CEnvCubemap(CEnvCubemap *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FB86D0;
  this->m_pContext = 0;
  this->CBaseCubemap::m_hCubemapTexture.m_pBinding = 0;
  this->CBaseCubemap::m_LightGroups.u.m_Id = 0;
  this->m_nCubeMapIndex = -1;
  this->_vptr_IToolObject = off_3FB8D58;
  this->m_hCubemapTexture.m_Value.m_pBinding = 0;
  this->m_flInfluenceRadius.m_Value = 0.0;
  this->m_vBoxProjectMins.m_Value.z = 0.0;
  this->m_vBoxProjectMins.m_Value.y = 0.0;
  this->m_vBoxProjectMins.m_Value.x = 0.0;
  this->m_vBoxProjectMaxs.m_Value.z = 0.0;
  this->m_vBoxProjectMaxs.m_Value.y = 0.0;
  this->m_vBoxProjectMaxs.m_Value.x = 0.0;
  this->m_LightGroups.m_Value.u.m_Id = 0;
  this->m_bStatic.m_Value = 0;
  this->m_nHandshake.m_Value = 0;
  this->m_bStartDisabled.m_Value = 0;
  this->m_pSceneObject = 0;
  this->m_bEnabled.m_Value = 1;
  CBaseEntity::NetworkStateChanged(this, 0x3A8u, -1, -1);
}


// CEnvCubemap::~CEnvCubemap  (line 508, @0x0000000001ee0820, libserver.so)  // inlines: ~CBaseCubemap, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity
// callers: CEnvCubemap::~CEnvCubemap, CEnvCubemapBox::~CEnvCubemapBox
void __fastcall CEnvCubemap::~CEnvCubemap(CEnvCubemap *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>,CEnvCubemap::NetworkVar_m_hCubemapTexture> *p_m_hCubemapTexture; // rdi

  p_m_hCubemapTexture = &this->m_hCubemapTexture;
  p_m_hCubemapTexture[-108].m_Value.m_pBinding = &off_3FB86D0;
  p_m_hCubemapTexture[-11].m_Value.m_pBinding = off_3FB8D58;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&p_m_hCubemapTexture->m_Value);
  this->_vptr_IToolObject = off_3FB8670;  // vptr: CBaseCubemap
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->CBaseCubemap::m_hCubemapTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
  CBaseEntity::~CBaseEntity(this);
}


// CEnvCubemap::~CEnvCubemap  (line 508, @0x0000000001ee08a0, libserver.so)
// calls: CEnvCubemap::~CEnvCubemap, CBaseEntity::operator delete
void __fastcall CEnvCubemap::~CEnvCubemap(CEnvCubemap *const this)
{
  CEnvCubemap::~CEnvCubemap(this);
  CBaseEntity::operator delete(this);
}


// CEnvCubemap::Spawn  (line 514, @0x0000000001ecebc0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn
void __fastcall CEnvCubemap::Spawn(CEnvCubemap *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  v3 = !this->m_bStartDisabled.m_Value;
  if ( v3 != this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 936, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = v3;
  }
}


// CEnvCubemap::Activate  (line 522, @0x0000000001ee30c0, libserver.so)  // inlines: CubemapProjectionModeFromClassname, GetClassNameAsCStr, GetClassname, String, _V_strcmp, operator=
// calls: CBaseEntity::Activate, CStrongHandle<InfoForResourceTypeCTextureBase>::Init, V_stricmp_fast
// strings: "env_cubemap_box", "env_combined_light_probe_volume"
void __fastcall CEnvCubemap::Activate(CEnvCubemap *const this, ActivateType_t activateType)
{
  UtlSymLargeId_t m_Id; // rax
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4
  vec_t y; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  bool v8; // zf
  const char *m_pAsString; // rax

  CBaseEntity::Activate(this, activateType);
  CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
    &this->CBaseCubemap::m_hCubemapTexture,
    &this->m_hCubemapTexture.m_Value);
  m_Id = this->m_LightGroups.m_Value.u.m_Id;
  this->CBaseCubemap::m_flInfluenceRadius = this->m_flInfluenceRadius.m_Value;
  x = this->m_vBoxProjectMins.m_Value.x;
  this->CBaseCubemap::m_LightGroups.u.m_Id = m_Id;
  LOBYTE(m_Id) = this->m_bStatic.m_Value;
  this->CBaseCubemap::m_vBoxProjectMins.x = x;
  this->CBaseCubemap::m_vBoxProjectMins.y = this->m_vBoxProjectMins.m_Value.y;
  z = this->m_vBoxProjectMins.m_Value.z;
  this->CBaseCubemap::m_bStatic = m_Id;
  LODWORD(m_Id) = this->m_nHandshake.m_Value;
  this->CBaseCubemap::m_vBoxProjectMins.z = z;
  this->CBaseCubemap::m_vBoxProjectMaxs.x = this->m_vBoxProjectMaxs.m_Value.x;
  y = this->m_vBoxProjectMaxs.m_Value.y;
  this->CBaseCubemap::m_nHandshake = m_Id;
  LOBYTE(m_Id) = this->m_bStartDisabled.m_Value;
  this->CBaseCubemap::m_vBoxProjectMaxs.y = y;
  this->CBaseCubemap::m_vBoxProjectMaxs.z = this->m_vBoxProjectMaxs.m_Value.z;
  this->CBaseCubemap::m_bStartDisabled = m_Id;
  m_pEntity = this->m_pEntity;
  v8 = m_pEntity->m_designerName.u.m_Id == 0;
  if ( m_pEntity->m_designerName.u.m_Id == 0 )
  {
    m_pAsString = "";
LABEL_6:
    this->m_nProjectionMode = V_stricmp_fast(m_pAsString, "env_combined_light_probe_volume") == 0;
    return;
  }
  m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  if ( !v8 )
  {
    if ( strcmp(m_pAsString, "env_cubemap_box") == 0 )
    {
      this->m_nProjectionMode = 1;
      return;
    }
    goto LABEL_6;
  }
  this->m_nProjectionMode = 0;
}


// CEnvCubemap::Input_SetLightGroups  (line 585, @0x0000000001ed0c20, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, NetworkStateChanged, Set, TempString, ToString, operator=, operator=<CUtlSymbolLarge>
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_1ED0C54, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvCubemap::Input_SetLightGroups(
        CEnvCubemap *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rsi
  const char *v8; // rax
  double m_float; // xmm0_8
  const char *v10; // rcx
  UtlSymLargeId_t v11; // [rsp+10h] [rbp-20h]

  m_type = value->m_type;
  if ( m_type == 30 )
  {
    m_uint64 = value->m_uint64;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_10;
      case 1:
        m_float = value->m_float;
        goto LABEL_12;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4),
          *(value->m_uint64 + 8),
          *(value->m_uint64 + 12));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%d", value->m_uint);
        goto LABEL_14;
      case 6:
        v10 = "true";
        if ( value->m_char == 0 )
          v10 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v10);
        goto LABEL_18;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_14;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          value->m_int,
          BYTE1(value->m_int),
          BYTE2(value->m_int),
          HIBYTE(value->m_int));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *value->m_pszString,
          *(value->m_uint64 + 4));
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%lld", value->m_uint64);
        goto LABEL_18;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_18:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_12:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_14:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v8 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  AllocPooledString(m_uint64);
  if ( v11 != this->m_LightGroups.m_Value.u.m_Id )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 904, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LightGroups.m_Value.u.m_Id = v11;
  }
}


// CEnvCubemap::Input_Enable  (line 593, @0x0000000001ece970, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvCubemap::Input_Enable(
        CEnvCubemap *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 936, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 1;
  }
}


// CEnvCubemap::Input_Disable  (line 601, @0x0000000001eceaf0, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvCubemap::Input_Disable(
        CEnvCubemap *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 936, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 0;
  }
}


