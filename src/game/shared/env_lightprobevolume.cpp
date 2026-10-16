// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_lightprobevolume.cpp:27
class CEnvLightProbeVolume : public CBaseEntity, public CBaseLightProbeVolume {
	class NetworkVar_m_hLightProbeTexture {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vBoxMins {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_vBoxMaxs {
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
	typedef CEnvLightProbeVolume ThisClass;

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
	CEnvLightProbeVolume(CEnvLightProbeVolume &);
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
	CEnvLightProbeVolume();
	virtual ~CEnvLightProbeVolume();

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
	// sizeof = 920
};

// src/game/shared/env_lightprobevolume.cpp:242
class C_CEnvLightProbeVolume_MapInstall {
	C_CEnvLightProbeVolume_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvLightProbeVolume::GetEntityClass  (line 29, @0x0000000001eea830, libserver.so)
CEntityClass *__cdecl CEnvLightProbeVolume::GetEntityClass()
{
  return g_pEntityCEnvLightProbeVolumeClass;
}


// CEnvLightProbeVolume::Schema_DynamicBinding  (line 29, @0x0000000001eea840, libserver.so)
// globals: CEnvLightProbeVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvLightProbeVolume::Schema_DynamicBinding(
        const CEnvLightProbeVolume *const this)
{
  return CEnvLightProbeVolume::s_pSchemaBinding;
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000001eea850, libserver.so)
// globals: CEnvLightProbeVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return CEnvLightProbeVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000001eea860, libserver.so)  // inlines: Destruct<CEnvLightProbeVolume>
void __fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::DestructInstance(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000001eea880, libserver.so)
void __fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::FreeInstance(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000001eea8a0, libserver.so)
bool __fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::CanAllocate(
        const CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000001eea8b0, libserver.so)
// globals: CEnvLightProbeVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return CEnvLightProbeVolume::s_pSchemaBinding;
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000001eebf60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::AllocateInstance(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000001eedfe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000001eee000, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000001ef2dc0, libserver.so)  // inlines: Construct<CEnvLightProbeVolume>
// calls: CEnvLightProbeVolume::CEnvLightProbeVolume
CEntityInstance *__fastcall CEnvLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance(
        CEnvLightProbeVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvLightProbeVolume::CEnvLightProbeVolume(p);
  return p;
}


// CEnvLightProbeVolume::GetEntityClassInternal  (line 29, @0x0000000001ef7cd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvLightProbeVolume::SetupEntClassInputs, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_light_probe_volume", "CEnvLightProbeVolume"
// globals: `guard variable for'CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass, CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo, CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo
CEntityClass *__cdecl CEnvLightProbeVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass) != 0 )
  {
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_designerName.u.m_Id = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass._vptr_CEntityClass = off_3F79390;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_ComponentOffsets.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_AllHelpers.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classInputs.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classOutputs.m_Size = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_requiredEHandle.m_Index = -1;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_hNetworkSerializer = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pBaseClassInfo = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pClassInfo = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_flags = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_nAllHelpersFlags = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pScriptClassDesc = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pInputs = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_nInputCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pOutputs = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_nOutputCount = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pGameClass = 0;
    CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass._vptr_CEntityClass = off_3FB9710;
    __cxa_guard_release(&`guard variable for'CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass);
    __cxa_atexit(
      CEnvLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvLightProbeVolumeClass != 0 )
    return &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass;
  if ( `guard variable for'CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo,
      "CEnvLightProbeVolume",
      "env_light_probe_volume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo);
  }
  CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pClassInfo = &CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo;
  CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pBaseClassInfo = CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvLightProbeVolumeClass = &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass;
  CEnvLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvLightProbeVolumeClassInfo.m_pClass = &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass;
  CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  CEnvLightProbeVolume::SetupEntClassInputs(g_pEntityCEnvLightProbeVolumeClass);
  g_pEntityCEnvLightProbeVolumeClass->m_pComponentOverrides = 0;
  return &CEnvLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvLightProbeVolumeClass;
}


// CEnvLightProbeVolume::UpdateTransmitState  (line 43, @0x0000000001eecb70, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CEnvLightProbeVolume::UpdateTransmitState(CEnvLightProbeVolume *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CEnvLightProbeVolume::GetDataDescMap  (line 72, @0x0000000001ecbf60, libserver.so)
// globals: CEnvLightProbeVolume::m_DataMap
datamap_t *__fastcall CEnvLightProbeVolume::GetDataDescMap(CEnvLightProbeVolume *const this)
{
  return &CEnvLightProbeVolume::m_DataMap;
}


// CEnvLightProbeVolume::AddDatadescMetadataKeys  (line 72, @0x0000000001eda0f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvLightProbeVolume::GetEntityClass(void)
void __fastcall CEnvLightProbeVolume::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvLightProbeVolume::GetEntityClass);
}


