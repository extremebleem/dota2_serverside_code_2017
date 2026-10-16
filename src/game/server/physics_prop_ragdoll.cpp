// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_prop_ragdoll.cpp:55
class CRagdollPropAlias_physics_prop_ragdoll : public CRagdollProp {
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
	CRagdollPropAlias_physics_prop_ragdoll(CRagdollPropAlias_physics_prop_ragdoll &);
	CRagdollPropAlias_physics_prop_ragdoll(CRagdollPropAlias_physics_prop_ragdoll &);
	CRagdollPropAlias_physics_prop_ragdoll();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CRagdollPropAlias_physics_prop_ragdoll();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 4264
};

// src/game/server/physics_prop_ragdoll.cpp:57
class C_CRagdollProp_MapInstall {
	C_CRagdollProp_MapInstall();

	// sizeof = 1
};

// src/game/server/physics_prop_ragdoll.cpp:1185
class CRagdollPropAttached : public CRagdollProp {
	class NetworkVar_m_boneIndexAttached {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_ragdollAttachedObjectIndex {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_attachmentPointBoneSpace {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_attachmentPointRagdollSpace {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bShouldDetach;  // +0x10c8

	HPhysicsJoint m_hAttachConstraint;  // +0x10d0
	bool m_bShouldDeleteAttachedActivationRecord;  // +0x10d8

	typedef CRagdollProp BaseClass;
	typedef CRagdollPropAttached ThisClass;

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
	CRagdollPropAttached(CRagdollPropAttached &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CRagdollPropAttached();
	virtual ~CRagdollPropAttached();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	void DetachOnNextUpdate();
	virtual void VPhysicsUpdate(IPhysicsObject *);
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual bool HasActivationRecord();
	void Detach();
	void ApplyAttachedActivationRecord(AttachedRagdollActivationRecord_t *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[52] VPhysicsUpdate
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[256] HasActivationRecord
	// sizeof = 4328
};

// src/game/server/physics_prop_ragdoll.cpp:1230
class C_CRagdollPropAttached_MapInstall {
	C_CRagdollPropAttached_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollPropAlias_physics_prop_ragdoll::Schema_DynamicBinding  (line 55, @0x0000000002304060, libserver.so)
// globals: CRagdollPropAlias_physics_prop_ragdoll::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollPropAlias_physics_prop_ragdoll::Schema_DynamicBinding(
        const CRagdollPropAlias_physics_prop_ragdoll *const this)
{
  return CRagdollPropAlias_physics_prop_ragdoll::s_pSchemaBinding;
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000002304070, libserver.so)
// globals: CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  return CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000002304080, libserver.so)  // inlines: Destruct<CRagdollPropAlias_physics_prop_ragdoll>
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::DestructInstance(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x00000000023040a0, libserver.so)
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::FreeInstance(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x00000000023040c0, libserver.so)
bool __fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x00000000023040d0, libserver.so)
// globals: CRagdollPropAlias_physics_prop_ragdoll::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  return CRagdollPropAlias_physics_prop_ragdoll::s_pSchemaBinding;
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000002305d20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4264);
  memset(v1, 0, 0x10A8u);
  return v1;
}


// CRagdollPropAlias_physics_prop_ragdoll::~CRagdollPropAlias_physics_prop_ragdoll  (line 55, @0x0000000002306ff0, libserver.so)
// calls: CRagdollProp::~CRagdollProp
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::~CRagdollPropAlias_physics_prop_ragdoll(
        CRagdollPropAlias_physics_prop_ragdoll *const this)
{
  this->_vptr_IHandleEntity = &off_407FE10;
  this->_vptr_IPlayerPickupVPhysics = &off_4080628;
  CRagdollProp::~CRagdollProp(this);
}


// CRagdollPropAlias_physics_prop_ragdoll::~CRagdollPropAlias_physics_prop_ragdoll  (line 55, @0x0000000002307020, libserver.so)  // inlines: ~CRagdollPropAlias_physics_prop_ragdoll
// calls: CRagdollProp::~CRagdollProp, CBaseEntity::operator delete
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::~CRagdollPropAlias_physics_prop_ragdoll(
        CRagdollPropAlias_physics_prop_ragdoll *const this)
{
  this->_vptr_IHandleEntity = &off_407FE10;
  this->_vptr_IPlayerPickupVPhysics = &off_4080628;
  CRagdollProp::~CRagdollProp(this);
  CBaseEntity::operator delete(this);
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002309260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002309280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x000000000230ec30, libserver.so)  // inlines: CRagdollPropAlias_physics_prop_ragdoll, Construct<CRagdollPropAlias_physics_prop_ragdoll>
// calls: CRagdollProp::CRagdollProp
CEntityInstance *__fastcall CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CRagdollProp::CRagdollProp(p);
    *p = &off_407FE10;
    *(p + 152) = &off_4080628;
  }
  return p;
}


// CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal  (line 55, @0x0000000002314b70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CRagdollProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "physics_prop_ragdoll", "CRagdollPropAlias_physics_prop_ragdoll"
// globals: `guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass, CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo, CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo
CEntityClass *__cdecl CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass) != 0 )
  {
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_designerName.u.m_Id = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass._vptr_CEntityClass = off_3F79390;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_ComponentOffsets.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_AllHelpers.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classInputs.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classOutputs.m_Size = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_requiredEHandle.m_Index = -1;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_hNetworkSerializer = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pBaseClassInfo = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pClassInfo = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_flags = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_nAllHelpersFlags = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pScriptClassDesc = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pInputs = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_nInputCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pOutputs = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_nOutputCount = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pGameClass = 0;
    CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass._vptr_CEntityClass = off_407FD90;
    __cxa_guard_release(&`guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass);
    __cxa_atexit(
      CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollPropAlias_physics_prop_ragdollClass != 0 )
    return &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass;
  if ( `guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo) != 0 )
  {
    EntityClassInfo = CRagdollProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo,
      "CRagdollPropAlias_physics_prop_ragdoll",
      "physics_prop_ragdoll",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo);
  }
  CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pClassInfo = &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo;
  CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pBaseClassInfo = CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollPropAlias_physics_prop_ragdollClass = &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass;
  CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInfo(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClassInfo.m_pClass = &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass;
  CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCRagdollPropAlias_physics_prop_ragdollClass->m_pComponentOverrides = 0;
  return &CRagdollPropAlias_physics_prop_ragdoll::GetEntityClassInternal(void)::g_EntityCRagdollPropAlias_physics_prop_ragdollClass;
}


// CRagdollProp::YouForgotToImplementOrDeclareServerClass  (line 57, @0x00000000022b7a30, libserver.so)
int __fastcall CRagdollProp::YouForgotToImplementOrDeclareServerClass(CRagdollProp *const this)
{
  return 0;
}


// CRagdollProp::GetServerClass  (line 57, @0x00000000022c7f60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CRagdollProp::GetServerClass(CRagdollProp *const this)
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


// CRagdollProp::GetDataDescMap  (line 65, @0x00000000022b7a40, libserver.so)
// globals: CRagdollProp::m_DataMap
datamap_t *__fastcall CRagdollProp::GetDataDescMap(CRagdollProp *const this)
{
  return &CRagdollProp::m_DataMap;
}


// CRagdollProp::AddDatadescMetadataKeys  (line 65, @0x00000000022da210, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRagdollProp::GetEntityClass(void)
void __fastcall CRagdollProp::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRagdollProp::GetEntityClass);
}


// CRagdollProp::GetBaseMap  (line 65, @0x00000000022da230, libserver.so)
datamap_t *__cdecl CRagdollProp::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CRagdollProp>  (line 65, @0x00000000022f4250, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CRagdollProp"
// globals: `guard variable for'DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder, `guard variable for'DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc, CRagdollProp::GetEntityClass(void), CRagdollProp::m_DataMap, DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdollProp>(CRagdollProp *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax
  char *v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  char **v9; // rax
  char *v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  char **v13; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_pszBase = "CRagdollProp";
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder,
      &_dso_handle);
  }
  CRagdollProp::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc) != 0 )
  {
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[18].fieldSize = 32;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[19].fieldSize = 32;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[2].fieldSize = 32;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[3].fieldSize = 32;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[4].fieldSize = 32;
    v2 = operator new[](DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v2, DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_pszBase), "SetDebrisThink");
    m_Size = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size == DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[26].fieldName = v2;
    v6 = operator new[](DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_nLenBase + 16);
    strcpy(stpcpy(v6, DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_pszBase), "ClearFlagsThink");
    v7 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size == DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[27].fieldName = v6;
    v10 = operator new[](DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_nLenBase + 13);
    strcpy(stpcpy(v10, DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_pszBase), "FadeOutThink");
    v11 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size == DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CRagdollProp>(CRagdollProp *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[28].fieldName = v10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc);
  }
  CRagdollProp::m_DataMap.dataNumFields = 94;
  CRagdollProp::m_DataMap.dataDesc = &DataMapInit<CRagdollProp>(CRagdollProp *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRagdollProp::m_DataMap, CRagdollProp::GetEntityClass);
  return &CRagdollProp::m_DataMap;
}


// CRagdollProp::DisableAutoFade  (line 147, @0x00000000022da240, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, operator=<float>
void __fastcall CRagdollProp::DisableAutoFade(CRagdollProp *const this)
{
  if ( this->m_flFadeScale.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = 0.0;
  }
  this->m_flDefaultFadeScale = 0.0;
}


// CRagdollProp::Spawn  (line 154, @0x00000000022c6d90, libserver.so)  // inlines: AddEFlags, AssignTo, AssignTo<long long unsigned int>, Base, DisableAutoFade, DisableMotion, Element, FindKeyHash, GetSkeletonInstance, GetValue, GetValue<bool>, GetValue<long long unsigned int>, HasSpawnFlags, NetworkStateChanged, Set, SetGlobalFadeScale, V_memcpy, _V_strcmp, memcpy, operator=, operator=<float>, operator[]
// calls: CBaseAnimating::Spawn, CBaseEntity::GetModel, CCollisionProperty::SetupPhysicsFromUnscaledModel, CCollisionProperty::EnableSelfCollisions, CBaseAnimating::GetModelPtr, CModel::flags, operator new, CBaseEntity::EntityToWorldTransform, CSkeletonInstance::GetAnimationStateWorldSpaceTransforms, memcpy, CBaseEntity::PhysicsEnableMotion, CBaseEntity::AddEffects (16 total)
// callers: CRagdollPropAttached::Spawn
// strings: "uint64", "No free conversion of %s variant to %s right now\n", "false", "No conversion from %s to bool now\n", "true", "Invalid conversion : CString '%s' to bool\n"
// globals: jpt_22C6E69, CEntityKeyValues::sm_EmptyVariant, jpt_22C729F
void __fastcall CRagdollProp::Spawn(CRagdollProp *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float v11; // r14d
  int v12; // eax
  const CModel *ModelPtr; // rax
  unsigned int m_Value; // eax
  RagdollActivationRecord_t *v15; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  RagdollActivationRecord_t *m_pActivationRecord; // rax
  matrix3x4_t *m_PrevBones; // r13
  matrix3x4_t *v21; // r12
  const CSkeletonInstance *v22; // rax
  const char *v23; // rax
  unsigned __int64 m_int; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v25; // si
  __int64 v26; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v27; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v28; // rdx
  CEntityVariant *v29; // rdx
  int16 v30; // ax
  char m_char; // al
  CBaseAnimating *v32; // rsi
  const char *v33; // rax
  double m_float64; // xmm0_8
  float m_float; // xmm0_4
  float m_flDefaultFadeScale; // [rsp+Ch] [rbp-34h]
  _QWORD v37[6]; // [rsp+10h] [rbp-30h] BYREF

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_18:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type != 0 )
      goto LABEL_12;
    goto LABEL_19;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -1035277116 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_18;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -1035277116 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
  {
LABEL_19:
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    goto LABEL_20;
  }
