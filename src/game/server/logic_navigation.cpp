// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logic_navigation.cpp:26
class CLogicNavigation : public CLogicalEntity, public IEntityListener {
public:

private:

	static datamap_t m_DataMap;

	bool m_isOn;  // +0x310

	typedef CLogicalEntity BaseClass;

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
	CLogicNavigation(CLogicNavigation &);
	CLogicNavigation(CLogicNavigation &);
	CLogicNavigation();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void UpdateOnRemove();
	virtual void OnEntitySpawned(CEntityInstance *);
	void InputTurnOn(inputdata_t &);
	void InputTurnOff(inputdata_t &);
	void InputToggle(inputdata_t &);
	void TurnOn();
	void TurnOff();
	void UpdateProperty();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CLogicNavigation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[11] UpdateOnRemove
	// vtable[207] OnEntitySpawned
	// vtable[34] GetDataDescMap
	// sizeof = 792
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicNavigation::~CLogicNavigation  (line 26, @0x00000000022a94c0, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicNavigation::~CLogicNavigation(CLogicNavigation *const this)
{
  this->_vptr_IEntityListener = &off_405C840;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicNavigation::~CLogicNavigation  (line 26, @0x00000000022a94f0, libserver.so)  // inlines: ~CLogicNavigation, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicNavigation::~CLogicNavigation(CLogicNavigation *const this)
{
  this->_vptr_IEntityListener = &off_405C840;
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicNavigation::GetEntityClass  (line 29, @0x00000000022a56f0, libserver.so)
CEntityClass *__cdecl CLogicNavigation::GetEntityClass()
{
  return g_pEntityCLogicNavigationClass;
}


// CLogicNavigation::Schema_DynamicBinding  (line 29, @0x00000000022a5700, libserver.so)
// globals: CLogicNavigation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicNavigation::Schema_DynamicBinding(const CLogicNavigation *const this)
{
  return CLogicNavigation::s_pSchemaBinding;
}


// CLogicNavigation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x00000000022a5710, libserver.so)
// globals: CLogicNavigation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicNavigation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  return CLogicNavigation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicNavigation::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x00000000022a5720, libserver.so)  // inlines: Destruct<CLogicNavigation>
void __fastcall CLogicNavigation::CEntityInstanceEntityClass::DestructInstance(
        CLogicNavigation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicNavigation::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x00000000022a5740, libserver.so)
void __fastcall CLogicNavigation::CEntityInstanceEntityClass::FreeInstance(
        CLogicNavigation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicNavigation::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x00000000022a5760, libserver.so)
bool __fastcall CLogicNavigation::CEntityInstanceEntityClass::CanAllocate(
        const CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicNavigation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x00000000022a5770, libserver.so)
// globals: CLogicNavigation::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicNavigation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  return CLogicNavigation::s_pSchemaBinding;
}


// CLogicNavigation::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x00000000022a8000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicNavigation::CEntityInstanceEntityClass::AllocateInstance(
        CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CLogicNavigation::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x00000000022a8a70, libserver.so)  // inlines: CLogicNavigation, CLogicalEntity, CServerOnlyEntity, Construct<CLogicNavigation>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicNavigation::CEntityInstanceEntityClass::ConstructInstance(
        CLogicNavigation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_405C1B0;
    *(p + 97) = &off_405C840;
  }
  return p;
}


// CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000022aa9b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x00000000022aa9d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicNavigation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicNavigation::GetEntityClassInternal  (line 29, @0x00000000022b0890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_navigation", "CLogicNavigation"
// globals: `guard variable for'CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass, CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass, __dso_handle, CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo, CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo
CEntityClass *__cdecl CLogicNavigation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass);
    CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass._vptr_CEntityClass = off_405C130;
    __cxa_guard_release(&`guard variable for'CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass);
    __cxa_atexit(
      CLogicNavigation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicNavigationClass != 0 )
    return &CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass;
  if ( `guard variable for'CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo,
      "CLogicNavigation",
      "logic_navigation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo);
  }
  CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass.m_pClassInfo = &CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo;
  CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass.m_pBaseClassInfo = CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicNavigationClass = &CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass;
  CLogicNavigation::GetEntityClassInfo(void)::g_EntityCLogicNavigationClassInfo.m_pClass = &CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass;
  CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicNavigationClass->m_pComponentOverrides = 0;
  return &CLogicNavigation::GetEntityClassInternal(void)::g_EntityCLogicNavigationClass;
}


