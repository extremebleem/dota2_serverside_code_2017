// Reconstructed from DWARF by pahole; not original source.

// src/game/server/subs.cpp:14
class CNullEntity : public CBaseEntity {
public:

private:

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
	CNullEntity(CNullEntity &);
	CNullEntity(CNullEntity &);
	CNullEntity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CNullEntity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// sizeof = 776
};

// src/game/server/subs.cpp:30
class CBaseDMStart : public CPointEntity {
public:

private:

	static datamap_t m_DataMap;

	string_t m_Master;  // +0x308
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
	CBaseDMStart(CBaseDMStart &);
	CBaseDMStart(CBaseDMStart &);
	CBaseDMStart();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool IsTriggered(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CBaseDMStart();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[94] IsTriggered
	// vtable[34] GetDataDescMap
	// sizeof = 784
};

// src/game/server/subs.cpp:53
class CInfoLandmark : public CPointEntity {
public:

private:

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
	CInfoLandmark(CInfoLandmark &);
	CInfoLandmark(CInfoLandmark &);
	CInfoLandmark();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CInfoLandmark();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 776
};

// src/game/server/subs.cpp:158
class C_CBaseToggle_MapInstall {
	C_CBaseToggle_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CNullEntity::~CNullEntity  (line 14, @0x00000000023e9070, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CNullEntity::~CNullEntity(CNullEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40B2CD0;
  CBaseEntity::~CBaseEntity(this);
}


// CNullEntity::~CNullEntity  (line 14, @0x00000000023e9090, libserver.so)  // inlines: ~CNullEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CNullEntity::~CNullEntity(CNullEntity *const this)
{
  this->_vptr_IHandleEntity = &off_40B2CD0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CNullEntity::Schema_DynamicBinding  (line 16, @0x00000000023e54b0, libserver.so)
// globals: CNullEntity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CNullEntity::Schema_DynamicBinding(const CNullEntity *const this)
{
  return CNullEntity::s_pSchemaBinding;
}


// CNullEntity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x00000000023e54c0, libserver.so)
// globals: CNullEntity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CNullEntity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CNullEntity::CEntityInstanceEntityClass *const this)
{
  return CNullEntity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CNullEntity::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x00000000023e54d0, libserver.so)  // inlines: Destruct<CNullEntity>
void __fastcall CNullEntity::CEntityInstanceEntityClass::DestructInstance(
        CNullEntity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CNullEntity::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x00000000023e54f0, libserver.so)
void __fastcall CNullEntity::CEntityInstanceEntityClass::FreeInstance(
        CNullEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CNullEntity::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x00000000023e5510, libserver.so)
bool __fastcall CNullEntity::CEntityInstanceEntityClass::CanAllocate(
        const CNullEntity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CNullEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x00000000023e5520, libserver.so)
// globals: CNullEntity::s_pSchemaBinding
const ISchemaBinding *__fastcall CNullEntity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CNullEntity::CEntityInstanceEntityClass *const this)
{
  return CNullEntity::s_pSchemaBinding;
}


// CNullEntity::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x00000000023e7e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CNullEntity::CEntityInstanceEntityClass::AllocateInstance(
        CNullEntity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CNullEntity::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x00000000023e88b0, libserver.so)  // inlines: CNullEntity, Construct<CNullEntity>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CNullEntity::CEntityInstanceEntityClass::ConstructInstance(
        CNullEntity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40B2CD0;
  }
  return p;
}


// CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000023ea970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CNullEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x00000000023ea990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CNullEntity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CNullEntity::GetEntityClassInternal  (line 16, @0x00000000023ee8b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "info_null", "CNullEntity"
// globals: `guard variable for'CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass, CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass, __dso_handle, CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo, CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo
CEntityClass *__cdecl CNullEntity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass);
    CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass._vptr_CEntityClass = off_40B2C50;
    __cxa_guard_release(&`guard variable for'CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass);
    __cxa_atexit(
      CNullEntity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass,
      &_dso_handle);
  }
  if ( g_pEntityCNullEntityClass != 0 )
    return &CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass;
  if ( `guard variable for'CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo,
      "CNullEntity",
      "info_null",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo);
  }
  CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass.m_pClassInfo = &CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo;
  CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass.m_pBaseClassInfo = CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo.m_pBaseClassInfo;
  g_pEntityCNullEntityClass = &CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass;
  CNullEntity::GetEntityClassInfo(void)::g_EntityCNullEntityClassInfo.m_pClass = &CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass;
  CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCNullEntityClass->m_pComponentOverrides = 0;
  return &CNullEntity::GetEntityClassInternal(void)::g_EntityCNullEntityClass;
}