LABEL_12:
  if ( m_type != 33 )
  {
    if ( (m_type & 0xFFFD) != 0x19 && (m_type - 3) > 1u && m_type != 39 && m_type != 30 )
    {
      switch ( m_type )
      {
        case 1:
          m_float = p_m_value->m_float;
          if ( p_m_value->m_float >= 9.223372e18 )
            m_int = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
          else
            m_int = m_float;
          goto LABEL_41;
        case 5:
          m_int = p_m_value->m_int;
          goto LABEL_41;
        case 6:
          m_int = p_m_value->m_char;
          goto LABEL_41;
        case 8:
          m_int = p_m_value->m_char;
          goto LABEL_41;
        case 26:
          goto LABEL_40;
        case 34:
          m_float64 = p_m_value->m_float64;
          if ( p_m_value->m_float64 >= 9.223372036854776e18 )
            m_int = (m_float64 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          else
            m_int = m_float64;
          goto LABEL_41;
        case 37:
          m_int = p_m_value->m_uint;
          goto LABEL_41;
        default:
          goto LABEL_19;
      }
    }
    v23 = VariantFieldTypeName(m_type);
    Warning("No free conversion of %s variant to %s right now\n", v23, "uint64");
    goto LABEL_19;
  }
LABEL_40:
  m_int = p_m_value->m_uint64;
LABEL_41:
  if ( m_int == 0 )
    goto LABEL_19;
  if ( m_nCount <= 0 )
  {
LABEL_53:
    v29 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_54;
  }
  v25 = pKeyValues->m_keyHashes.m_nAllocated;
  v26 = 0;
  while ( 2 )
  {
    if ( v25 == 0 )
    {
      if ( *(4 * v26) == -201292308 )
        break;
      goto LABEL_47;
    }
    v27 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
    if ( v25 > 9 )
      v27 = pKeyValues->m_keyHashes.m_pElements;
    if ( v27[v26] != -201292308 )
    {
LABEL_47:
      if ( m_nCount <= ++v26 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v28 = pKeyValues->m_keyValues.m_pElements;
  else
    v28 = 0;
  v29 = &v28[v26].m_value;
LABEL_54:
  v30 = v29->m_type;
  if ( v30 != 0 )
  {
    switch ( v30 )
    {
      case 1:
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        m_char = v29->m_float != 0.0;
        goto LABEL_56;
      case 5:
      case 37:
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        m_char = v29->m_int != 0;
        goto LABEL_56;
      case 6:
        m_char = v29->m_char;
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        goto LABEL_56;
      case 26:
      case 33:
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        m_char = v29->m_uint64 != 0;
        goto LABEL_56;
      case 30:
        if ( strcmp(v29->m_pszString, "0") == 0
          || strcmp(v29->m_pszString, "false") == 0
          || strcmp(v29->m_pszString, "no") == 0 )
        {
          break;
        }
        if ( strcmp(v29->m_pszString, "1") == 0
          || strcmp(v29->m_pszString, "true") == 0
          || strcmp(v29->m_pszString, "yes") == 0 )
        {
          m_char = 1;
          v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
          goto LABEL_56;
        }
        Warning("Invalid conversion : CString '%s' to bool\n", v29->m_pszString);
        break;
      case 34:
        v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
        m_char = v29->m_float64 != 0.0;
        goto LABEL_56;
      default:
        v33 = VariantFieldTypeName(v30);
        Warning("No conversion from %s to bool now\n", v33);
        break;
    }
  }
  m_char = 0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
LABEL_56:
  this->m_bShouldDeleteActivationRecord = m_char;
  this->m_pActivationRecord = m_int;
  v32 = *(m_int + 98344);
  if ( v32 != 0 )
    CBaseAnimating::CopyAnimationDataFrom(this, v32);
LABEL_20:
  CBaseAnimating::Spawn(this, pKeyValues);
  this->m_flDefaultFadeScale = (*(this->_vptr_IHandleEntity + 207))(this);
  CBaseEntity::GetModel(v37, this);
  if ( v37[0] == 0 )
    CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  v12 = (*(this->m_Collision._vptr_ICollideable + 9))(&this->m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC,
    v12,
    0);
  CCollisionProperty::EnableSelfCollisions(&this->m_Collision);
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  if ( ((CModel::flags(ModelPtr) >> 8) & 8) != 0 )
  {
    if ( v11 != this->m_flFadeScale.m_Value )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_flFadeScale.m_Value = 0.0;
    }
    this->m_flDefaultFadeScale = 0.0;
  }
  else if ( this->m_flDefaultFadeScale != this->m_flFadeScale.m_Value )
  {
    m_flDefaultFadeScale = this->m_flDefaultFadeScale;
    (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flFadeScale.m_Value = m_flDefaultFadeScale;
  }
  this->m_lastUpdateTickCount = 0;
  if ( v11 != this->m_flBlendWeight.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 3476, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flBlendWeight.m_Value = 0.0;
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x2000) == 0 )
    this->m_iEFlags |= 0x8000000u;
  if ( (m_Value & 0x4000) != 0 )
  {
    CBaseEntity::PhysicsEnableMotion(this, 0);
    if ( this->m_bStartDisabled )
      goto LABEL_38;
  }
  else
  {
    if ( !this->m_bStartDisabled )
      goto LABEL_32;
LABEL_38:
    CBaseEntity::AddEffects(this, 32);
  }
LABEL_32:
  if ( (*(this->_vptr_IHandleEntity + 256))(this) == 0 )
  {
    v15 = operator new(&stru_18030);
    this->m_pActivationRecord = v15;
    this->m_bShouldDeleteActivationRecord = 1;
    x = vec3_origin.x;
    y = vec3_origin.y;
    z = vec3_origin.z;
    v15->m_vForceVector.x = vec3_origin.x;
    v15->m_vForceVector.y = y;
    v15->m_vForceVector.z = z;
    this->m_pActivationRecord->m_nForceBone = 0;
    m_pActivationRecord = this->m_pActivationRecord;
    m_pActivationRecord->m_vForcePos.x = x;
    m_pActivationRecord->m_vForcePos.y = y;
    m_pActivationRecord->m_vForcePos.z = z;
    m_PrevBones = this->m_pActivationRecord->m_PrevBones;
    v21 = CBaseEntity::EntityToWorldTransform(this);
    v22 = (*(this->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(this->m_pGameSceneNode);
    CSkeletonInstance::GetAnimationStateWorldSpaceTransforms(
      v22,
      v21,
      1024,
      m_PrevBones,
      CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
    memcpy(
      this->m_pActivationRecord->m_BoneToWorld,
      this->m_pActivationRecord->m_PrevBones,
      sizeof(this->m_pActivationRecord->m_BoneToWorld));
    this->m_pActivationRecord->m_flDt = 0.0;
    this->m_pActivationRecord->m_nCollisionGroup = 5 - ((this->m_spawnflags.m_Value & 4) == 0);
    this->m_pActivationRecord->m_bActivateRagdoll = 1;
    this->m_pActivationRecord->m_bWakeRagdoll = (HIWORD(this->m_spawnflags.m_Value) ^ 1) & 1;
    this->m_pActivationRecord->m_pCopyAnimationDataFrom = 0;
  }
}


// CRagdollProp::Activate  (line 236, @0x00000000022ec850, libserver.so)
// calls: CBaseAnimating::Activate, CRagdollProp::InitRagdollAnimation, CRagdollProp::ApplyActivationRecord, CRagdollProp::RagdollPostActivate, operator delete
// callers: CRagdollPropAttached::Activate
void __fastcall CRagdollProp::Activate(CRagdollProp *const this, ActivateType_t activateType)
{
  RagdollActivationRecord_t *m_pActivationRecord; // rsi

  CBaseAnimating::Activate(this, activateType);
  CRagdollProp::InitRagdollAnimation(this);
  m_pActivationRecord = this->m_pActivationRecord;
  if ( m_pActivationRecord != 0 )
  {
    CRagdollProp::ApplyActivationRecord(this, m_pActivationRecord);
    CRagdollProp::RagdollPostActivate(this);
    if ( this->m_bShouldDeleteActivationRecord )
      operator delete(this->m_pActivationRecord);
    this->m_pActivationRecord = 0;
  }
}


// CRagdollProp::ApplyActivationRecord  (line 255, @0x00000000022ec330, libserver.so)  // inlines: CWeakHandle, GetComponent<CBodyComponent>, GetDebugName, GetSkeletonInstance, HasSpawnFlags, Init, SetCollisionGroup, SetOrigin, SetSolid, String, ToCStr, V_strlen, VectorTransform, atoi, operator=, operator[], ragdollparams_t
// calls: CCollisionProperty::SetCollisionGroup, CBaseEntity::SetMoveType, CBaseEntity::SetDamageOptions, CBaseEntity::GetModel, CBaseAnimating::GetModelPtr, RagdollInit, RagdollApplyAnimationAsVelocity, strlen, nexttoken, strtol, CBaseEntity::GetAbsOrigin, CFmtStrN<256, false>::CFmtStrN (22 total)
// callers: CRagdollProp::Activate, CRagdollPropAttached::ApplyAttachedActivationRecord
// strings: "(%f, %f, %f)", "Bad ragdoll pose in entity %s, model (%s) at %s, model changed?\n"
// globals: s_pDebrisContext, CRagdollProp::SetDebrisThink(void)
void __fastcall CRagdollProp::ApplyActivationRecord(CRagdollProp *const this, RagdollActivationRecord_t *pRecord)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  const CModel *ModelPtr; // rax
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  vec_t v9; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v13; // rax
  CSkeletonInstance *v14; // rax
  const char *m_pAsString; // r14
  __int64 i; // r15
  int v17; // r14d
  __int64 v18; // r15
  const char *v19; // r14
  const Vector *v20; // rax
  const char *DebugName; // rax
  bool m_bWakeRagdoll; // r12
  matrix3x4_t *v23; // r14
  __int64 parentIndex; // rax
  ragdollelement_t *v25; // rcx
  vec_t v26; // xmm2_4
  vec_t v27; // xmm1_4
  vec_t v28; // xmm0_4
  const Vector *AbsOrigin; // rax
  float v30; // xmm0_4
  double v31; // [rsp+28h] [rbp-9D8h]
  double elementa; // [rsp+30h] [rbp-9D0h]
  const ragdollelement_t *element; // [rsp+30h] [rbp-9D0h]
  const ragdollelement_t *elementb; // [rsp+30h] [rbp-9D0h]
  QAngle angles; // [rsp+40h] [rbp-9C0h] BYREF
  Vector out; // [rsp+50h] [rbp-9B0h] BYREF
  ragdollparams_t params; // [rsp+60h] [rbp-9A0h] BYREF
  CFmtStrN<256,false> v38; // [rsp+B0h] [rbp-950h] BYREF
  char szToken[2056]; // [rsp+1C0h] [rbp-840h] BYREF
  unsigned __int64 v40; // [rsp+9C8h] [rbp-38h]

  p_m_Collision = &this->m_Collision;
  v40 = __readfsqword(0x28u);
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, pRecord->m_nCollisionGroup);
  if ( pRecord->m_nCollisionGroup == 6 )
  {
    v30 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(this, CRagdollProp::SetDebrisThink, v30 + 5.0, s_pDebrisContext, 0);
  }
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 6);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  params.modelIndex.m_pBinding = 0;
  params.pGameData = this;
  CBaseEntity::GetModel(&out, this);
  params.modelIndex.m_pBinding = *&out.x;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  x = pRecord->m_vForceVector.x;
  params.pCurrentBones = pRecord->m_BoneToWorld;
  params.pStudioHdr = ModelPtr;
  LODWORD(ModelPtr) = pRecord->m_nForceBone;
  params.forceVector.x = x;
  y = pRecord->m_vForceVector.y;
  params.jointFrictionScale = 1.0;
  params.forceVector.y = y;
  z = pRecord->m_vForceVector.z;
  params.forceBoneIndex = ModelPtr;
  LODWORD(ModelPtr) = this->m_spawnflags.m_Value;
  params.forceVector.z = z;
  params.forcePosition.x = pRecord->m_vForcePos.x;
  params.forcePosition.y = pRecord->m_vForcePos.y;
  v9 = pRecord->m_vForcePos.z;
  params.allowStretch = (ModelPtr & 0x8000) != 0;
  m_pEntity = this->m_pEntity;
  params.forcePosition.z = v9;
  m_pInstance = m_pEntity->m_pInstance;
  if ( m_pEntity->m_pInstance != 0 )
  {
    m_nBaseOffset = m_pEntity->m_pClass->m_ComponentOffsets.m_Memory.m_pMemory[CBodyComponent::s_EntComponentInfo.m_nRuntimeIndex].m_nBaseOffset;
    v13 = 0;
    if ( m_nBaseOffset != 0xFFFF )
      v13 = *(&m_pInstance->_vptr_IHandleEntity + m_nBaseOffset);
  }
  else
  {
    v13 = 0;
  }
  v14 = (*(**(v13 + 8) + 72LL))(*(v13 + 8));
  RagdollInit(&this->m_ragdoll, &params, v14);
  RagdollApplyAnimationAsVelocity(&this->m_ragdoll, pRecord->m_PrevBones, pRecord->m_BoneToWorld, pRecord->m_flDt);
  if ( this->m_anglesOverrideString.u.m_Id != 0 )
  {
    m_pAsString = this->m_anglesOverrideString.u.m_pAsString;
    if ( strlen(m_pAsString) > 0 )
    {
      for ( i = nexttoken(szToken, m_pAsString, 44); szToken[0] != 0; i = nexttoken(szToken, v18, 44) )
      {
        v17 = strtol(szToken, 0, 10);
        v18 = nexttoken(szToken, i, 44);
        if ( this->m_ragdoll.listCount > v17 )
        {
          if ( szToken[0] != 0 )
          {
            UTIL_StringToVector(&angles.x, szToken);
            element = v17;
            v23 = &pRecord->m_BoneToWorld[this->m_ragdoll.boneIndex[v17]];
            AngleMatrix(&angles, v23);
            parentIndex = this->m_ragdoll.list[element].parentIndex;
            if ( parentIndex < 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              v25 = &this->m_ragdoll.list[element];
              v26 = AbsOrigin->x;
              out.x = AbsOrigin->x;
              v27 = AbsOrigin->y;
              out.y = v27;
              v28 = AbsOrigin->z;
              out.z = v28;
            }
            else
            {
              elementb = &this->m_ragdoll.list[element];
              VectorTransform(
                &elementb->originParentSpace.x,
                &pRecord->m_BoneToWorld[this->m_ragdoll.boneIndex[parentIndex]],
                &out.x);
              v25 = elementb;
              v26 = out.x;
              v27 = out.y;
              v28 = out.z;
            }
            v23->m_flMatVal[0][3] = v26;
            v23->m_flMatVal[1][3] = v27;
            v23->m_flMatVal[2][3] = v28;
            (*(*v25->pObject + 1672LL))(v25->pObject, v23, 1);
          }
        }
        else
        {
          v19 = "";
          v31 = CBaseEntity::GetAbsOrigin(this)->z;
          elementa = CBaseEntity::GetAbsOrigin(this)->y;
          v20 = CBaseEntity::GetAbsOrigin(this);
          CFmtStrN<256,false>::CFmtStrN(&v38, "(%f, %f, %f)", v20->x, elementa, v31);
          CBaseEntity::GetModelName(&out, this);
          if ( *&out.x != 0 )
            v19 = *&out.x;
          DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
          Warning("Bad ragdoll pose in entity %s, model (%s) at %s, model changed?\n", DebugName, v19, v38.m_szBuf);
        }
      }
    }
  }
  if ( pRecord->m_bActivateRagdoll )
  {
    m_bWakeRagdoll = pRecord->m_bWakeRagdoll;
    CBaseEntity::GetModel(&out, this);
    RagdollActivate(&this->m_ragdoll, &out, m_bWakeRagdoll);
  }
}


// CRagdollProp::RagdollPostActivate  (line 329, @0x00000000022db8b0, libserver.so)  // inlines: CalcRagdollSize
// calls: CRagdollProp::UpdateNetworkDataFromVPhysics, CCollisionProperty::SetSurroundingBoundsType
// callers: CRagdollProp::Activate, CRagdollPropAttached::ApplyAttachedActivationRecord, CRagdollPropAttached::Activate
void __fastcall CRagdollProp::RagdollPostActivate(CRagdollProp *const this)
{
  CRagdollProp::UpdateNetworkDataFromVPhysics(this);
  CCollisionProperty::SetSurroundingBoundsType(&this->m_Collision, SurroundingBoundsType_t::USE_HITBOXES, 0, 0);
}


// CRagdollProp::SetSourceClassName  (line 349, @0x00000000022da2a0, libserver.so)  // inlines: operator=
// calls: MakeEntitySystemString
void __fastcall CRagdollProp::SetSourceClassName(CRagdollProp *const this, const char *pClassname)
{
  UtlSymLargeId_t v3; // [rsp+0h] [rbp-20h]

  MakeEntitySystemString(pClassname);
  this->m_strSourceClassName.u.m_Id = v3;
}


// CRagdollProp::OnSave  (line 355, @0x00000000022b8d80, libserver.so)
// calls: CBaseEntity::OnSave
void __fastcall CRagdollProp::OnSave(CRagdollProp *const this)
{
  if ( this->m_ragdoll.listCount != 0 )
    CBaseEntity::OnSave(this);
}


// CRagdollProp::OnRestore  (line 368, @0x00000000022bde80, libserver.so)  // inlines: GetComponent<CBodyComponent>, GetSkeletonInstance, HasSpawnFlags, Init, memset, operator=, operator[]
// calls: CBaseEntity::GetModel, CBaseAnimating::GetModelPtr, RagdollInit, CBaseModelEntity::OnRestore, CBaseEntity::VPhysicsGetObject
void __fastcall CRagdollProp::OnRestore(CRagdollProp *const this)
{
  const CModel *ModelPtr; // rax
  CEntityIdentity *m_pEntity; // rax
  CEntityInstance *m_pInstance; // rdx
  __int64 m_nBaseOffset; // rcx
  __int64 v6; // rax
  CSkeletonInstance *v7; // rax
  void (__fastcall *v8)(CRagdollProp *const, IPhysicsObject *); // r12
  IPhysicsObject *Object; // rax
  const ResourceBindingBase_t *v10; // [rsp+0h] [rbp-70h] BYREF
  ragdollparams_t params; // [rsp+10h] [rbp-60h] BYREF

  memset(&params, 0, sizeof(params));
  params.pGameData = this;
  CBaseEntity::GetModel(&v10, this);
  params.modelIndex.m_pBinding = v10;
  ModelPtr = CBaseAnimating::GetModelPtr(this);
  params.jointFrictionScale = 1.0;
  params.pStudioHdr = ModelPtr;
  params.allowStretch = (this->m_spawnflags.m_Value & 0x8000) != 0;
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
  v7 = (*(**(v6 + 8) + 72LL))(*(v6 + 8));
  RagdollInit(&this->m_ragdoll, &params, v7);
  this->m_ragdoll.list[0].parentIndex = -1;
  CBaseModelEntity::OnRestore(this);
  if ( this->m_ragdoll.listCount != 0 )
  {
    v8 = *(this->_vptr_IHandleEntity + 52);
    Object = CBaseEntity::VPhysicsGetObject(this);
    v8(this, Object);
  }
}


// CRagdollProp::CalcRagdollSize  (line 388, @0x00000000022da2d0, libserver.so)
// calls: CCollisionProperty::SetSurroundingBoundsType
void __fastcall CRagdollProp::CalcRagdollSize(CRagdollProp *const this)
{
  CCollisionProperty::SetSurroundingBoundsType(&this->m_Collision, SurroundingBoundsType_t::USE_HITBOXES, 0, 0);
}


// CRagdollProp::UpdateOnRemove  (line 393, @0x00000000022b8e60, libserver.so)
// calls: CBaseAnimating::UpdateOnRemove
void __fastcall CRagdollProp::UpdateOnRemove(CRagdollProp *const this)
{
  CBaseAnimating::UpdateOnRemove(this);
}


// CRagdollProp::CRagdollProp  (line 402, @0x00000000022da2f0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CUtlSymbolLarge, EnsureValidValue<float>, NetworkStateChanged, Set, SetGlobalFadeScale, operator=<float>, ~CBaseAnimating
// calls: CBaseAnimating::CBaseAnimating, CNetworkTransmitComponent::StateChanged, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CRagdollProp::CEntityInstanceEntityClass::ConstructInstance, CRagdollPropAlias_physics_prop_ragdoll::CEntityInstanceEntityClass::ConstructInstance, CRagdollPropAttached::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CRagdollProp::CRagdollProp(CRagdollProp *const this)
{
  bool v2; // zf

  CBaseAnimating::CBaseAnimating(this);
  this->_vptr_IHandleEntity = &off_4080690;
  v2 = this->m_flFadeScale.m_Value == 1.0;
  this->_vptr_IPlayerPickupVPhysics = &off_4080EA8;
  this->m_anglesOverrideString.u.m_Id = 0;
  this->m_hDamageEntity.m_Index = -1;
  this->m_hKiller.m_Index = -1;
  this->m_hPhysicsAttacker.m_Index = -1;
  this->m_strSourceClassName.u.m_Id = 0;
  this->m_flBlendWeight.m_Value = 0.0;
  this->m_ragdoll.listCount = 0;
  this->m_allAsleep = 0;
  if ( !v2 )
  {
    CNetworkTransmitComponent::StateChanged(&this->m_NetworkTransmitComponent, this, 0x444u, -1, -1);
    this->m_flFadeScale.m_Value = 1.0;
  }
  this->m_flDefaultFadeScale = 1.0;
  this->m_bShouldDeleteActivationRecord = 0;
  this->m_pActivationRecord = 0;
}


// CRagdollProp::~CRagdollProp  (line 415, @0x00000000022b8df0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CRagdollProp::~CRagdollProp, CRagdollPropAlias_physics_prop_ragdoll::~CRagdollPropAlias_physics_prop_ragdoll, CRagdollPropAttached::~CRagdollPropAttached
void __fastcall CRagdollProp::~CRagdollProp(CRagdollProp *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = &off_4080EA8;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CRagdollProp::~CRagdollProp  (line 415, @0x00000000022b8e40, libserver.so)
// calls: CRagdollProp::~CRagdollProp, CBaseEntity::operator delete
void __fastcall CRagdollProp::~CRagdollProp(CRagdollProp *const this)
{
  CRagdollProp::~CRagdollProp(this);
  CBaseEntity::operator delete(this);
}


// CRagdollProp::Precache  (line 419, @0x00000000023028a0, libserver.so)  // inlines: Precache
// calls: CBaseEntity::PrecacheModelFromKeyValues, CEntityInstance::Precache
void __fastcall CRagdollProp::Precache(CRagdollProp *const this, const CEntityPrecacheContext *pContext)
{
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
  CEntityInstance::Precache(this, pContext);
}


// CRagdollProp::ObjectCaps  (line 425, @0x00000000022b85d0, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CRagdollProp::ObjectCaps(CRagdollProp *const this)
{
  return CBaseEntity::ObjectCaps(this) | 0x40000000;
}


// CRagdollProp::InitRagdollAnimation  (line 437, @0x00000000022da400, libserver.so)  // inlines: ResetSequence, SetPlaybackRate, curtime
// calls: CBaseEntity::SetAnimTime, CBaseAnimating::GetBaseAnimatingController, CBaseAnimating::SetCycle, CBaseAnimating::SelectWeightedSequence
// callers: CRagdollProp::Activate
void __fastcall CRagdollProp::InitRagdollAnimation(CRagdollProp *const this)
{
  float v1; // xmm1_4
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v4; // r12
  CBaseAnimatingController *BaseAnimatingController; // rax
  float v6; // xmm1_4
  HSequence v7; // r12d
  CBaseAnimatingController *v8; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  CBaseEntity::SetAnimTime(this, m_flCurrentTime, v1, 0);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
  CBaseAnimating::SetCycle(this, 0.0, v6);
  v7.m_Data = CBaseAnimating::SelectWeightedSequence(this, 24).m_Data;
  v8 = CBaseAnimating::GetBaseAnimatingController(this);
  if ( v7.m_Data == -1 )
    (*(v8->_vptr_CSkeletonAnimationController + 23))(v8, 0, 1);
  else
    (*(v8->_vptr_CSkeletonAnimationController + 23))(v8, v7.m_Data, 1);
}


// CRagdollProp::ModifyOrAppendCriteria  (line 459, @0x00000000022bbc20, libserver.so)  // inlines: String, ToCStr
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::RemoveCriteria, CResponseCriteriaSet::AppendCriteria
void __fastcall CRagdollProp::ModifyOrAppendCriteria(CRagdollProp *const this, CResponseCriteriaSet *const set)
{
  const char *m_pAsString; // rdx

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  if ( this->m_strSourceClassName.u.m_Id != 0 )
  {
    CResponseCriteriaSet::RemoveCriteria(set, "classname");
    m_pAsString = "";
    if ( this->m_strSourceClassName.u.m_Id != 0 )
      m_pAsString = this->m_strSourceClassName.u.m_pAsString;
    CResponseCriteriaSet::AppendCriteria(set, "classname", m_pAsString, 1.0);
    CResponseCriteriaSet::AppendCriteria(set, "ragdoll", "1", 1.0);
  }
}


// CRagdollProp::OnPhysGunPickup  (line 475, @0x00000000022c1030, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// calls: CBaseEntity::PhysicsEnableMotion, CRagdollLRURetirement::MoveToTopOfLRU
void __fastcall CRagdollProp::OnPhysGunPickup(
        CRagdollProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v9; // r12
  bool v10; // zf
  unsigned int m_Value; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v7 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v6 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
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
  v10 = !this->m_bHasBeenPhysgunned;
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
  if ( !v10 )
    this->m_strSourceClassName.u.m_Id = 0;
  m_Value = this->m_spawnflags.m_Value;
  this->m_bHasBeenPhysgunned = 1;
  if ( (m_Value & 0x1000) != 0 )
  {
    CRagdollLRURetirement::MoveToTopOfLRU(g_pRagdollLRU, this, 0);
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 0x40) != 0 )
    CBaseEntity::PhysicsEnableMotion(this, 1);
}


// CRagdollProp::OnPhysGunDrop  (line 518, @0x00000000022da650, libserver.so)  // inlines: CrossProduct, GetCollisionGroup, GetEHandle, GetEntryIndex, GetSerialNumber, PhysSetGameFlags, Set, curtime, operator*=, operator+=, operator-=, operator/=, operator=
// calls: CRagdollLRURetirement::MoveToTopOfLRU, CRagdollProp::HasPhysgunInteraction, CBaseEntity::VPhysicsGetObject, CGlobalVarsBase::curtime, CBaseEntity::ThinkSet
// strings: "spin_zaxis", "onlaunch"
// globals: s_pDebrisContext, CRagdollProp::SetDebrisThink(void)
void __fastcall CRagdollProp::OnPhysGunDrop(
        CRagdollProp *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t Reason,
        int nVRControllerID)
{
  CEntityIdentity *m_pEntity; // rcx
  int v7; // eax
  __int16 v8; // si
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v10; // r12
  bool v11; // zf
  CCollisionProperty *m_pCollision; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  IPhysicsObject **p_pObject; // r12
  float v15; // xmm3_4
  IPhysicsObject **v16; // r14
  float v17; // xmm2_4
  IPhysicsObject *v18; // rdi
  double v19; // xmm0_8
  PhysGunDrop_t listCount; // eax
  float v21; // xmm1_4
  float v22; // xmm0_4
  int v23; // r14d
  IPhysicsObject *v24; // rdi
  double v25; // xmm0_8
  __int64 v26; // rdi
  float v27; // xmm1_4
  float v28; // xmm1_4
  IPhysicsObject *Object; // r12
  unsigned __int16 v30; // ax
  float v31; // xmm0_4
  float v32; // [rsp+4h] [rbp-4Ch]
  float v33; // [rsp+4h] [rbp-4Ch]
  float v34; // [rsp+8h] [rbp-48h]
  float v35; // [rsp+8h] [rbp-48h]
  float v36; // [rsp+Ch] [rbp-44h]
  float v37; // [rsp+Ch] [rbp-44h]
  Vector vDir; // [rsp+20h] [rbp-30h] BYREF

  if ( pPhysGunUser != 0 && (m_pEntity = pPhysGunUser->m_pEntity) != 0 )
  {
    v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v8 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hPhysicsAttacker.m_Index) = v8 | this->m_hPhysicsAttacker.m_Index & 0x8000;
    this->m_hPhysicsAttacker.m_Index = (v7 << 15) | this->m_hPhysicsAttacker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hPhysicsAttacker.m_Index = -1;
  }
  m_flCurrentTime = 0.0;
  v10 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v10->m_flCurrentTime;
  }
  v11 = (this->m_spawnflags.m_Value & 0x1000) == 0;
  this->m_flLastPhysicsInfluenceTime = m_flCurrentTime;
  if ( !v11 )
    CRagdollLRURetirement::MoveToTopOfLRU(g_pRagdollLRU, this, 0);
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 && m_pCollision->m_CollisionGroup.m_Value == 6 )
  {
    v31 = CGlobalVarsBase::curtime(gpGlobals, 0);
    CBaseEntity::ThinkSet(this, CRagdollProp::SetDebrisThink, v31 + 5.0, s_pDebrisContext, 0);
  }
  if ( Reason == PhysGunDrop_t::LAUNCHED_BY_CANNON )
  {
    if ( CRagdollProp::HasPhysgunInteraction(this, "onlaunch", "spin_zaxis") && this->m_ragdoll.listCount > 0 )
    {
      p_pObject = &this->m_ragdoll.list[0].pObject;
      v15 = 0.0;
      LOBYTE(Reason) = 0;
      v16 = &this->m_ragdoll.list[0].pObject;
      v17 = 0.0;
      v36 = 0.0;
      do
      {
        v18 = *v16;
        v32 = v17;
        ++Reason;
        v34 = v15;
        v16 += 5;
        v19 = (*(*v18 + 368LL))(v18);
        listCount = this->m_ragdoll.listCount;
        vDir.z = v21;
        *&vDir.x = v19;
        v15 = v34 + *&v19;
        v36 = v21 + v36;
        v17 = v32 + *(&v19 + 1);
      }
      while ( listCount > Reason );
      v22 = 1.0 / listCount;
      v35 = v15 * v22;
      v33 = v17 * v22;
      v37 = v22 * v36;
      if ( listCount > PhysGunDrop_t::DROPPED_BY_PLAYER )
      {
        v23 = 0;
        do
        {
          v24 = *p_pObject;
          ++v23;
          p_pObject += 5;
          v25 = (*(*v24 + 368LL))(v24);
          v26 = *(p_pObject - 5);
          v28 = (v27 - v37) * 0.0;
          vDir.x = (v28 - (*(&v25 + 1) - v33)) * 100.0;
          vDir.y = 100.0 * ((*&v25 - v35) - v28);
          vDir.z = (((*(&v25 + 1) - v33) * 0.0) - ((*&v25 - v35) * 0.0)) * 100.0;
          (*(*v26 + 552LL))(v26, &vDir);
        }
        while ( this->m_ragdoll.listCount > v23 );
      }
    }
    Object = CBaseEntity::VPhysicsGetObject(this);
    v30 = (*(*Object + 1296LL))(Object);
    HIBYTE(v30) |= 1u;
    (*(*Object + 1304LL))(Object, v30);
    this->m_bFirstCollisionAfterLaunch = 1;
  }
}


// CRagdollProp::HasPhysicsAttacker  (line 581, @0x00000000022c17e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBasePlayer*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
CBasePlayer *__fastcall CRagdollProp::HasPhysicsAttacker(CRagdollProp *const this, double a2, float dt)
{
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v5; // rbx
  uint32 m_Index; // edx
  CBasePlayer *result; // rax
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  int v11; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v11 = LODWORD(a2);
        (m_pfnWarningFunc)(1, a2, 0.0);
        LODWORD(a2) = v11;
      }
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  if ( this->m_flLastPhysicsInfluenceTime < (m_flCurrentTime - *&a2) )
    return 0;
  m_Index = this->m_hPhysicsAttacker.m_Index;
  result = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsAttacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsAttacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        return v9->m_pInstance;
    }
  }
  return result;
}


// CRagdollProp::VPhysicsCollision  (line 594, @0x00000000022db030, libserver.so)  // inlines: CalculateDefaultPhysicsDamage, VectorMultiply, operator*, operator=, operator==
// calls: CBaseEntity::VPhysicsCollision, CBaseEntity::VPhysicsGetObject, CBaseEntity::GetDamageOptions, CRagdollProp::HandleFirstCollisionInteractions, CalculatePhysicsImpactDamage, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::ThinkSet, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CBaseEntity::Instance (13 total)
// globals: gDefaultNPCImpactDamageTable, CRagdollProp::ClearFlagsThink(void)
void __fastcall CRagdollProp::VPhysicsCollision(CRagdollProp *const this, int index, gamevcollisionevent_t *pEvent)
{
  __int64 v3; // r14
  IPhysicsObject **v6; // r15
  CRagdollProp *v7; // r12
  IPhysicsObject *Object; // rax
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  vec_t v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  vec_t v17; // xmm3_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm0_4
  double v20; // xmm0_8
  double v21; // xmm1_8
  CBaseEntity *v22; // rax
  float damage; // [rsp+18h] [rbp-108h]
  float v24; // [rsp+20h] [rbp-100h]
  int damageType; // [rsp+3Ch] [rbp-E4h] BYREF
  Vector damagePos; // [rsp+40h] [rbp-E0h] BYREF
  Vector damageForce; // [rsp+50h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+60h] [rbp-C0h] BYREF

  v3 = index;
  CBaseEntity::VPhysicsCollision(this, index, pEvent);
  v6 = &pEvent->pObjects[v3 == 0];
  v7 = v6[18];
  if ( this != v7 )
  {
    if ( CBaseEntity::VPhysicsGetObject(this) != 0
      && (Object = CBaseEntity::VPhysicsGetObject(this), ((*(*Object + 1296LL))(Object) & 4) != 0) )
    {
      if ( v7 == 0 )
        goto LABEL_7;
      if ( v7 == (*(this->_vptr_IHandleEntity + 190))(this, 3.4028235e38) )
        return;
    }
    else if ( v7 == 0 )
    {
      goto LABEL_7;
    }
    if ( v7 == (*(this->_vptr_IHandleEntity + 190))(this, 0.5) )
      return;
LABEL_7:
    if ( this->m_bFirstCollisionAfterLaunch )
    {
      CRagdollProp::HandleFirstCollisionInteractions(this, v3, pEvent);
      if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_NO )
      {
LABEL_9:
        if ( this->m_bFirstCollisionAfterLaunch )
        {
          CBaseEntity::ThinkSet(this, CRagdollProp::ClearFlagsThink, 0.0, 0, 0);
          *&v20 = CGlobalVarsBase::curtime(gpGlobals, 0);
          CBaseEntity::SetNextThink(this, v20, v21, 0);
        }
        return;
      }
    }
    else if ( CBaseEntity::GetDamageOptions(this) == DamageOptions_t::DAMAGE_NO )
    {
      goto LABEL_9;
    }
    damageType = 0;
    v9 = CalculatePhysicsImpactDamage(v3, pEvent, &gDefaultNPCImpactDamageTable, 1.0, 1, &damageType, 0);
    v10 = v9;
    if ( v9 > 0.0 )
    {
      if ( this->m_bFirstCollisionAfterLaunch )
        v10 = v9 * 10.0;
      if ( v7 == 0 )
      {
        v24 = v10;
        v22 = CBaseEntity::Instance(0);
        v10 = v24;
        v7 = v22;
      }
      damage = v10;
      (*(pEvent->pInternalData->_vptr_IPhysicsCollisionData + 1))(pEvent->pInternalData, &damagePos);
      v11 = (*(*pEvent->pObjects[v3] + 208LL))(pEvent->pObjects[v3]);
      v12 = damage;
      v13 = pEvent->postVelocity[v3].x * v11;
      v14 = pEvent->postVelocity[v3].y * v11;
      v15 = v11 * pEvent->postVelocity[v3].z;
      damageForce.x = v13;
      damageForce.y = v14;
      damageForce.z = v15;
      if ( v13 == vec3_origin.x && v14 == vec3_origin.y && v15 == vec3_origin.z )
      {
        v16 = (*(**v6 + 208LL))(*v6);
        v12 = damage;
        v17 = pEvent->postVelocity[v3 == 0].y * v16;
        v18 = pEvent->postVelocity[v3 == 0].z * v16;
        v19 = v16 * pEvent->postVelocity[v3 == 0].x;
        damageForce.y = v17;
        damageForce.z = v18;
        damageForce.x = v19;
      }
      CTakeDamageInfo::CTakeDamageInfo(&info, v7, v7, &damageForce, &damagePos, v12, damageType, 0, 0);
      CBaseEntity::TakeDamage(this, &info);
      CTakeDamageInfo::~CTakeDamageInfo(&info);
    }
    goto LABEL_9;
  }
}


