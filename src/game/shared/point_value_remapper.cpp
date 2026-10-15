// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_value_remapper.cpp:68
class CPointValueRemapper : public CBaseEntity {
	class NetworkVar_m_bDisabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUpdateOnClient {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nInputType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hRemapLineStart {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hRemapLineEnd {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMaximumChangePerSecond {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flDisengageDistance {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flEngageDistance {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRequiresUseKey {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nOutputType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hOutputEntities {
		void NetworkStateChanged(void *, void *, int);

		// sizeof = 1
	};

	class NetworkVar_m_nHapticsType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nMomentumType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flMomentumModifier {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flSnapValue {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nRatchetType {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_flInputOffset {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	string_t m_iszRemapLineStartName;  // +0x310
	string_t m_iszRemapLineEndName;  // +0x318

	string_t m_iszOutputEntityName;  // +0x340
	string_t m_iszOutputEntity2Name;  // +0x348
	string_t m_iszOutputEntity3Name;  // +0x350
	string_t m_iszOutputEntity4Name;  // +0x358
	float m_flCurrentMomentum;  // +0x388
	float m_flRatchetOffset;  // +0x390
	bool m_bEngaged;  // +0x398
	bool m_bFirstUpdate;  // +0x399

	float m_flPreviousValue;  // +0x39c
	float m_flPreviousUpdateTickTime;  // +0x3a0
	float m_flCustomOutputValue;  // +0x3a4
	string_t m_iszSoundEngage;  // +0x3a8
	string_t m_iszSoundDisengage;  // +0x3b0
	string_t m_iszSoundReachedValueZero;  // +0x3b8
	string_t m_iszSoundReachedValueOne;  // +0x3c0
	string_t m_iszSoundMovingLoop;  // +0x3c8
	COutputEvent m_OnReachedValueZero;  // +0x3d8
	COutputEvent m_OnReachedValueOne;  // +0x3f0
	COutputEvent m_OnReachedValueCustom;  // +0x408
	COutputEvent m_OnEngage;  // +0x420
	COutputEvent m_OnDisengage;  // +0x438
	typedef CPointValueRemapper ThisClass;

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
	CPointValueRemapper(CPointValueRemapper &);
	CPointValueRemapper(CPointValueRemapper &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CPointValueRemapper();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	virtual int DrawDebugTextOverlays(uint64, int);
	void InputEnable(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void InputDisable(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void SetEnabled(bool, bool);
	void UpdateThink();
	bool IsEnabled();
	bool IsInputWrapping();
	bool UpdateInternal(float);
	void UpdatePostDisengage(float);
	void DoOutputs(float);
	void ResetUpdates();
	void Engage();
	void Disengage();
	void AddOutputEntities(const string_t &);
	void UpdateInterp(float, float);
	void StartSoundLoop();
	void StopSoundLoop();
	void Input_SetMomentumType(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_SetMomentumModifier(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_SetSnapValue(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_SetEngageDistance(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	void Input_SetDisengageDistance(CEntityInstance *, CEntityInstance *, CEntityInstance *, const CVariant &);
	virtual ~CPointValueRemapper();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 1104
};

// src/game/shared/point_value_remapper.cpp:195
class C_CPointValueRemapper_MapInstall {
	C_CPointValueRemapper_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointValueRemapper::~CPointValueRemapper  (line 68, @0x000000000233c500, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPointValueRemapper::~CPointValueRemapper(CPointValueRemapper *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hOutputEntities.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4090310;
  this->m_hOutputEntities.m_Vector.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_hOutputEntities.m_Vector.m_Memory,
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hOutputEntities.m_Vector.m_Memory),
        (this->m_hOutputEntities.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseEntity::~CBaseEntity(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
    CBaseEntity::~CBaseEntity(this);
  }
}


// CPointValueRemapper::~CPointValueRemapper  (line 68, @0x000000000233c650, libserver.so)  // inlines: Purge, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CPointValueRemapper, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CPointValueRemapper::~CPointValueRemapper(CPointValueRemapper *const this)
{
  bool v2; // zf
  CUtlVectorBase<CHandle<CBaseEntity>,CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>,-1> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_hOutputEntities.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4090310;
  this->m_hOutputEntities.m_Vector.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_hOutputEntities.m_Vector.m_Memory;
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hOutputEntities.m_Vector.m_Memory);
    if ( (this->m_hOutputEntities.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(p_m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointValueRemapper::Schema_DynamicBinding  (line 70, @0x0000000002339f90, libserver.so)
// globals: CPointValueRemapper::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointValueRemapper::Schema_DynamicBinding(
        const CPointValueRemapper *const this)
{
  return CPointValueRemapper::s_pSchemaBinding;
}


// CPointValueRemapper::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 70, @0x0000000002339fa0, libserver.so)
// globals: CPointValueRemapper::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointValueRemapper::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  return CPointValueRemapper::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointValueRemapper::CEntityInstanceEntityClass::DestructInstance  (line 70, @0x0000000002339fb0, libserver.so)  // inlines: Destruct<CPointValueRemapper>
void __fastcall CPointValueRemapper::CEntityInstanceEntityClass::DestructInstance(
        CPointValueRemapper::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointValueRemapper::CEntityInstanceEntityClass::FreeInstance  (line 70, @0x0000000002339fd0, libserver.so)
void __fastcall CPointValueRemapper::CEntityInstanceEntityClass::FreeInstance(
        CPointValueRemapper::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointValueRemapper::CEntityInstanceEntityClass::CanAllocate  (line 70, @0x0000000002339ff0, libserver.so)
bool __fastcall CPointValueRemapper::CEntityInstanceEntityClass::CanAllocate(
        const CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointValueRemapper::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 70, @0x000000000233a000, libserver.so)
// globals: CPointValueRemapper::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointValueRemapper::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  return CPointValueRemapper::s_pSchemaBinding;
}


// CPointValueRemapper::CEntityInstanceEntityClass::AllocateInstance  (line 70, @0x000000000233b2a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointValueRemapper::CEntityInstanceEntityClass::AllocateInstance(
        CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1104);
  memset(v1, 0, 0x450u);
  return v1;
}


// CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x000000000233cbc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 70, @0x000000000233cbe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointValueRemapper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointValueRemapper::CEntityInstanceEntityClass::ConstructInstance  (line 70, @0x000000000233ec10, libserver.so)  // inlines: Construct<CPointValueRemapper>
// calls: CPointValueRemapper::CPointValueRemapper
CEntityInstance *__fastcall CPointValueRemapper::CEntityInstanceEntityClass::ConstructInstance(
        CPointValueRemapper::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointValueRemapper::CPointValueRemapper(p);
  return p;
}


// CPointValueRemapper::GetEntityClassInternal  (line 70, @0x0000000002344410, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointValueRemapper::SetupEntClassInputs, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_value_remapper", "CPointValueRemapper"
// globals: `guard variable for'CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass, CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo, CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo
CEntityClass *__cdecl CPointValueRemapper::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass) != 0 )
  {
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_designerName.u.m_Id = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass._vptr_CEntityClass = off_3F79390;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_ComponentOffsets.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_AllHelpers.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classInputs.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classOutputs.m_Size = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_requiredEHandle.m_Index = -1;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_hNetworkSerializer = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pBaseClassInfo = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pClassInfo = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_flags = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_nAllHelpersFlags = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pScriptClassDesc = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pInputs = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_nInputCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pOutputs = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_nOutputCount = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pGameClass = 0;
    CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass._vptr_CEntityClass = off_4090290;
    __cxa_guard_release(&`guard variable for'CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass);
    __cxa_atexit(
      CPointValueRemapper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointValueRemapperClass != 0 )
    return &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass;
  if ( `guard variable for'CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo,
      "CPointValueRemapper",
      "point_value_remapper",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo);
  }
  CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pClassInfo = &CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo;
  CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pBaseClassInfo = CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo.m_pBaseClassInfo;
  g_pEntityCPointValueRemapperClass = &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass;
  CPointValueRemapper::GetEntityClassInfo(void)::g_EntityCPointValueRemapperClassInfo.m_pClass = &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass;
  CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  CPointValueRemapper::SetupEntClassInputs(g_pEntityCPointValueRemapperClass);
  g_pEntityCPointValueRemapperClass->m_pComponentOverrides = 0;
  return &CPointValueRemapper::GetEntityClassInternal(void)::g_EntityCPointValueRemapperClass;
}


// CPointValueRemapper::YouForgotToImplementOrDeclareServerClass  (line 195, @0x000000000231ecd0, libserver.so)
int __fastcall CPointValueRemapper::YouForgotToImplementOrDeclareServerClass(CPointValueRemapper *const this)
{
  return 0;
}


// CPointValueRemapper::GetServerClass  (line 195, @0x0000000002324250, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CPointValueRemapper::GetServerClass(CPointValueRemapper *const this)
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


// CPointValueRemapper::CPointValueRemapper  (line 198, @0x000000000232a130, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CNetworkHandleBase, CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, EnsureValidValue<ValueRemapperHapticsType_t>, EnsureValidValue<ValueRemapperInputType_t>, EnsureValidValue<ValueRemapperMomentumType_t>, EnsureValidValue<ValueRemapperOutputType_t>, EnsureValidValue<ValueRemapperRatchetType_t>, EnsureValidValue<bool>, EnsureValidValue<float>, InValidate, NetworkStateChanged, Purge, RemoveAll, Set, SndOpEventGuid_t, SoundEventGuid_t, operator=<bool>, operator=<float>, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// callers: CPointValueRemapper::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointValueRemapper::CPointValueRemapper(CPointValueRemapper *const this)
{
  float m_Value; // xmm0_4
  bool v3; // zf

  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_4090310;
  this->m_bDisabled.m_Value = 0;
  this->m_bUpdateOnClient.m_Value = 0;
  this->m_nInputType.m_Value = ValueRemapperInputType_t::InputType_PlayerShootPosition;
  this->m_iszRemapLineStartName.u.m_Id = 0;
  this->m_iszRemapLineEndName.u.m_Id = 0;
  this->m_hRemapLineStart.m_Value.m_Index = -1;
  this->m_hRemapLineEnd.m_Value.m_Index = -1;
  this->m_flMaximumChangePerSecond.m_Value = 0.0;
  this->m_flDisengageDistance.m_Value = 0.0;
  this->m_flEngageDistance.m_Value = 0.0;
  this->m_bRequiresUseKey.m_Value = 0;
  this->m_nOutputType.m_Value = ValueRemapperOutputType_t::OutputType_AnimationCycle;
  this->m_iszOutputEntityName.u.m_Id = 0;
  this->m_iszOutputEntity2Name.u.m_Id = 0;
  this->m_iszOutputEntity3Name.u.m_Id = 0;
  this->m_iszOutputEntity4Name.u.m_Id = 0;
  this->m_hOutputEntities.m_Vector.m_Size = 0;
  this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory = 0;
  this->m_hOutputEntities.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_hOutputEntities.m_Vector.m_Memory.m_nGrowSize = 0;
  this->m_nHapticsType.m_Value = ValueRemapperHapticsType_t::HaticsType_Default;
  this->m_nMomentumType.m_Value = ValueRemapperMomentumType_t::MomentumType_None;
  this->m_flMomentumModifier.m_Value = 0.0;
  this->m_flSnapValue.m_Value = 0.0;
  this->m_nRatchetType.m_Value = ValueRemapperRatchetType_t::RatchetType_Absolute;
  this->m_flInputOffset.m_Value = 0.0;
  this->m_iszSoundEngage.u.m_Id = 0;
  this->m_iszSoundDisengage.u.m_Id = 0;
  this->m_iszSoundReachedValueZero.u.m_Id = 0;
  this->m_iszSoundReachedValueOne.u.m_Id = 0;
  this->m_iszSoundMovingLoop.u.m_Id = 0;
  this->m_sndMovingLoop.m_nGuid.m_Data = 0;
  this->m_sndMovingLoop.m_hStackHash = -1;
  this->m_OnReachedValueZero._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnReachedValueOne._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnReachedValueCustom._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnEngage._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnDisengage._vptr_CEntityIOOutput = off_3F7C190;
  CBaseEntity::NetworkStateChanged(this, 0x309u, -1, -1);
  m_Value = this->m_flMaximumChangePerSecond.m_Value;
  this->m_bUpdateOnClient.m_Value = 1;
  if ( m_Value != 1000.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 808, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMaximumChangePerSecond.m_Value = 1000.0;
  }
  if ( this->m_flDisengageDistance.m_Value != 1000.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDisengageDistance.m_Value = 1000.0;
  }
  if ( this->m_flEngageDistance.m_Value != 1000.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flEngageDistance.m_Value = 1000.0;
  }
  if ( this->m_bRequiresUseKey.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 820, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bRequiresUseKey.m_Value = 0;
  }
  v3 = this->m_flInputOffset.m_Value == 0.0;
  this->m_flCurrentMomentum = 0.0;
  this->m_flRatchetOffset = 0.0;
  if ( !v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flInputOffset.m_Value = 0.0;
  }
  this->m_bEngaged = 0;
  this->m_bFirstUpdate = 1;
  this->m_flPreviousValue = -1.0;
  this->m_flPreviousUpdateTickTime = 0.0;
  this->m_flCustomOutputValue = -1.0;
}


// CPointValueRemapper::Spawn  (line 227, @0x000000000231ef20, libserver.so)
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet
// globals: CPointValueRemapper::UpdateThink(void)
void __fastcall CPointValueRemapper::Spawn(CPointValueRemapper *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, CPointValueRemapper::UpdateThink, 0.0, 0, 0);
}


// CPointValueRemapper::Activate  (line 234, @0x0000000002334900, libserver.so)  // inlines: CUtlSymbolLarge, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CPointValueRemapper::AddOutputEntities, CPointValueRemapper::SetEnabled
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointValueRemapper::Activate(CPointValueRemapper *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  uint32 m_Index; // edx
  CBaseEntity *m_pInstance; // rcx
  CBaseEntity *v6; // r14
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CBaseEntity *v9; // rax
  uint32 v10; // edx
  CBaseEntity *v11; // rcx
  CBaseEntity *v12; // r12
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  bool m_Value; // si
  CEntityIdentity *v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  CBaseEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_iszRemapLineStartName.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  m_Index = this->m_hRemapLineStart.m_Value.m_Index;
  m_pInstance = 0;
  v6 = EntityByName;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRemapLineStart.m_Value.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[this->m_hRemapLineStart.m_Value.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( v6 != m_pInstance )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 800, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v6 != 0 && (m_pEntity = v6->m_pEntity) != 0 )
    {
      v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v21 = 0x7FFF;
      else
        v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hRemapLineStart.m_Value.m_Index) = v21 | this->m_hRemapLineStart.m_Value.m_Index & 0x8000;
      this->m_hRemapLineStart.m_Value.m_Index = (v20 << 15) | this->m_hRemapLineStart.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hRemapLineStart.m_Value.m_Index = -1;
    }
  }
  iszName.u.m_Id = this->m_iszRemapLineEndName.u.m_Id;
  v9 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
  v10 = this->m_hRemapLineEnd.m_Value.m_Index;
  v11 = 0;
  v12 = v9;
  if ( v10 + 2 > 1 )
  {
    v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRemapLineEnd.m_Value.m_Index) >> 9) & 0x3F];
    if ( v13 != 0 )
    {
      v14 = &v13[this->m_hRemapLineEnd.m_Value.m_Index & 0x1FF];
      if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
        v11 = v14->m_pInstance;
    }
  }
  if ( v12 != v11 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 804, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    if ( v12 != 0 && (v16 = v12->m_pEntity) != 0 )
    {
      v17 = (v16->m_EHandle.m_Index >> 15) - (v16->m_flags & 1);
      if ( v16->m_EHandle.m_Index == -1 )
        v18 = 0x7FFF;
      else
        v18 = v16->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hRemapLineEnd.m_Value.m_Index) = v18 | this->m_hRemapLineEnd.m_Value.m_Index & 0x8000;
      this->m_hRemapLineEnd.m_Value.m_Index = (v17 << 15) | this->m_hRemapLineEnd.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hRemapLineEnd.m_Value.m_Index = -1;
    }
  }
  CPointValueRemapper::AddOutputEntities(this, &this->m_iszOutputEntityName);
  CPointValueRemapper::AddOutputEntities(this, &this->m_iszOutputEntity2Name);
  CPointValueRemapper::AddOutputEntities(this, &this->m_iszOutputEntity3Name);
  CPointValueRemapper::AddOutputEntities(this, &this->m_iszOutputEntity4Name);
  m_Value = this->m_bDisabled.m_Value;
  if ( sv_remapper_loopsoundfix.m_pParent->m_Value.m_nValue != 0 )
    CPointValueRemapper::SetEnabled(this, !m_Value, 1);
  else
    CPointValueRemapper::SetEnabled(this, !m_Value, 0);
}


// CPointValueRemapper::UpdateTransmitState  (line 256, @0x000000000231ee50, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointValueRemapper::UpdateTransmitState(CPointValueRemapper *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CPointValueRemapper::DrawDebugTextOverlays  (line 262, @0x000000000231ed50, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "    interp: %f"
int __fastcall CPointValueRemapper::DrawDebugTextOverlays(
        CPointValueRemapper *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "    interp: %f", this->m_flPreviousValue);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPointValueRemapper::InputEnable  (line 278, @0x000000000232a650, libserver.so)
// calls: CPointValueRemapper::SetEnabled
void __fastcall CPointValueRemapper::InputEnable(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  CPointValueRemapper::SetEnabled(this, 1, 0);
}


// CPointValueRemapper::InputDisable  (line 283, @0x000000000232a670, libserver.so)
// calls: CPointValueRemapper::SetEnabled
void __fastcall CPointValueRemapper::InputDisable(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  CPointValueRemapper::SetEnabled(this, 0, 0);
}


// CPointValueRemapper::SetEnabled  (line 288, @0x000000000232a4e0, libserver.so)  // inlines: CUtlStringToken, NetworkStateChanged, ResetUpdates, Set, StopSoundLoop, curtime, operator=<bool>
// calls: CPointValueRemapper::StopSoundLoop, CBaseEntity::SetNextThink
// callers: CPointValueRemapper::InputEnable, CPointValueRemapper::InputDisable, CPointValueRemapper::Activate
void __fastcall CPointValueRemapper::SetEnabled(CPointValueRemapper *const this, bool bEnabled, bool bForce)
{
  double v3; // xmm1_8
  bool v4; // r13
  CGlobalVars *v7; // r12
  CGlobalVars *v8; // rax
  CGlobalVars *v9; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  void (__fastcall *v11)(__int64); // rax
  __int64 v12; // xmm0_8

  v4 = !bEnabled;
  if ( !bForce )
  {
    if ( v4 == this->m_bDisabled.m_Value )
      return;
LABEL_3:
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDisabled.m_Value = v4;
    if ( !bEnabled )
      goto LABEL_4;
    goto LABEL_10;
  }
  if ( v4 != this->m_bDisabled.m_Value )
    goto LABEL_3;
  if ( !bEnabled )
  {
LABEL_4:
    if ( this->m_sndMovingLoop.m_nGuid.m_Data != 0 )
      CPointValueRemapper::StopSoundLoop(this);
    return;
  }
LABEL_10:
  this->m_bFirstUpdate = 1;
  this->m_flPreviousValue = -1.0;
  v7 = gpGlobals;
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v9 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      v9 = gpGlobals;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v9 = gpGlobals;
        v8 = gpGlobals;
      }
    }
    this->m_flPreviousUpdateTickTime = v7->m_flCurrentTime;
    if ( v8 != 0 )
    {
      if ( !v9->m_bEnableAssertions && !v9->m_bInSimulation )
      {
        v11 = v9->m_pfnWarningFunc;
        if ( v11 != 0 )
          v11(1);
      }
      HIDWORD(v12) = 0;
      *&v12 = v9->m_flCurrentTime + 0.050000001;
    }
    else
    {
      v12 = 1028443341;
    }
  }
  else
  {
    this->m_flPreviousUpdateTickTime = 0.0;
    v12 = 1028443341;
  }
  CBaseEntity::SetNextThink(this, *&v12, v3, 0);
}


// CPointValueRemapper::UpdateThink  (line 306, @0x0000000002336280, libserver.so)  // inlines: curtime
// calls: CPointValueRemapper::UpdateInternal, CPointValueRemapper::Disengage, CPointValueRemapper::UpdatePostDisengage, CPointValueRemapper::Engage
void __fastcall CPointValueRemapper::UpdateThink(CPointValueRemapper *const this)
{
  CGlobalVars *v2; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v4; // r13
  double v5; // xmm1_8
  float m_flCurrentTime; // xmm0_4
  void (__fastcall *v7)(__int64); // rax
  float flUpdateTime; // [rsp+Ch] [rbp-24h]
  unsigned int flUpdateTimea; // [rsp+Ch] [rbp-24h]

  v2 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( gpGlobals->m_bEnableAssertions
      || gpGlobals->m_bInSimulation
      || (m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc) == 0 )
    {
      *&v5 = LODWORD(gpGlobals->m_flCurrentTime);
      v4 = gpGlobals;
      *&v5 = *&v5 - this->m_flPreviousUpdateTickTime;
    }
    else
    {
      m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v4 = gpGlobals;
      *&v5 = LODWORD(v2->m_flCurrentTime);
      *&v5 = *&v5 - this->m_flPreviousUpdateTickTime;
      if ( gpGlobals == 0 )
      {
        m_flCurrentTime = 0.0;
        goto LABEL_10;
      }
    }
    if ( !v4->m_bEnableAssertions && !v4->m_bInSimulation )
    {
      v7 = v4->m_pfnWarningFunc;
      if ( v7 != 0 )
      {
        flUpdateTimea = LODWORD(v5);
        v7(1);
        *&v5 = flUpdateTimea;
      }
    }
    m_flCurrentTime = v4->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
    HIDWORD(v5) = 0;
    *&v5 = 0.0 - this->m_flPreviousUpdateTickTime;
  }
LABEL_10:
  this->m_flPreviousUpdateTickTime = m_flCurrentTime;
  flUpdateTime = *&v5;
  if ( CPointValueRemapper::UpdateInternal(this, v5, v5) != 0 )
  {
    CPointValueRemapper::Engage(this);
  }
  else
  {
    CPointValueRemapper::Disengage(this);
    CPointValueRemapper::UpdatePostDisengage(this, COERCE_DOUBLE(LODWORD(flUpdateTime)), flUpdateTime);
  }
}


// CPointValueRemapper::UpdateInternal  (line 370, @0x0000000002330d10, libserver.so)  // inlines: Approach, CEntityHandle, Clamp<float>, DistTo, Dot, DotProduct, FastSqrt, Get, GetEntryIndex, GetHMDAvatar, GetHandleEntity, GetSerialNumber, IndexToIdentity, Init, IsZero, IsZeroFast, Length, LookupEntity, RemapValClamped, VectorLength, VectorLerp, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, curtime, operator*, operator+=, operator-, operator-=, operator->, operator=
// calls: CBaseEntity::SetNextThink, UTIL_PlayerByIndex, CEntityHandle::GetHandleEntity, CBaseEntity::GetAbsOrigin, VectorNormalize, CalcDistanceToPlane, CPropHMDAvatar::GetVRHandRaw, CPropVRHand::FireHapticPulse, CPointValueRemapper::DoOutputs, CPointValueRemapper::UpdateInterp, CalcClosestPointOnLine, BuildBasis (13 total)
// callers: CPointValueRemapper::UpdateThink
__int64 __fastcall CPointValueRemapper::UpdateInternal(CPointValueRemapper *const this, double a2, double flUpdateTime)
{
  unsigned int v4; // r13d
  CGlobalVars *v6; // rbx
  double v7; // xmm0_8
  CEntityIndex v8; // ebx
  CBasePlayer *v9; // rax
  CBasePlayer *v10; // r12
  unsigned __int16 v11; // dx
  int v12; // esi
  vec_t v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  vec_t z; // eax
  ValueRemapperInputType_t m_Value; // eax
  const CBaseEntity *HandleEntity; // rax
  const CBaseEntity *v19; // rax
  const Vector *AbsOrigin; // rax
  __m128i x_low; // xmm0
  __m128i y_low; // xmm1
  __m128i z_low; // xmm2
  const CBaseEntity *v24; // rax
  const Vector *v25; // rax
  const CBaseEntity *v26; // rax
  const Vector *v27; // rax
  const CBaseEntity *v28; // rax
  const Vector *v29; // rax
  const CBaseEntity *v30; // rax
  const Vector *v31; // rax
  float v32; // xmm8_4
  float v33; // xmm9_4
  float v34; // xmm0_4
  const CBaseEntity *v35; // rax
  const Vector *v36; // rax
  float v37; // xmm9_4
  float v38; // xmm0_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float m_flPreviousValue; // xmm1_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v43; // xmm1_4
  bool v44; // zf
  __m128 v45; // xmm0
  __int32 v46; // eax
  bool v47; // cf
  CPropHMDAvatar *v48; // rax
  CPropVRHand *VRHandRaw; // rax
  double v50; // xmm1_8
  ValueRemapperInputType_t v51; // eax
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm1_4
  ValueRemapperRatchetType_t v57; // eax
  const CBaseEntity *v58; // rax
  const CBaseEntity *v59; // rax
  const Vector *v60; // rax
  float v61; // xmm1_4
  double v62; // xmm0_8
  vec_t v63; // xmm1_4
  const CBaseEntity *v64; // rax
  const Vector *v65; // rbx
  const CBaseEntity *v66; // rax
  const Vector *v67; // rax
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  float v71; // xmm0_4
  __m128 v72; // xmm3
  float flDisengageDistance; // [rsp+0h] [rbp-F0h]
  float y; // [rsp+10h] [rbp-E0h]
  float v75; // [rsp+20h] [rbp-D0h]
  float flEngageDistance; // [rsp+30h] [rbp-C0h]
  unsigned __int32 flEngageDistancea; // [rsp+30h] [rbp-C0h]
  float flEngageDistanceb; // [rsp+30h] [rbp-C0h]
  const Vector *fDistanceToPlanea; // [rsp+40h] [rbp-B0h]
  float fDistanceToPlane; // [rsp+40h] [rbp-B0h]
  const Vector *fDistanceToPlaneb; // [rsp+40h] [rbp-B0h]
  float fDistanceToPlanec; // [rsp+40h] [rbp-B0h]
  float x; // [rsp+58h] [rbp-98h]
  float v84; // [rsp+58h] [rbp-98h]
  float flUpdateTimea; // [rsp+5Ch] [rbp-94h]
  float flInterp; // [rsp+6Ch] [rbp-84h] BYREF
  Vector vTestPoint; // [rsp+70h] [rbp-80h] BYREF
  Vector vAxis; // [rsp+80h] [rbp-70h] BYREF
  Vector vCenterToPointOnPlane; // [rsp+90h] [rbp-60h] BYREF
  Vector vRight; // [rsp+A0h] [rbp-50h] BYREF
  Vector vClosestPoint; // [rsp+B0h] [rbp-40h] BYREF

  flUpdateTimea = *&a2;
  if ( this->m_bDisabled.m_Value )
    return 0;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, a2, *&flUpdateTime);
    }
    HIDWORD(v7) = 0;
    *&v7 = v6->m_flCurrentTime + 0.050000001;
  }
  else
  {
    *&v7 = 1028443341;
  }
  CBaseEntity::SetNextThink(this, v7, flUpdateTime, 0);
  if ( gpGlobals->maxClients <= 0 )
    return 0;
  v8.m_Data = 1;
  while ( 1 )
  {
    v9 = UTIL_PlayerByIndex(v8);
    v10 = v9;
    if ( v9 != 0 )
    {
      v4 = (*(v9->_vptr_IHandleEntity + 139))(v9);
      if ( v4 != 0 )
        break;
    }
    if ( gpGlobals->maxClients < ++v8.m_Data )
      return 0;
  }
  if ( this->m_bRequiresUseKey.m_Value && (v10->m_nButtons & 0x20) == 0 )
    return 0;
  if ( this->m_hRemapLineStart.m_Value.m_Index == -1 )
  {
    v11 = 0x7FFF;
    v12 = 0x7FFF;
  }
  else
  {
    v11 = this->m_hRemapLineStart.m_Value.m_Index & 0x7FFF;
    v12 = v11;
  }
  LODWORD(v13) = (this->m_hRemapLineStart.m_Value.m_Index >> 15 << 15) | v11 & 0x7FFF;
  vClosestPoint.x = v13;
  if ( (LODWORD(v13) + 2) <= 1 )
    return 0;
  v14 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v12 >> 9];
  if ( v14 == 0 )
    return 0;
  v15 = &v14[v12 & 0x1FF];
  if ( v15 == 0
    || LODWORD(v13) != v15->m_EHandle.m_Index
    || v15->m_pInstance == 0
    || CEntityHandle::GetHandleEntity(&this->m_hRemapLineEnd.m_Value) == 0 )
  {
    return 0;
  }
  z = vec3_origin.z;
  *&vTestPoint.x = *&vec3_origin.x;
  vTestPoint.z = z;
  m_Value = this->m_nInputType.m_Value;
  if ( m_Value <= ValueRemapperInputType_t::InputType_PlayerShootPositionAroundAxis )
  {
    v62 = (*(v10->_vptr_IHandleEntity + 311))(v10, 0);
    m_Value = this->m_nInputType.m_Value;
    *&vClosestPoint.x = v62;
    vClosestPoint.z = v63;
    vTestPoint.z = v63;
    *&vTestPoint.x = v62;
  }
  flInterp = 0.0;
  if ( m_Value != ValueRemapperInputType_t::InputType_PlayerShootPosition )
  {
    if ( m_Value == ValueRemapperInputType_t::InputType_PlayerShootPositionAroundAxis )
    {
      HandleEntity = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      fDistanceToPlanea = CBaseEntity::GetAbsOrigin(HandleEntity);
      v19 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineEnd.m_Value);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
      x_low = LODWORD(AbsOrigin->x);
      y_low = LODWORD(AbsOrigin->y);
      z_low = LODWORD(AbsOrigin->z);
      *x_low.m128i_i32 = *x_low.m128i_i32 - fDistanceToPlanea->x;
      *y_low.m128i_i32 = *y_low.m128i_i32 - fDistanceToPlanea->y;
      *z_low.m128i_i32 = *z_low.m128i_i32 - fDistanceToPlanea->z;
      LODWORD(vAxis.x) = x_low.m128i_i32[0];
      LODWORD(vAxis.y) = y_low.m128i_i32[0];
      LODWORD(vAxis.z) = z_low.m128i_i32[0];
      if ( _mm_cvtsi128_si32(x_low) == 0 && _mm_cvtsi128_si32(y_low) == 0 && _mm_cvtsi128_si32(z_low) == 0 )
        return 0;
      VectorNormalize(&vAxis);
      v24 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v25 = CBaseEntity::GetAbsOrigin(v24);
      flDisengageDistance = fsqrt(
                              (((v25->x - vTestPoint.x) * (v25->x - vTestPoint.x))
                             + ((v25->y - vTestPoint.y) * (v25->y - vTestPoint.y)))
                            + ((v25->z - vTestPoint.z) * (v25->z - vTestPoint.z)));
      v26 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v27 = CBaseEntity::GetAbsOrigin(v26);
      x = vTestPoint.x;
      y = vTestPoint.y;
      v75 = vTestPoint.z;
      flEngageDistance = fsqrt(
                           (((v27->x - vTestPoint.x) * (v27->x - vTestPoint.x))
                          + ((v27->y - vTestPoint.y) * (v27->y - vTestPoint.y)))
                         + ((v27->z - vTestPoint.z) * (v27->z - vTestPoint.z)));
      v28 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v29 = CBaseEntity::GetAbsOrigin(v28);
      fDistanceToPlane = CalcDistanceToPlane(&vTestPoint, &vAxis, v29);
      v30 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v31 = CBaseEntity::GetAbsOrigin(v30);
      if ( ((((vTestPoint.x - v31->x) * vAxis.x) + ((vTestPoint.y - v31->y) * vAxis.y))
          + ((vTestPoint.z - v31->z) * vAxis.z)) <= 0.0 )
      {
        v32 = (vAxis.x * fDistanceToPlane) + x;
        v33 = (vAxis.y * fDistanceToPlane) + y;
        v34 = (fDistanceToPlane * vAxis.z) + v75;
      }
      else
      {
        v32 = x - (vAxis.x * fDistanceToPlane);
        v33 = y - (vAxis.y * fDistanceToPlane);
        v34 = v75 - (fDistanceToPlane * vAxis.z);
      }
      v84 = v34;
      v35 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v36 = CBaseEntity::GetAbsOrigin(v35);
      v37 = v33 - v36->y;
      v38 = v84 - v36->z;
      vCenterToPointOnPlane.x = v32 - v36->x;
      vCenterToPointOnPlane.y = v37;
      v39 = flDisengageDistance;
      vCenterToPointOnPlane.z = v38;
      v40 = flEngageDistance;
      if ( vCenterToPointOnPlane.x <= -0.0099999998
        || vCenterToPointOnPlane.x >= 0.0099999998
        || v37 <= -0.0099999998
        || v37 >= 0.0099999998
        || v38 <= -0.0099999998
        || v38 >= 0.0099999998 )
      {
        VectorNormalize(&vCenterToPointOnPlane);
        BuildBasis(&vAxis, &vRight, &vClosestPoint);
        v70 = acosf(
                ((vCenterToPointOnPlane.x * vClosestPoint.x) + (vCenterToPointOnPlane.y * vClosestPoint.y))
              + (vCenterToPointOnPlane.z * vClosestPoint.z));
        v39 = flDisengageDistance;
        v40 = flEngageDistance;
        if ( (((vCenterToPointOnPlane.x * vRight.x) + (vCenterToPointOnPlane.y * vRight.y))
            + (vCenterToPointOnPlane.z * vRight.z)) < 0.0 )
          v70 = 6.2831855 - v70;
        v71 = v70 / 6.2831855;
        m_flPreviousValue = 0.0;
        if ( v71 >= 0.0 )
        {
          m_flPreviousValue = 1.0;
          if ( v71 <= 1.0 )
            m_flPreviousValue = v71 + 0.0;
        }
      }
      else
      {
        m_flPreviousValue = this->m_flPreviousValue;
      }
    }
    else
    {
      m_flPreviousValue = 0.0;
      v40 = 0.0;
      v39 = 0.0;
    }
  }
  else
  {
    v58 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineEnd.m_Value);
    fDistanceToPlaneb = CBaseEntity::GetAbsOrigin(v58);
    v59 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
    v60 = CBaseEntity::GetAbsOrigin(v59);
    CalcClosestPointOnLine(&vTestPoint, v60, fDistanceToPlaneb, &vClosestPoint, &flInterp);
    v61 = fsqrt(
            (((vClosestPoint.x - vTestPoint.x) * (vClosestPoint.x - vTestPoint.x))
           + ((vClosestPoint.y - vTestPoint.y) * (vClosestPoint.y - vTestPoint.y)))
          + ((vClosestPoint.z - vTestPoint.z) * (vClosestPoint.z - vTestPoint.z)));
    v39 = v61;
    if ( this->m_flPreviousValue != -1.0 )
    {
      fDistanceToPlanec = this->m_flPreviousValue;
      flEngageDistanceb = v61;
      v64 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineEnd.m_Value);
      v65 = CBaseEntity::GetAbsOrigin(v64);
      v66 = CEntityHandle::GetHandleEntity(&this->m_hRemapLineStart.m_Value);
      v67 = CBaseEntity::GetAbsOrigin(v66);
      v39 = flEngageDistanceb;
      v68 = (((v65->x - v67->x) * fDistanceToPlanec) + v67->x) - vTestPoint.x;
      v69 = (((v65->y - v67->y) * fDistanceToPlanec) + v67->y) - vTestPoint.y;
      v61 = fsqrt(
              ((v68 * v68) + (v69 * v69))
            + (((((v65->z - v67->z) * fDistanceToPlanec) + v67->z) - vTestPoint.z)
             * ((((v65->z - v67->z) * fDistanceToPlanec) + v67->z) - vTestPoint.z)));
    }
    v40 = v61;
    m_flPreviousValue = flInterp;
  }
  if ( m_flPreviousValue < 0.0 )
    v43 = 0.0;
  else
    v43 = fminf(1.0, m_flPreviousValue);
  v44 = !this->m_bEngaged;
  flInterp = v43;
  if ( !v44 )
  {
    if ( v39 < (this->m_flDisengageDistance.m_Value * sv_remapper_range_multiplier.m_pParent->m_Value.m_fValue) )
    {
      v45.m128_u64[0] = LODWORD(this->m_flRatchetOffset);
      goto LABEL_48;
    }
    return 0;
  }
  if ( v40 >= (this->m_flEngageDistance.m_Value * sv_remapper_range_multiplier.m_pParent->m_Value.m_fValue) )
    return 0;
  v57 = this->m_nRatchetType.m_Value;
  if ( v57 != ValueRemapperRatchetType_t::RatchetType_Absolute )
  {
    if ( v57 == ValueRemapperRatchetType_t::RatchetType_EachEngage )
    {
      v45.m128_u64[0] = LODWORD(this->m_flPreviousValue);
      if ( v45.m128_f32[0] == -1.0 )
      {
        this->m_flRatchetOffset = 0.0;
        v45.m128_u64[0] = 0;
      }
      else
      {
        v45.m128_f32[0] = v45.m128_f32[0] - v43;
        LODWORD(this->m_flRatchetOffset) = v45.m128_i32[0];
      }
    }
    else
    {
      v45.m128_u64[0] = LODWORD(this->m_flRatchetOffset);
    }
  }
  else
  {
    v45.m128_u64[0] = 0;
    this->m_flRatchetOffset = 0.0;
  }
LABEL_48:
  v45.m128_f32[0] = (v45.m128_f32[0] + this->m_flInputOffset.m_Value) + v43;
  v46 = this->m_nMomentumType.m_Value - 1;
  v47 = this->m_nMomentumType.m_Value == ValueRemapperMomentumType_t::MomentumType_Friction;
  flInterp = v45.m128_f32[0];
  if ( !v47 && v46 != 1 )
    this->m_flCurrentMomentum = 0.0;
  if ( this->m_nHapticsType.m_Value == ValueRemapperHapticsType_t::HaticsType_Default )
  {
    flEngageDistancea = v45.m128_i32[0];
    v48 = CEntityHandle::GetHandleEntity(&v10->m_hPropHMDAvatar.m_Value);
    v45.m128_u64[0] = flEngageDistancea;
    if ( v48 != 0 )
    {
      VRHandRaw = CPropHMDAvatar::GetVRHandRaw(v48, vr_controller_slots_t::VRCONTROLLER_SLOT_HAND0);
      if ( VRHandRaw != 0 )
        CPropVRHand::FireHapticPulse(VRHandRaw, EHapticPulseType::VR_HAND_HAPTIC_PULSE_MEDIUM);
      v45.m128_u64[0] = LODWORD(flInterp);
    }
  }
  *&v50 = LODWORD(this->m_flPreviousValue);
  if ( *&v50 == -1.0 )
    goto LABEL_65;
  v51 = this->m_nInputType.m_Value;
  if ( v51 == ValueRemapperInputType_t::InputType_PlayerShootPosition )
  {
    if ( v45.m128_f32[0] < 0.0 )
    {
      v45.m128_u64[0] = 0;
    }
    else
    {
      v72 = _mm_cmpge_ss(0x3F800000u, v45);
      v45.m128_u64[0] = _mm_andnot_ps(v72, 0x3F800000u).m128_u64[0] | v45.m128_u64[0] & v72.m128_u64[0];
    }
LABEL_89:
    v52 = v45.m128_f32[0] - *&v50;
    goto LABEL_61;
  }
  if ( v51 != ValueRemapperInputType_t::InputType_PlayerShootPositionAroundAxis )
  {
    v52 = v45.m128_f32[0] - *&v50;
    goto LABEL_61;
  }
  if ( *&v50 <= v45.m128_f32[0] || (*&v50 - v45.m128_f32[0]) <= 0.5 )
  {
    v52 = v45.m128_f32[0] - *&v50;
    if ( v45.m128_f32[0] <= *&v50 || v52 <= 0.5 )
      goto LABEL_61;
    v45.m128_f32[0] = v45.m128_f32[0] - 1.0;
    goto LABEL_89;
  }
  v45.m128_f32[0] = v45.m128_f32[0] + 1.0;
  v52 = v45.m128_f32[0] - *&v50;
LABEL_61:
  v53 = flUpdateTimea * this->m_flMaximumChangePerSecond.m_Value;
  if ( v52 <= v53 )
  {
    if ( -v53 > v52 )
    {
      *&v50 = *&v50 - v53;
      *v45.m128_u64 = v50;
    }
  }
  else
  {
    *&v50 = *&v50 + v53;
    *v45.m128_u64 = v50;
  }
  if ( v45.m128_f32[0] <= 1.0 )
  {
    if ( v45.m128_f32[0] < 0.0 )
      v45.m128_f32[0] = v45.m128_f32[0] + 1.0;
    flInterp = v45.m128_f32[0];
  }
  else
  {
    v45.m128_f32[0] = v45.m128_f32[0] - 1.0;
    flInterp = v45.m128_f32[0];
  }
LABEL_65:
  CPointValueRemapper::DoOutputs(this, *v45.m128_u64, v50);
  v55 = flInterp;
  this->m_bFirstUpdate = 0;
  v56 = v55 - this->m_flPreviousValue;
  if ( flUpdateTimea > 0.0 )
  {
    v54 = v56 / flUpdateTimea;
    this->m_flCurrentMomentum = v56 / flUpdateTimea;
  }
  CPointValueRemapper::UpdateInterp(this, v55, v56, v54);
  this->m_flPreviousValue = flInterp;
  return v4;
}


