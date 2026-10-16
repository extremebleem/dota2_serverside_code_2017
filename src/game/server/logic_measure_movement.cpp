// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logic_measure_movement.cpp:18
class CLogicMeasureMovement : public CLogicalEntity {
	enum {
		MEASURE_POSITION = 0,
		MEASURE_EYE_POSITION = 0x1,
	};

public:

private:

	static datamap_t m_DataMap;

	string_t m_strMeasureTarget;  // +0x308
	string_t m_strMeasureReference;  // +0x310
	string_t m_strTargetReference;  // +0x318
	EHANDLE m_hMeasureTarget;  // +0x320
	EHANDLE m_hMeasureReference;  // +0x324
	EHANDLE m_hTarget;  // +0x328
	EHANDLE m_hTargetReference;  // +0x32c
	float m_flScale;  // +0x330
	int m_nMeasureType;  // +0x334
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
	CLogicMeasureMovement(CLogicMeasureMovement &);
	CLogicMeasureMovement(CLogicMeasureMovement &);
	CLogicMeasureMovement();
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
	void SetMeasureTarget(const char *);
	void SetMeasureReference(const char *);
	void SetTarget(const char *);
	void SetTargetReference(const char *);
	void InputSetMeasureTarget(inputdata_t &);
	void InputSetMeasureReference(inputdata_t &);
	void InputSetTarget(inputdata_t &);
	void InputSetTargetReference(inputdata_t &);
	void InputSetTargetScale(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void MeasureThink();
	virtual ~CLogicMeasureMovement();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// sizeof = 824
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicMeasureMovement::~CLogicMeasureMovement  (line 18, @0x00000000022a9470, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicMeasureMovement::~CLogicMeasureMovement(CLogicMeasureMovement *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicMeasureMovement::~CLogicMeasureMovement  (line 18, @0x00000000022a9490, libserver.so)  // inlines: ~CLogicMeasureMovement, ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicMeasureMovement::~CLogicMeasureMovement(CLogicMeasureMovement *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicMeasureMovement::GetEntityClass  (line 20, @0x00000000022a5660, libserver.so)
CEntityClass *__cdecl CLogicMeasureMovement::GetEntityClass()
{
  return g_pEntityCLogicMeasureMovementClass;
}


// CLogicMeasureMovement::Schema_DynamicBinding  (line 20, @0x00000000022a5670, libserver.so)
// globals: CLogicMeasureMovement::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicMeasureMovement::Schema_DynamicBinding(
        const CLogicMeasureMovement *const this)
{
  return CLogicMeasureMovement::s_pSchemaBinding;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x00000000022a5680, libserver.so)
// globals: CLogicMeasureMovement::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  return CLogicMeasureMovement::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x00000000022a5690, libserver.so)  // inlines: Destruct<CLogicMeasureMovement>
void __fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::DestructInstance(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x00000000022a56b0, libserver.so)
void __fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::FreeInstance(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x00000000022a56d0, libserver.so)
bool __fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::CanAllocate(
        const CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x00000000022a56e0, libserver.so)
// globals: CLogicMeasureMovement::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  return CLogicMeasureMovement::s_pSchemaBinding;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x00000000022a7fc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::AllocateInstance(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 824);
  memset(v1, 0, 0x338u);
  return v1;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x00000000022a89f0, libserver.so)  // inlines: CEntityHandle, CHandle, CLogicMeasureMovement, CLogicalEntity, CServerOnlyEntity, CUtlSymbolLarge, Construct<CLogicMeasureMovement>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::ConstructInstance(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_405B950;
    *(p + 98) = 0;
    *(p + 99) = 0;
    *(p + 200) = -1;
    *(p + 201) = -1;
    *(p + 202) = -1;
    *(p + 203) = -1;
  }
  return p;
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000022aa960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000022aa980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicMeasureMovement::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicMeasureMovement::GetEntityClassInternal  (line 20, @0x00000000022b06d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_measure_movement", "CLogicMeasureMovement"
// globals: `guard variable for'CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass, CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass, __dso_handle, CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo, CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo
CEntityClass *__cdecl CLogicMeasureMovement::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass);
    CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass._vptr_CEntityClass = off_405B8D0;
    __cxa_guard_release(&`guard variable for'CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass);
    __cxa_atexit(
      CLogicMeasureMovement::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicMeasureMovementClass != 0 )
    return &CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass;
  if ( `guard variable for'CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo,
      "CLogicMeasureMovement",
      "logic_measure_movement",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo);
  }
  CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass.m_pClassInfo = &CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo;
  CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass.m_pBaseClassInfo = CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicMeasureMovementClass = &CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass;
  CLogicMeasureMovement::GetEntityClassInfo(void)::g_EntityCLogicMeasureMovementClassInfo.m_pClass = &CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass;
  CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicMeasureMovementClass->m_pComponentOverrides = 0;
  return &CLogicMeasureMovement::GetEntityClassInternal(void)::g_EntityCLogicMeasureMovementClass;
}