// CNullEntity::Spawn  (line 24, @0x00000000023bb9c0, libserver.so)
// calls: CBaseEntity::Spawn, UTIL_Remove
void __fastcall CNullEntity::Spawn(CNullEntity *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseEntity::Spawn(this, pKeyValues);
  UTIL_Remove(this);
}


// CBaseDMStart::~CBaseDMStart  (line 30, @0x00000000023e8ee0, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CBaseDMStart::~CBaseDMStart(CBaseDMStart *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CBaseDMStart::~CBaseDMStart  (line 30, @0x00000000023e8f00, libserver.so)  // inlines: ~CBaseDMStart, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CBaseDMStart::~CBaseDMStart(CBaseDMStart *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CBaseDMStart::GetEntityClass  (line 32, @0x00000000023e5530, libserver.so)
CEntityClass *__cdecl CBaseDMStart::GetEntityClass()
{
  return g_pEntityCBaseDMStartClass;
}


// CBaseDMStart::Schema_DynamicBinding  (line 32, @0x00000000023e5540, libserver.so)
// globals: CBaseDMStart::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseDMStart::Schema_DynamicBinding(const CBaseDMStart *const this)
{
  return CBaseDMStart::s_pSchemaBinding;
}


// CBaseDMStart::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x00000000023e5550, libserver.so)
// globals: CBaseDMStart::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseDMStart::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  return CBaseDMStart::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseDMStart::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x00000000023e5560, libserver.so)  // inlines: Destruct<CBaseDMStart>
void __fastcall CBaseDMStart::CEntityInstanceEntityClass::DestructInstance(
        CBaseDMStart::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseDMStart::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x00000000023e5580, libserver.so)
void __fastcall CBaseDMStart::CEntityInstanceEntityClass::FreeInstance(
        CBaseDMStart::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseDMStart::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x00000000023e55a0, libserver.so)
bool __fastcall CBaseDMStart::CEntityInstanceEntityClass::CanAllocate(
        const CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseDMStart::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x00000000023e55b0, libserver.so)
// globals: CBaseDMStart::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseDMStart::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  return CBaseDMStart::s_pSchemaBinding;
}


// CBaseDMStart::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x00000000023e7eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseDMStart::CEntityInstanceEntityClass::AllocateInstance(
        CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CBaseDMStart::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x00000000023e88e0, libserver.so)  // inlines: CBaseDMStart, CPointEntity, CUtlSymbolLarge, Construct<CBaseDMStart>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CBaseDMStart::CEntityInstanceEntityClass::ConstructInstance(
        CBaseDMStart::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 97) = 0;
    *p = &off_40B3B10;
  }
  return p;
}


// CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000023e9de0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x00000000023e9e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseDMStart::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseDMStart::GetEntityClassInternal  (line 32, @0x00000000023eea00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "info_player_deathmatch", "CBaseDMStart"
// globals: `guard variable for'CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass, CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass, __dso_handle, CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo, CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo
CEntityClass *__cdecl CBaseDMStart::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass) != 0 )
  {
    CEntityClass::CEntityClass(&CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass);
    CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass._vptr_CEntityClass = off_40B3370;
    __cxa_guard_release(&`guard variable for'CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass);
    __cxa_atexit(
      CBaseDMStart::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseDMStartClass != 0 )
    return &CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass;
  if ( `guard variable for'CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo,
      "CBaseDMStart",
      "info_player_deathmatch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo);
  }
  CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass.m_pClassInfo = &CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo;
  CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass.m_pBaseClassInfo = CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseDMStartClass = &CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass;
  CBaseDMStart::GetEntityClassInfo(void)::g_EntityCBaseDMStartClassInfo.m_pClass = &CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass;
  CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCBaseDMStartClass->m_pComponentOverrides = 0;
  return &CBaseDMStart::GetEntityClassInternal(void)::g_EntityCBaseDMStartClass;
}


