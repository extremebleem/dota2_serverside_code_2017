// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/env_combined_light_probe_volume.cpp:19
class CEnvCombinedLightProbeVolume : public CBaseEntity, public CBaseCubemap, public CBaseLightProbeVolume {
	class NetworkVar_m_hCubemapTexture {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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
	typedef CEnvCombinedLightProbeVolume ThisClass;

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
	CEnvCombinedLightProbeVolume(CEnvCombinedLightProbeVolume &);
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
	CEnvCombinedLightProbeVolume();
	virtual ~CEnvCombinedLightProbeVolume();

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
	// sizeof = 1024
};

// src/game/shared/env_combined_light_probe_volume.cpp:65
class C_CEnvCombinedLightProbeVolume_MapInstall {
	C_CEnvCombinedLightProbeVolume_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvCombinedLightProbeVolume::GetEntityClass  (line 21, @0x0000000001eea690, libserver.so)
CEntityClass *__cdecl CEnvCombinedLightProbeVolume::GetEntityClass()
{
  return g_pEntityCEnvCombinedLightProbeVolumeClass;
}


// CEnvCombinedLightProbeVolume::Schema_DynamicBinding  (line 21, @0x0000000001eea6a0, libserver.so)
// globals: CEnvCombinedLightProbeVolume::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCombinedLightProbeVolume::Schema_DynamicBinding(
        const CEnvCombinedLightProbeVolume *const this)
{
  return CEnvCombinedLightProbeVolume::s_pSchemaBinding;
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x0000000001eea6b0, libserver.so)
// globals: CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x0000000001eea6c0, libserver.so)  // inlines: Destruct<CEnvCombinedLightProbeVolume>
void __fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::DestructInstance(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x0000000001eea6e0, libserver.so)
void __fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::FreeInstance(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x0000000001eea700, libserver.so)
bool __fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::CanAllocate(
        const CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x0000000001eea710, libserver.so)
// globals: CEnvCombinedLightProbeVolume::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  return CEnvCombinedLightProbeVolume::s_pSchemaBinding;
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x0000000001eebea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::AllocateInstance(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1024);
  memset(v1, 0, 0x400u);
  return v1;
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001eedef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x0000000001eedf10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x0000000001ef2ce0, libserver.so)  // inlines: Construct<CEnvCombinedLightProbeVolume>
// calls: CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume
CEntityInstance *__fastcall CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance(
        CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume(p);
  return p;
}


// CEnvCombinedLightProbeVolume::GetEntityClassInternal  (line 21, @0x0000000001ef8020, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEnvCombinedLightProbeVolume::SetupEntClassInputs, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "env_combined_light_probe_volume", "CEnvCombinedLightProbeVolume"
// globals: `guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass, CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo, CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo
CEntityClass *__cdecl CEnvCombinedLightProbeVolume::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass) != 0 )
  {
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_designerName.u.m_Id = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass._vptr_CEntityClass = off_3F79390;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_ComponentOffsets.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_AllHelpers.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classInputs.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classOutputs.m_Size = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_requiredEHandle.m_Index = -1;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_hNetworkSerializer = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pBaseClassInfo = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pClassInfo = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_flags = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_nAllHelpersFlags = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pScriptClassDesc = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pInputs = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_nInputCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pOutputs = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_nOutputCount = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pGameClass = 0;
    CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass._vptr_CEntityClass = off_3FB7C50;
    __cxa_guard_release(&`guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass);
    __cxa_atexit(
      CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvCombinedLightProbeVolumeClass != 0 )
    return &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass;
  if ( `guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo,
      "CEnvCombinedLightProbeVolume",
      "env_combined_light_probe_volume",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo);
  }
  CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pClassInfo = &CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo;
  CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pBaseClassInfo = CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvCombinedLightProbeVolumeClass = &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass;
  CEnvCombinedLightProbeVolume::GetEntityClassInfo(void)::g_EntityCEnvCombinedLightProbeVolumeClassInfo.m_pClass = &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass;
  CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  CEnvCombinedLightProbeVolume::SetupEntClassInputs(g_pEntityCEnvCombinedLightProbeVolumeClass);
  g_pEntityCEnvCombinedLightProbeVolumeClass->m_pComponentOverrides = 0;
  return &CEnvCombinedLightProbeVolume::GetEntityClassInternal(void)::g_EntityCEnvCombinedLightProbeVolumeClass;
}