// CLogicMeasureMovement::GetDataDescMap  (line 64, @0x0000000002283a80, libserver.so)
// globals: CLogicMeasureMovement::m_DataMap
datamap_t *__fastcall CLogicMeasureMovement::GetDataDescMap(CLogicMeasureMovement *const this)
{
  return &CLogicMeasureMovement::m_DataMap;
}


// CLogicMeasureMovement::AddDatadescMetadataKeys  (line 64, @0x000000000228f1e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicMeasureMovement::GetEntityClass(void)
void __fastcall CLogicMeasureMovement::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicMeasureMovement::GetEntityClass);
}


// CLogicMeasureMovement::GetBaseMap  (line 64, @0x000000000228f200, libserver.so)
datamap_t *__cdecl CLogicMeasureMovement::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CLogicMeasureMovement>  (line 64, @0x00000000022a0ba0, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicMeasureMovement"
// globals: `guard variable for'DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder, `guard variable for'DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc, CLogicMeasureMovement::GetEntityClass(void), CLogicMeasureMovement::m_DataMap, DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_pszBase = "CLogicMeasureMovement";
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_nLenBase = 21;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder,
      &_dso_handle);
  }
  CLogicMeasureMovement::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc) != 0 )
  {
    v2 = operator new[](DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_nLenBase + 13);
    strcpy(
      stpcpy(v2, DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_pszBase),
      "MeasureThink");
    m_Size = DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size == DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(
        &DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory,
        1);
      v4 = DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc[17].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc);
  }
  CLogicMeasureMovement::m_DataMap.dataNumFields = 17;
  CLogicMeasureMovement::m_DataMap.dataDesc = &DataMapInit<CLogicMeasureMovement>(CLogicMeasureMovement *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicMeasureMovement::m_DataMap, CLogicMeasureMovement::GetEntityClass);
  return &CLogicMeasureMovement::m_DataMap;
}


// CLogicMeasureMovement::Activate  (line 94, @0x0000000002290750, libserver.so)  // inlines: String, ToCStr, curtime
// calls: CBaseEntity::Activate, CLogicMeasureMovement::SetMeasureTarget, CLogicMeasureMovement::SetMeasureReference, CLogicMeasureMovement::SetTarget, CLogicMeasureMovement::SetTargetReference, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CLogicMeasureMovement::MeasureThink(void)
void __fastcall CLogicMeasureMovement::Activate(CLogicMeasureMovement *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi
  double v7; // xmm1_8
  CGlobalVars *v8; // r12
  CGlobalVars *v9; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v11; // xmm0_8

  CBaseEntity::Activate(this, activateType);
  m_pAsString = "";
  if ( this->m_strMeasureTarget.u.m_Id != 0 )
    m_pAsString = this->m_strMeasureTarget.u.m_pAsString;
  CLogicMeasureMovement::SetMeasureTarget(this, m_pAsString);
  v4 = "";
  if ( this->m_strMeasureReference.u.m_Id != 0 )
    v4 = this->m_strMeasureReference.u.m_pAsString;
  CLogicMeasureMovement::SetMeasureReference(this, v4);
  v5 = "";
  if ( this->m_target.u.m_Id != 0 )
    v5 = this->m_target.u.m_pAsString;
  CLogicMeasureMovement::SetTarget(this, v5);
  v6 = "";
  if ( this->m_strTargetReference.u.m_Id != 0 )
    v6 = this->m_strTargetReference.u.m_pAsString;
  CLogicMeasureMovement::SetTargetReference(this, v6);
  CBaseEntity::ThinkSet(this, CLogicMeasureMovement::MeasureThink, 0.0, 0, 0);
  v8 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v9 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v9 = gpGlobals;
    }
    *&v11 = LODWORD(v8->m_flCurrentTime);
  }
  else
  {
    v9 = 0;
    v11 = 0.0;
  }
  *&v11 = *&v11 + v9->interval_per_tick;
  CBaseEntity::SetNextThink(this, v11, v7, 0);
}