// CBaseDMStart::GetDataDescMap  (line 44, @0x00000000023bae40, libserver.so)
// globals: CBaseDMStart::m_DataMap
datamap_t *__fastcall CBaseDMStart::GetDataDescMap(CBaseDMStart *const this)
{
  return &CBaseDMStart::m_DataMap;
}


// CBaseDMStart::AddDatadescMetadataKeys  (line 44, @0x00000000023c4510, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseDMStart::GetEntityClass(void)
void __fastcall CBaseDMStart::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseDMStart::GetEntityClass);
}


// CBaseDMStart::GetBaseMap  (line 44, @0x00000000023c4530, libserver.so)
datamap_t *__cdecl CBaseDMStart::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CBaseDMStart>  (line 44, @0x00000000023c4540, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CBaseDMStart"
// globals: `guard variable for'DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder, CBaseDMStart::GetEntityClass(void), CBaseDMStart::m_DataMap, DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseDMStart>(CBaseDMStart *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_pszBase = "CBaseDMStart";
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseDMStart>(CBaseDMStart *)::nameHolder,
      &_dso_handle);
  }
  CBaseDMStart::m_DataMap.dataNumFields = 1;
  CBaseDMStart::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CBaseDMStart::m_DataMap.dataDesc = &DataMapInit<CBaseDMStart>(CBaseDMStart *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseDMStart::m_DataMap, CBaseDMStart::GetEntityClass);
  return &CBaseDMStart::m_DataMap;
}


// CInfoLandmark::Schema_DynamicBinding  (line 53, @0x00000000023e55c0, libserver.so)
// globals: CInfoLandmark::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoLandmark::Schema_DynamicBinding(const CInfoLandmark *const this)
{
  return CInfoLandmark::s_pSchemaBinding;
}


// CInfoLandmark::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 53, @0x00000000023e55d0, libserver.so)
// globals: CInfoLandmark::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CInfoLandmark::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  return CInfoLandmark::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CInfoLandmark::CEntityInstanceEntityClass::DestructInstance  (line 53, @0x00000000023e55e0, libserver.so)  // inlines: Destruct<CInfoLandmark>
void __fastcall CInfoLandmark::CEntityInstanceEntityClass::DestructInstance(
        CInfoLandmark::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CInfoLandmark::CEntityInstanceEntityClass::FreeInstance  (line 53, @0x00000000023e5600, libserver.so)
void __fastcall CInfoLandmark::CEntityInstanceEntityClass::FreeInstance(
        CInfoLandmark::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CInfoLandmark::CEntityInstanceEntityClass::CanAllocate  (line 53, @0x00000000023e5620, libserver.so)
bool __fastcall CInfoLandmark::CEntityInstanceEntityClass::CanAllocate(
        const CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CInfoLandmark::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 53, @0x00000000023e5630, libserver.so)
// globals: CInfoLandmark::s_pSchemaBinding
const ISchemaBinding *__fastcall CInfoLandmark::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  return CInfoLandmark::s_pSchemaBinding;
}


// CInfoLandmark::CEntityInstanceEntityClass::AllocateInstance  (line 53, @0x00000000023e7ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CInfoLandmark::CEntityInstanceEntityClass::AllocateInstance(
        CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 776);
  memset(v1, 0, 0x308u);
  return v1;
}


// CInfoLandmark::CEntityInstanceEntityClass::ConstructInstance  (line 53, @0x00000000023e8920, libserver.so)  // inlines: CInfoLandmark, CPointEntity, Construct<CInfoLandmark>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CInfoLandmark::CEntityInstanceEntityClass::ConstructInstance(
        CInfoLandmark::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *p = &off_40B3470;
  }
  return p;
}