// CEnvCombinedLightProbeVolume::UpdateTransmitState  (line 33, @0x0000000001eecb30, libserver.so)  // inlines: SetTransmitState
// calls: CNetworkTransmitComponent::SetTransmitState
int __fastcall CEnvCombinedLightProbeVolume::UpdateTransmitState(CEnvCombinedLightProbeVolume *const this)
{
  return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


// CEnvCombinedLightProbeVolume::YouForgotToImplementOrDeclareServerClass  (line 65, @0x0000000001ecbef0, libserver.so)
int __fastcall CEnvCombinedLightProbeVolume::YouForgotToImplementOrDeclareServerClass(
        CEnvCombinedLightProbeVolume *const this)
{
  return 0;
}


// CEnvCombinedLightProbeVolume::GetServerClass  (line 65, @0x0000000001ed1260, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvCombinedLightProbeVolume::GetServerClass(CEnvCombinedLightProbeVolume *const this)
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


// CEnvCombinedLightProbeVolume::GetDataDescMap  (line 67, @0x0000000001ecbf00, libserver.so)
// globals: CEnvCombinedLightProbeVolume::m_DataMap
datamap_t *__fastcall CEnvCombinedLightProbeVolume::GetDataDescMap(CEnvCombinedLightProbeVolume *const this)
{
  return &CEnvCombinedLightProbeVolume::m_DataMap;
}


// CEnvCombinedLightProbeVolume::AddDatadescMetadataKeys  (line 67, @0x0000000001ed8de0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvCombinedLightProbeVolume::GetEntityClass(void)
void __fastcall CEnvCombinedLightProbeVolume::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvCombinedLightProbeVolume::GetEntityClass);
}


// CEnvCombinedLightProbeVolume::GetBaseMap  (line 67, @0x0000000001ed8e00, libserver.so)
datamap_t *__cdecl CEnvCombinedLightProbeVolume::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CEnvCombinedLightProbeVolume>  (line 67, @0x0000000001ed8e10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "CEnvCombinedLightProbeVolume"
// globals: `guard variable for'DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder, CEnvCombinedLightProbeVolume::GetEntityClass(void), CEnvCombinedLightProbeVolume::m_DataMap, DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_pszBase = "CEnvCombinedLightProbeVolume";
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder.m_nLenBase = 28;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::nameHolder,
      &_dso_handle);
  }
  CEnvCombinedLightProbeVolume::m_DataMap.dataNumFields = 11;
  CEnvCombinedLightProbeVolume::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CEnvCombinedLightProbeVolume::m_DataMap.dataDesc = &DataMapInit<CEnvCombinedLightProbeVolume>(CEnvCombinedLightProbeVolume *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvCombinedLightProbeVolume::m_DataMap, CEnvCombinedLightProbeVolume::GetEntityClass);
  return &CEnvCombinedLightProbeVolume::m_DataMap;
}


// CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume  (line 82, @0x0000000001ee0950, libserver.so)  // inlines: CBaseCubemap, CBaseLightProbeVolume, CNetworkVarBase, CStrongHandle, CUtlSymbolLarge, EnsureValidValue, EnsureValidValue<bool>, EnsureValidValue<int>, IToolObject, NetworkStateChanged, Zero, ~CBaseCubemap, ~CBaseLightProbeVolume, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CEnvCombinedLightProbeVolume::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvCombinedLightProbeVolume::CEnvCombinedLightProbeVolume(CEnvCombinedLightProbeVolume *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_3FB7CD0;
  this->CBaseCubemap::IToolObject::_vptr_IToolObject = off_3FB8358;
  this->CBaseCubemap::IToolObject::m_pContext = 0;
  this->CBaseCubemap::m_hCubemapTexture.m_pBinding = 0;
  this->CBaseCubemap::m_LightGroups.u.m_Id = 0;
  this->m_nCubeMapIndex = -1;
  this->CBaseLightProbeVolume::IToolObject::m_pContext = 0;
  this->CBaseLightProbeVolume::m_hLightProbeTexture.m_pBinding = 0;
  this->CBaseLightProbeVolume::m_LightGroups.u.m_Id = 0;
  this->CBaseLightProbeVolume::IToolObject::_vptr_IToolObject = off_3FB83B0;
  this->m_hCubemapTexture.m_Value.m_pBinding = 0;
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
  this->m_pEnvMap = 0;
  this->m_pLightProbeVolume = 0;
  this->m_bEnabled.m_Value = 1;
  CBaseEntity::NetworkStateChanged(this, 0x3F8u, -1, -1);
}


// CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume  (line 91, @0x0000000001ee0b00, libserver.so)  // inlines: ~CBaseCubemap, ~CBaseLightProbeVolume, ~CNetworkVarBase, ~CStrongHandle, ~IToolObject
// calls: CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown, CBaseEntity::~CBaseEntity
// callers: CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume
void __fastcall CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume(CEnvCombinedLightProbeVolume *const this)
{
  this->_vptr_IHandleEntity = &off_3FB7CD0;
  this->CBaseCubemap::IToolObject::_vptr_IToolObject = off_3FB8358;
  this->CBaseLightProbeVolume::IToolObject::_vptr_IToolObject = off_3FB83B0;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->m_hLightProbeTexture.m_Value);
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->m_hCubemapTexture.m_Value);
  this->CBaseLightProbeVolume::IToolObject::_vptr_IToolObject = off_3FB9790;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->CBaseLightProbeVolume::m_hLightProbeTexture);
  this->CBaseLightProbeVolume::IToolObject::_vptr_IToolObject = off_3FB7BF0;
  this->CBaseCubemap::IToolObject::_vptr_IToolObject = off_3FB8670;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Shutdown(&this->CBaseCubemap::m_hCubemapTexture);
  this->CBaseCubemap::IToolObject::_vptr_IToolObject = off_3FB7BF0;
  CBaseEntity::~CBaseEntity(this);
}


// CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume  (line 91, @0x0000000001ee0bc0, libserver.so)
// calls: CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume, CBaseEntity::operator delete
void __fastcall CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume(CEnvCombinedLightProbeVolume *const this)
{
  CEnvCombinedLightProbeVolume::~CEnvCombinedLightProbeVolume(this);
  CBaseEntity::operator delete(this);
}


// CEnvCombinedLightProbeVolume::Spawn  (line 99, @0x0000000001eceb70, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CBaseEntity::Spawn
void __fastcall CEnvCombinedLightProbeVolume::Spawn(
        CEnvCombinedLightProbeVolume *const this,
        const CEntityKeyValues *pKeyValues)
{
  bool v3; // r12

  CBaseEntity::Spawn(this, pKeyValues);
  v3 = !this->CBaseCubemap::m_bStartDisabled;
  if ( v3 != this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = v3;
  }
}


