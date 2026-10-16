// Reconstructed from DWARF by pahole; not original source.

// src/game/server/pointhurt.cpp:17
class CPointHurt : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_nDamage;  // +0x308
	int m_bitsDamageType;  // +0x30c
	float m_flRadius;  // +0x310
	float m_flDelay;  // +0x314
	string_t m_strTarget;  // +0x318
	EHANDLE m_pActivator;  // +0x320
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
	CPointHurt(CPointHurt &);
	CPointHurt(CPointHurt &);
	CPointHurt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	void HurtThink();
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputToggle(inputdata_t &);
	void InputHurt(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointHurt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[34] GetDataDescMap
	// sizeof = 808
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointHurt::~CPointHurt  (line 17, @0x0000000002372d40, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointHurt::~CPointHurt(CPointHurt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointHurt::~CPointHurt  (line 17, @0x0000000002372d60, libserver.so)  // inlines: ~CPointEntity, ~CPointHurt
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointHurt::~CPointHurt(CPointHurt *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointHurt::GetEntityClass  (line 19, @0x0000000002370780, libserver.so)
CEntityClass *__cdecl CPointHurt::GetEntityClass()
{
  return g_pEntityCPointHurtClass;
}


// CPointHurt::Schema_DynamicBinding  (line 19, @0x0000000002370790, libserver.so)
// globals: CPointHurt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointHurt::Schema_DynamicBinding(const CPointHurt *const this)
{
  return CPointHurt::s_pSchemaBinding;
}


// CPointHurt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x00000000023707a0, libserver.so)
// globals: CPointHurt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointHurt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointHurt::CEntityInstanceEntityClass *const this)
{
  return CPointHurt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointHurt::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x00000000023707b0, libserver.so)  // inlines: Destruct<CPointHurt>
void __fastcall CPointHurt::CEntityInstanceEntityClass::DestructInstance(
        CPointHurt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointHurt::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x00000000023707d0, libserver.so)
void __fastcall CPointHurt::CEntityInstanceEntityClass::FreeInstance(
        CPointHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointHurt::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x00000000023707f0, libserver.so)
bool __fastcall CPointHurt::CEntityInstanceEntityClass::CanAllocate(
        const CPointHurt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x0000000002370800, libserver.so)
// globals: CPointHurt::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointHurt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointHurt::CEntityInstanceEntityClass *const this)
{
  return CPointHurt::s_pSchemaBinding;
}


// CPointHurt::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x00000000023725d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointHurt::CEntityInstanceEntityClass::AllocateInstance(
        CPointHurt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 808);
  memset(v1, 0, 0x328u);
  return v1;
}


// CPointHurt::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x0000000002372b30, libserver.so)  // inlines: CEntityHandle, CHandle, CPointEntity, CPointHurt, CUtlSymbolLarge, Construct<CPointHurt>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointHurt::CEntityInstanceEntityClass::ConstructInstance(
        CPointHurt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 99) = 0;
    *p = &off_4094E70;
    *(p + 200) = -1;
  }
  return p;
}


// CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002374c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x0000000002374c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointHurt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointHurt::GetEntityClassInternal  (line 19, @0x000000000237ba40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "point_hurt", "CPointHurt", "CPointEntity"
// globals: `guard variable for'CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass, CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo, CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo (9 total)
CEntityClass *__cdecl CPointHurt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass) != 0 )
  {
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_designerName.u.m_Id = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass._vptr_CEntityClass = off_3F79390;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_ComponentOffsets.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_AllHelpers.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classInputs.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classOutputs.m_Size = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_requiredEHandle.m_Index = -1;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_hNetworkSerializer = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pBaseClassInfo = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pClassInfo = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_flags = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_nAllHelpersFlags = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pScriptClassDesc = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pInputs = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_nInputCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pOutputs = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_nOutputCount = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pGameClass = 0;
    CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass._vptr_CEntityClass = off_4094DF0;
    __cxa_guard_release(&`guard variable for'CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass);
    __cxa_atexit(
      CPointHurt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointHurtClass != 0 )
    return &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass;
  if ( `guard variable for'CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo) != 0 )
  {
    if ( `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo) != 0 )
    {
      EntityClassInfo = CBaseEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo,
        "CPointEntity",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo,
      "CPointHurt",
      "point_hurt",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo);
  }
  CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pClassInfo = &CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo;
  CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pBaseClassInfo = CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo.m_pBaseClassInfo;
  g_pEntityCPointHurtClass = &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass;
  CPointHurt::GetEntityClassInfo(void)::g_EntityCPointHurtClassInfo.m_pClass = &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass;
  CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointHurtClass->m_pComponentOverrides = 0;
  return &CPointHurt::GetEntityClassInternal(void)::g_EntityCPointHurtClass;
}


// CPointHurt::GetDataDescMap  (line 41, @0x000000000234aae0, libserver.so)
// globals: CPointHurt::m_DataMap
datamap_t *__fastcall CPointHurt::GetDataDescMap(CPointHurt *const this)
{
  return &CPointHurt::m_DataMap;
}


// CPointHurt::AddDatadescMetadataKeys  (line 41, @0x00000000023524a0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointHurt::GetEntityClass(void)
void __fastcall CPointHurt::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointHurt::GetEntityClass);
}


// CPointHurt::GetBaseMap  (line 41, @0x00000000023524c0, libserver.so)
datamap_t *__cdecl CPointHurt::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointHurt>  (line 41, @0x00000000023661a0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CPointHurt"
// globals: `guard variable for'DataMapInit<CPointHurt>(CPointHurt *)::nameHolder, `guard variable for'DataMapInit<CPointHurt>(CPointHurt *)::dataDesc, CPointHurt::GetEntityClass(void), CPointHurt::m_DataMap, DataMapInit<CPointHurt>(CPointHurt *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointHurt>(CPointHurt *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::nameHolder) != 0 )
  {
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_pszBase = "CPointHurt";
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointHurt>(CPointHurt *)::nameHolder,
      &_dso_handle);
  }
  CPointHurt::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_pszBase), "HurtThink");
    m_Size = DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size == DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPointHurt>(CPointHurt *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPointHurt>(CPointHurt *)::dataDesc[6].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointHurt>(CPointHurt *)::dataDesc);
  }
  CPointHurt::m_DataMap.dataNumFields = 11;
  CPointHurt::m_DataMap.dataDesc = &DataMapInit<CPointHurt>(CPointHurt *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointHurt::m_DataMap, CPointHurt::GetEntityClass);
  return &CPointHurt::m_DataMap;
}


// CPointHurt::Spawn  (line 65, @0x000000000234f220, libserver.so)  // inlines: Set, curtime, operator=
// calls: CPointEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CPointHurt::HurtThink(void)
void __fastcall CPointHurt::Spawn(CPointHurt *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  bool v4; // zf
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax

  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  v4 = (this->m_spawnflags.m_Value & 1) == 0;
  this->m_pfnUse.__pfn = 0;
  this->m_pfnUse.__delta = 0;
  this->m_pActivator.m_Index = -1;
  if ( v4 )
  {
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_3;
LABEL_16:
    *&v6 = 1036831949;
    goto LABEL_5;
  }
  CBaseEntity::ThinkSet(this, CPointHurt::HurtThink, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_16;
LABEL_3:
  if ( !v5->m_bEnableAssertions && !v5->m_bInSimulation )
  {
    m_pfnWarningFunc = v5->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  HIDWORD(v6) = 0;
  *&v6 = v5->m_flCurrentTime + 0.1;
LABEL_5:
  CBaseEntity::SetNextThink(this, v6, v3, 0);
  if ( this->m_flRadius <= 0.0 )
    this->m_flRadius = 128.0;
  if ( this->m_nDamage <= 0 )
    this->m_nDamage = 2;
  if ( this->m_flDelay <= 0.0 )
    this->m_flDelay = 0.1;
}


// CPointHurt::HurtThink  (line 100, @0x0000000002351f20, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CEntityHandle::operator CEntityInstance*, CTakeDamageInfo::CTakeDamageInfo, CGameEntitySystem::FindEntityByName, CBaseEntity::GetAbsOrigin, GuessDamageForce, CBaseEntity::TakeDamage, RadiusDamage, CTakeDamageInfo::~CTakeDamageInfo, CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, _Unwind_Resume
// callers: CPointHurt::InputHurt
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointHurt::HurtThink(CPointHurt *const this)
{
  CBaseEntity *v2; // rbx
  CBaseEntity *v3; // rax
  const CBaseEntity *EntityByName; // rax
  const Vector *AbsOrigin; // r15
  const Vector *v6; // r13
  const Vector *v7; // rax
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // r8
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  float m_flRadius; // r13d
  const Vector *v15; // rbx
  double v16; // xmm0_8
  double v17; // xmm1_8
  Vector v18; // [rsp+10h] [rbp-D0h] BYREF
  CTakeDamageInfo info; // [rsp+20h] [rbp-C0h] BYREF

  if ( this->m_strTarget.u.m_Id != 0 )
  {
    v2 = 0;
    v3 = CEntityHandle::operator CEntityInstance *(&this->m_pActivator);
    CTakeDamageInfo::CTakeDamageInfo(&info, this, v3, this->m_nDamage, this->m_bitsDamageType, 0);
    while ( 1 )
    {
      m_Index = this->m_pActivator.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_pActivator.m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[this->m_pActivator.m_Index & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            m_pInstance = v13->m_pInstance;
        }
      }
      *&v18.x = this->m_strTarget.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v2, &v18, this, m_pInstance, 0, 0);
      v2 = EntityByName;
      if ( EntityByName == 0 )
        break;
      AbsOrigin = CBaseEntity::GetAbsOrigin(EntityByName);
      v6 = CBaseEntity::GetAbsOrigin(this);
      v7 = CBaseEntity::GetAbsOrigin(v2);
      v8 = v7->y - v6->y;
      v9 = v7->x - v6->x;
      v18.z = v7->z - v6->z;
      v18.y = v8;
      v18.x = v9;
      GuessDamageForce(&info, &v18, AbsOrigin, 1.0);
      CBaseEntity::TakeDamage(v2, &info);
    }
  }
  else
  {
    m_flRadius = this->m_flRadius;
    v15 = CBaseEntity::GetAbsOrigin(this);
    CTakeDamageInfo::CTakeDamageInfo(&info, this, this, this->m_nDamage, this->m_bitsDamageType, 0);
    RadiusDamage(&info, v15, m_flRadius, 0, 0, 0);
  }
  CTakeDamageInfo::~CTakeDamageInfo(&info);
  *&v16 = CGlobalVarsBase::curtime(gpGlobals, 0) + this->m_flDelay;
  CBaseEntity::SetNextThink(this, v16, v17, 0);
}