// CEnvLightProbeVolume::GetBaseMap  (line 72, @0x0000000001eda110, libserver.so)
datamap_t *__cdecl CEnvLightProbeVolume::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvLightProbeVolume>  (line 72, @0x0000000001eda120, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CEnvLightProbeVolume"
// globals: `guard variable for'DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder, CEnvLightProbeVolume::GetEntityClass(void), CEnvLightProbeVolume::m_DataMap, DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_pszBase = "CEnvLightProbeVolume";
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::nameHolder,
      &_dso_handle);
  }
  CEnvLightProbeVolume::m_DataMap.dataNumFields = 9;
  CEnvLightProbeVolume::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvLightProbeVolume::m_DataMap.dataDesc = &DataMapInit<CEnvLightProbeVolume>(CEnvLightProbeVolume *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvLightProbeVolume::m_DataMap, CEnvLightProbeVolume::GetEntityClass);
  return &CEnvLightProbeVolume::m_DataMap;
}


// CBaseLightProbeVolume::CBaseLightProbeVolume  (line 91, @0x0000000001eda1f0, libserver.so)  // inlines: CStrongHandle, CUtlSymbolLarge, IToolObject
void __fastcall CBaseLightProbeVolume::CBaseLightProbeVolume(
        CBaseLightProbeVolume *const this,
        IToolObjectContext *pContext)
{
  this->m_pContext = pContext;
  this->_vptr_IToolObject = off_3FB9790;  // vptr: CBaseLightProbeVolume
  this->m_hLightProbeTexture.m_pBinding = 0;
  this->m_LightGroups.u.m_Id = 0;
}


