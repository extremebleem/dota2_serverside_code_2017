// Reconstructed from DWARF by pahole; not original source.

// src/game/server/gameweaponmanager.cpp:22
class CGameWeaponManager : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_iszWeaponName;  // +0x308
	int m_iMaxPieces;  // +0x318
	float m_flAmmoMod;  // +0x31c
	bool m_bExpectingWeapon;  // +0x320

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
	CGameWeaponManager(CGameWeaponManager &);
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
	CGameWeaponManager();
	virtual ~CGameWeaponManager();
	virtual void Think();
	void InputSetMaxPieces(inputdata_t &);
	void InputSetAmmoModifier(inputdata_t &);
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[117] Think
	// sizeof = 832
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameWeaponManager::GetEntityClass  (line 24, @0x000000000227b130, libserver.so)
CEntityClass *__cdecl CGameWeaponManager::GetEntityClass()
{
  return g_pEntityCGameWeaponManagerClass;
}


// CGameWeaponManager::Schema_DynamicBinding  (line 24, @0x000000000227b140, libserver.so)
// globals: CGameWeaponManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameWeaponManager::Schema_DynamicBinding(
        const CGameWeaponManager *const this)
{
  return CGameWeaponManager::s_pSchemaBinding;
}


// CGameWeaponManager::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x000000000227b150, libserver.so)
// globals: CGameWeaponManager::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameWeaponManager::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  return CGameWeaponManager::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameWeaponManager::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x000000000227b160, libserver.so)  // inlines: Destruct<CGameWeaponManager>
void __fastcall CGameWeaponManager::CEntityInstanceEntityClass::DestructInstance(
        CGameWeaponManager::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameWeaponManager::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x000000000227b180, libserver.so)
void __fastcall CGameWeaponManager::CEntityInstanceEntityClass::FreeInstance(
        CGameWeaponManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameWeaponManager::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x000000000227b1a0, libserver.so)
bool __fastcall CGameWeaponManager::CEntityInstanceEntityClass::CanAllocate(
        const CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameWeaponManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x000000000227b1b0, libserver.so)
// globals: CGameWeaponManager::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameWeaponManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  return CGameWeaponManager::s_pSchemaBinding;
}


// CGameWeaponManager::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x000000000227bdb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameWeaponManager::CEntityInstanceEntityClass::AllocateInstance(
        CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 832);
  memset(v1, 0, 0x340u);
  return v1;
}


// CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000227d140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000227d160, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameWeaponManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameWeaponManager::GetEntityClassInternal  (line 24, @0x000000000227f6e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CInterlockedIntT, CUtlMemory, CUtlMemoryPool, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlTSHashBase, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ThreadInterlockedExchange, operator=, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlMemoryPoolBase::CUtlMemoryPoolBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "game_weapon_manager", "CGameWeaponManager"
// globals: `guard variable for'CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass, CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo, CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo
CEntityClass *__cdecl CGameWeaponManager::GetEntityClassInternal()
{
  CGameWeaponManager::CEntityInstanceEntityClass *v1; // rax
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass) != 0 )
  {
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass._vptr_CEntityClass = off_3F79390;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_designerName.u.m_Id = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_ComponentOffsets.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_AllHelpers.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlMemoryPoolBase::CUtlMemoryPoolBase(
      &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_atomicFields.m_EntryMemory,
      48,
      4,
      8,
      MemoryPoolGrowType_t::UTLMEMORYPOOL_GROW_SLOW,
      0);
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value = 0;
    _InterlockedExchange(
      &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_atomicFields.m_ContentionCheck.m_value,
      0);
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_atomicFields.m_bNeedsCommit = 0;
    v1 = &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
    do
    {
      v1->m_instanceUnserializer.m_atomicFields.m_aBuckets[0].m_pFirst = 0;
      v1 = (v1 + 16);
      v1->m_instanceUnserializer.m_atomicFields.m_EntryMemory.m_Blobs.m_pPop = 0;
    }
    while ( v1 != &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_atomicFields.m_aBuckets[3] );
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classInputs.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classOutputs.m_Size = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_requiredEHandle.m_Index = -1;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_hNetworkSerializer = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pBaseClassInfo = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pClassInfo = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_flags = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_nAllHelpersFlags = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pScriptClassDesc = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pInputs = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_nInputCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pOutputs = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_nOutputCount = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pGameClass = 0;
    CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass._vptr_CEntityClass = off_4050E50;
    __cxa_guard_release(&`guard variable for'CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass);
    __cxa_atexit(
      CGameWeaponManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameWeaponManagerClass != 0 )
    return &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
  if ( `guard variable for'CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo,
      "CGameWeaponManager",
      "game_weapon_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo);
  }
  CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pClassInfo = &CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo;
  CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pBaseClassInfo = CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo.m_pBaseClassInfo;
  g_pEntityCGameWeaponManagerClass = &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
  CGameWeaponManager::GetEntityClassInfo(void)::g_EntityCGameWeaponManagerClassInfo.m_pClass = &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
  CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCGameWeaponManagerClass->m_pComponentOverrides = 0;
  return &CGameWeaponManager::GetEntityClassInternal(void)::g_EntityCGameWeaponManagerClass;
}


