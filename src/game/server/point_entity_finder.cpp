// Reconstructed from DWARF by pahole; not original source.

// src/game/server/point_entity_finder.cpp:24
class CPointEntityFinder : public CBaseEntity {
public:

private:

	EHANDLE m_hEntity;  // +0x308

	string_t m_iFilterName;  // +0x310

	string_t m_iRefName;  // +0x320
	EHANDLE m_hReference;  // +0x328
	COutputEvent m_OnFoundEntity;  // +0x330

	static datamap_t m_DataMap;
	typedef CBaseEntity BaseClass;

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
	CPointEntityFinder(CPointEntityFinder &);
	CPointEntityFinder(CPointEntityFinder &);
	CPointEntityFinder();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	void FindEntity();
	void FindByDistance();
	void FindByRandom();
	void InputFindEntity(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CPointEntityFinder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[34] GetDataDescMap
	// sizeof = 840
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointEntityFinder::~CPointEntityFinder  (line 24, @0x000000000233b8a0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPointEntityFinder::~CPointEntityFinder(CPointEntityFinder *const this)
{
  this->_vptr_IHandleEntity = &off_408CD10;
  CBaseEntity::~CBaseEntity(this);
}


// CPointEntityFinder::~CPointEntityFinder  (line 24, @0x000000000233b8c0, libserver.so)  // inlines: ~CPointEntityFinder
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPointEntityFinder::~CPointEntityFinder(CPointEntityFinder *const this)
{
  this->_vptr_IHandleEntity = &off_408CD10;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointEntityFinder::GetEntityClass  (line 26, @0x0000000002339cf0, libserver.so)
CEntityClass *__cdecl CPointEntityFinder::GetEntityClass()
{
  return g_pEntityCPointEntityFinderClass;
}


// CPointEntityFinder::Schema_DynamicBinding  (line 26, @0x0000000002339d00, libserver.so)
// globals: CPointEntityFinder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntityFinder::Schema_DynamicBinding(
        const CPointEntityFinder *const this)
{
  return CPointEntityFinder::s_pSchemaBinding;
}


// CPointEntityFinder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 26, @0x0000000002339d10, libserver.so)
// globals: CPointEntityFinder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointEntityFinder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  return CPointEntityFinder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointEntityFinder::CEntityInstanceEntityClass::DestructInstance  (line 26, @0x0000000002339d20, libserver.so)  // inlines: Destruct<CPointEntityFinder>
void __fastcall CPointEntityFinder::CEntityInstanceEntityClass::DestructInstance(
        CPointEntityFinder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointEntityFinder::CEntityInstanceEntityClass::FreeInstance  (line 26, @0x0000000002339d40, libserver.so)
void __fastcall CPointEntityFinder::CEntityInstanceEntityClass::FreeInstance(
        CPointEntityFinder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointEntityFinder::CEntityInstanceEntityClass::CanAllocate  (line 26, @0x0000000002339d60, libserver.so)
bool __fastcall CPointEntityFinder::CEntityInstanceEntityClass::CanAllocate(
        const CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointEntityFinder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 26, @0x0000000002339d70, libserver.so)
// globals: CPointEntityFinder::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointEntityFinder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  return CPointEntityFinder::s_pSchemaBinding;
}


// CPointEntityFinder::CEntityInstanceEntityClass::AllocateInstance  (line 26, @0x000000000233b1a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointEntityFinder::CEntityInstanceEntityClass::AllocateInstance(
        CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 840);
  memset(v1, 0, 0x348u);
  return v1;
}


// CPointEntityFinder::CEntityInstanceEntityClass::ConstructInstance  (line 26, @0x000000000233b520, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CPointEntityFinder, CUtlSymbolLarge, Construct<CPointEntityFinder>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPointEntityFinder::CEntityInstanceEntityClass::ConstructInstance(
        CPointEntityFinder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_408CD10;
    *(p + 98) = 0;
    *(p + 198) = -1;
    *(p + 100) = 0;
    *(p + 202) = -1;
    *(p + 102) = off_3F7C190;
  }
  return p;
}


// CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x000000000233cb20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 26, @0x000000000233cb40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointEntityFinder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointEntityFinder::GetEntityClassInternal  (line 26, @0x0000000002343300, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_entity_finder", "CPointEntityFinder"
// globals: `guard variable for'CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass, CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo, CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo
CEntityClass *__cdecl CPointEntityFinder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass) != 0 )
  {
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_designerName.u.m_Id = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass._vptr_CEntityClass = off_3F79390;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_ComponentOffsets.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_AllHelpers.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classInputs.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classOutputs.m_Size = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_requiredEHandle.m_Index = -1;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_hNetworkSerializer = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pBaseClassInfo = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pClassInfo = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_flags = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_nAllHelpersFlags = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pScriptClassDesc = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pInputs = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_nInputCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pOutputs = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_nOutputCount = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pGameClass = 0;
    CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass._vptr_CEntityClass = off_408CC90;
    __cxa_guard_release(&`guard variable for'CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass);
    __cxa_atexit(
      CPointEntityFinder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointEntityFinderClass != 0 )
    return &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass;
  if ( `guard variable for'CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo,
      "CPointEntityFinder",
      "point_entity_finder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo);
  }
  CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pClassInfo = &CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo;
  CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pBaseClassInfo = CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo.m_pBaseClassInfo;
  g_pEntityCPointEntityFinderClass = &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass;
  CPointEntityFinder::GetEntityClassInfo(void)::g_EntityCPointEntityFinderClassInfo.m_pClass = &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass;
  CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPointEntityFinderClass->m_pComponentOverrides = 0;
  return &CPointEntityFinder::GetEntityClassInternal(void)::g_EntityCPointEntityFinderClass;
}


// CPointEntityFinder::GetDataDescMap  (line 53, @0x000000000231ec40, libserver.so)
// globals: CPointEntityFinder::m_DataMap
datamap_t *__fastcall CPointEntityFinder::GetDataDescMap(CPointEntityFinder *const this)
{
  return &CPointEntityFinder::m_DataMap;
}


// CPointEntityFinder::AddDatadescMetadataKeys  (line 53, @0x0000000002326a70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointEntityFinder::GetEntityClass(void)
void __fastcall CPointEntityFinder::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointEntityFinder::GetEntityClass);
}


// CPointEntityFinder::GetBaseMap  (line 53, @0x0000000002326a90, libserver.so)
datamap_t *__cdecl CPointEntityFinder::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CPointEntityFinder>  (line 53, @0x0000000002326aa0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointEntityFinder"
// globals: `guard variable for'DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder, `guard variable for'DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc, CPointEntityFinder::GetEntityClass(void), CPointEntityFinder::m_DataMap, DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointEntityFinder>(CPointEntityFinder *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder) != 0 )
  {
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_pszBase = "CPointEntityFinder";
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::nameHolder,
      &_dso_handle);
  }
  CPointEntityFinder::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc) != 0 )
  {
    DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc);
  }
  CPointEntityFinder::m_DataMap.dataNumFields = 8;
  CPointEntityFinder::m_DataMap.dataDesc = &DataMapInit<CPointEntityFinder>(CPointEntityFinder *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointEntityFinder::m_DataMap, CPointEntityFinder::GetEntityClass);
  return &CPointEntityFinder::m_DataMap;
}


// CPointEntityFinder::Activate  (line 72, @0x000000000231efe0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=
// calls: CBaseEntity::Activate, CGameEntitySystem::FindEntityByName, __dynamic_cast
void __fastcall CPointEntityFinder::Activate(CPointEntityFinder *const this, ActivateType_t activateType)
{
  CBaseEntity *EntityByName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_iFilterName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iFilterName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0
      && (v5 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseFilter, 0)) != 0
      && (v6 = v5[1]) != 0 )
    {
      v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
      v8 = 0x7FFF;
      if ( *(v6 + 16) != -1 )
        v8 = *(v6 + 16) & 0x7FFF;
      LOWORD(this->m_hFilter.m_Index) = v8 | this->m_hFilter.m_Index & 0x8000;
      this->m_hFilter.m_Index = (v7 << 15) | this->m_hFilter.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hFilter.m_Index = -1;
    }
  }
  CBaseEntity::Activate(this, activateType);
}


// CPointEntityFinder::FindEntity  (line 84, @0x00000000023359d0, libserver.so)  // inlines: CUtlSymbolLarge, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=
// calls: CPointEntityFinder::FindByDistance, CGameEntitySystem::FindEntityByName, CPointEntityFinder::FindByRandom
// callers: CPointEntityFinder::InputFindEntity
void __fastcall CPointEntityFinder::FindEntity(CPointEntityFinder *const this)
{
  EntFinderMethod_t m_FindMethod; // eax
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  string_t iszName; // [rsp+10h] [rbp-20h] BYREF

  if ( this->m_iRefName.u.m_Id != 0 )
  {
    iszName.u.m_Id = this->m_iRefName.u.m_Id;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, &iszName, this, 0, 0, 0);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hReference.m_Index) = v6 | this->m_hReference.m_Index & 0x8000;
      this->m_hReference.m_Index = (v5 << 15) | this->m_hReference.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hReference.m_Index = -1;
    }
  }
  m_FindMethod = this->m_FindMethod;
  if ( m_FindMethod == EntFinderMethod_t::ENT_FIND_METHOD_FARTHEST )
  {
LABEL_5:
    CPointEntityFinder::FindByDistance(this);
    return;
  }
  if ( m_FindMethod != EntFinderMethod_t::ENT_FIND_METHOD_RANDOM )
  {
    if ( m_FindMethod != EntFinderMethod_t::ENT_FIND_METHOD_NEAREST )
      return;
    goto LABEL_5;
  }
  CPointEntityFinder::FindByRandom(this);
}