// CLogicMeasureMovement::SetMeasureTarget  (line 111, @0x000000000228f210, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, String, ToCStr, V_strnicmp_fast<int>, operator CEntityInstance*, operator!, operator=
// calls: CGameEntitySystem::FindEntityByName, _V_strnicmp_fast, Warning
// callers: CLogicMeasureMovement::MeasureThink, CLogicMeasureMovement::Activate, CLogicMeasureMovement::InputSetMeasureTarget
// strings: "!player", "logic_measure_movement: Unable to find measure target entity %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicMeasureMovement::SetMeasureTarget(CLogicMeasureMovement *const this, const char *pName)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  int v7; // eax
  __int16 v8; // cx
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const char *m_pAsString; // rdi

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_hMeasureTarget.m_Index = -1;
LABEL_9:
    m_pAsString = "";
    if ( this->m_strMeasureTarget.u.m_Id != 0 )
      m_pAsString = this->m_strMeasureTarget.u.m_pAsString;
    if ( _V_strnicmp_fast(m_pAsString, "!player", 8) != 0 )
      Warning("logic_measure_movement: Unable to find measure target entity %s\n", pName);
    return;
  }
  v6 = 0x7FFF;
  v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v8 = v6 | this->m_hMeasureTarget.m_Index & 0x8000;
  v9 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hMeasureTarget.m_Index) = v8;
  v10 = (v7 << 15) | this->m_hMeasureTarget.m_Index & 0x7FFF;
  this->m_hMeasureTarget.m_Index = v10;
  if ( v10 + 2 <= 1 )
    goto LABEL_9;
  v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_9;
  v12 = &v11[this->m_hMeasureTarget.m_Index & 0x1FF];
  if ( v12 == 0 || v10 != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
    goto LABEL_9;
}


// CLogicMeasureMovement::SetMeasureReference  (line 123, @0x000000000228f970, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!, operator=
// calls: CGameEntitySystem::FindEntityByName, Warning
// callers: CLogicMeasureMovement::InputSetMeasureReference, CLogicMeasureMovement::Activate
// strings: "logic_measure_movement: Unable to find measure reference entity %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicMeasureMovement::SetMeasureReference(CLogicMeasureMovement *const this, const char *pName)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  int v7; // eax
  __int16 v8; // cx
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_hMeasureReference.m_Index = -1;
LABEL_9:
    Warning("logic_measure_movement: Unable to find measure reference entity %s\n", pName);
    return;
  }
  v6 = 0x7FFF;
  v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v8 = v6 | this->m_hMeasureReference.m_Index & 0x8000;
  v9 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hMeasureReference.m_Index) = v8;
  v10 = (v7 << 15) | this->m_hMeasureReference.m_Index & 0x7FFF;
  this->m_hMeasureReference.m_Index = v10;
  if ( v10 + 2 <= 1 )
    goto LABEL_9;
  v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hMeasureReference.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_9;
  v12 = &v11[this->m_hMeasureReference.m_Index & 0x1FF];
  if ( v12 == 0 || v10 != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
    goto LABEL_9;
}


// CLogicMeasureMovement::SetTarget  (line 132, @0x000000000228ffd0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!, operator=
// calls: CGameEntitySystem::FindEntityByName, Warning
// callers: CLogicMeasureMovement::InputSetTarget, CLogicMeasureMovement::Activate, CLogicMeasureMovement::InputSetMeasureTarget
// strings: "logic_measure_movement: Unable to find movement target entity %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicMeasureMovement::SetTarget(CLogicMeasureMovement *const this, const char *pName)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  int v7; // eax
  __int16 v8; // cx
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_hTarget.m_Index = -1;
LABEL_9:
    Warning("logic_measure_movement: Unable to find movement target entity %s\n", pName);
    return;
  }
  v6 = 0x7FFF;
  v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v8 = v6 | this->m_hTarget.m_Index & 0x8000;
  v9 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hTarget.m_Index) = v8;
  v10 = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  this->m_hTarget.m_Index = v10;
  if ( v10 + 2 <= 1 )
    goto LABEL_9;
  v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_9;
  v12 = &v11[this->m_hTarget.m_Index & 0x1FF];
  if ( v12 == 0 || v10 != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
    goto LABEL_9;
}