// CGameWeaponManager::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x0000000002281100, libserver.so)  // inlines: AddToTail, CGameWeaponManager, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Construct<CGameWeaponManager>, CopyConstruct<CGameWeaponManager*>, Element, GrowMemory, Purge, RemoveAll, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CBaseEntity::CBaseEntity, CUtlMemory<CGameWeaponManager*, int>::Grow, CBaseEntity::~CBaseEntity, _Unwind_Resume, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// globals: g_Managers
CEntityInstance *__fastcall CGameWeaponManager::CEntityInstanceEntityClass::ConstructInstance(
        CGameWeaponManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 m_Size; // r12
  bool v4; // zf
  int v5; // eax
  CGameWeaponManager **v6; // rax

  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_4050ED0;
    m_Size = g_Managers.m_Size;
    *(p + 202) = 0;
    *(p + 102) = 0;
    *(p + 206) = 0;
    *(p + 207) = 0;
    v4 = m_Size == g_Managers.m_Memory.m_nAllocationCount;
    *(p + 800) = 0;
    v5 = m_Size;
    *(p + 199) = 1065353216;
    if ( v4 )
    {
      CUtlMemory<CGameWeaponManager *,int>::Grow(&g_Managers.m_Memory, 1);
      v5 = g_Managers.m_Size;
    }
    g_Managers.m_Size = v5 + 1;
    v6 = &g_Managers.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      *v6 = p;
  }
  return p;
}


