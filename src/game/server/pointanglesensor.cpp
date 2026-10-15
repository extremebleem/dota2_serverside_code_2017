// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pointanglesensor.cpp:22
class CPointAngleSensor : public CPointEntity {
public:

private:

protected:

	bool m_bDisabled;  // +0x308

	string_t m_nLookAtName;  // +0x310
	EHANDLE m_hTargetEntity;  // +0x318
	EHANDLE m_hLookAtEntity;  // +0x31c
	float m_flDuration;  // +0x320
	float m_flDotTolerance;  // +0x324
	float m_flFacingTime;  // +0x328
	bool m_bFired;  // +0x32c

	COutputEvent m_OnFacingLookat;  // +0x330
	COutputEvent m_OnNotFacingLookat;  // +0x348
	COutputVector m_TargetDir;  // +0x360
	COutputFloat m_FacingPercentage;  // +0x388

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
	CPointAngleSensor(CPointAngleSensor &);
	CPointAngleSensor(CPointAngleSensor &);
	CPointAngleSensor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Think();
	virtual int DrawDebugTextOverlays(uint64, int);
	void Enable();
	void Disable();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputTest(inputdata_t &);
	void InputSetTargetEntity(inputdata_t &);
	bool IsFacingWithinTolerance(CBaseEntity *, CBaseEntity *, float, float *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointAngleSensor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[79] DrawDebugTextOverlays
	// vtable[34] GetDataDescMap
	// sizeof = 936
};

// src/game/server/pointanglesensor.cpp:377
class CPointProximitySensor : public CPointEntity {
public:

private:

	bool m_bDisabled;  // +0x308

	EHANDLE m_hTargetEntity;  // +0x30c
	COutputFloat m_Distance;  // +0x310

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
	CPointProximitySensor(CPointProximitySensor &);
	CPointProximitySensor(CPointProximitySensor &);
	CPointProximitySensor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);

protected:

	virtual void Think();
	void Enable();
	void Disable();
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputSetTargetEntity(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointProximitySensor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[34] GetDataDescMap
	// sizeof = 816
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointAngleSensor::~CPointAngleSensor  (line 22, @0x000000000233b6c0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointAngleSensor::~CPointAngleSensor(CPointAngleSensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointAngleSensor::~CPointAngleSensor  (line 22, @0x000000000233b6e0, libserver.so)  // inlines: ~CPointAngleSensor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointAngleSensor::~CPointAngleSensor(CPointAngleSensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointAngleSensor::GetEntityClass  (line 24, @0x000000000233a010, libserver.so)
CEntityClass *__cdecl CPointAngleSensor::GetEntityClass()
{
  return g_pEntityCPointAngleSensorClass;
}


// CPointAngleSensor::Schema_DynamicBinding  (line 24, @0x000000000233a020, libserver.so)
// globals: CPointAngleSensor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointAngleSensor::Schema_DynamicBinding(const CPointAngleSensor *const this)
{
  return CPointAngleSensor::s_pSchemaBinding;
}


// CPointAngleSensor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x000000000233a030, libserver.so)
// globals: CPointAngleSensor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointAngleSensor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  return CPointAngleSensor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointAngleSensor::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x000000000233a040, libserver.so)  // inlines: Destruct<CPointAngleSensor>
void __fastcall CPointAngleSensor::CEntityInstanceEntityClass::DestructInstance(
        CPointAngleSensor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointAngleSensor::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x000000000233a060, libserver.so)
void __fastcall CPointAngleSensor::CEntityInstanceEntityClass::FreeInstance(
        CPointAngleSensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointAngleSensor::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x000000000233a080, libserver.so)
bool __fastcall CPointAngleSensor::CEntityInstanceEntityClass::CanAllocate(
        const CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointAngleSensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x000000000233a090, libserver.so)
// globals: CPointAngleSensor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointAngleSensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  return CPointAngleSensor::s_pSchemaBinding;
}


// CPointAngleSensor::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x000000000233b2e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointAngleSensor::CEntityInstanceEntityClass::AllocateInstance(
        CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CPointAngleSensor::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x000000000233c200, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CHandle, CPointAngleSensor, CPointEntity, CUtlSymbolLarge, Construct<CPointAngleSensor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointAngleSensor::CEntityInstanceEntityClass::ConstructInstance(
        CPointAngleSensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 98) = 0;
    *p = &off_4091770;
    *(p + 102) = off_3F7C190;
    *(p + 105) = off_3F7C190;
    *(p + 108) = off_405E9D0;
    *(p + 198) = -1;
    *(p + 199) = -1;
    *(p + 113) = off_3FD2290;
  }
  return p;
}


// CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000233c8f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000233c910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointAngleSensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointAngleSensor::GetEntityClassInternal  (line 24, @0x00000000023425c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_anglesensor", "CPointAngleSensor"
// globals: `guard variable for'CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass, CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo, CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo
CEntityClass *__cdecl CPointAngleSensor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass) != 0 )
  {
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_designerName.u.m_Id = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass._vptr_CEntityClass = off_3F79390;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_ComponentOffsets.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_AllHelpers.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classInputs.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classOutputs.m_Size = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_requiredEHandle.m_Index = -1;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_hNetworkSerializer = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pBaseClassInfo = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pClassInfo = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_flags = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_nAllHelpersFlags = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pScriptClassDesc = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pInputs = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_nInputCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pOutputs = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_nOutputCount = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pGameClass = 0;
    CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass._vptr_CEntityClass = off_40916F0;
    __cxa_guard_release(&`guard variable for'CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass);
    __cxa_atexit(
      CPointAngleSensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointAngleSensorClass != 0 )
    return &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass;
  if ( `guard variable for'CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo,
      "CPointAngleSensor",
      "point_anglesensor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo);
  }
  CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pClassInfo = &CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo;
  CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pBaseClassInfo = CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointAngleSensorClass = &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass;
  CPointAngleSensor::GetEntityClassInfo(void)::g_EntityCPointAngleSensorClassInfo.m_pClass = &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass;
  CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointAngleSensorClass->m_pComponentOverrides = 0;
  return &CPointAngleSensor::GetEntityClassInternal(void)::g_EntityCPointAngleSensorClass;
}