// CInfoLandmark::~CInfoLandmark  (line 53, @0x00000000023e8f30, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CInfoLandmark::~CInfoLandmark(CInfoLandmark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CInfoLandmark::~CInfoLandmark  (line 53, @0x00000000023e8f50, libserver.so)  // inlines: ~CInfoLandmark, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CInfoLandmark::~CInfoLandmark(CInfoLandmark *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x00000000023e9e30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 53, @0x00000000023e9e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CInfoLandmark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CInfoLandmark::GetEntityClassInternal  (line 53, @0x00000000023eeb50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "info_landmark", "CInfoLandmark"
// globals: `guard variable for'CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass, CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass, __dso_handle, CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo, CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo
CEntityClass *__cdecl CInfoLandmark::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass);
    CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass._vptr_CEntityClass = off_40B33F0;
    __cxa_guard_release(&`guard variable for'CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass);
    __cxa_atexit(
      CInfoLandmark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass,
      &_dso_handle);
  }
  if ( g_pEntityCInfoLandmarkClass != 0 )
    return &CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass;
  if ( `guard variable for'CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo,
      "CInfoLandmark",
      "info_landmark",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo);
  }
  CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass.m_pClassInfo = &CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo;
  CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass.m_pBaseClassInfo = CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo.m_pBaseClassInfo;
  g_pEntityCInfoLandmarkClass = &CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass;
  CInfoLandmark::GetEntityClassInfo(void)::g_EntityCInfoLandmarkClassInfo.m_pClass = &CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass;
  CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCInfoLandmarkClass->m_pComponentOverrides = 0;
  return &CInfoLandmark::GetEntityClassInternal(void)::g_EntityCInfoLandmarkClass;
}


// CBaseDMStart::IsTriggered  (line 56, @0x00000000023bba40, libserver.so)  // inlines: CUtlSymbolLarge
// calls: UTIL_IsMasterTriggered
bool __fastcall CBaseDMStart::IsTriggered(CBaseDMStart *const this, CBaseEntity *pEntity)
{
  string_t sMaster; // [rsp+0h] [rbp-10h] BYREF

  sMaster.u.m_Id = this->m_Master.u.m_Id;
  return UTIL_IsMasterTriggered(&sMaster, pEntity);
}


// CBaseEntity::SUB_Remove  (line 65, @0x00000000023bf610, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// calls: DevWarning, UTIL_Remove
// callers: CDecal::StaticDecal, CProjectedDecal::StaticDecal, CBaseEntity::SUB_RemoveIfUncarried
// strings: "SUB_Remove called on entity with health > 0\n"
void __fastcall CBaseEntity::SUB_Remove(CBaseEntity *const this)
{
  if ( this->m_iHealth.m_Value > 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 328, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iHealth.m_Value = 0;
    DevWarning(2, "SUB_Remove called on entity with health > 0\n");
  }
  UTIL_Remove(this);
}


// CBaseEntity::SUB_RemoveIfUncarried  (line 77, @0x00000000023c1e80, libserver.so)  // inlines: curtime
// calls: CBaseEntity::VPhysicsGetObject, CBaseEntity::SUB_Remove, CBaseEntity::ThinkSet, RandomFloat, CBaseEntity::SetNextThink
// globals: CBaseEntity::SUB_RemoveIfUncarried(void)
void __fastcall CBaseEntity::SUB_RemoveIfUncarried(CBaseEntity *const this)
{
  IPhysicsObject *Object; // rax
  CGlobalVars *v3; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v5; // xmm0_8
  double v6; // xmm1_8
  float m_flCurrentTime; // [rsp+Ch] [rbp-14h]

  Object = CBaseEntity::VPhysicsGetObject(this);
  if ( Object != 0 && ((*(*Object + 1296LL))(Object) & 4) != 0 )
  {
    CBaseEntity::ThinkSet(this, CBaseEntity::SUB_RemoveIfUncarried, 0.0, 0, 0);
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v3->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    *&v5 = RandomFloat(5.0, 10.0) + m_flCurrentTime;
    CBaseEntity::SetNextThink(this, v5, v6, 0);
  }
  else
  {
    CBaseEntity::SUB_Remove(this);
  }
}