// CPointValueRemapper::UpdatePostDisengage  (line 640, @0x0000000002335c50, libserver.so)  // inlines: Approach, Clamp<float>, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsInputWrapping, IsValid, LookupEntity, NetworkStateChanged, Remove, curtime, operator CEntityInstance*, operator==<ValueRemapperInputType_t>, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>, -1> >::ShiftElementsLeft, CPointValueRemapper::DoOutputs, CPointValueRemapper::UpdateInterp
// callers: CPointValueRemapper::UpdateThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointValueRemapper::UpdatePostDisengage(
        CPointValueRemapper *const this,
        double a2,
        float flUpdateTime)
{
  float m_flCurrentTime; // xmm3_4
  __int64 v5; // xmm1_8
  CGlobalVars *v6; // r12
  float v7; // xmm2_4
  float m_flPreviousValue; // xmm2_4
  ValueRemapperMomentumType_t m_Value; // eax
  float v10; // xmm4_4
  ValueRemapperInputType_t v11; // edx
  char v12; // dl
  int v13; // r14d
  __int64 v14; // r13
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  int v21; // r12d
  __int64 v22; // rdx
  float v23; // xmm2_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm5_4
  float m_flCurrentMomentum; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm7_4
  float v34; // xmm4_4
  float v35; // xmm6_4
  bool v36; // cc
  float v37; // xmm5_4
  float v38; // xmm7_4
  int v39; // [rsp-38h] [rbp-40h]
  float v40; // [rsp-34h] [rbp-3Ch]
  float v41; // [rsp-34h] [rbp-3Ch]

  m_flCurrentTime = 0.0;
  v5 = 1065353216;
  v6 = gpGlobals;
  v7 = this->m_flPreviousUpdateTickTime + 1.0;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        v39 = LODWORD(a2);
        v41 = this->m_flPreviousUpdateTickTime + 1.0;
        (m_pfnWarningFunc)(1, a2, 1.0, v7, 0.0);
        v5 = 1065353216;
        LODWORD(a2) = v39;
        v7 = v41;
      }
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  if ( m_flCurrentTime <= v7 )
  {
    m_flPreviousValue = this->m_flPreviousValue;
    if ( m_flPreviousValue != -1.0 )
    {
      m_Value = this->m_nMomentumType.m_Value;
      if ( m_Value != ValueRemapperMomentumType_t::MomentumType_SpringTowardSnapValue )
      {
        if ( m_Value == ValueRemapperMomentumType_t::MomentumType_SpringAwayFromSnapValue )
        {
          v28 = *&a2 * this->m_flMomentumModifier.m_Value;
          m_flCurrentMomentum = this->m_flCurrentMomentum;
          v10 = this->m_flMaximumChangePerSecond.m_Value;
          if ( m_flPreviousValue < this->m_flSnapValue.m_Value )
          {
            v10 = -v10;
            if ( (v10 - m_flCurrentMomentum) > v28 )
              goto LABEL_58;
            if ( -v28 <= (v10 - m_flCurrentMomentum) )
              goto LABEL_9;
LABEL_40:
            v10 = m_flCurrentMomentum - v28;
            goto LABEL_9;
          }
          v33 = v10 - m_flCurrentMomentum;
          if ( (v10 - m_flCurrentMomentum) > v28 )
            goto LABEL_58;
        }
        else
        {
          v10 = 0.0;
          if ( m_Value != ValueRemapperMomentumType_t::MomentumType_Friction )
          {
LABEL_9:
            v11 = this->m_nInputType.m_Value;
            this->m_flCurrentMomentum = v10;
LABEL_10:
            v40 = (*&a2 * v10) + m_flPreviousValue;
            if ( v11 == ValueRemapperInputType_t::InputType_PlayerShootPosition )
            {
              if ( v40 < 0.0 )
              {
                v40 = 0.0;
                v12 = 0;
              }
              else
              {
                if ( v40 <= 1.0 )
                  goto LABEL_12;
                v40 = 1.0;
                v12 = 0;
              }
LABEL_13:
              if ( m_Value == ValueRemapperMomentumType_t::MomentumType_SpringTowardSnapValue )
              {
                v30 = 0.0;
                if ( v10 <= 0.0 || (v31 = this->m_flSnapValue.m_Value, v40 < v31) )
                {
                  if ( v10 >= 0.0 )
                    goto LABEL_14;
                  v31 = this->m_flSnapValue.m_Value;
                  if ( v31 < v40 )
                    goto LABEL_14;
                  if ( v12 != 0 )
                    v30 = 1.0;
                  if ( (m_flPreviousValue + v30) <= v31 )
                    goto LABEL_14;
                }
                else
                {
                  if ( v12 != 0 )
                    v30 = -1.0;
                  if ( v31 <= (v30 + m_flPreviousValue) )
                    goto LABEL_14;
                }
                v32 = v10 * 0.5;
                v5 = COERCE_UNSIGNED_INT(fabs(v32));
                if ( fabs(v32) < 0.015 )
                {
                  this->m_flCurrentMomentum = 0.0;
                  v40 = v31;
                }
                else
                {
                  this->m_flCurrentMomentum = v32;
                }
              }
LABEL_14:
              v13 = this->m_hOutputEntities.m_Vector.m_Size - 1;
              v14 = v13;
              if ( v13 >= 0 )
              {
                do
                {
                  v15 = &this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory[v14];
                  m_Index = v15->m_Index;
                  if ( v15->m_Index + 2 <= 1
                    || (v17 = v15->m_Index,
                        (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F]) == 0)
                    || (v19 = &v18[v17 & 0x1FF]) == 0
                    || m_Index != v19->m_EHandle.m_Index
                    || v19->m_pInstance == 0 )
                  {
                    CUtlVectorBase<CHandle<CBaseEntity>,CNetworkUtlVector_MemoryType<CHandle<CBaseEntity>,-1>>::ShiftElementsLeft(
                      &this->m_hOutputEntities.m_Vector,
                      v13,
                      1);
                    vptr_IHandleEntity = this->_vptr_IHandleEntity;
                    --this->m_hOutputEntities.m_Vector.m_Size;
                    vptr_IHandleEntity[22](this, 864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                    if ( this->m_hOutputEntities.m_Vector.m_Size > v13 )
                    {
                      v21 = v13;
                      do
                      {
                        v22 = v21++;
                        (*(this->_vptr_IHandleEntity + 22))(this, 864, v22, 0xFFFFFFFFLL);
                      }
                      while ( v21 < this->m_hOutputEntities.m_Vector.m_Size );
                    }
                  }
                  --v13;
                  --v14;
                }
                while ( v13 != -1 );
              }
              CPointValueRemapper::DoOutputs(this, COERCE_DOUBLE(LODWORD(v40)), *&v5);
              CPointValueRemapper::UpdateInterp(this, v40, v40 - this->m_flPreviousValue, v23);
              this->m_flPreviousValue = v40;
              return;
            }
            if ( v11 != ValueRemapperInputType_t::InputType_PlayerShootPositionAroundAxis )
            {
LABEL_12:
              v12 = 0;
              goto LABEL_13;
            }
LABEL_35:
            if ( v40 <= 1.0 )
            {
              if ( v40 >= 0.0 )
                goto LABEL_12;
              v12 = 1;
              v40 = v40 + 1.0;
            }
            else
            {
              v12 = 1;
              v40 = v40 - 1.0;
            }
            goto LABEL_13;
          }
          v10 = this->m_flSnapValue.m_Value;
          m_flCurrentMomentum = this->m_flCurrentMomentum;
          v28 = this->m_flMomentumModifier.m_Value * *&a2;
          v33 = v10 - m_flCurrentMomentum;
          if ( (v10 - m_flCurrentMomentum) > v28 )
          {
LABEL_58:
            v10 = v28 + m_flCurrentMomentum;
            goto LABEL_9;
          }
        }
        if ( -v28 <= v33 )
          goto LABEL_9;
        goto LABEL_40;
      }
      v34 = this->m_flSnapValue.m_Value;
      if ( m_flPreviousValue == v34 )
      {
        v10 = this->m_flCurrentMomentum;
        v11 = this->m_nInputType.m_Value;
        goto LABEL_10;
      }
      v11 = this->m_nInputType.m_Value;
      if ( v11 != ValueRemapperInputType_t::InputType_PlayerShootPositionAroundAxis )
      {
        v35 = this->m_flCurrentMomentum;
        if ( v35 < 0.0 && m_flPreviousValue == 0.0 || v35 > 0.0 && m_flPreviousValue == 1.0 )
        {
          this->m_flCurrentMomentum = 0.0;
          v35 = 0.0;
        }
        v36 = m_flPreviousValue <= v34;
        v10 = this->m_flMaximumChangePerSecond.m_Value;
        v37 = *&a2 * this->m_flMomentumModifier.m_Value;
        if ( v36 )
        {
          v38 = v10 - v35;
          if ( (v10 - v35) > v37 )
            goto LABEL_70;
        }
        else
        {
          v10 = -v10;
          v38 = v10 - v35;
          if ( (v10 - v35) > v37 )
          {
LABEL_70:
            v10 = v37 + v35;
LABEL_71:
            this->m_flCurrentMomentum = v10;
            goto LABEL_10;
          }
        }
        if ( -v37 > v38 )
          v10 = v35 - v37;
        goto LABEL_71;
      }
      if ( m_flPreviousValue <= v34 || (v34 + 0.5) <= m_flPreviousValue )
      {
        v10 = this->m_flMaximumChangePerSecond.m_Value;
        v25 = this->m_flCurrentMomentum;
        v26 = this->m_flMomentumModifier.m_Value * *&a2;
        v27 = v10 - v25;
        if ( (v10 - v25) > v26 )
          goto LABEL_33;
      }
      else
      {
        v25 = this->m_flCurrentMomentum;
        v26 = this->m_flMomentumModifier.m_Value * *&a2;
        v10 = -this->m_flMaximumChangePerSecond.m_Value;
        v27 = v10 - v25;
        if ( (v10 - v25) > v26 )
        {
LABEL_33:
          v10 = v26 + v25;
LABEL_34:
          this->m_flCurrentMomentum = v10;
          v40 = (*&a2 * v10) + m_flPreviousValue;
          goto LABEL_35;
        }
      }
      if ( -v26 > v27 )
        v10 = v25 - v26;
      goto LABEL_34;
    }
  }
}