// CPointEntityFinder::FindByDistance  (line 107, @0x0000000002326bc0, libserver.so)  // inlines: FStrEq, FirstEnt, Get, GetClassNameAsCStr, GetClassname, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LengthSqr, LookupEntity, Set, String, VectorSubtract, _V_strcmp, operator CEntityInstance*, operator bool, operator-, operator=, operator==<CBaseEntity>
// calls: CEntityHandle::operator CEntityInstance*, CGameEntitySystem::NextEnt, CBaseFilter::PassesFilter, CBaseEntity::GetAbsOrigin
// callers: CPointEntityFinder::FindEntity
// strings: "soundent", "bodyque", "ai_network"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointEntityFinder::FindByDistance(CPointEntityFinder *const this)
{
  CHandle<CBaseFilter> *p_m_hFilter; // rdi
  CPointEntityFinder *Ent; // r15
  const char *m_pAsString; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  const Vector *v8; // rax
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  const Vector *v15; // rax
  const Vector *v16; // rax
  float x; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  EntFinderMethod_t m_FindMethod; // eax
  float v21; // xmm0_4
  CEntityIdentity *v22; // rdx
  int v23; // eax
  __int16 v24; // cx
  CGameEntitySystem *v25; // rdi
  const Vector *AbsOrigin; // rax
  CBaseFilter *pFilter; // [rsp+8h] [rbp-48h]
  float flBestDist; // [rsp+10h] [rbp-40h]
  float z; // [rsp+14h] [rbp-3Ch]
  float y; // [rsp+18h] [rbp-38h]
  float vecStart; // [rsp+1Ch] [rbp-34h]

  p_m_hFilter = &this->m_hFilter;
  p_m_hFilter[-4].m_Index = -1;
  pFilter = CEntityHandle::operator CEntityInstance *(p_m_hFilter);
  flBestDist = 0.0;
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
  while ( Ent != 0 )
  {
    if ( (*(Ent->_vptr_IHandleEntity + 143))(Ent) != 0 )
      goto LABEL_28;
    m_pAsString = Ent->m_pEntity->m_designerName.u.m_pAsString;
    if ( m_pAsString != 0
      && (m_pAsString == "soundent"
       || strcmp(Ent->m_pEntity->m_designerName.u.m_pAsString, "soundent") == 0
       || m_pAsString == "player_manager"
       || strcmp(Ent->m_pEntity->m_designerName.u.m_pAsString, "player_manager") == 0
       || m_pAsString == "bodyque"
       || strcmp(Ent->m_pEntity->m_designerName.u.m_pAsString, "bodyque") == 0
       || m_pAsString == "ai_network"
       || strcmp(Ent->m_pEntity->m_designerName.u.m_pAsString, "ai_network") == 0) )
    {
      goto LABEL_28;
    }
    if ( this == Ent || pFilter != 0 && !CBaseFilter::PassesFilter(pFilter, this, Ent) )
      goto LABEL_28;
    m_Index = this->m_hReference.m_Index;
    if ( m_Index + 2 > 1
      && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hReference.m_Index) >> 9) & 0x3F]) != 0
      && (v7 = &v6[this->m_hReference.m_Index & 0x1FF]) != 0
      && m_Index == v7->m_EHandle.m_Index )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7->m_pInstance);
      vecStart = AbsOrigin->x;
      y = AbsOrigin->y;
      z = AbsOrigin->z;
    }
    else
    {
      v8 = CBaseEntity::GetAbsOrigin(this);
      vecStart = v8->x;
      y = v8->y;
      z = v8->z;
    }
    v9 = this->m_hEntity.m_Index;
    if ( v9 + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntity.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[this->m_hEntity.m_Index & 0x1FF]) == 0
      || v9 != v11->m_EHandle.m_Index
      || v11->m_pInstance == 0 )
    {
      m_pEntity = Ent->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hEntity.m_Index) = v14 | this->m_hEntity.m_Index & 0x8000;
        this->m_hEntity.m_Index = (v13 << 15) | this->m_hEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hEntity.m_Index = -1;
      }
      v15 = CBaseEntity::GetAbsOrigin(Ent);
      flBestDist = ((v15->z - z) * (v15->z - z))
                 + (((v15->y - y) * (v15->y - y)) + ((v15->x - vecStart) * (v15->x - vecStart)));
    }
    v16 = CBaseEntity::GetAbsOrigin(Ent);
    x = v16->x;
    v18 = v16->y;
    v19 = v16->z;
    m_FindMethod = this->m_FindMethod;
    v21 = (((x - vecStart) * (x - vecStart)) + ((v18 - y) * (v18 - y))) + ((v19 - z) * (v19 - z));
    if ( m_FindMethod != EntFinderMethod_t::ENT_FIND_METHOD_NEAREST )
    {
      if ( m_FindMethod != EntFinderMethod_t::ENT_FIND_METHOD_FARTHEST || v21 <= flBestDist )
        goto LABEL_28;
    }
    else if ( flBestDist <= v21 )
    {
      goto LABEL_28;
    }
    v22 = Ent->m_pEntity;
    if ( v22 == 0 )
    {
      v25 = g_pGameEntitySystem;
      flBestDist = v21;
      this->m_hEntity.m_Index = -1;
      Ent = CGameEntitySystem::NextEnt(v25, Ent);
      continue;
    }
    v23 = (v22->m_EHandle.m_Index >> 15) - (v22->m_flags & 1);
    v24 = 0x7FFF;
    if ( v22->m_EHandle.m_Index != -1 )
      v24 = v22->m_EHandle.m_Index & 0x7FFF;
    flBestDist = v21;
    LOWORD(this->m_hEntity.m_Index) = v24 | this->m_hEntity.m_Index & 0x8000;
    this->m_hEntity.m_Index = (v23 << 15) | this->m_hEntity.m_Index & 0x7FFF;