// CPointAngleSensor::GetDataDescMap  (line 70, @0x000000000231ed00, libserver.so)
// globals: CPointAngleSensor::m_DataMap
datamap_t *__fastcall CPointAngleSensor::GetDataDescMap(CPointAngleSensor *const this)
{
  return &CPointAngleSensor::m_DataMap;
}


// CPointAngleSensor::AddDatadescMetadataKeys  (line 70, @0x000000000232cb50, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointAngleSensor::GetEntityClass(void)
void __fastcall CPointAngleSensor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointAngleSensor::GetEntityClass);
}


// CPointAngleSensor::GetBaseMap  (line 70, @0x000000000232cb70, libserver.so)
datamap_t *__cdecl CPointAngleSensor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointAngleSensor>  (line 70, @0x000000000232cb80, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointAngleSensor"
// globals: `guard variable for'DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder, `guard variable for'DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc, CPointAngleSensor::GetEntityClass(void), CPointAngleSensor::m_DataMap, DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointAngleSensor>(CPointAngleSensor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_pszBase = "CPointAngleSensor";
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::nameHolder,
      &_dso_handle);
  }
  CPointAngleSensor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc) != 0 )
  {
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc);
  }
  CPointAngleSensor::m_DataMap.dataNumFields = 17;
  CPointAngleSensor::m_DataMap.dataDesc = &DataMapInit<CPointAngleSensor>(CPointAngleSensor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointAngleSensor::m_DataMap, CPointAngleSensor::GetEntityClass);
  return &CPointAngleSensor::m_DataMap;
}


// CPointAngleSensor::Spawn  (line 101, @0x00000000023214b0, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<float>, GetValue, GetValue<float>, atof, operator[]
// calls: CPointEntity::Spawn, CEntityKeyValues::HasValue, cosf, strtod, VariantFieldTypeName, Warning
// strings: "No conversion from %s to float now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2321576
void __fastcall CPointAngleSensor::Spawn(CPointAngleSensor *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rdx
  int16 m_type; // ax
  float v11; // xmm0_4
  float m_float64; // xmm0_4
  float m_uint64; // xmm0_4
  const char *v14; // rax
  __int64 v15; // rdx

  CPointEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, -927127468) )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_13:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_14;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == -927127468 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_13;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != -927127468 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  p_m_value = &v8[v6].m_value;
LABEL_14:
  m_type = p_m_value->m_type;
  switch ( m_type )
  {
    case 0:
      v11 = 1.0;
      break;
    case 1:
      v11 = cosf(0.017453292 * p_m_value->m_float);
      break;
    case 5:
    case 37:
      v11 = cosf(p_m_value->m_int * 0.017453292);
      break;
    case 6:
      v11 = cosf(p_m_value->m_char * 0.017453292);
      break;
    case 26:
      v11 = cosf(p_m_value->m_uint64 * 0.017453292);
      break;
    case 30:
      m_uint64 = strtod(p_m_value->m_pszString, 0);
      goto LABEL_21;
    case 33:
      if ( p_m_value->m_int64 < 0 )
      {
        v15 = p_m_value->m_uint64 & 1 | (p_m_value->m_uint64 >> 1);
        m_uint64 = v15 + v15;
      }
      else
      {
        m_uint64 = p_m_value->m_uint64;
      }
LABEL_21:
      v11 = cosf(m_uint64 * 0.017453292);
      break;
    case 34:
      m_float64 = p_m_value->m_float64;
      v11 = cosf(m_float64 * 0.017453292);
      break;
    default:
      v14 = VariantFieldTypeName(m_type);
      Warning("No conversion from %s to float now\n", v14);
      v11 = 1.0;
      break;
  }
  this->m_flDotTolerance = v11;
}


// CPointAngleSensor::Activate  (line 116, @0x00000000023243c0, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetDebugName, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, String, ToCStr, curtime, operator CEntityInstance*, operator bool, operator!, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CEntityHandle::operator CEntityInstance*, CEntityIdentity::GetDebugName, DevMsg, CBaseEntity::SetNextThink
// strings: "Angle sensor '%s' could not find look at entity '%s'.\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngleSensor::Activate(CPointAngleSensor *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rcx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v10; // eax
  __int16 v11; // cx
  __int16 v12; // dx
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CBaseEntity *v16; // rax
  CEntityIdentity *v17; // rdx
  int v18; // eax
  __int16 v19; // cx
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  const char *m_pAsString; // r12
  const char *DebugName; // rax
  double v25; // xmm0_8
  CGlobalVars *v26; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  m_Index = this->m_hTargetEntity.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hTargetEntity.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || v7->m_pInstance == 0 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v12 = v11 | this->m_hTargetEntity.m_Index & 0x8000;
      v5 = CEntityHandle::gm_pEntityList;
      LOWORD(this->m_hTargetEntity.m_Index) = v12;
      this->m_hTargetEntity.m_Index = (v10 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Index = -1;
      v5 = CEntityHandle::gm_pEntityList;
    }
  }
  v13 = this->m_hLookAtEntity.m_Index;
  if ( (v13 + 2 <= 1
     || (v14 = v5->m_pIdentityChunks[(LOWORD(this->m_hLookAtEntity.m_Index) >> 9) & 0x3F]) == 0
     || (v15 = &v14[this->m_hLookAtEntity.m_Index & 0x1FF]) == 0
     || v13 != v15->m_EHandle.m_Index
     || v15->m_pInstance == 0)
    && this->m_nLookAtName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_nLookAtName.u.m_Id;
    v16 = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( v16 != 0 && (v17 = v16->m_pEntity) != 0 )
    {
      v18 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
      v19 = 0x7FFF;
      if ( v17->m_EHandle.m_Index != -1 )
        v19 = v17->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hLookAtEntity.m_Index) = v19 | this->m_hLookAtEntity.m_Index & 0x8000;
      this->m_hLookAtEntity.m_Index = (v18 << 15) | this->m_hLookAtEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hLookAtEntity.m_Index = -1;
    }
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hLookAtEntity) == 0 )
    {
      m_pAsString = "";
      if ( this->m_nLookAtName.u.m_Id != 0 )
        m_pAsString = this->m_nLookAtName.u.m_pAsString;
      DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
      DevMsg(1, "Angle sensor '%s' could not find look at entity '%s'.\n", DebugName, m_pAsString);
    }
  }
  if ( !this->m_bDisabled )
  {
    v20 = this->m_hTargetEntity.m_Index;
    if ( v20 + 2 > 1 )
    {
      v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v21 != 0 )
      {
        v22 = &v21[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v22 != 0 && v20 == v22->m_EHandle.m_Index )
        {
          v25 = 0.0;
          v26 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                (m_pfnWarningFunc)(1, 0.0);
            }
            *&v25 = LODWORD(v26->m_flCurrentTime);
          }
          CBaseEntity::SetNextThink(this, v25, v3, 0);
        }
      }
    }
  }
}