// CBaseLightProbeVolume::~CBaseLightProbeVolume  (line 98, @0x0000000001ee08d0, libserver.so)  // inlines: ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown
void __fastcall CBaseLightProbeVolume::~CBaseLightProbeVolume(CBaseLightProbeVolume *const this)
{
  CStrongHandle<InfoForResourceTypeCTextureBase> *p_m_hLightProbeTexture; // rdi

  p_m_hLightProbeTexture = &this->m_hLightProbeTexture;
  p_m_hLightProbeTexture[-2].m_pBinding = off_3FB9790;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(p_m_hLightProbeTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
}


// CBaseLightProbeVolume::~CBaseLightProbeVolume  (line 98, @0x0000000001ee0910, libserver.so)  // inlines: ~CBaseLightProbeVolume, ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, operator delete
void __fastcall CBaseLightProbeVolume::~CBaseLightProbeVolume(CBaseLightProbeVolume *const this)
{
  CStrongHandle<InfoForResourceTypeCTextureBase> *p_m_hLightProbeTexture; // rdi

  p_m_hLightProbeTexture = &this->m_hLightProbeTexture;
  p_m_hLightProbeTexture[-2].m_pBinding = off_3FB9790;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(p_m_hLightProbeTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
  operator delete(this);
}


// CBaseLightProbeVolume::UpdateStateFromKeyValues  (line 104, @0x0000000001ee3e70, libserver.so)  // inlines: AssignTo, Base, BlockingLoadResourceByName<2019914870ull>, Element, FindKeyHash, GetResourceName, GetResourceName<512ul>, GetValue, GetValue<Vector>, GetValue<bool>, GetValue<int>, GetValueString, Min<long long unsigned int>, Min<unsigned int>, ResourceGetName, String, TempString, V_strncpy<int>, VariantFieldTypeName, _V_strcmp, atoi, operator=, operator[]
// calls: VariantFieldTypeName, Warning, AllocPooledString, _V_strncpy, strcmp, CStrongHandle<InfoForResourceTypeCTextureBase>::Init, V_sscanf, strtol, __stack_chk_fail
// strings: "No free conversion of %s variant to Vector right now\n", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n", "No conversion from %s to int now\n" (25 total)
// globals: jpt_1EE3F3D, CEntityKeyValues::sm_EmptyVariant, jpt_1EE4190, jpt_1EE423D, jpt_1EE42DD
void __fastcall CBaseLightProbeVolume::UpdateStateFromKeyValues(
        CBaseLightProbeVolume *const this,
        const CEntityKeyValues *pKeyValues)
{
  __int64 v4; // rax
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  vec_t **v9; // rdi
  int16 m_type; // ax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm2_4
  vec_t v13; // xmm1_4
  int v14; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v15; // dx
  __int64 v16; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v17; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v18; // rdx
  vec_t **v19; // rdi
  int16 v20; // ax
  const char *v21; // rax
  vec_t v22; // xmm0_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm1_4
  int v25; // edx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v26; // si
  __int64 v27; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v28; // rcx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v29; // rdx
  CEntityVariant *p_m_value; // rax
  const char *m_uint64; // rsi
  __int64 v32; // r8
  int v33; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v34; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v36; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v37; // rdx
  char m_char; // cl
  CEntityVariant *v39; // rdx
  int16 v40; // ax
  int v41; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v42; // cx
  __int64 j; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v44; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rdx
  CEntityVariant *v46; // rcx
  int16 v47; // ax
  int v48; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v49; // cx
  __int64 k; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v51; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v52; // rdx
  __int64 m_uint; // rcx
  CEntityVariant *v54; // rdx
  unsigned int v55; // eax
  int v56; // esi
  __int64 v57; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v58; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v59; // rdx
  CEntityVariant *v60; // rax
  const char *v61; // r13
  const ResourceBindingBase_t *m_pBinding; // rax
  const char **m_Name; // rax
  const char *v64; // rsi
  const ResourceBinding_t<InfoForResourceTypeCTextureBase> *v65; // rax
  const char *v66; // rax
  const char *v67; // rax
  const char *v68; // rax
  const char *v69; // rsi
  UtlSymLargeId_t v70; // [rsp+0h] [rbp-240h] BYREF
  float v71; // [rsp+8h] [rbp-238h] BYREF
  char pCurrentTextureResourceName[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v73; // [rsp+218h] [rbp-28h]

  v73 = __readfsqword(0x28u);
  v4 = 0;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_16:
    v9 = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
LABEL_17:
    v11 = -72.0;
    v12 = -72.0;
    v13 = -72.0;
    goto LABEL_18;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v4) == -105468583 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v4 )
      goto LABEL_16;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v4] != -105468583 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  v9 = &v8[v4];
  m_type = *(v9 + 4);
  if ( m_type == 0 )
    goto LABEL_17;
LABEL_12:
  if ( m_type == 30 )
  {
    if ( V_sscanf(*v9, "%g %g %g", &v70, &v70 + 4, &v71) != 3 )
      goto LABEL_17;
    v11 = v71;
    v12 = *(&v70 + 1);
    v13 = *&v70;
  }
  else
  {
    if ( m_type != 39 && m_type != 3 )
    {
      switch ( m_type )
      {
        case 1:
          v69 = "float";
          break;
        case 4:
          v69 = "quaternion";
          break;
        case 5:
          v69 = "integer";
          break;
        case 6:
          v69 = "boolean";
          break;
        case 8:
          v69 = "character";
          break;
        case 9:
          v69 = "color";
          break;
        case 13:
          v69 = "ehandle";
          break;
        case 25:
          v69 = "vector2d";
          break;
        case 26:
          v69 = "int64";
          break;
        case 27:
          v69 = "vector4d";
          break;
        case 28:
          v69 = "resourcehandle";
          break;
        case 31:
          v69 = "hscript";
          break;
        case 32:
          v69 = "variant";
          break;
        case 33:
          v69 = "uint64";
          break;
        case 34:
          v69 = "float64";
          break;
        case 37:
          v69 = "unsigned";
          break;
        case 38:
          v69 = "utlstringtoken";
          break;
        case 48:
          v69 = "hscript_lightbinding";
          break;
        case 49:
          v69 = "js_value";
          break;
        case 50:
          v69 = "js_object";
          break;
        case 51:
          v69 = "js_array";
          break;
        case 52:
          v69 = "js_raw_args";
          break;
        default:
          v69 = "unknown_variant_type";
          break;
      }
      Warning("No free conversion of %s variant to Vector right now\n", v69);
      goto LABEL_17;
    }
    v13 = **v9;
    v12 = (*v9)[1];
    v11 = (*v9)[2];
  }
LABEL_18:
  this->m_vBoxMins.x = v13;
  this->m_vBoxMins.y = v12;
  this->m_vBoxMins.z = v11;
  v14 = pKeyValues->m_keyHashes.m_nCount;
  if ( v14 <= 0 )
  {
LABEL_33:
    v19 = &CEntityKeyValues::sm_EmptyVariant;
    v20 = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( v20 != 0 )
      goto LABEL_29;
    goto LABEL_34;
  }
  v15 = pKeyValues->m_keyHashes.m_nAllocated;
  v16 = 0;
  while ( v15 == 0 )
  {
    if ( *(4 * v16) == -440909397 )
      goto LABEL_26;
LABEL_23:
    if ( v14 <= ++v16 )
      goto LABEL_33;
  }
  v17 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v15 > 9 )
    v17 = pKeyValues->m_keyHashes.m_pElements;
  if ( v17[v16] != -440909397 )
    goto LABEL_23;