// CLogicMeasureMovement::SetTargetReference  (line 141, @0x0000000002290630, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, LookupEntity, Set, operator CEntityInstance*, operator!, operator=
// calls: CGameEntitySystem::FindEntityByName, Warning
// callers: CLogicMeasureMovement::Activate, CLogicMeasureMovement::InputSetMeasureTarget, CLogicMeasureMovement::InputSetTargetReference
// strings: "logic_measure_movement: Unable to find movement reference entity %s\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicMeasureMovement::SetTargetReference(CLogicMeasureMovement *const this, const char *pName)
{
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // si
  int v7; // eax
  __int16 v8; // cx
  CConcreteEntityList *v9; // rsi
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, pName, this, 0, 0, 0);
  if ( EntityByName == 0 || (m_pEntity = EntityByName->m_pEntity) == 0 )
  {
    this->m_hTargetReference.m_Index = -1;
LABEL_9:
    Warning("logic_measure_movement: Unable to find movement reference entity %s\n", pName);
    return;
  }
  v6 = 0x7FFF;
  v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
  if ( m_pEntity->m_EHandle.m_Index != -1 )
    v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
  v8 = v6 | this->m_hTargetReference.m_Index & 0x8000;
  v9 = CEntityHandle::gm_pEntityList;
  LOWORD(this->m_hTargetReference.m_Index) = v8;
  v10 = (v7 << 15) | this->m_hTargetReference.m_Index & 0x7FFF;
  this->m_hTargetReference.m_Index = v10;
  if ( v10 + 2 <= 1 )
    goto LABEL_9;
  v11 = v9->m_pIdentityChunks[(LOWORD(this->m_hTargetReference.m_Index) >> 9) & 0x3F];
  if ( v11 == 0 )
    goto LABEL_9;
  v12 = &v11[this->m_hTargetReference.m_Index & 0x1FF];
  if ( v12 == 0 || v10 != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
    goto LABEL_9;
}