// CRagdollProp::HasPhysgunInteraction  (line 663, @0x00000000022da4d0, libserver.so)
// calls: CBaseAnimating::GetModelPtr, KeyValues::operator new, KeyValues::KeyValues, CModel::KeyValueText, CModel::name, KeyValues::LoadFromBuffer, KeyValues::FindKey, KeyValues::GetString, KeyValues::deleteThis, V_stricmp_fast, KeyValues::operator delete, _Unwind_Resume
// callers: CRagdollProp::PhysGunLaunchAngularImpulse, CRagdollProp::OnPhysGunDrop, CRagdollProp::HandleFirstCollisionInteractions
// strings: "physgun_interactions"
bool __fastcall CRagdollProp::HasPhysgunInteraction(
        CRagdollProp *const this,
        const char *pszKeyName,
        const char *pszValue)
{
  const CModel *ModelPtr; // rbx
  KeyValues *v6; // r12
  const char *v7; // r15
  const char *v8; // rax
  bool v9; // bl
  KeyValues *Key; // rax
  const char *String; // rax

  ModelPtr = CBaseAnimating::GetModelPtr(this);
  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, "");
  v7 = CModel::KeyValueText(ModelPtr);
  v8 = CModel::name(ModelPtr);
  v9 = KeyValues::LoadFromBuffer(v6, v8, v7, 0, 0, 0, 0);
  if ( v9
    && (Key = KeyValues::FindKey(v6, "physgun_interactions", 0)) != 0
    && (String = KeyValues::GetString(Key, pszKeyName, "", 0, 0)) != 0
    && *String != 0
    && V_stricmp_fast(String, pszValue) == 0 )
  {
    KeyValues::deleteThis(v6);
  }
  else
  {
    v9 = 0;
    KeyValues::deleteThis(v6);
  }
  return v9;
}


// CRagdollProp::HandleFirstCollisionInteractions  (line 689, @0x00000000022da980, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetEHandle, GetEntryIndex, GetFloat, GetSerialNumber, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, SetAttacker, SetDamageForce, SetDamagePosition, SetDamageType, SetInflictor, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+, operator=
// calls: CBaseEntity::VPhysicsGetObject, CRagdollProp::HasPhysgunInteraction, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::GetHealth, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, UTIL_BloodDecalTrace, UTIL_DecalTrace, _Unwind_Resume
// callers: CRagdollProp::VPhysicsCollision
// strings: "onfirstimpact", "paintsplat", "alienbloodsplat", "PaintSplatBlue", "PaintSplatPink", "PaintSplatGreen"
void __fastcall CRagdollProp::HandleFirstCollisionInteractions(
        CRagdollProp *const this,
        int index,
        gamevcollisionevent_t *pEvent)
{
  IPhysicsObject *Object; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v7; // si
  int v8; // edx
  int v9; // edx
  __int16 v10; // cx
  IPhysicsObject *v11; // rax
  double v12; // xmm0_8
  __m128i v13; // xmm1
  vec_t v14; // r13d
  IPhysicsObject *v15; // rax
  vec_t v16; // xmm1_4
  bool HasPhysgunInteraction; // r14
  vec_t v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm7_4
  vec_t v22; // xmm1_4
  float y; // xmm2_4
  float v24; // xmm1_4
  float m_fValue; // xmm7_4
  int v26; // eax
  vec_t v27; // [rsp+8h] [rbp-188h]
  vec_t v28; // [rsp+Ch] [rbp-184h]
  CTraceFilterSimple v29; // [rsp+20h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-E0h] BYREF
  Vector vecPos; // 0:^10.12
  Vector vecPosa; // 0:^10.12

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 )
  {
    if ( CRagdollProp::HasPhysgunInteraction(this, "onfirstimpact", "break") )
    {
      CTakeDamageInfo::CTakeDamageInfo(&tr);
      *(&tr.m_pSurfaceProperties + 1) = CBaseEntity::GetHealth(this);
      if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
      {
        v7 = 0x7FFF;
        v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        *(&tr.startsolid + 2) = v7 | *(&tr.startsolid + 2) & 0x8000;
        *(&tr.startsolid + 1) = (v8 << 15) | *(&tr.startsolid + 2) & 0x7FFF;
        v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v10 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        *&tr.startsolid = v10 | *&tr.startsolid & 0x8000;
        *&tr.startsolid = (v9 << 15) | *&tr.startsolid & 0x7FFF;
      }
      else
      {
        *(&tr.startsolid + 1) = -1;
        *&tr.startsolid = -1;
      }
      LODWORD(tr.m_pHitbox) = 0;
      v11 = CBaseEntity::VPhysicsGetObject(this);
      v12 = (*(*v11 + 1688LL))(v11);
      v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v13));
      LODWORD(v29.m_attr.m_nInteractsWith) = v13.m128i_i32[0];
      *&v29._vptr_CTraceFilter = v12;
      v28 = *&v12;
      v27 = *(&v12 + 1);
      v15 = CBaseEntity::VPhysicsGetObject(this);
      *&ray.m_Start.x = (*(*v15 + 368LL))(v15);
      ray.m_Start.z = v16;
      tr.endpos.y = v14;
      *&tr.endpos.z = ray.m_Start.Vector;
      tr.startpos.z = v28;
      tr.endpos.x = v27;
      CBaseEntity::TakeDamage(this, &tr);
      CTakeDamageInfo::~CTakeDamageInfo(&tr);
    }
    else
    {
      if ( CRagdollProp::HasPhysgunInteraction(this, "onfirstimpact", "paintsplat") )
      {
        *&vecPosa.x = (*(*Object + 368LL))(Object);
        vecPosa.z = v22;
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        y = pEvent->preVelocity[0].y;
        v24 = (1.5 * pEvent->preVelocity[0].z) + vecPosa.z;
        m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        ray.m_Delta.x = ((pEvent->preVelocity[0].x * 1.5) + vecPosa.x) - vecPosa.x;
        ray.m_Delta.y = ((y * 1.5) + vecPosa.y) - vecPosa.y;
        ray.m_Start.w = 0.0;
        memset(&ray.m_Delta.w, 0, 36);
        ray.m_Delta.z = v24 - vecPosa.z;
        ray.m_flRadius = m_fValue;
        ray.m_Start.Vector = vecPosa;
        ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                       + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
        ray.m_IsRay = 1;
        CTraceFilterSimple::CTraceFilterSimple(&v29, this, 4, 0);
        v29.m_attr.m_nInteractsWith |= 0x185003uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v29, &tr);
        v26 = (*(*random_valve + 16LL))(random_valve, 1, 3);
        switch ( v26 )
        {
          case 2:
            UTIL_DecalTrace(&tr, "PaintSplatGreen");
            break;
          case 3:
            UTIL_DecalTrace(&tr, "PaintSplatPink");
            break;
          case 1:
            UTIL_DecalTrace(&tr, "PaintSplatBlue");
            break;
          default:
            break;
        }
      }
      HasPhysgunInteraction = CRagdollProp::HasPhysgunInteraction(this, "onfirstimpact", "alienbloodsplat");
      if ( HasPhysgunInteraction || CRagdollProp::HasPhysgunInteraction(this, "onfirstimpact", "bloodsplat") )
      {
        *&vecPos.x = (*(*Object + 368LL))(Object);
        vecPos.z = v18;
        memset(&tr.m_ShapeAttributes, 0, 31);
        tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
        CGameTrace::Init(&tr);
        v19 = pEvent->preVelocity[0].y;
        v20 = 1.5 * pEvent->preVelocity[0].z;
        v21 = phys_traceline_radius.m_pParent->m_Value.m_fValue;
        ray.m_Delta.x = ((pEvent->preVelocity[0].x * 1.5) + vecPos.x) - vecPos.x;
        ray.m_Delta.y = ((v19 * 1.5) + vecPos.y) - vecPos.y;
        ray.m_Start.w = 0.0;
        memset(&ray.m_Delta.w, 0, 36);
        ray.m_Delta.z = (v20 + vecPos.z) - vecPos.z;
        ray.m_flRadius = v21;
        ray.m_Start.Vector = vecPos;
        ray.m_IsRay = 1;
        ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                       + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
        CTraceFilterSimple::CTraceFilterSimple(&v29, this, 4, 0);
        v29.m_attr.m_nInteractsWith |= 0x185003uLL;
        CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v29, &tr);
        UTIL_BloodDecalTrace(&tr, HasPhysgunInteraction ? 2 : 0);
      }
    }
  }
}


// CRagdollProp::ClearFlagsThink  (line 757, @0x00000000022de2e0, libserver.so)
// calls: CBaseEntity::VPhysicsGetObject, PhysClearGameFlags, CBaseEntity::ThinkSet
void __fastcall CRagdollProp::ClearFlagsThink(CRagdollProp *const this)
{
  IPhysicsObject *Object; // rax

  Object = CBaseEntity::VPhysicsGetObject(this);
  PhysClearGameFlags(Object, 0x100u);
  this->m_bFirstCollisionAfterLaunch = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CRagdollProp::PhysGunLaunchAngularImpulse  (line 767, @0x00000000022da5d0, libserver.so)  // inlines: PhysGunLaunchAngularImpulse, RandomAngularImpulse
// calls: CRagdollProp::HasPhysgunInteraction, Vector::Random
// strings: "spin_zaxis", "onlaunch"
AngularImpulse __fastcall CRagdollProp::PhysGunLaunchAngularImpulse(CRagdollProp *const this)
{
  vec_t v1; // xmm2_4
  Vector v4; // [rsp+10h] [rbp-10h] BYREF
  AngularImpulse result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CRagdollProp::HasPhysgunInteraction(this, "onlaunch", "spin_zaxis") )
  {
    v4.y = 0.0;
    v4.z = 0.0;
    *&result.x = 0;
    result.z = 0.0;
  }
  else
  {
    Vector::Random(&v4, 600.0, v1);
    *&result.x = *&v4.x;
    result.z = v4.z;
  }
  return result;
}


// PrepareActivationRecordKeys<CRagdollProp>  (line 780, @0x0000000002311e50, libserver.so)  // inlines: AddKeyValue<bool>, AddKeyValue<long long unsigned int>, AddToTail, Base, Element, FindKeyHash, Free, SetValue<bool>, SetValue<long long unsigned int>, V_memcpy, memcpy, operator=, operator[]
// calls: operator new, __memcpy_chk, CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int, 9u, short int>, unsigned int, short int>::AddToTailGetPtr, CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t, short int>, CEntityKeyValues::KeyValueInfo_t, short int>::AddToTailGetPtr, Warning
// callers: CreateServerRagdoll
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n"
void __fastcall PrepareActivationRecordKeys<CRagdollProp>(
        CEntitySpawner<CRagdollProp> *pSpawner,
        CBaseAnimating *pCopyAnimationDataFrom,
        const Vector *const forceVector,
        int forceBone,
        const Vector *const forcePos,
        const CBoneAccessor<matrix3x4a_t> *const prevBones,
        float dt,
        const CBoneAccessor<matrix3x4a_t> *const boneToWorld,
        int nCollisionGroup,
        bool activateRagdoll,
        bool bWakeRagdoll)
{
  _BYTE *v15; // rbx
  __int64 v16; // rdx
  __int64 m_nBones; // rax
  __int64 v18; // rax
  __int64 v19; // r11
  vec_t z; // xmm0_4
  vec_t v21; // xmm0_4
  CEntityKeyValues *m_pEntityKeyValues; // r13
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v24; // cx
  __int64 v25; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v26; // rdx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  __int16 v29; // r14
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v30; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v31; // rax
  uint16 m_flags; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v33; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  CEntityKeyValues *v37; // rbx
  int v38; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v39; // cx
  __int64 v40; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v41; // rdx
  unsigned __int64 v42; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v43; // rax
  __int16 v44; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v46; // rax
  uint16 v47; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int16 v52; // ax
  __int16 v53; // ax
  __int64 v54; // [rsp+10h] [rbp-50h]

  v15 = operator new(&stru_18030);
  v15[98341] = bWakeRagdoll;
  v16 = 49152;
  v15[98340] = activateRagdoll;
  m_nBones = boneToWorld->m_nBones;
  if ( m_nBones <= 0x3FFu )
    v16 = 48 * m_nBones;
  v18 = prevBones->m_nBones;
  v19 = 49152;
  if ( v18 <= 0x3FFu )
    v19 = 48 * v18;
  v54 = v19;
  __memcpy_chk(v15 + 49180, boneToWorld->m_pBones, v16, 49172);
  __memcpy_chk(v15 + 28, prevBones->m_pBones, v54, 98324);
  *(v15 + 4) = LODWORD(forcePos->x);
  *(v15 + 5) = LODWORD(forcePos->y);
  z = forcePos->z;
  *(v15 + 3) = forceBone;
  *(v15 + 6) = z;
  *v15 = forceVector->x;
  *(v15 + 1) = LODWORD(forceVector->y);
  v21 = forceVector->z;
  *(v15 + 24584) = nCollisionGroup;
  *(v15 + 24583) = dt;
  *(v15 + 2) = v21;
  *(v15 + 12293) = pCopyAnimationDataFrom;
  m_pEntityKeyValues = pSpawner->m_pEntityKeyValues;
  if ( m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_15:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pSpawner->m_pEntityKeyValues->m_keyHashes);
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
      v29 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
      m_pElements[v29] = -1035277116;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v30 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v30 = 0;
      v31 = &v30[v29];
      m_flags = v31->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v31->m_value.m_flags = m_flags & 0xFFFE;
      v31->m_value.m_uint64 = v15;
      v31->m_value.m_type = 33;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v33 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v33 = 0;
      v33[v29].m_pAttributeName = 0;
    }
    else
    {
      v24 = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v25 = 0;
      while ( 1 )
      {
        if ( v24 != 0 )
        {
          v26 = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v24 > 9 )
            v26 = m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v26 = 0;
        }
        if ( v26[v25] == -1035277116 )
          break;
        if ( m_nCount <= ++v25 )
          goto LABEL_15;
      }
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v34 = m_pEntityKeyValues->m_keyValues.m_pElements;
        v35 = v25;
        v36 = &v34[v35];
        if ( v34[v35].m_pAttributeName != 0 )
        {
LABEL_27:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v34[v35].m_pAttributeName);
          goto LABEL_28;
        }
      }
      else
      {
        v35 = v25;
        v34 = 0;
        v36 = v35 * 24;
        if ( *(v35 * 24 + 16) != 0 )
          goto LABEL_27;
      }
      v53 = *(v36 + 10);
      if ( (v53 & 1) != 0 )
        *(v36 + 10) = v53 & 0xFFFE;
      *v36 = v15;
      *(v36 + 8) = 33;
    }
LABEL_28:
    v37 = pSpawner->m_pEntityKeyValues;
    if ( v37->m_nQueuedForSpawnCount > 0 )
      return;
    v38 = v37->m_keyHashes.m_nCount;
    if ( v38 <= 0 )
    {
LABEL_37:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&pSpawner->m_pEntityKeyValues->m_keyHashes);
      v42 = v37->m_keyHashes.m_nAllocated;
      if ( v42 != 0 )
      {
        if ( v42 <= 9 )
          v43 = (&v37->m_keyHashes.m_nAllocAllocated + 1);
        else
          v43 = v37->m_keyHashes.m_pElements;
      }
      else
      {
        v43 = 0;
      }
      v44 = v37->m_keyHashes.m_nCount - 1;
      v43[v44] = -201292308;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v37->m_keyValues);
      if ( v37->m_keyValues.m_nAllocated != 0 )
        v45 = v37->m_keyValues.m_pElements;
      else
        v45 = 0;
      v46 = &v45[v44];
      v47 = v46->m_value.m_flags;
      if ( (v47 & 1) != 0 )
        v46->m_value.m_flags = v47 & 0xFFFE;
      v46->m_value.m_uint64 = 0;
      v46->m_value.m_type = 6;
      v46->m_value.m_char = 1;
      if ( v37->m_keyValues.m_nAllocated != 0 )
        v48 = v37->m_keyValues.m_pElements;
      else
        v48 = 0;
      v48[v44].m_pAttributeName = 0;
      return;
    }
    v39 = v37->m_keyHashes.m_nAllocated;
    v40 = 0;
    while ( 1 )
    {
      if ( v39 != 0 )
      {
        v41 = (&v37->m_keyHashes.m_nAllocAllocated + 1);
        if ( v39 > 9 )
          v41 = v37->m_keyHashes.m_pElements;
      }
      else
      {
        v41 = 0;
      }
      if ( v41[v40] == -201292308 )
        break;
      if ( v38 <= ++v40 )
        goto LABEL_37;
    }
    if ( v37->m_keyValues.m_nAllocated != 0 )
    {
      v49 = v37->m_keyValues.m_pElements;
      v50 = v40;
      v51 = &v49[v50];
      if ( v49[v50].m_pAttributeName != 0 )
      {
LABEL_49:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v49[v50].m_pAttributeName);
        return;
      }
    }
    else
    {
      v50 = v40;
      v49 = 0;
      v51 = v50 * 24;
      if ( *(v50 * 24 + 16) != 0 )
        goto LABEL_49;
    }
    v52 = *(v51 + 10);
    if ( (v52 & 1) != 0 )
      *(v51 + 10) = v52 & 0xFFFE;
    *v51 = 0;
    *(v51 + 8) = 6;
    *v51 = 1;
  }
}


// CRagdollProp::SetDebrisThink  (line 843, @0x00000000022ba3c0, libserver.so)  // inlines: SetCollisionGroup
// calls: CCollisionProperty::SetCollisionGroup
void __fastcall CRagdollProp::SetDebrisThink(CRagdollProp *const this)
{
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
}


// CRagdollProp::SetDamageEntity  (line 848, @0x00000000022ba110, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::GetDamageOptions, CBaseEntity::SetDamageOptions
void __fastcall CRagdollProp::SetDamageEntity(CRagdollProp *const this, CBaseEntity *pEntity)
{
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  DamageOptions_t DamageOptions; // al

  if ( pEntity != 0 )
  {
    m_pEntity = pEntity->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hDamageEntity.m_Index) = v5 | this->m_hDamageEntity.m_Index & 0x8000;
      this->m_hDamageEntity.m_Index = (v4 << 15) | this->m_hDamageEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hDamageEntity.m_Index = -1;
    }
    DamageOptions = CBaseEntity::GetDamageOptions(pEntity);
    CBaseEntity::SetDamageOptions(this, DamageOptions);
  }
  else
  {
    this->m_hDamageEntity.m_Index = -1;
    CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
  }
}


// CRagdollProp::OnTakeDamage  (line 867, @0x00000000022c2470, libserver.so)  // inlines: AddDamageType, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator->
// calls: CBaseEntity::OnTakeDamage, CTakeDamageInfo::CTakeDamageInfo, CTakeDamageInfo::~CTakeDamageInfo, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CRagdollProp::OnTakeDamage(CRagdollProp *const this, const CTakeDamageInfo *const info)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v7; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  int v11; // [rsp+Ch] [rbp-A4h]
  CTakeDamageInfo subInfo; // [rsp+10h] [rbp-A0h] BYREF

  m_Index = this->m_hDamageEntity.m_Index;
  if ( m_Index + 2 <= 1 )
    return CBaseEntity::OnTakeDamage(this, info);
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDamageEntity.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return CBaseEntity::OnTakeDamage(this, info);
  v5 = &v4[this->m_hDamageEntity.m_Index & 0x1FF];
  if ( v5 == 0 || m_Index != v5->m_EHandle.m_Index || v5->m_pInstance == 0 )
    return CBaseEntity::OnTakeDamage(this, info);
  CTakeDamageInfo::CTakeDamageInfo(&subInfo, info);
  v7 = this->m_hDamageEntity.m_Index;
  m_pInstance = 0;
  subInfo.m_bitsDamageType |= 0x400000u;
  if ( v7 + 2 > 1 )
  {
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hDamageEntity.m_Index) >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[this->m_hDamageEntity.m_Index & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
        m_pInstance = v10->m_pInstance;
    }
  }
  v11 = (*(m_pInstance->_vptr_IHandleEntity + 90))(m_pInstance, &subInfo);
  CTakeDamageInfo::~CTakeDamageInfo(&subInfo);
  return v11;
}