// CPointAngleSensor::IsFacingWithinTolerance  (line 146, @0x000000000232ccb0, libserver.so)  // inlines: Dot, DotProduct, VectorSubtract, operator-, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize
// callers: CPointAngleSensor::DrawDebugTextOverlays, CPointAngleSensor::Think, CPointAngleSensor::InputTest
bool __fastcall CPointAngleSensor::IsFacingWithinTolerance(
        CPointAngleSensor *const this,
        CBaseEntity *pEntity,
        CBaseEntity *pTarget,
        double flTolerance,
        float *pflDot)
{
  const Vector *AbsOrigin; // r12
  const Vector *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  float v14; // xmm0_4
  Vector forward; // [rsp+0h] [rbp-40h] BYREF
  Vector dir; // [rsp+10h] [rbp-30h] BYREF

  if ( pflDot != 0 )
    *pflDot = 0.0;
  if ( pEntity == 0 || pTarget == 0 )
    return 0;
  (*(pEntity->_vptr_IHandleEntity + 61))(pEntity, &forward, 0, 0, flTolerance);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    (*(pTarget->_vptr_IHandleEntity + 61))(pTarget, &dir, 0, 0);
  }
  else
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
    v11 = CBaseEntity::GetAbsOrigin(pTarget);
    v12 = v11->y - AbsOrigin->y;
    v13 = v11->z - AbsOrigin->z;
    dir.x = v11->x - AbsOrigin->x;
    dir.y = v12;
    dir.z = v13;
    VectorNormalize(&dir);
  }
  v14 = ((dir.x * forward.x) + (dir.y * forward.y)) + (dir.z * forward.z);
  if ( pflDot != 0 )
    *pflDot = v14;
  return v14 >= this->m_flDotTolerance;
}


// CPointAngleSensor::Think  (line 194, @0x000000000232ed80, libserver.so)  // inlines: CVariantBase, CopyData<Vector>, FireOutput, FireOutput<Vector>, FireOutput<float>, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, Set, clamp<float, float>, curtime, operator CBaseEntity*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume, CPointAngleSensor::IsFacingWithinTolerance, CGlobalVarsBase::curtime
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngleSensor::Think(CPointAngleSensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  unsigned __int64 m_Index_low; // rsi
  double v6; // xmm1_8
  uint32 v7; // eax
  CConcreteEntityList *v8; // rcx
  CBaseEntity *vptr_IHandleEntity; // rdx
  double v10; // xmm0_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint32 v13; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  float v17; // r14d
  float m_flDotTolerance; // xmm0_4
  __m128 v19; // xmm2
  float v20; // xmm0_4
  float v21; // xmm2_4
  float flDot; // [rsp+Ch] [rbp-44h] BYREF
  Vector forward; // [rsp+10h] [rbp-40h] BYREF
  CVariant value; // [rsp+20h] [rbp-30h] BYREF

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        (*(v4->m_pInstance->_vptr_IHandleEntity + 61))(v4->m_pInstance, &forward, 0, 0);
        value.m_flags = 0;
        this->m_TargetDir.m_Value.x = forward.x;
        value.m_type = 3;
        this->m_TargetDir.m_Value.y = forward.y;
        value.m_uint64 = &this->m_TargetDir.m_Value;
        this->m_TargetDir.m_Value.z = forward.z;
        CEntityIOOutput::FireOutputInternal(&this->m_TargetDir, this, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        v7 = this->m_hLookAtEntity.m_Index;
        v8 = CEntityHandle::gm_pEntityList;
        vptr_IHandleEntity = (v7 + 2);
        if ( vptr_IHandleEntity > 1 )
        {
          m_Index_low = LOWORD(this->m_hLookAtEntity.m_Index);
          vptr_IHandleEntity = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
          if ( vptr_IHandleEntity != 0 )
          {
            m_Index_low = 120 * (m_Index_low & 0x1FF);
            vptr_IHandleEntity = (vptr_IHandleEntity + m_Index_low);
            if ( vptr_IHandleEntity != 0 && v7 == LODWORD(vptr_IHandleEntity->m_hPrivateScope.m_hScope) )
            {
              vptr_IHandleEntity = vptr_IHandleEntity->_vptr_IHandleEntity;
              if ( vptr_IHandleEntity != 0 )
              {
                v13 = this->m_hTargetEntity.m_Index;
                m_pInstance = 0;
                if ( v13 + 2 > 1 )
                {
                  v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9)
                                                                       & 0x3F];
                  if ( v15 != 0 )
                  {
                    v16 = &v15[this->m_hTargetEntity.m_Index & 0x1FF];
                    if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
                      m_pInstance = v16->m_pInstance;
                  }
                }
                if ( CPointAngleSensor::IsFacingWithinTolerance(
                       this,
                       m_pInstance,
                       vptr_IHandleEntity,
                       COERCE_DOUBLE(LODWORD(this->m_flDotTolerance)),
                       &flDot) )
                {
                  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
                  if ( !this->m_bFired )
                  {
                    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
                    if ( this->m_flFacingTime == 0.0 )
                      this->m_flFacingTime = CGlobalVarsBase::curtime(gpGlobals, 0);
                    if ( CGlobalVarsBase::curtime(gpGlobals, 0) >= (this->m_flFacingTime + this->m_flDuration) )
                    {
                      value.m_type = 0;
                      value.m_flags = 0;
                      value.m_uint64 = 0;
                      CEntityIOOutput::FireOutputInternal(&this->m_OnFacingLookat, this, this, &value, 0.0);
                      if ( (value.m_flags & 1) != 0 )
                        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
                      this->m_bFired = 1;
                    }
                  }
                }
                else
                {
                  if ( this->m_bFired )
                    this->m_bFired = 0;
                  this->m_flFacingTime = 0.0;
                  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
                }
                m_flDotTolerance = this->m_flDotTolerance;
                v19.m128_f32[0] = flDot - 1.0;
                if ( m_flDotTolerance == 1.0 )
                {
                  LODWORD(v20) = LODWORD(m_flDotTolerance)
                               & _mm_cmpgt_ss(_mm_cvtsi32_si128(LODWORD(v17)), v19).m128_u32[0];
                }
                else
                {
                  v21 = v19.m128_f32[0] / (m_flDotTolerance - 1.0);
                  v20 = 1.0;
                  if ( v17 <= v21 )
                  {
                    v20 = v17;
                    if ( v21 <= 1.0 )
                      v20 = 1.0 - v21;
                  }
                }
                this->m_FacingPercentage.m_Value = v20;
                value.m_type = 1;
                value.m_float = v20;
                value.m_flags = 0;
                CEntityIOOutput::FireOutputInternal(&this->m_FacingPercentage, this, this, &value, 0.0);
                if ( (value.m_flags & 1) != 0 )
                  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
              }
            }
          }
        }
        v10 = 0.0;
        v11 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              (m_pfnWarningFunc)(1, m_Index_low, vptr_IHandleEntity, v8, 0.0);
          }
          *&v10 = LODWORD(v11->m_flCurrentTime);
        }
        CBaseEntity::SetNextThink(this, v10, v6, 0);
      }
    }
  }
}