// CBaseEntity::SUB_DoNothing  (line 96, @0x00000000023c4610, libserver.so)
void __fastcall CBaseEntity::SUB_DoNothing(CBaseEntity *const this)
{
  ;
}


// FireTargets  (line 105, @0x00000000023c4620, libserver.so)  // inlines: GetDebugName
// calls: DevMsg, CGameEntitySystem::FindEntityByName, CEntityIdentity::GetDebugName
// callers: ConsoleFireTargets, CMultiplayRules::ClientDisconnected, CMultiplayRules::PlayerKilled, CPhysBox::VPhysicsUpdate
// strings: "Firing: (%s)\n", "[%03d] Found: %s, firing (%s)\n"
void __fastcall FireTargets(
        const char *targetName,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        unsigned int useType,
        float value)
{
  CBaseEntity *v8; // r15
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdi
  const char *DebugName; // rax

  if ( targetName != 0 && *targetName != 0 )
  {
    DevMsg(2, "Firing: (%s)\n", targetName);
    v8 = 0;
    while ( 1 )
    {
      EntityByName = CGameEntitySystem::FindEntityByName(
                       g_pGameEntitySystem,
                       v8,
                       targetName,
                       pActivator,
                       pActivator,
                       pCaller,
                       0);
      v8 = EntityByName;
      if ( EntityByName == 0 )
        break;
      m_pEntity = EntityByName->m_pEntity;
      if ( (m_pEntity->m_flags & 0x200) == 0 )
      {
        DebugName = CEntityIdentity::GetDebugName(m_pEntity);
        DevMsg(2, "[%03d] Found: %s, firing (%s)\n", gpGlobals->tickcount % 1000, DebugName, targetName);
        (*(v8->_vptr_IHandleEntity + 108))(v8, pActivator, pCaller, useType, value);
      }
    }
  }
}


// CBaseToggle::GetDataDescMap  (line 136, @0x00000000023bae50, libserver.so)
// globals: CBaseToggle::m_DataMap
datamap_t *__fastcall CBaseToggle::GetDataDescMap(CBaseToggle *const this)
{
  return &CBaseToggle::m_DataMap;
}


// CBaseToggle::AddDatadescMetadataKeys  (line 136, @0x00000000023c4720, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseToggle::GetEntityClass(void)
void __fastcall CBaseToggle::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseToggle::GetEntityClass);
}


// CBaseToggle::GetBaseMap  (line 136, @0x00000000023c4740, libserver.so)
datamap_t *__cdecl CBaseToggle::GetBaseMap()
{
  return &CBaseModelEntity::m_DataMap;
}


// DataMapInit<CBaseToggle>  (line 136, @0x00000000023c4750, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CBaseToggle"
// globals: `guard variable for'DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder, CBaseToggle::GetEntityClass(void), CBaseToggle::m_DataMap, DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseToggle>(CBaseToggle *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_pszBase = "CBaseToggle";
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseToggle>(CBaseToggle *)::nameHolder,
      &_dso_handle);
  }
  CBaseToggle::m_DataMap.dataNumFields = 16;
  CBaseToggle::m_DataMap.baseMap = &CBaseModelEntity::m_DataMap;
  CBaseToggle::m_DataMap.dataDesc = &DataMapInit<CBaseToggle>(CBaseToggle *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseToggle::m_DataMap, CBaseToggle::GetEntityClass);
  return &CBaseToggle::m_DataMap;
}


// CBaseToggle::YouForgotToImplementOrDeclareServerClass  (line 158, @0x00000000023bae60, libserver.so)
int __fastcall CBaseToggle::YouForgotToImplementOrDeclareServerClass(CBaseToggle *const this)
{
  return 0;
}


// CBaseToggle::GetServerClass  (line 158, @0x00000000023c2fc0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseToggle::GetServerClass(CBaseToggle *const this)
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