LABEL_26:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v18 = pKeyValues->m_keyValues.m_pElements;
  else
    v18 = 0;
  v19 = &v18[v16];
  v20 = *(v19 + 4);
  if ( v20 == 0 )
  {
LABEL_34:
    v22 = 72.0;
    v23 = 72.0;
    v24 = 72.0;
    goto LABEL_35;
  }
LABEL_29:
  if ( v20 == 30 )
  {
    if ( V_sscanf(*v19, "%g %g %g", &v70, &v70 + 4, &v71) == 3 )
    {
      v23 = *(&v70 + 1);
      v22 = v71;
      v24 = *&v70;
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  if ( v20 != 39 && v20 != 3 )
  {
    v21 = VariantFieldTypeName(v20);
    Warning("No free conversion of %s variant to Vector right now\n", v21);
    goto LABEL_34;
  }
  v24 = **v19;
  v22 = (*v19)[2];
  v23 = (*v19)[1];
LABEL_35:
  this->m_vBoxMaxs.x = v24;
  this->m_vBoxMaxs.y = v23;
  this->m_vBoxMaxs.z = v22;
  v25 = pKeyValues->m_keyHashes.m_nCount;
  if ( v25 <= 0 )
  {
LABEL_47:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_46;
    goto LABEL_48;
  }
  v26 = pKeyValues->m_keyHashes.m_nAllocated;
  v27 = 0;
  while ( 2 )
  {
    if ( v26 == 0 )
    {
      if ( *(4 * v27) == -892454307 )
        break;
      goto LABEL_40;
    }
    v28 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v26 > 9 )
      v28 = pKeyValues->m_keyHashes.m_pElements;
    if ( v28[v27] != -892454307 )
    {
LABEL_40:
      if ( v25 <= ++v27 )
        goto LABEL_47;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v29 = pKeyValues->m_keyValues.m_pElements;
  else
    v29 = 0;
  p_m_value = &v29[v27].m_value;
  m_uint64 = "";
  if ( p_m_value->m_type == 30 )
LABEL_46:
    m_uint64 = p_m_value->m_uint64;
LABEL_48:
  AllocPooledString(m_uint64);
  this->m_LightGroups.u.m_Id = v70;
  v33 = pKeyValues->m_keyHashes.m_nCount;
  if ( v33 > 0 )
  {
    v34 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( i = 0; v33 > i; ++i )
    {
      if ( v34 != 0 )
      {
        v36 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v34 > 9 )
          v36 = pKeyValues->m_keyHashes.m_pElements;
        if ( v36[i] == 2019858286 )
        {
LABEL_56:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v37 = pKeyValues->m_keyValues.m_pElements;
          else
            v37 = 0;
          m_char = 1;
          v39 = &v37[i].m_value;
          v40 = v39->m_type;
          if ( v40 != 0 )
            goto LABEL_59;
          goto LABEL_61;
        }
      }
      else if ( *(4 * i) == 2019858286 )
      {
        goto LABEL_56;
      }
    }
  }
  v39 = &CEntityKeyValues::sm_EmptyVariant;
  m_char = 1;
  v40 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v40 != 0 )
  {
LABEL_59:
    switch ( v40 )
    {
      case 1:
        m_char = v39->m_float != 0.0;
        break;
      case 5:
      case 37:
        m_char = v39->m_int != 0;
        break;
      case 6:
        m_char = v39->m_char;
        break;
      case 26:
      case 33:
        m_char = v39->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(v39->m_pszString, "0") != 0
          && strcmp(v39->m_pszString, "false") != 0
          && strcmp(v39->m_pszString, "no") != 0 )
        {
          if ( strcmp(v39->m_pszString, "1") != 0
            && strcmp(v39->m_pszString, "true") != 0
            && strcmp(v39->m_pszString, "yes") != 0 )
          {
            Warning("Invalid conversion : CString '%s' to bool\n", v39->m_pszString);
          }
          goto LABEL_131;
        }
        m_char = 0;
        break;
      case 34:
        m_char = v39->m_float64 != 0.0;
        break;
      default:
        v68 = VariantFieldTypeName(v40);
        Warning("No conversion from %s to bool now\n", v68);
LABEL_131:
        m_char = 1;
        break;
    }
  }