// CGameWeaponManager::~CGameWeaponManager  (line 36, @0x000000000227e8e0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CGameWeaponManager*, CUtlMemory<CGameWeaponManager*, int> >::FindAndRemove, CBaseEntity::~CBaseEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// globals: g_Managers
void __fastcall CGameWeaponManager::~CGameWeaponManager(CGameWeaponManager *const this)
{
  bool v2; // zf
  CGameWeaponManager *src; // [rsp+8h] [rbp-18h] BYREF

  this->_vptr_IHandleEntity = &off_4050ED0;
  src = this;
  CUtlVectorBase<CGameWeaponManager *,CUtlMemory<CGameWeaponManager *,int>>::FindAndRemove(&g_Managers, &src);
  v2 = (this->m_ManagedNonWeapons.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ManagedNonWeapons.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ManagedNonWeapons.m_Memory);
    if ( (this->m_ManagedNonWeapons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ManagedNonWeapons.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
}


// CGameWeaponManager::~CGameWeaponManager  (line 36, @0x000000000227e960, libserver.so)  // inlines: Purge, RemoveAll, ~CGameWeaponManager, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CGameWeaponManager*, CUtlMemory<CGameWeaponManager*, int> >::FindAndRemove, CBaseEntity::~CBaseEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
// globals: g_Managers
void __fastcall CGameWeaponManager::~CGameWeaponManager(CGameWeaponManager *const this)
{
  bool v2; // zf
  CGameWeaponManager *src; // [rsp+8h] [rbp-18h] BYREF

  this->_vptr_IHandleEntity = &off_4050ED0;
  src = this;
  CUtlVectorBase<CGameWeaponManager *,CUtlMemory<CGameWeaponManager *,int>>::FindAndRemove(&g_Managers, &src);
  v2 = (this->m_ManagedNonWeapons.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ManagedNonWeapons.m_Size = 0;
  if ( v2 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ManagedNonWeapons.m_Memory);
    if ( (this->m_ManagedNonWeapons.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_ManagedNonWeapons.m_Memory);
  }
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameWeaponManager::GetDataDescMap  (line 55, @0x0000000002254110, libserver.so)
// globals: CGameWeaponManager::m_DataMap
datamap_t *__fastcall CGameWeaponManager::GetDataDescMap(CGameWeaponManager *const this)
{
  return &CGameWeaponManager::m_DataMap;
}


// CGameWeaponManager::AddDatadescMetadataKeys  (line 55, @0x00000000022657f0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameWeaponManager::GetEntityClass(void)
void __fastcall CGameWeaponManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameWeaponManager::GetEntityClass);
}


// CGameWeaponManager::GetBaseMap  (line 55, @0x0000000002265810, libserver.so)
datamap_t *__cdecl CGameWeaponManager::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CGameWeaponManager>  (line 55, @0x000000000226fa40, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, CopyConstruct<char*>, Element, GenerateName, GetDataOps<CUtlVector<CHandle<CBaseEntity> > >, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_06.cpp
// strings: "CGameWeaponManager"
// globals: `guard variable for'DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder, `guard variable for'DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc, CGameWeaponManager::GetEntityClass(void), CGameWeaponManager::m_DataMap, DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder, `guard variable for'CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBas, CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CGameWeaponManager>(CGameWeaponManager *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder) != 0 )
  {
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_pszBase = "CGameWeaponManager";
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder,
      &_dso_handle);
  }
  CGameWeaponManager::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_nLenBase + 6);
    strcpy(stpcpy(v2, DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_pszBase), "Think");
    m_Size = DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size == DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc[5].fieldName = v2;
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops = off_4008550;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops);
    }
    DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc[8].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<13>::GetDataOps<CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>>(CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc);
  }
  CGameWeaponManager::m_DataMap.dataNumFields = 9;
  CGameWeaponManager::m_DataMap.dataDesc = &DataMapInit<CGameWeaponManager>(CGameWeaponManager *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameWeaponManager::m_DataMap, CGameWeaponManager::GetEntityClass);
  return &CGameWeaponManager::m_DataMap;
}


// CreateWeaponManager  (line 74, @0x0000000002265820, libserver.so)  // inlines: operator=
// calls: CreateEntityByName, MakeEntitySystemString, DispatchSpawn
// strings: "game_weapon_manager"
void __fastcall CreateWeaponManager(const char *pWeaponName, int iMaxPieces)
{
  CBaseEntity *EntityByName; // rbx
  int (**v5)(...); // [rsp+0h] [rbp-30h]

  EntityByName = CreateEntityByName("game_weapon_manager", -1);
  if ( EntityByName != 0 )
  {
    MakeEntitySystemString(pWeaponName);
    LODWORD(EntityByName[1].m_hPrivateScope.m_hScope) = iMaxPieces;
    EntityByName[1]._vptr_IHandleEntity = v5;
    DispatchSpawn(EntityByName, 0);
  }
}


