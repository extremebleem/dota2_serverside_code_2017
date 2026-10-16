// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pointangularvelocitysensor.cpp:26
class CPointAngularVelocitySensor : public CPointEntity {
public:

private:

	EHANDLE m_hTargetEntity;  // +0x308
	float m_flThreshold;  // +0x30c
	int m_nLastCompareResult;  // +0x310
	int m_nLastFireResult;  // +0x314
	float m_flFireTime;  // +0x318
	float m_flFireInterval;  // +0x31c
	float m_flLastAngVelocity;  // +0x320
	bool m_bUseHelper;  // +0x33c

	COutputFloat m_AngularVelocity;  // +0x340
	COutputEvent m_OnLessThan;  // +0x360
	COutputEvent m_OnLessThanOrEqualTo;  // +0x378
	COutputEvent m_OnGreaterThan;  // +0x390
	COutputEvent m_OnGreaterThanOrEqualTo;  // +0x3a8
	COutputEvent m_OnEqualTo;  // +0x3c0

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
	CPointAngularVelocitySensor(CPointAngularVelocitySensor &);
	CPointAngularVelocitySensor(CPointAngularVelocitySensor &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CPointAngularVelocitySensor();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	float SampleAngularVelocity(CBaseEntity *);
	int CompareToThreshold(CBaseEntity *, float, bool);
	void FireCompareOutput(int, CBaseEntity *);
	void DrawDebugLines();
	void InputTest(inputdata_t &);
	void InputTestWithInterval(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointAngularVelocitySensor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 984
};

// src/game/server/pointangularvelocitysensor.cpp:387
class CPointVelocitySensor : public CPointEntity {
public:

private:

	EHANDLE m_hTargetEntity;  // +0x308
	bool m_bEnabled;  // +0x318

	float m_fPrevVelocity;  // +0x31c
	float m_flAvgInterval;  // +0x320

	COutputFloat m_Velocity;  // +0x328

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
	CPointVelocitySensor(CPointVelocitySensor &);
	CPointVelocitySensor(CPointVelocitySensor &);
	CPointVelocitySensor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	void SampleVelocity();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointVelocitySensor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 840
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointAngularVelocitySensor::~CPointAngularVelocitySensor  (line 26, @0x000000000233b760, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointAngularVelocitySensor::~CPointAngularVelocitySensor(CPointAngularVelocitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointAngularVelocitySensor::~CPointAngularVelocitySensor  (line 26, @0x000000000233b780, libserver.so)  // inlines: ~CPointAngularVelocitySensor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointAngularVelocitySensor::~CPointAngularVelocitySensor(CPointAngularVelocitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointAngularVelocitySensor::GetEntityClass  (line 28, @0x000000000233a130, libserver.so)
CEntityClass *__cdecl CPointAngularVelocitySensor::GetEntityClass()
{
  return g_pEntityCPointAngularVelocitySensorClass;
}


// CPointAngularVelocitySensor::Schema_DynamicBinding  (line 28, @0x000000000233a140, libserver.so)
// globals: CPointAngularVelocitySensor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointAngularVelocitySensor::Schema_DynamicBinding(
        const CPointAngularVelocitySensor *const this)
{
  return CPointAngularVelocitySensor::s_pSchemaBinding;
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x000000000233a150, libserver.so)
// globals: CPointAngularVelocitySensor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointAngularVelocitySensor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x000000000233a160, libserver.so)  // inlines: Destruct<CPointAngularVelocitySensor>
void __fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::DestructInstance(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x000000000233a180, libserver.so)
void __fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::FreeInstance(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x000000000233a1a0, libserver.so)
bool __fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::CanAllocate(
        const CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x000000000233a1b0, libserver.so)
// globals: CPointAngularVelocitySensor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointAngularVelocitySensor::s_pSchemaBinding;
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x000000000233b360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::AllocateInstance(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 984);
  memset(v1, 0, 0x3D8u);
  return v1;
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x000000000233c990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x000000000233c9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointAngularVelocitySensor::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x000000000233f2d0, libserver.so)  // inlines: Construct<CPointAngularVelocitySensor>
// calls: CPointAngularVelocitySensor::CPointAngularVelocitySensor
CEntityInstance *__fastcall CPointAngularVelocitySensor::CEntityInstanceEntityClass::ConstructInstance(
        CPointAngularVelocitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CPointAngularVelocitySensor::CPointAngularVelocitySensor(p);
  return p;
}


// CPointAngularVelocitySensor::GetEntityClassInternal  (line 28, @0x0000000002342fb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_angularvelocitysensor", "CPointAngularVelocitySensor"
// globals: `guard variable for'CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass, CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo, CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo
CEntityClass *__cdecl CPointAngularVelocitySensor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass) != 0 )
  {
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_designerName.u.m_Id = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass._vptr_CEntityClass = off_3F79390;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_ComponentOffsets.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_AllHelpers.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classInputs.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classOutputs.m_Size = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_requiredEHandle.m_Index = -1;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_hNetworkSerializer = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pBaseClassInfo = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pClassInfo = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_flags = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_nAllHelpersFlags = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pScriptClassDesc = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pInputs = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_nInputCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pOutputs = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_nOutputCount = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pGameClass = 0;
    CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass._vptr_CEntityClass = off_40927B0;
    __cxa_guard_release(&`guard variable for'CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass);
    __cxa_atexit(
      CPointAngularVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointAngularVelocitySensorClass != 0 )
    return &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass;
  if ( `guard variable for'CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo,
      "CPointAngularVelocitySensor",
      "point_angularvelocitysensor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo);
  }
  CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pClassInfo = &CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo;
  CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pBaseClassInfo = CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointAngularVelocitySensorClass = &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass;
  CPointAngularVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointAngularVelocitySensorClassInfo.m_pClass = &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass;
  CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointAngularVelocitySensorClass->m_pComponentOverrides = 0;
  return &CPointAngularVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointAngularVelocitySensorClass;
}


// CPointAngularVelocitySensor::GetDataDescMap  (line 79, @0x000000000231ed20, libserver.so)
// globals: CPointAngularVelocitySensor::m_DataMap
datamap_t *__fastcall CPointAngularVelocitySensor::GetDataDescMap(CPointAngularVelocitySensor *const this)
{
  return &CPointAngularVelocitySensor::m_DataMap;
}


// CPointAngularVelocitySensor::AddDatadescMetadataKeys  (line 79, @0x000000000232d730, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointAngularVelocitySensor::GetEntityClass(void)
void __fastcall CPointAngularVelocitySensor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointAngularVelocitySensor::GetEntityClass);
}