// CPointValueRemapper::DoOutputs  (line 781, @0x000000000232a680, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetPlaybackRate, operator CEntityInstance*, operator->, operator[]
// calls: CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, CBaseAnimating::SetCycle, CBaseAnimating::GetBaseAnimatingController
// callers: CPointValueRemapper::UpdateInternal, CPointValueRemapper::UpdatePostDisengage
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointValueRemapper::DoOutputs(CPointValueRemapper *const this, double a2, double flInterp)
{
  ValueRemapperOutputType_t m_Value; // eax
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r13
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const QAngle *AbsAngles; // rax
  CBaseEntity *m_pInstance; // rdi
  CConcreteEntityList *v15; // rsi
  CHandle<CBaseEntity> *v16; // rdx
  uint32 v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  CHandle<CBaseEntity> *v24; // rdx
  uint32 v25; // eax
  __int16 v26; // cx
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CBaseAnimating *v29; // rax
  CBaseAnimating *v30; // r14
  CBaseAnimatingController *BaseAnimatingController; // rax
  float flInterpa; // [rsp+Ch] [rbp-34h]
  QAngle qRotation; // [rsp+10h] [rbp-30h] BYREF

  flInterpa = *&a2;
  m_Value = this->m_nOutputType.m_Value;
  if ( m_Value != ValueRemapperOutputType_t::OutputType_AnimationCycle )
  {
    if ( m_Value < 4 )
    {
      v5 = this->m_hOutputEntities.m_Vector.m_Size - 1;
      if ( v5 >= 0 )
      {
        v6 = 4LL * v5;
        v7 = 4 * (v5 - v5) - 4;
        do
        {
          while ( 1 )
          {
            v8 = &this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory[v6 / 4];
            m_Index = v8->m_Index;
            if ( v8->m_Index + 2 > 1 )
            {
              v10 = v8->m_Index;
              v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
              if ( v11 != 0 )
              {
                v12 = &v11[v10 & 0x1FF];
                if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
                  break;
              }
            }
            v6 -= 4LL;
            if ( v6 == v7 )
              return;
          }
          AbsAngles = CBaseEntity::GetAbsAngles(v12->m_pInstance);
          m_pInstance = 0;
          v15 = CEntityHandle::gm_pEntityList;
          *&qRotation.x = *&AbsAngles->x;
          v16 = &this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory[v6 / 4];
          qRotation.z = AbsAngles->z;
          *(&qRotation + this->m_nOutputType.m_Value - 1) = 360.0 * flInterpa;
          v17 = v16->m_Index;
          if ( v16->m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = v15->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
                m_pInstance = v20->m_pInstance;
            }
          }
          v6 -= 4LL;
          CBaseEntity::SetAbsAngles(m_pInstance, &qRotation);
        }
        while ( v6 != v7 );
      }
    }
  }
  else
  {
    v21 = this->m_hOutputEntities.m_Vector.m_Size - 1;
    if ( v21 >= 0 )
    {
      v22 = 4LL * v21;
      v23 = 4 * (v21 - v21) - 4;
      do
      {
        v24 = &this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory[v22 / 4];
        v25 = v24->m_Index;
        if ( v24->m_Index + 2 > 1 )
        {
          v26 = v24->m_Index;
          v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v24->m_Index) >> 9) & 0x3F];
          if ( v27 != 0 )
          {
            v28 = &v27[v26 & 0x1FF];
            if ( v28 != 0 && v25 == v28->m_EHandle.m_Index && v28->m_pInstance != 0 )
            {
              v29 = (*(v28->m_pInstance->_vptr_IHandleEntity + 43))(v28->m_pInstance, a2, flInterp);
              v30 = v29;
              if ( v29 != 0 )
              {
                if ( this->m_bFirstUpdate )
                {
                  CBaseAnimating::SetCycle(v29, COERCE_DOUBLE(1065353216), *&flInterp);
                  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v30);
                  (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 22))(BaseAnimatingController, 0.0);
                }
                CBaseAnimating::SetCycle(v30, COERCE_DOUBLE(LODWORD(flInterpa)), *&flInterp);
              }
            }
          }
        }
        v22 -= 4LL;
      }
      while ( v22 != v23 );
    }
  }
}