// CPointAngleSensor::InputTest  (line 250, @0x000000000232ff40, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CPointAngleSensor::IsFacingWithinTolerance, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngleSensor::InputTest(CPointAngleSensor *const this, inputdata_t *const inputdata)
{
  CBaseEntity *m_pInstance; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  uint32 v8; // eax
  CBaseEntity *v9; // rsi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  bool IsFacingWithinTolerance; // al
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hLookAtEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookAtEntity.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hLookAtEntity.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  v8 = this->m_hTargetEntity.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  IsFacingWithinTolerance = CPointAngleSensor::IsFacingWithinTolerance(
                              this,
                              v9,
                              m_pInstance,
                              COERCE_DOUBLE(LODWORD(this->m_flDotTolerance)),
                              0);
  pActivator = inputdata->pActivator;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( !IsFacingWithinTolerance )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnNotFacingLookat, pActivator, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_16:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnFacingLookat, pActivator, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_16;
}


// CPointAngleSensor::InputSetTargetEntity  (line 265, @0x00000000023234a0, libserver.so)  // inlines: AssignTo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, StringID, TempString, ToString, curtime, operator bool, operator=
// calls: VariantFieldTypeName, Warning, CBaseEntity::SetNextThink, MakeEntitySystemString, AllocPooledString, CGameEntitySystem::FindEntityByName, V_snprintf, _Unwind_Resume
// strings: "No conversion from %s to string at the moment!\n", "%g %g %g %g", "false", "true", "%d %d %d %d"
// globals: jpt_23234D8, jpt_2323514, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_23235B7, CEntityHandle::gm_pEntityList, jpt_23238EB
void __fastcall CPointAngleSensor::InputSetTargetEntity(CPointAngleSensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  int16 m_type; // di
  const char *m_pszString; // rax
  int16 v7; // di
  const char *v8; // rax
  char *v9; // rsi
  int16 v10; // ax
  bool v11; // al
  int16 v12; // di
  char *v13; // rsi
  CBaseEntity *EntityByName; // rax
  double v15; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  double v22; // xmm0_8
  CGlobalVars *v23; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rcx
  double m_float; // xmm0_8
  double m_float64; // xmm0_8
  const char *v30; // rcx
  const char *v31; // rax
  double v32; // xmm0_8
  const char *v33; // rcx
  const char *v34; // rdx
  double v35; // xmm0_8
  const char *v36; // rcx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_43;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_61;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        break;
      case 6:
        v27 = "true";
        if ( inputdata->value.m_char == 0 )
          v27 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v27);
        break;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        break;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_61:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
        break;
      default:
        v25 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v25);
LABEL_43:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  if ( m_pszString == 0 )
    goto LABEL_9;
  v7 = inputdata->value.m_type;
  if ( v7 == 30 )
  {
    v9 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v7 )
    {
      case 0:
        goto LABEL_45;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_65;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        break;
      case 6:
        v30 = "true";
        if ( inputdata->value.m_char == 0 )
          v30 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v30);
        break;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        break;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_65:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
        break;
      default:
        v26 = VariantFieldTypeName(v7);
        Warning("No conversion from %s to string at the moment!\n", v26);
LABEL_45:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  MakeEntitySystemString(v9);
  if ( iszName.u.m_Id == 0 )
    goto LABEL_9;
  v10 = inputdata->value.m_type;
  if ( v10 != 30 )
  {
    switch ( v10 )
    {
      case 0:
        goto LABEL_8;
      case 1:
        v35 = inputdata->value.m_float;
        goto LABEL_98;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        goto LABEL_95;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        goto LABEL_95;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        goto LABEL_95;
      case 6:
        v36 = "true";
        if ( inputdata->value.m_char == 0 )
          v36 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v36);
        goto LABEL_95;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_95;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        goto LABEL_95;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        goto LABEL_95;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_95;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_95;
      case 34:
        v35 = inputdata->value.m_float64;
LABEL_98:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v35);
        goto LABEL_95;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
LABEL_95:
        v11 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf == 0;
        goto LABEL_16;
      default:
        v8 = VariantFieldTypeName(v10);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        goto LABEL_9;
    }
  }
  v11 = *inputdata->value.m_pszString == 0;
LABEL_16:
  if ( !v11 )
  {
    v12 = inputdata->value.m_type;
    if ( v12 == 30 )
    {
      v13 = inputdata->value.m_pszString;
    }
    else
    {
      switch ( v12 )
      {
        case 0:
          goto LABEL_77;
        case 1:
          v32 = inputdata->value.m_float;
          goto LABEL_79;
        case 3:
        case 39:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 4:
        case 27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8),
            *(inputdata->value.m_uint64 + 12));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 5:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d",
            inputdata->value.m_uint);
          goto LABEL_84;
        case 6:
          v33 = "true";
          v34 = "%s";
          if ( inputdata->value.m_char == 0 )
            v33 = "false";
          goto LABEL_81;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_84;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            inputdata->value.m_int,
            BYTE1(inputdata->value.m_int),
            BYTE2(inputdata->value.m_int),
            HIBYTE(inputdata->value.m_int));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 25:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 26:
          v33 = inputdata->value.m_pszString;
          v34 = "%lld";
