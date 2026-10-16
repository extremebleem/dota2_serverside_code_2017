// Reconstructed from DWARF by pahole; not original source.

// src/game/server/logicauto.cpp:21
class CLogicAuto : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	COutputEvent m_OnMapSpawn;  // +0x308
	COutputEvent m_OnDemoMapSpawn;  // +0x320
	COutputEvent m_OnNewGame;  // +0x338
	COutputEvent m_OnLoadGame;  // +0x350
	COutputEvent m_OnMapTransition;  // +0x368
	COutputEvent m_OnBackgroundMap;  // +0x380
	COutputEvent m_OnMultiNewMap;  // +0x398
	COutputEvent m_OnMultiNewRound;  // +0x3b0
	string_t m_globalstate;  // +0x3c8
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
	CLogicAuto(CLogicAuto &);
	CLogicAuto(CLogicAuto &);
	CLogicAuto();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Activate(ActivateType_t);
	virtual void Think();
	virtual int ObjectCaps();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual int UpdateTransmitState();
	virtual ~CLogicAuto();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[10] Activate
	// vtable[117] Think
	// vtable[19] ObjectCaps
	// vtable[34] GetDataDescMap
	// vtable[64] UpdateTransmitState
	// sizeof = 976
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CLogicAuto::~CLogicAuto  (line 21, @0x00000000022a9a30, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CLogicAuto::~CLogicAuto(CLogicAuto *const this)
{
  this->_vptr_IHandleEntity = &off_405D330;
  CBaseEntity::~CBaseEntity(this);
}


// CLogicAuto::~CLogicAuto  (line 21, @0x00000000022a9a50, libserver.so)  // inlines: ~CLogicAuto
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CLogicAuto::~CLogicAuto(CLogicAuto *const this)
{
  this->_vptr_IHandleEntity = &off_405D330;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CLogicAuto::GetEntityClass  (line 23, @0x00000000022a5810, libserver.so)
CEntityClass *__cdecl CLogicAuto::GetEntityClass()
{
  return g_pEntityCLogicAutoClass;
}


// CLogicAuto::Schema_DynamicBinding  (line 23, @0x00000000022a5820, libserver.so)
// globals: CLogicAuto::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicAuto::Schema_DynamicBinding(const CLogicAuto *const this)
{
  return CLogicAuto::s_pSchemaBinding;
}


// CLogicAuto::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 23, @0x00000000022a5830, libserver.so)
// globals: CLogicAuto::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CLogicAuto::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CLogicAuto::CEntityInstanceEntityClass *const this)
{
  return CLogicAuto::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CLogicAuto::CEntityInstanceEntityClass::DestructInstance  (line 23, @0x00000000022a5840, libserver.so)  // inlines: Destruct<CLogicAuto>
void __fastcall CLogicAuto::CEntityInstanceEntityClass::DestructInstance(
        CLogicAuto::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CLogicAuto::CEntityInstanceEntityClass::FreeInstance  (line 23, @0x00000000022a5860, libserver.so)
void __fastcall CLogicAuto::CEntityInstanceEntityClass::FreeInstance(
        CLogicAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CLogicAuto::CEntityInstanceEntityClass::CanAllocate  (line 23, @0x00000000022a5880, libserver.so)
bool __fastcall CLogicAuto::CEntityInstanceEntityClass::CanAllocate(
        const CLogicAuto::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CLogicAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 23, @0x00000000022a5890, libserver.so)
// globals: CLogicAuto::s_pSchemaBinding
const ISchemaBinding *__fastcall CLogicAuto::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CLogicAuto::CEntityInstanceEntityClass *const this)
{
  return CLogicAuto::s_pSchemaBinding;
}


// CLogicAuto::CEntityInstanceEntityClass::AllocateInstance  (line 23, @0x00000000022a8080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CLogicAuto::CEntityInstanceEntityClass::AllocateInstance(
        CLogicAuto::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CLogicAuto::CEntityInstanceEntityClass::ConstructInstance  (line 23, @0x00000000022a8b20, libserver.so)  // inlines: CEntityIOOutput, CLogicAuto, CUtlSymbolLarge, Construct<CLogicAuto>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CLogicAuto::CEntityInstanceEntityClass::ConstructInstance(
        CLogicAuto::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 121) = 0;
    *p = &off_405D330;
    *(p + 97) = off_3F7C190;
    *(p + 100) = off_3F7C190;
    *(p + 103) = off_3F7C190;
    *(p + 106) = off_3F7C190;
    *(p + 109) = off_3F7C190;
    *(p + 112) = off_3F7C190;
    *(p + 115) = off_3F7C190;
    *(p + 118) = off_3F7C190;
  }
  return p;
}


// CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab5e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 23, @0x00000000022ab600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CLogicAuto::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CLogicAuto::GetEntityClassInternal  (line 23, @0x00000000022b0c60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "logic_auto", "CLogicAuto"
// globals: `guard variable for'CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass, CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass, __dso_handle, CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo, CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo
CEntityClass *__cdecl CLogicAuto::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass);
    CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass._vptr_CEntityClass = off_405D2B0;
    __cxa_guard_release(&`guard variable for'CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass);
    __cxa_atexit(
      CLogicAuto::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass,
      &_dso_handle);
  }
  if ( g_pEntityCLogicAutoClass != 0 )
    return &CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass;
  if ( `guard variable for'CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo,
      "CLogicAuto",
      "logic_auto",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo);
  }
  CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass.m_pClassInfo = &CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo;
  CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass.m_pBaseClassInfo = CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo.m_pBaseClassInfo;
  g_pEntityCLogicAutoClass = &CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass;
  CLogicAuto::GetEntityClassInfo(void)::g_EntityCLogicAutoClassInfo.m_pClass = &CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass;
  CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCLogicAutoClass->m_pComponentOverrides = 0;
  return &CLogicAuto::GetEntityClassInternal(void)::g_EntityCLogicAutoClass;
}