// CPointValueRemapper::ResetUpdates  (line 832, @0x000000000232a900, libserver.so)  // inlines: curtime
void __fastcall CPointValueRemapper::ResetUpdates(CPointValueRemapper *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  this->m_bFirstUpdate = 1;
  this->m_flPreviousValue = -1.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  this->m_flPreviousUpdateTickTime = m_flCurrentTime;
}


// CPointValueRemapper::Engage  (line 839, @0x000000000232fa40, libserver.so)  // inlines: CPASFilter, CVariantBase, FireOutput, Free, String, ToCStr, ~CPASFilter, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CPointValueRemapper::UpdateThink
void __fastcall CPointValueRemapper::Engage(CPointValueRemapper *const this)
{
  const Vector *AbsOrigin; // r13
  const char *m_pAsString; // rdx
  CVariant value; // [rsp+0h] [rbp-170h] BYREF
  CPASFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+148h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( !this->m_bEngaged )
  {
    this->m_bEngaged = 1;
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnEngage, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_iszSoundEngage.u.m_Id != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, AbsOrigin);
      m_pAsString = "";
      if ( this->m_iszSoundEngage.u.m_Id != 0 )
        m_pAsString = this->m_iszSoundEngage.u.m_pAsString;
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, 0, -1, 0.0);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CPointValueRemapper::Disengage  (line 857, @0x000000000232fbe0, libserver.so)  // inlines: CPASFilter, CVariantBase, FireOutput, Free, String, ToCStr, ~CPASFilter, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume, CVariantBase<CVariantDefaultAllocator>::Free
// callers: CPointValueRemapper::UpdateThink
void __fastcall CPointValueRemapper::Disengage(CPointValueRemapper *const this)
{
  const Vector *AbsOrigin; // r13
  const char *m_pAsString; // rdx
  CVariant value; // [rsp+0h] [rbp-170h] BYREF
  CPASFilter filter; // [rsp+10h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+148h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  if ( this->m_bEngaged )
  {
    this->m_bEngaged = 0;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnDisengage, this, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_iszSoundDisengage.u.m_Id != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, AbsOrigin);
      m_pAsString = "";
      if ( this->m_iszSoundDisengage.u.m_Id != 0 )
        m_pAsString = this->m_iszSoundDisengage.u.m_pAsString;
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, 0, -1, 0.0);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CPointValueRemapper::AddOutputEntities  (line 878, @0x0000000002334770, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlSymbolLarge, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, NetworkStateChanged, Set, operator!=, operator[]
// calls: CGameEntitySystem::FindEntityByName, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CPointValueRemapper::Activate
void __fastcall CPointValueRemapper::AddOutputEntities(CPointValueRemapper *const this, const string_t *const iszName)
{
  CBaseEntity *i; // r15
  CHandle<CBaseEntity> *v5; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v7; // ecx
  __int16 v8; // si
  unsigned int m_Size; // r13d
  int v10; // edx
  string_t v11; // [rsp+20h] [rbp-40h] BYREF

  if ( iszName->u.m_Id != 0 )
  {
    v11.u.m_Id = iszName->u.m_Id;
    for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &v11, this, 0, 0, 0);
          i != 0;
          i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, i, &v11, this, 0, 0, 0) )
    {
      LODWORD(v11.u.m_Id) = -1;
      m_pEntity = i->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v8 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v11.u.m_Id) = v8 | v11.u.m_Id & 0x8000;
        LODWORD(v11.u.m_Id) = (v7 << 15) | v11.u.m_Id & 0x7FFF;
      }
      m_Size = this->m_hOutputEntities.m_Vector.m_Size;
      v10 = m_Size;
      if ( m_Size == this->m_hOutputEntities.m_Vector.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hOutputEntities.m_Vector.m_Memory, 1);
        v10 = this->m_hOutputEntities.m_Vector.m_Size;
      }
      this->m_hOutputEntities.m_Vector.m_Size = v10 + 1;
      v5 = &this->m_hOutputEntities.m_Vector.m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
        v5->m_Index = v11.u.m_Id;
      (*(this->_vptr_IHandleEntity + 22))(this, 864, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      (*(this->_vptr_IHandleEntity + 22))(this, 864, m_Size, 0xFFFFFFFFLL);
      v11.u.m_Id = iszName->u.m_Id;
    }
  }
}