LABEL_61:
  this->m_bStatic = m_char;
  v41 = pKeyValues->m_keyHashes.m_nCount;
  if ( v41 > 0 )
  {
    v42 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( j = 0; v41 > j; ++j )
    {
      if ( v42 != 0 )
      {
        v44 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v42 > 9 )
          v44 = pKeyValues->m_keyHashes.m_pElements;
        if ( v44[j] == 722659282 )
        {
LABEL_69:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v45 = pKeyValues->m_keyValues.m_pElements;
          else
            v45 = 0;
          v46 = &v45[j].m_value;
          LODWORD(v45) = 0;
          v47 = v46->m_type;
          if ( v47 != 0 )
            goto LABEL_72;
          goto LABEL_74;
        }
      }
      else if ( *(4 * j) == 722659282 )
      {
        goto LABEL_69;
      }
    }
  }
  v46 = &CEntityKeyValues::sm_EmptyVariant;
  LODWORD(v45) = 0;
  v47 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v47 != 0 )
  {
LABEL_72:
    switch ( v47 )
    {
      case 1:
        LODWORD(v45) = v46->m_float;
        break;
      case 5:
        LODWORD(v45) = v46->m_int;
        break;
      case 6:
        LODWORD(v45) = v46->m_char;
        break;
      case 26:
        LODWORD(v45) = 0x7FFFFFFF;
        if ( v46->m_int64 <= 0x7FFFFFFF )
        {
          LODWORD(v45) = 0x80000000;
          if ( v46->m_uint64 >= 0xFFFFFFFF80000000LL )
            v45 = v46->m_uint64;
        }
        break;
      case 30:
        LODWORD(v45) = strtol(v46->m_pszString, 0, 10);
        break;
      case 33:
        LODWORD(v45) = 0x7FFFFFFF;
        if ( v46->m_uint64 <= 0x7FFFFFFE )
          LODWORD(v45) = v46->m_uint64;
        break;
      case 34:
        LODWORD(v45) = v46->m_float64;
        break;
      case 37:
        LODWORD(v45) = 0x7FFFFFFF;
        if ( v46->m_int <= 0x7FFFFFFEu )
          LODWORD(v45) = v46->m_int;
        break;
      default:
        v67 = VariantFieldTypeName(v47);
        Warning("No conversion from %s to int now\n", v67);
        LODWORD(v45) = 0;
        break;
    }
  }