// CRagdollProp::Teleport  (line 882, @0x00000000022db8e0, libserver.so)  // inlines: MatrixAngles, MatrixPosition, MatrixSetColumn, PositionMatrix, SetColumn
// calls: CBaseEntity::EntityToWorldTransform, MatrixInvert, MatrixCopy, AngleMatrix, ConcatTransforms, MatrixAngles, CBaseAnimating::Teleport, CRagdollProp::UpdateNetworkDataFromVPhysics, Warning
// strings: "CRagdollProp::Teleport( ) for ragdoll without root object\n"
// globals: CRagdollProp::Teleport(Vector const*,QAngle const*,Vector const*)::__executeCount
void __fastcall CRagdollProp::Teleport(
        CRagdollProp *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  matrix3x4_t *v7; // rax
  matrix3x4_t *v8; // rax
  int v9; // r15d
  IPhysicsObject **p_pObject; // rbx
  Vector obj0Pos; // [rsp+10h] [rbp-1A0h] BYREF
  QAngle obj0Angles; // [rsp+20h] [rbp-190h] BYREF
  matrix3x4_t startMatrixInv; // [rsp+30h] [rbp-180h] BYREF
  matrix3x4_t endMatrix; // [rsp+60h] [rbp-150h] BYREF
  matrix3x4_t xform; // [rsp+90h] [rbp-120h] BYREF
  matrix3x4_t obj0source; // [rsp+C0h] [rbp-F0h] BYREF
  matrix3x4_t obj0Target; // [rsp+F0h] [rbp-C0h] BYREF
  matrix3x4_t matrix; // [rsp+120h] [rbp-90h] BYREF
  matrix3x4_t newMatrix; // [rsp+150h] [rbp-60h] BYREF

  if ( this->m_ragdoll.list[0].pObject != 0 )
  {
    v7 = CBaseEntity::EntityToWorldTransform(this);
    MatrixInvert(v7, &startMatrixInv);
    v8 = CBaseEntity::EntityToWorldTransform(this);
    MatrixCopy(v8, &endMatrix);
    if ( newAngles != 0 )
      AngleMatrix(newAngles, &endMatrix);
    if ( newPosition != 0 )
    {
      endMatrix.m_flMatVal[0][3] = newPosition->x;
      endMatrix.m_flMatVal[1][3] = newPosition->y;
      endMatrix.m_flMatVal[2][3] = newPosition->z;
    }
    ConcatTransforms(&endMatrix, &startMatrixInv, &xform);
    (*(*this->m_ragdoll.list[0].pObject + 1680LL))(this->m_ragdoll.list[0].pObject, &obj0source);
    v9 = 1;
    ConcatTransforms(&xform, &obj0source, &obj0Target);
    MatrixAngles(&obj0Target, &obj0Angles);
    obj0Pos.x = obj0Target.m_flMatVal[0][3];
    p_pObject = &this->m_ragdoll.list[1].pObject;
    obj0Pos.y = obj0Target.m_flMatVal[1][3];
    obj0Pos.z = obj0Target.m_flMatVal[2][3];
    CBaseAnimating::Teleport(this, &obj0Pos, &obj0Angles, newVelocity);
    if ( this->m_ragdoll.listCount > 1 )
    {
      do
      {
        if ( *p_pObject != 0 )
        {
          (*(**p_pObject + 1680LL))(*p_pObject, &matrix);
          ConcatTransforms(&xform, &matrix, &newMatrix);
          (*(**p_pObject + 1672LL))(*p_pObject, &newMatrix, 1);
        }
        ++v9;
        p_pObject += 5;
      }
      while ( this->m_ragdoll.listCount > v9 );
    }
    CRagdollProp::UpdateNetworkDataFromVPhysics(this);
  }
  else if ( CRagdollProp::Teleport(Vector const*,QAngle const*,Vector const*)::__executeCount <= 0 )
  {
    ++CRagdollProp::Teleport(Vector const*,QAngle const*,Vector const*)::__executeCount;
    Warning("CRagdollProp::Teleport( ) for ragdoll without root object\n", newPosition, newAngles, newVelocity);
  }
}


// CRagdollProp::VPhysicsUpdate  (line 933, @0x00000000022c60f0, libserver.so)  // inlines: CTransform, ConcatTransforms, GetCollisionGroup, GetForModify, Init, NetworkStateChanged, Set, SetCollisionBounds, SetCollisionGroup, TransformInvert, VectorAligned, VectorSubtract, operator-, operator=
// calls: CBaseEntity::EntityToWorldTransform, MatrixTransform, TransformInvert, ConcatTransforms, memcmp, QuaternionAngles, RagdollSolveSeparation, CBaseEntity::VPhysicsGetAggregate, CCollisionProperty::SetSurroundingBoundsType, CCollisionProperty::SetCollisionBounds, CBaseEntity::PhysicsTouchTriggers, RagdollIsAsleep (18 total)
// callers: CRagdollPropAttached::VPhysicsUpdate
// globals: s_pDebrisContext
// local variable allocation has failed, the output may be wrong!
void __fastcall CRagdollProp::VPhysicsUpdate(CRagdollProp *const this, IPhysicsObject *pPhysics)
{
  uint32 tickcount; // eax
  int listCount; // edx
  void *v5; // rsp
  IPhysicsObject **p_pObject; // r12
  int v7; // r15d
  QuaternionAligned *p_m_orientation; // r13
  unsigned __int64 v9; // r14
  IPhysicsObject *v10; // rsi
  matrix3x4_t *v11; // rax
  unsigned __int64 v12; // r14
  unsigned int v13; // r13d
  int *p_parentIndex; // r15
  CNetworkArrayBase<Vector,32,CRagdollProp::NetworkVar_m_ragPos> *p_m_ragPos; // r12
  CTransform *v16; // rdx
  const CTransform *v17; // rsi
  CTransform *p_worldToEntity; // rdi
  __int64 v19; // rdx
  QAngle *v20; // rsi
  __int64 v21; // rdi
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  IPhysAggregateInstance *Aggregate; // rax
  float *v24; // r13
  float v25; // xmm0_4
  float v26; // xmm2_4
  vec_t v27; // xmm0_4
  vec_t v28; // xmm2_4
  bool IsAsleep; // al
  CCollisionProperty *m_pCollision; // rax
  float v31; // xmm0_4
  CTransform *pRagdollTransforms; // [rsp+8h] [rbp-108h]
  Quaternion *q; // [rsp+10h] [rbp-100h] BYREF
  void *s2; // [rsp+18h] [rbp-F8h]
  CTransform *out; // [rsp+20h] [rbp-F0h]
  CTransform *p_bounds; // [rsp+28h] [rbp-E8h]
  CTransform entityToWorld; // [rsp+30h] [rbp-E0h] BYREF
  CTransform worldToEntity; // [rsp+50h] [rbp-C0h] BYREF
  CTransform childToParent; // [rsp+70h] [rbp-A0h] BYREF
  float v40[8]; // [rsp+90h] [rbp-80h] BYREF
  __m256i bounds; // [rsp+B0h] [rbp-60h] OVERLAPPED BYREF
  unsigned __int64 v42; // [rsp+D8h] [rbp-38h]

  out = pPhysics;
  v42 = __readfsqword(0x28u);
  if ( pPhysics != 0 )
  {
    tickcount = gpGlobals->tickcount;
    if ( this->m_lastUpdateTickCount != tickcount )
    {
      listCount = this->m_ragdoll.listCount;
      this->m_lastUpdateTickCount = tickcount;
      v5 = alloca(32LL * listCount + 32);
      pRagdollTransforms = (&q & 0xFFFFFFFFFFFFFFEFLL);
      if ( listCount <= 0 )
      {
        p_bounds = &bounds;
      }
      else
      {
        p_pObject = &this->m_ragdoll.list[0].pObject;
        v7 = 0;
        p_m_orientation = &pRagdollTransforms->m_orientation;
        v9 = &q & 0xFFFFFFFFFFFFFFEFLL;
        p_bounds = &bounds;
        do
        {
          v10 = *p_pObject;
          ++v7;
          p_pObject += 5;
          v9 += 32LL;
          p_m_orientation += 2;
          (*(*v10 + 440LL))(p_bounds);
          *(v9 - 32) = *bounds.m256i_i8;
          p_m_orientation[-2] = *&bounds.m256i_u64[2];
        }
        while ( this->m_ragdoll.listCount > v7 );
      }
      if ( (*(*&out->m_vPosition.x + 40LL))(out) == 2 )
      {
        CBaseEntity::SetAbsOrigin(this, &pRagdollTransforms->m_vPosition);
        CBaseEntity::SetAbsAngles(this, &vec3_angle);
      }
      entityToWorld.m_vPosition.w = 0.0;
      v11 = CBaseEntity::EntityToWorldTransform(this);
      MatrixTransform(v11, &entityToWorld);
      worldToEntity.m_vPosition.w = 0.0;
      TransformInvert(&entityToWorld, &worldToEntity);
      if ( this->m_ragdoll.listCount <= 0 )
      {
        out = v40;
        s2 = &childToParent;
      }
      else
      {
        v12 = &q & 0xFFFFFFFFFFFFFFEFLL;
        v13 = 0;
        out = v40;
        s2 = &childToParent;
        p_parentIndex = &this->m_ragdoll.list[0].parentIndex;
        q = &childToParent.m_orientation;
        p_m_ragPos = &this->m_ragPos;
        do
        {
          childToParent.m_vPosition.w = 0.0;
          v21 = *p_parentIndex;
          if ( v21 >= 0 )
          {
            v40[3] = 0.0;
            TransformInvert(&pRagdollTransforms[v21], out);
            v16 = p_bounds;
            v17 = v12;
            p_worldToEntity = out;
            bounds.m256i_i32[3] = 0;
          }
          else
          {
            bounds.m256i_i32[3] = 0;
            v16 = p_bounds;
            v17 = v12;
            p_worldToEntity = &worldToEntity;
          }
          ConcatTransforms(p_worldToEntity, v17, v16);
          childToParent.m_vPosition.Vector = *bounds.m256i_i8;
          childToParent.m_orientation = *&bounds.m256i_u64[2];
          if ( memcmp(p_m_ragPos, s2, 0xCu) != 0 )
          {
            (*(this->_vptr_IHandleEntity + 22))(this, 2652, v13, 0xFFFFFFFFLL);
            p_m_ragPos->m_Value[0] = childToParent.m_vPosition.Vector;
          }
          v19 = v13++;
          p_parentIndex += 10;
          v12 += 32LL;
          (*(this->_vptr_IHandleEntity + 22))(this, 3036, v19, 0xFFFFFFFFLL);
          v20 = &p_m_ragPos[1];
          p_m_ragPos = (p_m_ragPos + 12);
          QuaternionAngles(q, v20);
        }
        while ( this->m_ragdoll.listCount > v13 );
      }
      IsAsleep = RagdollIsAsleep(&this->m_ragdoll);
      this->m_allAsleep = IsAsleep;
      if ( IsAsleep )
      {
        this->m_strSourceClassName.u.m_Id = 0;
      }
      else
      {
        RagdollSolveSeparation(&this->m_ragdoll, this);
        if ( !this->m_allAsleep )
          goto LABEL_17;
      }
      m_pCollision = this->m_pCollision;
      if ( m_pCollision != 0 && m_pCollision->m_CollisionGroup.m_Value == 6 )
      {
        p_m_Collision = &this->m_Collision;
        CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
        v31 = CGlobalVarsBase::curtime(gpGlobals, 0);
        CBaseEntity::ThinkSet(this, 0LL, v31, s_pDebrisContext, 0);
        goto LABEL_18;
      }
LABEL_17:
      p_m_Collision = &this->m_Collision;
LABEL_18:
      Aggregate = CBaseEntity::VPhysicsGetAggregate(this);
      (*(Aggregate->_vptr_IPhysAggregateInstance + 43))(Aggregate, p_bounds);
      v24 = (*(this->m_Collision._vptr_ICollideable + 4))(p_m_Collision);
      CCollisionProperty::SetSurroundingBoundsType(
        p_m_Collision,
        SurroundingBoundsType_t::USE_COLLISION_BOUNDS_NEVER_VPHYSICS,
        0,
        0);
      v25 = *&bounds.m256i_i32[5] - v24[2];
      v26 = *&bounds.m256i_i32[3] - *v24;
      v40[1] = *&bounds.m256i_i32[4] - v24[1];
      v40[2] = v25;
      v40[0] = v26;
      v27 = *&bounds.m256i_i32[2] - v24[2];
      v28 = *bounds.m256i_i32 - *v24;
      childToParent.m_vPosition.y = *&bounds.m256i_i32[1] - v24[1];
      childToParent.m_vPosition.z = v27;
      childToParent.m_vPosition.x = v28;
      CCollisionProperty::SetCollisionBounds(p_m_Collision, s2, &out->m_vPosition);
      (*(this->m_Collision._vptr_ICollideable + 25))(p_m_Collision);
      CBaseEntity::PhysicsTouchTriggers(this, 0);
    }
  }
}


// CRagdollProp::VPhysicsGetObjectList  (line 1010, @0x00000000022b7a50, libserver.so)
int __fastcall CRagdollProp::VPhysicsGetObjectList(CRagdollProp *const this, IPhysicsObject **pList, int listMax)
{
  int listCount; // eax
  IPhysicsObject **p_pObject; // rcx
  IPhysicsObject **v5; // r8
  int result; // eax
  __int64 v7; // rdi

  listCount = this->m_ragdoll.listCount;
  if ( listMax <= listCount )
    listCount = listMax;
  if ( listCount <= 0 )
    return 0;
  p_pObject = &this->m_ragdoll.list[0].pObject;
  v5 = &this->m_ragdoll.list[(listCount - 1) + 1].pObject;
  result = 0;
  do
  {
    if ( *p_pObject != 0 )
    {
      v7 = result++;
      pList[v7] = *p_pObject;
    }
    p_pObject += 5;
  }
  while ( p_pObject != v5 );
  return result;
}


// CRagdollProp::UpdateNetworkDataFromVPhysics  (line 1024, @0x00000000022db380, libserver.so)  // inlines: CTransform, ConcatTransforms, Init, NetworkStateChanged, Set, ToQAngle, TransformInvert, VectorAligned, operator!=, operator=
// calls: QuaternionAngles, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CBaseEntity::PhysicsTouchTriggers, CBaseEntity::EntityToWorldTransform, MatrixTransform, TransformInvert, AngleTransform, ConcatTransforms, memcmp
// callers: CRagdollProp::RagdollPostActivate, CRagdollProp::Teleport
void __fastcall CRagdollProp::UpdateNetworkDataFromVPhysics(CRagdollProp *const this)
{
  IPhysicsObject *pObject; // rdi
  double v3; // xmm0_8
  IPhysicsObject *v4; // rdi
  vec_t v5; // xmm1_4
  __int64 v6; // xmm1_8
  const Vector *AbsOrigin; // rax
  unsigned int v8; // r15d
  int *p_pObject; // r12
  matrix3x4_t *v10; // rax
  CNetworkArrayBase<QAngle,32,CRagdollProp::NetworkVar_m_ragAngles> *p_m_ragAngles; // rbx
  vec_t v12; // xmm1_4
  __int64 v13; // rdi
  double v14; // xmm0_8
  __int64 v15; // xmm1_8
  CTransform *p_worldToEntity; // rdi
  double v17; // xmm0_8
  __int64 v18; // rdi
  vec_t v19; // xmm1_4
  __int64 v20; // xmm1_8
  __int64 v21; // rax
  CTransform *in; // [rsp+18h] [rbp-158h]
  QAngle angles; // [rsp+40h] [rbp-130h] BYREF
  Vector vPos; // [rsp+50h] [rbp-120h] BYREF
  CTransform childToParent; // [rsp+60h] [rbp-110h] BYREF
  CTransform childToWorld; // [rsp+80h] [rbp-F0h] BYREF
  CTransform parentToWorld; // [rsp+A0h] [rbp-D0h] BYREF
  CTransform entityToWorld; // [rsp+C0h] [rbp-B0h] BYREF
  CTransform worldToEntity; // [rsp+E0h] [rbp-90h] BYREF
  CTransform v30; // [rsp+100h] [rbp-70h] BYREF
  CTransform q[2]; // [rsp+120h] [rbp-50h] BYREF

  pObject = this->m_ragdoll.list[0].pObject;
  if ( pObject != 0 )
  {
    v3 = (*(*pObject + 368LL))(pObject);
    v4 = this->m_ragdoll.list[0].pObject;
    *&q[0].m_vPosition.x = v3;
    q[0].m_vPosition.z = v5;
    vPos.z = v5;
    *&vPos.x = v3;
    *&q[0].m_vPosition.x = (*(*v4 + 384LL))(v4);
    *&q[0].m_vPosition.z = v6;
    QuaternionAngles(q, &v30);
    angles = v30.m_vPosition.Vector;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    if ( AbsOrigin->x != vPos.x || AbsOrigin->y != vPos.y || AbsOrigin->z != vPos.z )
    {
      CBaseEntity::SetAbsOrigin(this, &vPos);
      CBaseEntity::PhysicsTouchTriggers(this, 0);
    }
  }
  v8 = 0;
  childToParent.m_vPosition.w = 0.0;
  p_pObject = &this->m_ragdoll.list[0].pObject;
  childToWorld.m_vPosition.w = 0.0;
  parentToWorld.m_vPosition.w = 0.0;
  entityToWorld.m_vPosition.w = 0.0;
  v10 = CBaseEntity::EntityToWorldTransform(this);
  MatrixTransform(v10, &entityToWorld);
  worldToEntity.m_vPosition.w = 0.0;
  p_m_ragAngles = &this->m_ragAngles;
  TransformInvert(&entityToWorld, &worldToEntity);
  if ( this->m_ragdoll.listCount > 0 )
  {
    do
    {
      if ( *p_pObject != 0 )
      {
        v17 = (*(**p_pObject + 368LL))(*p_pObject);
        v18 = *p_pObject;
        *&q[0].m_vPosition.x = v17;
        q[0].m_vPosition.z = v19;
        vPos.z = v19;
        *&vPos.x = v17;
        *&q[0].m_vPosition.x = (*(*v18 + 384LL))(v18);
        *&q[0].m_vPosition.z = v20;
        QuaternionAngles(q, &v30);
        angles = v30.m_vPosition.Vector;
        AngleTransform(&angles, &vPos, &childToWorld);
        v21 = p_pObject[4];
        if ( v21 >= 0 )
        {
          in = (this + 40 * v21);
          *&q[0].m_vPosition.x = (*(**&in[39].m_vPosition.x + 368LL))(*&in[39].m_vPosition.x);
          q[0].m_vPosition.z = v12;
          vPos.z = v12;
          v13 = *&in[39].m_vPosition.x;
          *&vPos.x = *&q[0].m_vPosition.x;
          v14 = (*(*v13 + 384LL))(v13);
          *&q[0].m_vPosition.z = v15;
          *&q[0].m_vPosition.x = v14;
          QuaternionAngles(q, &v30);
          angles = v30.m_vPosition.Vector;
          AngleTransform(&angles, &vPos, &parentToWorld);
          v30.m_vPosition.w = 0.0;
          TransformInvert(&parentToWorld, &v30);
          q[0].m_vPosition.w = 0.0;
          p_worldToEntity = &v30;
        }
        else
        {
          q[0].m_vPosition.w = 0.0;
          p_worldToEntity = &worldToEntity;
        }
        ConcatTransforms(p_worldToEntity, &childToWorld, q);
        childToParent.m_vPosition.Vector = q[0].m_vPosition.Vector;
        childToParent.m_orientation = q[0].m_orientation;
        QuaternionAngles(&childToParent.m_orientation, &angles);
        if ( memcmp(&p_m_ragAngles[-1], &childToParent, 0xCu) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 2652, v8, 0xFFFFFFFFLL);
          p_m_ragAngles[-1].m_Value[0] = childToParent.m_vPosition.Vector;
        }
        if ( memcmp(p_m_ragAngles, &angles, 0xCu) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 3036, v8, 0xFFFFFFFFLL);
          p_m_ragAngles->m_Value[0] = angles;
        }
      }
      ++v8;
      p_pObject += 10;
      p_m_ragAngles = (p_m_ragAngles + 12);
    }
    while ( this->m_ragdoll.listCount > v8 );
  }
}


// CRagdollProp::FadeOut  (line 1082, @0x00000000022dbb60, libserver.so)  // inlines: NetworkStateChanged, Set, SetGlobalFadeScale, curtime, operator=<float>
// calls: CRagdollProp::IsFading, CBaseEntity::ThinkSet
// callers: CRagdollProp::InputFadeAndRemove
// globals: s_pFadeOutContext, CRagdollProp::FadeOutThink(void)
void __fastcall CRagdollProp::FadeOut(CRagdollProp *const this, float a2, float flDelay, float fadeTime)
{
  float v5; // xmm1_4
  CGlobalVars *v6; // r12
  float m_flCurrentTime; // xmm1_4
  float v8; // xmm0_4
  bool v9; // zf
  CGlobalVars *v10; // r12
  FnGlobalVarsWarningFunc v11; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( !CRagdollProp::IsFading(this) )
  {
    v5 = flDelay;
    if ( flDelay == -1.0 )
      v5 = 0.5;
    this->m_flFadeTime = v5;
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v6->m_flCurrentTime;
      v8 = 0.0;
    }
    else
    {
      v8 = 0.0;
      m_flCurrentTime = 0.0;
    }
    v9 = this->m_flFadeScale.m_Value == 0.0;
    this->m_flFadeOutStartTime = m_flCurrentTime + a2;
    if ( !v9 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1092, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8 = 0.0;
      this->m_flFadeScale.m_Value = 0.0;
    }
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v11 = gpGlobals->m_pfnWarningFunc;
        if ( v11 != 0 )
          v11(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v8 = v10->m_flCurrentTime;
    }
    CBaseEntity::ThinkSet(this, CRagdollProp::FadeOutThink, (v8 + a2) + 0.0099999998, s_pFadeOutContext, 0);
  }
}


// CRagdollProp::IsFading  (line 1094, @0x00000000022dbaf0, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetNextThink
// callers: CRagdollProp::FadeOut
// globals: s_pFadeOutContext
bool __fastcall CRagdollProp::IsFading(CRagdollProp *const this)
{
  float NextThink; // xmm0_4
  float m_flCurrentTime; // xmm1_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v6; // [rsp+Ch] [rbp-14h]

  NextThink = CBaseEntity::GetNextThink(this, s_pFadeOutContext);
  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v6 = NextThink;
        (m_pfnWarningFunc)(1, NextThink, 0.0);
        NextThink = v6;
      }
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  return NextThink >= m_flCurrentTime;
}


// CRagdollProp::FadeOutThink  (line 1099, @0x00000000022c6630, libserver.so)  // inlines: NetworkStateChanged, Set, curtime, operator=<RenderMode_t>
// calls: CBaseModelEntity::SetRenderAlpha, CBaseEntity::ThinkSet, UTIL_GetLocalPlayer, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, UTIL_Remove, CTakeDamageInfo::~CTakeDamageInfo, CGlobalVarsBase::curtime, _Unwind_Resume
// globals: s_pFadeOutContext, CRagdollProp::FadeOutThink(void)
void __fastcall CRagdollProp::FadeOutThink(CRagdollProp *const this)
{
  CGlobalVars *v2; // r12
  float m_flCurrentTime; // xmm1_4
  float v4; // xmm1_4
  float m_flFadeTime; // xmm2_4
  int v6; // r12d
  CGlobalVars *v7; // r12
  float v8; // xmm0_4
  CGlobalVars *v9; // rax
  float v10; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  FnGlobalVarsWarningFunc v12; // rax
  CBasePlayer *LocalPlayer; // rax
  CTakeDamageInfo info; // [rsp+10h] [rbp-B0h] BYREF

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v2->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v4 = m_flCurrentTime - this->m_flFadeOutStartTime;
  if ( v4 < 0.0 )
  {
    v10 = CGlobalVarsBase::curtime(gpGlobals, 0) + 0.1;
LABEL_12:
    CBaseEntity::ThinkSet(this, CRagdollProp::FadeOutThink, v10, s_pFadeOutContext, 0);
    return;
  }
  m_flFadeTime = this->m_flFadeTime;
  if ( m_flFadeTime > v4 )
  {
    v6 = ((1.0 - (v4 / m_flFadeTime)) * 255.0);
    if ( this->m_nRenderMode.m_Value != RenderMode_t::kRenderTransTexture )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 792, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_nRenderMode.m_Value = RenderMode_t::kRenderTransTexture;
    }
    CBaseModelEntity::SetRenderAlpha(this, v6);
    (*(this->_vptr_IHandleEntity + 21))(this);
    v7 = gpGlobals;
    v8 = 0.0;
    if ( gpGlobals != 0 )
    {
      v9 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v12 = gpGlobals->m_pfnWarningFunc;
        if ( v12 != 0 )
          (v12)(1, 0.0);
        v9 = gpGlobals;
      }
      v8 = v7->m_flCurrentTime;
    }
    else
    {
      v9 = 0;
    }
    v10 = v8 + v9->interval_per_tick;
    goto LABEL_12;
  }
  LocalPlayer = UTIL_GetLocalPlayer();
  CTakeDamageInfo::CTakeDamageInfo(&info, LocalPlayer, LocalPlayer, 10000.0, 0, 0);
  CBaseEntity::TakeDamage(this, &info);
  UTIL_Remove(this);
  CTakeDamageInfo::~CTakeDamageInfo(&info);
}