// CPointValueRemapper::UpdateInterp  (line 892, @0x0000000002330680, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat, CVariantBase, ClearData, CopyData, FireOutput, Free, GetDataPtr, Init, StopSoundLoop, String, ToCStr, V_memcpy, memcpy, ~CBroadcastRecipientFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::~CRecipientFilter, CPointValueRemapper::StopSoundLoop, CPointValueRemapper::StartSoundLoop, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CBaseEntity::GetAbsOrigin, CRecipientFilter::AddRecipientsByPAS, CSoundOpGameSystem::StartSoundEvent, CPASFilter::CPASFilter (16 total)
// callers: CPointValueRemapper::UpdateInternal, CPointValueRemapper::UpdatePostDisengage
void __fastcall CPointValueRemapper::UpdateInterp(
        CPointValueRemapper *const this,
        float a2,
        float flInterp,
        float flInterpDiff)
{
  float m_flCustomOutputValue; // xmm0_4
  float v6; // xmm0_4
  float m_flCurrentMomentum; // r14d
  float *m_pData; // rax
  const Vector *AbsOrigin; // r13
  const char *m_pAsString; // rdx
  const Vector *v11; // rax
  char v13; // [rsp+10h] [rbp-1B8h] BYREF
  float flInterpa; // [rsp+14h] [rbp-1B4h]
  unsigned int v15; // [rsp+18h] [rbp-1B0h]
  void *v16; // [rsp+20h] [rbp-1A8h]
  CSosFieldData v17; // [rsp+30h] [rbp-198h] BYREF
  IRecipientFilter v18; // [rsp+50h] [rbp-178h] BYREF
  CPASFilter filter; // [rsp+58h] [rbp-170h]

  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( flInterp == 0.0 )
    goto LABEL_9;
  if ( flInterp > 0.0
    && (m_flCustomOutputValue = this->m_flCustomOutputValue, a2 >= m_flCustomOutputValue)
    && m_flCustomOutputValue > (a2 - flInterp)
    || flInterp < 0.0 && (v6 = this->m_flCustomOutputValue) >= a2 && (a2 - flInterp) > v6 )
  {
    v17.m_nAllocSize = 0;
    *&v17.m_fieldDataType = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnReachedValueCustom, this, this, &v17, 0.0);
    if ( (v17.m_nAllocSize & 0x10000) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v17.m_fieldDataType);
  }
  if ( a2 == 0.0 )
  {
    v17.m_nAllocSize = 0;
    *&v17.m_fieldDataType = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnReachedValueZero, this, this, &v17, 0.0);
    if ( (v17.m_nAllocSize & 0x10000) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v17.m_fieldDataType);
    if ( this->m_iszSoundReachedValueZero.u.m_Id != 0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      CRecipientFilter::CRecipientFilter(&v18);
      v18._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&v18, AbsOrigin);
      m_pAsString = "";
      if ( this->m_iszSoundReachedValueZero.u.m_Id != 0 )
        m_pAsString = this->m_iszSoundReachedValueZero.u.m_pAsString;
