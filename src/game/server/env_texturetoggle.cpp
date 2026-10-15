// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_texturetoggle.cpp:12
class CTextureToggle : public CPointEntity {
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
	CTextureToggle(CTextureToggle &);
	CTextureToggle(CTextureToggle &);
	CTextureToggle();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	void InputIncrementBrushTexIndex(inputdata_t &);
	void InputSetBrushTexIndex(inputdata_t &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CTextureToggle();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 776
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTextureToggle::~CTextureToggle  (line 12, @0x00000000022105f0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTextureToggle::~CTextureToggle(CTextureToggle *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CTextureToggle::~CTextureToggle  (line 12, @0x0000000002210610, libserver.so)  // inlines: ~CPointEntity, ~CTextureToggle
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTextureToggle::~CTextureToggle(CTextureToggle *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTextureToggle::GetEntityClass  (line 14, @0x000000000220dc10, libserver.so)
CEntityClass *__cdecl CTextureToggle::GetEntityClass()
{
  return g_pEntityCTextureToggleClass;
}


// CTextureToggle::Schema_DynamicBinding  (line 14, @0x000000000220dc20, libserver.so)
// globals: CTextureToggle::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTextureToggle::Schema_DynamicBinding(const CTextureToggle *const this)
{
  return CTextureToggle::s_pSchemaBinding;
}


// CTextureToggle::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 14, @0x000000000220dc30, libserver.so)
// globals: CTextureToggle::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTextureToggle::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTextureToggle::CEntityInstanceEntityClass *const this)
{
  return CTextureToggle::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTextureToggle::CEntityInstanceEntityClass::DestructInstance  (line 14, @0x000000000220dc40, libserver.so)  // inlines: Destruct<CTextureToggle>
void __fastcall CTextureToggle::CEntityInstanceEntityClass::DestructInstance(
        CTextureToggle::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTextureToggle::CEntityInstanceEntityClass::FreeInstance  (line 14, @0x000000000220dc60, libserver.so)
void __fastcall CTextureToggle::CEntityInstanceEntityClass::FreeInstance(
        CTextureToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTextureToggle::CEntityInstanceEntityClass::CanAllocate  (line 14, @0x000000000220dc80, libserver.so)
bool __fastcall CTextureToggle::CEntityInstanceEntityClass::CanAllocate(
        const CTextureToggle::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTextureToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 14, @0x000000000220dc90, libserver.so)
// globals: CTextureToggle::s_pSchemaBinding
const ISchemaBinding *__fastcall CTextureToggle::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTextureToggle::CEntityInstanceEntityClass *const this)
{
  return CTextureToggle::s_pSchemaBinding;
}


// CTextureToggle::CEntityInstanceEntityClass::AllocateInstance  (line 14, @0x000000000220f960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTextureToggle::CEntityInstanceEntityClass::AllocateInstance(
        CTextureToggle::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CTextureToggle::CEntityInstanceEntityClass::ConstructInstance  (line 14, @0x000000000220ff60, libserver.so)  // inlines: CPointEntity, CTextureToggle, Construct<CTextureToggle>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTextureToggle::CEntityInstanceEntityClass::ConstructInstance(
        CTextureToggle::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_402BA50;
  }
  return p;
}


// CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000002212260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTextureToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 14, @0x0000000002212280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTextureToggle::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTextureToggle::GetEntityClassInternal  (line 14, @0x0000000002214d70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "env_texturetoggle", "CTextureToggle"
// globals: `guard variable for'CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass, CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass, __dso_handle, CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo, CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo
CEntityClass *__cdecl CTextureToggle::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass);
    CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass._vptr_CEntityClass = off_402B9D0;
    __cxa_guard_release(&`guard variable for'CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass);
    __cxa_atexit(
      CTextureToggle::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass,
      &_dso_handle);
  }
  if ( g_pEntityCTextureToggleClass != 0 )
    return &CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass;
  if ( `guard variable for'CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo,
      "CTextureToggle",
      "env_texturetoggle",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo);
  }
  CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass.m_pClassInfo = &CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo;
  CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass.m_pBaseClassInfo = CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo.m_pBaseClassInfo;
  g_pEntityCTextureToggleClass = &CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass;
  CTextureToggle::GetEntityClassInfo(void)::g_EntityCTextureToggleClassInfo.m_pClass = &CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass;
  CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTextureToggleClass->m_pComponentOverrides = 0;
  return &CTextureToggle::GetEntityClassInternal(void)::g_EntityCTextureToggleClass;
}


// CTextureToggle::GetDataDescMap  (line 25, @0x00000000021ee560, libserver.so)
// globals: CTextureToggle::m_DataMap
datamap_t *__fastcall CTextureToggle::GetDataDescMap(CTextureToggle *const this)
{
  return &CTextureToggle::m_DataMap;
}


// CTextureToggle::AddDatadescMetadataKeys  (line 25, @0x00000000021f59e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTextureToggle::GetEntityClass(void)
void __fastcall CTextureToggle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTextureToggle::GetEntityClass);
}