LABEL_81:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v34, v33);
          goto LABEL_82;
        case 33:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%llu",
            inputdata->value.m_uint64);
LABEL_82:
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          v32 = inputdata->value.m_float64;
LABEL_79:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v32);
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_84:
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v31 = VariantFieldTypeName(v12);
          Warning("No conversion from %s to string at the moment!\n", v31);
LABEL_77:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    AllocPooledString(&iszName, v13);
    this->m_target = iszName;
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     &iszName,
                     this,
                     inputdata->pActivator,
                     inputdata->pCaller,
                     0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEntity.m_Index) = v18 | this->m_hTargetEntity.m_Index & 0x8000;
      this->m_hTargetEntity.m_Index = (v17 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Index = -1;
    }
    if ( !this->m_bDisabled )
    {
      m_Index = this->m_hTargetEntity.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
        if ( v20 != 0 )
        {
          v21 = &v20[this->m_hTargetEntity.m_Index & 0x1FF];
          if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
          {
            v22 = 0.0;
            v23 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                  (m_pfnWarningFunc)(1, 0.0);
              }
              *&v22 = LODWORD(v23->m_flCurrentTime);
            }
            CBaseEntity::SetNextThink(this, v22, v15, 0);
          }
        }
      }
    }
  }
  else
  {
LABEL_9:
    this->m_target.u.m_Id = 0;
    this->m_hTargetEntity.m_Index = -1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
  }
}


// CPointAngleSensor::InputEnable  (line 288, @0x000000000232d130, libserver.so)
// calls: CPointAngleSensor::Enable
void __fastcall CPointAngleSensor::InputEnable(CPointAngleSensor *const this, inputdata_t *const inputdata)
{
  CPointAngleSensor::Enable(this);
}


// CPointAngleSensor::InputDisable  (line 297, @0x000000000231ef60, libserver.so)  // inlines: Disable
// calls: CBaseEntity::SetNextThink
void __fastcall CPointAngleSensor::InputDisable(CPointAngleSensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8

  this->m_bDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CPointAngleSensor::InputToggle  (line 306, @0x000000000232d140, libserver.so)  // inlines: Disable
// calls: CBaseEntity::SetNextThink, CPointAngleSensor::Enable
void __fastcall CPointAngleSensor::InputToggle(CPointAngleSensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8

  if ( this->m_bDisabled )
  {
    CPointAngleSensor::Enable(this);
  }
  else
  {
    this->m_bDisabled = 1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
  }
}


// CPointAngleSensor::Enable  (line 322, @0x000000000232d070, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, curtime, operator bool
// calls: CBaseEntity::SetNextThink
// callers: CPointAngleSensor::InputEnable, CPointAngleSensor::InputToggle
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointAngleSensor::Enable(CPointAngleSensor *const this)
{
  double v1; // xmm1_8
  CConcreteEntityList *v2; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hTargetEntity.m_Index;
  this->m_bDisabled = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = v2->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
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
        CBaseEntity::SetNextThink(this, v7, v1, 0);
      }
    }
  }
}


// CPointAngleSensor::Disable  (line 335, @0x000000000232d170, libserver.so)
// calls: CBaseEntity::SetNextThink
void __fastcall CPointAngleSensor::Disable(CPointAngleSensor *const this)
{
  double v1; // xmm1_8

  this->m_bDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
}


// CPointAngleSensor::DrawDebugTextOverlays  (line 345, @0x000000000232cdd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, RAD2DEG, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::DrawDebugTextOverlays, CPointAngleSensor::IsFacingWithinTolerance, acosf, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "delta ang (dot)    : %.2f (%f)", "tolerance ang (dot): %.2f (%f)", "facing: %s"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CPointAngleSensor::DrawDebugTextOverlays(
        CPointAngleSensor *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v3; // r14
  char v4; // r13
  int v6; // r12d
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  uint32 v12; // eax
  CBaseEntity *v13; // rsi
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  int v16; // r14d
  bool IsFacingWithinTolerance; // r15
  float v18; // xmm0_4
  float v19; // xmm0_4
  const char *v20; // rcx
  float v21; // [rsp+Ch] [rbp-254h]
  float m_flDotTolerance; // [rsp+Ch] [rbp-254h]
  float flDot; // [rsp+1Ch] [rbp-244h] BYREF
  char tempstr[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v25; // [rsp+228h] [rbp-38h]

  v3 = iDebugFilterFlags;
  v4 = nDebugOverlayBits;
  v25 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v4 & 1) != 0 && (v3 & 0x800) != 0 )
  {
    m_Index = this->m_hLookAtEntity.m_Index;
    m_pInstance = 0;
    if ( m_Index + 2 > 1 )
    {
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hLookAtEntity.m_Index) >> 9) & 0x3F];
      if ( v10 != 0 )
      {
        v11 = &v10[this->m_hLookAtEntity.m_Index & 0x1FF];
        if ( v11 != 0 && m_Index == v11->m_EHandle.m_Index )
          m_pInstance = v11->m_pInstance;
      }
    }
    v12 = this->m_hTargetEntity.m_Index;
    v13 = 0;
    if ( v12 + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
          v13 = v15->m_pInstance;
      }
    }
    v16 = v6 + 2;
    IsFacingWithinTolerance = CPointAngleSensor::IsFacingWithinTolerance(
                                this,
                                v13,
                                m_pInstance,
                                COERCE_DOUBLE(LODWORD(this->m_flDotTolerance)),
                                &flDot);
    v21 = flDot;
    v18 = acosf(flDot);
    V_snprintf(tempstr, 512, "delta ang (dot)    : %.2f (%f)", (v18 * 57.295776), v21);
    CBaseEntity::EntityText(this, v6, tempstr, 0.0, 255, 255, 255, 255);
    m_flDotTolerance = this->m_flDotTolerance;
    v19 = acosf(m_flDotTolerance);
    V_snprintf(tempstr, 512, "tolerance ang (dot): %.2f (%f)", (v19 * 57.295776), m_flDotTolerance);
    CBaseEntity::EntityText(this, v6 + 1, tempstr, 0.0, 255, 255, 255, 255);
    v20 = "yes";
    if ( !IsFacingWithinTolerance )
      v20 = "no";
    v6 += 3;
    V_snprintf(tempstr, 512, "facing: %s", v20);
    CBaseEntity::EntityText(this, v16, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


// CPointProximitySensor::~CPointProximitySensor  (line 377, @0x000000000233b710, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointProximitySensor::~CPointProximitySensor(CPointProximitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointProximitySensor::~CPointProximitySensor  (line 377, @0x000000000233b730, libserver.so)  // inlines: ~CPointEntity, ~CPointProximitySensor
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointProximitySensor::~CPointProximitySensor(CPointProximitySensor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointProximitySensor::GetEntityClass  (line 379, @0x000000000233a0a0, libserver.so)
CEntityClass *__cdecl CPointProximitySensor::GetEntityClass()
{
  return g_pEntityCPointProximitySensorClass;
}


// CPointProximitySensor::Schema_DynamicBinding  (line 379, @0x000000000233a0b0, libserver.so)
// globals: CPointProximitySensor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointProximitySensor::Schema_DynamicBinding(
        const CPointProximitySensor *const this)
{
  return CPointProximitySensor::s_pSchemaBinding;
}


// CPointProximitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 379, @0x000000000233a0c0, libserver.so)
// globals: CPointProximitySensor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointProximitySensor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointProximitySensor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointProximitySensor::CEntityInstanceEntityClass::DestructInstance  (line 379, @0x000000000233a0d0, libserver.so)  // inlines: Destruct<CPointProximitySensor>
void __fastcall CPointProximitySensor::CEntityInstanceEntityClass::DestructInstance(
        CPointProximitySensor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointProximitySensor::CEntityInstanceEntityClass::FreeInstance  (line 379, @0x000000000233a0f0, libserver.so)
void __fastcall CPointProximitySensor::CEntityInstanceEntityClass::FreeInstance(
        CPointProximitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointProximitySensor::CEntityInstanceEntityClass::CanAllocate  (line 379, @0x000000000233a110, libserver.so)
bool __fastcall CPointProximitySensor::CEntityInstanceEntityClass::CanAllocate(
        const CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointProximitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 379, @0x000000000233a120, libserver.so)
// globals: CPointProximitySensor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointProximitySensor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  return CPointProximitySensor::s_pSchemaBinding;
}


// CPointProximitySensor::CEntityInstanceEntityClass::AllocateInstance  (line 379, @0x000000000233b320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointProximitySensor::CEntityInstanceEntityClass::AllocateInstance(
        CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 816);
  memset(v1, 0, 0x330u);
  return v1;
}


