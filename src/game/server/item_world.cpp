// Reconstructed from DWARF by pahole; not original source.

// src/game/server/item_world.cpp:27
class CWorldItem : public CBaseAnimating {
public:

private:

	static datamap_t m_DataMap;

	int m_iType;  // +0x4c0
	typedef CBaseAnimating BaseClass;

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
	CWorldItem(CWorldItem &);
	CWorldItem(CWorldItem &);
	CWorldItem();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CWorldItem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// sizeof = 1224
};

// src/game/server/item_world.cpp:522
class CScriptItem : public CItem {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnPlayerPickup;  // +0x520
	typedef CItem BaseClass;

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
	CScriptItem(CScriptItem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CScriptItem();
	virtual ~CScriptItem();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnPhysGunPickup(CBasePlayer *, PhysGunPickup_t, int);
	virtual bool MyTouch(CBasePlayer *);
	virtual void HandleTouch(CBasePlayer *, CBaseEntity *);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[255] OnPhysGunPickup
	// vtable[253] MyTouch
	// vtable[254] HandleTouch
	// sizeof = 1344
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CWorldItem::~CWorldItem  (line 27, @0x000000000227c3a0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CWorldItem::~CWorldItem(CWorldItem *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CWorldItem::~CWorldItem  (line 27, @0x000000000227c3e0, libserver.so)  // inlines: ~CBaseAnimating, ~CWorldItem
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CWorldItem::~CWorldItem(CWorldItem *const this)
{
  CHitboxComponent *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CWorldItem::GetEntityClass  (line 29, @0x000000000227b500, libserver.so)
CEntityClass *__cdecl CWorldItem::GetEntityClass()
{
  return g_pEntityCWorldItemClass;
}


// CWorldItem::Schema_DynamicBinding  (line 29, @0x000000000227b510, libserver.so)
// globals: CWorldItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CWorldItem::Schema_DynamicBinding(const CWorldItem *const this)
{
  return CWorldItem::s_pSchemaBinding;
}


// CWorldItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x000000000227b520, libserver.so)
// globals: CWorldItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CWorldItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CWorldItem::CEntityInstanceEntityClass *const this)
{
  return CWorldItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CWorldItem::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x000000000227b530, libserver.so)  // inlines: Destruct<CWorldItem>
void __fastcall CWorldItem::CEntityInstanceEntityClass::DestructInstance(
        CWorldItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CWorldItem::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x000000000227b550, libserver.so)
void __fastcall CWorldItem::CEntityInstanceEntityClass::FreeInstance(
        CWorldItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CWorldItem::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x000000000227b570, libserver.so)
bool __fastcall CWorldItem::CEntityInstanceEntityClass::CanAllocate(
        const CWorldItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CWorldItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x000000000227b580, libserver.so)
// globals: CWorldItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CWorldItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CWorldItem::CEntityInstanceEntityClass *const this)
{
  return CWorldItem::s_pSchemaBinding;
}


// CWorldItem::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x000000000227beb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CWorldItem::CEntityInstanceEntityClass::AllocateInstance(
        CWorldItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1224);
  memset(v1, 0, 0x4C8u);
  return v1;
}


// CWorldItem::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x000000000227c320, libserver.so)  // inlines: CWorldItem, Construct<CWorldItem>
// calls: CBaseAnimating::CBaseAnimating
CEntityInstance *__fastcall CWorldItem::CEntityInstanceEntityClass::ConstructInstance(
        CWorldItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseAnimating::CBaseAnimating(p);
    *p = &off_4054F10;
  }
  return p;
}


// CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x000000000227d0f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWorldItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x000000000227d110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CWorldItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CWorldItem::GetEntityClassInternal  (line 29, @0x0000000002280260, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CBaseAnimating::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "world_items", "CWorldItem"
// globals: `guard variable for'CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass, CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo, CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo
CEntityClass *__cdecl CWorldItem::GetEntityClassInternal()
{
  CWorldItem::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass) != 0 )
  {
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass._vptr_CEntityClass = off_3F79390;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_designerName.u.m_Id = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_ComponentOffsets.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_AllHelpers.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classInputs.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classOutputs.m_Size = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_requiredEHandle.m_Index = -1;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_hNetworkSerializer = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pBaseClassInfo = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pClassInfo = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_flags = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_nAllHelpersFlags = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pScriptClassDesc = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pInputs = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_nInputCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pOutputs = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_nOutputCount = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pGameClass = 0;
    CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass._vptr_CEntityClass = off_4054E90;
    __cxa_guard_release(&`guard variable for'CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass);
    __cxa_atexit(
      CWorldItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCWorldItemClass != 0 )
    return &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
  if ( `guard variable for'CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo) != 0 )
  {
    EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo,
      "CWorldItem",
      "world_items",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo);
  }
  CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pClassInfo = &CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo;
  CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pBaseClassInfo = CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo.m_pBaseClassInfo;
  g_pEntityCWorldItemClass = &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
  CWorldItem::GetEntityClassInfo(void)::g_EntityCWorldItemClassInfo.m_pClass = &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
  CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCWorldItemClass->m_pComponentOverrides = 0;
  return &CWorldItem::GetEntityClassInternal(void)::g_EntityCWorldItemClass;
}


// CWorldItem::GetDataDescMap  (line 38, @0x00000000022544a0, libserver.so)
// globals: CWorldItem::m_DataMap
datamap_t *__fastcall CWorldItem::GetDataDescMap(CWorldItem *const this)
{
  return &CWorldItem::m_DataMap;
}


// CWorldItem::AddDatadescMetadataKeys  (line 38, @0x000000000226bc40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CWorldItem::GetEntityClass(void)
void __fastcall CWorldItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CWorldItem::GetEntityClass);
}