LABEL_36:
      CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &v18, m_pAsString, 0, -1, 0.0);
      v18._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&v18);
    }
  }
  else if ( a2 == 1.0 )
  {
    v17.m_nAllocSize = 0;
    *&v17.m_fieldDataType = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnReachedValueOne, this, this, &v17, 0.0);
    if ( (v17.m_nAllocSize & 0x10000) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&v17.m_fieldDataType);
    if ( this->m_iszSoundReachedValueOne.u.m_Id != 0 )
    {
      v11 = CBaseEntity::GetAbsOrigin(this);
      CPASFilter::CPASFilter(&v18, v11);
      m_pAsString = "";
      if ( this->m_iszSoundReachedValueOne.u.m_Id != 0 )
        m_pAsString = this->m_iszSoundReachedValueOne.u.m_pAsString;
      goto LABEL_36;
    }
  }
LABEL_9:
  CRecipientFilter::CRecipientFilter(&v18);
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v18);
  if ( a2 != 1.0 && a2 != 0.0 )
  {
    CPointValueRemapper::StartSoundLoop(this);
    v13 = -1;
    v15 = 0;
    m_flCurrentMomentum = this->m_flCurrentMomentum;
    v16 = 0;
    LODWORD(flInterpa) = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    v13 = 8;
    v15 = 4;
    v16 = (LODWORD(m_flCurrentMomentum) & 0x7FFFFFFF);
    CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &v18, this->m_sndMovingLoop, "velocity", &v13, 0, 0);
    if ( v15 > 8 && v16 != 0 )
      operator delete[](v16);
    v17.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
    v17.m_nAllocSize = 0;
    v17.m_pData = 0;
    v17.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 8);
    v17.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT;
    if ( v17.m_nAllocSize <= 3 )
    {
      v17.m_nAllocSize = 4;
    }
    else if ( v17.m_nAllocSize > 8 )
    {
      m_pData = v17.m_pData;
      if ( v17.m_pData == 0 )
      {
LABEL_27:
        CSoundOpGameSystem::SetSoundEventParam(
          g_pSoundOpGameSystem,
          &v18,
          this->m_sndMovingLoop,
          "progress",
          &v17,
          0,
          0);
        if ( v17.m_nAllocSize > 8 && v17.m_pData != 0 )
          operator delete[](v17.m_pData);
        goto LABEL_12;
      }
LABEL_26:
      *m_pData = a2;
      goto LABEL_27;
    }
    m_pData = &v17.m_pData;
    goto LABEL_26;
  }
  if ( this->m_sndMovingLoop.m_nGuid.m_Data != 0 )
    CPointValueRemapper::StopSoundLoop(this);
