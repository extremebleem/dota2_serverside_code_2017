// Reconstructed from DWARF by pahole; not original source.

// src/game/server/info_overlay_accessor.cpp:17
class CInfoOverlayAccessor : public CPointEntity {
	class NetworkVar_m_iOverlayID {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

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
	CInfoOverlayAccessor(CInfoOverlayAccessor &);
	CInfoOverlayAccessor(CInfoOverlayAccessor &);
	CInfoOverlayAccessor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual int UpdateTransmitState();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CInfoOverlayAccessor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[64] UpdateTransmitState
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/info_overlay_accessor.cpp:38
class C_CInfoOverlayAccessor_MapInstall {
	C_CInfoOverlayAccessor_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CInfoOverlayAccessor::~CInfoOverlayAccessor  (line 17, @0x000000000227c230, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoOverlayAccessor::~CInfoOverlayAccessor(CInfoOverlayAccessor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoOverlayAccessor::~CInfoOverlayAccessor  (line 17, @0x000000000227c250, libserver.so)  // inlines: ~CInfoOverlayAccessor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoOverlayAccessor::~CInfoOverlayAccessor(CInfoOverlayAccessor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoOverlayAccessor::GetEntityClass  (line 19, @0x000000000227b380, libserver.so)
CEntityClass *__cdecl CInfoOverlayAccessor::GetEntityClass()
{
  return g_pEntityCInfoOverlayAccessorClass;
}


// CInfoOverlayAccessor::Schema_DynamicBinding  (line 19, @0x000000000227b390, libserver.so)
// globals: CInfoOverlayAccessor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoOverlayAccessor::Schema_DynamicBinding(
        const CInfoOverlayAccessor *const this)
{
  return CInfoOverlayAccessor::s_pSchemaBinding;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 19, @0x000000000227b3a0, libserver.so)
// globals: CInfoOverlayAccessor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  return CInfoOverlayAccessor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::DestructInstance  (line 19, @0x000000000227b3b0, libserver.so)  // inlines: Destruct<CInfoOverlayAccessor>
void __fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::DestructInstance(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::FreeInstance  (line 19, @0x000000000227b3d0, libserver.so)
void __fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::FreeInstance(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::CanAllocate  (line 19, @0x000000000227b3f0, libserver.so)
bool __fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::CanAllocate(
        const CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 19, @0x000000000227b400, libserver.so)
// globals: CInfoOverlayAccessor::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  return CInfoOverlayAccessor::s_pSchemaBinding;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::AllocateInstance  (line 19, @0x000000000227be30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::AllocateInstance(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::ConstructInstance  (line 19, @0x000000000227c010, libserver.so)  // inlines: CInfoOverlayAccessor, CNetworkVarBase, CPointEntity, Construct<CInfoOverlayAccessor>, EnsureValidValue<unsigned int>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::ConstructInstance(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 0;
    *p = &off_4052EB0;
  }
  return p;
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000227cfb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 19, @0x000000000227cfd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoOverlayAccessor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoOverlayAccessor::GetEntityClassInternal  (line 19, @0x000000000227ef60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "info_overlay_accessor", "CInfoOverlayAccessor"
// globals: `guard variable for'CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass, CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo, CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo
CEntityClass *__cdecl CInfoOverlayAccessor::GetEntityClassInternal()
{
  CInfoOverlayAccessor::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass) != 0 )
  {
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass._vptr_CEntityClass = off_3F79390;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_designerName.u.m_Id = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_ComponentOffsets.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_AllHelpers.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classInputs.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classOutputs.m_Size = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_requiredEHandle.m_Index = -1;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_hNetworkSerializer = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pBaseClassInfo = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pClassInfo = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_flags = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_nAllHelpersFlags = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pScriptClassDesc = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pInputs = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_nInputCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pOutputs = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_nOutputCount = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pGameClass = 0;
    CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass._vptr_CEntityClass = off_4052E30;
    __cxa_guard_release(&`guard variable for'CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass);
    __cxa_atexit(
      CInfoOverlayAccessor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoOverlayAccessorClass != 0 )
    return &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
  if ( `guard variable for'CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo,
      "CInfoOverlayAccessor",
      "info_overlay_accessor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo);
  }
  CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pClassInfo = &CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo;
  CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pBaseClassInfo = CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoOverlayAccessorClass = &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
  CInfoOverlayAccessor::GetEntityClassInfo(void)::g_EntityCInfoOverlayAccessorClassInfo.m_pClass = &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
  CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoOverlayAccessorClass->m_pComponentOverrides = 0;
  return &CInfoOverlayAccessor::GetEntityClassInternal(void)::g_EntityCInfoOverlayAccessorClass;
}


// CInfoOverlayAccessor::YouForgotToImplementOrDeclareServerClass  (line 38, @0x00000000022543c0, libserver.so)
int __fastcall CInfoOverlayAccessor::YouForgotToImplementOrDeclareServerClass(CInfoOverlayAccessor *const this)
{
  return 0;
}


// CInfoOverlayAccessor::GetServerClass  (line 38, @0x000000000225d2a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CInfoOverlayAccessor::GetServerClass(CInfoOverlayAccessor *const this)
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


// CInfoOverlayAccessor::GetDataDescMap  (line 41, @0x00000000022543d0, libserver.so)
// globals: CInfoOverlayAccessor::m_DataMap
datamap_t *__fastcall CInfoOverlayAccessor::GetDataDescMap(CInfoOverlayAccessor *const this)
{
  return &CInfoOverlayAccessor::m_DataMap;
}


// CInfoOverlayAccessor::AddDatadescMetadataKeys  (line 41, @0x000000000226ab70, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CInfoOverlayAccessor::GetEntityClass(void)
void __fastcall CInfoOverlayAccessor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CInfoOverlayAccessor::GetEntityClass);
}


// CInfoOverlayAccessor::GetBaseMap  (line 41, @0x000000000226ab90, libserver.so)
datamap_t *__cdecl CInfoOverlayAccessor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CInfoOverlayAccessor>  (line 41, @0x000000000226aba0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CInfoOverlayAccessor"
// globals: `guard variable for'DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder, CInfoOverlayAccessor::GetEntityClass(void), CInfoOverlayAccessor::m_DataMap, DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder) != 0 )
  {
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_pszBase = "CInfoOverlayAccessor";
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::nameHolder,
      &_dso_handle);
  }
  CInfoOverlayAccessor::m_DataMap.dataNumFields = 1;
  CInfoOverlayAccessor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CInfoOverlayAccessor::m_DataMap.dataDesc = &DataMapInit<CInfoOverlayAccessor>(CInfoOverlayAccessor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CInfoOverlayAccessor::m_DataMap, CInfoOverlayAccessor::GetEntityClass);
  return &CInfoOverlayAccessor::m_DataMap;
}


// CInfoOverlayAccessor::UpdateTransmitState  (line 46, @0x0000000002254600, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CInfoOverlayAccessor::UpdateTransmitState(CInfoOverlayAccessor *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