// CPointHurt::InputTurnOn  (line 125, @0x000000000234ef10, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, curtime, operator=
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CPointHurt::HurtThink(void)
void __fastcall CPointHurt::InputTurnOn(CPointHurt *const this, inputdata_t *const data)
{
  double v4; // xmm1_8
  CGlobalVars *v5; // r12
  double v6; // xmm0_8
  CEntityIdentity *m_pEntity; // rdx
  int v8; // eax
  __int16 v9; // cx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::ThinkSet(this, CPointHurt::HurtThink, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v6) = 0;
    *&v6 = v5->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v6 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v6, v4, 0);
  if ( data->pActivator != 0 && (m_pEntity = data->pActivator->m_pEntity) != 0 )
  {
    v8 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pActivator.m_Index) = v9 | this->m_pActivator.m_Index & 0x8000;
    this->m_pActivator.m_Index = (v8 << 15) | this->m_pActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_pActivator.m_Index = -1;
  }
}


// CPointHurt::InputTurnOff  (line 137, @0x000000000234b910, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::ThinkSet
void __fastcall CPointHurt::InputTurnOff(CPointHurt *const this, inputdata_t *const data)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx

  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  if ( data->pActivator != 0 && (m_pEntity = data->pActivator->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v6 = 0x7FFF;
    else
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pActivator.m_Index) = v6 | this->m_pActivator.m_Index & 0x8000;
    this->m_pActivator.m_Index = (v5 << 15) | this->m_pActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_pActivator.m_Index = -1;
  }
}


// CPointHurt::InputToggle  (line 147, @0x000000000234d8d0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CBaseEntity::ThinkSet
// globals: CPointHurt::HurtThink(void)
void __fastcall CPointHurt::InputToggle(CPointHurt *const this, inputdata_t *const data)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( data->pActivator != 0 && (m_pEntity = data->pActivator->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v4 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pActivator.m_Index) = v4 | this->m_pActivator.m_Index & 0x8000;
    this->m_pActivator.m_Index = (v3 << 15) | this->m_pActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_pActivator.m_Index = -1;
  }
  if ( this->m_think.__pfn != CPointHurt::HurtThink || this->m_think.__delta != 0 )
    CBaseEntity::ThinkSet(this, CPointHurt::HurtThink, 0.0, 0, 0);
  else
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CPointHurt::InputHurt  (line 164, @0x0000000002352170, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// calls: CPointHurt::HurtThink
void __fastcall CPointHurt::InputHurt(CPointHurt *const this, inputdata_t *const data)
{
  CEntityIdentity *m_pEntity; // rdx
  int v3; // eax
  __int16 v4; // cx

  if ( data->pActivator != 0 && (m_pEntity = data->pActivator->m_pEntity) != 0 )
  {
    v3 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v4 = 0x7FFF;
    else
      v4 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_pActivator.m_Index) = v4 | this->m_pActivator.m_Index & 0x8000;
    this->m_pActivator.m_Index = (v3 << 15) | this->m_pActivator.m_Index & 0x7FFF;
    CPointHurt::HurtThink(this);
  }
  else
  {
    this->m_pActivator.m_Index = -1;
    CPointHurt::HurtThink(this);
  }
}