// CPointProximitySensor::CEntityInstanceEntityClass::ConstructInstance  (line 379, @0x000000000233b430, libserver.so)  // inlines: CEntityHandle, CEntityOutputTemplate, CHandle, CPointEntity, CPointProximitySensor, Construct<CPointProximitySensor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointProximitySensor::CEntityInstanceEntityClass::ConstructInstance(
        CPointProximitySensor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = -1;
    *p = &off_4091E90;
    *(p + 98) = off_3FD2290;
  }
  return p;
}


// CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 379, @0x000000000233c940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 379, @0x000000000233c960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointProximitySensor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointProximitySensor::GetEntityClassInternal  (line 379, @0x0000000002342c60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_proximity_sensor", "CPointProximitySensor"
// globals: `guard variable for'CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass, CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo, CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo
CEntityClass *__cdecl CPointProximitySensor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass) != 0 )
  {
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_designerName.u.m_Id = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass._vptr_CEntityClass = off_3F79390;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_ComponentOffsets.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_AllHelpers.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classInputs.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classOutputs.m_Size = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_requiredEHandle.m_Index = -1;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_hNetworkSerializer = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pBaseClassInfo = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pClassInfo = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_flags = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_nAllHelpersFlags = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pScriptClassDesc = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pInputs = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_nInputCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pOutputs = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_nOutputCount = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pGameClass = 0;
    CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass._vptr_CEntityClass = off_4091E10;
    __cxa_guard_release(&`guard variable for'CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass);
    __cxa_atexit(
      CPointProximitySensor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointProximitySensorClass != 0 )
    return &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass;
  if ( `guard variable for'CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo,
      "CPointProximitySensor",
      "point_proximity_sensor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo);
  }
  CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pClassInfo = &CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo;
  CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pBaseClassInfo = CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointProximitySensorClass = &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass;
  CPointProximitySensor::GetEntityClassInfo(void)::g_EntityCPointProximitySensorClassInfo.m_pClass = &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass;
  CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointProximitySensorClass->m_pComponentOverrides = 0;
  return &CPointProximitySensor::GetEntityClassInternal(void)::g_EntityCPointProximitySensorClass;
}


// CPointProximitySensor::GetDataDescMap  (line 407, @0x000000000231ed10, libserver.so)
// globals: CPointProximitySensor::m_DataMap
datamap_t *__fastcall CPointProximitySensor::GetDataDescMap(CPointProximitySensor *const this)
{
  return &CPointProximitySensor::m_DataMap;
}


// CPointProximitySensor::AddDatadescMetadataKeys  (line 407, @0x000000000232d190, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointProximitySensor::GetEntityClass(void)
void __fastcall CPointProximitySensor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointProximitySensor::GetEntityClass);
}


// CPointProximitySensor::GetBaseMap  (line 407, @0x000000000232d1b0, libserver.so)
datamap_t *__cdecl CPointProximitySensor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointProximitySensor>  (line 407, @0x000000000232d1c0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointProximitySensor"
// globals: `guard variable for'DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder, `guard variable for'DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc, CPointProximitySensor::GetEntityClass(void), CPointProximitySensor::m_DataMap, DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointProximitySensor>(CPointProximitySensor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_pszBase = "CPointProximitySensor";
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::nameHolder,
      &_dso_handle);
  }
  CPointProximitySensor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc) != 0 )
  {
    DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc);
  }
  CPointProximitySensor::m_DataMap.dataNumFields = 7;
  CPointProximitySensor::m_DataMap.dataDesc = &DataMapInit<CPointProximitySensor>(CPointProximitySensor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointProximitySensor::m_DataMap, CPointProximitySensor::GetEntityClass);
  return &CPointProximitySensor::m_DataMap;
}


