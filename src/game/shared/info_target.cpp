// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/info_target.cpp:23
class CInfoTarget : public CPointEntity {
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
	CInfoTarget(CInfoTarget &);
	CInfoTarget(CInfoTarget &);
	CInfoTarget();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual ~CInfoTarget();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 776
};

// src/game/shared/info_target.cpp:62
class CInfoParticleTarget : public CPointEntity {
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
	CInfoParticleTarget(CInfoParticleTarget &);
	CInfoParticleTarget(CInfoParticleTarget &);
	CInfoParticleTarget();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	virtual ~CInfoParticleTarget();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoTarget::~CInfoTarget  (line 23, @0x0000000001eec700, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoTarget::~CInfoTarget(CInfoTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoTarget::~CInfoTarget  (line 23, @0x0000000001eec720, libserver.so)  // inlines: ~CInfoTarget, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoTarget::~CInfoTarget(CInfoTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoTarget::Schema_DynamicBinding  (line 25, @0x0000000001eeab80, libserver.so)
// globals: CInfoTarget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoTarget::Schema_DynamicBinding(const CInfoTarget *const this)
{
  return CInfoTarget::s_pSchemaBinding;
}


// CInfoTarget::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x0000000001eeab90, libserver.so)
// globals: CInfoTarget::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoTarget::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoTarget::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoTarget::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x0000000001eeaba0, libserver.so)  // inlines: Destruct<CInfoTarget>
void __fastcall CInfoTarget::CEntityInstanceEntityClass::DestructInstance(
        CInfoTarget::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoTarget::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x0000000001eeabc0, libserver.so)
void __fastcall CInfoTarget::CEntityInstanceEntityClass::FreeInstance(
        CInfoTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoTarget::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x0000000001eeabe0, libserver.so)
bool __fastcall CInfoTarget::CEntityInstanceEntityClass::CanAllocate(
        const CInfoTarget::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x0000000001eeabf0, libserver.so)
// globals: CInfoTarget::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoTarget::s_pSchemaBinding;
}


// CInfoTarget::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x0000000001eec0e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoTarget::CEntityInstanceEntityClass::AllocateInstance(
        CInfoTarget::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoTarget::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x0000000001eec3c0, libserver.so)  // inlines: CInfoTarget, CPointEntity, Construct<CInfoTarget>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoTarget::CEntityInstanceEntityClass::ConstructInstance(
        CInfoTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FBD530;
  }
  return p;
}


// CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001eedae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x0000000001eedb00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoTarget::GetEntityClassInternal  (line 25, @0x0000000001ef51c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "info_target", "CInfoTarget"
// globals: `guard variable for'CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass, CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo, CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo
CEntityClass *__cdecl CInfoTarget::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass) != 0 )
  {
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_designerName.u.m_Id = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass._vptr_CEntityClass = off_3F79390;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_ComponentOffsets.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_AllHelpers.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classInputs.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classOutputs.m_Size = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_requiredEHandle.m_Index = -1;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_hNetworkSerializer = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pBaseClassInfo = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pClassInfo = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_flags = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_nAllHelpersFlags = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pScriptClassDesc = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pInputs = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_nInputCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pOutputs = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_nOutputCount = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pGameClass = 0;
    CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass._vptr_CEntityClass = off_3FBD4B0;
    __cxa_guard_release(&`guard variable for'CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass);
    __cxa_atexit(
      CInfoTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoTargetClass != 0 )
    return &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass;
  if ( `guard variable for'CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo,
      "CInfoTarget",
      "info_target",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo);
  }
  CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pClassInfo = &CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo;
  CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pBaseClassInfo = CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoTargetClass = &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass;
  CInfoTarget::GetEntityClassInfo(void)::g_EntityCInfoTargetClassInfo.m_pClass = &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass;
  CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoTargetClass->m_pComponentOverrides = 0;
  return &CInfoTarget::GetEntityClassInternal(void)::g_EntityCInfoTargetClass;
}


// CInfoTarget::Spawn  (line 36, @0x0000000001eccad0, libserver.so)  // inlines: SetEFlags
// calls: CPointEntity::Spawn, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CInfoTarget::Spawn(CInfoTarget *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    this->m_iEFlags = 128;
    CBaseEntity::DispatchUpdateTransmitState(this);
  }
}


// CInfoTarget::UpdateTransmitState  (line 50, @0x0000000001ecd1d0, libserver.so)  // inlines: SetTransmitState
// calls: CBaseEntity::UpdateTransmitState, CNetworkTransmitComponent::SetTransmitState
int __fastcall CInfoTarget::UpdateTransmitState(CInfoTarget *const this)
{
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
    return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
  else
    return CBaseEntity::UpdateTransmitState(this);
}