// CPointAngularVelocitySensor::GetBaseMap  (line 79, @0x000000000232d750, libserver.so)
datamap_t *__cdecl CPointAngularVelocitySensor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointAngularVelocitySensor>  (line 79, @0x000000000232d760, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointAngularVelocitySensor"
// globals: `guard variable for'DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder, `guard variable for'DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc, CPointAngularVelocitySensor::GetEntityClass(void), CPointAngularVelocitySensor::m_DataMap, DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_pszBase = "CPointAngularVelocitySensor";
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder.m_nLenBase = 27;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::nameHolder,
      &_dso_handle);
  }
  CPointAngularVelocitySensor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc) != 0 )
  {
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[15].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc);
  }
  CPointAngularVelocitySensor::m_DataMap.dataNumFields = 18;
  CPointAngularVelocitySensor::m_DataMap.dataDesc = &DataMapInit<CPointAngularVelocitySensor>(CPointAngularVelocitySensor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointAngularVelocitySensor::m_DataMap, CPointAngularVelocitySensor::GetEntityClass);
  return &CPointAngularVelocitySensor::m_DataMap;
}


// CPointAngularVelocitySensor::CPointAngularVelocitySensor  (line 113, @0x000000000232d8a0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CPointEntity
// calls: CBaseEntity::CBaseEntity
// callers: CPointAngularVelocitySensor::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CPointAngularVelocitySensor::CPointAngularVelocitySensor(CPointAngularVelocitySensor *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_hTargetEntity.m_Index = -1;
  this->_vptr_IHandleEntity = &off_4092830;
  this->m_AngularVelocity._vptr_CEntityIOOutput = off_3FD2290;
  this->m_OnLessThan._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnLessThanOrEqualTo._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnGreaterThan._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnGreaterThanOrEqualTo._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnEqualTo._vptr_CEntityIOOutput = off_3F7C190;
  this->m_flFireInterval = 0.2;
}


// CPointAngularVelocitySensor::Spawn  (line 121, @0x000000000231f0f0, libserver.so)  // inlines: operator=
// calls: CPointEntity::Spawn
void __fastcall CPointAngularVelocitySensor::Spawn(
        CPointAngularVelocitySensor *const this,
        const CEntityKeyValues *pKeyValues)
{
  float m_flThreshold; // xmm0_4

  CPointEntity::Spawn(this, pKeyValues);
  m_flThreshold = this->m_flThreshold;
  this->m_nLastFireResult = -2;
  this->m_nLastCompareResult = -2;
  this->m_flThreshold = fabs(m_flThreshold);
  this->m_lastOrientation = vec3_angle;
}


// CPointAngularVelocitySensor::Activate  (line 136, @0x0000000002320c70, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, LookupEntity, Set, curtime, operator bool, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngularVelocitySensor::Activate(
        CPointAngularVelocitySensor *const this,
        ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  double v4; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  CConcreteEntityList *v8; // rsi
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  double v12; // xmm0_8
  CGlobalVars *v13; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, 0, 0, 0, 0);
  if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v8 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hTargetEntity.m_Index) = v7 | this->m_hTargetEntity.m_Index & 0x8000;
    v9 = (v6 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
    this->m_hTargetEntity.m_Index = v9;
    if ( v9 + 2 > 1 )
    {
      v10 = v8->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v11 != 0 && v11->m_EHandle.m_Index == v9 )
        {
          v12 = 0.0;
          v13 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v12 = LODWORD(v13->m_flCurrentTime);
          }
          CBaseEntity::SetNextThink(this, v12, v4, 0);
        }
      }
    }
  }
  else
  {
    this->m_hTargetEntity.m_Index = -1;
  }
}