// CRagdollProp::DrawDebugTextOverlays  (line 1132, @0x00000000022ba5d0, libserver.so)
// calls: CBaseAnimating::DrawDebugTextOverlays, GetMassEquivalent, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "Mass: %.2f kg / %.2f lb (%s)"
int __fastcall CRagdollProp::DrawDebugTextOverlays(
        CRagdollProp *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r12
  char v5; // bl
  int v6; // r14d
  float v7; // xmm1_4
  IPhysicsObject **p_pObject; // r12
  int v9; // ebx
  const char *MassEquivalent; // rax
  int v11; // esi
  float mass; // [rsp+Ch] [rbp-234h]
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v15; // [rsp+218h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v15 = __readfsqword(0x28u);
  v6 = CBaseAnimating::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x800) != 0 && this->m_ragdoll.listCount != 0 )
  {
    if ( this->m_ragdoll.listCount <= 0 )
    {
      mass = 0.0;
    }
    else
    {
      p_pObject = &this->m_ragdoll.list[0].pObject;
      v9 = 0;
      mass = 0.0;
      do
      {
        if ( *p_pObject != 0 )
          mass = (*(**p_pObject + 208LL))(*p_pObject) + mass;
        ++v9;
        p_pObject += 5;
      }
      while ( this->m_ragdoll.listCount > v9 );
    }
    MassEquivalent = GetMassEquivalent(mass, v7);
    V_snprintf(tempstr, 512, "Mass: %.2f kg / %.2f lb (%s)", mass, (2.2 * mass), MassEquivalent);
    v11 = v6++;
    CBaseEntity::EntityText(this, v11, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CRagdollProp::DrawEntityDebugOverlays  (line 1159, @0x00000000022ec050, libserver.so)
// calls: CFmtStrN<256, false>::CFmtStrN, NDebugOverlay::EntityTextAtPosition, CBaseEntity::DrawEntityDebugOverlays, IDebugOverlay::EntityHitboxes, __stack_chk_fail
// strings: "mass %.1f"
void __fastcall CRagdollProp::DrawEntityDebugOverlays(CRagdollProp *const this, uint64 nDebugOverlayBits)
{
  int v3; // r15d
  IPhysicsObject **p_pObject; // r13
  vec_t v5; // xmm1_4
  float mass; // [rsp+1Ch] [rbp-164h]
  Vector pos; // [rsp+20h] [rbp-160h] BYREF
  CFmtStr str; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v10; // [rsp+148h] [rbp-38h]

  v10 = __readfsqword(0x28u);
  if ( (nDebugOverlayBits & 4) != 0 )
    IDebugOverlay::EntityHitboxes(g_pDebugOverlay, this, 0.0, 0);
  if ( (nDebugOverlayBits & 8) != 0 && this->m_ragdoll.listCount > 0 )
  {
    v3 = 0;
    p_pObject = &this->m_ragdoll.list[0].pObject;
    do
    {
      if ( *p_pObject != 0 )
      {
        mass = (*(**p_pObject + 208LL))(*p_pObject);
        *&pos.x = (*(**p_pObject + 368LL))(*p_pObject);
        pos.z = v5;
        CFmtStrN<256,false>::CFmtStrN(&str, "mass %.1f", mass);
        NDebugOverlay::EntityTextAtPosition(&pos, 0, str.m_szBuf, 0.0, 0, 255, 0, 255);
      }
      ++v3;
      p_pObject += 5;
    }
    while ( this->m_ragdoll.listCount > v3 );
  }
  CBaseEntity::DrawEntityDebugOverlays(this, nDebugOverlayBits);
}


// CRagdollPropAttached::GetEntityClass  (line 1187, @0x00000000023040e0, libserver.so)
CEntityClass *__cdecl CRagdollPropAttached::GetEntityClass()
{
  return g_pEntityCRagdollPropAttachedClass;
}


// CRagdollPropAttached::Schema_DynamicBinding  (line 1187, @0x00000000023040f0, libserver.so)
// globals: CRagdollPropAttached::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollPropAttached::Schema_DynamicBinding(
        const CRagdollPropAttached *const this)
{
  return CRagdollPropAttached::s_pSchemaBinding;
}


// CRagdollPropAttached::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1187, @0x0000000002304100, libserver.so)
// globals: CRagdollPropAttached::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollPropAttached::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  return CRagdollPropAttached::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollPropAttached::CEntityInstanceEntityClass::DestructInstance  (line 1187, @0x0000000002304110, libserver.so)  // inlines: Destruct<CRagdollPropAttached>
void __fastcall CRagdollPropAttached::CEntityInstanceEntityClass::DestructInstance(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollPropAttached::CEntityInstanceEntityClass::FreeInstance  (line 1187, @0x0000000002304130, libserver.so)
void __fastcall CRagdollPropAttached::CEntityInstanceEntityClass::FreeInstance(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollPropAttached::CEntityInstanceEntityClass::CanAllocate  (line 1187, @0x0000000002304150, libserver.so)
bool __fastcall CRagdollPropAttached::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollPropAttached::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1187, @0x0000000002304160, libserver.so)
// globals: CRagdollPropAttached::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollPropAttached::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  return CRagdollPropAttached::s_pSchemaBinding;
}


// CRagdollPropAttached::CEntityInstanceEntityClass::AllocateInstance  (line 1187, @0x0000000002305d60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollPropAttached::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4328);
  memset(v1, 0, 0x10E8u);
  return v1;
}


// CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1187, @0x00000000023092b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1187, @0x00000000023092d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollPropAttached::CEntityInstanceEntityClass::ConstructInstance  (line 1187, @0x000000000230ec70, libserver.so)  // inlines: CNetworkVarBase, CNetworkVectorBase, CRagdollPropAttached, Construct<CRagdollPropAttached>, EnsureValidValue, EnsureValidValue<unsigned int>, Zero
// calls: CRagdollProp::CRagdollProp
CEntityInstance *__fastcall CRagdollPropAttached::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollPropAttached::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CRagdollProp::CRagdollProp(p);
    *(p + 1066) = 0;
    *p = &off_4080F90;
    *(p + 152) = &off_40817A8;
    *(p + 1067) = 0;
    *(p + 1070) = 0;
    *(p + 1069) = 0;
    *(p + 1068) = 0;
    *(p + 1073) = 0;
    *(p + 1072) = 0;
    *(p + 1071) = 0;
    *(p + 4296) = 0;
    *(p + 4312) = 0;
    *(p + 540) = 0;
  }
  return p;
}


// CRagdollPropAttached::GetEntityClassInternal  (line 1187, @0x0000000002317680, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CRagdollProp::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "prop_ragdoll_attached", "CRagdollPropAttached"
// globals: `guard variable for'CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass, CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo, CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo
CEntityClass *__cdecl CRagdollPropAttached::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass) != 0 )
  {
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_designerName.u.m_Id = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass._vptr_CEntityClass = off_3F79390;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_ComponentOffsets.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_AllHelpers.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classInputs.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classOutputs.m_Size = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_requiredEHandle.m_Index = -1;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_hNetworkSerializer = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pBaseClassInfo = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pClassInfo = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_flags = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_nAllHelpersFlags = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pScriptClassDesc = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pInputs = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_nInputCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pOutputs = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_nOutputCount = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pGameClass = 0;
    CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass._vptr_CEntityClass = off_4080F10;
    __cxa_guard_release(&`guard variable for'CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass);
    __cxa_atexit(
      CRagdollPropAttached::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollPropAttachedClass != 0 )
    return &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass;
  if ( `guard variable for'CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo) != 0 )
  {
    EntityClassInfo = CRagdollProp::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo,
      "CRagdollPropAttached",
      "prop_ragdoll_attached",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo);
  }
  CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pClassInfo = &CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo;
  CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pBaseClassInfo = CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollPropAttachedClass = &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass;
  CRagdollPropAttached::GetEntityClassInfo(void)::g_EntityCRagdollPropAttachedClassInfo.m_pClass = &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass;
  CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCRagdollPropAttachedClass->m_pComponentOverrides = 0;
  return &CRagdollPropAttached::GetEntityClassInternal(void)::g_EntityCRagdollPropAttachedClass;
}


// CRagdollPropAttached::~CRagdollPropAttached  (line 1197, @0x00000000023071c0, libserver.so)
// calls: CBaseEntity::VPhysicsWorld, CRagdollProp::~CRagdollProp
void __fastcall CRagdollPropAttached::~CRagdollPropAttached(CRagdollPropAttached *const this)
{
  IVPhysics2World *v2; // rax

  this->_vptr_IHandleEntity = &off_4080F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40817A8;
  v2 = CBaseEntity::VPhysicsWorld(this);
  (*(*v2 + 904LL))(v2, this->m_hAttachConstraint);
  this->m_hAttachConstraint = 0;
  CRagdollProp::~CRagdollProp(this);
}


// CRagdollPropAttached::~CRagdollPropAttached  (line 1197, @0x00000000023085a0, libserver.so)  // inlines: ~CRagdollPropAttached
// calls: CBaseEntity::VPhysicsWorld, CRagdollProp::~CRagdollProp, CBaseEntity::operator delete
void __fastcall CRagdollPropAttached::~CRagdollPropAttached(CRagdollPropAttached *const this)
{
  IVPhysics2World *v2; // rax

  this->_vptr_IHandleEntity = &off_4080F90;
  this->_vptr_IPlayerPickupVPhysics = &off_40817A8;
  v2 = CBaseEntity::VPhysicsWorld(this);
  (*(*v2 + 904LL))(v2, this->m_hAttachConstraint);
  this->m_hAttachConstraint = 0;
  CRagdollProp::~CRagdollProp(this);
  CBaseEntity::operator delete(this);
}


// CRagdollPropAttached::HasActivationRecord  (line 1213, @0x0000000002304170, libserver.so)
bool __fastcall CRagdollPropAttached::HasActivationRecord(CRagdollPropAttached *const this)
{
  bool result; // al

  result = 1;
  if ( this->m_pActivationRecord == 0 )
    return this->m_pAttachedActivationRecord != 0;
  return result;
}


// CRagdollPropAttached::YouForgotToImplementOrDeclareServerClass  (line 1230, @0x00000000022b7ab0, libserver.so)
int __fastcall CRagdollPropAttached::YouForgotToImplementOrDeclareServerClass(CRagdollPropAttached *const this)
{
  return 0;
}


// CRagdollPropAttached::GetServerClass  (line 1230, @0x00000000022c7fa0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CRagdollPropAttached::GetServerClass(CRagdollPropAttached *const this)
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


// CRagdollPropAttached::GetDataDescMap  (line 1233, @0x00000000022b7ac0, libserver.so)
// globals: CRagdollPropAttached::m_DataMap
datamap_t *__fastcall CRagdollPropAttached::GetDataDescMap(CRagdollPropAttached *const this)
{
  return &CRagdollPropAttached::m_DataMap;
}


// CRagdollPropAttached::AddDatadescMetadataKeys  (line 1233, @0x00000000022dbd30, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRagdollPropAttached::GetEntityClass(void)
void __fastcall CRagdollPropAttached::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRagdollPropAttached::GetEntityClass);
}


// CRagdollPropAttached::GetBaseMap  (line 1233, @0x00000000022dbd50, libserver.so)
// globals: CRagdollProp::m_DataMap
datamap_t *__cdecl CRagdollPropAttached::GetBaseMap()
{
  return &CRagdollProp::m_DataMap;
}


// DataMapInit<CRagdollPropAttached>  (line 1233, @0x00000000022dbd60, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CRagdollPropAttached"
// globals: `guard variable for'DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder, CRagdollProp::m_DataMap, CRagdollPropAttached::GetEntityClass(void), CRagdollPropAttached::m_DataMap, DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_pszBase = "CRagdollPropAttached";
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::nameHolder,
      &_dso_handle);
  }
  CRagdollPropAttached::m_DataMap.dataNumFields = 6;
  CRagdollPropAttached::m_DataMap.baseMap = &CRagdollProp::m_DataMap;
  CRagdollPropAttached::m_DataMap.dataDesc = &DataMapInit<CRagdollPropAttached>(CRagdollPropAttached *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRagdollPropAttached::m_DataMap, CRagdollPropAttached::GetEntityClass);
  return &CRagdollPropAttached::m_DataMap;
}


// CRagdollPropAttached::Spawn  (line 1246, @0x00000000022c74c0, libserver.so)  // inlines: AssignTo, AssignTo<long long unsigned int>, Base, Element, FindKeyHash, GetValue, GetValue<bool>, GetValue<long long unsigned int>, _V_strcmp, operator[]
// calls: CRagdollProp::Spawn, VariantFieldTypeName, Warning, CBaseAnimating::CopyAnimationDataFrom
// strings: "uint64", "No free conversion of %s variant to %s right now\n", "false", "true", "Invalid conversion : CString '%s' to bool\n", "No conversion from %s to bool now\n"
// globals: jpt_22C757E, CEntityKeyValues::sm_EmptyVariant, jpt_22C765D
void __fastcall CRagdollPropAttached::Spawn(CRagdollPropAttached *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // ecx
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // si
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  const char *v11; // rax
  unsigned __int64 m_int; // r13
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v13; // si
  __int64 v14; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v15; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v16; // rdx
  char m_char; // cl
  CEntityVariant *v18; // rdx
  int16 v19; // ax
  CBaseAnimating *v20; // rsi
  const char *v21; // rax
  double m_float64; // xmm0_8
  float m_float; // xmm0_4

  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_18:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_type = CEntityKeyValues::sm_EmptyVariant.m_type;
    if ( m_type == 0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -880527477 )
      goto LABEL_9;
LABEL_6:
    if ( m_nCount <= ++v6 )
      goto LABEL_18;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -880527477 )
    goto LABEL_6;
LABEL_9:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
  m_type = p_m_value->m_type;
  if ( m_type == 0 )
    goto LABEL_19;
LABEL_12:
  if ( m_type != 33 )
  {
    if ( (m_type & 0xFFFD) == 0x19 || (m_type - 3) <= 1u || m_type == 39 || m_type == 30 )
    {
      v11 = VariantFieldTypeName(m_type);
      Warning("No free conversion of %s variant to %s right now\n", v11, "uint64");
    }
    else
    {
      switch ( m_type )
      {
        case 1:
          m_float = p_m_value->m_float;
          if ( p_m_value->m_float >= 9.223372e18 )
            m_int = (m_float - 9.223372e18) ^ 0x8000000000000000LL;
          else
            m_int = m_float;
          goto LABEL_22;
        case 5:
          m_int = p_m_value->m_int;
          goto LABEL_22;
        case 6:
          m_int = p_m_value->m_char;
          goto LABEL_22;
        case 8:
          m_int = p_m_value->m_char;
          goto LABEL_22;
        case 26:
          goto LABEL_21;
        case 34:
          m_float64 = p_m_value->m_float64;
          if ( p_m_value->m_float64 >= 9.223372036854776e18 )
            m_int = (m_float64 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          else
            m_int = m_float64;
          goto LABEL_22;
        case 37:
          m_int = p_m_value->m_uint;
          goto LABEL_22;
        default:
          goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
LABEL_21:
  m_int = p_m_value->m_uint64;
LABEL_22:
  if ( m_int != 0 )
  {
    if ( m_nCount <= 0 )
    {
LABEL_35:
      v18 = &CEntityKeyValues::sm_EmptyVariant;
      m_char = 0;
      v19 = CEntityKeyValues::sm_EmptyVariant.m_type;
      if ( v19 != 0 )
        goto LABEL_34;
      goto LABEL_36;
    }
    v13 = pKeyValues->m_keyHashes.m_nAllocated;
    v14 = 0;
    while ( 1 )
    {
      if ( v13 != 0 )
      {
        v15 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v13 > 9 )
          v15 = pKeyValues->m_keyHashes.m_pElements;
        if ( v15[v14] == -1323173286 )
        {
LABEL_31:
          if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
            v16 = pKeyValues->m_keyValues.m_pElements;
          else
            v16 = 0;
          m_char = 0;
          v18 = &v16[v14].m_value;
          v19 = v18->m_type;
          if ( v19 != 0 )
          {
LABEL_34:
            switch ( v19 )
            {
              case 1:
                m_char = v18->m_float != 0.0;
                break;
              case 5:
              case 37:
                m_char = v18->m_int != 0;
                break;
              case 6:
                m_char = v18->m_char;
                break;
              case 26:
              case 33:
                m_char = v18->m_uint64 != 0;
                break;
              case 30:
                if ( strcmp(v18->m_pszString, "0") != 0
                  && strcmp(v18->m_pszString, "false") != 0
                  && strcmp(v18->m_pszString, "no") != 0 )
                {
                  if ( strcmp(v18->m_pszString, "1") == 0
                    || strcmp(v18->m_pszString, "true") == 0
                    || strcmp(v18->m_pszString, "yes") == 0 )
                  {
                    m_char = 1;
                    break;
                  }
                  Warning("Invalid conversion : CString '%s' to bool\n", v18->m_pszString);
                }
                m_char = 0;
                break;
              case 34:
                m_char = v18->m_float64 != 0.0;
                break;
              default:
                v21 = VariantFieldTypeName(v19);
                Warning("No conversion from %s to bool now\n", v21);
                m_char = 0;
                break;
            }
          }
LABEL_36:
          this->m_bShouldDeleteAttachedActivationRecord = m_char;
          this->m_pAttachedActivationRecord = m_int;
          v20 = *(m_int + 98344);
          if ( v20 != 0 )
            CBaseAnimating::CopyAnimationDataFrom(this, v20);
          break;
        }
      }
      else if ( *(4 * v14) == -1323173286 )
      {
        goto LABEL_31;
      }
      if ( m_nCount <= ++v14 )
        goto LABEL_35;
    }
  }
LABEL_19:
  CRagdollProp::Spawn(this, pKeyValues);
}


// CRagdollPropAttached::Activate  (line 1266, @0x00000000022eced0, libserver.so)
// calls: CRagdollProp::Activate, CRagdollPropAttached::ApplyAttachedActivationRecord, CRagdollProp::RagdollPostActivate, operator delete
void __fastcall CRagdollPropAttached::Activate(CRagdollPropAttached *const this, ActivateType_t activateType)
{
  AttachedRagdollActivationRecord_t *m_pAttachedActivationRecord; // rsi

  CRagdollProp::Activate(this, activateType);
  m_pAttachedActivationRecord = this->m_pAttachedActivationRecord;
  if ( m_pAttachedActivationRecord != 0 )
  {
    CRagdollPropAttached::ApplyAttachedActivationRecord(this, m_pAttachedActivationRecord);
    CRagdollProp::RagdollPostActivate(this);
    if ( this->m_bShouldDeleteAttachedActivationRecord )
      operator delete(this->m_pAttachedActivationRecord);
    this->m_pAttachedActivationRecord = 0;
  }
}


// CreateServerRagdollSubmodel  (line 1296, @0x00000000022dbe30, libserver.so)
CBaseAnimating *__fastcall CreateServerRagdollSubmodel(
        CBaseAnimating *pOwner,
        const char *pModelName,
        CPhysAggregateData *pAggData,
        const Vector *const position,
        const QAngle *const angles,
        int collisionGroup)
{
  return 0;
}


// CreateServerRagdoll  (line 1321, @0x00000000022fac90, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddEFlags, AddSpawnFlags, Alloc, BitVec_IsBitSet, CBoneAccessor, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CPreventSetAnimRunAnimEventsScopeGuard, CUtlString, CUtlSymbolLarge, CVProfScope, CWritableBoneAccessor, CWritableBoneContainer, CalcNumIntsForBits, Clamp<float>, Cleanup, ClearBoneReadableBits, CopyFrom, DotProduct, FastSqrt, Get, GetAbsVelocity, GetClassInfo, GetClassNameAsCStr, GetClassname, GetCycle, GetDamageForce, GetDamagePosition, GetEHandle, GetEntityClass, GetEntityName, GetEntryIndex, GetInflictor, GetInstance, GetNumBones, GetSequence, GetSerialNumber, GetSkeletonInstance, GetWorldSpaceBones, GetWorldSpaceState, Init, Init_Internal, InvokeCallbacks, IsBoneReadable, IsEmpty, IsEnabled, IsPreventingSetAnimRunAnimEvents, Length, NetworkStateChanged, OverrideAllocator, PreventSetAnimRunAnimEvents, Release, ReleaseEntitySpawnerEntityVariantAllocator, ResourceHandleToData<InfoForResourceTypeCModel>, Set, SetClassName, SetEntityName, SetKiller, SetOrigin, SetSourceClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetWorldTransform, Spawn, String, SyncAnimatingWithPhysics, V_memcpy, V_memset, Vector, VectorLength, VectorMultiply, VectorRotate, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, memcpy, memset, operator CBaseEntity*, operator CRagdollProp*, operator int, operator!, operator(), operator*, operator*=, operator-=, operator/=, operator=, operator|=<int>, ~CBoneAccessor, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CPreventSetAnimRunAnimEventsScopeGuard, ~CUtlString, ~CVProfScope, ~CWritableBoneAccessor, ~CWritableBoneContainer
// calls: CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue, CEntitySystem::FindClassByDesignName, CBaseEntity::GetAbsOrigin, CEntityKeyValues::SetValue<Vector>, CEntityKeyValues::SetValue<QAngle>, CBaseEntity::GetModel, CModel::NumBones, operator delete [], operator new [] (56 total)
// callers: CBaseCombatCharacter::BecomeRagdoll, CBaseCombatCharacter::InputBecomeServerRagdoll
// strings: "Server Simulation", "Spawn"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
// local variable allocation has failed, the output may be wrong!
CBaseModelEntity *__fastcall CreateServerRagdoll(
        CBaseAnimating *pAnimating,
        int forceBone,
        const CTakeDamageInfo *const info,
        int collisionGroup,
        bool bUseLRURetirement)
{
  CEntitySystem *v7; // rdi
  CUtlScratchMemoryPool *v8; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v10; // rdx
  char v11; // al
  const Vector *AbsOrigin; // rax
  int v13; // ebx
  size_t v14; // rdi
  unsigned __int64 v15; // rax
  const uint32 *v16; // rax
  unsigned int *m_readableBoneStorage; // rdi
  size_t v18; // rdx
  int v19; // ebx
  size_t v20; // rdi
  unsigned __int64 v21; // rax
  const uint32 *v22; // rax
  unsigned int *v23; // rdi
  size_t v24; // rdx
  const CBaseAnimatingController *BaseAnimatingController; // rax
  HSequence v26; // eax
  float v27; // xmm3_4
  bool v28; // al
  __int64 v29; // rbx
  const void *v30; // r13
  const void *v31; // r12
  __int64 m_nBones; // rbx
  float v33; // xmm1_4
  __int64 v34; // rbx
  const void *v35; // r13
  const void *v36; // r12
  __int64 v37; // rbx
  float v38; // xmm1_4
  float *m_pBones; // rdx
  __int64 v40; // rsi
  bool v41; // zf
  float v42; // xmm0_4
  const CModel *v43; // rax
  int v44; // eax
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  int i; // ecx
  float v49; // xmm0_4
  float v50; // xmm2_4
  vec_t v51; // xmm0_4
  vec_t v52; // xmm2_4
  vec_t v53; // xmm1_4
  vec_t v54; // xmm0_4
  CEntityKeyValues *v55; // rdi
  int v56; // r13d
  const char *v57; // rdx
  EntityNetworkingMode_t v58; // ebx
  const char *v59; // rax
  CEntityInstance *v60; // rax
  CEntityInstance *v61; // r12
  CEntityIdentity *v62; // rax
  __int16 v63; // si
  CEntitySpawnerContext<CRagdollProp> *v64; // rbx
  CEntityKeyValues *j; // r13
  detail::GenericClass *v66; // rdx
  void (*v67)(detail::GenericClass *); // rax
  _QWORD *v68; // rdi
  CEntityInstance *v69; // rax
  CEntityIdentity *v70; // rdx
  int v71; // eax
  __int16 v72; // cx
  CEntityIdentity *v73; // rax
  const char *m_pAsString; // rsi
  CEntityIdentity *v75; // rdi
  CUtlStringToken v76; // eax
  MeshGroupMask_t Body; // rax
  __int64 v78; // rax
  vec_t v79; // xmm0_4
  int (**vptr_ICollideable)(...); // rax
  CUtlScratchMemoryPool *v81; // rdi
  CEntityKeyValues *v82; // rbx
  const CModel *ModelPtr; // rbx
  const CBaseAnimatingController *v86; // rax
  HSequence v87; // eax
  const ISequence *v88; // rbx
  unsigned __int8 (__fastcall *v89)(const ISequence *, const float *, __int128 *, int *, float, float); // r12
  const CBaseAnimatingController *v90; // rax
  float x; // xmm2_4
  float y; // xmm1_4
  float z; // xmm0_4
  uint16 v94; // ax
  uint16 v95; // ax
  IPhysicsObject *Object; // rax
  float v97; // xmm0_4
  float v98; // xmm1_4
  int HitboxesFrontside; // r13d
  const CModel *v100; // rax
  float v101; // xmm0_4
  CEntityKeyValues *m_pEntityKeyValues; // rdi
  int m_enabled; // edx
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v106; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v108; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v110; // si
  CEntitySpawnerContext<CRagdollProp> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v114; // rdi
  int *v115; // rbx
  int HitboxBone; // eax
  IPhysicsObject *pObject; // r12
  void (__fastcall *v118)(IPhysicsObject *, __int128 *); // r13
  float v119; // xmm0_4
  unsigned int v120; // xmm2_4
  float v121; // xmm1_4
  unsigned int v122; // xmm0_4
  unsigned int m_Value; // ebx
  matrix3x4_t *v124; // rax
  int m_nEntitySpawnerDataUseCount; // ecx
  CPreventSetAnimRunAnimEventsScopeGuard sg; // [rsp+50h] [rbp-2A10h]
  const float *sgb; // [rsp+50h] [rbp-2A10h]
  CEntityKeyValues *sga; // [rsp+50h] [rbp-2A10h]
  Vector *forcePos; // [rsp+58h] [rbp-2A08h]
  float fCurCycle; // [rsp+60h] [rbp-2A00h]
  bool fCurCyclea; // [rsp+60h] [rbp-2A00h]
  float massScale; // [rsp+64h] [rbp-29FCh]
  float massScalea; // [rsp+64h] [rbp-29FCh]
  bool massScaleb; // [rsp+64h] [rbp-29FCh]
  float massScalec; // [rsp+64h] [rbp-29FCh]
  float pRagdoll; // [rsp+68h] [rbp-29F8h]
  CRagdollProp *pRagdolla; // [rsp+68h] [rbp-29F8h]
  CEntityHandle v141; // [rsp+70h] [rbp-29F0h] BYREF
  CEntityHandle v142; // [rsp+80h] [rbp-29E0h] BYREF
  UtlSymLargeId_t v143; // [rsp+90h] [rbp-29D0h]
  string_t name; // [rsp+A0h] [rbp-29C0h] BYREF
  Vector vel; // [rsp+B0h] [rbp-29B0h] BYREF
  Vector mins; // [rsp+C0h] [rbp-29A0h] BYREF
  Vector normal; // [rsp+D0h] [rbp-2990h] BYREF
  __int128 deltaPos; // [rsp+E0h] [rbp-2980h] OVERLAPPED BYREF
  CEntitySpawner<CRagdollProp> spawner; // [rsp+F0h] [rbp-2970h] BYREF
  int boxList[128]; // [rsp+190h] [rbp-28D0h] BYREF
  CWritableBoneContainer<matrix3x4a_t,100> boneToWorld; // [rsp+390h] [rbp-26D0h] BYREF
  CWritableBoneContainer<matrix3x4a_t,100> boneToWorldNext; // [rsp+16E0h] [rbp-1380h] BYREF

  if ( (info->m_bitsDamageType & 0x11) != 0 )
  {
    Object = CBaseEntity::VPhysicsGetObject(pAnimating);
    if ( Object != 0 )
    {
      (*(*Object + 1856LL))(Object, &boneToWorldNext, 0);
      CBaseEntity::SetAbsOrigin(pAnimating, &boneToWorldNext);
    }
  }
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_scriptClassName.m_pString = 0;
  spawner._vptr_CEntitySpawnerBase = off_4081830;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v7 = g_pEntitySystem;
  v8 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v7->m_entitySpawnerData;
  spawner.m_pPrevAllocator = v8;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v7);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v10 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v10;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCRagdollPropClass;
  if ( g_pApplication != 0 )
    v11 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v11 = 0;
  spawner.m_bValidateKeys = v11;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "prop_ragdoll");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "prop_ragdoll",
                             &spawner.m_scriptClassName);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pAnimating);
  CEntityKeyValues::SetValue<Vector>(spawner.m_pEntityKeyValues, -467664362, AbsOrigin);
  CEntityKeyValues::SetValue<QAngle>(spawner.m_pEntityKeyValues, -1164387633, &vec3_angle);
  CBaseEntity::GetModel(&boneToWorldNext, pAnimating);
  memset(&boneToWorld, 0, 19);
  if ( boneToWorldNext.m_pBones == 0
    || SLODWORD(boneToWorldNext.m_pBones->m_flMatVal[1][2]) <= 0
    || *&boneToWorldNext.m_pBones->m_flMatVal[0][0] == 0 )
  {
    v18 = 0;
    v95 = 0;
LABEL_108:
    boneToWorld.m_bOwnsMemory = 0;
    m_readableBoneStorage = boneToWorld.m_readableBoneStorage;
    boneToWorld.m_pBones = boneToWorld.m_boneStorage;
    boneToWorld.m_pReadableBones = boneToWorld.m_readableBoneStorage;
    boneToWorld.m_nBones = v95;
    goto LABEL_16;
  }
  v13 = CModel::NumBones(*&boneToWorldNext.m_pBones->m_flMatVal[0][0]);
  if ( v13 <= 100 )
  {
    if ( boneToWorld.m_bOwnsMemory )
    {
      if ( boneToWorld.m_pBones != 0 )
        operator delete[](boneToWorld.m_pBones);
      if ( boneToWorld.m_pReadableBones != 0 )
        operator delete[](boneToWorld.m_pReadableBones);
    }
    v95 = v13;
    v18 = 4LL * ((v13 + 31) >> 5);
    goto LABEL_108;
  }
  if ( boneToWorld.m_bOwnsMemory )
  {
    if ( boneToWorld.m_pBones != 0 )
      operator delete[](boneToWorld.m_pBones);
    if ( boneToWorld.m_pReadableBones != 0 )
      operator delete[](boneToWorld.m_pReadableBones);
  }
  memset(&boneToWorld, 0, 19);
  boneToWorld.m_pBones = operator new[](48LL * v13);
  v14 = -1;
  v15 = (v13 + 31) >> 5;
  if ( v15 <= 0x1FC0000000000000LL )
    v14 = 4 * v15;
  v16 = operator new[](v14);
  boneToWorld.m_nBones = v13;
  m_readableBoneStorage = v16;
  boneToWorld.m_pReadableBones = v16;
  boneToWorld.m_bOwnsMemory = 1;
  v18 = 4LL * ((v13 + 31) >> 5);