// CLogicMeasureMovement::MeasureThink  (line 154, @0x000000000228f370, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MatrixAngles, MatrixPosition, MatrixSetColumn, SetColumn, String, ToCStr, V_strnicmp_fast<int>, curtime, operator CEntityInstance*, operator->, operator/=
// calls: _V_strnicmp_fast, CLogicMeasureMovement::SetMeasureTarget, CBaseEntity::SetNextThink, CBaseEntity::EntityToWorldTransform, ConcatTransforms, MatrixInvert, MatrixAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CEntityHandle::operator CEntityInstance*, AngleIMatrix
// strings: "!player"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CLogicMeasureMovement::MeasureThink(CLogicMeasureMovement *const this)
{
  double v1; // xmm1_8
  uint32 m_Index; // eax
  CConcreteEntityList *v4; // rcx
  CEntityIdentity *v5; // rdx
  unsigned __int64 m_Index_low; // rsi
  char *v7; // rdx
  const char *m_pAsString; // rdi
  const char *v9; // rsi
  CEntityIdentity *v10; // rdx
  CGlobalVars *v11; // r12
  CGlobalVars *v12; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v14; // xmm0_8
  CBaseEntity *m_pInstance; // rdi
  uint32 v16; // eax
  int m_nMeasureType; // edx
  CBaseEntity *v18; // rdi
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  matrix3x4_t *v21; // rax
  float m_flScale; // xmm0_4
  uint32 v23; // eax
  CBaseEntity *v24; // rdi
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  matrix3x4_t *v27; // rax
  CBaseEntity *v28; // rdi
  uint32 v29; // eax
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  uint32 v32; // eax
  CBaseEntity *v33; // rdi
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  matrix3x4_t *v36; // rax
  float v37; // xmm1_4
  CEntityInstance *v38; // rax
  const QAngle *v39; // rax
  Vector vecNewOrigin; // [rsp+0h] [rbp-100h] BYREF
  QAngle vecNewAngles; // [rsp+10h] [rbp-F0h] BYREF
  matrix3x4_t matRefToMeasure; // [rsp+20h] [rbp-E0h] BYREF
  matrix3x4_t matWorldToMeasure; // [rsp+50h] [rbp-B0h] BYREF
  matrix3x4_t matMeasureToRef; // [rsp+80h] [rbp-80h] BYREF
  matrix3x4_t matNewTargetToWorld; // [rsp+B0h] [rbp-50h] BYREF

  m_Index = this->m_hMeasureTarget.m_Index;
  v4 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMeasureTarget.m_Index) >> 9) & 0x3F]) == 0
    || (m_Index_low = 120LL * (this->m_hMeasureTarget.m_Index & 0x1FF), (v7 = v5 + m_Index_low) == 0)
    || m_Index != *(v7 + 4)
    || *v7 == 0 )
  {
    m_pAsString = "";
    if ( this->m_strMeasureTarget.u.m_Id != 0 )
      m_pAsString = this->m_strMeasureTarget.u.m_pAsString;
    if ( _V_strnicmp_fast(m_pAsString, "!player", 8) == 0 )
    {
      v9 = "";
      if ( this->m_strMeasureTarget.u.m_Id != 0 )
        v9 = this->m_strMeasureTarget.u.m_pAsString;
      CLogicMeasureMovement::SetMeasureTarget(this, v9);
    }
    v4 = CEntityHandle::gm_pEntityList;
    m_Index = this->m_hMeasureTarget.m_Index;
  }
  v10 = (m_Index + 2);
  if ( v10 > 1 )
  {
    m_Index_low = LOWORD(this->m_hMeasureTarget.m_Index);
    v10 = v4->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      m_Index_low = 120 * (m_Index_low & 0x1FF);
      v10 = (v10 + m_Index_low);
      if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
      {
        m_pInstance = v10->m_pInstance;
        if ( v10->m_pInstance != 0 )
        {
          v16 = this->m_hMeasureReference.m_Index;
          v10 = (v16 + 2);
          if ( v10 > 1 )
          {
            m_Index_low = LOWORD(this->m_hMeasureReference.m_Index);
            v10 = v4->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              m_Index_low = 120 * (m_Index_low & 0x1FF);
              v10 = (v10 + m_Index_low);
              if ( v10 != 0 && v16 == v10->m_EHandle.m_Index && v10->m_pInstance != 0 )
              {
                v10 = this->m_hTarget.m_Index;
                m_Index_low = (v10 + 2);
                if ( m_Index_low > 1 )
                {
                  m_Index_low = v4->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
                  if ( m_Index_low != 0 )
                  {
                    m_Index_low += 120LL * (this->m_hTarget.m_Index & 0x1FF);
                    if ( m_Index_low != 0 && v10 == *(m_Index_low + 16) && *m_Index_low != 0 )
                    {
                      v10 = this->m_hTargetReference.m_Index;
                      m_Index_low = (v10 + 2);
                      if ( m_Index_low > 1 )
                      {
                        m_Index_low = v4->m_pIdentityChunks[(LOWORD(this->m_hTargetReference.m_Index) >> 9) & 0x3F];
                        if ( m_Index_low != 0 )
                        {
                          m_Index_low += 120LL * (this->m_hTargetReference.m_Index & 0x1FF);
                          if ( m_Index_low != 0 && v10 == *(m_Index_low + 16) && *m_Index_low != 0 )
                          {
                            m_nMeasureType = this->m_nMeasureType;
                            if ( m_nMeasureType != 0 )
                            {
                              if ( m_nMeasureType == 1 )
                              {
                                *&matNewTargetToWorld.m_flMatVal[0][0] = (*(m_pInstance->_vptr_IHandleEntity + 164))(m_pInstance);
                                matNewTargetToWorld.m_flMatVal[0][2] = v37;
                                v38 = CEntityHandle::operator CEntityInstance *(&this->m_hMeasureTarget);
                                v39 = (*(v38->_vptr_IHandleEntity + 165))(v38);
                                AngleIMatrix(v39, &matNewTargetToWorld, &matWorldToMeasure);
                                v4 = CEntityHandle::gm_pEntityList;
                                v16 = this->m_hMeasureReference.m_Index;
                              }
                            }
                            else
                            {
                              v36 = CBaseEntity::EntityToWorldTransform(m_pInstance);
                              MatrixInvert(v36, &matWorldToMeasure);
                              v4 = CEntityHandle::gm_pEntityList;
                              v16 = this->m_hMeasureReference.m_Index;
                            }
                            v18 = 0;
                            if ( v16 + 2 > 1 )
                            {
                              v19 = v4->m_pIdentityChunks[(LOWORD(this->m_hMeasureReference.m_Index) >> 9) & 0x3F];
                              if ( v19 != 0 )
                              {
                                v20 = &v19[this->m_hMeasureReference.m_Index & 0x1FF];
                                if ( v20 != 0 && v16 == v20->m_EHandle.m_Index )
                                  v18 = v20->m_pInstance;
                              }
                            }
                            v21 = CBaseEntity::EntityToWorldTransform(v18);
                            ConcatTransforms(&matWorldToMeasure, v21, &matRefToMeasure);
                            m_flScale = this->m_flScale;
                            if ( m_flScale != 0.0 && m_flScale != 1.0 )
                            {
                              matRefToMeasure.m_flMatVal[1][3] = matRefToMeasure.m_flMatVal[1][3] * (1.0 / m_flScale);
                              matRefToMeasure.m_flMatVal[2][3] = matRefToMeasure.m_flMatVal[2][3] * (1.0 / m_flScale);
                              matRefToMeasure.m_flMatVal[0][3] = (1.0 / m_flScale) * matRefToMeasure.m_flMatVal[0][3];
                            }
                            MatrixInvert(&matRefToMeasure, &matMeasureToRef);
                            v23 = this->m_hTargetReference.m_Index;
                            v24 = 0;
                            if ( v23 + 2 > 1 )
                            {
                              v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTargetReference.m_Index) >> 9)
                                                                                   & 0x3F];
                              if ( v25 != 0 )
                              {
                                v26 = &v25[this->m_hTargetReference.m_Index & 0x1FF];
                                if ( v26 != 0 && v23 == v26->m_EHandle.m_Index )
                                  v24 = v26->m_pInstance;
                              }
                            }
                            v27 = CBaseEntity::EntityToWorldTransform(v24);
                            ConcatTransforms(v27, &matMeasureToRef, &matNewTargetToWorld);
                            MatrixAngles(&matNewTargetToWorld, &vecNewAngles);
                            v28 = 0;
                            v29 = this->m_hTarget.m_Index;
                            vecNewOrigin.x = matNewTargetToWorld.m_flMatVal[0][3];
                            vecNewOrigin.y = matNewTargetToWorld.m_flMatVal[1][3];
                            vecNewOrigin.z = matNewTargetToWorld.m_flMatVal[2][3];
                            if ( v29 + 2 > 1 )
                            {
                              v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9)
                                                                                   & 0x3F];
                              if ( v30 != 0 )
                              {
                                v31 = &v30[this->m_hTarget.m_Index & 0x1FF];
                                if ( v31 != 0 && v29 == v31->m_EHandle.m_Index )
                                  v28 = v31->m_pInstance;
                              }
                            }
                            CBaseEntity::SetAbsOrigin(v28, &vecNewOrigin);
                            v32 = this->m_hTarget.m_Index;
                            v33 = 0;
                            if ( v32 + 2 > 1 )
                            {
                              v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9)
                                                                                   & 0x3F];
                              if ( v34 != 0 )
                              {
                                v35 = &v34[this->m_hTarget.m_Index & 0x1FF];
                                if ( v35 != 0 && v32 == v35->m_EHandle.m_Index )
                                  v33 = v35->m_pInstance;
                              }
                            }
                            CBaseEntity::SetAbsAngles(v33, &vecNewAngles);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v12 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, m_Index_low, v10, v4);
      v12 = gpGlobals;
    }
    *&v14 = LODWORD(v11->m_flCurrentTime);
  }
  else
  {
    v12 = 0;
    v14 = 0.0;
  }
  *&v14 = *&v14 + v12->interval_per_tick;
  CBaseEntity::SetNextThink(this, v14, v1, 0);
}