LABEL_74:
  this->m_nHandshake = v45;
  v48 = pKeyValues->m_keyHashes.m_nCount;
  if ( v48 > 0 )
  {
    v49 = pKeyValues->m_keyHashes.m_nAllocated;
    for ( k = 0; v48 > k; ++k )
    {
      if ( v49 != 0 )
      {
        v51 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v49 > 9 )
          v51 = pKeyValues->m_keyHashes.m_pElements;
        if ( v51[k] == -1517872836 )
        {
LABEL_82:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v52 = pKeyValues->m_keyValues.m_pElements;
          else
            v52 = 0;
          m_uint = 0;
          v54 = &v52[k].m_value;
          v55 = v54->m_type;
          if ( v55 != 0 )
            goto LABEL_85;
          goto LABEL_87;
        }
      }
      else if ( *(4 * k) == -1517872836 )
      {
        goto LABEL_82;
      }
    }
  }
  v54 = &CEntityKeyValues::sm_EmptyVariant;
  m_uint = 0;
  v55 = CEntityKeyValues::sm_EmptyVariant.m_type;
  if ( v55 != 0 )
  {
LABEL_85:
    switch ( v55 )
    {
      case 1:
        m_uint = 1;
        LOBYTE(v55) = 0;
        if ( v54->m_float == 0.0 )
          m_uint = v55;
        break;
      case 5:
      case 37:
        m_uint = v54->m_uint;
        LOBYTE(m_uint) = m_uint != 0;
        break;
      case 6:
        m_uint = v54->m_char;
        break;
      case 26:
      case 33:
        LOBYTE(m_uint) = v54->m_uint64 != 0;
        break;
      case 30:
        if ( strcmp(v54->m_pszString, "0") == 0
          || strcmp(v54->m_pszString, "false") == 0
          || strcmp(v54->m_pszString, "no") == 0 )
        {
          goto LABEL_158;
        }
        if ( strcmp(v54->m_pszString, "1") == 0
          || strcmp(v54->m_pszString, "true") == 0
          || strcmp(v54->m_pszString, "yes") == 0 )
        {
          m_uint = 1;
        }
        else
        {
          Warning("Invalid conversion : CString '%s' to bool\n", v54->m_pszString);
          m_uint = 0;
        }
        break;
      case 34:
        m_uint = 1;
        LOBYTE(v55) = 0;
        if ( v54->m_float64 == 0.0 )
          m_uint = v55;
        break;
      default:
        v66 = VariantFieldTypeName(v55);
        Warning("No conversion from %s to bool now\n", v66);
LABEL_158:
        m_uint = 0;
        break;
    }
  }