LABEL_16:
  memset(m_readableBoneStorage, 0, v18);
  CBaseEntity::GetModel(boxList, pAnimating);
  memset(&boneToWorldNext, 0, 19);
  if ( *boxList == 0 || *(*boxList + 24LL) <= 0 || **boxList == 0 )
  {
    v24 = 0;
    v94 = 0;
LABEL_106:
    boneToWorldNext.m_bOwnsMemory = 0;
    boneToWorldNext.m_nBones = v94;
    v23 = boneToWorldNext.m_readableBoneStorage;
    boneToWorldNext.m_pReadableBones = boneToWorldNext.m_readableBoneStorage;
    boneToWorldNext.m_pBones = boneToWorldNext.m_boneStorage;
    goto LABEL_28;
  }
  v19 = CModel::NumBones(**boxList);
  if ( v19 <= 100 )
  {
    if ( boneToWorldNext.m_bOwnsMemory )
    {
      if ( boneToWorldNext.m_pBones != 0 )
        operator delete[](boneToWorldNext.m_pBones);
      if ( boneToWorldNext.m_pReadableBones != 0 )
        operator delete[](boneToWorldNext.m_pReadableBones);
    }
    v94 = v19;
    v24 = 4LL * ((v19 + 31) >> 5);
    goto LABEL_106;
  }
  if ( boneToWorldNext.m_bOwnsMemory )
  {
    if ( boneToWorldNext.m_pBones != 0 )
      operator delete[](boneToWorldNext.m_pBones);
    if ( boneToWorldNext.m_pReadableBones != 0 )
      operator delete[](boneToWorldNext.m_pReadableBones);
  }
  memset(&boneToWorldNext, 0, 19);
  boneToWorldNext.m_pBones = operator new[](48LL * v19);
  v20 = -1;
  v21 = (v19 + 31) >> 5;
  if ( v21 <= 0x1FC0000000000000LL )
    v20 = 4 * v21;
  v22 = operator new[](v20);
  boneToWorldNext.m_nBones = v19;
  v23 = v22;
  boneToWorldNext.m_pReadableBones = v22;
  boneToWorldNext.m_bOwnsMemory = 1;
  v24 = 4LL * ((v19 + 31) >> 5);
LABEL_28:
  memset(v23, 0, v24);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(pAnimating);
  v26.m_Data = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  massScale = CBaseAnimating::SequenceDuration(pAnimating, v26);
  pRagdoll = massScale * CBaseAnimating::GetBaseAnimatingController(pAnimating)->m_baseLayer.m_flCycle.m_Value;
  if ( pRagdoll > 0.1 || pRagdoll <= 0.0 )
    pRagdoll = 0.1;
  v27 = CBaseAnimating::GetBaseAnimatingController(pAnimating)->m_baseLayer.m_flCycle.m_Value
      - ((1.0 / massScale) * pRagdoll);
  if ( v27 < 0.0 )
    massScalea = 0.0;
  else
    massScalea = fminf(1.0, v27);
  v28 = CBaseEntity::s_bPreventingSetAnimRunAnimEvents;
  CBaseEntity::s_bPreventingSetAnimRunAnimEvents = 1;
  sg.m_bSavedState = v28;
  fCurCycle = CBaseAnimating::GetBaseAnimatingController(pAnimating)->m_baseLayer.m_flCycle.m_Value;
  v29 = (*(pAnimating->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(pAnimating->m_pGameSceneNode);
  CSkeletonInstance::CalcWorldSpaceBones(v29, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
  v30 = *(v29 + 456);
  v31 = *(v29 + 448);
  m_nBones = *(v29 + 468);
  if ( boneToWorldNext.m_nBones <= m_nBones )
    m_nBones = boneToWorldNext.m_nBones;
  memset(boneToWorldNext.m_pReadableBones, 0, 4LL * ((boneToWorldNext.m_nBones + 31) >> 5));
  memcpy(boneToWorldNext.m_pReadableBones, v30, 4LL * ((m_nBones + 31) >> 5));
  memcpy(boneToWorldNext.m_pBones, v31, 48 * m_nBones);
  CBaseAnimating::SetCycle(pAnimating, COERCE_DOUBLE(LODWORD(massScalea)), v33);
  v34 = (*(pAnimating->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(pAnimating->m_pGameSceneNode);
  CSkeletonInstance::CalcWorldSpaceBones(v34, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
  v35 = *(v34 + 456);
  v36 = *(v34 + 448);
  v37 = *(v34 + 468);
  if ( boneToWorld.m_nBones <= v37 )
    v37 = boneToWorld.m_nBones;
  memset(boneToWorld.m_pReadableBones, 0, 4LL * ((boneToWorld.m_nBones + 31) >> 5));
  memcpy(boneToWorld.m_pReadableBones, v35, 4LL * ((v37 + 31) >> 5));
  memcpy(boneToWorld.m_pBones, v36, 48 * v37);
  CBaseAnimating::SetCycle(pAnimating, COERCE_DOUBLE(LODWORD(fCurCycle)), v38);
  v41 = (pAnimating->m_iEFlags & 0x1000) == 0;
  CBaseEntity::s_bPreventingSetAnimRunAnimEvents = sg.m_bSavedState;
  if ( !v41 )
    CBaseEntity::CalcAbsoluteVelocity(pAnimating);
  vel = pAnimating->m_vecAbsVelocity;
  v42 = ((vel.x * vel.x) + (vel.y * vel.y)) + (vel.z * vel.z);
  if ( fsqrt(v42) == 0.0 && pRagdoll > 0.0 )
  {
    ModelPtr = CBaseAnimating::GetModelPtr(pAnimating);
    if ( ModelPtr != 0 )
    {
      v86 = CBaseAnimating::GetBaseAnimatingController(pAnimating);
      v87.m_Data = (*(v86->_vptr_CSkeletonAnimationController + 24))(v86);
      v88 = CModel::pSeqdesc(ModelPtr, v87);
      v89 = *(v88->_vptr_IBaseSequence + 58);
      sgb = CBaseAnimating::GetPoseParameterArray(pAnimating);
      v90 = CBaseAnimating::GetBaseAnimatingController(pAnimating);
      if ( v89(v88, sgb, &deltaPos, boxList, massScalea, v90->m_baseLayer.m_flCycle.m_Value) != 0 )
      {
        v124 = CBaseEntity::EntityToWorldTransform(pAnimating);
        VectorRotate(&deltaPos, v124, &vel.x);
        x = vel.x * (1.0 / pRagdoll);
        y = vel.y * (1.0 / pRagdoll);
        z = (1.0 / pRagdoll) * vel.z;
        vel.x = x;
        vel.y = y;
        vel.z = z;
      }
      else
      {
        x = vel.x;
        y = vel.y;
        z = vel.z;
      }
    }
    else
    {
      y = vel.x;
      x = vel.y;
      z = vel.z;
    }
    v42 = (z * z) + ((y * y) + (x * x));
  }
  if ( v42 > 0.0 )
  {
    v43 = CBaseAnimating::GetModelPtr(pAnimating);
    v44 = CModel::NumBones(v43);
    v45 = vel.x * pRagdoll;
    v46 = vel.y * pRagdoll;
    v47 = pRagdoll * vel.z;
    vel.x = vel.x * pRagdoll;
    vel.y = vel.y * pRagdoll;
    vel.z = pRagdoll * vel.z;
    if ( v44 > 0 )
    {
      m_pBones = boneToWorld.m_pBones;
      for ( i = 0; i != v44; ++i )
      {
        v40 = boneToWorld.m_nBones;
        if ( boneToWorld.m_nBones > i )
        {
          v40 = i >> 5;
          if ( ((1 << i) & boneToWorld.m_pReadableBones[v40]) != 0 )
          {
            v49 = m_pBones[11] - v47;
            v50 = m_pBones[3] - v45;
            m_pBones[7] = m_pBones[7] - v46;
            m_pBones[11] = v49;
            m_pBones[3] = v50;
          }
        }
        m_pBones += 12;
      }
    }
  }
  if ( (info->m_bitsDamageType & 0x10) != 0
    && (*(pAnimating->_vptr_IHandleEntity + 144))(pAnimating, v40, m_pBones) != 0 )
  {
    PrepareActivationRecordKeys<CRagdollProp>(
      &spawner,
      pAnimating,
      &vec3_origin,
      -1,
      &vec3_origin,
      &boneToWorld,
      pRagdoll,
      &boneToWorldNext,
      collisionGroup,
      1,
      1);
    v97 = 0.0 * info->m_vecDamagePosition.x;
    v98 = 0.0 * info->m_vecDamagePosition.y;
    normal.x = 0.0;
    normal.y = 0.0;
    normal.z = -1.0;
    HitboxesFrontside = CBaseAnimating::GetHitboxesFrontside(
                          pAnimating,
                          boxList,
                          128,
                          &normal,
                          (v97 + v98) - info->m_vecDamagePosition.z);
    v100 = CBaseAnimating::GetModelPtr(pAnimating);
    v101 = CModel::mass(v100);
    massScalec = 1.0;
    if ( v101 >= 1.0 )
    {
      massScalec = 0.000099999997;
      if ( v101 <= 10000.0 )
        massScalec = 1.0 / v101;
    }
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    v141.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      m_enabled = g_VProfCurrentProfile.m_enabled;
      fCurCyclea = m_enabled != 0;
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
      v106 = CUtlString::Get(&spawner.m_scriptClassName);
      Entity = CEntitySystem::CreateEntity(
                 g_pEntitySystem,
                 spawner.m_hSpawnGroupHandle,
                 spawner.m_pEntityClass,
                 v106,
                 m_nMode,
                 -1,
                 -1,
                 0,
                 0);
      v108 = Entity;
      if ( Entity != 0 )
      {
        m_pEntity = Entity->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v110 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v110 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v141.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v110 & 0x7FFF;
        }
        else
        {
          v141.m_Index = -1;
        }
        *&deltaPos = m_pEntity;
        *(&deltaPos + 1) = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          &deltaPos,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v108, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        m_pContext = spawner.m_pContext;
        for ( sga = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
        {
          m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
          pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
          if ( m_pthis != 0 || pfn != 0 )
          {
            v114 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
            if ( (pfn & 1) != 0 )
              pfn = *(pfn + *v114 - 1);
            (pfn)(v114, v108, sga);
          }
        }
      }
      if ( fCurCyclea )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    pRagdolla = CEntityHandle::operator CEntityInstance *(&v141);
    if ( HitboxesFrontside > 0 )
    {
      v115 = boxList;
      forcePos = &boxList[HitboxesFrontside - 1 + 1];
      do
      {
        HitboxBone = CBaseAnimating::GetHitboxBone(pAnimating, *v115);
        pObject = pRagdolla->m_ragdoll.list[CBaseAnimating::GetPhysicsBone(pAnimating, HitboxBone)].pObject;
        v118 = *(*pObject + 1776LL);
        v119 = (*(*pObject + 208LL))(pObject);
        *&v120 = (info->m_vecDamageForce.y * v119) * massScalec;
        v121 = (info->m_vecDamageForce.z * v119) * massScalec;
        *&v122 = (v119 * info->m_vecDamageForce.x) * massScalec;
        *(&deltaPos + 2) = v121;
        *&deltaPos = __PAIR64__(v120, v122);
        v118(pObject, &deltaPos);
        ++v115;
      }
      while ( v115 != forcePos );
    }
  }
  else
  {
    v51 = info->m_vecDamagePosition.z;
    v52 = info->m_vecDamagePosition.x;
    boxList[1] = LODWORD(info->m_vecDamagePosition.y);
    *&boxList[2] = v51;
    v53 = info->m_vecDamageForce.y;
    v54 = info->m_vecDamageForce.z;
    *boxList = v52;
    *&deltaPos = info->m_vecDamageForce.x;
    *(&deltaPos + 4) = __PAIR64__(LODWORD(v54), LODWORD(v53));
    PrepareActivationRecordKeys<CRagdollProp>(
      &spawner,
      pAnimating,
      &deltaPos,
      forceBone,
      boxList,
      &boneToWorld,
      pRagdoll,
      &boneToWorldNext,
      collisionGroup,
      1,
      1);
    v55 = spawner.m_pEntityKeyValues;
    v142.m_Index = -1;
    if ( spawner.m_pEntityKeyValues != 0 )
    {
      v56 = g_VProfCurrentProfile.m_enabled;
      massScaleb = v56 != 0;
      if ( v56 != 0 )
      {
        CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
        v55 = spawner.m_pEntityKeyValues;
      }
      if ( !CEntityKeyValues::HasValue(v55, -971301790) )
      {
        v57 = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
        if ( v57 != 0 )
          CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, v57);
      }
      CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
      v58 = spawner.m_nMode;
      v59 = CUtlString::Get(&spawner.m_scriptClassName);
      v60 = CEntitySystem::CreateEntity(
              g_pEntitySystem,
              spawner.m_hSpawnGroupHandle,
              spawner.m_pEntityClass,
              v59,
              v58,
              -1,
              -1,
              0,
              0);
      v61 = v60;
      if ( v60 != 0 )
      {
        v62 = v60->m_pEntity;
        if ( v62 != 0 )
        {
          v63 = 0x7FFF;
          if ( v62->m_EHandle.m_Index != -1 )
            v63 = v62->m_EHandle.m_Index & 0x7FFF;
          v142.m_Index = (((v62->m_EHandle.m_Index >> 15) - (v62->m_flags & 1)) << 15) | v63 & 0x7FFF;
        }
        else
        {
          v142.m_Index = -1;
        }
        *boxList = v62;
        *&boxList[2] = spawner.m_pEntityKeyValues;
        (*(*g_pGameResourceService + 280LL))(
          g_pGameResourceService,
          spawner.m_hSpawnGroupHandle,
          1,
          boxList,
          &spawner.m_mSpawnGroupToWorld);
        CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v61, spawner.m_pEntityKeyValues);
        if ( spawner.m_pSpawnBatch == 0 )
          CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
        v64 = spawner.m_pContext;
        for ( j = spawner.m_pEntityKeyValues; v64 != 0; v64 = v64->m_pParent )
        {
          v66 = v64->m_callback.m_Closure.m_pthis;
          v67 = v64->m_callback.m_Closure.m_pFunction.__pfn;
          if ( v66 != 0 || v67 != 0 )
          {
            v68 = (v66 + v64->m_callback.m_Closure.m_pFunction.__delta);
            if ( (v67 & 1) != 0 )
              v67 = *(v67 + *v68 - 1);
            (v67)(v68, v61, j);
          }
        }
      }
      if ( massScaleb )
        CVProfile::ExitScope(&g_VProfCurrentProfile);
    }
    pRagdolla = CEntityHandle::operator CEntityInstance *(&v142);
  }
  if ( (pAnimating->m_iEFlags & 0x8000000) != 0 )
    pRagdolla->m_iEFlags |= 0x8000000u;
  v69 = CEntityHandle::operator CEntityInstance *(&info->m_hInflictor);
  if ( v69 != 0 && (v70 = v69->m_pEntity) != 0 )
  {
    v71 = (v70->m_EHandle.m_Index >> 15) - (v70->m_flags & 1);
    v72 = 0x7FFF;
    if ( v70->m_EHandle.m_Index != -1 )
      v72 = v70->m_EHandle.m_Index & 0x7FFF;
    LOWORD(pRagdolla->m_hKiller.m_Index) = v72 | pRagdolla->m_hKiller.m_Index & 0x8000;
    pRagdolla->m_hKiller.m_Index = (v71 << 15) | pRagdolla->m_hKiller.m_Index & 0x7FFF;
  }
  else
  {
    pRagdolla->m_hKiller.m_Index = -1;
  }
  v73 = pAnimating->m_pEntity;
  m_pAsString = "";
  if ( v73->m_designerName.u.m_Id != 0 )
    m_pAsString = v73->m_designerName.u.m_pAsString;
  MakeEntitySystemString(m_pAsString);
  pRagdolla->m_strSourceClassName.u.m_Id = v143;
  (*(pRagdolla->_vptr_IHandleEntity + 40))(pRagdolla, pAnimating);
  v75 = pRagdolla->m_pEntity;
  name.u.m_Id = pAnimating->m_pEntity->m_name.u.m_Id;
  CEntityIdentity::SetEntityName(v75, &name);
  v76.m_nHashCode = CBaseAnimating::GetSkin(pAnimating).m_nHashCode;
  CBaseAnimating::SetSkin(pRagdolla, v76);
  Body = CBaseAnimating::GetBody(pAnimating);
  CBaseAnimating::SetBody(pRagdolla, Body);
  if ( (pAnimating->m_fFlags.m_Value & 0x10000000) != 0 )
  {
    CBaseAnimating::TransferDissolveFrom(pRagdolla, pAnimating);
  }
  else if ( bUseLRURetirement )
  {
    m_Value = pRagdolla->m_spawnflags.m_Value;
    BYTE1(m_Value) |= 0x10u;
    if ( pRagdolla->m_spawnflags.m_Value != m_Value )
    {
      (*(pRagdolla->_vptr_IHandleEntity + 22))(pRagdolla, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      pRagdolla->m_spawnflags.m_Value = m_Value;
    }
    CRagdollLRURetirement::MoveToTopOfLRU(g_pRagdollLRU, pRagdolla, 0);
  }
  v78 = (*(pAnimating->m_Collision._vptr_ICollideable + 1))(&pAnimating->m_Collision);
  mins.x = *v78;
  mins.y = *(v78 + 4);
  v79 = *(v78 + 8);
  vptr_ICollideable = pAnimating->m_Collision._vptr_ICollideable;
  mins.z = v79;
  normal = *(vptr_ICollideable[2])(&pAnimating->m_Collision);
  CCollisionProperty::SetCollisionBounds(&pRagdolla->m_Collision, &mins, &normal);
  (*(pAnimating->_vptr_IHandleEntity + 191))(pAnimating, pRagdolla);
  if ( boneToWorldNext.m_bOwnsMemory )
  {
    if ( boneToWorldNext.m_pBones != 0 )
      operator delete[](boneToWorldNext.m_pBones);
    if ( boneToWorldNext.m_pReadableBones != 0 )
      operator delete[](boneToWorldNext.m_pReadableBones);
  }
  memset(&boneToWorldNext, 0, 19);
  if ( boneToWorld.m_bOwnsMemory )
  {
    if ( boneToWorld.m_pBones != 0 )
      operator delete[](boneToWorld.m_pBones);
    if ( boneToWorld.m_pReadableBones != 0 )
      operator delete[](boneToWorld.m_pReadableBones);
  }
  v81 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_4081810;
  memset(&boneToWorld, 0, 19);
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v81 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v81);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v82 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v82);
      operator delete(v82);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  return pRagdolla;
}


// CRagdollPropAttached::DetachOnNextUpdate  (line 1522, @0x00000000022dbe40, libserver.so)
void __fastcall CRagdollPropAttached::DetachOnNextUpdate(CRagdollPropAttached *const this)
{
  this->m_bShouldDetach = 1;
}


// CRagdollPropAttached::VPhysicsUpdate  (line 1527, @0x00000000022dbf80, libserver.so)
// calls: CRagdollPropAttached::Detach, CRagdollProp::VPhysicsUpdate
void __fastcall CRagdollPropAttached::VPhysicsUpdate(CRagdollPropAttached *const this, IPhysicsObject *pPhysics)
{
  IPhysicsObject *pPhysicsa; // [rsp+8h] [rbp-18h]

  if ( this->m_bShouldDetach )
  {
    pPhysicsa = pPhysics;
    CRagdollPropAttached::Detach(this);
    pPhysics = pPhysicsa;
    this->m_bShouldDetach = 0;
  }
  CRagdollProp::VPhysicsUpdate(this, pPhysics);
}


// CRagdollPropAttached::Detach  (line 1537, @0x00000000022dbe50, libserver.so)  // inlines: SetCollisionGroup
// calls: CBaseEntity::SetParent, CBaseEntity::SetAbsAngles, CBaseEntity::SetMoveType, CBaseEntity::VPhysicsWorld, CCollisionProperty::SetCollisionGroup
// callers: CRagdollPropAttached::VPhysicsUpdate
void __fastcall CRagdollPropAttached::Detach(CRagdollPropAttached *const this)
{
  IVPhysics2World *v2; // rax
  int listCount; // r11d
  IPhysicsObject **p_pObject; // rbx
  int v5; // r15d
  IPhysicsObject *v6; // rdi
  __int64 v7; // rdi
  float damping; // [rsp+18h] [rbp-38h] BYREF
  float rotdamping[13]; // [rsp+1Ch] [rbp-34h] BYREF

  CBaseEntity::SetParent(this, 0, 0, 0);
  (*(this->_vptr_IHandleEntity + 40))(this, 0);
  CBaseEntity::SetAbsAngles(this, &vec3_angle);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_VPHYSICS, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 15))(&this->m_Collision);
  v2 = CBaseEntity::VPhysicsWorld(this);
  (*(*v2 + 904LL))(v2, this->m_hAttachConstraint);
  listCount = this->m_ragdoll.listCount;
  this->m_hAttachConstraint = 0;
  if ( listCount > 0 )
  {
    p_pObject = &this->m_ragdoll.list[0].pObject;
    v5 = 0;
    do
    {
      v6 = *p_pObject;
      ++v5;
      p_pObject += 5;
      (*(*v6 + 1632LL))(v6, &damping, rotdamping);
      v7 = *(p_pObject - 5);
      damping = 0.02 * damping;
      rotdamping[0] = 0.02 * rotdamping[0];
      (*(*v7 + 1624LL))(v7, &damping, &damping);
    }
    while ( this->m_ragdoll.listCount > v5 );
  }
  CCollisionProperty::SetCollisionGroup(&this->m_Collision, 5);
}