LABEL_12:
  v18._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v18);
}


// CPointValueRemapper::StartSoundLoop  (line 938, @0x000000000232a970, libserver.so)  // inlines: CBroadcastRecipientFilter, String, ToCStr, ~CBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::StartSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// callers: CPointValueRemapper::UpdateInterp
void __fastcall CPointValueRemapper::StartSoundLoop(CPointValueRemapper *const this)
{
  const char *m_pAsString; // rdx
  CBroadcastRecipientFilter filterAll; // [rsp+0h] [rbp-150h] BYREF
  unsigned __int64 v4; // [rsp+138h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  if ( this->m_sndMovingLoop.m_nGuid.m_Data == 0 && this->m_iszSoundMovingLoop.u.m_Id != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filterAll);
    filterAll._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filterAll);
    m_pAsString = "";
    if ( this->m_iszSoundMovingLoop.u.m_Id != 0 )
      m_pAsString = this->m_iszSoundMovingLoop.u.m_pAsString;
    this->m_sndMovingLoop = CSoundOpGameSystem::StartSoundEvent(
                              g_pSoundOpGameSystem,
                              &filterAll,
                              m_pAsString,
                              0,
                              -1,
                              0.0);
    filterAll._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filterAll);
  }
}


// CPointValueRemapper::StopSoundLoop  (line 950, @0x000000000232a0f0, libserver.so)
// calls: CSoundOpGameSystem::StopSoundEvent
// callers: CPointValueRemapper::SetEnabled, CPointValueRemapper::StopSoundLoop, CPointValueRemapper::UpdateInterp
void __fastcall CPointValueRemapper::StopSoundLoop(CPointValueRemapper *const this)
{
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_sndMovingLoop);
  this->m_sndMovingLoop.m_nGuid.m_Data = 0;
}