LABEL_87:
  this->m_bStartDisabled = m_uint;
  v56 = pKeyValues->m_keyHashes.m_nCount;
  if ( v56 <= 0 )
  {
LABEL_99:
    v60 = &CEntityKeyValues::sm_EmptyVariant;
    v61 = "";
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_98;
    goto LABEL_100;
  }
  m_uint = pKeyValues->m_keyHashes.m_nAllocated;
  v57 = 0;
  while ( 2 )
  {
    if ( m_uint == 0 )
    {
      if ( *(4 * v57) == -1841200487 )
        break;
      goto LABEL_92;
    }
    v58 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( m_uint > 9 )
      v58 = pKeyValues->m_keyHashes.m_pElements;
    if ( v58[v57] != -1841200487 )
    {
LABEL_92:
      if ( v56 <= ++v57 )
        goto LABEL_99;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v59 = pKeyValues->m_keyValues.m_pElements;
  else
    v59 = 0;
  v60 = &v59[v57].m_value;
  v61 = "";
  if ( v60->m_type == 30 )
LABEL_98:
    v61 = v60->m_uint64;
LABEL_100:
  m_pBinding = this->m_hLightProbeTexture.m_pBinding;
  if ( m_pBinding != 0 && (m_Name = m_pBinding->m_Name) != 0 )
  {
    v64 = "";
    if ( *m_Name != 0 )
      v64 = *m_Name;
    _V_strncpy(pCurrentTextureResourceName, v64, 512, m_uint, v32);
  }
  else
  {
    _V_strncpy(pCurrentTextureResourceName, "", 512, m_uint, v32);
  }
  if ( strcmp(pCurrentTextureResourceName, v61) != 0 )
  {
    v65 = (*(*g_pResourceSystem + 384LL))(g_pResourceSystem, v61, 2019914870, "LightProbeTexture");
    CStrongHandle<InfoForResourceTypeCTextureBase>::Init(&this->m_hLightProbeTexture, v65);
  }
}


// CBaseLightProbeVolume::CreateSceneObjectForRenderInstance  (line 128, @0x0000000001ecbf70, libserver.so)
CSceneObject *__fastcall CBaseLightProbeVolume::CreateSceneObjectForRenderInstance(
        const CBaseLightProbeVolume *const this,
        const matrix3x4_t *const mTransform,
        ISceneWorld *pSceneworld)
{
  return 0;
}


// CBaseLightProbeVolume::UpdateLightProbeTexture  (line 141, @0x0000000001eda220, libserver.so)
bool __fastcall CBaseLightProbeVolume::UpdateLightProbeTexture(CBaseLightProbeVolume *const this)
{
  return 0;
}


// CBaseLightProbeVolume::CreateSceneObject  (line 150, @0x0000000001eda230, libserver.so)
CSceneLightProbeVolumeObject *__fastcall CBaseLightProbeVolume::CreateSceneObject(
        const CBaseLightProbeVolume *const this,
        ISceneWorld *pSceneWorld)
{
  return 0;
}


// CBaseLightProbeVolume::UpdateSceneObject  (line 160, @0x0000000001eda240, libserver.so)
void __fastcall CBaseLightProbeVolume::UpdateSceneObject(
        const CBaseLightProbeVolume *const this,
        CSceneLightProbeVolumeObject *pSceneObject,
        const matrix3x4_t *const mTransform,
        bool bEnabled)
{
  ;
}


// CEnvLightProbeVolume::YouForgotToImplementOrDeclareServerClass  (line 242, @0x0000000001ecbf80, libserver.so)
int __fastcall CEnvLightProbeVolume::YouForgotToImplementOrDeclareServerClass(CEnvLightProbeVolume *const this)
{
  return 0;
}


// CEnvLightProbeVolume::GetServerClass  (line 242, @0x0000000001ed13a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvLightProbeVolume::GetServerClass(CEnvLightProbeVolume *const this)
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


// CEnvLightProbeVolume::CEnvLightProbeVolume  (line 246, @0x0000000001ee0df0, libserver.so)  // inlines: CBaseLightProbeVolume, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<int>, IToolObject, NetworkStateChanged, Zero, ~CBaseLightProbeVolume, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CEnvLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvLightProbeVolume::CEnvLightProbeVolume(CEnvLightProbeVolume *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FB97F0;
  this->m_pContext = 0;
  this->CBaseLightProbeVolume::m_hLightProbeTexture.m_pBinding = 0;
  this->CBaseLightProbeVolume::m_LightGroups.u.m_Id = 0;
  this->_vptr_IToolObject = off_3FB9E78;
  this->m_hLightProbeTexture.m_Value.m_pBinding = 0;
  this->m_vBoxMins.m_Value.z = 0.0;
  this->m_vBoxMins.m_Value.y = 0.0;
  this->m_vBoxMins.m_Value.x = 0.0;
  this->m_vBoxMaxs.m_Value.z = 0.0;
  this->m_vBoxMaxs.m_Value.y = 0.0;
  this->m_vBoxMaxs.m_Value.x = 0.0;
  this->m_LightGroups.m_Value.u.m_Id = 0;
  this->m_bStatic.m_Value = 0;
  this->m_nHandshake.m_Value = 0;
  this->m_bStartDisabled.m_Value = 0;
  this->m_pSceneObject = 0;
  this->m_bEnabled.m_Value = 1;
  CBaseEntity::NetworkStateChanged(this, 0x390u, -1, -1);
}