// CRagdollPropAttached::ApplyAttachedActivationRecord  (line 1560, @0x00000000022ec8b0, libserver.so)  // inlines: Defaults, GetColumn, MatrixGetColumn, MatrixSetColumn, NetworkStateChanged, QAngle, Set, SetAxisLimits, SetAxisMotor, SetColumn, operator!=, operator=, operator=<int>
// calls: CRagdollProp::ApplyActivationRecord, CBaseAnimating::GetPhysicsBone, SetIdentityMatrix, CBaseEntity::GetAbsAngles, AngleMatrix, MatrixInvert, ConcatTransforms, CBaseEntity::VPhysicsWorld, CBaseAnimating::GetSkin, CBaseAnimating::SetSkin, CBaseAnimating::GetBody, CBaseAnimating::SetBody (15 total)
// callers: CRagdollPropAttached::Activate
void __fastcall CRagdollPropAttached::ApplyAttachedActivationRecord(
        CRagdollPropAttached *const this,
        AttachedRagdollActivationRecord_t *pRecord)
{
  int m_nParentBoneAttach; // esi
  int PhysicsBone; // eax
  IPhysicsObject *pObject; // r14
  __int64 v7; // rdi
  vec_t y; // xmm0_4
  __int64 v9; // rdi
  IVPhysics2World *v10; // rax
  CBaseAnimating *m_pCopyAnimationDataFrom; // rdi
  CUtlStringToken v12; // eax
  MeshGroupMask_t Body; // rax
  IPhysicsObject **p_pObject; // r14
  int v15; // r15d
  IPhysicsObject *v16; // rdi
  __int64 v17; // rdi
  unsigned int m_nBoneIndexRoot; // ebx
  unsigned int v19; // [rsp+4h] [rbp-22Ch]
  vec_t v20; // [rsp+18h] [rbp-218h]
  vec_t in1; // [rsp+20h] [rbp-210h]
  vec_t pRecordb; // [rsp+28h] [rbp-208h]
  float damping; // [rsp+3Ch] [rbp-1F4h] BYREF
  float rotdamping[4]; // [rsp+40h] [rbp-1F0h] BYREF
  Vector attachmentPointRagdollSpace; // [rsp+50h] [rbp-1E0h] BYREF
  Vector offsetWS; // [rsp+60h] [rbp-1D0h] BYREF
  QAngle followAng; // [rsp+70h] [rbp-1C0h] BYREF
  matrix3x4_t tmp; // [rsp+80h] [rbp-1B0h] BYREF
  matrix3x4_t worldToAttached; // [rsp+B0h] [rbp-180h] BYREF
  matrix3x4_t worldToReference; // [rsp+E0h] [rbp-150h] BYREF
  matrix3x4_t constraintToWorld; // [rsp+110h] [rbp-120h] BYREF
  constraint_ragdollparams_t constraint; // [rsp+140h] [rbp-F0h] BYREF

  CRagdollProp::ApplyActivationRecord(this, pRecord);
  m_nParentBoneAttach = pRecord->m_nParentBoneAttach;
  if ( m_nParentBoneAttach <= 0 )
  {
    v19 = 0;
    PhysicsBone = 0;
  }
  else
  {
    PhysicsBone = CBaseAnimating::GetPhysicsBone(this, m_nParentBoneAttach);
    v19 = PhysicsBone;
  }
  pObject = this->m_ragdoll.list[PhysicsBone].pObject;
  (*(*pObject + 1752LL))(pObject, &attachmentPointRagdollSpace, &pRecord->m_WorldAttachOrigin);
  constraint.isActive = 1;
  constraint.constraint.forceLimit = 0.0;
  constraint.constraint.torqueLimit = 0.0;
  constraint.constraint.strength = 1.0;
  constraint.constraint.bodyMassScale[0] = 1.0;
  constraint.constraint.bodyMassScale[1] = 1.0;
  constraint.constraint.isActive = 1;
  SetIdentityMatrix(&constraint.constraintToReference);
  SetIdentityMatrix(&constraint.constraintToAttached);
  v7 = *(&stru_18030.r_offset + pRecord);
  constraint.parentIndex = -1;
  constraint.childIndex = -1;
  memset(constraint.axes, 0, 49);
  constraint.useClockwiseRotations = 0;
  (*(*v7 + 1744LL))(v7, &offsetWS, &pRecord->m_BoneLocalOrigin);
  y = CBaseEntity::GetAbsAngles(pRecord->m_pFollow)->y;
  followAng.x = 0.0;
  followAng.z = 0.0;
  followAng.y = y;
  AngleMatrix(&followAng, &offsetWS, &constraintToWorld);
  constraint.axes[0].flMinRotation = -2.0;
  constraint.axes[0].flMaxRotation = 2.0;
  constraint.axes[0].flMotorTargetAngSpeed = 0.0;
  v9 = *(&stru_18030.r_offset + pRecord);
  constraint.axes[0].flMotorMaxTorque = 20.0;
  constraint.axes[1].flMinRotation = 0.0;
  constraint.axes[1].flMaxRotation = 0.0;
  constraint.axes[1].flMotorTargetAngSpeed = 0.0;
  constraint.axes[1].flMotorMaxTorque = 0.0;
  constraint.axes[2].flMinRotation = -15.0;
  constraint.axes[2].flMaxRotation = 15.0;
  constraint.axes[2].flMotorTargetAngSpeed = 0.0;
  constraint.axes[2].flMotorMaxTorque = 20.0;
  constraint.constraint.bodyMassScale[1] = 50.0;
  (*(*v9 + 1680LL))(v9, &tmp);
  MatrixInvert(&tmp, &worldToAttached);
  (*(*pObject + 1680LL))(pObject, &tmp);
  MatrixInvert(&tmp, &worldToReference);
  ConcatTransforms(&worldToReference, &constraintToWorld, &constraint.constraintToReference);
  ConcatTransforms(&worldToAttached, &constraintToWorld, &constraint.constraintToAttached);
  constraint.constraintToReference.m_flMatVal[0][3] = attachmentPointRagdollSpace.x;
  constraint.constraintToReference.m_flMatVal[1][3] = attachmentPointRagdollSpace.y;
  constraint.constraintToReference.m_flMatVal[2][3] = attachmentPointRagdollSpace.z;
  v10 = CBaseEntity::VPhysicsWorld(this);
  this->m_hAttachConstraint = (*(*v10 + 312LL))(
                                v10,
                                pObject,
                                *(&stru_18030.r_offset + pRecord),
                                &constraintToWorld,
                                &constraint);
  (*(this->_vptr_IHandleEntity + 40))(this, pRecord->m_pFollow);
  m_pCopyAnimationDataFrom = pRecord->m_pCopyAnimationDataFrom;
  if ( m_pCopyAnimationDataFrom != 0 )
  {
    v12.m_nHashCode = CBaseAnimating::GetSkin(m_pCopyAnimationDataFrom).m_nHashCode;
    CBaseAnimating::SetSkin(this, v12);
    Body = CBaseAnimating::GetBody(pRecord->m_pCopyAnimationDataFrom);
    CBaseAnimating::SetBody(this, Body);
  }
  CBaseEntity::GetModel(rotdamping, this);
  RagdollActivate(&this->m_ragdoll, rotdamping, 1);
  if ( this->m_ragdoll.listCount > 0 )
  {
    p_pObject = &this->m_ragdoll.list[0].pObject;
    v15 = 0;
    do
    {
      v16 = *p_pObject;
      ++v15;
      p_pObject += 5;
      (*(*v16 + 1632LL))(v16, &damping, rotdamping);
      v17 = *(p_pObject - 5);
      damping = 50.0 * damping;
      rotdamping[0] = 50.0 * rotdamping[0];
      (*(*v17 + 1624LL))(v17, &damping, rotdamping);
    }
    while ( this->m_ragdoll.listCount > v15 );
  }
  m_nBoneIndexRoot = pRecord->m_nBoneIndexRoot;
  if ( m_nBoneIndexRoot != this->m_boneIndexAttached.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_boneIndexAttached.m_Value = m_nBoneIndexRoot;
  }
  if ( this->m_ragdollAttachedObjectIndex.m_Value != v19 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_ragdollAttachedObjectIndex.m_Value = v19;
  }
  if ( pRecord->m_BoneLocalOrigin.x != this->m_attachmentPointBoneSpace.m_Value.x
    || *(&stru_18048.r_offset + pRecord) != this->m_attachmentPointBoneSpace.m_Value.y
    || pRecord->m_BoneLocalOrigin.z != this->m_attachmentPointBoneSpace.m_Value.z )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 4272, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_attachmentPointBoneSpace.m_Value.x = pRecord->m_BoneLocalOrigin.x;
    this->m_attachmentPointBoneSpace.m_Value.y = *(&stru_18048.r_offset + pRecord);
    this->m_attachmentPointBoneSpace.m_Value.z = pRecord->m_BoneLocalOrigin.z;
  }
  if ( constraint.constraintToReference.m_flMatVal[0][3] != this->m_attachmentPointRagdollSpace.m_Value.x
    || constraint.constraintToReference.m_flMatVal[1][3] != this->m_attachmentPointRagdollSpace.m_Value.y
    || constraint.constraintToReference.m_flMatVal[2][3] != this->m_attachmentPointRagdollSpace.m_Value.z )
  {
    v20 = constraint.constraintToReference.m_flMatVal[0][3];
    in1 = constraint.constraintToReference.m_flMatVal[1][3];
    pRecordb = constraint.constraintToReference.m_flMatVal[2][3];
    (*(this->_vptr_IHandleEntity + 22))(this, 4284, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_attachmentPointRagdollSpace.m_Value.x = v20;
    this->m_attachmentPointRagdollSpace.m_Value.y = in1;
    this->m_attachmentPointRagdollSpace.m_Value.z = pRecordb;
  }
  CRagdollProp::RagdollPostActivate(this);
}


// CreateServerRagdollAttached  (line 1643, @0x00000000022f6450, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, AddKeyValue<QAngle>, AddKeyValue<Vector>, AddKeyValue<bool>, AddKeyValue<long long unsigned int>, AddToTail, Alloc, Allocate<QAngle>, Allocate<Vector>, Base, CBoneAccessor, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CHandle, CUtlString, CVProfScope, CWritableBoneAccessor, CWritableBoneContainer, CalcNumIntsForBits, Cleanup, ClearBoneReadableBits, CopyData<QAngle>, CopyData<Vector>, CopyFrom, Element, FindKeyHash, Free, Get, GetClassInfo, GetEHandle, GetEntityClass, GetEntryIndex, GetInstance, GetNumBones, GetSerialNumber, GetSkeletonInstance, GetWorldSpaceBones, GetWorldSpaceState, Init, Init_Internal, InvokeCallbacks, IsEmpty, IsEnabled, OverrideAllocator, PrepareActivationRecordKeysAttached<CRagdollPropAttached>, Release, ReleaseEntitySpawnerEntityVariantAllocator, ResourceHandleToData<InfoForResourceTypeCModel>, Set, SetClassName, SetValue, SetValue<QAngle>, SetValue<Vector>, SetValue<bool>, SetValue<long long unsigned int>, SetWorldTransform, Spawn, V_memcpy, V_memset, memcpy, memset, operator CRagdollPropAttached*, operator int, operator!, operator(), operator->, operator=, operator[], ~CBoneAccessor, ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CUtlString, ~CVProfScope, ~CWritableBoneAccessor, ~CWritableBoneContainer
// calls: CBaseEntity::GetModel, CModel::HasCollision, CModel::NumBones, operator delete [], operator new [], memset, CSkeletonInstance::CalcWorldSpaceBones, memcpy, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CEntityKeyValues::SetValue (36 total)
// strings: "prop_ragdoll_attached", "Server Simulation", "Spawn", "Attempted to set attribute %s as if it was a non-attribute key!\n"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride
CRagdollProp *__fastcall CreateServerRagdollAttached(
        CBaseAnimating *pAnimating,
        const Vector *const vecForce,
        int forceBone,
        int collisionGroup,
        IPhysicsObject *pAttached,
        CBaseAnimating *pParentEntity,
        int boneAttach,
        const Vector *const originAttached,
        int parentBoneAttach,
        const Vector *const boneOrigin)
{
  const CModel *v12; // rdi
  int v13; // r12d
  size_t v14; // rdi
  unsigned __int64 v15; // rax
  const uint32 *v16; // rax
  unsigned int *m_readableBoneStorage; // rdi
  size_t v18; // rdx
  __int64 v19; // r12
  void *v20; // rcx
  void *v21; // rax
  __int64 m_nBones; // r12
  CEntitySystem *v23; // rdi
  CUtlScratchMemoryPool *v24; // rax
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v26; // rax
  char v27; // al
  const Vector *AbsOrigin; // rax
  CEntityKeyValues *m_pEntityKeyValues; // r12
  char *v30; // r12
  vec_t z; // xmm0_4
  __int64 v32; // r13
  vec_t v33; // xmm0_4
  CEntityKeyValues *v34; // rbx
  int m_enabled; // esi
  bool v36; // r15
  const char *m_pszClassname; // rdx
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v39; // rax
  CEntityInstance *Entity; // rax
  CEntityInstance *v41; // r12
  CEntityIdentity *m_pEntity; // rax
  __int16 v43; // si
  CEntitySpawnerContext<CRagdollPropAttached> *m_pContext; // rbx
  CEntityKeyValues *i; // r13
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v48; // rdi
  CEntityInstance *v49; // rax
  CUtlScratchMemoryPool *v50; // rdi
  CRagdollProp *v51; // r12
  CEntityKeyValues *v52; // rbx
  uint16 v55; // ax
  int v56; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v57; // cx
  __int64 v58; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v59; // rdx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v61; // cx
  __int64 v62; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v63; // rdx
  __int16 v65; // r13
  unsigned __int64 v66; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v67; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v68; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v69; // rax
  uint16 v70; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v71; // rax
  __int16 v72; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v75; // rax
  uint16 m_flags; // ax
  _DWORD *v77; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v78; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // r12
  CEntityKeyValues *v82; // r12
  int v83; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v84; // cx
  __int64 v85; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v86; // rdx
  __int16 v87; // dx
  unsigned __int64 v88; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v89; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v90; // rax
  uint16 v91; // ax
  vec_t *v92; // rax
  vec_t x; // xmm0_4
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v94; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r12
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rcx
  int v101; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v102; // cx
  __int64 v103; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v104; // rdx
  __int64 v105; // r12
  unsigned __int64 v106; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v107; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v108; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v109; // rax
  uint16 v110; // cx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v111; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v112; // rdx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int16 v115; // ax
  _DWORD *v116; // rax
  __int16 v117; // ax
  __int16 v118; // ax
  QAngle *v119; // rax
  __int16 v120; // ax
  __int64 v121; // [rsp+18h] [rbp-1478h]
  void *v122; // [rsp+28h] [rbp-1468h]
  void *v123; // [rsp+28h] [rbp-1468h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v124; // [rsp+28h] [rbp-1468h]
  __int64 v125; // [rsp+28h] [rbp-1468h]
  void *src; // [rsp+30h] [rbp-1460h]
  _DWORD *srca; // [rsp+30h] [rbp-1460h]
  void *srcb; // [rsp+30h] [rbp-1460h]
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *srcc; // [rsp+30h] [rbp-1460h]
  CEntityHandle v134; // [rsp+50h] [rbp-1440h] BYREF
  _QWORD v135[2]; // [rsp+60h] [rbp-1430h] BYREF
  CEntitySpawner<CRagdollPropAttached> spawner; // [rsp+70h] [rbp-1420h] BYREF
  CWritableBoneContainer<matrix3x4a_t,100> boneToWorld; // [rsp+110h] [rbp-1380h] BYREF

  CBaseEntity::GetModel(&spawner, pAnimating);
  if ( spawner._vptr_CEntitySpawnerBase == 0 )
    return 0;
  CBaseEntity::GetModel(&boneToWorld, pAnimating);
  v12 = boneToWorld.m_pBones != 0 ? *&boneToWorld.m_pBones->m_flMatVal[0][0] : 0LL;
  if ( !CModel::HasCollision(v12) )
    return 0;
  CBaseEntity::GetModel(&spawner, pAnimating);
  memset(&boneToWorld, 0, 19);
  if ( spawner._vptr_CEntitySpawnerBase == 0
    || *(spawner._vptr_CEntitySpawnerBase + 6) <= 0
    || *spawner._vptr_CEntitySpawnerBase == 0 )
  {
    v18 = 0;
    v55 = 0;
LABEL_59:
    boneToWorld.m_bOwnsMemory = 0;
    boneToWorld.m_nBones = v55;
    m_readableBoneStorage = boneToWorld.m_readableBoneStorage;
    boneToWorld.m_pReadableBones = boneToWorld.m_readableBoneStorage;
    boneToWorld.m_pBones = boneToWorld.m_boneStorage;
    goto LABEL_17;
  }
  v13 = CModel::NumBones(*spawner._vptr_CEntitySpawnerBase);
  if ( v13 <= 100 )
  {
    if ( boneToWorld.m_bOwnsMemory )
    {
      if ( boneToWorld.m_pBones != 0 )
        operator delete[](boneToWorld.m_pBones);
      if ( boneToWorld.m_pReadableBones != 0 )
        operator delete[](boneToWorld.m_pReadableBones);
    }
    v55 = v13;
    v18 = 4LL * ((v13 + 31) >> 5);
    goto LABEL_59;
  }
  if ( boneToWorld.m_bOwnsMemory )
  {
    if ( boneToWorld.m_pBones != 0 )
      operator delete[](boneToWorld.m_pBones);
    if ( boneToWorld.m_pReadableBones != 0 )
      operator delete[](boneToWorld.m_pReadableBones);
  }
  memset(&boneToWorld, 0, 19);
  boneToWorld.m_pBones = operator new[](48LL * v13);
  v14 = -1;
  v15 = (v13 + 31) >> 5;
  if ( v15 <= 0x1FC0000000000000LL )
    v14 = 4 * v15;
  v16 = operator new[](v14);
  boneToWorld.m_nBones = v13;
  m_readableBoneStorage = v16;
  boneToWorld.m_pReadableBones = v16;
  boneToWorld.m_bOwnsMemory = 1;
  v18 = 4LL * ((v13 + 31) >> 5);
LABEL_17:
  memset(m_readableBoneStorage, 0, v18);
  v19 = (*(pAnimating->m_pGameSceneNode->_vptr_CGameSceneNode + 9))(pAnimating->m_pGameSceneNode);
  CSkeletonInstance::CalcWorldSpaceBones(v19, CModelSkeleton::BoneFlags_t::FLAG_PHYSICS);
  v20 = *(v19 + 448);
  v21 = *(v19 + 456);
  m_nBones = *(v19 + 468);
  v122 = v20;
  src = v21;
  if ( boneToWorld.m_nBones <= m_nBones )
    m_nBones = boneToWorld.m_nBones;
  memset(boneToWorld.m_pReadableBones, 0, 4LL * ((boneToWorld.m_nBones + 31) >> 5));
  memcpy(boneToWorld.m_pReadableBones, src, 4LL * ((m_nBones + 31) >> 5));
  memcpy(boneToWorld.m_pBones, v122, 48 * m_nBones);
  spawner._vptr_CEntitySpawnerBase = off_4081850;
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_scriptClassName.m_pString = 0;
  spawner._vptr_CEntitySpawnerBase = off_4081870;
  spawner.m_pContext = 0;
  spawner.m_pSpawnBatch = 0;
  v23 = g_pEntitySystem;
  v24 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v23->m_entitySpawnerData;
  spawner.m_pPrevAllocator = v24;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v23);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  qmemcpy(spawner.m_mSpawnGroupToWorld.m_flMatVal[1], SpawnOriginOffset->m_flMatVal[1], 24);
  v26 = *&SpawnOriginOffset->m_flMatVal[2][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][2] = v26;
  spawner.m_pEntityClass = g_pEntityCRagdollPropAttachedClass;
  if ( g_pApplication != 0 )
    v27 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v27 = 0;
  spawner.m_bValidateKeys = v27;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, "prop_ragdoll_attached");
  spawner.m_pEntityClass = CEntitySystem::FindClassByDesignName(
                             g_pEntitySystem,
                             "prop_ragdoll_attached",
                             &spawner.m_scriptClassName);
  AbsOrigin = CBaseEntity::GetAbsOrigin(pAnimating);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  srca = &AbsOrigin->x;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount <= 0 )
  {
    m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount <= 0 )
    {
LABEL_94:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v72 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
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
      v123 = v72;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v75 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v75 = 0;
      v121 = v123;
      v124 = &v75[v123];
      m_flags = v124->m_value.m_flags;
      if ( (m_flags & 1) != 0 )
        v124->m_value.m_flags = m_flags & 0xFFFE;
      v124->m_value.m_uint64 = 0;
      v124->m_value.m_type = 3;
      v77 = CEntityVariantAllocator::Allocate(0xCu);
      v124->m_value.m_uint64 = v77;
      *v77 = *srca;
      v77[1] = srca[1];
      v77[2] = srca[2];
      v124->m_value.m_flags |= 1u;
      if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
        v78 = m_pEntityKeyValues->m_keyValues.m_pElements;
      else
        v78 = 0;
      v78[v121].m_pAttributeName = 0;
    }
    else
    {
      v61 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
      v62 = 0;
      while ( 1 )
      {
        if ( v61 != 0 )
        {
          v63 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( v61 > 9 )
            v63 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
        }
        else
        {
          v63 = 0;
        }
        if ( v63[v62] == -467664362 )
          break;
        if ( m_nCount <= ++v62 )
          goto LABEL_94;
      }
      if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      {
        v79 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
        v80 = v62;
        v81 = &v79[v80];
        if ( v79[v80].m_pAttributeName != 0 )
        {
LABEL_106:
          Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v79[v80].m_pAttributeName);
          goto LABEL_107;
        }
      }
      else
      {
        v80 = v62;
        v79 = 0;
        v81 = v80 * 24;
        if ( *(v80 * 24 + 16) != 0 )
          goto LABEL_106;
      }
      v115 = *(v81 + 10);
      if ( (v115 & 1) != 0 )
        *(v81 + 10) = v115 & 0xFFFE;
      *v81 = 0;
      *(v81 + 8) = 3;
      v116 = CEntityVariantAllocator::Allocate(0xCu);
      *v81 = v116;
      *v116 = *srca;
      v116[1] = srca[1];
      v116[2] = srca[2];
      *(v81 + 10) |= 1u;
    }