// CLogicNavigation::InputTurnOn  (line 41, @0x00000000022b09e0, libserver.so)  // inlines: TurnOn
// calls: CLogicNavigation::TurnOn
void __fastcall CLogicNavigation::InputTurnOn(CLogicNavigation *const this, inputdata_t *const inputdata)
{
  if ( !this->m_isOn )
    CLogicNavigation::TurnOn(this);
}


// CLogicNavigation::InputTurnOff  (line 42, @0x00000000022b0a20, libserver.so)  // inlines: TurnOff
// calls: CLogicNavigation::TurnOff
void __fastcall CLogicNavigation::InputTurnOff(CLogicNavigation *const this, inputdata_t *const inputdata)
{
  if ( this->m_isOn )
    CLogicNavigation::TurnOff(this);
}


// CLogicNavigation::InputToggle  (line 43, @0x00000000022b0a00, libserver.so)  // inlines: TurnOff, TurnOn
// calls: CLogicNavigation::TurnOff, CLogicNavigation::TurnOn
void __fastcall CLogicNavigation::InputToggle(CLogicNavigation *const this, inputdata_t *const inputdata)
{
  if ( this->m_isOn )
    CLogicNavigation::TurnOff(this);
  else
    CLogicNavigation::TurnOn(this);
}


// CLogicNavigation::GetDataDescMap  (line 62, @0x0000000002283ad0, libserver.so)
// globals: CLogicNavigation::m_DataMap
datamap_t *__fastcall CLogicNavigation::GetDataDescMap(CLogicNavigation *const this)
{
  return &CLogicNavigation::m_DataMap;
}


// CLogicNavigation::AddDatadescMetadataKeys  (line 62, @0x00000000022916e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicNavigation::GetEntityClass(void)
void __fastcall CLogicNavigation::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicNavigation::GetEntityClass);
}


// CLogicNavigation::GetBaseMap  (line 62, @0x0000000002291700, libserver.so)
datamap_t *__cdecl CLogicNavigation::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicNavigation>  (line 62, @0x0000000002291710, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicNavigation"
// globals: `guard variable for'DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder, CLogicNavigation::GetEntityClass(void), CLogicNavigation::m_DataMap, DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicNavigation>(CLogicNavigation *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_pszBase = "CLogicNavigation";
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicNavigation>(CLogicNavigation *)::nameHolder,
      &_dso_handle);
  }
  CLogicNavigation::m_DataMap.dataNumFields = 5;
  CLogicNavigation::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CLogicNavigation::m_DataMap.dataDesc = &DataMapInit<CLogicNavigation>(CLogicNavigation *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicNavigation::m_DataMap, CLogicNavigation::GetEntityClass);
  return &CLogicNavigation::m_DataMap;
}


// CLogicNavigation::Spawn  (line 82, @0x000000000228d540, libserver.so)  // inlines: Base, Element, FindKeyHash, GetValue, GetValueString, TempString, operator[]
// calls: CLogicalEntity::Spawn, CEntityKeyValues::HasValue, V_stricmp_fast, DevMsg
// strings: "Unknown nav property %s\n"
// globals: CEntityKeyValues::sm_EmptyVariant
void __fastcall CLogicNavigation::Spawn(CLogicNavigation *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 v6; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  const char *m_uint64; // rbx
  CEntityVariant *p_m_value; // rax

  CLogicalEntity::Spawn(this, pKeyValues);
  if ( !CEntityKeyValues::HasValue(pKeyValues, 826037095) )
    return;
  m_nCount = pKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_14:
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
    m_uint64 = 0;
    if ( CEntityKeyValues::sm_EmptyVariant.m_type == 30 )
      goto LABEL_13;
    goto LABEL_15;
  }
  m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
  v6 = 0;
  while ( m_nAllocated == 0 )
  {
    if ( *(4 * v6) == 826037095 )
      goto LABEL_10;
LABEL_7:
    if ( m_nCount <= ++v6 )
      goto LABEL_14;
  }
  m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
  if ( m_nAllocated > 9 )
    m_pElements = pKeyValues->m_keyHashes.m_pElements;
  if ( m_pElements[v6] != 826037095 )
    goto LABEL_7;