// CEnvLightProbeVolume::~CEnvLightProbeVolume  (line 254, @0x0000000001ee0c00, libserver.so)  // inlines: ~CBaseLightProbeVolume, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity
// callers: CEnvLightProbeVolume::~CEnvLightProbeVolume
void __fastcall CEnvLightProbeVolume::~CEnvLightProbeVolume(CEnvLightProbeVolume *const this)
{
  CNetworkVarBase<CStrongHandle<InfoForResourceTypeCTextureBase>,CEnvLightProbeVolume::NetworkVar_m_hLightProbeTexture> *p_m_hLightProbeTexture; // rdi

  p_m_hLightProbeTexture = &this->m_hLightProbeTexture;
  p_m_hLightProbeTexture[-106].m_Value.m_pBinding = &off_3FB97F0;
  p_m_hLightProbeTexture[-9].m_Value.m_pBinding = off_3FB9E78;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&p_m_hLightProbeTexture->m_Value);
  this->_vptr_IToolObject = off_3FB9790;  // vptr: CBaseLightProbeVolume
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->CBaseLightProbeVolume::m_hLightProbeTexture);
  this->_vptr_IToolObject = off_3FB7BF0;  // vptr: IToolObject
  CBaseEntity::~CBaseEntity(this);
}


// CEnvLightProbeVolume::~CEnvLightProbeVolume  (line 254, @0x0000000001ee0c80, libserver.so)
// calls: CEnvLightProbeVolume::~CEnvLightProbeVolume, CBaseEntity::operator delete
void __fastcall CEnvLightProbeVolume::~CEnvLightProbeVolume(CEnvLightProbeVolume *const this)
{
  CEnvLightProbeVolume::~CEnvLightProbeVolume(this);
  CBaseEntity::operator delete(this);
}


// CEnvLightProbeVolume::Spawn  (line 261, @0x0000000001ecec60, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn
void __fastcall CEnvLightProbeVolume::Spawn(CEnvLightProbeVolume *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  v3 = !this->m_bStartDisabled.m_Value;
  if ( v3 != this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = v3;
  }
}


// CEnvLightProbeVolume::Activate  (line 270, @0x0000000001ee3200, libserver.so)  // inlines: operator=
// calls: CBaseEntity::Activate, CStrongHandle<InfoForResourceTypeCTextureBase>::Init
void __fastcall CEnvLightProbeVolume::Activate(CEnvLightProbeVolume *const this, ActivateType_t activateType)
{
  UtlSymLargeId_t m_Id; // rax
  vec_t y; // xmm0_4
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4

  CBaseEntity::Activate(this, activateType);
  CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
    &this->CBaseLightProbeVolume::m_hLightProbeTexture,
    &this->m_hLightProbeTexture.m_Value);
  m_Id = this->m_LightGroups.m_Value.u.m_Id;
  this->CBaseLightProbeVolume::m_vBoxMins.x = this->m_vBoxMins.m_Value.x;
  y = this->m_vBoxMins.m_Value.y;
  this->CBaseLightProbeVolume::m_LightGroups.u.m_Id = m_Id;
  LOBYTE(m_Id) = this->m_bStatic.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMins.y = y;
  this->CBaseLightProbeVolume::m_vBoxMins.z = this->m_vBoxMins.m_Value.z;
  x = this->m_vBoxMaxs.m_Value.x;
  this->CBaseLightProbeVolume::m_bStatic = m_Id;
  LODWORD(m_Id) = this->m_nHandshake.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMaxs.x = x;
  this->CBaseLightProbeVolume::m_vBoxMaxs.y = this->m_vBoxMaxs.m_Value.y;
  z = this->m_vBoxMaxs.m_Value.z;
  this->CBaseLightProbeVolume::m_nHandshake = m_Id;
  LOBYTE(m_Id) = this->m_bStartDisabled.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMaxs.z = z;
  this->CBaseLightProbeVolume::m_bStartDisabled = m_Id;
}


// CEnvLightProbeVolume::Input_SetLightGroups  (line 335, @0x0000000001ed0f00, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, NetworkStateChanged, Set, TempString, ToString, operator=, operator=<CUtlSymbolLarge>
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_1ED0F34, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvLightProbeVolume::Input_SetLightGroups(
        CEnvLightProbeVolume *const this,
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
    (*(this->_vptr_IHandleEntity + 22))(this, 880, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LightGroups.m_Value.u.m_Id = v11;
  }
}


// CEnvLightProbeVolume::Input_Enable  (line 344, @0x0000000001ece9f0, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvLightProbeVolume::Input_Enable(
        CEnvLightProbeVolume *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 1;
  }
}


// CEnvLightProbeVolume::Input_Disable  (line 353, @0x0000000001eceab0, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvLightProbeVolume::Input_Disable(
        CEnvLightProbeVolume *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 0;
  }
}