// CWorldItem::GetBaseMap  (line 38, @0x000000000226bc60, libserver.so)
datamap_t *__cdecl CWorldItem::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CWorldItem>  (line 38, @0x000000000226bc70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CWorldItem"
// globals: `guard variable for'DataMapInit<CWorldItem>(CWorldItem *)::nameHolder, CWorldItem::GetEntityClass(void), CWorldItem::m_DataMap, DataMapInit<CWorldItem>(CWorldItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CWorldItem>(CWorldItem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CWorldItem>(CWorldItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CWorldItem>(CWorldItem *)::nameHolder) != 0 )
  {
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_pszBase = "CWorldItem";
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CWorldItem>(CWorldItem *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CWorldItem>(CWorldItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CWorldItem>(CWorldItem *)::nameHolder,
      &_dso_handle);
  }
  CWorldItem::m_DataMap.dataNumFields = 1;
  CWorldItem::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  CWorldItem::m_DataMap.dataDesc = &DataMapInit<CWorldItem>(CWorldItem *)::dataDesc[1];
  AddDatadescMetadataKeys(&CWorldItem::m_DataMap, CWorldItem::GetEntityClass);
  return &CWorldItem::m_DataMap;
}


// CWorldItem::Spawn  (line 42, @0x00000000022586d0, libserver.so)  // inlines: AddSpawnFlags, CUtlSymbolLarge, ClearSpawnFlags, GetEntityName, NetworkStateChanged, Set, SetEntityName, operator=, operator=<int>, operator|=<int>
// calls: CBaseAnimating::Spawn, CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin, CBaseEntity::Create, CEntityIdentity::SetEntityName, UTIL_RemoveImmediate, Warning
// strings: "item_suit", "item_battery", "unable to create world_item %d\n"
void __fastcall CWorldItem::Spawn(CWorldItem *const this, const CEntityKeyValues *pKeyValues)
{
  int m_iType; // esi
  const QAngle *v4; // r12
  const Vector *v5; // rax
  CBaseEntity *v6; // r12
  CEntityIdentity *m_pEntity; // rdi
  unsigned int m_Value; // r13d
  const QAngle *LocalAngles; // r12
  const Vector *LocalOrigin; // rax
  string_t name; // [rsp+0h] [rbp-30h] BYREF

  CBaseAnimating::Spawn(this, pKeyValues);
  m_iType = this->m_iType;
  if ( m_iType == 44 )
  {
    LocalAngles = CBaseEntity::GetLocalAngles(this);
    LocalOrigin = CBaseEntity::GetLocalOrigin(this);
    v6 = CBaseEntity::Create("item_battery", LocalOrigin, LocalAngles, 0);
  }
  else
  {
    if ( m_iType != 45 )
    {
LABEL_12:
      Warning("unable to create world_item %d\n", m_iType);
      goto LABEL_9;
    }
    v4 = CBaseEntity::GetLocalAngles(this);
    v5 = CBaseEntity::GetLocalOrigin(this);
    v6 = CBaseEntity::Create("item_suit", v5, v4, 0);
  }
  if ( v6 == 0 )
  {
    m_iType = this->m_iType;
    goto LABEL_12;
  }
  m_pEntity = v6->m_pEntity;
  v6->m_target.u.m_Id = this->m_target.u.m_Id;
  name.u.m_Id = this->m_pEntity->m_name.u.m_Id;
  CEntityIdentity::SetEntityName(m_pEntity, &name);
  if ( v6->m_spawnflags.m_Value != 0 )
  {
    (*(v6->_vptr_IHandleEntity + 22))(v6, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6->m_spawnflags.m_Value = 0;
  }
  m_Value = this->m_spawnflags.m_Value;
  if ( m_Value != 0 )
  {
    (*(v6->_vptr_IHandleEntity + 22))(v6, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6->m_spawnflags.m_Value = m_Value;
  }
LABEL_9:
  UTIL_RemoveImmediate(this);
}


// CItem::GetDataDescMap  (line 74, @0x00000000022544b0, libserver.so)
// globals: CItem::m_DataMap
datamap_t *__fastcall CItem::GetDataDescMap(CItem *const this)
{
  return &CItem::m_DataMap;
}


// CItem::AddDatadescMetadataKeys  (line 74, @0x000000000226bd40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CItem::GetEntityClass(void)
void __fastcall CItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CItem::GetEntityClass);
}


// CItem::GetBaseMap  (line 74, @0x000000000226bd60, libserver.so)
datamap_t *__cdecl CItem::GetBaseMap()
{
  return &CBaseAnimating::m_DataMap;
}


// DataMapInit<CItem>  (line 74, @0x000000000226fc50, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CItem"
// globals: `guard variable for'DataMapInit<CItem>(CItem *)::nameHolder, `guard variable for'DataMapInit<CItem>(CItem *)::dataDesc, CItem::GetEntityClass(void), CItem::m_DataMap, DataMapInit<CItem>(CItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CItem>(CItem *a1)
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

  if ( `guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::nameHolder) != 0 )
  {
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CItem>(CItem *)::nameHolder.m_pszBase = "CItem";
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CItem>(CItem *)::nameHolder.m_nLenBase = 5;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CItem>(CItem *)::nameHolder,
      &_dso_handle);
  }
  CItem::m_DataMap.baseMap = &CBaseAnimating::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CItem>(CItem *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CItem>(CItem *)::nameHolder.m_pszBase), "ItemTouch");
    m_Size = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size == DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CItem>(CItem *)::dataDesc[4].fieldName = v2;
    v6 = operator new[](DataMapInit<CItem>(CItem *)::nameHolder.m_nLenBase + 12);
    strcpy(stpcpy(v6, DataMapInit<CItem>(CItem *)::nameHolder.m_pszBase), "Materialize");
    v7 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size == DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CItem>(CItem *)::dataDesc[5].fieldName = v6;
    v10 = operator new[](DataMapInit<CItem>(CItem *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v10, DataMapInit<CItem>(CItem *)::nameHolder.m_pszBase), "ComeToRest");
    v11 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size == DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CItem>(CItem *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CItem>(CItem *)::dataDesc[6].fieldName = v10;
    DataMapInit<CItem>(CItem *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CItem>(CItem *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CItem>(CItem *)::dataDesc);
  }
  CItem::m_DataMap.dataNumFields = 9;
  CItem::m_DataMap.dataDesc = &DataMapInit<CItem>(CItem *)::dataDesc[1];
  AddDatadescMetadataKeys(&CItem::m_DataMap, CItem::GetEntityClass);
  return &CItem::m_DataMap;
}


// CItem::CItem  (line 99, @0x000000000226bd70, libserver.so)  // inlines: CEntityIOOutput
// calls: CBaseAnimating::CBaseAnimating
// callers: CItem::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CItem::CItem(CItem *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->m_bActivateWhenAtRest = 0;
  this->_vptr_IHandleEntity = &off_4055710;
  this->_vptr_IPlayerPickupVPhysics = &off_4055F38;
  this->m_OnPlayerTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCacheInteraction._vptr_CEntityIOOutput = off_3F7C190;
}


// CItem::~CItem  (line 104, @0x00000000022568d0, libserver.so)  // inlines: ~CBaseAnimating
// calls: CBaseEntity::VPhysicsWorld, CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
// callers: CItem::~CItem, CScriptItem::~CScriptItem, CItemGeneric::~CItemGeneric
void __fastcall CItem::~CItem(CItem *const this)
{
  bool v2; // zf
  IVPhysics2World *v3; // rax

  this->_vptr_IHandleEntity = &off_4055710;
  v2 = this->m_hConstraint == 0;
  this->_vptr_IPlayerPickupVPhysics = &off_4055F38;
  if ( !v2 )
  {
    v3 = CBaseEntity::VPhysicsWorld(this);
    (*(*v3 + 904LL))(v3, this->m_hConstraint);
    this->m_hConstraint = 0;
  }
  this->_vptr_IHandleEntity = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(&this->m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CItem::~CItem  (line 104, @0x0000000002256950, libserver.so)
// calls: CItem::~CItem, CBaseEntity::operator delete
void __fastcall CItem::~CItem(CItem *const this)
{
  CItem::~CItem(this);
  CBaseEntity::operator delete(this);
}


// CItem::CreateItemVPhysicsObject  (line 113, @0x00000000022569e0, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetSolidFlags, HasSpawnFlags, SetSolid, SetSolidFlags, String
// calls: CBaseEntity::GetModel, CCollisionProperty::SetSolidFlags, CCollisionProperty::SetupPhysicsFromUnscaledModel, CBaseEntity::VPhysicsGetObject, CCollisionProperty::SetupPhysicsFromUnscaledAABB, UTIL_DropToFloor, CBaseEntity::GetAbsOrigin, Warning, UTIL_Remove
// strings: "Item %s fell out of level at %f,%f,%f\n"
bool __fastcall CItem::CreateItemVPhysicsObject(CItem *const this)
{
  int v1; // r12d
  CCollisionProperty *m_pCollision; // rdi
  const Vector *v5; // r12
  const Vector *v6; // rax
  const Vector *AbsOrigin; // rax
  const char *m_pAsString; // rsi
  float x; // xmm0_4
  CEntityIdentity *m_pEntity; // rax
  double v11; // xmm0_8
  double z; // [rsp+0h] [rbp-40h]
  double y; // [rsp+8h] [rbp-38h]
  _QWORD v14[6]; // [rsp+10h] [rbp-30h] BYREF

  v1 = 1;
  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    v1 = (*(m_pCollision->_vptr_ICollideable + 8))(m_pCollision) | 1;
  CBaseEntity::GetModel(v14, this);
  if ( v14[0] == 0 )
    return 1;
  CCollisionProperty::SetSolidFlags(&this->m_Collision, v1);
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    ((this->m_spawnflags.m_Value & 1) == 0
   ? VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_DYNAMIC
   : VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED),
    14,
    0);
  if ( CBaseEntity::VPhysicsGetObject(this) != 0 )
    return 1;
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  v5 = (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
  v6 = (*(this->m_Collision._vptr_ICollideable + 1))(&this->m_Collision);
  CCollisionProperty::SetupPhysicsFromUnscaledAABB(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    14,
    v6,
    v5);
  if ( UTIL_DropToFloor(this, 0x87001u, 0) != 0 )
    return 1;
  z = CBaseEntity::GetAbsOrigin(this)->z;
  y = CBaseEntity::GetAbsOrigin(this)->y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  m_pAsString = "";
  x = AbsOrigin->x;
  m_pEntity = this->m_pEntity;
  v11 = x;
  if ( m_pEntity->m_designerName.u.m_Id != 0 )
    m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  Warning("Item %s fell out of level at %f,%f,%f\n", m_pAsString, v11, y, z);
  UTIL_Remove(this);
  return 0;
}


// CItem::Spawn  (line 147, @0x0000000002256b80, libserver.so)  // inlines: AddEFlags, SetCollisionGroup, SetSolid
// calls: CBaseAnimating::Spawn, CBaseEntity::SetNetworkQuantizeOriginAngAngles, CBaseEntity::SetBlocksLOS, CCollisionProperty::SetCollisionGroup, CCollisionProperty::EnableInteractsAsMask, CBaseEntity::SetDamageOptions, CBaseEntity::NetworkQuantize, UTIL_Remove, CCollisionProperty::UseTriggerBounds
// callers: CScriptItem::Spawn, CItemGeneric::Spawn
// globals: g_pGameRules
void __fastcall CItem::Spawn(CItem *const this, const CEntityKeyValues *pKeyValues)
{
  float v3; // xmm1_4

  CBaseAnimating::Spawn(this, pKeyValues);
  CBaseEntity::SetNetworkQuantizeOriginAngAngles(this, 1);
  if ( (*(g_pGameRules->_vptr_CGameRules + 51))(g_pGameRules, this) != 0 )
  {
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
    CBaseEntity::SetBlocksLOS(this, 0);
    this->m_iEFlags |= 0x200000u;
    CCollisionProperty::SetCollisionGroup(&this->m_Collision, 14);
    CCollisionProperty::EnableInteractsAsMask(&this->m_Collision, 0x200u);
    if ( (*(this->_vptr_IHandleEntity + 251))(this) != 0 )
      CCollisionProperty::UseTriggerBounds(&this->m_Collision, 1, COERCE_DOUBLE(1103101952), v3);
    (*(this->_vptr_IHandleEntity + 258))(this);
    if ( (*(this->_vptr_IHandleEntity + 257))(this) != 0 )
    {
      CBaseEntity::SetDamageOptions(this, DamageOptions_t::DAMAGE_EVENTS_ONLY);
      CBaseEntity::NetworkQuantize(this);
    }
  }
  else
  {
    UTIL_Remove(this);
  }
}


// CItem::SetupTouchFunction  (line 198, @0x0000000002256c80, libserver.so)
// calls: CCollisionProperty::EnableTouchPersistsNotification
// globals: CItem::ItemTouch(CBaseEntity *)
void __fastcall CItem::SetupTouchFunction(CItem *const this)
{
  CCollisionProperty::EnableTouchPersistsNotification(&this->m_Collision);
  this->m_pfnTouch.__delta = 0;
  this->m_pfnTouch.__pfn = CItem::ItemTouch;
}


// CItem::InputHandGripWhileHeld  (line 223, @0x0000000002258a00, libserver.so)  // inlines: ToBasePlayer
void __fastcall CItem::InputHandGripWhileHeld(CItem *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pCaller; // rbx

  pCaller = inputdata->pCaller;
  if ( pCaller != 0 && (*(pCaller->_vptr_IHandleEntity + 140))(inputdata->pCaller) != 0 )
    (*(this->_vptr_IHandleEntity + 253))(this, pCaller);
}


// CItem::Use  (line 234, @0x0000000002258a50, libserver.so)  // inlines: ToBasePlayer
void __fastcall CItem::Use(
        CItem *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(pActivator, value) != 0 )
    (*(pActivator->_vptr_IHandleEntity + 479))(pActivator, this, 1, 0);
}


// CItem::ActivateWhenAtRest  (line 250, @0x000000000226bdc0, libserver.so)  // inlines: curtime
// calls: CCollisionProperty::RemoveTriggerCollisionGroup, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// callers: CScriptItem::Spawn
// globals: CItem::ComeToRest(void)
void __fastcall CItem::ActivateWhenAtRest(CItem *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CCollisionProperty::RemoveTriggerCollisionGroup(&this->m_Collision);
  this->m_bActivateWhenAtRest = 1;
  CBaseEntity::ThinkSet(this, CItem::ComeToRest, 0.0, 0, 0);
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(COERCE_UNSIGNED_INT(v3->m_flCurrentTime + 0.5)), v2, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1056964608), v2, 0);
  }
}


// CItem::OnEntityEvent  (line 262, @0x000000000225a160, libserver.so)  // inlines: curtime
// calls: CBaseEntity::OnEntityEvent, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CItem::ComeToRest(void)
void __fastcall CItem::OnEntityEvent(CItem *const this, EntityEvent_t event, void *pEventData)
{
  double v5; // xmm1_8
  CGlobalVars *v6; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v8; // xmm0_8

  CBaseEntity::OnEntityEvent(this, event, pEventData);
  if ( event == EntityEvent_t::ENTITY_EVENT_WATER_TOUCH )
  {
    CBaseEntity::ThinkSet(this, CItem::ComeToRest, 0.0, 0, 0);
    v6 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v8) = 0;
      *&v8 = v6->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v8 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v8, v5, 0);
  }
}


// CItem::ComeToRest  (line 283, @0x00000000022571a0, libserver.so)
// calls: CCollisionProperty::SetTriggerCollisionGroup, CBaseEntity::ThinkSet
void __fastcall CItem::ComeToRest(CItem *const this)
{
  if ( this->m_bActivateWhenAtRest )
  {
    this->m_bActivateWhenAtRest = 0;
    CCollisionProperty::SetTriggerCollisionGroup(&this->m_Collision);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
}


// UTIL_ItemCanBeTouchedByPlayer  (line 301, @0x000000000226c1b0, libserver.so)  // inlines: CGameTrace, CollisionCenter, CollisionToWorldSpace, EnableInteractsWith, GetFloat, Init, IsBoundsDefinedInEntitySpace, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAligned, VectorClear, VectorCopy, VectorMA, VectorSubtract, VectorTransform, WorldSpaceCenter, operator=, operator==
// calls: CBaseEntity::VPhysicsGetObject, CGameTrace::Init, CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities, CGamePhysicsQueryInterface::TraceRay, VectorTransform, CBaseEntity::GetAbsOrigin
// callers: CBaseCombatWeapon::DefaultTouch, CItem::ItemCanBeTouchedByPlayer, CItemGeneric::AllowPickup, CItem::ItemTouch, CBasePlayer::BumpWeapon
bool __fastcall UTIL_ItemCanBeTouchedByPlayer(CBaseEntity *pItem, CBasePlayer *pPlayer)
{
  bool result; // al
  IPhysicsObject *Object; // rax
  vec_t v6; // xmm1_4
  float z; // xmm6_4
  float y; // xmm7_4
  float x; // xmm8_4
  float v10; // xmm1_4
  float m_fValue; // xmm0_4
  CCollisionProperty *m_pCollision; // r13
  vec_t v13; // xmm1_4
  float *v14; // rax
  double v15; // xmm0_8
  const matrix3x4_t *v16; // rax
  float *v17; // rax
  const Vector *AbsOrigin; // rax
  float v19; // [rsp+4h] [rbp-19Ch]
  float v20; // [rsp+8h] [rbp-198h]
  float v21; // [rsp+Ch] [rbp-194h]
  double vecEndPos; // [rsp+10h] [rbp-190h]
  float vecEndPos_8; // [rsp+18h] [rbp-188h]
  CTraceFilterSkipTwoEntities filter; // [rsp+20h] [rbp-180h] BYREF
  Ray_t ray; // [rsp+70h] [rbp-130h] BYREF
  trace_t tr; // [rsp+C0h] [rbp-E0h] BYREF

  if ( pItem == 0 || pPlayer == 0 )
    return 0;
  result = (*(pPlayer->_vptr_IHandleEntity + 346))(pPlayer);
  if ( !result )
  {
    Object = CBaseEntity::VPhysicsGetObject(pItem);
    if ( Object != 0 )
    {
      *&tr.startpos.x = (*(*Object + 368LL))(Object);
      z = v6;
      y = tr.startpos.y;
      tr.startpos.z = v6;
      x = tr.startpos.x;
    }
    else
    {
      m_pCollision = pItem->m_pCollision;
      if ( m_pCollision != 0 )
      {
        *&tr.startpos.x = (*(m_pCollision->_vptr_ICollideable + 19))(pItem->m_pCollision);
        tr.startpos.z = v13;
        if ( (m_pCollision->m_nSolidType.m_Value & 0xFD) == 0
          || (v14 = (*(m_pCollision->_vptr_ICollideable + 5))(m_pCollision),
              *&v15 = LODWORD(vec3_angle.x),
              vec3_angle.x == *v14)
          && (*&v15 = LODWORD(vec3_angle.y), *&v15 == v14[1])
          && (*&v15 = LODWORD(vec3_angle.z), *&v15 == v14[2]) )
        {
          v21 = (*(m_pCollision->_vptr_ICollideable + 27))(m_pCollision);
          v17 = (*(m_pCollision->_vptr_ICollideable + 4))(m_pCollision);
          x = (tr.startpos.x * v21) + *v17;
          y = (tr.startpos.y * v21) + v17[1];
          z = (tr.startpos.z * v21) + v17[2];
        }
        else
        {
          v16 = (*(m_pCollision->_vptr_ICollideable + 6))(m_pCollision, v15);
          VectorTransform(&tr.startpos.x, v16, &ray.m_Start.x);
          z = ray.m_Start.z;
          y = ray.m_Start.y;
          x = ray.m_Start.x;
        }
      }
      else
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(pItem);
        z = AbsOrigin->z;
        y = AbsOrigin->y;
        x = AbsOrigin->x;
      }
    }
    v19 = z;
    v20 = y;
    vecEndPos = (*(pPlayer->_vptr_IHandleEntity + 164))(pPlayer);
    vecEndPos_8 = v10;
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    CTraceFilterSkipTwoEntities::CTraceFilterSkipTwoEntities(&filter, pPlayer, pItem, 11);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Delta.x = *&vecEndPos - x;
    ray.m_Delta.y = *(&vecEndPos + 1) - v20;
    ray.m_Delta.z = vecEndPos_8 - v19;
    ray.m_flRadius = m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_IsRay = 1;
    ray.m_Start.x = x;
    filter.m_attr.m_nInteractsWith |= 0x87001uLL;
    ray.m_Start.y = v20;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y))
                   + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
    ray.m_Start.z = v19;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &filter, &tr);
    return tr.fraction >= 1.0;
  }
  return result;
}


// CItem::ItemCanBeTouchedByPlayer  (line 347, @0x000000000226c560, libserver.so)
// calls: UTIL_ItemCanBeTouchedByPlayer
bool __fastcall CItem::ItemCanBeTouchedByPlayer(CItem *const this, CBasePlayer *pPlayer)
{
  return UTIL_ItemCanBeTouchedByPlayer(this, pPlayer);
}


// CItem::HandleTouch  (line 353, @0x000000000226e9c0, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pGameRules
void __fastcall CItem::HandleTouch(CItem *const this, CBasePlayer *pPlayer, CBaseEntity *pOther)
{
  CVariant v5; // [rsp-30h] [rbp-38h] BYREF

  v5.m_flags = 0;
  v5.m_type = 0;
  v5.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerTouch, pOther, this, &v5, 0.0);
  if ( (v5.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v5.m_uint64);
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  (*(g_pGameRules->_vptr_CGameRules + 97))(g_pGameRules, pPlayer, this);
  if ( (*(g_pGameRules->_vptr_CGameRules + 98))(g_pGameRules, this) == 5 )
    (*(this->_vptr_IHandleEntity + 154))(this);
  else
    UTIL_Remove(this);
}


// CItem::ItemTouch  (line 376, @0x000000000226f200, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ItemCanBeTouchedByPlayer, ~CVariantBase
// calls: UTIL_ItemCanBeTouchedByPlayer, CEntityIOOutput::FireOutputInternal, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: g_pGameRules
void __fastcall CItem::ItemTouch(CItem *const this, CBaseEntity *pOther)
{
  CBasePlayer *v3; // rbx
  __int64 v4; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  v3 = pOther;
  if ( (*(pOther->_vptr_IHandleEntity + 101))(pOther) == 0
    || (v4 = (*(v3->_vptr_IHandleEntity + 101))(v3), (v3 = (*(*v4 + 8LL))(v4, 0)) != 0) )
  {
    if ( (*(v3->_vptr_IHandleEntity + 140))(v3) != 0 && UTIL_ItemCanBeTouchedByPlayer(this, v3) )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnCacheInteraction, v3, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      if ( !v3->m_bPreventWeaponPickup && (*(g_pGameRules->_vptr_CGameRules + 96))(g_pGameRules, v3, this) != 0 )
      {
        if ( (*(this->_vptr_IHandleEntity + 253))(this, v3) != 0 )
        {
          (*(this->_vptr_IHandleEntity + 254))(this, v3, v3);
        }
        else if ( gEvilImpulse101 != 0 )
        {
          UTIL_Remove(this);
        }
      }
    }
  }
}


// CItem::Respawn  (line 427, @0x000000000225b090, libserver.so)  // inlines: SetSolid, curtime
// calls: CBaseEntity::AddEffects, CBaseEntity::SetMoveType, CCollisionProperty::SetTriggerCollisionGroup, UTIL_SetOrigin, CBaseEntity::SetAbsAngles, UTIL_DropToFloor, CBaseEntity::RemoveAllDecals, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: g_pGameRules
CBaseEntity *__fastcall CItem::Respawn(CItem *const this)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  vec_t v3; // xmm1_4
  vec_t v4; // xmm1_4
  CGlobalVars *v5; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8
  double v8; // xmm1_8
  float m_flCurrentTime; // [rsp+Ch] [rbp-24h]
  Vector vecOrigin; // [rsp+10h] [rbp-20h] BYREF

  p_m_Collision = &this->m_Collision;
  this->m_pfnTouch.__pfn = 0;
  this->m_pfnTouch.__delta = 0;
  CBaseEntity::AddEffects(this, 32);
  (*(this->_vptr_IHandleEntity + 51))(this);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 2);
  CCollisionProperty::SetTriggerCollisionGroup(p_m_Collision);
  *&vecOrigin.x = (*(g_pGameRules->_vptr_CGameRules + 100))(g_pGameRules, this);
  vecOrigin.z = v3;
  UTIL_SetOrigin(this, &vecOrigin, 0);
  *&vecOrigin.x = (*(g_pGameRules->_vptr_CGameRules + 101))(g_pGameRules, this);
  vecOrigin.z = v4;
  CBaseEntity::SetAbsAngles(this, &vecOrigin);
  UTIL_DropToFloor(this, 0x87001u, 0);
  CBaseEntity::RemoveAllDecals(this);
  CBaseEntity::ThinkSet(this, 0x7E1uLL, 0.0, 0, 0);
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    m_flCurrentTime = v5->m_flCurrentTime;
  }
  else
  {
    m_flCurrentTime = 0.0;
  }
  v7 = (*(g_pGameRules->_vptr_CGameRules + 99))(g_pGameRules, this);
  *&v7 = *&v7 + m_flCurrentTime;
  CBaseEntity::SetNextThink(this, v7, v8, 0);
  return this;
}


// CItem::Materialize  (line 452, @0x0000000002256cc0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CBaseEntity::EmitSound, CBaseEntity::DispatchUpdateTransmitState, CBaseAnimating::DoMuzzleFlash
// strings: "Item.Materialize"
void __fastcall CItem::Materialize(CItem *const this)
{
  (*(this->_vptr_IHandleEntity + 257))(this);
  if ( (this->m_fEffects.m_Value & 0x20) != 0 )
  {
    CBaseEntity::EmitSound(this, "Item.Materialize", 0.0, 0);
    (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
    this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(this);
    CBaseAnimating::DoMuzzleFlash(this);
  }
  (*(this->_vptr_IHandleEntity + 258))(this);
}


// CItem::Precache  (line 477, @0x0000000002279b00, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound
// strings: "Item.Materialize"
void __fastcall CItem::Precache(CItem *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("Item.Materialize", pContext);
}


// CItem::OnPhysGunPickup  (line 491, @0x000000000226e690, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CCollisionProperty::UseTriggerBounds, CBaseEntity::VPhysicsWorld, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CItem::OnPhysGunPickup(
        CItem *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  float v6; // xmm1_4
  IVPhysics2World *v7; // rax
  CVariant v8; // [rsp-30h] [rbp-38h] BYREF

  v8.m_type = 0;
  v8.m_flags = 0;
  v8.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnCacheInteraction, pPhysGunUser, this, &v8, 0.0);
  if ( (v8.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v8.m_uint64);
  if ( reason == PhysGunPickup_t::PICKED_UP_BY_CANNON )
  {
    CCollisionProperty::UseTriggerBounds(&this->m_Collision, 1, COERCE_DOUBLE(1111490560), v6);
    if ( this->m_hConstraint != 0 )
    {
      v7 = CBaseEntity::VPhysicsWorld(this);
      (*(*v7 + 904LL))(v7, this->m_hConstraint);
      this->m_hConstraint = 0;
    }
  }
}


// CItem::OnPhysGunDrop  (line 513, @0x0000000002256b50, libserver.so)
// calls: CCollisionProperty::UseTriggerBounds
void __fastcall CItem::OnPhysGunDrop(
        CItem *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunDrop_t reason,
        int nVRControllerID)
{
  float v4; // xmm1_4

  CCollisionProperty::UseTriggerBounds(&this->m_Collision, 1, COERCE_DOUBLE(1103101952), v4);
}


// CScriptItem::GetEntityClass  (line 525, @0x000000000227b590, libserver.so)
CEntityClass *__cdecl CScriptItem::GetEntityClass()
{
  return g_pEntityCScriptItemClass;
}


// CScriptItem::Schema_DynamicBinding  (line 525, @0x000000000227b5a0, libserver.so)
// globals: CScriptItem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptItem::Schema_DynamicBinding(const CScriptItem *const this)
{
  return CScriptItem::s_pSchemaBinding;
}


// CScriptItem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 525, @0x000000000227b5b0, libserver.so)
// globals: CScriptItem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CScriptItem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CScriptItem::CEntityInstanceEntityClass *const this)
{
  return CScriptItem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CScriptItem::CEntityInstanceEntityClass::DestructInstance  (line 525, @0x000000000227b5c0, libserver.so)  // inlines: Destruct<CScriptItem>
void __fastcall CScriptItem::CEntityInstanceEntityClass::DestructInstance(
        CScriptItem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CScriptItem::CEntityInstanceEntityClass::FreeInstance  (line 525, @0x000000000227b5e0, libserver.so)
void __fastcall CScriptItem::CEntityInstanceEntityClass::FreeInstance(
        CScriptItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CScriptItem::CEntityInstanceEntityClass::CanAllocate  (line 525, @0x000000000227b600, libserver.so)
bool __fastcall CScriptItem::CEntityInstanceEntityClass::CanAllocate(
        const CScriptItem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CScriptItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 525, @0x000000000227b610, libserver.so)
// globals: CScriptItem::s_pSchemaBinding
const ISchemaBinding *__fastcall CScriptItem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CScriptItem::CEntityInstanceEntityClass *const this)
{
  return CScriptItem::s_pSchemaBinding;
}


// CScriptItem::CEntityInstanceEntityClass::AllocateInstance  (line 525, @0x000000000227bef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CScriptItem::CEntityInstanceEntityClass::AllocateInstance(
        CScriptItem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1344);
  memset(v1, 0, 0x540u);
  return v1;
}


// CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 525, @0x000000000227d0a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 525, @0x000000000227d0c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CScriptItem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CScriptItem::CEntityInstanceEntityClass::ConstructInstance  (line 525, @0x000000000227e4b0, libserver.so)  // inlines: Construct<CScriptItem>
// calls: CScriptItem::CScriptItem
CEntityInstance *__fastcall CScriptItem::CEntityInstanceEntityClass::ConstructInstance(
        CScriptItem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CScriptItem::CScriptItem(p);
  return p;
}


// CScriptItem::GetEntityClassInternal  (line 525, @0x000000000227faa0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseAnimating::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "scripted_item_drop", "CScriptItem", "CItem"
// globals: `guard variable for'CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass, CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo, CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo, `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo (9 total)
CEntityClass *__cdecl CScriptItem::GetEntityClassInternal()
{
  CScriptItem::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass) != 0 )
  {
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass._vptr_CEntityClass = off_3F79390;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_designerName.u.m_Id = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_ComponentOffsets.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_AllHelpers.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classInputs.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classInputs.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classOutputs.m_Size = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_requiredEHandle.m_Index = -1;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_hNetworkSerializer = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pBaseClassInfo = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pClassInfo = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_flags = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_nAllHelpersFlags = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pScriptClassDesc = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pInputs = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_nInputCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pOutputs = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_nOutputCount = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pGameClass = 0;
    CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass._vptr_CEntityClass = off_4055FB0;
    __cxa_guard_release(&`guard variable for'CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass);
    __cxa_atexit(
      CScriptItem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass,
      &_dso_handle);
  }
  if ( g_pEntityCScriptItemClass != 0 )
    return &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
  if ( `guard variable for'CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo) != 0 )
  {
    if ( `guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo) != 0 )
    {
      EntityClassInfo = CBaseAnimating::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo,
        "CItem",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo,
      "CScriptItem",
      "scripted_item_drop",
      0,
      &CItem::GetEntityClassInfo(void)::g_EntityCItemClassInfo);
    __cxa_guard_release(&`guard variable for'CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo);
  }
  CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pClassInfo = &CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo;
  CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pBaseClassInfo = CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo.m_pBaseClassInfo;
  g_pEntityCScriptItemClass = &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
  CScriptItem::GetEntityClassInfo(void)::g_EntityCScriptItemClassInfo.m_pClass = &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
  CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCScriptItemClass->m_pComponentOverrides = 0;
  return &CScriptItem::GetEntityClassInternal(void)::g_EntityCScriptItemClass;
}


// CScriptItem::MyTouch  (line 536, @0x000000000227b620, libserver.so)
bool __fastcall CScriptItem::MyTouch(CScriptItem *const this, CBasePlayer *pPlayer)
{
  return 1;
}


// CScriptItem::GetDataDescMap  (line 544, @0x00000000022544c0, libserver.so)
// globals: CScriptItem::m_DataMap
datamap_t *__fastcall CScriptItem::GetDataDescMap(CScriptItem *const this)
{
  return &CScriptItem::m_DataMap;
}


// CScriptItem::AddDatadescMetadataKeys  (line 544, @0x000000000226c570, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CScriptItem::GetEntityClass(void)
void __fastcall CScriptItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CScriptItem::GetEntityClass);
}


// CScriptItem::GetBaseMap  (line 544, @0x000000000226c590, libserver.so)
// globals: CItem::m_DataMap
datamap_t *__cdecl CScriptItem::GetBaseMap()
{
  return &CItem::m_DataMap;
}


// DataMapInit<CScriptItem>  (line 544, @0x000000000226c5a0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CScriptItem"
// globals: `guard variable for'DataMapInit<CScriptItem>(CScriptItem *)::nameHolder, `guard variable for'DataMapInit<CScriptItem>(CScriptItem *)::dataDesc, CItem::m_DataMap, CScriptItem::GetEntityClass(void), CScriptItem::m_DataMap, DataMapInit<CScriptItem>(CScriptItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CScriptItem>(CScriptItem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::nameHolder) != 0 )
  {
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_pszBase = "CScriptItem";
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CScriptItem>(CScriptItem *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CScriptItem>(CScriptItem *)::nameHolder,
      &_dso_handle);
  }
  CScriptItem::m_DataMap.baseMap = &CItem::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::dataDesc) != 0 )
  {
    DataMapInit<CScriptItem>(CScriptItem *)::dataDesc[1].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CScriptItem>(CScriptItem *)::dataDesc);
  }
  CScriptItem::m_DataMap.dataNumFields = 2;
  CScriptItem::m_DataMap.dataDesc = &DataMapInit<CScriptItem>(CScriptItem *)::dataDesc[1];
  AddDatadescMetadataKeys(&CScriptItem::m_DataMap, CScriptItem::GetEntityClass);
  return &CScriptItem::m_DataMap;
}