// CPointAngularVelocitySensor::DrawDebugLines  (line 151, @0x000000000232d910, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorAdd, VectorMultiply, VectorSubtract, operator bool, operator*, operator+, operator-, operator->
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles, AngleVectors, NDebugOverlay::Line, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsAngles
// callers: CPointAngularVelocitySensor::CompareToThreshold
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngularVelocitySensor::DrawDebugLines(CPointAngularVelocitySensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *v5; // rax
  vec_t v6; // xmm2_4
  vec_t v7; // xmm0_4
  __m128i v8; // xmm4
  __m128i v9; // xmm5
  float v10; // r12d
  float v11; // r13d
  const Vector *v12; // rax
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  const Vector *v15; // rax
  __m128i v16; // xmm6
  float v17; // r13d
  const Vector *v18; // rax
  vec_t v19; // xmm3_4
  vec_t v20; // xmm0_4
  const Vector *v21; // rax
  __m128i v22; // xmm7
  float v23; // r13d
  const Vector *v24; // rax
  vec_t v25; // xmm1_4
  vec_t v26; // xmm2_4
  const Vector *v27; // rax
  const CBaseEntity *v28; // rax
  const QAngle *AbsAngles; // rax
  __m128i x_low; // xmm4
  __m128i v31; // xmm5
  float v32; // r12d
  float v33; // r13d
  const Vector *AbsOrigin; // rax
  vec_t v35; // xmm2_4
  vec_t v36; // xmm0_4
  const Vector *v37; // rax
  __m128i v38; // xmm6
  float v39; // r13d
  const Vector *v40; // rax
  vec_t v41; // xmm2_4
  vec_t v42; // xmm0_4
  const Vector *v43; // rax
  __m128i v44; // xmm7
  float v45; // r13d
  const Vector *v46; // rax
  vec_t v47; // xmm1_4
  vec_t v48; // xmm2_4
  const Vector *v49; // rax
  float v50; // [rsp+4h] [rbp-8Ch]
  float v51; // [rsp+4h] [rbp-8Ch]
  float v52; // [rsp+8h] [rbp-88h]
  float v53; // [rsp+8h] [rbp-88h]
  float v54; // [rsp+8h] [rbp-88h]
  float v55; // [rsp+8h] [rbp-88h]
  float v56; // [rsp+Ch] [rbp-84h]
  float v57; // [rsp+Ch] [rbp-84h]
  float v58; // [rsp+Ch] [rbp-84h]
  float v59; // [rsp+Ch] [rbp-84h]
  QAngle Angles; // [rsp+10h] [rbp-80h] BYREF
  Vector vAxisForward; // [rsp+20h] [rbp-70h] BYREF
  Vector vAxisRight; // [rsp+30h] [rbp-60h] BYREF
  Vector vAxisUp; // [rsp+40h] [rbp-50h] BYREF
  Vector vLine; // [rsp+50h] [rbp-40h] BYREF
  Vector target; // [rsp+60h] [rbp-30h] BYREF

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        v28 = CEntityHandle::operator CEntityInstance *(&this->m_hTargetEntity);
        AbsAngles = CBaseEntity::GetAbsAngles(v28);
        AngleVectors(AbsAngles, &vAxisRight, &vAxisUp, &vLine);
        x_low = LODWORD(vAxisRight.x);
        v31 = 0x42800000u;
        *x_low.m128i_i32 = vAxisRight.x * 64.0;
        *v31.m128i_i32 = 64.0 * vAxisRight.z;
        v32 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
        v33 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
        v54 = vAxisRight.y * 64.0;
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v35 = v33 + AbsOrigin->z;
        v36 = v54 + AbsOrigin->y;
        target.x = v32 + AbsOrigin->x;
        target.z = v35;
        target.y = v36;
        v37 = CBaseEntity::GetAbsOrigin(this);
        NDebugOverlay::Line(v37, &target, 0xFFu, 0, 0, 0, 0.0);
        v38 = LODWORD(vAxisUp.x);
        *v38.m128i_i32 = vAxisUp.x * 64.0;
        v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
        v51 = vAxisUp.y * 64.0;
        v58 = 64.0 * vAxisUp.z;
        v40 = CBaseEntity::GetAbsOrigin(this);
        v41 = v51 + v40->y;
        v42 = v58 + v40->z;
        target.x = v39 + v40->x;
        target.y = v41;
        target.z = v42;
        v43 = CBaseEntity::GetAbsOrigin(this);
        NDebugOverlay::Line(v43, &target, 0, 0xFFu, 0, 0, 0.0);
        v44 = LODWORD(vLine.x);
        *v44.m128i_i32 = vLine.x * 64.0;
        v45 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
        v55 = vLine.y * 64.0;
        v59 = 64.0 * vLine.z;
        v46 = CBaseEntity::GetAbsOrigin(this);
        v47 = v59 + v46->z;
        v48 = v45 + v46->x;
        target.y = v55 + v46->y;
        target.z = v47;
        target.x = v48;
        v49 = CBaseEntity::GetAbsOrigin(this);
        NDebugOverlay::Line(v49, &target, 0, 0, 0xFFu, 0, 0.0);
      }
    }
  }
  if ( this->m_bUseHelper )
  {
    v5 = CBaseEntity::GetAbsOrigin(this);
    v6 = this->m_vecAxis.x - v5->x;
    v7 = this->m_vecAxis.z - v5->z;
    vLine.y = this->m_vecAxis.y - v5->y;
    vLine.x = v6;
    vLine.z = v7;
    VectorNormalize(&vLine);
    VectorAngles(&vLine, &Angles);
    AngleVectors(&Angles, &vAxisForward, &vAxisRight, &vAxisUp);
    v8 = LODWORD(vAxisForward.x);
    v9 = 0x42800000u;
    *v8.m128i_i32 = vAxisForward.x * 64.0;
    *v9.m128i_i32 = 64.0 * vAxisForward.z;
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    v52 = vAxisForward.y * 64.0;
    v12 = CBaseEntity::GetAbsOrigin(this);
    v13 = v11 + v12->z;
    v14 = v52 + v12->y;
    target.x = v10 + v12->x;
    target.z = v13;
    target.y = v14;
    v15 = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Line(v15, &target, 0xFFu, 0, 0, 0, 0.0);
    v16 = LODWORD(vAxisRight.x);
    *v16.m128i_i32 = vAxisRight.x * 64.0;
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
    v50 = vAxisRight.y * 64.0;
    v56 = 64.0 * vAxisRight.z;
    v18 = CBaseEntity::GetAbsOrigin(this);
    v19 = v17 + v18->x;
    v20 = v56 + v18->z;
    target.y = v50 + v18->y;
    target.x = v19;
    target.z = v20;
    v21 = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Line(v21, &target, 0, 0xFFu, 0, 0, 0.0);
    v22 = LODWORD(vAxisUp.x);
    *v22.m128i_i32 = vAxisUp.x * 64.0;
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    v53 = vAxisUp.y * 64.0;
    v57 = 64.0 * vAxisUp.z;
    v24 = CBaseEntity::GetAbsOrigin(this);
    v25 = v57 + v24->z;
    v26 = v23 + v24->x;
    target.y = v53 + v24->y;
    target.z = v25;
    target.x = v26;
    v27 = CBaseEntity::GetAbsOrigin(this);
    NDebugOverlay::Line(v27, &target, 0, 0, 0xFFu, 0, 0.0);
  }
}