LABEL_107:
    v82 = spawner.m_pEntityKeyValues;
    if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
      goto LABEL_22;
    v83 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
    if ( v83 <= 0 )
    {
LABEL_116:
      CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
      v87 = v82->m_keyHashes.m_nCount - 1;
      v88 = v82->m_keyHashes.m_nAllocated;
      if ( v88 != 0 )
      {
        if ( v88 <= 9 )
          v89 = (&v82->m_keyHashes.m_nAllocAllocated + 1);
        else
          v89 = v82->m_keyHashes.m_pElements;
      }
      else
      {
        v89 = 0;
      }
      v89[(v82->m_keyHashes.m_nCount - 1)] = -1164387633;
      srcb = v87;
      CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v82->m_keyValues);
      if ( v82->m_keyValues.m_nAllocated != 0 )
        v90 = v82->m_keyValues.m_pElements;
      else
        v90 = 0;
      v125 = srcb;
      srcc = &v90[srcb];
      v91 = srcc->m_value.m_flags;
      if ( (v91 & 1) != 0 )
        srcc->m_value.m_flags = v91 & 0xFFFE;
      srcc->m_value.m_uint64 = 0;
      srcc->m_value.m_type = 39;
      v92 = CEntityVariantAllocator::Allocate(0xCu);
      x = vec3_angle.x;
      srcc->m_value.m_uint64 = v92;
      *v92 = x;
      v92[1] = vec3_angle.y;
      v92[2] = vec3_angle.z;
      srcc->m_value.m_flags |= 1u;
      if ( v82->m_keyValues.m_nAllocated != 0 )
        v94 = v82->m_keyValues.m_pElements;
      else
        v94 = 0;
      v94[v125].m_pAttributeName = 0;
      goto LABEL_22;
    }
    v84 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v85 = 0;
    while ( 1 )
    {
      if ( v84 != 0 )
      {
        v86 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v84 > 9 )
          v86 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v86 = 0;
      }
      if ( v86[v85] == -1164387633 )
        break;
      if ( v83 <= ++v85 )
        goto LABEL_116;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v95 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v96 = v85;
      v97 = &v95[v96];
      if ( v95[v96].m_pAttributeName != 0 )
      {
LABEL_128:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v95[v96].m_pAttributeName);
        goto LABEL_22;
      }
    }
    else
    {
      v96 = v85;
      v95 = 0;
      v97 = v96 * 24;
      if ( *(v96 * 24 + 16) != 0 )
        goto LABEL_128;
    }
    v118 = *(v97 + 10);
    if ( (v118 & 1) != 0 )
      *(v97 + 10) = v118 & 0xFFFE;
    *v97 = 0;
    *(v97 + 8) = 39;
    v119 = CEntityVariantAllocator::Allocate(0xCu);
    *v97 = v119;
    *v119 = vec3_angle;
    *(v97 + 10) |= 1u;
  }
LABEL_22:
  v30 = operator new(&stru_18060);
  *(&stru_18030.r_offset + v30) = pAttached;
  *(v30 + 12295) = pParentEntity;
  *(v30 + 24592) = boneAttach;
  *(v30 + 24593) = LODWORD(boneOrigin->x);
  *(&stru_18048.r_offset + v30) = boneOrigin->y;
  *(v30 + 24595) = LODWORD(boneOrigin->z);
  *(v30 + 24596) = parentBoneAttach;
  *(v30 + 24597) = LODWORD(originAttached->x);
  *(v30 + 24598) = LODWORD(originAttached->y);
  z = originAttached->z;
  v32 = 49152;
  v30[98340] = 0;
  v30[98341] = 1;
  *(v30 + 24599) = z;
  if ( boneToWorld.m_nBones <= 0x3FFu )
    v32 = 48LL * boneToWorld.m_nBones;
  __memcpy_chk(v30 + 49180, boneToWorld.m_pBones, v32, 49220);
  __memcpy_chk(v30 + 28, boneToWorld.m_pBones, v32, 98372);
  *(v30 + 16) = vec3_origin;
  *(v30 + 3) = forceBone;
  *v30 = vecForce->x;
  *(v30 + 1) = LODWORD(vecForce->y);
  v33 = vecForce->z;
  *(v30 + 24584) = collisionGroup;
  *(v30 + 24583) = 1036831949;
  *(v30 + 2) = v33;
  *(v30 + 12293) = pAnimating;
  v34 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
    goto LABEL_25;
  v56 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v56 <= 0 )
  {
LABEL_84:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v65 = v34->m_keyHashes.m_nCount - 1;
    v66 = v34->m_keyHashes.m_nAllocated;
    if ( v66 != 0 )
    {
      if ( v66 <= 9 )
        v67 = (&v34->m_keyHashes.m_nAllocAllocated + 1);
      else
        v67 = v34->m_keyHashes.m_pElements;
    }
    else
    {
      v67 = 0;
    }
    v67[v65] = -880527477;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v34->m_keyValues);
    if ( v34->m_keyValues.m_nAllocated != 0 )
      v68 = v34->m_keyValues.m_pElements;
    else
      v68 = 0;
    v69 = &v68[v65];
    v70 = v69->m_value.m_flags;
    if ( (v70 & 1) != 0 )
      v69->m_value.m_flags = v70 & 0xFFFE;
    v69->m_value.m_uint64 = v30;
    v69->m_value.m_type = 33;
    if ( v34->m_keyValues.m_nAllocated != 0 )
      v71 = v34->m_keyValues.m_pElements;
    else
      v71 = 0;
    v71[v65].m_pAttributeName = 0;
  }
  else
  {
    v57 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v58 = 0;
    while ( 1 )
    {
      if ( v57 != 0 )
      {
        v59 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v57 > 9 )
          v59 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v59 = 0;
      }
      if ( v59[v58] == -880527477 )
        break;
      if ( v56 <= ++v58 )
        goto LABEL_84;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v98 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v99 = v58;
      v100 = &v98[v99];
      if ( v98[v99].m_pAttributeName != 0 )
      {
LABEL_131:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v98[v99].m_pAttributeName);
        goto LABEL_132;
      }
    }
    else
    {
      v99 = v58;
      v98 = 0;
      v100 = v99 * 24;
      if ( *(v99 * 24 + 16) != 0 )
        goto LABEL_131;
    }
    v117 = *(v100 + 10);
    if ( (v117 & 1) != 0 )
      *(v100 + 10) = v117 & 0xFFFE;
    *v100 = v30;
    *(v100 + 8) = 33;
  }
LABEL_132:
  v34 = spawner.m_pEntityKeyValues;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
LABEL_25:
    v134.m_Index = -1;
LABEL_26:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v36 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      CVProfile::EnterScope(&g_VProfCurrentProfile, "Spawn", 0, "Server Simulation", 0, 4);
      v34 = spawner.m_pEntityKeyValues;
    }
    if ( !CEntityKeyValues::HasValue(v34, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v39 = CUtlString::Get(&spawner.m_scriptClassName);
    Entity = CEntitySystem::CreateEntity(
               g_pEntitySystem,
               spawner.m_hSpawnGroupHandle,
               spawner.m_pEntityClass,
               v39,
               m_nMode,
               -1,
               -1,
               0,
               0);
    v41 = Entity;
    if ( Entity != 0 )
    {
      m_pEntity = Entity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v43 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v43 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v134.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v43 & 0x7FFF;
      }
      else
      {
        v134.m_Index = -1;
      }
      v135[0] = m_pEntity;
      v135[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v135,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, v41, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v48 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v48 - 1);
          (pfn)(v48, v41, i);
        }
      }
    }
    if ( v36 )
      CVProfile::ExitScope(&g_VProfCurrentProfile);
    goto LABEL_46;
  }
  v101 = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( v101 > 0 )
  {
    v102 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v103 = 0;
    while ( 1 )
    {
      if ( v102 != 0 )
      {
        v104 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v102 > 9 )
          v104 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v104 = 0;
      }
      if ( v104[v103] == -1323173286 )
        break;
      if ( v101 <= ++v103 )
        goto LABEL_141;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v112 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v113 = v103;
      v114 = &v112[v113];
      if ( v112[v113].m_pAttributeName != 0 )
      {
LABEL_153:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v112[v113].m_pAttributeName);
LABEL_154:
        v34 = spawner.m_pEntityKeyValues;
        goto LABEL_155;
      }
    }
    else
    {
      v113 = v103;
      v112 = 0;
      v114 = v113 * 24;
      if ( *(v113 * 24 + 16) != 0 )
        goto LABEL_153;
    }
    v120 = *(v114 + 10);
    if ( (v120 & 1) != 0 )
      *(v114 + 10) = v120 & 0xFFFE;
    *v114 = 0;
    *(v114 + 8) = 6;
    *v114 = 1;
    goto LABEL_154;
  }
LABEL_141:
  CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
  LOWORD(v105) = v34->m_keyHashes.m_nCount - 1;
  v106 = v34->m_keyHashes.m_nAllocated;
  if ( v106 != 0 )
  {
    if ( v106 <= 9 )
      v107 = (&v34->m_keyHashes.m_nAllocAllocated + 1);
    else
      v107 = v34->m_keyHashes.m_pElements;
  }
  else
  {
    v107 = 0;
  }
  v105 = v105;
  v107[v105] = -1323173286;
  CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&v34->m_keyValues);
  if ( v34->m_keyValues.m_nAllocated != 0 )
    v108 = v34->m_keyValues.m_pElements;
  else
    v108 = 0;
  v109 = &v108[v105];
  v110 = v109->m_value.m_flags;
  if ( (v110 & 1) != 0 )
    v109->m_value.m_flags = v110 & 0xFFFE;
  v109->m_value.m_uint64 = 0;
  v109->m_value.m_type = 6;
  v109->m_value.m_char = 1;
  if ( v34->m_keyValues.m_nAllocated != 0 )
    v111 = v34->m_keyValues.m_pElements;
  else
    v111 = 0;
  v111[v105].m_pAttributeName = 0;
  v34 = spawner.m_pEntityKeyValues;
LABEL_155:
  v134.m_Index = -1;
  if ( v34 != 0 )
    goto LABEL_26;
LABEL_46:
  v49 = CEntityHandle::operator CEntityInstance *(&v134);
  v50 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  v51 = v49;
  spawner._vptr_CEntitySpawnerBase = off_4081850;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v50 == &g_pEntitySystem->m_entitySpawnerData && g_pEntitySystem->m_nEntitySpawnerDataUseCount-- == 1 )
    CUtlScratchMemoryPool::FreeAll(v50);
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v52 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v52);
      operator delete(v52);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  if ( boneToWorld.m_bOwnsMemory )
  {
    if ( boneToWorld.m_pBones != 0 )
      operator delete[](boneToWorld.m_pBones);
    if ( boneToWorld.m_pReadableBones != 0 )
      operator delete[](boneToWorld.m_pReadableBones);
  }
  return v51;
}


// DetachAttachedRagdoll  (line 1661, @0x00000000022dbfc0, libserver.so)  // inlines: DetachOnNextUpdate
// calls: __dynamic_cast
// callers: DetachAttachedRagdollsForEntity
// globals: `typeinfo for'CRagdollPropAttached
void __fastcall DetachAttachedRagdoll(CBaseEntity *pRagdollIn)
{
  _BYTE *v1; // rax

  if ( pRagdollIn != 0 )
  {
    v1 = __dynamic_cast(pRagdollIn, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollPropAttached, 0);
    if ( v1 != 0 )
      v1[4296] = 1;
  }
}


// DetachAttachedRagdollsForEntity  (line 1671, @0x00000000022edeb0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::GetAllChildren, DetachAttachedRagdoll, CUtlMemory<CBaseEntity*, int>::Purge, CUtlVectorBase<CBaseEntity*, CUtlMemory<CBaseEntity*, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBreakableProp::CheckRemoveRagdolls
void __fastcall DetachAttachedRagdollsForEntity(CBaseEntity *pRagdollParent)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  unsigned __int64 v3; // r12
  CBaseEntity *v4; // rdi
  int v5; // [rsp-8h] [rbp-48h] BYREF
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > list; // [rsp+0h] [rbp-40h] BYREF

  if ( pRagdollParent != 0 )
  {
    v5 = 0;
    *&list.m_Size = 0;
    list.m_Memory.m_pMemory = 0;
    CBaseEntity::GetAllChildren(pRagdollParent, &v5);
    v1 = v5 - 1;
    if ( v5 - 1 >= 0 )
    {
      v2 = 8LL * v1;
      v3 = 8 * (v1 - v1) - 8;
      do
      {
        v4 = *(*&list.m_Size + v2);
        v2 -= 8;
        DetachAttachedRagdoll(v4);
      }
      while ( v2 != v3 );
    }
    v5 = 0;
    if ( (HIDWORD(list.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<CBaseEntity *,int>::Purge(&list);
      if ( (HIDWORD(list.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<CBaseEntity *,int>::Purge(&list);
    }
  }
}


// Ragdoll_IsPropRagdoll  (line 1684, @0x00000000022dbff0, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'CRagdollProp
bool __fastcall Ragdoll_IsPropRagdoll(CBaseEntity *pEntity)
{
  return pEntity != 0 && __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollProp, 0) != 0;
}


// Ragdoll_GetRagdoll  (line 1691, @0x00000000022dc030, libserver.so)
// calls: __dynamic_cast
// globals: `typeinfo for'CRagdollProp
ragdoll_t *__fastcall Ragdoll_GetRagdoll(CBaseEntity *pEntity)
{
  char *v1; // rax

  if ( pEntity == 0 )
    return 0;
  v1 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollProp, 0);
  if ( v1 != 0 )
    return (v1 + 1224);
  else
    return 0;
}


// CRagdollProp::GetAngleOverrideFromCurrentState  (line 1699, @0x00000000022ec1c0, libserver.so)  // inlines: V_strncat<int>
// calls: CFmtStrN<256, false>::CFmtStrN, _V_strncat, __stack_chk_fail
// callers: Ragdoll_GetAngleOverrideString
// strings: "%d,%.2f %.2f %.2f"
void __fastcall CRagdollProp::GetAngleOverrideFromCurrentState(CRagdollProp *const this, char *pOut, int size)
{
  CRagdollProp *v6; // r14
  int v7; // r15d
  __int64 v8; // rdx
  CFmtStr str; // [rsp+10h] [rbp-150h] BYREF
  unsigned __int64 v10; // [rsp+128h] [rbp-38h]

  *pOut = 0;
  v10 = __readfsqword(0x28u);
  if ( this->m_ragdoll.listCount > 0 )
  {
    v6 = this;
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      CFmtStrN<256,false>::CFmtStrN(
        &str,
        "%d,%.2f %.2f %.2f",
        v8,
        v6->m_ragAngles.m_Value[0].x,
        v6->m_ragAngles.m_Value[0].y,
        v6->m_ragAngles.m_Value[0].z);
      _V_strncat(pOut, str.m_szBuf, size, 0xFFFFFFFFLL);
      if ( this->m_ragdoll.listCount <= v7 )
        break;
      if ( v7 != 0 )
        _V_strncat(pOut, ",", size, 0xFFFFFFFFLL);
      v6 = (v6 + 12);
    }
  }
}


// CRagdollProp::DisableMotion  (line 1714, @0x00000000022dc070, libserver.so)
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CRagdollProp::DisableMotion(CRagdollProp *const this)
{
  CBaseEntity::PhysicsEnableMotion(this, 0);
}


// CRagdollProp::InputEnableMotion  (line 1736, @0x00000000022ba430, libserver.so)
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CRagdollProp::InputEnableMotion(CRagdollProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity::PhysicsEnableMotion(this, 1);
}


// CRagdollProp::InputDisableMotion  (line 1744, @0x00000000022ba450, libserver.so)  // inlines: DisableMotion
// calls: CBaseEntity::PhysicsEnableMotion
void __fastcall CRagdollProp::InputDisableMotion(CRagdollProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity::PhysicsEnableMotion(this, 0);
}


// CRagdollProp::InputTurnOn  (line 1749, @0x00000000022bdbb0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::DispatchUpdateTransmitState
void __fastcall CRagdollProp::InputTurnOn(CRagdollProp *const this, inputdata_t *const inputdata)
{
  (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
  this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(this);
}


// CRagdollProp::InputTurnOff  (line 1754, @0x00000000022ba3e0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CRagdollProp::InputTurnOff(CRagdollProp *const this, inputdata_t *const inputdata)
{
  CBaseEntity::AddEffects(this, 32);
}


// CRagdollProp::InputFadeAndRemove  (line 1759, @0x00000000022dbcf0, libserver.so)  // inlines: Float, operator float
// calls: CRagdollProp::FadeOut
void __fastcall CRagdollProp::InputFadeAndRemove(CRagdollProp *const this, inputdata_t *const inputdata)
{
  float v2; // xmm2_4
  float m_float64; // xmm1_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 == 0.0 )
    m_float64 = 1.0;
  CRagdollProp::FadeOut(this, 0.0, m_float64, v2);
}


// Ragdoll_GetAngleOverrideString  (line 1769, @0x00000000022ec2e0, libserver.so)
// calls: __dynamic_cast, CRagdollProp::GetAngleOverrideFromCurrentState
// globals: `typeinfo for'CRagdollProp
void __fastcall Ragdoll_GetAngleOverrideString(char *pOut, int size, CBaseEntity *pEntity)
{
  CRagdollProp *v5; // rax

  if ( pEntity != 0 )
  {
    v5 = __dynamic_cast(pEntity, &`typeinfo for'CBaseEntity, &`typeinfo for'CRagdollProp, 0);
    if ( v5 != 0 )
      CRagdollProp::GetAngleOverrideFromCurrentState(v5, pOut, size);
  }
}