LABEL_10:
  if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
    v8 = pKeyValues->m_keyValues.m_pElements;
  else
    v8 = 0;
  m_uint64 = 0;
  p_m_value = &v8[v6].m_value;
  if ( p_m_value->m_type == 30 )
LABEL_13:
    m_uint64 = p_m_value->m_uint64;
LABEL_15:
  if ( V_stricmp_fast(m_uint64, "Ignore") != 0 )
    DevMsg(1, "Unknown nav property %s\n", m_uint64);
  else
    this->m_navProperty = navproperties_t::NAV_IGNORE;
}


// CLogicNavigation::Activate  (line 103, @0x0000000002291960, libserver.so)  // inlines: HasSpawnFlags, NetworkStateChanged, RemoveSpawnFlags, Set, TurnOn, operator&=<int>
// calls: CBaseEntity::Activate, CGameEntitySystem::AddListenerEntity, CLogicNavigation::TurnOn
void __fastcall CLogicNavigation::Activate(CLogicNavigation *const this, ActivateType_t activateType)
{
  unsigned int m_Value; // eax
  unsigned int v4; // r12d

  CBaseEntity::Activate(this, activateType);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 1) != 0 )
  {
    if ( this->m_isOn )
    {
      v4 = m_Value & 0xFFFFFFFE;
      if ( (m_Value & 0xFFFFFFFE) == m_Value )
        return;
    }
    else
    {
      CLogicNavigation::TurnOn(this);
      v4 = this->m_spawnflags.m_Value & 0xFFFFFFFE;
      if ( v4 == this->m_spawnflags.m_Value )
        return;
    }
    (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_spawnflags.m_Value = v4;
  }
  else if ( this->m_isOn )
  {
    CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  }
}


// CLogicNavigation::UpdateOnRemove  (line 121, @0x0000000002284b00, libserver.so)
// calls: CGameEntitySystem::RemoveListenerEntity, CBaseEntity::UpdateOnRemove
void __fastcall CLogicNavigation::UpdateOnRemove(CLogicNavigation *const this)
{
  if ( this->m_isOn )
    CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  CBaseEntity::UpdateOnRemove(this);
}