// CPointAngularVelocitySensor::SampleAngularVelocity  (line 185, @0x000000000232ddc0, libserver.so)  // inlines: DotProduct, FastSqrt, Length, LengthSqr, ToQAngle, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, curtime, operator-, operator=
// calls: CBaseEntity::VPhysicsGetObject, MatrixAngles, CBaseEntity::GetLastThink, CBaseEntity::GetAbsOrigin, VectorNormalize
// callers: CPointAngularVelocitySensor::CompareToThreshold
// local variable allocation has failed, the output may be wrong!
float __fastcall CPointAngularVelocitySensor::SampleAngularVelocity(
        CPointAngularVelocitySensor *const this,
        CBaseEntity *pEntity)
{
  float result; // xmm0_4
  IPhysicsObject *Object; // rax
  IPhysicsObject *v5; // r12
  vec_t v6; // xmm1_4
  vec_t z; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm6_4
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float m_flCurrentTime; // r13d
  float v13; // xmm8_4
  bool v14; // zf
  const Vector *AbsOrigin; // rax
  vec_t v16; // xmm2_4
  vec_t v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // [rsp-14h] [rbp-94h]
  float v20; // [rsp-14h] [rbp-94h]
  vec_t v21; // [rsp-10h] [rbp-90h]
  float v22; // [rsp-10h] [rbp-90h]
  float v23; // [rsp-Ch] [rbp-8Ch]
  float v24; // [rsp-Ch] [rbp-8Ch]
  __int64 v25; // [rsp-8h] [rbp-88h] BYREF
  Vector vecAngVelocity; // [rsp+0h] [rbp-80h] BYREF
  float v27; // [rsp+Ch] [rbp-74h]
  Vector vLine; // [rsp+10h] [rbp-70h] BYREF
  float v29; // [rsp+1Ch] [rbp-64h]
  __int128 vecWorldAngVelocity; // [rsp+20h] [rbp-60h] OVERLAPPED BYREF
  matrix3x4_t matPosition; // [rsp+30h] [rbp-50h]

  if ( pEntity->m_MoveType.m_Value != MoveType_t::MOVETYPE_VPHYSICS )
    return fmaxf(
             fmaxf(fabs(pEntity->m_vecAngVelocity.x), fabs(pEntity->m_vecAngVelocity.y)),
             fabs(pEntity->m_vecAngVelocity.z));
  Object = CBaseEntity::VPhysicsGetObject(pEntity);
  result = 0.0;
  v5 = Object;
  if ( Object != 0 )
  {
    *(&vecWorldAngVelocity + 1) = (*(*Object + 592LL))(Object, 0.0);
    matPosition.m_flMatVal[0][0] = v6;
    vecAngVelocity.x = v6;
    v25 = *(&vecWorldAngVelocity + 1);
    (*(*v5 + 1680LL))(v5, &vecWorldAngVelocity + 8);
    MatrixAngles((&vecWorldAngVelocity + 8), &vLine.z);
    z = vLine.z;
    v8 = v29;
    v9 = *&vecWorldAngVelocity;
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v19 = *&vecWorldAngVelocity;
          v21 = vLine.z;
          v23 = v29;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          v9 = v19;
          z = v21;
          v8 = v23;
        }
      }
      m_flCurrentTime = v10->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
    }
    v20 = v9;
    v22 = z;
    v24 = v8;
    v13 = m_flCurrentTime - CBaseEntity::GetLastThink(this, 0);
    if ( v13 == 0.0 )
      v13 = 0.1;
    result = fsqrt(((*&v25 * *&v25) + (*(&v25 + 1) * *(&v25 + 1))) + (vecAngVelocity.x * vecAngVelocity.x));
    if ( result * 0.01 > (fsqrt(
                            (((v22 - this->m_lastOrientation.x) * (v22 - this->m_lastOrientation.x))
                           + ((v24 - this->m_lastOrientation.y) * (v24 - this->m_lastOrientation.y)))
                          + ((v20 - this->m_lastOrientation.z) * (v20 - this->m_lastOrientation.z)))
                        / v13) )
    {
      return 0.0;
    }
    else
    {
      v14 = !this->m_bUseHelper;
      this->m_lastOrientation.x = v22;
      this->m_lastOrientation.y = v24;
      this->m_lastOrientation.z = v20;
      if ( !v14 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        v16 = this->m_vecAxis.x - AbsOrigin->x;
        v17 = this->m_vecAxis.z - AbsOrigin->z;
        v27 = this->m_vecAxis.y - AbsOrigin->y;
        vecAngVelocity.z = v16;
        vLine.x = v17;
        v18 = VectorNormalize(&vecAngVelocity.z);
        (*(*v5 + 1760LL))(v5, &vLine.z, &v25, v18);
        return ((vLine.z * vecAngVelocity.z) + (v29 * v27)) + (*&vecWorldAngVelocity * vLine.x);
      }
    }
  }
  return result;
}