// WeaponManager_AmmoMod  (line 86, @0x0000000002265880, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: RandomInt
// callers: CBaseCombatWeapon::Drop
// globals: g_Managers
void __fastcall WeaponManager_AmmoMod(CBaseCombatWeapon *pWeapon)
{
  __int64 v2; // r12
  int i; // ebx
  CGameWeaponManager *v4; // rax
  int v5; // r15d
  int v6; // r15d

  v2 = 0;
  for ( i = 0; g_Managers.m_Size > i; ++v2 )
  {
    v4 = g_Managers.m_Memory.m_pMemory[v2];
    if ( v4->m_pWeaponClass == pWeapon->m_pEntity->m_pClass )
    {
      v5 = (pWeapon->m_iClip1.m_Value * v4->m_flAmmoMod);
      v6 = RandomInt(4294967294LL, 2) + v5;
      if ( v6 > (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon) )
      {
        v6 = (*(pWeapon->_vptr_IHandleEntity + 337))(pWeapon);
      }
      else if ( v6 <= 0 )
      {
        v6 = 1;
      }
      if ( v6 != pWeapon->m_iClip1.m_Value )
      {
        (*(pWeapon->_vptr_IHandleEntity + 22))(pWeapon, 1276, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        pWeapon->m_iClip1.m_Value = v6;
      }
    }
    ++i;
  }
}


// WeaponManager_AddManaged  (line 110, @0x0000000002274980, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, Set, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// globals: g_Managers
void __fastcall WeaponManager_AddManaged(CBaseEntity *pWeapon)
{
  CEntityIdentity *m_pEntity; // rsi
  CGameWeaponManager *v2; // rbx
  CEntityClass *m_pClass; // rdx
  CGameWeaponManager **v4; // rax
  __int16 v5; // cx
  __int64 m_Size; // r12
  int v7; // eax
  CHandle<CBaseEntity> *v8; // rax
  int v9; // [rsp-28h] [rbp-28h]

  if ( g_Managers.m_Size > 0 )
  {
    m_pEntity = pWeapon->m_pEntity;
    v2 = *g_Managers.m_Memory.m_pMemory;
    m_pClass = m_pEntity->m_pClass;
    if ( (*g_Managers.m_Memory.m_pMemory)->m_pWeaponClass == m_pClass )
    {
LABEL_7:
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      v9 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
      m_Size = v2->m_ManagedNonWeapons.m_Size;
      v7 = v2->m_ManagedNonWeapons.m_Size;
      if ( m_Size == v2->m_ManagedNonWeapons.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&v2->m_ManagedNonWeapons.m_Memory, 1);
        v7 = v2->m_ManagedNonWeapons.m_Size;
      }
      v2->m_ManagedNonWeapons.m_Size = v7 + 1;
      v8 = &v2->m_ManagedNonWeapons.m_Memory.m_pMemory[m_Size];
      if ( v8 != 0 )
        v8->m_Index = v9;
    }
    else
    {
      v4 = g_Managers.m_Memory.m_pMemory + 1;
      while ( v4 != &g_Managers.m_Memory.m_pMemory[(g_Managers.m_Size - 1) + 1] )
      {
        v2 = *v4++;
        if ( v2->m_pWeaponClass == m_pClass )
          goto LABEL_7;
      }
    }
  }
}


// WeaponManager_RemoveManaged  (line 123, @0x000000000226d3f0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FastRemove
// globals: g_Managers
void __fastcall WeaponManager_RemoveManaged(CBaseEntity *pWeapon)
{
  __int64 v2; // r12
  int i; // ebx
  CEntityIdentity *m_pEntity; // rax
  uint32 m_Index; // ecx
  int v6; // ecx
  __int16 v7; // si
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_ManagedNonWeapons; // r15
  int v9; // eax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-40h] BYREF

  v2 = 0;
  for ( i = 0; g_Managers.m_Size > i; ++v2 )
  {
    while ( 1 )
    {
      m_pEntity = pWeapon->m_pEntity;
      if ( g_Managers.m_Memory.m_pMemory[v2]->m_pWeaponClass == m_pEntity->m_pClass )
      {
        m_Index = m_pEntity->m_EHandle.m_Index;
        src.m_Index = -1;
        v6 = (m_Index >> 15) - (m_pEntity->m_flags & 1);
        v7 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (v6 << 15) | v7 & 0x7FFF;
        p_m_ManagedNonWeapons = &g_Managers.m_Memory.m_pMemory[v2]->m_ManagedNonWeapons;
        v9 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               p_m_ManagedNonWeapons,
               &src);
        if ( v9 != -1 )
          break;
      }
      ++i;
      ++v2;
      if ( g_Managers.m_Size <= i )
        return;
    }
    ++i;
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FastRemove(p_m_ManagedNonWeapons, v9);
  }
}