// CTextureToggle::GetBaseMap  (line 25, @0x00000000021f5a00, libserver.so)
datamap_t *__cdecl CTextureToggle::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CTextureToggle>  (line 25, @0x00000000021f5a10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_04.cpp
// strings: "CTextureToggle"
// globals: `guard variable for'DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder, CTextureToggle::GetEntityClass(void), CTextureToggle::m_DataMap, DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTextureToggle>(CTextureToggle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder) != 0 )
  {
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_pszBase = "CTextureToggle";
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTextureToggle>(CTextureToggle *)::nameHolder,
      &_dso_handle);
  }
  CTextureToggle::m_DataMap.dataNumFields = 2;
  CTextureToggle::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CTextureToggle::m_DataMap.dataDesc = &DataMapInit<CTextureToggle>(CTextureToggle *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTextureToggle::m_DataMap, CTextureToggle::GetEntityClass);
  return &CTextureToggle::m_DataMap;
}


// CTextureToggle::InputIncrementBrushTexIndex  (line 35, @0x00000000021f1370, libserver.so)  // inlines: CUtlSymbolLarge, GetTextureFrameIndex, NetworkStateChanged, Set, SetTextureFrameIndex, operator=<int>
// calls: CGameEntitySystem::FindEntityByName
void __fastcall CTextureToggle::InputIncrementBrushTexIndex(CTextureToggle *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pCaller; // r9
  CBaseEntity *pActivator; // r8
  CBaseEntity *i; // rax
  unsigned __int8 v7; // r15
  CBaseEntity *v8; // r9
  CBaseEntity *v9; // r8
  CBaseEntity *v10; // rbx
  _QWORD v11[8]; // [rsp+10h] [rbp-40h] BYREF

  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  v11[0] = this->m_target.u.m_Id;
  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v11, this, pActivator, pCaller, 0);
        ;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v10, v11, this, v9, v8, 0) )
  {
    v10 = i;
    if ( i == 0 )
      break;
    v7 = i->m_iTextureFrameIndex.m_Value + 1;
    (*(i->_vptr_IHandleEntity + 22))(i, 568, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v10->m_iTextureFrameIndex.m_Value = v7;
    v8 = inputdata->pCaller;
    v9 = inputdata->pActivator;
    v11[0] = this->m_target.u.m_Id;
  }
}


// CTextureToggle::InputSetBrushTexIndex  (line 49, @0x00000000021f11c0, libserver.so)  // inlines: CUtlSymbolLarge, Int, NetworkStateChanged, Set, SetTextureFrameIndex, operator int, operator=<int>
// calls: CGameEntitySystem::FindEntityByName
void __fastcall CTextureToggle::InputSetBrushTexIndex(CTextureToggle *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pCaller; // r9
  CBaseEntity *pActivator; // r8
  CBaseEntity *i; // rax
  int m_float; // r15d
  CBaseEntity *v8; // r9
  CBaseEntity *v9; // r8
  CBaseEntity *v10; // rbx
  int16 m_type; // ax
  _QWORD v12[8]; // [rsp+10h] [rbp-40h] BYREF

  pCaller = inputdata->pCaller;
  pActivator = inputdata->pActivator;
  v12[0] = this->m_target.u.m_Id;
  for ( i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, v12, this, pActivator, pCaller, 0);
        ;
        i = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v10, v12, this, v9, v8, 0) )
  {
    v10 = i;
    if ( i == 0 )
      break;
    m_type = inputdata->value.m_type;
    if ( m_type == 1 )
    {
      m_float = inputdata->value.m_float;
    }
    else if ( m_type == 34 )
    {
      m_float = inputdata->value.m_float64;
    }
    else
    {
      m_float = inputdata->value.m_int;
    }
    if ( m_float != v10->m_iTextureFrameIndex.m_Value )
    {
      (*(v10->_vptr_IHandleEntity + 22))(v10, 568, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v10->m_iTextureFrameIndex.m_Value = m_float;
    }
    v8 = inputdata->pCaller;
    v9 = inputdata->pActivator;
    v12[0] = this->m_target.u.m_Id;
  }
}