// CPointProximitySensor::Activate  (line 428, @0x0000000002321090, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, curtime, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, CBaseEntity::SetNextThink
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointProximitySensor::Activate(CPointProximitySensor *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CGlobalVars *v14; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v16; // xmm0_8
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  CBaseEntity::Activate(this, activateType);
  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[this->m_hTargetEntity.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || v6->m_pInstance == 0 )
  {
    iszName.u.m_Id = this->m_target.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v10 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEntity.m_Index) = v10 | this->m_hTargetEntity.m_Index & 0x8000;
      this->m_hTargetEntity.m_Index = (v9 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Index = -1;
    }
  }
  if ( !this->m_bDisabled )
  {
    v11 = this->m_hTargetEntity.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[this->m_hTargetEntity.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
        {
          v14 = gpGlobals;
          if ( gpGlobals != 0 )
          {
            if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
            {
              m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
              if ( m_pfnWarningFunc != 0 )
                m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
            }
            *&v16 = LODWORD(v14->m_flCurrentTime);
          }
          else
          {
            v16 = 0.0;
          }
          CBaseEntity::SetNextThink(this, v16, v3, 0);
        }
      }
    }
  }
}


// CPointProximitySensor::InputSetTargetEntity  (line 446, @0x00000000023227f0, libserver.so)  // inlines: AssignTo, GetEHandle, GetEntityIdentity, GetEntryIndex, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, StringID, TempString, ToString, curtime, operator bool, operator=
// calls: VariantFieldTypeName, Warning, CBaseEntity::SetNextThink, MakeEntitySystemString, AllocPooledString, CGameEntitySystem::FindEntityByName, V_snprintf, _Unwind_Resume
// strings: "No conversion from %s to string at the moment!\n", "%g %g %g %g", "false", "true", "%d %d %d %d"
// globals: jpt_2322828, jpt_2322864, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_2322907, CEntityHandle::gm_pEntityList, jpt_2322C3B
void __fastcall CPointProximitySensor::InputSetTargetEntity(
        CPointProximitySensor *const this,
        inputdata_t *const inputdata)
{
  double v2; // xmm1_8
  int16 m_type; // di
  const char *m_pszString; // rax
  int16 v7; // di
  const char *v8; // rax
  char *v9; // rsi
  int16 v10; // ax
  bool v11; // al
  int16 v12; // di
  char *v13; // rsi
  CBaseEntity *EntityByName; // rax
  double v15; // xmm1_8
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  uint32 m_Index; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  double v22; // xmm0_8
  CGlobalVars *v23; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *v25; // rax
  const char *v26; // rax
  const char *v27; // rcx
  double m_float; // xmm0_8
  double m_float64; // xmm0_8
  const char *v30; // rcx
  const char *v31; // rax
  double v32; // xmm0_8
  const char *v33; // rcx
  const char *v34; // rdx
  double v35; // xmm0_8
  const char *v36; // rcx
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  m_type = inputdata->value.m_type;
  if ( m_type == 30 )
  {
    m_pszString = inputdata->value.m_pszString;
  }
  else
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_43;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_61;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        break;
      case 6:
        v27 = "true";
        if ( inputdata->value.m_char == 0 )
          v27 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v27);
        break;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        break;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_61:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
        break;
      default:
        v25 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v25);
LABEL_43:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  if ( m_pszString == 0 )
    goto LABEL_9;
  v7 = inputdata->value.m_type;
  if ( v7 == 30 )
  {
    v9 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v7 )
    {
      case 0:
        goto LABEL_45;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_65;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        break;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        break;
      case 6:
        v30 = "true";
        if ( inputdata->value.m_char == 0 )
          v30 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v30);
        break;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        break;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        break;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        break;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_65:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
        break;
      default:
        v26 = VariantFieldTypeName(v7);
        Warning("No conversion from %s to string at the moment!\n", v26);
LABEL_45:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        break;
    }
    v9 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
  }
  MakeEntitySystemString(v9);
  if ( iszName.u.m_Id == 0 )
    goto LABEL_9;
  v10 = inputdata->value.m_type;
  if ( v10 != 30 )
  {
    switch ( v10 )
    {
      case 0:
        goto LABEL_8;
      case 1:
        v35 = inputdata->value.m_float;
        goto LABEL_98;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        goto LABEL_95;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        goto LABEL_95;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_int);
        goto LABEL_95;
      case 6:
        v36 = "true";
        if ( inputdata->value.m_char == 0 )
          v36 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v36);
        goto LABEL_95;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_95;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        goto LABEL_95;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        goto LABEL_95;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_95;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_95;
      case 34:
        v35 = inputdata->value.m_float64;
LABEL_98:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v35);
        goto LABEL_95;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_int);
LABEL_95:
        v11 = CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf == 0;
        goto LABEL_16;
      default:
        v8 = VariantFieldTypeName(v10);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        goto LABEL_9;
    }
  }
  v11 = *inputdata->value.m_pszString == 0;
LABEL_16:
  if ( !v11 )
  {
    v12 = inputdata->value.m_type;
    if ( v12 == 30 )
    {
      v13 = inputdata->value.m_pszString;
    }
    else
    {
      switch ( v12 )
      {
        case 0:
          goto LABEL_77;
        case 1:
          v32 = inputdata->value.m_float;
          goto LABEL_79;
        case 3:
        case 39:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 4:
        case 27:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g %g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4),
            *(inputdata->value.m_uint64 + 8),
            *(inputdata->value.m_uint64 + 12));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 5:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d",
            inputdata->value.m_uint);
          goto LABEL_84;
        case 6:
          v33 = "true";
          v34 = "%s";
          if ( inputdata->value.m_char == 0 )
            v33 = "false";
          goto LABEL_81;
        case 8:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%c",
            inputdata->value.m_char);
          goto LABEL_84;
        case 9:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%d %d %d %d",
            inputdata->value.m_int,
            BYTE1(inputdata->value.m_int),
            BYTE2(inputdata->value.m_int),
            HIBYTE(inputdata->value.m_int));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 25:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%g %g",
            *inputdata->value.m_pszString,
            *(inputdata->value.m_uint64 + 4));
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 26:
          v33 = inputdata->value.m_pszString;
          v34 = "%lld";
LABEL_81:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v34, v33);
          goto LABEL_82;
        case 33:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%llu",
            inputdata->value.m_uint64);
LABEL_82:
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 34:
          v32 = inputdata->value.m_float64;
LABEL_79:
          V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", v32);
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        case 37:
          V_snprintf(
            &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
            512,
            "%u",
            inputdata->value.m_uint);