// CGameWeaponManager::Spawn  (line 140, @0x000000000225a200, libserver.so)  // inlines: GetDebugName, String, ToCStr, curtime
// calls: CBaseEntity::Spawn, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CEntitySystem::FindClassByDesignName, CreateEntityByName, __dynamic_cast, UTIL_Remove, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "%s removed itself!\n"
void __fastcall CGameWeaponManager::Spawn(CGameWeaponManager *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  const char *m_pAsString; // rsi
  CEntityClass *ClassByDesignName; // rax
  bool v8; // zf
  const char *v9; // rdi
  CBaseEntity *EntityByName; // rax
  CEntityInstance *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  const char *DebugName; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  CBaseEntity::ThinkSet(this, 0x3A9uLL, 0.0, 0, 0);
  v4 = 0.0;
  v5 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v4 = LODWORD(v5->m_flCurrentTime);
  }
  CBaseEntity::SetNextThink(this, v4, v3, 0);
  m_pAsString = "";
  if ( this->m_iszWeaponName.u.m_Id != 0 )
    m_pAsString = this->m_iszWeaponName.u.m_pAsString;
  ClassByDesignName = CEntitySystem::FindClassByDesignName(g_pEntitySystem, m_pAsString, 0);
  v8 = this->m_iszWeaponName.u.m_Id == 0;
  v9 = "";
  this->m_pWeaponClass = ClassByDesignName;
  if ( !v8 )
    v9 = this->m_iszWeaponName.u.m_pAsString;
  EntityByName = CreateEntityByName(v9, -1);
  v11 = EntityByName;
  if ( EntityByName != 0 )
  {
    this->m_bExpectingWeapon = __dynamic_cast(
                                 EntityByName,
                                 &`typeinfo for'CBaseEntity,
                                 &`typeinfo for'CBaseCombatWeapon,
                                 0) != 0;
    UTIL_Remove(v11);
  }
  else
  {
    DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
    DevMsg("%s removed itself!\n", DebugName);
    UTIL_Remove(this);
  }
}


// CGameWeaponManager::Think  (line 184, @0x0000000002275b20, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBaseEntity*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, String, ToCStr, UTIL_DistApprox, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CGlobalVarsBase::curtime, CBaseEntity::SetNextThink, CMemAllocSystemInitialize, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FastRemove, CBaseEntity::AddEffects, UTIL_Remove, DevMsg, CUtlMemory<CBaseEntity*, int>::Purge, UTIL_GetLocalPlayer, UTIL_FindClientInPVS, CBaseEntity::GetAbsOrigin, CGameEntitySystem::FindEntityByClassname (14 total)
// strings: "Surplus %s removed\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameWeaponManager::Think(CGameWeaponManager *const this)
{
  double v2; // xmm0_8
  double v3; // xmm1_8
  CBaseEntity **v4; // rax
  bool v5; // zf
  int v6; // ebx
  int v7; // esi
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *m_pInstance; // r13
  __int64 m_Size; // r14
  int v15; // eax
  CBaseEntity **v16; // rax
  int v17; // r14d
  __int64 v18; // r12
  int v19; // ebx
  CBaseEntity *v20; // r13
  const Vector *v21; // rax
  float v22; // xmm0_4
  CBaseEntity *i; // rbx
  CBaseEntity **v24; // rax
  __int64 v25; // r13
  const Vector *AbsOrigin; // [rsp+8h] [rbp-68h]
  CBasePlayer *pPlayer; // [rsp+10h] [rbp-60h]
  char *szName; // [rsp+18h] [rbp-58h]
  CUtlVector<CBaseEntity*,CUtlMemory<CBaseEntity*,int> > candidates; // [rsp+20h] [rbp-50h] BYREF

  *&v2 = CGlobalVarsBase::curtime(gpGlobals, 0) + 2.0;
  CBaseEntity::SetNextThink(this, v2, v3, 0);
  szName = "";
  if ( this->m_iszWeaponName.u.m_Id != 0 )
    szName = this->m_iszWeaponName.u.m_Id;
  candidates.m_Size = 0;
  candidates.m_Memory.m_pMemory = 0;
  candidates.m_Memory.m_nAllocationCount = 64;
  candidates.m_Memory.m_nGrowSize = 0;
  CMemAllocSystemInitialize();
  v4 = (**g_pMemAlloc)(g_pMemAlloc, 512);
  v5 = !this->m_bExpectingWeapon;
  candidates.m_Memory.m_pMemory = v4;
  if ( v5 )
  {
    v6 = 0;
    if ( this->m_ManagedNonWeapons.m_Size <= 0 )
      goto LABEL_18;
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = &this->m_ManagedNonWeapons.m_Memory.m_pMemory[v6];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 )
                break;
            }
          }
        }
        v7 = v6--;
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FastRemove(
          &this->m_ManagedNonWeapons,
          v7);