// CPointAngularVelocitySensor::CompareToThreshold  (line 248, @0x000000000232f3e0, libserver.so)  // inlines: CVariantBase, FireOutput<float>, Free, GetBool, GetInt, Set, ~CVariantBase
// calls: CPointAngularVelocitySensor::SampleAngularVelocity, CPointAngularVelocitySensor::DrawDebugLines, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointAngularVelocitySensor::InputTestWithInterval, CPointAngularVelocitySensor::Think, CPointAngularVelocitySensor::InputTest
__int64 __fastcall CPointAngularVelocitySensor::CompareToThreshold(
        CPointAngularVelocitySensor *const this,
        CBaseEntity *pEntity,
        float flThreshold,
        bool bFireVelocityOutput)
{
  __m128i v7; // xmm0
  float v8; // r14d
  __int64 result; // rax
  bool v10; // zf
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( pEntity == 0 )
    return 0;
  *v7.m128i_i32 = CPointAngularVelocitySensor::SampleAngularVelocity(this, pEntity);
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( g_debug_angularsensor.m_pParent->m_Value.m_nValue != 0 )
    CPointAngularVelocitySensor::DrawDebugLines(this);
  if ( !bFireVelocityOutput || v8 == this->m_flLastAngVelocity )
  {
    result = 1;
    v10 = v8 == flThreshold;
    if ( v8 > flThreshold )
      return result;
    goto LABEL_7;
  }
  this->m_AngularVelocity.m_Value = v8;
  value.m_type = 1;
  value.m_flags = 0;
  value.m_float = v8;
  CEntityIOOutput::FireOutputInternal(&this->m_AngularVelocity, pEntity, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  this->m_flLastAngVelocity = v8;
  result = 1;
  v10 = v8 == flThreshold;
  if ( v8 <= flThreshold )
  {
LABEL_7:
    if ( v10 )
      LODWORD(result) = 0;
    return -result;
  }
  return result;
}


// CPointAngularVelocitySensor::Think  (line 286, @0x00000000023303b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CPointAngularVelocitySensor::CompareToThreshold, CBaseEntity::SetNextThink, CGlobalVarsBase::curtime, CPointAngularVelocitySensor::FireCompareOutput
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngularVelocitySensor::Think(CPointAngularVelocitySensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  int v5; // eax
  double v6; // xmm1_8
  int m_nLastCompareResult; // edx
  CGlobalVars *v8; // r12
  CGlobalVars *v9; // rdx
  double v10; // xmm0_8
  void (__fastcall *v11)(__int64, double); // rax
  CGlobalVars *v12; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rcx
  float m_flCurrentTime; // xmm0_4
  int nComparea; // [rsp+Ch] [rbp-24h]
  int nCompare; // [rsp+Ch] [rbp-24h]

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        v5 = CPointAngularVelocitySensor::CompareToThreshold(this, v4->m_pInstance, this->m_flThreshold, 1);
        m_nLastCompareResult = this->m_nLastCompareResult;
        if ( v5 == m_nLastCompareResult )
        {
          if ( this->m_flFireTime == 0.0 || (nCompare = v5, CGlobalVarsBase::curtime(gpGlobals, 0) < this->m_flFireTime) )
          {
            v8 = gpGlobals;
            v9 = gpGlobals;
          }
          else
          {
            CPointAngularVelocitySensor::FireCompareOutput(this, nCompare, this);
            this->m_flFireTime = 0.0;
            v8 = gpGlobals;
            this->m_nLastFireResult = nCompare;
            v9 = v8;
          }
        }
        else
        {
          if ( v5 == this->m_nLastFireResult )
          {
            this->m_flFireTime = 0.0;
            v8 = gpGlobals;
            v9 = gpGlobals;
          }
          else if ( m_nLastCompareResult == -2 )
          {
            v8 = gpGlobals;
            v9 = gpGlobals;
          }
          else
          {
            v9 = gpGlobals;
            v12 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              v8 = gpGlobals;
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                v8 = gpGlobals;
                if ( m_pfnWarningFunc != 0 )
                {
                  nComparea = v5;
                  m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
                  v9 = gpGlobals;
                  v5 = nComparea;
                  v8 = gpGlobals;
                }
              }
              m_flCurrentTime = v12->m_flCurrentTime;
            }
            else
            {
              v8 = 0;
              m_flCurrentTime = 0.0;
            }
            this->m_flFireTime = m_flCurrentTime + this->m_flFireInterval;
          }
          this->m_nLastCompareResult = v5;
        }
        v10 = 0.0;
        if ( v9 != 0 )
        {
          if ( !v8->m_bEnableAssertions && !v8->m_bInSimulation )
          {
            v11 = v8->m_pfnWarningFunc;
            if ( v11 != 0 )
              v11(1, 0.0);
          }
          *&v10 = LODWORD(v8->m_flCurrentTime);
        }
        CBaseEntity::SetNextThink(this, v10, v6, 0);
      }
    }
  }
}