// CLogicAuto::ObjectCaps  (line 29, @0x00000000022a8f60, libserver.so)
// calls: CBaseEntity::ObjectCaps
int __fastcall CLogicAuto::ObjectCaps(CLogicAuto *const this)
{
  int result; // eax

  result = CBaseEntity::ObjectCaps(this);
  LOBYTE(result) = result & 0x7F;
  return result;
}


// CLogicAuto::UpdateTransmitState  (line 33, @0x00000000022a9230, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CLogicAuto::UpdateTransmitState(CLogicAuto *const this)
{
  return CBaseEntity::SetTransmitState(this, 8);
}


// CLogicAuto::GetDataDescMap  (line 52, @0x0000000002283af0, libserver.so)
// globals: CLogicAuto::m_DataMap
datamap_t *__fastcall CLogicAuto::GetDataDescMap(CLogicAuto *const this)
{
  return &CLogicAuto::m_DataMap;
}


// CLogicAuto::AddDatadescMetadataKeys  (line 52, @0x0000000002292120, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CLogicAuto::GetEntityClass(void)
void __fastcall CLogicAuto::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CLogicAuto::GetEntityClass);
}


// CLogicAuto::GetBaseMap  (line 52, @0x0000000002292140, libserver.so)
datamap_t *__cdecl CLogicAuto::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CLogicAuto>  (line 52, @0x0000000002292150, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_07.cpp
// strings: "CLogicAuto"
// globals: `guard variable for'DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder, `guard variable for'DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc, CLogicAuto::GetEntityClass(void), CLogicAuto::m_DataMap, DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CLogicAuto>(CLogicAuto *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder) != 0 )
  {
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_pszBase = "CLogicAuto";
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder.m_nLenBase = 10;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CLogicAuto>(CLogicAuto *)::nameHolder,
      &_dso_handle);
  }
  CLogicAuto::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc) != 0 )
  {
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[3].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[4].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[5].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[6].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[7].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc);
  }
  CLogicAuto::m_DataMap.dataNumFields = 9;
  CLogicAuto::m_DataMap.dataDesc = &DataMapInit<CLogicAuto>(CLogicAuto *)::dataDesc[1];
  AddDatadescMetadataKeys(&CLogicAuto::m_DataMap, CLogicAuto::GetEntityClass);
  return &CLogicAuto::m_DataMap;
}


// CLogicAuto::Activate  (line 72, @0x0000000002289140, libserver.so)  // inlines: curtime
// calls: CBaseEntity::Activate, CBaseEntity::SetNextThink
void __fastcall CLogicAuto::Activate(CLogicAuto *const this, ActivateType_t activateType)
{
  double v3; // xmm1_8
  CGlobalVars *v4; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseEntity::Activate(this, activateType);
  v4 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    CBaseEntity::SetNextThink(this, v4->m_flCurrentTime + 0.2, v3, 0);
  }
  else
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1045220557), v3, 0);
  }
}


// CLogicAuto::Think  (line 84, @0x000000000229f380, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GlobalEntity_GetIndex, GlobalEntity_GetState, IsNullString, IsValid, operator!, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, IsPressDemoMode, UTIL_Remove, GlobalEntity_GetIndex, GlobalEntity_GetState, CEntityIOOutput::FireOutput, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CLogicAuto::Think(CLogicAuto *const this)
{
  const char *m_pAsString; // rdi
  MapLoadType_t eLoadType; // eax
  int Index; // eax
  char v5; // al
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_pAsString = this->m_globalstate.u.m_pAsString;
  if ( m_pAsString == 0
    || (Index = GlobalEntity_GetIndex(m_pAsString), GlobalEntity_GetState(Index) == GLOBALESTATE::GLOBAL_ON) )
  {
    eLoadType = gpGlobals->eLoadType;
    if ( eLoadType == MapLoadType_t::MapLoad_Transition )
    {
      CEntityIOOutput::FireOutput(&this->m_OnMapTransition, 0, this);
    }
    else if ( eLoadType != MapLoadType_t::MapLoad_NewGame )
    {
      if ( eLoadType == MapLoadType_t::MapLoad_LoadGame )
      {
        CEntityIOOutput::FireOutput(&this->m_OnLoadGame, 0, this);
      }
      else if ( eLoadType == MapLoadType_t::MapLoad_Background )
      {
        CEntityIOOutput::FireOutput(&this->m_OnBackgroundMap, 0, this);
      }
    }
    else
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnNewGame, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnMapSpawn, 0, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( IsPressDemoMode() )
    {
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnDemoMapSpawn, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    }
    if ( (*(g_pGameRules->_vptr_CGameRules + 39))(g_pGameRules) == 0 )
      goto LABEL_11;
    v5 = (*(g_pGameRules->_vptr_CGameRules + 40))(g_pGameRules);
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( v5 != 0 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnMultiNewRound, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_11;
    }
    else
    {
      CEntityIOOutput::FireOutputInternal(&this->m_OnMultiNewMap, 0, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
      {
LABEL_11:
        if ( (this->m_spawnflags.m_Value & 1) != 0 )
          UTIL_Remove(this);
        return;
      }
    }
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    goto LABEL_11;
  }
}