// CScriptItem::CScriptItem  (line 553, @0x000000000226c6c0, libserver.so)  // inlines: CEntityIOOutput, CItem
// calls: CBaseAnimating::CBaseAnimating
// callers: CScriptItem::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CScriptItem::CScriptItem(CScriptItem *const this)
{
  CBaseAnimating::CBaseAnimating(this);
  this->m_bActivateWhenAtRest = 0;
  this->m_OnPlayerTouch._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnCacheInteraction._vptr_CEntityIOOutput = off_3F7C190;
  this->_vptr_IHandleEntity = &off_4056030;
  this->_vptr_IPlayerPickupVPhysics = &off_4056858;
  this->m_OnPlayerPickup._vptr_CEntityIOOutput = off_3F7C190;
  this->m_MoveTypeOverride = MoveType_t::MOVETYPE_VPHYSICS;
}


// CScriptItem::~CScriptItem  (line 559, @0x0000000002256970, libserver.so)
// calls: CItem::~CItem
void __fastcall CScriptItem::~CScriptItem(CScriptItem *const this)
{
  this->_vptr_IHandleEntity = &off_4056030;
  this->_vptr_IPlayerPickupVPhysics = &off_4056858;
  CItem::~CItem(this);
}


// CScriptItem::~CScriptItem  (line 559, @0x00000000022569a0, libserver.so)  // inlines: ~CScriptItem
// calls: CItem::~CItem, CBaseEntity::operator delete
void __fastcall CScriptItem::~CScriptItem(CScriptItem *const this)
{
  this->_vptr_IHandleEntity = &off_4056030;
  this->_vptr_IPlayerPickupVPhysics = &off_4056858;
  CItem::~CItem(this);
  CBaseEntity::operator delete(this);
}


