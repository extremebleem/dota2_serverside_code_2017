// Reconstructed from DWARF by pahole; not original source.

// src/game/server/guntarget.cpp:23
class CGunTarget : public CBaseToggle {
public:

private:

	static datamap_t m_DataMap;

	bool m_on;  // +0x500

	EHANDLE m_hTargetEnt;  // +0x504
	COutputEvent m_OnDeath;  // +0x508
	typedef CBaseToggle BaseClass;

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
	CGunTarget(CGunTarget &);
	CGunTarget(CGunTarget &);
	CGunTarget();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual bool CreateVPhysics();
	virtual int BloodColor();
	virtual Class_T Classify();
	virtual int OnTakeDamage(const CTakeDamageInfo &);
	virtual Vector BodyTarget(const Vector &, bool);
	void InputStart(inputdata_t &);
	void InputStop(inputdata_t &);
	void InputToggle(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

protected:

	void Next();
	void Start();
	void Wait();
	void Stop();
	virtual ~CGunTarget();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[49] CreateVPhysics
	// vtable[138] BloodColor
	// vtable[47] Classify
	// vtable[90] OnTakeDamage
	// vtable[169] BodyTarget
	// vtable[34] GetDataDescMap
	// sizeof = 1312
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGunTarget::~CGunTarget  (line 23, @0x000000000227c420, libserver.so)  // inlines: ~CBaseToggle
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CGunTarget::~CGunTarget(CGunTarget *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CGunTarget::~CGunTarget  (line 23, @0x000000000227c440, libserver.so)  // inlines: ~CBaseToggle, ~CGunTarget
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CGunTarget::~CGunTarget(CGunTarget *const this)
{
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CGunTarget::GetEntityClass  (line 25, @0x000000000227b2d0, libserver.so)
CEntityClass *__cdecl CGunTarget::GetEntityClass()
{
  return g_pEntityCGunTargetClass;
}


// CGunTarget::Schema_DynamicBinding  (line 25, @0x000000000227b2e0, libserver.so)
// globals: CGunTarget::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGunTarget::Schema_DynamicBinding(const CGunTarget *const this)
{
  return CGunTarget::s_pSchemaBinding;
}


// CGunTarget::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 25, @0x000000000227b2f0, libserver.so)
// globals: CGunTarget::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGunTarget::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGunTarget::CEntityInstanceEntityClass *const this)
{
  return CGunTarget::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGunTarget::CEntityInstanceEntityClass::DestructInstance  (line 25, @0x000000000227b300, libserver.so)  // inlines: Destruct<CGunTarget>
void __fastcall CGunTarget::CEntityInstanceEntityClass::DestructInstance(
        CGunTarget::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGunTarget::CEntityInstanceEntityClass::FreeInstance  (line 25, @0x000000000227b320, libserver.so)
void __fastcall CGunTarget::CEntityInstanceEntityClass::FreeInstance(
        CGunTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGunTarget::CEntityInstanceEntityClass::CanAllocate  (line 25, @0x000000000227b340, libserver.so)
bool __fastcall CGunTarget::CEntityInstanceEntityClass::CanAllocate(
        const CGunTarget::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGunTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 25, @0x000000000227b350, libserver.so)
// globals: CGunTarget::s_pSchemaBinding
const ISchemaBinding *__fastcall CGunTarget::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGunTarget::CEntityInstanceEntityClass *const this)
{
  return CGunTarget::s_pSchemaBinding;
}


// CGunTarget::CEntityInstanceEntityClass::AllocateInstance  (line 25, @0x000000000227bdf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGunTarget::CEntityInstanceEntityClass::AllocateInstance(
        CGunTarget::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1312);
  memset(v1, 0, 0x520u);
  return v1;
}


// CGunTarget::CEntityInstanceEntityClass::ConstructInstance  (line 25, @0x000000000227c6e0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CGunTarget, CHandle, Construct<CGunTarget>
// calls: CBaseToggle::CBaseToggle
CEntityInstance *__fastcall CGunTarget::CEntityInstanceEntityClass::ConstructInstance(
        CGunTarget::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseToggle::CBaseToggle(p);
    *(p + 321) = -1;
    *p = &off_4052210;
    *(p + 161) = off_3F7C190;
  }
  return p;
}


// CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x000000000227d050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGunTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 25, @0x000000000227d070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGunTarget::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGunTarget::GetEntityClassInternal  (line 25, @0x0000000002280620, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "func_guntarget", "CGunTarget", "CBaseToggle"
// globals: `guard variable for'CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass, CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo, CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo, `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo (9 total)
CEntityClass *__cdecl CGunTarget::GetEntityClassInternal()
{
  CGunTarget::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass) != 0 )
  {
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass._vptr_CEntityClass = off_3F79390;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_designerName.u.m_Id = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_ComponentOffsets.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_AllHelpers.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classInputs.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classOutputs.m_Size = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_requiredEHandle.m_Index = -1;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_hNetworkSerializer = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pBaseClassInfo = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pClassInfo = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_flags = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_nAllHelpersFlags = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pScriptClassDesc = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pInputs = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_nInputCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pOutputs = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_nOutputCount = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pGameClass = 0;
    CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass._vptr_CEntityClass = off_4052190;
    __cxa_guard_release(&`guard variable for'CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass);
    __cxa_atexit(
      CGunTarget::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass,
      &_dso_handle);
  }
  if ( g_pEntityCGunTargetClass != 0 )
    return &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
  if ( `guard variable for'CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo,
        "CBaseToggle",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo,
      "CGunTarget",
      "func_guntarget",
      0,
      &CBaseToggle::GetEntityClassInfo(void)::g_EntityCBaseToggleClassInfo);
    __cxa_guard_release(&`guard variable for'CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo);
  }
  CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pClassInfo = &CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo;
  CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pBaseClassInfo = CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo.m_pBaseClassInfo;
  g_pEntityCGunTargetClass = &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
  CGunTarget::GetEntityClassInfo(void)::g_EntityCGunTargetClassInfo.m_pClass = &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
  CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCGunTargetClass->m_pComponentOverrides = 0;
  return &CGunTarget::GetEntityClassInternal(void)::g_EntityCGunTargetClass;
}


// CGunTarget::BloodColor  (line 33, @0x000000000227b360, libserver.so)
int __fastcall CGunTarget::BloodColor(CGunTarget *const this)
{
  return -1;
}


// CGunTarget::Classify  (line 38, @0x000000000227b370, libserver.so)
Class_T __fastcall CGunTarget::Classify(CGunTarget *const this)
{
  return Class_T::CLASS_NONE;
}


// CGunTarget::BodyTarget  (line 41, @0x000000000227c090, libserver.so)
// calls: CBaseEntity::GetAbsOrigin
Vector __fastcall CGunTarget::BodyTarget(CGunTarget *const this, const Vector *const posSrc, bool bNoisy)
{
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CGunTarget::GetDataDescMap  (line 67, @0x00000000022541c0, libserver.so)
// globals: CGunTarget::m_DataMap
datamap_t *__fastcall CGunTarget::GetDataDescMap(CGunTarget *const this)
{
  return &CGunTarget::m_DataMap;
}


// CGunTarget::AddDatadescMetadataKeys  (line 67, @0x00000000022671a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGunTarget::GetEntityClass(void)
void __fastcall CGunTarget::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGunTarget::GetEntityClass);
}


// CGunTarget::GetBaseMap  (line 67, @0x00000000022671c0, libserver.so)
datamap_t *__cdecl CGunTarget::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CGunTarget>  (line 67, @0x000000000226ff50, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CGunTarget"
// globals: `guard variable for'DataMapInit<CGunTarget>(CGunTarget *)::nameHolder, `guard variable for'DataMapInit<CGunTarget>(CGunTarget *)::dataDesc, CGunTarget::GetEntityClass(void), CGunTarget::m_DataMap, DataMapInit<CGunTarget>(CGunTarget *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGunTarget>(CGunTarget *a1)
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

  if ( `guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::nameHolder) != 0 )
  {
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_pszBase = "CGunTarget";
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGunTarget>(CGunTarget *)::nameHolder,
      &_dso_handle);
  }
  CGunTarget::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v2, DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_pszBase), "Next");
    m_Size = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size == DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CGunTarget>(CGunTarget *)::dataDesc[3].fieldName = v2;
    v6 = operator new[](DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v6, DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_pszBase), "Start");
    v7 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size == DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CGunTarget>(CGunTarget *)::dataDesc[4].fieldName = v6;
    v10 = operator new[](DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_nLenBase + 5);
    strcpy(stpcpy(v10, DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_pszBase), "Wait");
    v11 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size == DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CGunTarget>(CGunTarget *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CGunTarget>(CGunTarget *)::dataDesc[5].fieldName = v10;
    DataMapInit<CGunTarget>(CGunTarget *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGunTarget>(CGunTarget *)::dataDesc);
  }
  CGunTarget::m_DataMap.dataNumFields = 9;
  CGunTarget::m_DataMap.dataDesc = &DataMapInit<CGunTarget>(CGunTarget *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGunTarget::m_DataMap, CGunTarget::GetEntityClass);
  return &CGunTarget::m_DataMap;
}


// CGunTarget::Spawn  (line 89, @0x00000000022561b0, libserver.so)  // inlines: SetSolid
// calls: CBaseEntity::Spawn, CBaseEntity::SetMoveType, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::SetDamageOptions, CBaseEntity::AddFlag, CBaseEntity::GetHealth, CBaseEntity::SetMaxHealth, CBaseEntity::SetMoveDoneTime
// globals: CGunTarget::Start(void)
void __fastcall CGunTarget::Spawn(CGunTarget *const this, const CEntityKeyValues *pKeyValues)
{
  int Health; // eax
  float v5; // xmm1_4

  CBaseEntity::Spawn(this, pKeyValues);
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 100.0;
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
  CBaseEntity::AddFlag(this, 0x2000);
  this->m_on = 0;
  Health = CBaseEntity::GetHealth(this);
  CBaseEntity::SetMaxHealth(this, Health);
  if ( (this->m_spawnflags.m_Value & 1) != 0 )
  {
    this->m_pfnMoveDone.__pfn = CGunTarget::Start;
    this->m_pfnMoveDone.__delta = 0;
    CBaseEntity::SetMoveDoneTime(this, 0.30000001, v5);
  }
  (*(this->_vptr_IHandleEntity + 49))(this);
}


// CGunTarget::CreateVPhysics  (line 117, @0x0000000002256170, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CGunTarget::CreateVPhysics(CGunTarget *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  return 1;
}


// CGunTarget::Activate  (line 123, @0x0000000002256290, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseModelEntity::Activate, CBaseEntity::GetNextTarget, CBaseEntity::GetAbsOrigin
void __fastcall CGunTarget::Activate(CGunTarget *const this, ActivateType_t activateType)
{
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v5; // edx
  __int16 v6; // si
  Vector nextPos; // [rsp+0h] [rbp-20h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  NextTarget = CBaseEntity::GetNextTarget(this);
  if ( NextTarget != 0 )
  {
    m_pEntity = NextTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetEnt.m_Index) = v6 | this->m_hTargetEnt.m_Index & 0x8000;
      this->m_hTargetEnt.m_Index = (v5 << 15) | this->m_hTargetEnt.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetEnt.m_Index = -1;
    }
    nextPos = *CBaseEntity::GetAbsOrigin(NextTarget);
    (*(this->_vptr_IHandleEntity + 128))(this, &nextPos, 0, 0);
  }
}


// CGunTarget::Start  (line 139, @0x0000000002267370, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator=, operator==<CBaseEntity>
// calls: CBaseEntity::SetDamageOptions, CBaseEntity::AddFlag, CBaseEntity::GetNextTarget, CGunTarget::Next
// callers: CGunTarget::InputStart, CGunTarget::InputToggle
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGunTarget::Start(CGunTarget *const this)
{
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  CConcreteEntityList *v6; // rsi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  void (__fastcall *v10)(CGunTarget *const, _QWORD); // r12
  unsigned int v11; // eax

  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_YES);
  CBaseEntity::AddFlag(this, 0x10000);
  NextTarget = CBaseEntity::GetNextTarget(this);
  if ( NextTarget != 0 && (m_pEntity = NextTarget->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v6 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hTargetEnt.m_Index) = v5 | this->m_hTargetEnt.m_Index & 0x8000;
    v7 = (v4 << 15) | this->m_hTargetEnt.m_Index & 0x7FFF;
    this->m_hTargetEnt.m_Index = v7;
    if ( v7 + 2 > 1 )
    {
      v8 = v6->m_pIdentityChunks[(LOWORD(this->m_hTargetEnt.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hTargetEnt.m_Index & 0x1FF];
        if ( v9 != 0 && v7 == v9->m_EHandle.m_Index && v9->m_pInstance != 0 )
        {
          v10 = *(this->_vptr_IHandleEntity + 157);
          v11 = (*(this->_vptr_IHandleEntity + 156))(this);
          v10(this, v11);
          CGunTarget::Next(this);
        }
      }
    }
  }
  else
  {
    this->m_hTargetEnt.m_Index = -1;
  }
}


// CGunTarget::Next  (line 151, @0x0000000002267220, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CBaseEntity::ThinkSet, CBaseEntity::GetNextTarget, CGunTarget::Stop, CBaseEntity::GetLocalOrigin, CBaseToggle::LinearMove
// callers: CGunTarget::Start, CGunTarget::Wait
// globals: CEntityHandle::gm_pEntityList, CGunTarget::Wait(void)
void __fastcall CGunTarget::Next(CGunTarget *const this)
{
  CBaseEntity *NextTarget; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v4; // eax
  __int16 v5; // cx
  CConcreteEntityList *v6; // rsi
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *LocalOrigin; // rax
  float v12; // xmm1_4

  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  NextTarget = CBaseEntity::GetNextTarget(this);
  if ( NextTarget != 0 && (m_pEntity = NextTarget->m_pEntity) != 0 )
  {
    v4 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v5 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    v6 = CEntityHandle::gm_pEntityList;
    LOWORD(this->m_hTargetEnt.m_Index) = v5 | this->m_hTargetEnt.m_Index & 0x8000;
    v7 = (v4 << 15) | this->m_hTargetEnt.m_Index & 0x7FFF;
    this->m_hTargetEnt.m_Index = v7;
    if ( v7 + 2 > 1
      && (v8 = v6->m_pIdentityChunks[(LOWORD(this->m_hTargetEnt.m_Index) >> 9) & 0x3F]) != 0
      && (v9 = &v8[this->m_hTargetEnt.m_Index & 0x1FF]) != 0
      && v7 == v9->m_EHandle.m_Index
      && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0) )
    {
      this->m_pfnMoveDone.__delta = 0;
      this->m_pfnMoveDone.__pfn = CGunTarget::Wait;
      LocalOrigin = CBaseEntity::GetLocalOrigin(m_pInstance);
      CBaseToggle::LinearMove(this, LocalOrigin, v12);
    }
    else
    {
      CGunTarget::Stop(this);
    }
  }
  else
  {
    this->m_hTargetEnt.m_Index = -1;
    CGunTarget::Stop(this);
  }
}


// CGunTarget::Wait  (line 169, @0x000000000226e060, libserver.so)  // inlines: CVariantBase, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator=, ~CVariantBase
// calls: CGunTarget::Stop, CEntityInstance::AcceptInput, CBaseEntity::SetMoveDoneTime, CGunTarget::Next, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList, CGunTarget::Next(void)
void __fastcall CGunTarget::Wait(CGunTarget *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // r12
  float v6; // xmm0_4
  float v7; // xmm1_4
  UtlSymLargeId_t m_pEntity; // rax
  variant_t emptyVariant; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hTargetEnt.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetEnt.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hTargetEnt.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0) )
  {
    emptyVariant.m_type = 0;
    emptyVariant.m_flags = 0;
    emptyVariant.m_uint64 = 0;
    CEntityInstance::AcceptInput(m_pInstance, "InPass", this, this, &emptyVariant, 0);
    v6 = (*(m_pInstance->_vptr_IHandleEntity + 95))(m_pInstance);
    this->m_flWait = v6;
    m_pEntity = m_pInstance[7].m_pEntity;
    this->m_pfnMoveDone.__delta = 0;
    this->m_target.u.m_Id = m_pEntity;
    this->m_pfnMoveDone.__pfn = CGunTarget::Next;
    if ( v6 == 0.0 )
      CGunTarget::Next(this);
    else
      CBaseEntity::SetMoveDoneTime(this, v6, v7);
    if ( (emptyVariant.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, emptyVariant.m_uint64);
  }
  else
  {
    CGunTarget::Stop(this);
  }
}


// CGunTarget::Stop  (line 197, @0x00000000022671d0, libserver.so)
// calls: CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetDamageOptions
// callers: CGunTarget::InputStop, CGunTarget::Next, CGunTarget::InputToggle, CGunTarget::Wait, CGunTarget::OnTakeDamage
void __fastcall CGunTarget::Stop(CGunTarget *const this)
{
  float v2; // xmm1_4

  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
  CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_NO);
}


// CGunTarget::OnTakeDamage  (line 205, @0x000000000226f0c0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInflictor, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, ~CVariantBase
// calls: CBaseEntity::GetHealth, CGunTarget::Stop, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
int __fastcall CGunTarget::OnTakeDamage(CGunTarget *const this, const CTakeDamageInfo *const info)
{
  void (__fastcall *v4)(CGunTarget *const, _QWORD); // r13
  int Health; // eax
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  if ( CBaseEntity::GetHealth(this) > 0 )
  {
    v4 = *(this->_vptr_IHandleEntity + 157);
    Health = CBaseEntity::GetHealth(this);
    v4(this, (Health - info->m_flDamage));
    if ( CBaseEntity::GetHealth(this) <= 0 )
    {
      (*(this->_vptr_IHandleEntity + 157))(this, 0);
      CGunTarget::Stop(this);
      m_Index = info->m_hInflictor.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hInflictor.m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[info->m_hInflictor.m_Index & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
            m_pInstance = v10->m_pInstance;
        }
      }
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnDeath, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
  }
  return 0;
}


// CGunTarget::InputStart  (line 225, @0x0000000002267490, libserver.so)
// calls: CGunTarget::Start
void __fastcall CGunTarget::InputStart(CGunTarget *const this, inputdata_t *const inputdata)
{
  CGunTarget::Start(this);
}


// CGunTarget::InputStop  (line 234, @0x0000000002267210, libserver.so)
// calls: CGunTarget::Stop
void __fastcall CGunTarget::InputStop(CGunTarget *const this, inputdata_t *const inputdata)
{
  CGunTarget::Stop(this);
}


// CGunTarget::InputToggle  (line 243, @0x00000000022674a0, libserver.so)
// calls: CGunTarget::Start, CGunTarget::Stop
void __fastcall CGunTarget::InputToggle(CGunTarget *const this, inputdata_t *const inputdata)
{
  if ( this->m_on )
    CGunTarget::Stop(this);
  else
    CGunTarget::Start(this);
}