// CLogicMeasureMovement::InputEnable  (line 211, @0x0000000002289720, libserver.so)  // inlines: curtime
// calls: CBaseEntity::ThinkSet, CBaseEntity::SetNextThink
// globals: CLogicMeasureMovement::MeasureThink(void)
void __fastcall CLogicMeasureMovement::InputEnable(CLogicMeasureMovement *const this, inputdata_t *const inputdata)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  CGlobalVars *v5; // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v7; // xmm0_8

  CBaseEntity::ThinkSet(this, CLogicMeasureMovement::MeasureThink, 0.0, 0, 0);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    v5 = gpGlobals;
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      v5 = gpGlobals;
    }
    *&v7 = LODWORD(v4->m_flCurrentTime);
  }
  else
  {
    v5 = 0;
    v7 = 0.0;
  }
  *&v7 = *&v7 + v5->interval_per_tick;
  CBaseEntity::SetNextThink(this, v7, v3, 0);
}


// CLogicMeasureMovement::InputDisable  (line 217, @0x00000000022849b0, libserver.so)
// calls: CBaseEntity::ThinkSet
void __fastcall CLogicMeasureMovement::InputDisable(CLogicMeasureMovement *const this, inputdata_t *const inputdata)
{
  CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
}


// CLogicMeasureMovement::InputSetMeasureTarget  (line 226, @0x0000000002290880, libserver.so)  // inlines: AssignTo, String, TempString, ToCStr, ToString, operator=
// calls: MakeEntitySystemString, CLogicMeasureMovement::SetMeasureTarget, CLogicMeasureMovement::SetTarget, CLogicMeasureMovement::SetTargetReference, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_22908B6, jpt_229095B, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLogicMeasureMovement::InputSetMeasureTarget(
        CLogicMeasureMovement *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // di
  char *m_pszString; // rsi
  int16 v6; // di
  char *v7; // rsi
  const char *m_pAsString; // rsi
  const char *v9; // rsi
  const char *v10; // rax
  const char *v11; // rax
  double m_float64; // xmm0_8
  const char *v13; // rcx
  const char *v14; // rdx
  double m_float; // xmm0_8
  const char *v16; // rcx
  const char *v17; // rdx
  UtlSymLargeId_t v18; // [rsp+10h] [rbp-20h]

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
        goto LABEL_19;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_28;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_37;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_25;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_37;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_25:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_26;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_26:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_28:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_37:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v11 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v11);