LABEL_28:
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, Ent);
  }
}


// CPointEntityFinder::FindByRandom  (line 178, @0x00000000023357e0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseEntity*>, Element, FirstEnt, Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GrowMemory, Purge, RemoveAll, Set, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CGameEntitySystem::NextEnt, CBaseFilter::PassesFilter, CUtlMemory<CBaseEntity*, int>::Grow, RandomInt, CUtlMemory<CBaseEntity*, int>::Purge, _Unwind_Resume
// callers: CPointEntityFinder::FindEntity
void __fastcall CPointEntityFinder::FindByRandom(CPointEntityFinder *const this)
{
  CHandle<CBaseFilter> *p_m_hFilter; // rdi
  CBaseFilter *v3; // r12
  CBaseEntity *Ent; // rbx
  CBaseEntity **v5; // rax
  __int64 m_Size; // r13
  CBaseEntity *v7; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v9; // eax
  __int16 v10; // cx
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > ValidEnts; // [rsp+10h] [rbp-50h] BYREF

  p_m_hFilter = &this->m_hFilter;
  p_m_hFilter[-4].m_Index = -1;
  v3 = CEntityHandle::operator CEntityInstance *(p_m_hFilter);
  ValidEnts.m_Size = 0;
  ValidEnts.m_Memory.m_pMemory = 0;
  ValidEnts.m_Memory.m_nAllocationCount = 0;
  ValidEnts.m_Memory.m_nGrowSize = 0;
  Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, 0);
  do
  {
    if ( v3 != 0 && CBaseFilter::PassesFilter(v3, this, Ent) )
    {
      m_Size = ValidEnts.m_Size;
      if ( ValidEnts.m_Size == ValidEnts.m_Memory.m_nAllocationCount )
        CUtlMemory<CBaseEntity *,int>::Grow(&ValidEnts.m_Memory, 1);
      ++ValidEnts.m_Size;
      v5 = &ValidEnts.m_Memory.m_pMemory[m_Size];
      if ( v5 != 0 )
        *v5 = Ent;
    }
    Ent = CGameEntitySystem::NextEnt(g_pGameEntitySystem, Ent);
  }
  while ( Ent != 0 );
  if ( ValidEnts.m_Size != 0 )
  {
    v7 = ValidEnts.m_Memory.m_pMemory[RandomInt(0, (ValidEnts.m_Size - 1))];
    if ( v7 != 0 && (m_pEntity = v7->m_pEntity) != 0 )
    {
      v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v10 = 0x7FFF;
      else
        v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hEntity.m_Index) = v10 | this->m_hEntity.m_Index & 0x8000;
      this->m_hEntity.m_Index = (v9 << 15) | this->m_hEntity.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hEntity.m_Index = -1;
    }
  }
  if ( (ValidEnts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CBaseEntity *,int>::Purge(&ValidEnts.m_Memory);
    if ( (ValidEnts.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&ValidEnts.m_Memory);
  }
}


// CPointEntityFinder::InputFindEntity  (line 204, @0x0000000002335ad0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CVariantBase
// calls: CPointEntityFinder::FindEntity, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointEntityFinder::InputFindEntity(CPointEntityFinder *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CBaseEntity *pActivator; // rsi
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  CPointEntityFinder::FindEntity(this);
  m_Index = this->m_hEntity.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hEntity.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[this->m_hEntity.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  pActivator = inputdata->pActivator;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFoundEntity, pActivator, m_pInstance, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


