// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/point_bonusmaps_accessor.cpp:29
class CPointBonusMapsAccessor : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_String_tFileName;  // +0x308
	string_t m_String_tMapName;  // +0x310
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
	CPointBonusMapsAccessor(CPointBonusMapsAccessor &);
	CPointBonusMapsAccessor(CPointBonusMapsAccessor &);
	CPointBonusMapsAccessor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Activate(ActivateType_t);
	void InputUnlock(inputdata_t &);
	void InputComplete(inputdata_t &);
	void InputSave(inputdata_t &);
	virtual ~CPointBonusMapsAccessor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// sizeof = 800
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointBonusMapsAccessor::~CPointBonusMapsAccessor  (line 29, @0x000000000233b670, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointBonusMapsAccessor::~CPointBonusMapsAccessor(CPointBonusMapsAccessor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CPointBonusMapsAccessor::~CPointBonusMapsAccessor  (line 29, @0x000000000233b690, libserver.so)  // inlines: ~CPointBonusMapsAccessor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointBonusMapsAccessor::~CPointBonusMapsAccessor(CPointBonusMapsAccessor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointBonusMapsAccessor::GetEntityClass  (line 31, @0x0000000002339c60, libserver.so)
CEntityClass *__cdecl CPointBonusMapsAccessor::GetEntityClass()
{
  return g_pEntityCPointBonusMapsAccessorClass;
}


// CPointBonusMapsAccessor::Schema_DynamicBinding  (line 31, @0x0000000002339c70, libserver.so)
// globals: CPointBonusMapsAccessor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointBonusMapsAccessor::Schema_DynamicBinding(
        const CPointBonusMapsAccessor *const this)
{
  return CPointBonusMapsAccessor::s_pSchemaBinding;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002339c80, libserver.so)
// globals: CPointBonusMapsAccessor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  return CPointBonusMapsAccessor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002339c90, libserver.so)  // inlines: Destruct<CPointBonusMapsAccessor>
void __fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::DestructInstance(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002339cb0, libserver.so)
void __fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::FreeInstance(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002339cd0, libserver.so)
bool __fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::CanAllocate(
        const CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002339ce0, libserver.so)
// globals: CPointBonusMapsAccessor::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  return CPointBonusMapsAccessor::s_pSchemaBinding;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x000000000233b160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::AllocateInstance(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x000000000233b3e0, libserver.so)  // inlines: CPointBonusMapsAccessor, CPointEntity, CUtlSymbolLarge, Construct<CPointBonusMapsAccessor>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::ConstructInstance(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_408C4B0;
    *(p + 98) = 0;
  }
  return p;
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x000000000233c8a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x000000000233c8c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointBonusMapsAccessor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointBonusMapsAccessor::GetEntityClassInternal  (line 31, @0x0000000002342910, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_bonusmaps_accessor", "CPointBonusMapsAccessor"
// globals: `guard variable for'CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass, CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo, CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo
CEntityClass *__cdecl CPointBonusMapsAccessor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass) != 0 )
  {
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_designerName.u.m_Id = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass._vptr_CEntityClass = off_3F79390;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_ComponentOffsets.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_AllHelpers.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classInputs.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classOutputs.m_Size = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_requiredEHandle.m_Index = -1;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_hNetworkSerializer = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pBaseClassInfo = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pClassInfo = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_flags = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_nAllHelpersFlags = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pScriptClassDesc = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pInputs = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_nInputCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pOutputs = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_nOutputCount = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pGameClass = 0;
    CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass._vptr_CEntityClass = off_408C430;
    __cxa_guard_release(&`guard variable for'CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass);
    __cxa_atexit(
      CPointBonusMapsAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointBonusMapsAccessorClass != 0 )
    return &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass;
  if ( `guard variable for'CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo,
      "CPointBonusMapsAccessor",
      "point_bonusmaps_accessor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo);
  }
  CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pClassInfo = &CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo;
  CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pBaseClassInfo = CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo.m_pBaseClassInfo;
  g_pEntityCPointBonusMapsAccessorClass = &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass;
  CPointBonusMapsAccessor::GetEntityClassInfo(void)::g_EntityCPointBonusMapsAccessorClassInfo.m_pClass = &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass;
  CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointBonusMapsAccessorClass->m_pComponentOverrides = 0;
  return &CPointBonusMapsAccessor::GetEntityClassInternal(void)::g_EntityCPointBonusMapsAccessorClass;
}