// CBaseToggle::CBaseToggle  (line 162, @0x00000000023c4820, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlSymbolLarge
// calls: CBaseModelEntity::CBaseModelEntity
// callers: CBaseToggle::CEntityInstanceEntityClass::ConstructInstance, CRotButton::CEntityInstanceEntityClass::ConstructInstance, CBaseButton::CEntityInstanceEntityClass::ConstructInstance, CMomentaryRotButton::CEntityInstanceEntityClass::ConstructInstance, CFuncMoveLinear::CEntityInstanceEntityClass::ConstructInstance, CButtonTimed::CButtonTimed, CBaseDoor::CBaseDoor, CFuncMoveLinearAlias_momentary_door::CEntityInstanceEntityClass::ConstructInstance, CFuncWaterAnalog::CEntityInstanceEntityClass::ConstructInstance, CGunTarget::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBaseToggle::CBaseToggle(CBaseToggle *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_hActivator.m_Index = -1;
  this->_vptr_IHandleEntity = &off_40B41B0;
  this->m_sMaster.u.m_Id = 0;
  this->m_bAlwaysFireBlockedOutputs = 0;
}


// CBaseToggle::Precache  (line 176, @0x00000000023e39d0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, CBaseEntity::PrecacheModelFromKeyValues
// callers: CBaseButton::Precache, CBaseDoor::Precache, CFuncMoveLinear::Precache, CBasePlatTrain::Precache
void __fastcall CBaseToggle::Precache(CBaseToggle *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CBaseToggle::GetGroundVelocityToApply  (line 185, @0x00000000023bae70, libserver.so)  // inlines: operator=
void __fastcall CBaseToggle::GetGroundVelocityToApply(CBaseToggle *const this, Vector *const vecGroundVel)
{
  *vecGroundVel = this->m_vecVelocity.m_Value;
}


// CBaseToggle::LinearMove  (line 197, @0x00000000023c4860, libserver.so)  // inlines: FastSqrt, Length, VectorDivide, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator/, operator=, operator==
// calls: CBaseEntity::GetLocalOrigin, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetLocalVelocity
// callers: CBaseButton::ButtonReturn, CBaseButton::ButtonActivate, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CFuncMoveLinear::InputSetSpeed, CFuncMoveLinear::MoveTo, CGunTarget::Next, CFuncPlat::GoDown, CFuncPlat::GoUp, CFuncTrain::Next
void __fastcall CBaseToggle::LinearMove(CBaseToggle *const this, const Vector *const vecDest, float a3, float flSpeed)
{
  vec_t z; // xmm0_4
  const Vector *LocalOrigin; // rax
  const Vector *v8; // rax
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // [rsp+0h] [rbp-30h]
  float v18; // [rsp+4h] [rbp-2Ch]
  float v19; // [rsp+8h] [rbp-28h]
  float flTravelTimea; // [rsp+Ch] [rbp-24h]
  Vector vVelocity; // [rsp+10h] [rbp-20h] BYREF

  this->m_vecFinalDest.x = vecDest->x;
  this->m_vecFinalDest.y = vecDest->y;
  z = vecDest->z;
  this->m_movementType = 1;
  this->m_vecFinalDest.z = z;
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  if ( LocalOrigin->x == vecDest->x
    && LocalOrigin->y == vecDest->y
    && LocalOrigin->z == vecDest->z
    && !this->m_bAlwaysFireBlockedOutputs )
  {
    (*(this->_vptr_IHandleEntity + 118))(this);
  }
  else
  {
    v8 = CBaseEntity::GetLocalOrigin(this);
    v9 = vecDest->x - v8->x;
    v10 = vecDest->y - v8->y;
    v11 = vecDest->z - v8->z;
    v12 = fsqrt(((v9 * v9) + (v10 * v10)) + (v11 * v11)) / a3;
    v17 = v11;
    v18 = v10;
    v19 = v9;
    flTravelTimea = v12;
    if ( v12 < 0.0 )
    {
      CBaseEntity::SetMoveDoneTime(this, -v12, v9);
      v16 = flTravelTimea;
      v15 = v19;
      v14 = v18;
      v13 = v17;
    }
    else
    {
      CBaseEntity::SetMoveDoneTime(this, v12, v9);
      v13 = v17;
      v14 = v18;
      v15 = v19;
      v16 = flTravelTimea;
    }
    vVelocity.x = v15 * (1.0 / v16);
    vVelocity.y = v14 * (1.0 / v16);
    vVelocity.z = v13 * (1.0 / v16);
    CBaseEntity::SetLocalVelocity(this, &vVelocity);
  }
}


// CBaseToggle::MoveDone  (line 233, @0x00000000023c4c40, libserver.so)  // inlines: MoveDone
// calls: CBaseToggle::AngularMoveDone, CBaseToggle::LinearMoveDone
// callers: CFuncMoveLinear::MoveDone
void __fastcall CBaseToggle::MoveDone(CBaseToggle *const this)
{
  int m_movementType; // eax
  void (*pfn)(CGameEntity *); // rax
  CGameEntity *v4; // rdi

  m_movementType = this->m_movementType;
  if ( m_movementType == 1 )
  {
    CBaseToggle::LinearMoveDone(this);
  }
  else if ( m_movementType == 2 )
  {
    CBaseToggle::AngularMoveDone(this);
  }
  pfn = this->m_pfnMoveDone.__pfn;
  this->m_movementType = 0;
  if ( pfn != 0 )
  {
    v4 = (this + this->m_pfnMoveDone.__delta);
    if ( (pfn & 1) != 0 )
      (*(v4->_vptr_IHandleEntity + pfn - 1))();
    else
      pfn(v4);
  }
}


// CBaseToggle::LinearMoveDone  (line 250, @0x00000000023c4a30, libserver.so)
// calls: UTIL_SetOrigin, CBaseEntity::SetAbsVelocity, CBaseEntity::SetMoveDoneTime
// callers: CBaseToggle::MoveDone
void __fastcall CBaseToggle::LinearMoveDone(CBaseToggle *const this)
{
  float v2; // xmm1_4

  UTIL_SetOrigin(this, &this->m_vecFinalDest, 0);
  CBaseEntity::SetAbsVelocity(this, &vec3_origin);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
}


// CBaseToggle::IsLockedByMaster  (line 259, @0x00000000023c0e50, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator!=
// calls: UTIL_IsMasterTriggered
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseToggle::IsLockedByMaster(CBaseToggle *const this)
{
  __int64 v1; // rbp
  UtlSymLargeId_t m_Id; // rdx
  bool result; // al
  CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  _QWORD v9[3]; // [rsp-18h] [rbp-18h] BYREF

  m_Id = this->m_sMaster.u.m_Id;
  result = 0;
  if ( m_Id != 0 )
  {
    v9[2] = v1;
    m_pInstance = 0;
    m_Index = this->m_hActivator.m_Index;
    if ( m_Index + 2 > 1 )
    {
      m_Index_low = LOWORD(this->m_hActivator.m_Index);
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[m_Index_low & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          m_pInstance = v8->m_pInstance;
      }
    }
    v9[0] = m_Id;
    return !UTIL_IsMasterTriggered(v9, m_pInstance);
  }
  return result;
}


// CBaseToggle::AngularMove  (line 274, @0x00000000023c4a70, libserver.so)  // inlines: FastSqrt, Length, LengthSqr, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, operator==
// calls: CBaseEntity::GetLocalAngles, CBaseEntity::SetMoveDoneTime, CBaseEntity::SetLocalAngularVelocity
// callers: CBaseButton::ButtonReturn, CBaseButton::ButtonActivate, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp, CFuncTrackChange::GoDown, CFuncTrackChange::GoUp
void __fastcall CBaseToggle::AngularMove(
        CBaseToggle *const this,
        const QAngle *const vecDestAngle,
        float a3,
        float flSpeed)
{
  vec_t z; // xmm0_4
  const QAngle *LocalAngles; // rax
  const QAngle *v8; // rax
  float v9; // xmm1_4
  float v10; // [rsp+Ch] [rbp-34h]
  float v11; // [rsp+10h] [rbp-30h]
  float v12; // [rsp+14h] [rbp-2Ch]
  float flTravelTimea; // [rsp+1Ch] [rbp-24h]
  QAngle vAngVelocity; // [rsp+20h] [rbp-20h] BYREF

  this->m_vecFinalAngle.x = vecDestAngle->x;
  this->m_vecFinalAngle.y = vecDestAngle->y;
  z = vecDestAngle->z;
  this->m_movementType = 2;
  this->m_vecFinalAngle.z = z;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  if ( LocalAngles->x == vecDestAngle->x
    && LocalAngles->y == vecDestAngle->y
    && LocalAngles->z == vecDestAngle->z
    && !this->m_bAlwaysFireBlockedOutputs )
  {
    (*(this->_vptr_IHandleEntity + 118))(this);
  }
  else
  {
    v8 = CBaseEntity::GetLocalAngles(this);
    v10 = vecDestAngle->x - v8->x;
    v11 = vecDestAngle->y - v8->y;
    v12 = vecDestAngle->z - v8->z;
    v9 = fsqrt(((v10 * v10) + (v11 * v11)) + (v12 * v12)) / a3;
    flTravelTimea = fmaxf(0.0099999998, v9);
    CBaseEntity::SetMoveDoneTime(this, flTravelTimea, v9);
    vAngVelocity.x = v10 * (1.0 / flTravelTimea);
    vAngVelocity.y = v11 * (1.0 / flTravelTimea);
    vAngVelocity.z = v12 * (1.0 / flTravelTimea);
    CBaseEntity::SetLocalAngularVelocity(this, &vAngVelocity);
  }
}


// CBaseToggle::AngularMoveDone  (line 314, @0x00000000023c4c00, libserver.so)
// calls: CBaseEntity::SetLocalAngles, CBaseEntity::SetLocalAngularVelocity, CBaseEntity::SetMoveDoneTime
// callers: CBaseToggle::MoveDone
void __fastcall CBaseToggle::AngularMoveDone(CBaseToggle *const this)
{
  float v2; // xmm1_4

  CBaseEntity::SetLocalAngles(this, &this->m_vecFinalAngle);
  CBaseEntity::SetLocalAngularVelocity(this, &vec3_angle);
  CBaseEntity::SetMoveDoneTime(this, -1.0, v2);
}


// CBaseToggle::AxisValue  (line 322, @0x00000000023c4cd0, libserver.so)
float __fastcall CBaseToggle::AxisValue(int flags, const QAngle *const angles)
{
  if ( (flags & 0x40) != 0 )
    return angles->z;
  if ( (flags & 0x80) != 0 )
    return angles->x;
  return angles->y;
}


// CBaseToggle::AxisDir  (line 333, @0x00000000023c4d10, libserver.so)  // inlines: operator=
// callers: CRotButton::Spawn, CMomentaryRotButton::Spawn, CRotDoor::Spawn
void __fastcall CBaseToggle::AxisDir(CBaseToggle *const this)
{
  unsigned int m_Value; // eax

  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x40) != 0 )
  {
    this->m_vecMoveAng.x = 0.0;
    this->m_vecMoveAng.y = 0.0;
    this->m_vecMoveAng.z = 1.0;
  }
  else
  {
    if ( (m_Value & 0x80u) != 0 )
    {
      this->m_vecMoveAng.x = 1.0;
      this->m_vecMoveAng.y = 0.0;
    }
    else
    {
      this->m_vecMoveAng.x = 0.0;
      this->m_vecMoveAng.y = 1.0;
    }
    this->m_vecMoveAng.z = 0.0;
  }
}


// CBaseToggle::AxisDelta  (line 344, @0x00000000023c4d90, libserver.so)
// callers: CMomentaryRotButton::GetPos, CMomentaryRotButton::InputSetPosition, CMomentaryRotButton::SetPositionMoveDone
float __fastcall CBaseToggle::AxisDelta(int flags, const QAngle *const angle1, const QAngle *const angle2)
{
  if ( (flags & 0x40) != 0 )
    return angle1->z - angle2->z;
  if ( (flags & 0x80) != 0 )
    return angle1->x - angle2->x;
  return angle1->y - angle2->y;
}


