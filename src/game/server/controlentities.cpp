// Reconstructed from DWARF by pahole; not original source.

// src/game/server/controlentities.cpp:19
class CTargetChangeGravity : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	int m_iGravity;  // +0x308
	int m_iOldGrav;  // +0x30c
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
	CTargetChangeGravity(CTargetChangeGravity &);
	CTargetChangeGravity(CTargetChangeGravity &);
	CTargetChangeGravity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputChangeGrav(inputdata_t &);
	void InputResetGrav(inputdata_t &);
	virtual ~CTargetChangeGravity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CTargetChangeGravity::~CTargetChangeGravity  (line 19, @0x00000000021b25b0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CTargetChangeGravity::~CTargetChangeGravity(CTargetChangeGravity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CTargetChangeGravity::~CTargetChangeGravity  (line 19, @0x00000000021b25d0, libserver.so)  // inlines: ~CPointEntity, ~CTargetChangeGravity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CTargetChangeGravity::~CTargetChangeGravity(CTargetChangeGravity *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CTargetChangeGravity::GetEntityClass  (line 21, @0x00000000021b14c0, libserver.so)
CEntityClass *__cdecl CTargetChangeGravity::GetEntityClass()
{
  return g_pEntityCTargetChangeGravityClass;
}


// CTargetChangeGravity::Schema_DynamicBinding  (line 21, @0x00000000021b14d0, libserver.so)
// globals: CTargetChangeGravity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTargetChangeGravity::Schema_DynamicBinding(
        const CTargetChangeGravity *const this)
{
  return CTargetChangeGravity::s_pSchemaBinding;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 21, @0x00000000021b14e0, libserver.so)
// globals: CTargetChangeGravity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CTargetChangeGravity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  return CTargetChangeGravity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::DestructInstance  (line 21, @0x00000000021b14f0, libserver.so)  // inlines: Destruct<CTargetChangeGravity>
void __fastcall CTargetChangeGravity::CEntityInstanceEntityClass::DestructInstance(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CTargetChangeGravity::CEntityInstanceEntityClass::FreeInstance  (line 21, @0x00000000021b1510, libserver.so)
void __fastcall CTargetChangeGravity::CEntityInstanceEntityClass::FreeInstance(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CTargetChangeGravity::CEntityInstanceEntityClass::CanAllocate  (line 21, @0x00000000021b1530, libserver.so)
bool __fastcall CTargetChangeGravity::CEntityInstanceEntityClass::CanAllocate(
        const CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 21, @0x00000000021b1540, libserver.so)
// globals: CTargetChangeGravity::s_pSchemaBinding
const ISchemaBinding *__fastcall CTargetChangeGravity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  return CTargetChangeGravity::s_pSchemaBinding;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::AllocateInstance  (line 21, @0x00000000021b2140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CTargetChangeGravity::CEntityInstanceEntityClass::AllocateInstance(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::ConstructInstance  (line 21, @0x00000000021b22c0, libserver.so)  // inlines: CPointEntity, CTargetChangeGravity, Construct<CTargetChangeGravity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CTargetChangeGravity::CEntityInstanceEntityClass::ConstructInstance(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_4013550;
  }
  return p;
}


// CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000021b3740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 21, @0x00000000021b3760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CTargetChangeGravity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CTargetChangeGravity::GetEntityClassInternal  (line 21, @0x00000000021b8410, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "target_changegravity", "CTargetChangeGravity", "CPointEntity"
// globals: `guard variable for'CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass, CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass, __dso_handle, CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo, CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo, `guard variable for'CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo, CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo
CEntityClass *__cdecl CTargetChangeGravity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass);
    CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass._vptr_CEntityClass = off_40134D0;
    __cxa_guard_release(&`guard variable for'CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass);
    __cxa_atexit(
      CTargetChangeGravity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass,
      &_dso_handle);
  }
  if ( g_pEntityCTargetChangeGravityClass != 0 )
    return &CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass;
  if ( `guard variable for'CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo) != 0 )
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
      &CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo,
      "CTargetChangeGravity",
      "target_changegravity",
      0,
      &CPointEntity::GetEntityClassInfo(void)::g_EntityCPointEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo);
  }
  CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass.m_pClassInfo = &CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo;
  CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass.m_pBaseClassInfo = CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo.m_pBaseClassInfo;
  g_pEntityCTargetChangeGravityClass = &CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass;
  CTargetChangeGravity::GetEntityClassInfo(void)::g_EntityCTargetChangeGravityClassInfo.m_pClass = &CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass;
  CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCTargetChangeGravityClass->m_pComponentOverrides = 0;
  return &CTargetChangeGravity::GetEntityClassInternal(void)::g_EntityCTargetChangeGravityClass;
}


// CTargetChangeGravity::GetDataDescMap  (line 34, @0x0000000002187880, libserver.so)
// globals: CTargetChangeGravity::m_DataMap
datamap_t *__fastcall CTargetChangeGravity::GetDataDescMap(CTargetChangeGravity *const this)
{
  return &CTargetChangeGravity::m_DataMap;
}


// CTargetChangeGravity::AddDatadescMetadataKeys  (line 34, @0x00000000021a0940, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CTargetChangeGravity::GetEntityClass(void)
void __fastcall CTargetChangeGravity::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CTargetChangeGravity::GetEntityClass);
}


// CTargetChangeGravity::GetBaseMap  (line 34, @0x00000000021a0960, libserver.so)
datamap_t *__cdecl CTargetChangeGravity::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CTargetChangeGravity>  (line 34, @0x00000000021a0970, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_02.cpp
// strings: "CTargetChangeGravity"
// globals: `guard variable for'DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder, CTargetChangeGravity::GetEntityClass(void), CTargetChangeGravity::m_DataMap, DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder) != 0 )
  {
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_pszBase = "CTargetChangeGravity";
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::nameHolder,
      &_dso_handle);
  }
  CTargetChangeGravity::m_DataMap.dataNumFields = 4;
  CTargetChangeGravity::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CTargetChangeGravity::m_DataMap.dataDesc = &DataMapInit<CTargetChangeGravity>(CTargetChangeGravity *)::dataDesc[1];
  AddDatadescMetadataKeys(&CTargetChangeGravity::m_DataMap, CTargetChangeGravity::GetEntityClass);
  return &CTargetChangeGravity::m_DataMap;
}


// CTargetChangeGravity::InputChangeGrav  (line 48, @0x000000000218ab00, libserver.so)  // inlines: ToBasePlayer
void __fastcall CTargetChangeGravity::InputChangeGrav(CTargetChangeGravity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
  {
    if ( this->m_iOldGrav != 0 )
      this->m_iOldGrav = pActivator->m_flGravity;
    pActivator->m_flGravity = this->m_iGravity;
  }
}


// CTargetChangeGravity::InputResetGrav  (line 65, @0x000000000218aab0, libserver.so)  // inlines: ToBasePlayer
void __fastcall CTargetChangeGravity::InputResetGrav(CTargetChangeGravity *const this, inputdata_t *const inputdata)
{
  CBaseEntity *pActivator; // rbx

  pActivator = inputdata->pActivator;
  if ( inputdata->pActivator != 0 && (*(pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
    pActivator->m_flGravity = this->m_iOldGrav;
}