// CInfoParticleTarget::~CInfoParticleTarget  (line 62, @0x0000000001eec750, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoParticleTarget::~CInfoParticleTarget(CInfoParticleTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoParticleTarget::~CInfoParticleTarget  (line 62, @0x0000000001eec770, libserver.so)  // inlines: ~CInfoParticleTarget, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoParticleTarget::~CInfoParticleTarget(CInfoParticleTarget *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoParticleTarget::Schema_DynamicBinding  (line 64, @0x0000000001eeac00, libserver.so)
// globals: CInfoParticleTarget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoParticleTarget::Schema_DynamicBinding(
        const CInfoParticleTarget *const this)
{
  return CInfoParticleTarget::s_pSchemaBinding;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 64, @0x0000000001eeac10, libserver.so)
// globals: CInfoParticleTarget::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoParticleTarget::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoParticleTarget::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::DestructInstance  (line 64, @0x0000000001eeac20, libserver.so)  // inlines: Destruct<CInfoParticleTarget>
void __fastcall CInfoParticleTarget::CEntityInstanceEntityClass::DestructInstance(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoParticleTarget::CEntityInstanceEntityClass::FreeInstance  (line 64, @0x0000000001eeac40, libserver.so)
void __fastcall CInfoParticleTarget::CEntityInstanceEntityClass::FreeInstance(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoParticleTarget::CEntityInstanceEntityClass::CanAllocate  (line 64, @0x0000000001eeac60, libserver.so)
bool __fastcall CInfoParticleTarget::CEntityInstanceEntityClass::CanAllocate(
        const CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 64, @0x0000000001eeac70, libserver.so)
// globals: CInfoParticleTarget::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoParticleTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  return CInfoParticleTarget::s_pSchemaBinding;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::AllocateInstance  (line 64, @0x0000000001eec120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoParticleTarget::CEntityInstanceEntityClass::AllocateInstance(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::ConstructInstance  (line 64, @0x0000000001eec3f0, libserver.so)  // inlines: CInfoParticleTarget, CPointEntity, Construct<CInfoParticleTarget>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoParticleTarget::CEntityInstanceEntityClass::ConstructInstance(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_3FBDC50;
  }
  return p;
}


// CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000001eedb30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 64, @0x0000000001eedb50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoParticleTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoParticleTarget::GetEntityClassInternal  (line 64, @0x0000000001ef7630, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_entities_01.cpp
// strings: "info_particle_target", "CInfoParticleTarget"
// globals: `guard variable for'CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass, CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo, CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo
CEntityClass *__cdecl CInfoParticleTarget::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass) != 0 )
  {
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_designerName.u.m_Id = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass._vptr_CEntityClass = off_3F79390;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_ComponentOffsets.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_AllHelpers.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_atomicFields,
      4);
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classInputs.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classOutputs.m_Size = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_requiredEHandle.m_Index = -1;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_hNetworkSerializer = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pBaseClassInfo = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pClassInfo = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_flags = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_nAllHelpersFlags = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pScriptClassDesc = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pInputs = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_nInputCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pOutputs = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_nOutputCount = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pGameClass = 0;
    CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass._vptr_CEntityClass = off_3FBDBD0;
    __cxa_guard_release(&`guard variable for'CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass);
    __cxa_atexit(
      CInfoParticleTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoParticleTargetClass != 0 )
    return &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass;
  if ( `guard variable for'CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo,
      "CInfoParticleTarget",
      "info_particle_target",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo);
  }
  CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pClassInfo = &CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo;
  CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pBaseClassInfo = CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoParticleTargetClass = &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass;
  CInfoParticleTarget::GetEntityClassInfo(void)::g_EntityCInfoParticleTargetClassInfo.m_pClass = &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass;
  CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoParticleTargetClass->m_pComponentOverrides = 0;
  return &CInfoParticleTarget::GetEntityClassInternal(void)::g_EntityCInfoParticleTargetClass;
}


// CInfoParticleTarget::Spawn  (line 73, @0x0000000001eccaa0, libserver.so)  // inlines: SetEFlags
// calls: CPointEntity::Spawn, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CInfoParticleTarget::Spawn(CInfoParticleTarget *const this, const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  this->m_iEFlags = 128;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CInfoParticleTarget::UpdateTransmitState  (line 81, @0x0000000001ecd180, libserver.so)  // inlines: GetMoveParent, SetTransmitState
// calls: CGameSceneNode::GetOwnerEntity, CBaseEntity::UpdateTransmitState, CNetworkTransmitComponent::SetTransmitState
int __fastcall CInfoParticleTarget::UpdateTransmitState(CInfoParticleTarget *const this)
{
  CGameSceneNode *m_pParent; // rdi

  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 && CGameSceneNode::GetOwnerEntity(m_pParent) != 0 )
    return CBaseEntity::UpdateTransmitState(this);
  else
    return CNetworkTransmitComponent::SetTransmitState(&this->m_NetworkTransmitComponent, 4);
}