// CPointBonusMapsAccessor::GetDataDescMap  (line 47, @0x000000000231ec00, libserver.so)
// globals: CPointBonusMapsAccessor::m_DataMap
datamap_t *__fastcall CPointBonusMapsAccessor::GetDataDescMap(CPointBonusMapsAccessor *const this)
{
  return &CPointBonusMapsAccessor::m_DataMap;
}


// CPointBonusMapsAccessor::AddDatadescMetadataKeys  (line 47, @0x00000000023266f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointBonusMapsAccessor::GetEntityClass(void)
void __fastcall CPointBonusMapsAccessor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointBonusMapsAccessor::GetEntityClass);
}


// CPointBonusMapsAccessor::GetBaseMap  (line 47, @0x0000000002326710, libserver.so)
datamap_t *__cdecl CPointBonusMapsAccessor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CPointBonusMapsAccessor>  (line 47, @0x0000000002326720, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointBonusMapsAccessor"
// globals: `guard variable for'DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder, CPointBonusMapsAccessor::GetEntityClass(void), CPointBonusMapsAccessor::m_DataMap, DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder) != 0 )
  {
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_pszBase = "CPointBonusMapsAccessor";
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder.m_nLenBase = 23;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::nameHolder,
      &_dso_handle);
  }
  CPointBonusMapsAccessor::m_DataMap.dataNumFields = 6;
  CPointBonusMapsAccessor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CPointBonusMapsAccessor::m_DataMap.dataDesc = &DataMapInit<CPointBonusMapsAccessor>(CPointBonusMapsAccessor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointBonusMapsAccessor::m_DataMap, CPointBonusMapsAccessor::GetEntityClass);
  return &CPointBonusMapsAccessor::m_DataMap;
}


// CPointBonusMapsAccessor::Activate  (line 58, @0x000000000231efa0, libserver.so)
// calls: CBaseEntity::Activate
void __fastcall CPointBonusMapsAccessor::Activate(CPointBonusMapsAccessor *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
}


// CPointBonusMapsAccessor::InputUnlock  (line 71, @0x000000000231ec10, libserver.so)
void __fastcall CPointBonusMapsAccessor::InputUnlock(CPointBonusMapsAccessor *const this, inputdata_t *const inputdata)
{
  ;
}


// CPointBonusMapsAccessor::InputComplete  (line 79, @0x000000000231ec20, libserver.so)
void __fastcall CPointBonusMapsAccessor::InputComplete(
        CPointBonusMapsAccessor *const this,
        inputdata_t *const inputdata)
{
  ;
}


// CPointBonusMapsAccessor::InputSave  (line 99, @0x000000000231ec30, libserver.so)
void __fastcall CPointBonusMapsAccessor::InputSave(CPointBonusMapsAccessor *const this, inputdata_t *const inputdata)
{
  ;
}


// BonusMapChallengeUpdate  (line 109, @0x00000000023267f0, libserver.so)
void __fastcall BonusMapChallengeUpdate(
        const char *pchFileName,
        const char *pchMapName,
        const char *pchChallengeName,
        int iBest)
{
  ;
}


// BonusMapChallengeNames  (line 136, @0x0000000002326800, libserver.so)
void __fastcall BonusMapChallengeNames(char *pchFileName, char *pchMapName, char *pchChallengeName)
{
  ;
}


// BonusMapChallengeObjectives  (line 151, @0x0000000002326810, libserver.so)
void __fastcall BonusMapChallengeObjectives(int *const iBronze, int *const iSilver, int *const iGold)
{
  ;
}