// CScriptItem::Spawn  (line 564, @0x000000000226be70, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: CBaseModelEntity::SetModelFromKeyValues, CItem::Spawn, CBaseEntity::SetMoveType, CEntityKeyValues::HasValue, strtol, CItem::ActivateWhenAtRest, VariantFieldTypeName, Warning
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_226C016, jpt_226C05E
void __fastcall CScriptItem::Spawn(CScriptItem *const this, const CEntityKeyValues *pKeyValues)
{
  MoveType_t m_MoveTypeOverride; // si
  int v5; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v6; // cx
  __int64 v7; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v8; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v9; // rdx
  CEntityVariant *v10; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v15; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 v17; // ax
  uint64 v18; // rax
  int16 m_type; // ax
  const char *m_uint64; // rax
  const char *v21; // rax
  const char *v22; // rax

  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  CItem::Spawn(this, pKeyValues);
  if ( (this->m_MoveTypeOverride - 5) > 1u )
  {
    CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    m_MoveTypeOverride = this->m_MoveTypeOverride;
    if ( m_MoveTypeOverride != MoveType_t::MOVETYPE_NONE )
      CBaseEntity::SetMoveType(this, m_MoveTypeOverride, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  }
  if ( CEntityKeyValues::HasValue(pKeyValues, &algn_245FFE1[5]) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == &algn_245FFE1[5] )
          {
LABEL_25:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v15 = pKeyValues->m_keyValues.m_pElements;
            else
              v15 = 0;
            p_m_value = &v15[i].m_value;
            goto LABEL_33;
          }
        }
        else if ( *(4 * i) == &algn_245FFE1[5] )
        {
          goto LABEL_25;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_33:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        break;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_51;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_51;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_51;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          goto LABEL_49;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_51:
        if ( m_uint64 != 0 )
LABEL_49:
          CItem::ActivateWhenAtRest(this);
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_51;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_51;
        goto LABEL_49;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_51;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int > 0x7FFFFFFEu )
          goto LABEL_49;
        goto LABEL_51;
      default:
        v22 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v22);
        break;
    }
  }
  if ( !CEntityKeyValues::HasValue(pKeyValues, 1590222785) )
    return;
  v5 = pKeyValues->m_keyHashes.m_nCount;
  if ( v5 <= 0 )
  {
LABEL_28:
    v10 = &CEntityKeyValues::sm_EmptyVariant;
    goto LABEL_29;
  }
  v6 = pKeyValues->m_keyHashes.m_nAllocated;
  v7 = 0;
  while ( v6 == 0 )
  {
    if ( *(4 * v7) == 1590222785 )
      goto LABEL_14;
LABEL_11:
    if ( v5 <= ++v7 )
      goto LABEL_28;
  }
  v8 = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( v6 > 9 )
    v8 = pKeyValues->m_keyHashes.m_pElements;
  if ( v8[v7] != 1590222785 )
    goto LABEL_11;