LABEL_19:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_strMeasureTarget.u.m_Id = v18;
  v6 = inputdata->value.m_type;
  if ( v6 == 30 )
  {
    v7 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v6 )
    {
      case 0:
        goto LABEL_17;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_21;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_45;
      case 6:
        v16 = "true";
        v17 = "%s";
        if ( inputdata->value.m_char == 0 )
          v16 = "false";
        goto LABEL_31;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_45;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v16 = inputdata->value.m_pszString;
        v17 = "%lld";
LABEL_31:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v17, v16);
        goto LABEL_32;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_32:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_21:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_45:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v10 = VariantFieldTypeName(v6);
        Warning("No conversion from %s to string at the moment!\n", v10);
LABEL_17:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CLogicMeasureMovement::SetMeasureTarget(this, v7);
  m_pAsString = "";
  if ( this->m_target.u.m_Id != 0 )
    m_pAsString = this->m_target.u.m_pAsString;
  CLogicMeasureMovement::SetTarget(this, m_pAsString);
  v9 = "";
  if ( this->m_strTargetReference.u.m_Id != 0 )
    v9 = this->m_strTargetReference.u.m_pAsString;
  CLogicMeasureMovement::SetTargetReference(this, v9);
}


// CLogicMeasureMovement::InputSetMeasureReference  (line 234, @0x000000000228fa90, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: MakeEntitySystemString, CLogicMeasureMovement::SetMeasureReference, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_228FAC6, jpt_228FB0E, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLogicMeasureMovement::InputSetMeasureReference(
        CLogicMeasureMovement *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  int16 v6; // ax
  char *v7; // rsi
  const char *v8; // rax
  const char *v9; // rax
  double m_float64; // xmm0_8
  const char *v11; // rcx
  const char *v12; // rdx
  const char *v13; // rcx
  const char *v14; // rdx
  double m_float; // xmm0_8
  UtlSymLargeId_t v16; // [rsp+10h] [rbp-20h]

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
        goto LABEL_15;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_42;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_39;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_35;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_39;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_36;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_36:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_42:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_15:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_strMeasureReference.u.m_Id = v16;
  v6 = inputdata->value.m_type;
  if ( v6 == 30 )
  {
    v7 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v6 )
    {
      case 0:
        goto LABEL_13;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_17;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_24;
      case 6:
        v11 = "true";
        v12 = "%s";
        if ( inputdata->value.m_char == 0 )
          v11 = "false";
        goto LABEL_20;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_24;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v11 = inputdata->value.m_pszString;
        v12 = "%lld";
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v12, v11);
        goto LABEL_21;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_21:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_17:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_24:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v8 = VariantFieldTypeName(v6);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_13:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CLogicMeasureMovement::SetMeasureReference(this, v7);
}