// CEnvCombinedLightProbeVolume::Activate  (line 108, @0x0000000001ee2f50, libserver.so)  // inlines: operator=
// calls: CBaseEntity::Activate, CStrongHandle<InfoForResourceTypeCTextureBase>::Init
void __fastcall CEnvCombinedLightProbeVolume::Activate(
        CEnvCombinedLightProbeVolume *const this,
        ActivateType_t activateType)
{
  UtlSymLargeId_t m_Id; // rax
  vec_t y; // xmm0_4
  vec_t x; // xmm0_4
  vec_t z; // xmm0_4
  UtlSymLargeId_t v7; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm0_4
  vec_t v10; // xmm0_4

  CBaseEntity::Activate(this, activateType);
  CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
    &this->CBaseCubemap::m_hCubemapTexture,
    &this->m_hCubemapTexture.m_Value);
  m_Id = this->m_LightGroups.m_Value.u.m_Id;
  this->m_nProjectionMode = 1;
  this->m_vBoxProjectMins.x = this->m_vBoxMins.m_Value.x;
  y = this->m_vBoxMins.m_Value.y;
  this->CBaseCubemap::m_LightGroups.u.m_Id = m_Id;
  LOBYTE(m_Id) = this->m_bStatic.m_Value;
  this->m_vBoxProjectMins.y = y;
  this->m_vBoxProjectMins.z = this->m_vBoxMins.m_Value.z;
  x = this->m_vBoxMaxs.m_Value.x;
  this->CBaseCubemap::m_bStatic = m_Id;
  LODWORD(m_Id) = this->m_nHandshake.m_Value;
  this->m_vBoxProjectMaxs.x = x;
  this->m_vBoxProjectMaxs.y = this->m_vBoxMaxs.m_Value.y;
  z = this->m_vBoxMaxs.m_Value.z;
  this->CBaseCubemap::m_nHandshake = m_Id;
  LOBYTE(m_Id) = this->m_bStartDisabled.m_Value;
  this->m_vBoxProjectMaxs.z = z;
  this->CBaseCubemap::m_bStartDisabled = m_Id;
  CStrongHandle<InfoForResourceTypeCTextureBase>::Init(
    &this->CBaseLightProbeVolume::m_hLightProbeTexture,
    &this->m_hLightProbeTexture.m_Value);
  v7 = this->m_LightGroups.m_Value.u.m_Id;
  this->CBaseLightProbeVolume::m_vBoxMins.x = this->m_vBoxMins.m_Value.x;
  v8 = this->m_vBoxMins.m_Value.y;
  this->CBaseLightProbeVolume::m_LightGroups.u.m_Id = v7;
  LOBYTE(v7) = this->m_bStatic.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMins.y = v8;
  this->CBaseLightProbeVolume::m_vBoxMins.z = this->m_vBoxMins.m_Value.z;
  v9 = this->m_vBoxMaxs.m_Value.x;
  this->CBaseLightProbeVolume::m_bStatic = v7;
  LODWORD(v7) = this->m_nHandshake.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMaxs.x = v9;
  this->CBaseLightProbeVolume::m_vBoxMaxs.y = this->m_vBoxMaxs.m_Value.y;
  v10 = this->m_vBoxMaxs.m_Value.z;
  this->CBaseLightProbeVolume::m_nHandshake = v7;
  LOBYTE(v7) = this->m_bStartDisabled.m_Value;
  this->CBaseLightProbeVolume::m_vBoxMaxs.z = v10;
  this->CBaseLightProbeVolume::m_bStartDisabled = v7;
}


// CEnvCombinedLightProbeVolume::Input_SetLightGroups  (line 192, @0x0000000001ed0980, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: AllocPooledString, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_1ED09B2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CEnvCombinedLightProbeVolume::Input_SetLightGroups(
        CEnvCombinedLightProbeVolume *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // ax
  const char *m_uint64; // rsi
  const char *v8; // rax
  const char *v9; // rcx
  double m_float; // xmm0_8
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
        goto LABEL_8;
      case 1:
        m_float = value->m_float;
        goto LABEL_19;
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
        goto LABEL_11;
      case 6:
        v9 = "true";
        if ( value->m_char == 0 )
          v9 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v9);
        goto LABEL_15;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_11;
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
        goto LABEL_15;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_15:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_11:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v8 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  AllocPooledString(m_uint64);
  this->CBaseLightProbeVolume::m_LightGroups.u.m_Id = v11;
  this->CBaseCubemap::m_LightGroups.u.m_Id = v11;
}


// CEnvCombinedLightProbeVolume::Input_Enable  (line 201, @0x0000000001ecea30, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvCombinedLightProbeVolume::Input_Enable(
        CEnvCombinedLightProbeVolume *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 1;
  }
}


// CEnvCombinedLightProbeVolume::Input_Disable  (line 210, @0x0000000001ecea70, libserver.so)  // inlines: NetworkStateChanged, Set
void __fastcall CEnvCombinedLightProbeVolume::Input_Disable(
        CEnvCombinedLightProbeVolume *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1016, 0xFFFFFFFFLL, 0xFFFFFFFFLL, value);
    this->m_bEnabled.m_Value = 0;
  }
}