LABEL_14:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v9 = pKeyValues->m_keyValues.m_pElements;
  else
    v9 = 0;
  v10 = &v9[v7].m_value;
LABEL_29:
  v17 = v10->m_type;
  switch ( v17 )
  {
    case 0:
      LOBYTE(v18) = 0;
      break;
    case 1:
      LODWORD(v18) = v10->m_float;
      break;
    case 5:
    case 6:
      LOBYTE(v18) = v10->m_char;
      break;
    case 26:
      LOBYTE(v18) = -1;
      if ( v10->m_int64 <= 0x7FFFFFFF )
      {
        LOBYTE(v18) = 0;
        if ( v10->m_uint64 >= 0xFFFFFFFF80000000LL )
          v18 = v10->m_uint64;
      }
      break;
    case 30:
      LOBYTE(v18) = strtol(v10->m_pszString, 0, 10);
      break;
    case 33:
      LOBYTE(v18) = -1;
      if ( v10->m_uint64 <= 0x7FFFFFFE )
        LOBYTE(v18) = v10->m_uint64;
      break;
    case 34:
      LODWORD(v18) = v10->m_float64;
      break;
    case 37:
      LOBYTE(v18) = -1;
      if ( v10->m_int <= 0x7FFFFFFEu )
        LOBYTE(v18) = v10->m_int;
      break;
    default:
      v21 = VariantFieldTypeName(v17);
      Warning("No conversion from %s to int now\n", v21);
      LOBYTE(v18) = 0;
      break;
  }
  this->m_MoveTypeOverride = v18;
}


// CScriptItem::Precache  (line 591, @0x0000000002279bf0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheScriptSound, CBaseEntity::PrecacheModelFromKeyValues
// strings: "Item.Materialize"
void __fastcall CScriptItem::Precache(CScriptItem *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheScriptSound("Item.Materialize", pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CScriptItem::OnPhysGunPickup  (line 599, @0x000000000226e580, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CScriptItem::OnPhysGunPickup(
        CScriptItem *const this,
        CBasePlayer *pPhysGunUser,
        PhysGunPickup_t reason,
        int nVRControllerID)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerPickup, pPhysGunUser, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CScriptItem::HandleTouch  (line 608, @0x000000000226e610, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CScriptItem::HandleTouch(CScriptItem *const this, CBasePlayer *pPlayer, CBaseEntity *pOther)
{
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnPlayerTouch, pOther, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