// CLogicMeasureMovement::InputSetTarget  (line 240, @0x00000000022900f0, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: MakeEntitySystemString, CLogicMeasureMovement::SetTarget, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2290126, jpt_229016E, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLogicMeasureMovement::InputSetTarget(CLogicMeasureMovement *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  int16 v6; // ax
  char *v7; // rsi
  const char *v8; // rax
  const char *v9; // rax
  double m_float64; // xmm0_8
  const char *v11; // rcx
  const char *v12; // rdx
  const char *v13; // rcx
  const char *v14; // rdx
  double m_float; // xmm0_8
  UtlSymLargeId_t v16; // [rsp+10h] [rbp-20h]

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
        goto LABEL_15;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_42;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_39;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_35;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_39;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_36;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_36:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_42:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_15:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_target.u.m_Id = v16;
  v6 = inputdata->value.m_type;
  if ( v6 == 30 )
  {
    v7 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v6 )
    {
      case 0:
        goto LABEL_13;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_17;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_24;
      case 6:
        v11 = "true";
        v12 = "%s";
        if ( inputdata->value.m_char == 0 )
          v11 = "false";
        goto LABEL_20;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_24;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v11 = inputdata->value.m_pszString;
        v12 = "%lld";
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v12, v11);
        goto LABEL_21;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_21:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_17:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_24:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v8 = VariantFieldTypeName(v6);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_13:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CLogicMeasureMovement::SetTarget(this, v7);
}


// CLogicMeasureMovement::InputSetTargetReference  (line 246, @0x0000000002290e20, libserver.so)  // inlines: AssignTo, TempString, ToString, operator=
// calls: MakeEntitySystemString, CLogicMeasureMovement::SetTargetReference, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false", "%d %d %d %d"
// globals: jpt_2290E56, jpt_2290E9E, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CLogicMeasureMovement::InputSetTargetReference(
        CLogicMeasureMovement *const this,
        inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  int16 v6; // ax
  char *v7; // rsi
  const char *v8; // rax
  const char *v9; // rax
  double m_float64; // xmm0_8
  const char *v11; // rcx
  const char *v12; // rdx
  const char *v13; // rcx
  const char *v14; // rdx
  double m_float; // xmm0_8
  UtlSymLargeId_t v16; // [rsp+10h] [rbp-20h]

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
        goto LABEL_15;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_42;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_39;
      case 6:
        v13 = "true";
        v14 = "%s";
        if ( inputdata->value.m_char == 0 )
          v13 = "false";
        goto LABEL_35;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_39;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v13 = inputdata->value.m_pszString;
        v14 = "%lld";
LABEL_35:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v14, v13);
        goto LABEL_36;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_36:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_42:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_39:
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v9 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v9);
LABEL_15:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  MakeEntitySystemString(m_pszString);
  this->m_strTargetReference.u.m_Id = v16;
  v6 = inputdata->value.m_type;
  if ( v6 == 30 )
  {
    v7 = inputdata->value.m_pszString;
  }
  else
  {
    switch ( v6 )
    {
      case 0:
        goto LABEL_13;
      case 1:
        m_float64 = inputdata->value.m_float;
        goto LABEL_17;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
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
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_24;
      case 6:
        v11 = "true";
        v12 = "%s";
        if ( inputdata->value.m_char == 0 )
          v11 = "false";
        goto LABEL_20;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_24;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 26:
        v11 = inputdata->value.m_pszString;
        v12 = "%lld";
LABEL_20:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v12, v11);
        goto LABEL_21;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
LABEL_21:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 34:
        m_float64 = inputdata->value.m_float64;
LABEL_17:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_24:
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
      default:
        v8 = VariantFieldTypeName(v6);
        Warning("No conversion from %s to string at the moment!\n", v8);
LABEL_13:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        v7 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        break;
    }
  }
  CLogicMeasureMovement::SetTargetReference(this, v7);
}


// CLogicMeasureMovement::InputSetTargetScale  (line 252, @0x0000000002283a90, libserver.so)  // inlines: Float, operator float
void __fastcall CLogicMeasureMovement::InputSetTargetScale(
        CLogicMeasureMovement *const this,
        inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flScale = m_float64;
}