LABEL_7:
        if ( this->m_ManagedNonWeapons.m_Size <= ++v6 )
          goto LABEL_18;
      }
      if ( (m_pInstance[11].m_hPrivateScope.m_hScope & 0x20) != 0 )
        goto LABEL_7;
      m_Size = candidates.m_Size;
      v15 = candidates.m_Size;
      if ( candidates.m_Size == candidates.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CBaseEntity *,int>::Grow(&candidates.m_Memory, 1);
        v15 = candidates.m_Size;
      }
      candidates.m_Size = v15 + 1;
      v16 = &candidates.m_Memory.m_pMemory[m_Size];
      if ( v16 == 0 )
        goto LABEL_7;
      *v16 = m_pInstance;
      if ( this->m_ManagedNonWeapons.m_Size <= ++v6 )
        goto LABEL_18;
    }
  }
  for ( i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, 0, szName);
        i != 0;
        i = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, i, szName) )
  {
    if ( (i->m_fEffects.m_Value & 0x20) == 0 && i[1].m_Gender.m_Value != gender_t::GENDER_NONE )
    {
      v25 = candidates.m_Size;
      if ( candidates.m_Size == candidates.m_Memory.m_nAllocationCount )
        CUtlMemory<CBaseEntity *,int>::Grow(&candidates.m_Memory, 1);
      ++candidates.m_Size;
      v24 = &candidates.m_Memory.m_pMemory[v25];
      if ( v24 != 0 )
        *v24 = i;
    }
  }
LABEL_18:
  if ( candidates.m_Size <= 0 || (v17 = candidates.m_Size - this->m_iMaxPieces, v18 = 0, v19 = 0, v17 <= 0) )
  {
LABEL_20:
    if ( (candidates.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
      return;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v20 = candidates.m_Memory.m_pMemory[v18];
    if ( gpGlobals->maxClients != 1
      || (pPlayer = UTIL_GetLocalPlayer(), UTIL_FindClientInPVS(v20) == 0)
      || (*(pPlayer->_vptr_IHandleEntity + 264))(pPlayer, v20) == 0
      || (AbsOrigin = CBaseEntity::GetAbsOrigin(v20),
          v21 = CBaseEntity::GetAbsOrigin(pPlayer),
          (v22 = fabs(v21->x - AbsOrigin->x) + fabs(v21->y - AbsOrigin->y) + fabs(v21->z - AbsOrigin->z)) > 360.0) )
    {
      CBaseEntity::AddEffects(v20, 32);
      UTIL_Remove(v20);
      DevMsg(2, "Surplus %s removed\n", szName);
      --v17;
    }
    if ( candidates.m_Size <= ++v19 )
      break;
    ++v18;
    if ( v17 <= 0 )
      goto LABEL_20;
  }
  if ( (candidates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
LABEL_27:
    CUtlMemory<CBaseEntity *,int>::Purge(&candidates.m_Memory);
    if ( (candidates.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CBaseEntity *,int>::Purge(&candidates.m_Memory);
  }
}


// CGameWeaponManager::InputSetMaxPieces  (line 283, @0x0000000002254120, libserver.so)  // inlines: Int, operator int
void __fastcall CGameWeaponManager::InputSetMaxPieces(CGameWeaponManager *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  int m_float64; // eax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    this->m_iMaxPieces = inputdata->value.m_float;
  }
  else
  {
    if ( m_type == 34 )
      m_float64 = inputdata->value.m_float64;
    else
      m_float64 = inputdata->value.m_int;
    this->m_iMaxPieces = m_float64;
  }
}


// CGameWeaponManager::InputSetAmmoModifier  (line 290, @0x0000000002254170, libserver.so)  // inlines: Float, operator float
void __fastcall CGameWeaponManager::InputSetAmmoModifier(CGameWeaponManager *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flAmmoMod = m_float64;
}