// CPointAngularVelocitySensor::InputTestWithInterval  (line 333, @0x000000000232f510, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CPointAngularVelocitySensor::CompareToThreshold, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngularVelocitySensor::InputTestWithInterval(
        CPointAngularVelocitySensor *const this,
        inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rdi
  unsigned int v5; // ecx
  unsigned __int64 m_Index_low; // rdx
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  CGlobalVars *v9; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rdx
  CBaseEntity *m_pInstance; // rsi
  float v12; // xmm0_4
  float m_flThreshold; // xmm0_4
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rdx
  int v16; // eax
  double v17; // xmm1_8
  CGlobalVars *v18; // r12
  double v19; // xmm0_8
  void (__fastcall *v20)(__int64, double); // rax

  m_Index = this->m_hTargetEntity.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  v5 = m_Index + 2;
  if ( m_Index + 2 <= 1 )
    return;
  m_Index_low = LOWORD(this->m_hTargetEntity.m_Index);
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v7 == 0 )
    return;
  v8 = &v7[m_Index_low & 0x1FF];
  if ( v8 == 0 || m_Index != v8->m_EHandle.m_Index || v8->m_pInstance == 0 )
    return;
  v9 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
      {
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        m_Index = this->m_hTargetEntity.m_Index;
        v4 = CEntityHandle::gm_pEntityList;
        v5 = m_Index + 2;
      }
    }
    m_pInstance = 0;
    v12 = this->m_flFireInterval + v9->m_flCurrentTime;
    this->m_nLastFireResult = -2;
    this->m_flFireTime = v12;
    m_flThreshold = this->m_flThreshold;
    if ( v5 <= 1 )
      goto LABEL_18;
    m_Index_low = LOWORD(this->m_hTargetEntity.m_Index);
  }
  else
  {
    this->m_nLastFireResult = -2;
    this->m_flFireTime = this->m_flFireInterval + 0.0;
    m_flThreshold = this->m_flThreshold;
  }
  v14 = v4->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
  if ( v14 != 0 )
  {
    m_pInstance = 0;
    v15 = &v14[m_Index_low & 0x1FF];
    if ( v15 != 0 && v15->m_EHandle.m_Index == m_Index )
      m_pInstance = v15->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
LABEL_18:
  v16 = CPointAngularVelocitySensor::CompareToThreshold(this, m_pInstance, m_flThreshold, 1);
  v18 = gpGlobals;
  v19 = 0.0;
  this->m_nLastCompareResult = v16;
  if ( v18 != 0 )
  {
    if ( !v18->m_bEnableAssertions && !v18->m_bInSimulation )
    {
      v20 = v18->m_pfnWarningFunc;
      if ( v20 != 0 )
        v20(1, 0.0);
    }
    *&v19 = LODWORD(v18->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v19, v17, 0);
}


// CPointAngularVelocitySensor::InputTest  (line 349, @0x00000000023305f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CPointAngularVelocitySensor::CompareToThreshold, CPointAngularVelocitySensor::FireCompareOutput
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngularVelocitySensor::InputTest(
        CPointAngularVelocitySensor *const this,
        inputdata_t *const inputdata)
{
  CBaseEntity *m_pInstance; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  int v8; // eax

  m_pInstance = 0;
  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = CPointAngularVelocitySensor::CompareToThreshold(this, m_pInstance, this->m_flThreshold, 0);
  CPointAngularVelocitySensor::FireCompareOutput(this, v8, inputdata->pActivator);
}


// CPointAngularVelocitySensor::FireCompareOutput  (line 361, @0x00000000023300e0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointAngularVelocitySensor::Think, CPointAngularVelocitySensor::InputTest
void __fastcall CPointAngularVelocitySensor::FireCompareOutput(
        CPointAngularVelocitySensor *const this,
        int nCompareResult,
        CBaseEntity *pActivator)
{
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( nCompareResult == -1 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnLessThan, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnLessThanOrEqualTo, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      goto LABEL_17;
  }
  else
  {
    if ( nCompareResult != 1 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnEqualTo, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnLessThanOrEqualTo, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnGreaterThanOrEqualTo, pActivator, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        return;
LABEL_17:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      return;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_OnGreaterThan, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnGreaterThanOrEqualTo, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      goto LABEL_17;
  }
}


// CPointVelocitySensor::~CPointVelocitySensor  (line 387, @0x000000000233b7b0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointVelocitySensor::~CPointVelocitySensor(CPointVelocitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointVelocitySensor::~CPointVelocitySensor  (line 387, @0x000000000233b7d0, libserver.so)  // inlines: ~CPointEntity, ~CPointVelocitySensor
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointVelocitySensor::~CPointVelocitySensor(CPointVelocitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointVelocitySensor::GetEntityClass  (line 389, @0x000000000233a1c0, libserver.so)
CEntityClass *__cdecl CPointVelocitySensor::GetEntityClass()
{
  return g_pEntityCPointVelocitySensorClass;
}


// CPointVelocitySensor::Schema_DynamicBinding  (line 389, @0x000000000233a1d0, libserver.so)
// globals: CPointVelocitySensor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointVelocitySensor::Schema_DynamicBinding(
        const CPointVelocitySensor *const this)
{
  return CPointVelocitySensor::s_pSchemaBinding;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 389, @0x000000000233a1e0, libserver.so)
// globals: CPointVelocitySensor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointVelocitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointVelocitySensor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::DestructInstance  (line 389, @0x000000000233a1f0, libserver.so)  // inlines: Destruct<CPointVelocitySensor>
void __fastcall CPointVelocitySensor::CEntityInstanceEntityClass::DestructInstance(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointVelocitySensor::CEntityInstanceEntityClass::FreeInstance  (line 389, @0x000000000233a210, libserver.so)
void __fastcall CPointVelocitySensor::CEntityInstanceEntityClass::FreeInstance(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointVelocitySensor::CEntityInstanceEntityClass::CanAllocate  (line 389, @0x000000000233a230, libserver.so)
bool __fastcall CPointVelocitySensor::CEntityInstanceEntityClass::CanAllocate(
        const CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 389, @0x000000000233a240, libserver.so)
// globals: CPointVelocitySensor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointVelocitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointVelocitySensor::s_pSchemaBinding;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::AllocateInstance  (line 389, @0x000000000233b3a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointVelocitySensor::CEntityInstanceEntityClass::AllocateInstance(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::ConstructInstance  (line 389, @0x000000000233b480, libserver.so)  // inlines: CEntityHandle, CEntityOutputTemplate, CHandle, CPointEntity, CPointVelocitySensor, Construct<CPointVelocitySensor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointVelocitySensor::CEntityInstanceEntityClass::ConstructInstance(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_4092F50;
    *(p + 101) = off_3FD2290;
  }
  return p;
}


// CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 389, @0x000000000233c9e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 389, @0x000000000233ca00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointVelocitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointVelocitySensor::GetEntityClassInternal  (line 389, @0x0000000002343650, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_velocitysensor", "CPointVelocitySensor"
// globals: `guard variable for'CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass, CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo, CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo
CEntityClass *__cdecl CPointVelocitySensor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass) != 0 )
  {
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_designerName.u.m_Id = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass._vptr_CEntityClass = off_3F79390;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_ComponentOffsets.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_AllHelpers.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classInputs.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classOutputs.m_Size = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_requiredEHandle.m_Index = -1;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_hNetworkSerializer = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pBaseClassInfo = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pClassInfo = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_flags = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_nAllHelpersFlags = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pScriptClassDesc = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pInputs = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_nInputCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pOutputs = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_nOutputCount = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pGameClass = 0;
    CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass._vptr_CEntityClass = off_4092ED0;
    __cxa_guard_release(&`guard variable for'CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass);
    __cxa_atexit(
      CPointVelocitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointVelocitySensorClass != 0 )
    return &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass;
  if ( `guard variable for'CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo,
      "CPointVelocitySensor",
      "point_velocitysensor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo);
  }
  CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pClassInfo = &CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo;
  CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pBaseClassInfo = CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointVelocitySensorClass = &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass;
  CPointVelocitySensor::GetEntityClassInfo(void)::g_EntityCPointVelocitySensorClassInfo.m_pClass = &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass;
  CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointVelocitySensorClass->m_pComponentOverrides = 0;
  return &CPointVelocitySensor::GetEntityClassInternal(void)::g_EntityCPointVelocitySensorClass;
}