// CPointValueRemapper::StopSoundLoop  (line 950, @0x000000000232aa80, libserver.so)
// calls: CPointValueRemapper::StopSoundLoop
void __fastcall CPointValueRemapper::StopSoundLoop(CPointValueRemapper *const this)
{
  if ( this->m_sndMovingLoop.m_nGuid.m_Data != 0 )
    CPointValueRemapper::StopSoundLoop(this);
}


// CPointValueRemapper::Input_SetMomentumType  (line 959, @0x0000000002322510, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, atoi, operator=<int>
// calls: strtol, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2322544, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointValueRemapper::Input_SetMomentumType(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rdi
  ValueRemapperMomentumType_t v8; // r12d
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx

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
        v11 = "true";
        if ( value->m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
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
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_10:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v8 = strtol(m_uint64, 0, 10);
  if ( v8 != this->m_nMomentumType.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 892, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nMomentumType.m_Value = v8;
  }
}


// CPointValueRemapper::Input_SetMomentumModifier  (line 964, @0x0000000002321990, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, atof, operator=<double>
// calls: strtod, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_23219C2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointValueRemapper::Input_SetMomentumModifier(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rdi
  float v8; // xmm0_4
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx
  float v12; // [rsp+Ch] [rbp-14h]

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
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_11;
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
        goto LABEL_13;
      case 6:
        v11 = "true";
        if ( value->m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
        goto LABEL_17;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_13;
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
        goto LABEL_17;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_17:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_11:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_13:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v8 = strtod(m_uint64, 0);
  if ( v8 != this->m_flMomentumModifier.m_Value )
  {
    v12 = v8;
    (*(this->_vptr_IHandleEntity + 22))(this, 896, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flMomentumModifier.m_Value = v12;
  }
}


// CPointValueRemapper::Input_SetSnapValue  (line 969, @0x00000000023216a0, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, atof, operator=<double>
// calls: strtod, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_23216D2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointValueRemapper::Input_SetSnapValue(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rdi
  float v8; // xmm0_4
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx
  float v12; // [rsp+Ch] [rbp-14h]

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
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_11;
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
        goto LABEL_13;
      case 6:
        v11 = "true";
        if ( value->m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
        goto LABEL_17;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_13;
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
        goto LABEL_17;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_17:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_11:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_13:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v8 = strtod(m_uint64, 0);
  if ( v8 != this->m_flSnapValue.m_Value )
  {
    v12 = v8;
    (*(this->_vptr_IHandleEntity + 22))(this, 900, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flSnapValue.m_Value = v12;
  }
}


// CPointValueRemapper::Input_SetEngageDistance  (line 974, @0x0000000002321f70, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, atof, operator=<double>
// calls: strtod, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2321FA2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointValueRemapper::Input_SetEngageDistance(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rdi
  float v8; // xmm0_4
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx
  float v12; // [rsp+Ch] [rbp-14h]

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
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_11;
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
        goto LABEL_13;
      case 6:
        v11 = "true";
        if ( value->m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
        goto LABEL_17;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_13;
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
        goto LABEL_17;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_17:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_11:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_13:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v8 = strtod(m_uint64, 0);
  if ( v8 != this->m_flEngageDistance.m_Value )
  {
    v12 = v8;
    (*(this->_vptr_IHandleEntity + 22))(this, 816, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flEngageDistance.m_Value = v12;
  }
}


// CPointValueRemapper::Input_SetDisengageDistance  (line 979, @0x0000000002321c80, libserver.so)  // inlines: AssignTo, NetworkStateChanged, Set, TempString, ToString, atof, operator=<double>
// calls: strtod, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2321CB2, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CPointValueRemapper::Input_SetDisengageDistance(
        CPointValueRemapper *const this,
        CEntityInstance *pActivator,
        CEntityInstance *pCaller,
        CEntityInstance *pComponentOwner,
        const CVariant *const value)
{
  int16 m_type; // di
  const char *m_uint64; // rdi
  float v8; // xmm0_4
  const char *v9; // rax
  double m_float; // xmm0_8
  const char *v11; // rcx
  float v12; // [rsp+Ch] [rbp-14h]

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
        goto LABEL_9;
      case 1:
        m_float = value->m_float;
        goto LABEL_11;
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
        goto LABEL_13;
      case 6:
        v11 = "true";
        if ( value->m_char == 0 )
          v11 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v11);
        goto LABEL_17;
      case 8:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%c", value->m_char);
        goto LABEL_13;
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
        goto LABEL_17;
      case 33:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%llu", value->m_uint64);
LABEL_17:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = value->m_float64;
LABEL_11:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%u", value->m_uint);
LABEL_13:
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_9:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_uint64 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  v8 = strtod(m_uint64, 0);
  if ( v8 != this->m_flDisengageDistance.m_Value )
  {
    v12 = v8;
    (*(this->_vptr_IHandleEntity + 22))(this, 812, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDisengageDistance.m_Value = v12;
  }
}