LABEL_84:
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
        default:
          v31 = VariantFieldTypeName(v12);
          Warning("No conversion from %s to string at the moment!\n", v31);
LABEL_77:
          CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
          v13 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
          break;
      }
    }
    AllocPooledString(&iszName, v13);
    this->m_target = iszName;
    EntityByName = CGameEntitySystem::FindEntityByName(
                     g_pGameEntitySystem,
                     0,
                     &iszName,
                     this,
                     inputdata->pActivator,
                     inputdata->pCaller,
                     0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v18 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEntity.m_Index) = v18 | this->m_hTargetEntity.m_Index & 0x8000;
      this->m_hTargetEntity.m_Index = (v17 << 15) | this->m_hTargetEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEntity.m_Index = -1;
    }
    if ( !this->m_bDisabled )
    {
      m_Index = this->m_hTargetEntity.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
        if ( v20 != 0 )
        {
          v21 = &v20[this->m_hTargetEntity.m_Index & 0x1FF];
          if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
          {
            v22 = 0.0;
            v23 = gpGlobals;
            if ( gpGlobals != 0 )
            {
              if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
              {
                m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
                if ( m_pfnWarningFunc != 0 )
                  (m_pfnWarningFunc)(1, 0.0);
              }
              *&v22 = LODWORD(v23->m_flCurrentTime);
            }
            CBaseEntity::SetNextThink(this, v22, v15, 0);
          }
        }
      }
    }
  }
  else
  {
LABEL_9:
    this->m_target.u.m_Id = 0;
    this->m_hTargetEntity.m_Index = -1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
  }
}


// CPointProximitySensor::InputEnable  (line 468, @0x000000000232d3a0, libserver.so)
// calls: CPointProximitySensor::Enable
void __fastcall CPointProximitySensor::InputEnable(CPointProximitySensor *const this, inputdata_t *const inputdata)
{
  CPointProximitySensor::Enable(this);
}


// CPointProximitySensor::InputDisable  (line 476, @0x000000000231ef80, libserver.so)  // inlines: Disable
// calls: CBaseEntity::SetNextThink
void __fastcall CPointProximitySensor::InputDisable(CPointProximitySensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8

  this->m_bDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
}


// CPointProximitySensor::InputToggle  (line 484, @0x000000000232d3b0, libserver.so)  // inlines: Disable
// calls: CBaseEntity::SetNextThink, CPointProximitySensor::Enable
void __fastcall CPointProximitySensor::InputToggle(CPointProximitySensor *const this, inputdata_t *const inputdata)
{
  double v2; // xmm1_8

  if ( this->m_bDisabled )
  {
    CPointProximitySensor::Enable(this);
  }
  else
  {
    this->m_bDisabled = 1;
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v2, 0);
  }
}


// CPointProximitySensor::Enable  (line 499, @0x000000000232d2e0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, curtime, operator bool
// calls: CBaseEntity::SetNextThink
// callers: CPointProximitySensor::InputEnable, CPointProximitySensor::InputToggle
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointProximitySensor::Enable(CPointProximitySensor *const this)
{
  double v1; // xmm1_8
  CConcreteEntityList *v2; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  double v7; // xmm0_8
  CGlobalVars *v8; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  v2 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hTargetEntity.m_Index;
  this->m_bDisabled = 0;
  if ( m_Index + 2 > 1 )
  {
    v5 = v2->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
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
        CBaseEntity::SetNextThink(this, v7, v1, 0);
      }
    }
  }
}


// CPointProximitySensor::Disable  (line 511, @0x000000000232d3e0, libserver.so)
// calls: CBaseEntity::SetNextThink
void __fastcall CPointProximitySensor::Disable(CPointProximitySensor *const this)
{
  double v1; // xmm1_8

  this->m_bDisabled = 1;
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
}


// CPointProximitySensor::Think  (line 520, @0x000000000232f1a0, libserver.so)  // inlines: CVariantBase, DotProduct, FireOutput<float>, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, VectorSubtract, curtime, operator CEntityInstance*, operator!=<CBaseEntity>, operator-, operator->, ~CVariantBase
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointProximitySensor::Think(CPointProximitySensor *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const Vector *AbsOrigin; // rax
  const CBaseEntity *m_pInstance; // rdi
  float *p_x; // r12
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  const Vector *v11; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  float v14; // xmm0_4
  double v15; // xmm1_8
  CGlobalVars *v16; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v18; // xmm0_8
  float flDist; // [rsp+Ch] [rbp-34h]
  Vector vecTestDir; // [rsp+10h] [rbp-30h] BYREF
  Vector vecDir; // [rsp+20h] [rbp-20h] BYREF

  m_Index = this->m_hTargetEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTargetEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(this);
        m_pInstance = 0;
        p_x = &AbsOrigin->x;
        v8 = this->m_hTargetEntity.m_Index;
        if ( v8 + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEntity.m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[this->m_hTargetEntity.m_Index & 0x1FF];
            if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
              m_pInstance = v10->m_pInstance;
          }
        }
        v11 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v12 = v11->y - p_x[1];
        v13 = v11->z - p_x[2];
        vecTestDir.x = v11->x - *p_x;
        vecTestDir.y = v12;
        vecTestDir.z = v13;
        v14 = VectorNormalize(&vecTestDir);
        if ( (this->m_spawnflags.m_Value & 1) != 0 )
        {
          flDist = v14;
          (*(this->_vptr_IHandleEntity + 61))(this, &vecDir, 0, 0);
          v14 = flDist * fabs(((vecTestDir.x * vecDir.x) + (vecTestDir.y * vecDir.y)) + (vecTestDir.z * vecDir.z));
        }
        this->m_Distance.m_Value = v14;
        LODWORD(vecDir.z) = 1;
        vecDir.x = v14;
        CEntityIOOutput::FireOutputInternal(&this->m_Distance, this, this, &vecDir, 0.0);
        if ( (BYTE2(vecDir.z) & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&vecDir.x);
        v16 = gpGlobals;
        if ( gpGlobals != 0 )
        {
          if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
          {
            m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
            if ( m_pfnWarningFunc != 0 )
              m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          }
          *&v18 = LODWORD(v16->m_flCurrentTime);
        }
        else
        {
          v18 = 0.0;
        }
        CBaseEntity::SetNextThink(this, v18, v15, 0);
      }
    }
  }
}