// CLogicNavigation::OnEntitySpawned  (line 134, @0x000000000228af60, libserver.so)  // inlines: CUtlSymbolLarge, NameMatches, NetworkStateChanged, Set, SetNavIgnore, operator=<float>
// calls: CEntityIdentity::NameMatches
void __fastcall CLogicNavigation::OnEntitySpawned(CLogicNavigation *const this, CEntityInstance *pIEntity)
{
  UtlSymLargeId_t m_Id; // rax
  CEntityIdentity *m_pEntity; // rdi
  const char *v5; // rsi

  if ( pIEntity != 0 && this->m_isOn && (this->m_navProperty & 1) != 0 )
  {
    m_Id = this->m_target.u.m_Id;
    m_pEntity = pIEntity->m_pEntity;
    if ( m_Id == m_pEntity->m_name.u.m_Id )
      goto LABEL_9;
    v5 = "";
    if ( m_Id != 0 )
      v5 = m_Id;
    if ( CEntityIdentity::NameMatches(m_pEntity, v5) )
    {
LABEL_9:
      if ( *(&pIEntity[15].m_pEntity + 1) < 3.4028235e38 )
      {
        (*(pIEntity->_vptr_IHandleEntity + 22))(pIEntity, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        HIDWORD(pIEntity[15].m_pEntity) = 2139095039;
      }
    }
  }
}


// CLogicNavigation::TurnOn  (line 149, @0x0000000002291900, libserver.so)
// calls: CGameEntitySystem::AddListenerEntity, CLogicNavigation::UpdateProperty
// callers: CLogicNavigation::TurnOn, CLogicNavigation::InputTurnOn, CLogicNavigation::Activate, CLogicNavigation::InputToggle
void __fastcall CLogicNavigation::TurnOn(CLogicNavigation *const this)
{
  this->m_isOn = 1;
  CGameEntitySystem::AddListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  CLogicNavigation::UpdateProperty(this);
}


// CLogicNavigation::TurnOn  (line 149, @0x0000000002291940, libserver.so)
// calls: CLogicNavigation::TurnOn
void __fastcall CLogicNavigation::TurnOn(CLogicNavigation *const this)
{
  if ( !this->m_isOn )
    CLogicNavigation::TurnOn(this);
}


// CLogicNavigation::UpdateProperty  (line 159, @0x00000000022917e0, libserver.so)  // inlines: ClearNavIgnore, NetworkStateChanged, Set, SetNavIgnore, String, ToCStr, operator=<float>, operator=<int>
// calls: CGameEntitySystem::FindEntityByName
// callers: CLogicNavigation::TurnOn, CLogicNavigation::TurnOff
void __fastcall CLogicNavigation::UpdateProperty(CLogicNavigation *const this)
{
  CBaseEntity *EntityByName; // rax
  const char *m_pAsString; // rdx
  double v4; // xmm0_8
  CBaseEntity *pEntity; // [rsp+8h] [rbp-18h]
  CBaseEntity *pEntitya; // [rsp+8h] [rbp-18h]

  EntityByName = 0;
  while ( 1 )
  {
    m_pAsString = "";
    if ( this->m_target.u.m_Id != 0 )
      m_pAsString = this->m_target.u.m_pAsString;
    EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, EntityByName, m_pAsString, this, 0, 0, 0);
    if ( EntityByName == 0 )
      break;
    if ( this->m_isOn )
    {
      if ( (this->m_navProperty & 1) != 0 && EntityByName->m_flNavIgnoreUntilTime.m_Value < 3.4028235e38 )
      {
        pEntity = EntityByName;
        (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        EntityByName = pEntity;
        pEntity->m_flNavIgnoreUntilTime.m_Value = 3.4028235e38;
      }
    }
    else if ( (this->m_navProperty & 1) != 0 && EntityByName->m_flNavIgnoreUntilTime.m_Value != 0.0 )
    {
      pEntitya = EntityByName;
      (*(EntityByName->_vptr_IHandleEntity + 22))(EntityByName, 732, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v4, 0.0);
      EntityByName = pEntitya;
      pEntitya->m_flNavIgnoreUntilTime.m_Value = 0.0;
    }
  }
}


// CLogicNavigation::TurnOff  (line 180, @0x0000000002291a00, libserver.so)
// calls: CGameEntitySystem::RemoveListenerEntity, CLogicNavigation::UpdateProperty
// callers: CLogicNavigation::InputToggle, CLogicNavigation::InputTurnOff, CLogicNavigation::TurnOff
void __fastcall CLogicNavigation::TurnOff(CLogicNavigation *const this)
{
  this->m_isOn = 0;
  CGameEntitySystem::RemoveListenerEntity(g_pGameEntitySystem, &this->IEntityListener);
  CLogicNavigation::UpdateProperty(this);
}


// CLogicNavigation::TurnOff  (line 180, @0x0000000002291a40, libserver.so)
// calls: CLogicNavigation::TurnOff
void __fastcall CLogicNavigation::TurnOff(CLogicNavigation *const this)
{
  if ( this->m_isOn )
    CLogicNavigation::TurnOff(this);
}