// CPointVelocitySensor::GetDataDescMap  (line 419, @0x000000000231ed30, libserver.so)
// globals: CPointVelocitySensor::m_DataMap
datamap_t *__fastcall CPointVelocitySensor::GetDataDescMap(CPointVelocitySensor *const this)
{
  return &CPointVelocitySensor::m_DataMap;
}


// CPointVelocitySensor::AddDatadescMetadataKeys  (line 419, @0x000000000232e0e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointVelocitySensor::GetEntityClass(void)
void __fastcall CPointVelocitySensor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointVelocitySensor::GetEntityClass);
}


// CPointVelocitySensor::GetBaseMap  (line 419, @0x000000000232e100, libserver.so)
datamap_t *__cdecl CPointVelocitySensor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointVelocitySensor>  (line 419, @0x000000000232e110, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointVelocitySensor"
// globals: `guard variable for'DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder, `guard variable for'DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc, CPointVelocitySensor::GetEntityClass(void), CPointVelocitySensor::m_DataMap, DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_pszBase = "CPointVelocitySensor";
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::nameHolder,
      &_dso_handle);
  }
  CPointVelocitySensor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc) != 0 )
  {
    DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc);
  }
  CPointVelocitySensor::m_DataMap.dataNumFields = 8;
  CPointVelocitySensor::m_DataMap.dataDesc = &DataMapInit<CPointVelocitySensor>(CPointVelocitySensor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointVelocitySensor::m_DataMap, CPointVelocitySensor::GetEntityClass);
  return &CPointVelocitySensor::m_DataMap;
}


// CPointVelocitySensor::Spawn  (line 440, @0x000000000231ff50, libserver.so)  // inlines: VectorSubtract, operator!=, operator-, operator=
// calls: CPointEntity::Spawn, CBaseEntity::GetAbsOrigin, VectorNormalize
void __fastcall CPointVelocitySensor::Spawn(CPointVelocitySensor *const this, const CEntityKeyValues *pKeyValues)
{
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm2_4
  vec_t v5; // xmm0_4
  Vector vLine; // [rsp+0h] [rbp-20h] BYREF

  CPointEntity::Spawn(this, pKeyValues);
  if ( vec3_origin.x != this->m_vecAxis.x || vec3_origin.y != this->m_vecAxis.y || vec3_origin.z != this->m_vecAxis.z )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v4 = this->m_vecAxis.x - AbsOrigin->x;
    v5 = this->m_vecAxis.z - AbsOrigin->z;
    vLine.y = this->m_vecAxis.y - AbsOrigin->y;
    vLine.x = v4;
    vLine.z = v5;
    VectorNormalize(&vLine);
    this->m_vecAxis = vLine;
  }
}


// CPointVelocitySensor::Activate  (line 456, @0x0000000002320de0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, curtime, operator bool, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointVelocitySensor::Activate(CPointVelocitySensor *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  double v4; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v6; // eax
  __int16 v7; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  double v11; // xmm0_8
  CGlobalVars *v12; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  iszName.u.m_Id = this->m_target.u.m_Id;
  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, 0, 0, 0, 0);
  if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
  {
    v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hTargetEntity.m_Index) = v7 | this->m_hTargetEntity.m_Index & 0x8000;
    this->m_hTargetEntity.m_Index = (v6 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTargetEntity.m_Index = -1;
  }
  if ( this->m_bEnabled )
  {
    m_Index = this->m_hTargetEntity.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
        {
          v11 = 0.0;
          v12 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v11 = LODWORD(v12->m_flCurrentTime);
          }
          CBaseEntity::SetNextThink(this, v11, v4, 0);
        }
      }
    }
  }
}


// CPointVelocitySensor::InputEnable  (line 471, @0x0000000002320900, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, curtime, operator bool
// calls: CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointVelocitySensor::InputEnable(CPointVelocitySensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  if ( !this->m_bEnabled )
  {
    m_Index = this->m_hTargetEntity.m_Index;
    this->m_bEnabled = 1;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          v7 = 0.0;
          v8 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v7 = LODWORD(v8->m_flCurrentTime);
          }
          CBaseEntity::SetNextThink(this, v7, v2, 0);
        }
      }
    }
  }
}


// CPointVelocitySensor::InputDisable  (line 488, @0x000000000231ed40, libserver.so)
void __fastcall CPointVelocitySensor::InputDisable(CPointVelocitySensor *const this, inputdata_t *const inputdata)
{
  this->m_bEnabled = 0;
}


// CPointVelocitySensor::Think  (line 496, @0x000000000232f970, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CPointVelocitySensor::SampleVelocity, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointVelocitySensor::Think(CPointVelocitySensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  double v5; // xmm1_8
  CGlobalVars *v6; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm0_8

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 && this->m_bEnabled )
      {
        CPointVelocitySensor::SampleVelocity(this);
        v6 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          *&v8 = LODWORD(v6->m_flCurrentTime);
        }
        else
        {
          v8 = 0.0;
        }
        CBaseEntity::SetNextThink(this, v8, v5, 0);
      }
    }
  }
}


// CPointVelocitySensor::SampleVelocity  (line 508, @0x000000000232f6f0, libserver.so)  // inlines: CVariantBase, DotProduct, FireOutput<float>, Free, Get, GetAbsVelocity, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator!=, operator=, operator==<CBaseEntity>, ~CVariantBase
// calls: VectorNormalize, CEntityIOOutput::FireOutputInternal, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::VPhysicsGetObject, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointVelocitySensor::Think
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointVelocitySensor::SampleVelocity(CPointVelocitySensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // r12
  float v6; // xmm0_4
  float x; // xmm2_4
  float y; // xmm1_4
  float v9; // xmm2_4
  float m_flAvgInterval; // xmm3_4
  float v11; // xmm1_4
  IPhysicsObject *Object; // rax
  int v13; // xmm1_4
  Vector vecVelocity; // [rsp+0h] [rbp-30h] BYREF
  CVariant value; // [rsp+10h] [rbp-20h] BYREF

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 )
        {
          if ( m_pInstance->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
          {
            Object = CBaseEntity::VPhysicsGetObject(v4->m_pInstance);
            if ( Object != 0 )
            {
              value.m_uint64 = (*(*Object + 560LL))(Object);
              *&value.m_type = v13;
              vecVelocity = *&value.m_int;
            }
          }
          else
          {
            if ( (m_pInstance->m_iEFlags & 0x1000) != 0 )
              CBaseEntity::CalcAbsoluteVelocity(v4->m_pInstance);
            vecVelocity = m_pInstance->m_vecAbsVelocity;
          }
          v6 = VectorNormalize(&vecVelocity);
          x = this->m_vecAxis.x;
          y = this->m_vecAxis.y;
          if ( x == vec3_origin.x && y == vec3_origin.y && vec3_origin.z == this->m_vecAxis.z )
            v9 = 1.0;
          else
            v9 = ((x * vecVelocity.x) + (y * vecVelocity.y)) + (vecVelocity.z * this->m_vecAxis.z);
          m_flAvgInterval = this->m_flAvgInterval;
          if ( m_flAvgInterval <= 0.0 )
          {
            v11 = v9 * v6;
            this->m_fPrevVelocity = v9 * v6;
          }
          else
          {
            v11 = ((this->m_fPrevVelocity * m_flAvgInterval) + ((v9 * v6) * gpGlobals->frametime))
                / (m_flAvgInterval + gpGlobals->frametime);
            this->m_fPrevVelocity = v11;
          }
          if ( v11 != this->m_Velocity.m_Value )
          {
            this->m_Velocity.m_Value = v11;
            value.m_type = 1;
            value.m_flags = 0;
            value.m_float = v11;
            CEntityIOOutput::FireOutputInternal(&this->m_Velocity, 0, 0, &value, 0.0);
            if ( (value.m_flags & 1) != 0 )
              (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
          }
        }
      }
    }
  }
}


