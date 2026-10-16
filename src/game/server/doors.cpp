// Reconstructed from DWARF by pahole; not original source.

// src/game/server/doors.cpp:109
class CFuncWater : public CBaseDoor {
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
	CFuncWater(CFuncWater &);
	CFuncWater(CFuncWater &);
	CFuncWater();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CFuncWater();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1704
};

// src/game/server/doors.cpp:112
class C_CBaseDoor_MapInstall {
	C_CBaseDoor_MapInstall();

	// sizeof = 1
};

// src/game/server/doors.cpp:1432
class CRotDoor : public CBaseDoor {
public:

private:

	bool m_bSolidBsp;  // +0x6a4

	static datamap_t m_DataMap;
	typedef CBaseDoor BaseClass;

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
	CRotDoor(CRotDoor &);
	CRotDoor(CRotDoor &);
	CRotDoor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual bool CreateVPhysics();
	virtual void SetToggleState(int);
	virtual bool IsRotatingDoor();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CRotDoor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[49] CreateVPhysics
	// vtable[215] SetToggleState
	// vtable[216] IsRotatingDoor
	// vtable[34] GetDataDescMap
	// sizeof = 1704
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseDoor::GetDataDescMap  (line 46, @0x00000000021babb0, libserver.so)
// globals: CBaseDoor::m_DataMap
datamap_t *__fastcall CBaseDoor::GetDataDescMap(CBaseDoor *const this)
{
  return &CBaseDoor::m_DataMap;
}


// CBaseDoor::AddDatadescMetadataKeys  (line 46, @0x00000000021c5900, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseDoor::GetEntityClass(void)
void __fastcall CBaseDoor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseDoor::GetEntityClass);
}


// CBaseDoor::GetBaseMap  (line 46, @0x00000000021c5920, libserver.so)
datamap_t *__cdecl CBaseDoor::GetBaseMap()
{
  return &CBaseToggle::m_DataMap;
}


// DataMapInit<CBaseDoor>  (line 46, @0x00000000021d9940, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CBaseDoor"
// globals: `guard variable for'DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder, `guard variable for'DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc, CBaseDoor::GetEntityClass(void), CBaseDoor::m_DataMap, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CBaseDoor>(CBaseDoor *a1)
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
  char *v14; // r12
  __int64 v15; // rbx
  int v16; // eax
  char **v17; // rax
  char *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  char **v21; // rax
  char *v22; // r12
  __int64 v23; // rbx
  int v24; // eax
  char **v25; // rax
  char *v26; // r12
  __int64 v27; // rbx
  int v28; // eax
  char **v29; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase = "CBaseDoor";
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder,
      &_dso_handle);
  }
  CBaseDoor::m_DataMap.baseMap = &CBaseToggle::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc) != 0 )
  {
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[29].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[30].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[31].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[32].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[33].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[34].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[35].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[36].pSaveRestoreOps = eventFuncs;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[37].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 10);
    strcpy(stpcpy(v2, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "DoorTouch");
    m_Size = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[38].fieldName = v2;
    v6 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 9);
    strcpy(stpcpy(v6, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "DoorGoUp");
    v7 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v8 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v8 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v8 + 1;
    v9 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v7];
    if ( v9 != 0 )
      *v9 = v6;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[39].fieldName = v6;
    v10 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v10, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "DoorGoDown");
    v11 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v12 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v12 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v12 + 1;
    v13 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v11];
    if ( v13 != 0 )
      *v13 = v10;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[40].fieldName = v10;
    v14 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 11);
    strcpy(stpcpy(v14, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "DoorHitTop");
    v15 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v16 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v16 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v16 + 1;
    v17 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v15];
    if ( v17 != 0 )
      *v17 = v14;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[41].fieldName = v14;
    v18 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 14);
    strcpy(stpcpy(v18, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "DoorHitBottom");
    v19 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v20 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v20 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v20 + 1;
    v21 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v19];
    if ( v21 != 0 )
      *v21 = v18;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[42].fieldName = v18;
    v22 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 17);
    strcpy(stpcpy(v22, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "MovingSoundThink");
    v23 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v24 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v24 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v24 + 1;
    v25 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v23];
    if ( v25 != 0 )
      *v25 = v22;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[43].fieldName = v22;
    v26 = operator new[](DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_nLenBase + 22);
    strcpy(stpcpy(v26, DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_pszBase), "CloseAreaPortalsThink");
    v27 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    v28 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size == DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory, 1);
      v28 = DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Size = v28 + 1;
    v29 = &DataMapInit<CBaseDoor>(CBaseDoor *)::nameHolder.m_Names.m_Memory.m_pMemory[v27];
    if ( v29 != 0 )
      *v29 = v26;
    DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[44].fieldName = v26;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc);
  }
  CBaseDoor::m_DataMap.dataNumFields = 44;
  CBaseDoor::m_DataMap.dataDesc = &DataMapInit<CBaseDoor>(CBaseDoor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseDoor::m_DataMap, CBaseDoor::GetEntityClass);
  return &CBaseDoor::m_DataMap;
}


// CFuncWater::Schema_DynamicBinding  (line 109, @0x00000000021de330, libserver.so)
// globals: CFuncWater::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWater::Schema_DynamicBinding(const CFuncWater *const this)
{
  return CFuncWater::s_pSchemaBinding;
}


// CFuncWater::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 109, @0x00000000021de340, libserver.so)
// globals: CFuncWater::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncWater::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncWater::CEntityInstanceEntityClass *const this)
{
  return CFuncWater::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncWater::CEntityInstanceEntityClass::DestructInstance  (line 109, @0x00000000021de350, libserver.so)  // inlines: Destruct<CFuncWater>
void __fastcall CFuncWater::CEntityInstanceEntityClass::DestructInstance(
        CFuncWater::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncWater::CEntityInstanceEntityClass::FreeInstance  (line 109, @0x00000000021de370, libserver.so)
void __fastcall CFuncWater::CEntityInstanceEntityClass::FreeInstance(
        CFuncWater::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncWater::CEntityInstanceEntityClass::CanAllocate  (line 109, @0x00000000021de390, libserver.so)
bool __fastcall CFuncWater::CEntityInstanceEntityClass::CanAllocate(
        const CFuncWater::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncWater::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 109, @0x00000000021de3a0, libserver.so)
// globals: CFuncWater::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncWater::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncWater::CEntityInstanceEntityClass *const this)
{
  return CFuncWater::s_pSchemaBinding;
}


// CFuncWater::CEntityInstanceEntityClass::AllocateInstance  (line 109, @0x00000000021e03c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncWater::CEntityInstanceEntityClass::AllocateInstance(
        CFuncWater::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CFuncWater::~CFuncWater  (line 109, @0x00000000021e24b0, libserver.so)
// calls: CBaseDoor::~CBaseDoor
void __fastcall CFuncWater::~CFuncWater(CFuncWater *const this)
{
  this->_vptr_IHandleEntity = &off_4015C50;
  this->_vptr_IGameEventListener2 = off_4016330;
  CBaseDoor::~CBaseDoor(this);
}


// CFuncWater::~CFuncWater  (line 109, @0x00000000021e24f0, libserver.so)  // inlines: ~CFuncWater
// calls: CBaseDoor::~CBaseDoor, CBaseEntity::operator delete
void __fastcall CFuncWater::~CFuncWater(CFuncWater *const this)
{
  this->_vptr_IHandleEntity = &off_4015C50;
  this->_vptr_IGameEventListener2 = off_4016330;
  CBaseDoor::~CBaseDoor(this);
  CBaseEntity::operator delete(this);
}


// CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x00000000021e2a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 109, @0x00000000021e2a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncWater::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncWater::GetEntityClassInternal  (line 109, @0x00000000021e68b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseDoor::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "func_water", "CFuncWater"
// globals: `guard variable for'CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass, CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass, __dso_handle, CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo, CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo
CEntityClass *__cdecl CFuncWater::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass);
    CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass._vptr_CEntityClass = off_4015BD0;
    __cxa_guard_release(&`guard variable for'CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass);
    __cxa_atexit(
      CFuncWater::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncWaterClass != 0 )
    return &CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass;
  if ( `guard variable for'CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo) != 0 )
  {
    EntityClassInfo = CBaseDoor::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo,
      "CFuncWater",
      "func_water",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo);
  }
  CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass.m_pClassInfo = &CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo;
  CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass.m_pBaseClassInfo = CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncWaterClass = &CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass;
  CFuncWater::GetEntityClassInfo(void)::g_EntityCFuncWaterClassInfo.m_pClass = &CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass;
  CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncWaterClass->m_pComponentOverrides = 0;
  return &CFuncWater::GetEntityClassInternal(void)::g_EntityCFuncWaterClass;
}


// CFuncWater::CEntityInstanceEntityClass::ConstructInstance  (line 109, @0x00000000021e6a00, libserver.so)  // inlines: CFuncWater, Construct<CFuncWater>
// calls: CBaseDoor::CBaseDoor
CEntityInstance *__fastcall CFuncWater::CEntityInstanceEntityClass::ConstructInstance(
        CFuncWater::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseDoor::CBaseDoor(p);
    *p = &off_4015C50;
    *(p + 160) = off_4016330;
  }
  return p;
}


// CBaseDoor::YouForgotToImplementOrDeclareServerClass  (line 112, @0x00000000021babc0, libserver.so)
int __fastcall CBaseDoor::YouForgotToImplementOrDeclareServerClass(CBaseDoor *const this)
{
  return 0;
}


// CBaseDoor::GetServerClass  (line 112, @0x00000000021c4830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseDoor::GetServerClass(CBaseDoor *const this)
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


// PlayLockSounds  (line 129, @0x00000000021c5930, libserver.so)  // inlines: AllocateData, CPASAttenuationFilter, CPASFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, String, ToCStr, ~CPASAttenuationFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CGlobalVarsBase::curtime, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CSoundOpGameSystem::StartSoundEvent, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, CBaseEntity::GetAbsOrigin, operator new [], __stack_chk_fail, _Unwind_Resume (13 total)
// callers: CBaseButton::ButtonActivate, CBaseButton::OnUseLocked, CBaseButton::ButtonTouch, CBaseButton::Press, CBaseDoor::InputOpen, CBaseDoor::DoorActivate, CBaseDoor::Use, CBaseDoor::DoorTouch, CBasePropDoor::OnUnlockedUse, CBasePropDoor::PlayLatchSounds, CBasePropDoor::OnLockedUse
void __fastcall PlayLockSounds(
        CBaseEntity *pEntity,
        locksound_t *pls,
        bool bLocked,
        bool bButton,
        const Vector *pOrigin)
{
  const Vector *AbsOrigin; // rax
  uint v8; // xmm1_4
  float v9; // xmm1_4
  const char *v10; // rdx
  SosFieldValueMem_t *v11; // rax
  uint v12; // xmm1_4
  float v13; // xmm1_4
  const char *m_pAsString; // rdx
  SosFieldValueMem_t *m_pData; // rax
  SndOpEventGuid_t nGuid; // [rsp+8h] [rbp-1A8h]
  SndOpEventGuid_t nGuida; // [rsp+8h] [rbp-1A8h]
  vec_t z; // [rsp+10h] [rbp-1A0h]
  vec_t y; // [rsp+14h] [rbp-19Ch]
  vec_t x; // [rsp+18h] [rbp-198h]
  bool v21; // [rsp+18h] [rbp-198h]
  float flsoundwait; // [rsp+1Ch] [rbp-194h]
  CSosFieldData origin; // [rsp+20h] [rbp-190h] BYREF
  CPASAttenuationFilter filter; // [rsp+40h] [rbp-170h] BYREF
  unsigned __int64 v25; // [rsp+178h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  if ( (pEntity->m_spawnflags.m_Value & 0x1000) == 0 )
  {
    flsoundwait = 1.0;
    if ( bButton )
      flsoundwait = 0.5;
    AbsOrigin = pOrigin;
    if ( pOrigin == 0 )
    {
      v21 = bLocked;
      AbsOrigin = CBaseEntity::GetAbsOrigin(pEntity);
      bLocked = v21;
    }
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
    if ( bLocked )
    {
      if ( pls->sLockedSound.u.m_Id != 0 && CGlobalVarsBase::curtime(gpGlobals, 0) > pls->flwaitSound )
      {
        *&origin.m_fieldDataType = (*(pEntity->_vptr_IHandleEntity + 186))(pEntity);
        origin.m_nAllocSize = v12;
        CRecipientFilter::CRecipientFilter(&filter);
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
        filter._vptr_IRecipientFilter = &off_3FECD70;
        *&origin.m_fieldDataType = (*(pEntity->_vptr_IHandleEntity + 186))(pEntity);
        *&origin.m_nAllocSize = v13;
        CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v13);
        m_pAsString = "";
        if ( pls->sLockedSound.u.m_Id != 0 )
          m_pAsString = pls->sLockedSound.u.m_pAsString;
        nGuida = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, m_pAsString, 0, -1, 0.0);
        origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
        origin.m_nAllocSize = 0;
        origin.m_pData = 0;
        origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
        origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
        if ( origin.m_nAllocSize <= 0xB )
        {
          if ( origin.m_pData != 0 && origin.m_nAllocSize > 8 )
            operator delete[](origin.m_pData);
          m_pData = operator new[](0xCu);
          origin.m_pData = m_pData;
          origin.m_nAllocSize = 12;
        }
        else
        {
          m_pData = origin.m_pData;
        }
        *m_pData = x;
        *(m_pData + 1) = y;
        *(m_pData + 2) = z;
        CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, nGuida, "position", &origin, 0, 0);
        if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
          operator delete[](origin.m_pData);
LABEL_18:
        pls->flwaitSound = CGlobalVarsBase::curtime(gpGlobals, 0) + flsoundwait;
        filter._vptr_IRecipientFilter = &off_3FCB190;
        CRecipientFilter::~CRecipientFilter(&filter);
      }
    }
    else if ( pls->sUnlockedSound.u.m_Id != 0 && CGlobalVarsBase::curtime(gpGlobals, 0) > pls->flwaitSound )
    {
      *&origin.m_fieldDataType = (*(pEntity->_vptr_IHandleEntity + 186))(pEntity);
      origin.m_nAllocSize = v8;
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::AddRecipientsByPAS(&filter, &origin);
      filter._vptr_IRecipientFilter = &off_3FECD70;
      *&origin.m_fieldDataType = (*(pEntity->_vptr_IHandleEntity + 186))(pEntity);
      *&origin.m_nAllocSize = v9;
      CPASAttenuationFilter::Filter(&filter, &origin, 0.80000001, v9);
      v10 = "";
      if ( pls->sUnlockedSound.u.m_Id != 0 )
        v10 = pls->sUnlockedSound.u.m_pAsString;
      nGuid = CSoundOpGameSystem::StartSoundEvent(g_pSoundOpGameSystem, &filter, v10, 0, -1, 0.0);
      origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      origin.m_nAllocSize = 0;
      origin.m_pData = 0;
      origin.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
      origin.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
      if ( origin.m_nAllocSize <= 0xB )
      {
        if ( origin.m_pData != 0 && origin.m_nAllocSize > 8 )
          operator delete[](origin.m_pData);
        v11 = operator new[](0xCu);
        origin.m_pData = v11;
        origin.m_nAllocSize = 12;
      }
      else
      {
        v11 = origin.m_pData;
      }
      *v11 = x;
      *(v11 + 1) = y;
      *(v11 + 2) = z;
      CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, nGuid, "position", &origin, 0, 0);
      if ( origin.m_nAllocSize > 8 && origin.m_pData != 0 )
        operator delete[](origin.m_pData);
      goto LABEL_18;
    }
  }
}


// CBaseDoor::CBaseDoor  (line 176, @0x00000000021c5e80, libserver.so)  // inlines: AlignedByteArrayExplicit_t, AlignedByteArray_t, CEntityHandle, CEntityIOOutput, CGameEventListener, CHandle, CNavDoorBlocker, CNetworkVarBase, CUtlMemoryFixed, CUtlSymbolLarge, CUtlVectorBase, CUtlVectorFixed, EnsureValidValue<bool>, ListenForGameEvent, locksound_t, ~CBaseToggle
// calls: CBaseToggle::CBaseToggle, Plat_IsInDebugSessionRaw, CGameEventListener::~CGameEventListener, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CNavDoorBlocker::~CNavDoorBlocker
// callers: CBaseDoor::CEntityInstanceEntityClass::ConstructInstance, CFuncWater::CEntityInstanceEntityClass::ConstructInstance, CRotDoor::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CBaseDoor::CBaseDoor(CBaseDoor *const this)
{
  __int64 v2; // rdi

  CBaseToggle::CBaseToggle(this);
  this->_vptr_IHandleEntity = &off_4016370;
  this->_vptr_IGameEventListener2 = off_4016A50;
  this->m_ls._vptr_locksound_t = &off_3FD2260;
  this->m_bRegisteredForEvents = 0;
  this->m_ls.sLockedSound.u.m_Id = 0;
  this->m_ls.sLockedSentence.u.m_Id = 0;
  this->m_ls.sUnlockedSound.u.m_Id = 0;
  this->m_ls.sUnlockedSentence.u.m_Id = 0;
  this->m_NoiseMoving.u.m_Id = 0;
  this->m_NoiseArrived.u.m_Id = 0;
  this->m_NoiseMovingClosed.u.m_Id = 0;
  this->m_NoiseArrivedClosed.u.m_Id = 0;
  this->m_ChainTarget.u.m_Id = 0;
  this->m_OnBlockedClosing._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnBlockedOpening._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUnblockedClosing._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnUnblockedOpening._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFullyClosed._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnFullyOpen._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnClose._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnOpen._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnLockedUse._vptr_CEntityIOOutput = off_3F7C190;
  this->m_bIsUsable.m_Value = 0;
  this->m_NavBlocker.m_nFlags = 1;
  this->m_NavBlocker.m_hBlocker.m_Index = -1;
  this->m_NavBlocker.m_bPendingAndClosed = 0;
  this->m_NavBlocker.m_blockedAreas.m_Size = 0;
  if ( (this & 3) != 0 && Plat_IsInDebugSessionRaw(v2) != 0 )
    __debugbreak();
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(gameeventmanager, &this->CGameEventListener, "round_start", 1);
}


// CBaseDoor::~CBaseDoor  (line 189, @0x00000000021bebf0, libserver.so)  // inlines: StopListeningForAllEvents, ~CBaseToggle, ~CGameEventListener, ~IGameEventListener2
// calls: CNavDoorBlocker::~CNavDoorBlocker, CBaseModelEntity::~CBaseModelEntity
// callers: CBaseDoor::~CBaseDoor, CFuncWater::~CFuncWater, CRotDoor::~CRotDoor
void __fastcall CBaseDoor::~CBaseDoor(CBaseDoor *const this)
{
  CNavDoorBlocker *p_m_NavBlocker; // rdi
  bool v3; // zf

  p_m_NavBlocker = &this->m_NavBlocker;
  *&p_m_NavBlocker[-35].m_blockedAreas.m_Memory.m_Memory.m_Data[12] = &off_4016370;
  *&p_m_NavBlocker[-8].m_blockedAreas.m_Size = off_4016A50;
  CNavDoorBlocker::~CNavDoorBlocker(p_m_NavBlocker);
  v3 = !this->m_bRegisteredForEvents;
  this->_vptr_IGameEventListener2 = off_3FB3190;  // vptr: CGameEventListener
  if ( !v3 )
  {
    if ( gameeventmanager != 0 )
      (*(gameeventmanager->_vptr_IBaseInterface + 6))(gameeventmanager, &this->CGameEventListener);
    this->m_bRegisteredForEvents = 0;
  }
  this->_vptr_IGameEventListener2 = off_3FB3150;  // vptr: IGameEventListener2
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CBaseDoor::~CBaseDoor  (line 189, @0x00000000021beca0, libserver.so)
// calls: CBaseDoor::~CBaseDoor, CBaseEntity::operator delete
void __fastcall CBaseDoor::~CBaseDoor(CBaseDoor *const this)
{
  CBaseDoor::~CBaseDoor(this);
  CBaseEntity::operator delete(this);
}


// CBaseDoor::Spawn  (line 198, @0x00000000021bd440, libserver.so)  // inlines: AddEFlags, ClassMatches, DotProductAbs, FClassnameIs, FloatMakePositive, GetDebugName, GetEHandle, GetEntryIndex, GetSerialNumber, GetSolid, HasSpawnFlags, Lock, NetworkStateChanged, OBBSize, QAngle, Set, SetCollisionGroup, SetSolid, VectorAdd, VectorMultiply, VectorRotate, VectorSubtract, operator!=, operator*, operator+, operator-, operator-=, operator=, operator=<bool>
// calls: CBaseEntity::Spawn, CCollisionProperty::EnableTouchPersistsNotification, UTIL_ValidateSoundName, AllocPooledString, CBaseEntity::GetMoveParent, CBaseEntity::GetRootMoveParent, AngleVectors, CBaseModelEntity::SetModelFromKeyValues, CBaseEntity::GetLocalOrigin, CBaseEntity::GetLocalAngles, AngleMatrix, RotateAABB (22 total)
// callers: CRotDoor::Spawn
// strings: "RotDoorSound.DefaultMove", "RotDoorSound.DefaultArrive", "RotDoorSound.DefaultLocked", "DoorSound.Null", "EH", "func_water" (18 total)
// globals: jpt_21BD527, jpt_21BD5C2, CBaseDoor::DoorTouch(CBaseEntity *)
void __fastcall CBaseDoor::Spawn(CBaseDoor *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseModelEntity::NetworkVar_m_Collision *p_m_Collision; // r12
  bool v5; // r14
  char v6; // al
  string_t *p_m_NoiseMoving; // rdi
  CCollisionProperty *m_pCollision; // rdi
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  const Vector *LocalOrigin; // rax
  vec_t v12; // xmm3_4
  float v13; // r14d
  vec_t y; // xmm5_4
  float v15; // r15d
  float v16; // r13d
  const QAngle *LocalAngles; // rax
  __int64 v18; // rax
  vec_t v19; // xmm0_4
  int (**vptr_ICollideable)(...); // rax
  const QAngle *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  int (**vptr_IHandleEntity)(...); // rax
  float v29; // xmm0_4
  vec_t v30; // xmm2_4
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  unsigned int m_Value; // eax
  double v34; // xmm0_8
  CEntityIdentity *m_pEntity; // rdx
  int v36; // eax
  __int16 v37; // cx
  unsigned int v38; // eax
  const char *DebugName; // rax
  const char *v40; // rax
  matrix3x4_t *v41; // rax
  float v42; // [rsp+4h] [rbp-BCh]
  float v43; // [rsp+8h] [rbp-B8h]
  float v44; // [rsp+Ch] [rbp-B4h]
  QAngle angMoveDir; // [rsp+10h] [rbp-B0h] BYREF
  Vector vMinsIn; // [rsp+20h] [rbp-A0h] BYREF
  Vector vMaxsIn; // [rsp+30h] [rbp-90h] BYREF
  Vector vMinsOut; // [rsp+40h] [rbp-80h] BYREF
  Vector vMaxsOut; // [rsp+50h] [rbp-70h] BYREF
  matrix3x4_t mat; // [rsp+60h] [rbp-60h] BYREF

  p_m_Collision = &this->m_Collision;
  CBaseEntity::Spawn(this, pKeyValues);
  CCollisionProperty::EnableTouchPersistsNotification(p_m_Collision);
  v5 = BYTE1(this->m_spawnflags.m_Value) & 1;
  if ( v5 != this->m_bIsUsable.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1650, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsUsable.m_Value = v5;
  }
  v6 = (*(this->_vptr_IHandleEntity + 216))(this);
  p_m_NoiseMoving = &this->m_NoiseMoving;
  if ( v6 != 0 )
  {
    UTIL_ValidateSoundName(p_m_NoiseMoving, "RotDoorSound.DefaultMove");
    UTIL_ValidateSoundName(&this->m_NoiseArrived, "RotDoorSound.DefaultArrive");
    UTIL_ValidateSoundName(&this->m_ls.sLockedSound, "RotDoorSound.DefaultLocked");
  }
  else
  {
    UTIL_ValidateSoundName(p_m_NoiseMoving, "DoorSound.DefaultMove");
    UTIL_ValidateSoundName(&this->m_NoiseArrived, "DoorSound.DefaultArrive");
    UTIL_ValidateSoundName(&this->m_ls.sLockedSound, "DoorSound.DefaultLocked");
  }
  UTIL_ValidateSoundName(&this->m_ls.sUnlockedSound, "DoorSound.Null");
  switch ( this->m_bLockedSentence )
  {
    case 1u:
      AllocPooledString(&mat, "NA");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 2u:
      AllocPooledString(&mat, "ND");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 3u:
      AllocPooledString(&mat, "NF");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 4u:
      AllocPooledString(&mat, "NFIRE");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 5u:
      AllocPooledString(&mat, "NCHEM");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 6u:
      AllocPooledString(&mat, "NRAD");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 7u:
      AllocPooledString(&mat, "NCON");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 8u:
      AllocPooledString(&mat, "NH");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 9u:
      AllocPooledString(&mat, "NG");
      this->m_ls.sLockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    default:
      this->m_ls.sLockedSentence.u.m_Id = 0;
      break;
  }
  switch ( this->m_bUnlockedSentence )
  {
    case 1u:
      AllocPooledString(&mat, "EA");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 2u:
      AllocPooledString(&mat, "ED");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 3u:
      AllocPooledString(&mat, "EF");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 4u:
      AllocPooledString(&mat, "EFIRE");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 5u:
      AllocPooledString(&mat, "ECHEM");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 6u:
      AllocPooledString(&mat, "ERAD");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 7u:
      AllocPooledString(&mat, "ECON");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    case 8u:
      AllocPooledString(&mat, "EH");
      this->m_ls.sUnlockedSentence.u.m_Id = *&mat.m_flMatVal[0][0];
      break;
    default:
      this->m_ls.sUnlockedSentence.u.m_Id = 0;
      break;
  }
  if ( CBaseEntity::GetMoveParent(this) != 0
    && (m_pCollision = CBaseEntity::GetRootMoveParent(this)->m_pCollision) != 0
    && (*(m_pCollision->_vptr_ICollideable + 7))(m_pCollision) == 1 )
  {
    (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 1);
  }
  else
  {
    (*(this->m_Collision._vptr_ICollideable + 26))(p_m_Collision, 6);
  }
  z = this->m_vecMoveDir.z;
  x = this->m_vecMoveDir.x;
  angMoveDir.y = this->m_vecMoveDir.y;
  angMoveDir.x = x;
  angMoveDir.z = z;
  AngleVectors(&angMoveDir, &this->m_vecMoveDir, 0, 0);
  if ( this->m_bMoveDirIsLocal )
  {
    v41 = CBaseEntity::EntityToWorldTransform(this);
    VectorRotate(&this->m_vecMoveDir.x, v41, &mat);
    *&this->m_vecMoveDir.x = *&mat.m_flMatVal[0][0];
    this->m_vecMoveDir.z = mat.m_flMatVal[0][2];
  }
  CBaseModelEntity::SetModelFromKeyValues(this, pKeyValues, 0);
  LocalOrigin = CBaseEntity::GetLocalOrigin(this);
  v12 = this->m_Collision.m_vecMins.m_Value.x;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_Collision.m_vecMaxs.m_Value.x)));
  this->m_vecPosition1.x = LocalOrigin->x;
  v44 = v12;
  y = this->m_Collision.m_vecMins.m_Value.y;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_Collision.m_vecMaxs.m_Value.y)));
  this->m_vecPosition1.y = LocalOrigin->y;
  v43 = y;
  v16 = this->m_Collision.m_vecMaxs.m_Value.z;
  v42 = this->m_Collision.m_vecMins.m_Value.z;
  this->m_vecPosition1.z = LocalOrigin->z;
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  if ( vec3_angle.x == LocalAngles->x && vec3_angle.y == LocalAngles->y && vec3_angle.z == LocalAngles->z )
  {
    v22 = v13 - v44;
    v23 = v15 - v43;
    v24 = v16 - v42;
  }
  else
  {
    v18 = (*(this->m_Collision._vptr_ICollideable + 1))(p_m_Collision);
    vMinsIn.x = *v18;
    vMinsIn.y = *(v18 + 4);
    v19 = *(v18 + 8);
    vptr_ICollideable = this->m_Collision._vptr_ICollideable;
    vMinsIn.z = v19;
    vMaxsIn = *(vptr_ICollideable[2])(p_m_Collision);
    v21 = CBaseEntity::GetLocalAngles(this);
    AngleMatrix(v21, &mat);
    RotateAABB(&mat, &vMinsIn, &vMaxsIn, &vMinsOut, &vMaxsOut);
    v22 = vMaxsOut.x - vMinsOut.x;
    v23 = vMaxsOut.y - vMinsOut.y;
    v24 = vMaxsOut.z - vMinsOut.z;
  }
  v25 = this->m_vecMoveDir.x;
  v26 = this->m_vecMoveDir.y;
  v27 = this->m_vecMoveDir.z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  v29 = ((fabs((v22 - 2.0) * v25) + fabs((v23 - 2.0) * v26)) + fabs((v24 - 2.0) * v27)) - this->m_flLip;
  v30 = this->m_vecPosition1.y + (v26 * v29);
  v31 = this->m_vecPosition1.z + (v27 * v29);
  v32 = (v29 * v25) + this->m_vecPosition1.x;
  this->m_vecPosition2.y = v30;
  this->m_vecPosition2.z = v31;
  this->m_vecPosition2.x = v32;
  if ( vptr_IHandleEntity[216](this) != 0 )
  {
    m_Value = this->m_spawnflags.m_Value;
  }
  else if ( this->m_eSpawnPosition == FuncDoorSpawnPos_t::FUNC_DOOR_SPAWN_OPEN
         || ((m_Value = this->m_spawnflags.m_Value) & 1) != 0 )
  {
    UTIL_SetOrigin(this, &this->m_vecPosition2, 0);
    m_Value = this->m_spawnflags.m_Value;
    this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
  }
  else
  {
    this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  }
  if ( (m_Value & 0x800) != 0 )
    this->m_bLocked = 1;
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_PUSH, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v34 = 0.0;
  if ( this->m_flSpeed == 0.0 )
    this->m_flSpeed = 100.0;
  this->m_pfnTouch.__delta = 0;
  this->m_pfnTouch.__pfn = CBaseDoor::DoorTouch;
  if ( this != 0 && CEntityIdentity::ClassMatches(this->m_pEntity, "func_water") )
    goto LABEL_28;
  v38 = this->m_spawnflags.m_Value;
  if ( (v38 & 8) != 0 )
  {
    this->m_iEFlags |= 0x40000u;
    (*(this->m_Collision._vptr_ICollideable + 16))(p_m_Collision, v34);
    v38 = this->m_spawnflags.m_Value;
  }
  if ( (v38 & 4) != 0 )
  {
    CCollisionProperty::SetCollisionGroup(p_m_Collision, 18);
    CBaseEntity::AddFlag(this, 0x40000000);
  }
  if ( !this->m_bIgnoreDebris )
  {
LABEL_28:
    if ( this->m_eSpawnPosition != FuncDoorSpawnPos_t::FUNC_DOOR_SPAWN_OPEN )
      goto LABEL_29;
    goto LABEL_63;
  }
  if ( (this->m_spawnflags.m_Value & 4) == 0 )
  {
    CCollisionProperty::SetCollisionGroup(p_m_Collision, 7);
    goto LABEL_28;
  }
  DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
  Warning("Door %s with conflicting collision settings, removing ignoredebris\n", DebugName);
  if ( this->m_eSpawnPosition == FuncDoorSpawnPos_t::FUNC_DOOR_SPAWN_OPEN )
  {
LABEL_63:
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
    {
      v40 = CEntityIdentity::GetDebugName(this->m_pEntity);
      Warning(
        "Door %s using obsolete 'Start Open' spawnflag with 'Spawn Position' set to 'Open'. Reverting to old behavior.\n",
        v40);
    }
  }
LABEL_29:
  (*(this->_vptr_IHandleEntity + 49))(this);
  this->m_NavBlocker.m_nFlags = 1;
  if ( this != 0 && (m_pEntity = this->m_pEntity) != 0 )
  {
    v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v37 = 0x7FFF;
    else
      v37 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_NavBlocker.m_hBlocker.m_Index) = v37 | this->m_NavBlocker.m_hBlocker.m_Index & 0x8000;
    this->m_NavBlocker.m_hBlocker.m_Index = (v36 << 15) | this->m_NavBlocker.m_hBlocker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_NavBlocker.m_hBlocker.m_Index = -1;
  }
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, this->m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM);
}


// CBaseDoor::UpdateOnRemove  (line 392, @0x00000000021bb330, libserver.so)
// calls: CBaseModelEntity::UpdateOnRemove
void __fastcall CBaseDoor::UpdateOnRemove(CBaseDoor *const this)
{
  CBaseModelEntity::UpdateOnRemove(this);
}


// CBaseDoor::FireGameEvent  (line 405, @0x00000000021babd0, libserver.so)
void __fastcall CBaseDoor::FireGameEvent(CBaseDoor *const this, IGameEvent *pGameEvent)
{
  ;
}


// CBaseDoor::MovingSoundThink  (line 417, @0x00000000021d3540, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, curtime, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CBaseEntity::ThinkSet, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail, CUtlVectorBase<Vector, CUtlMemory<Vector, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CBaseDoor::StartMovingSound, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp
// globals: CBaseDoor::MovingSoundThink(void)
void __fastcall CBaseDoor::MovingSoundThink(CBaseDoor *const this)
{
  int v2; // xmm1_4
  float v3; // xmm1_4
  bool v4; // zf
  const char *m_pAsString; // rax
  CEntityIndex v6; // eax
  CGlobalVars *v7; // r14
  float m_flCurrentTime; // xmm0_4
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float duration; // [rsp+Ch] [rbp-1C4h]
  EmitSound_t ep; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v13; // [rsp+1A8h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
  LODWORD(ep.m_pSoundName) = v2;
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
  *&ep.m_pSoundName = v3;
  CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v3);
  CRecipientFilter::MakeReliable(&filter);
  v4 = this->m_NoiseMovingClosed.u.m_Id == 0;
  ep.m_flVolume = 1.0;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  if ( v4 || (this->m_toggle_state & 0xFFFFFFFD) == 1 )
  {
    m_pAsString = "";
    if ( this->m_NoiseMoving.u.m_Id != 0 )
      m_pAsString = this->m_NoiseMoving.u.m_pAsString;
  }
  else
  {
    m_pAsString = this->m_NoiseMovingClosed.u.m_pAsString;
  }
  ep.m_pSoundName = m_pAsString;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
  v6.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CBaseEntity::EmitSound(&filter, v6, &ep);
  if ( this->m_bLoopMoveSound )
  {
    duration = (*(*(g_pSoundOpSystem + 1) + 192LL))(g_pSoundOpSystem + 8, ep.m_pSoundName, 0, 2.0);
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    CBaseEntity::ThinkSet(this, CBaseDoor::MovingSoundThink, m_flCurrentTime + duration, -1459582942, 0);
  }
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CBaseDoor::StartMovingSound  (line 447, @0x00000000021d3890, libserver.so)
// calls: CBaseDoor::MovingSoundThink
void __fastcall CBaseDoor::StartMovingSound(CBaseDoor *const this)
{
  CBaseDoor::MovingSoundThink(this);
}


// CBaseDoor::StopMovingSound  (line 467, @0x00000000021bf7b0, libserver.so)  // inlines: String, ToCStr, curtime, entindex
// calls: CBaseEntity::ThinkSet, CEntityInstance::GetEntityIndex, CBaseEntity::StopSound
void __fastcall CBaseDoor::StopMovingSound(CBaseDoor *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // r12
  const char *m_pAsString; // r12
  CEntityIndex v5; // eax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, 0LL, m_flCurrentTime, -1459582942, 0);
  if ( this->m_NoiseMovingClosed.u.m_Id != 0 && (this->m_toggle_state & 0xFFFFFFFD) != 0 )
  {
    m_pAsString = this->m_NoiseMovingClosed.u.m_pAsString;
  }
  else
  {
    m_pAsString = "";
    if ( this->m_NoiseMoving.u.m_Id != 0 )
      m_pAsString = this->m_NoiseMoving.u.m_pAsString;
  }
  v5.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
  CBaseEntity::StopSound(v5, 6, m_pAsString, 0);
}


// CBaseDoor::ShouldSavePhysics  (line 484, @0x00000000021bb340, libserver.so)  // inlines: ClassMatches, FClassnameIs
// calls: CEntityIdentity::ClassMatches
// strings: "func_water"
bool __fastcall CBaseDoor::ShouldSavePhysics(CBaseDoor *const this)
{
  bool result; // al

  result = 1;
  if ( this != 0 )
    return !CEntityIdentity::ClassMatches(this->m_pEntity, "func_water");
  return result;
}


// CBaseDoor::CreateVPhysics  (line 492, @0x00000000021c5410, libserver.so)  // inlines: CCollisionAttributeWriter, CNetworkVarBase, ClassMatches, Compare, EnableInteractsAs, EnsureValidValue<long long unsigned int>, EnsureValidValue<short unsigned int>, EnsureValidValue<unsigned char>, EnsureValidValue<unsigned int>, FClassnameIs, GetCollisionGroup, GetCollisionGroup_Inline, GetForModify, NetworkStateChanged, Release, Set, VPhysicsCollisionAttribute_t, operator=, operator|=<int>, ~CCollisionAttributeWriter
// calls: CEntityIdentity::ClassMatches, CCollisionProperty::SetupPhysicsFromUnscaledModel, VPhysicsCollisionAttribute_t::Compare, _Unwind_Resume
// strings: "func_water"
bool __fastcall CBaseDoor::CreateVPhysics(CBaseDoor *const this)
{
  unsigned int v2; // r12d
  unsigned __int64 m_Value; // rax
  unsigned __int64 v4; // rax
  CCollisionProperty *m_pCollision; // rax
  int v7; // edx
  CCollisionAttributeWriter<RnCollisionAttr_t> writer; // [rsp+0h] [rbp-50h] BYREF

  if ( this != 0 && CEntityIdentity::ClassMatches(this->m_pEntity, "func_water") )
  {
    v2 = this->m_spawnflags.m_Value | 0x1000;
    if ( this->m_spawnflags.m_Value != v2 )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_spawnflags.m_Value = v2;
    }
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      2,
      0);
    writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t = off_3FC4F90;
    m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value;
    memset(&writer.m_OriginalState.m_nInteractsAs, 0, 33);
    if ( m_Value != 0 )
      writer.m_OriginalState.m_nInteractsAs.m_Value = m_Value;
    v4 = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
    if ( v4 != 0 )
    {
      writer.m_OriginalState.m_nInteractsWith.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value;
      v4 = writer.m_OriginalState.m_nInteractsExclude.m_Value;
    }
    if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != v4 )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        24,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nInteractsExclude.m_Value = this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value;
    }
    if ( writer.m_OriginalState.m_nEntityId.m_Value != this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        32,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nEntityId.m_Value = this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value;
    }
    if ( writer.m_OriginalState.m_nHierarchyId.m_Value != this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        36,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nHierarchyId.m_Value = this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionGroup.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        38,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nCollisionGroup.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value;
    }
    if ( writer.m_OriginalState.m_nCollisionFunctionMask.m_Value != this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value )
    {
      (*(writer.m_OriginalState._vptr_VPhysicsCollisionAttribute_t + 2))(
        &writer.m_OriginalState,
        39,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      writer.m_OriginalState.m_nCollisionFunctionMask.m_Value = this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value;
    }
    this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value |= 0x8000u;
    (*(this->m_Collision._vptr_ICollideable + 4))(&this->m_Collision);
    (*(this->m_Collision._vptr_ICollideable + 2))(&this->m_Collision);
    if ( !writer.m_bReleased )
    {
      writer.m_bReleased = 1;
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsAs.m_Value != writer.m_OriginalState.m_nInteractsAs.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsWith.m_Value != writer.m_OriginalState.m_nInteractsWith.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          16,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nInteractsExclude.m_Value != writer.m_OriginalState.m_nInteractsExclude.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          24,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nEntityId.m_Value != writer.m_OriginalState.m_nEntityId.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          32,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nHierarchyId.m_Value != writer.m_OriginalState.m_nHierarchyId.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          36,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nCollisionGroup.m_Value != writer.m_OriginalState.m_nCollisionGroup.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          38,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
      if ( this->m_Collision.m_collisionAttribute.m_nCollisionFunctionMask.m_Value != writer.m_OriginalState.m_nCollisionFunctionMask.m_Value )
        (*(this->m_Collision.m_collisionAttribute._vptr_VPhysicsCollisionAttribute_t + 2))(
          &this->m_Collision.m_collisionAttribute,
          39,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL);
    }
    return 1;
  }
  else
  {
    m_pCollision = this->m_pCollision;
    if ( m_pCollision != 0 )
      v7 = m_pCollision->m_CollisionGroup.m_Value;
    else
      v7 = 4;
    CCollisionProperty::SetupPhysicsFromUnscaledModel(
      &this->m_Collision,
      VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
      v7,
      0);
    return 1;
  }
}


// CBaseDoor::Activate  (line 536, @0x00000000021c6170, libserver.so)  // inlines: CUtlSymbolLarge, GetDoorMovementGroup, GetEntityName, operator!=, operator==
// calls: CBaseModelEntity::Activate, CBaseDoor::UpdateAreaPortals, CBaseDoor::GetDoorMovementGroup, CBaseEntity::GetLocalAngles, CBaseEntity::GetLocalOrigin
void __fastcall CBaseDoor::Activate(CBaseDoor *const this, ActivateType_t activateType)
{
  CEntityIdentity *m_pEntity; // rax
  TOGGLE_STATE m_toggle_state; // eax
  const CBaseEntity *const *v5; // rbx
  int DoorMovementGroup; // eax
  CBaseDoor **v7; // r13
  float *v8; // rdi
  float *LocalAngles; // r15
  float *LocalOrigin; // rax
  CBaseDoor *pDoorList[64]; // [rsp+0h] [rbp-230h] BYREF

  CBaseModelEntity::Activate(this, activateType);
  m_pEntity = this->m_pEntity;
  this->m_bDoorGroup = 1;
  if ( m_pEntity->m_name.u.m_Id != 0 )
  {
    v5 = pDoorList;
    DoorMovementGroup = CBaseDoor::GetDoorMovementGroup(this, pDoorList, 64);
    if ( DoorMovementGroup > 0 )
    {
      v7 = &pDoorList[(DoorMovementGroup - 1) + 1];
      do
      {
        v8 = *v5;
        if ( this->m_vecMoveDir.x == (*v5)[1].m_vecBaseVelocity.m_Value.y
          && this->m_vecMoveDir.y == v8[324]
          && this->m_vecMoveDir.z == v8[325] )
        {
          if ( (*(*v8 + 1728LL))(v8) != 0 )
          {
            LocalAngles = CBaseEntity::GetLocalAngles(this);
            LocalOrigin = CBaseEntity::GetLocalAngles(*v5);
          }
          else
          {
            LocalAngles = CBaseEntity::GetLocalOrigin(this);
            LocalOrigin = CBaseEntity::GetLocalOrigin(*v5);
          }
          if ( *LocalAngles != *LocalOrigin || LocalAngles[1] != LocalOrigin[1] || LocalAngles[2] != LocalOrigin[2] )
            this->m_bDoorGroup = 0;
        }
        ++v5;
      }
      while ( v5 != v7 );
    }
  }
  m_toggle_state = this->m_toggle_state;
  if ( m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
  {
    if ( m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
      CBaseDoor::UpdateAreaPortals(this, 0);
  }
  else
  {
    CBaseDoor::UpdateAreaPortals(this, 1);
  }
}


// CBaseDoor::InputSetToggleState  (line 580, @0x00000000021babf0, libserver.so)  // inlines: Int, operator int
void __fastcall CBaseDoor::InputSetToggleState(CBaseDoor *const this, inputdata_t *const inputdata)
{
  void (__fastcall *v2)(CBaseDoor *const, _QWORD); // rdx
  int16 m_type; // ax

  v2 = *(this->_vptr_IHandleEntity + 215);
  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    v2(this, inputdata->value.m_float);
  }
  else if ( m_type == 34 )
  {
    v2(this, inputdata->value.m_float64);
  }
  else
  {
    v2(this, inputdata->value.m_uint);
  }
}


// CBaseDoor::SetToggleState  (line 587, @0x00000000021bbd20, libserver.so)
// calls: UTIL_SetOrigin
void __fastcall CBaseDoor::SetToggleState(CBaseDoor *const this, int state)
{
  if ( state != 0 )
    UTIL_SetOrigin(this, &this->m_vecPosition1, 0);
  else
    UTIL_SetOrigin(this, &this->m_vecPosition2, 0);
}


// CBaseDoor::Precache  (line 597, @0x00000000021bb400, libserver.so)  // inlines: String, ToCStr
// calls: CBaseToggle::Precache, UTIL_ValidateSoundName, CBaseEntity::IsPrecacheAllowed, CBaseEntity::PrecacheScriptSound, __stack_chk_fail
// strings: "Plat.DefaultMoving", "RotDoorSound.DefaultMove", "RotDoorSound.DefaultArrive", "RotDoorSound.DefaultLocked", "DoorSound.Null", "WoodenDoor.Pound" (7 total)
void __fastcall CBaseDoor::Precache(CBaseDoor *const this, const CEntityPrecacheContext *pContext)
{
  string_t *p_m_NoiseMoving; // r14
  const char *m_pAsString; // rdi
  const char *v6; // rdi
  char pNoiseMoving[272]; // [rsp+10h] [rbp-470h] BYREF
  char pNoiseArrived[272]; // [rsp+120h] [rbp-360h] BYREF
  char pLockedSound[272]; // [rsp+230h] [rbp-250h] BYREF
  char pUnlockedSound[264]; // [rsp+340h] [rbp-140h] BYREF
  unsigned __int64 v11; // [rsp+448h] [rbp-38h]

  p_m_NoiseMoving = &this->m_NoiseMoving;
  v11 = __readfsqword(0x28u);
  CBaseToggle::Precache(this, pContext);
  UTIL_ValidateSoundName(pNoiseMoving, 260, p_m_NoiseMoving, "Plat.DefaultMoving");
  if ( (*(this->_vptr_IHandleEntity + 216))(this) != 0 )
  {
    UTIL_ValidateSoundName(pNoiseMoving, 260, p_m_NoiseMoving, "RotDoorSound.DefaultMove");
    UTIL_ValidateSoundName(pNoiseArrived, 260, &this->m_NoiseArrived, "RotDoorSound.DefaultArrive");
    UTIL_ValidateSoundName(pLockedSound, 260, &this->m_ls.sLockedSound, "RotDoorSound.DefaultLocked");
    UTIL_ValidateSoundName(pUnlockedSound, 260, &this->m_ls.sUnlockedSound, "DoorSound.Null");
    if ( CBaseEntity::IsPrecacheAllowed() )
    {
      CBaseEntity::PrecacheScriptSound("WoodenDoor.Pound", pContext);
      CBaseEntity::PrecacheScriptSound("CheckpointDoor.Pound", pContext);
    }
  }
  else
  {
    UTIL_ValidateSoundName(pNoiseMoving, 260, p_m_NoiseMoving, "DoorSound.DefaultMove");
    UTIL_ValidateSoundName(pNoiseArrived, 260, &this->m_NoiseArrived, "DoorSound.DefaultArrive");
    UTIL_ValidateSoundName(pLockedSound, 260, &this->m_ls.sLockedSound, "DoorSound.DefaultLocked");
    UTIL_ValidateSoundName(pUnlockedSound, 260, &this->m_ls.sUnlockedSound, "DoorSound.Null");
  }
  CBaseEntity::PrecacheScriptSound(pNoiseMoving, pContext);
  CBaseEntity::PrecacheScriptSound(pNoiseArrived, pContext);
  m_pAsString = "";
  if ( this->m_NoiseMovingClosed.u.m_Id != 0 )
    m_pAsString = this->m_NoiseMovingClosed.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(m_pAsString, 0);
  v6 = "";
  if ( this->m_NoiseArrivedClosed.u.m_Id != 0 )
    v6 = this->m_NoiseArrivedClosed.u.m_pAsString;
  CBaseEntity::PrecacheScriptSound(v6, 0);
  CBaseEntity::PrecacheScriptSound(pLockedSound, pContext);
  CBaseEntity::PrecacheScriptSound(pUnlockedSound, pContext);
}


// CBaseDoor::DoorTouch  (line 660, @0x00000000021d74c0, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput, Free, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator!=, operator=, ~CVariantBase
// calls: CBaseDoor::DoorActivate, CBaseDoor::ChainTouch, UTIL_IsMasterTriggered, PlayLockSounds, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseDoor::DoorTouch(CBaseDoor *const this, CBaseEntity *pOther)
{
  CEntityIdentity *m_pEntity; // rdx
  int v5; // eax
  __int16 v6; // cx
  CVariant sMaster[3]; // [rsp+0h] [rbp-30h] BYREF

  if ( this->m_ChainTarget.u.m_Id != 0 )
    CBaseDoor::ChainTouch(this, pOther);
  if ( (*(pOther->_vptr_IHandleEntity + 140))(pOther) != 0 && (this->m_spawnflags.m_Value & 0x400) != 0 )
  {
    if ( this->m_sMaster.u.m_Id != 0 )
    {
      sMaster[0].m_uint64 = this->m_sMaster.u.m_Id;
      if ( !UTIL_IsMasterTriggered(sMaster, pOther) )
        PlayLockSounds(this, &this->m_ls, 1, 0, 0);
    }
    if ( this->m_bLocked )
    {
      sMaster[0].m_flags = 0;
      sMaster[0].m_type = 0;
      sMaster[0].m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_OnLockedUse, pOther, pOther, sMaster, 0.0);
      if ( (sMaster[0].m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, sMaster[0].m_uint64);
      PlayLockSounds(this, &this->m_ls, 1, 0, 0);
    }
    else
    {
      m_pEntity = pOther->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hActivator.m_Index) = v6 | this->m_hActivator.m_Index & 0x8000;
        this->m_hActivator.m_Index = (v5 << 15) | this->m_hActivator.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hActivator.m_Index = -1;
      }
      if ( CBaseDoor::DoorActivate(this) != 0 )
      {
        this->m_pfnTouch.__pfn = 0;
        this->m_pfnTouch.__delta = 0;
      }
    }
  }
}


// CBaseDoor::CloseAreaPortalsThink  (line 705, @0x00000000021c6310, libserver.so)  // inlines: curtime
// calls: CBaseDoor::UpdateAreaPortals, CBaseEntity::ThinkSet
void __fastcall CBaseDoor::CloseAreaPortalsThink(CBaseDoor *const this)
{
  float m_flCurrentTime; // xmm0_4
  CGlobalVars *v3; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CBaseDoor::UpdateAreaPortals(this, 0);
  m_flCurrentTime = 0.0;
  v3 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v3->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, 0LL, m_flCurrentTime, 1711969460, 0);
}


// CBaseDoor::UpdateAreaPortals  (line 716, @0x00000000021c6040, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName, curtime
// calls: CBaseEntity::ThinkSet, CGameEntitySystem::FindEntityByClassname
// callers: CBaseDoor::Activate, CBaseDoor::CloseAreaPortalsThink, CBaseDoor::DoorGoUp
// strings: "func_areaportal"
void __fastcall CBaseDoor::UpdateAreaPortals(CBaseDoor *const this, bool isOpen)
{
  float m_flCurrentTime; // xmm0_4
  bool v3; // r15
  CGlobalVars *v6; // r12
  bool v7; // r13
  UtlSymLargeId_t m_Id; // r12
  CBaseEntity *v9; // r14
  CBaseEntity *EntityByClassname; // rax
  int (**vptr_IHandleEntity)(...); // rax
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  UtlSymLargeId_t v13; // [rsp-40h] [rbp-48h] BYREF

  m_flCurrentTime = 0.0;
  v3 = isOpen;
  v6 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    m_flCurrentTime = v6->m_flCurrentTime;
  }
  CBaseEntity::ThinkSet(this, 0LL, m_flCurrentTime, 1711969460, 0);
  if ( (*(this->_vptr_IHandleEntity + 216))(this) != 0 )
  {
    v7 = !isOpen;
    if ( (this->m_spawnflags.m_Value & 1) != 0 )
      v3 = v7;
  }
  m_Id = this->m_pEntity->m_name.u.m_Id;
  if ( m_Id != 0 )
  {
    v9 = 0;
    while ( 1 )
    {
      EntityByClassname = CGameEntitySystem::FindEntityByClassname(g_pGameEntitySystem, v9, "func_areaportal");
      v9 = EntityByClassname;
      if ( EntityByClassname == 0 )
        break;
      vptr_IHandleEntity = EntityByClassname->_vptr_IHandleEntity;
      v13 = m_Id;
      if ( vptr_IHandleEntity[99](v9, &v13) != 0 )
        (*(v9->_vptr_IHandleEntity + 108))(v9, this, this, v3, 0.0);
    }
  }
}


// CBaseDoor::Use  (line 747, @0x00000000021d6d80, libserver.so)  // inlines: CVariantBase, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, HasSpawnFlags, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator!=<CBaseEntity>, operator=, ~CVariantBase
// calls: CBaseDoor::DoorActivate, CEntityIOOutput::FireOutputInternal, PlayLockSounds, CBaseDoor::ChainUse, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CBaseDoor::Use(
        CBaseDoor *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        double value)
{
  CEntityIdentity *m_pEntity; // rcx
  int v9; // eax
  __int16 v10; // dx
  uint32 m_Index; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  unsigned int m_Value; // eax
  unsigned __int32 m_toggle_state; // edx
  bool v16; // zf
  CVariant v17; // [rsp+0h] [rbp-30h] BYREF

  if ( pActivator != 0 && (m_pEntity = pActivator->m_pEntity) != 0 )
  {
    v9 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v10 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v10 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hActivator.m_Index) = v10 | this->m_hActivator.m_Index & 0x8000;
    this->m_hActivator.m_Index = (v9 << 15) | this->m_hActivator.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hActivator.m_Index = -1;
  }
  if ( this->m_ChainTarget.u.m_Id != 0 )
    CBaseDoor::ChainUse(this);
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F]) != 0
    && (v13 = &v12[this->m_hActivator.m_Index & 0x1FF]) != 0
    && m_Index == v13->m_EHandle.m_Index
    && v13->m_pInstance != 0 )
  {
    v16 = (*(v13->m_pInstance->_vptr_IHandleEntity + 140))(v13->m_pInstance, value) == 0;
    m_Value = this->m_spawnflags.m_Value;
    if ( !v16 && (m_Value & 0x100) == 0 )
      goto LABEL_24;
  }
  else
  {
    m_Value = this->m_spawnflags.m_Value;
  }
  if ( (m_Value & 0x10000) != 0 )
  {
    m_toggle_state = this->m_toggle_state & 0xFFFFFFFD;
    if ( m_toggle_state == 1 )
      goto LABEL_15;
  }
  else
  {
    m_toggle_state = this->m_toggle_state;
    if ( m_toggle_state == 1 )
    {
LABEL_15:
      if ( !this->m_bLocked )
      {
LABEL_16:
        CBaseDoor::DoorActivate(this);
        return;
      }
      goto LABEL_22;
    }
  }
  if ( (m_Value & 0x20) != 0 && m_toggle_state == 0 )
  {
    if ( !this->m_bLocked )
      goto LABEL_16;
LABEL_22:
    v17.m_type = 0;
    v17.m_flags = 0;
    v17.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnLockedUse, pActivator, pCaller, &v17, 0.0);
    if ( (v17.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, v17.m_uint64);
LABEL_24:
    PlayLockSounds(this, &this->m_ls, 1, 0, 0);
  }
}


// CBaseDoor::ChainUse  (line 811, @0x00000000021c6370, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, SetChaining, operator CBaseEntity*, operator CEntityInstance*
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CBaseDoor::Use
// globals: `typeinfo for'CBaseDoor, CEntityHandle::gm_pEntityList
void __fastcall CBaseDoor::ChainUse(CBaseDoor *const this)
{
  CBaseEntity *v2; // r12
  CBaseDoor *EntityByName; // rax
  CBaseDoor *v4; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v7; // r9
  int (*v8)(...); // r8
  uint32 m_Index; // edx
  CEntityIdentity *v10; // rcx
  __int64 v11; // rdi
  CEntityIdentity *v12; // rcx
  CBaseDoor *door; // [rsp+8h] [rbp-38h]
  string_t iszName; // [rsp+10h] [rbp-30h] BYREF

  if ( !this->m_isChaining )
  {
    v2 = 0;
    while ( 1 )
    {
      iszName.u.m_Id = this->m_ChainTarget.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v2, &iszName, this, 0, 0, 0);
      v2 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( EntityByName != this )
      {
        v4 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseDoor, 0);
        if ( v4 != 0 && v4->m_toggle_state == this->m_toggle_state && v4->m_bLocked == this->m_bLocked )
        {
          vptr_IHandleEntity = v4->_vptr_IHandleEntity;
          v4->m_isChaining = 1;
          m_pInstance = 0;
          v7 = CEntityHandle::gm_pEntityList;
          v8 = vptr_IHandleEntity[108];
          m_Index = this->m_hActivator.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = this->m_hActivator.m_Index & 0x1FF;
              v7 = (8 * v11);
              v12 = &v10[v11];
              if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
                m_pInstance = v12->m_pInstance;
            }
          }
          door = v4;
          v8(v4, m_pInstance, 0, 3, v8, v7, 0.0);
          door->m_isChaining = 0;
        }
      }
    }
  }
}


// CBaseDoor::ChainTouch  (line 846, @0x00000000021c64c0, libserver.so)  // inlines: CUtlSymbolLarge, SetChaining
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CBaseDoor::DoorTouch
// globals: `typeinfo for'CBaseDoor
void __fastcall CBaseDoor::ChainTouch(CBaseDoor *const this, CBaseEntity *pOther)
{
  CBaseEntity *v4; // rbx
  CBaseDoor *EntityByName; // rax
  CBaseDoor *v6; // rax
  int (**vptr_IHandleEntity)(...); // rdx
  CBaseDoor *door; // [rsp+8h] [rbp-48h]
  string_t iszName; // [rsp+10h] [rbp-40h] BYREF

  if ( !this->m_isChaining )
  {
    v4 = 0;
    while ( 1 )
    {
      iszName.u.m_Id = this->m_ChainTarget.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v4, &iszName, 0, this, 0, 0);
      v4 = EntityByName;
      if ( EntityByName == 0 )
        break;
      if ( EntityByName != this )
      {
        v6 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseDoor, 0);
        if ( v6 != 0 && v6->m_toggle_state == this->m_toggle_state )
        {
          vptr_IHandleEntity = v6->_vptr_IHandleEntity;
          v6->m_isChaining = 1;
          door = v6;
          vptr_IHandleEntity[112](v6, pOther);
          door->m_isChaining = 0;
        }
      }
    }
  }
}


// CBaseDoor::InputClose  (line 879, @0x00000000021d5c60, libserver.so)
// calls: CBaseDoor::DoorGoDown
void __fastcall CBaseDoor::InputClose(CBaseDoor *const this, inputdata_t *const inputdata)
{
  if ( this->m_toggle_state != TOGGLE_STATE::TS_AT_BOTTOM )
    CBaseDoor::DoorGoDown(this);
}


// CBaseDoor::InputLock  (line 891, @0x00000000021bac40, libserver.so)  // inlines: Lock
void __fastcall CBaseDoor::InputLock(CBaseDoor *const this, inputdata_t *const inputdata)
{
  this->m_bLocked = 1;
}


// CBaseDoor::InputOpen  (line 900, @0x00000000021d6070, libserver.so)
// calls: PlayLockSounds, CBaseDoor::DoorGoUp
void __fastcall CBaseDoor::InputOpen(CBaseDoor *const this, inputdata_t *const inputdata)
{
  if ( (this->m_toggle_state & 0xFFFFFFFD) != 0 && !this->m_bLocked )
  {
    PlayLockSounds(this, &this->m_ls, 0, 0, 0);
    CBaseDoor::DoorGoUp(this);
  }
}


// CBaseDoor::InputToggle  (line 918, @0x00000000021d60d0, libserver.so)
// calls: CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp
void __fastcall CBaseDoor::InputToggle(CBaseDoor *const this, inputdata_t *const inputdata)
{
  TOGGLE_STATE m_toggle_state; // eax

  if ( !this->m_bLocked )
  {
    m_toggle_state = this->m_toggle_state;
    if ( m_toggle_state == TOGGLE_STATE::TS_AT_BOTTOM )
    {
      CBaseDoor::DoorGoUp(this);
    }
    else if ( m_toggle_state == TOGGLE_STATE::TS_AT_TOP )
    {
      CBaseDoor::DoorGoDown(this);
    }
  }
}


// CBaseDoor::InputUnlock  (line 938, @0x00000000021bac50, libserver.so)  // inlines: Unlock
void __fastcall CBaseDoor::InputUnlock(CBaseDoor *const this, inputdata_t *const inputdata)
{
  this->m_bLocked = 0;
}


// CBaseDoor::InputSetSpeed  (line 947, @0x00000000021bac60, libserver.so)  // inlines: Float, operator float
void __fastcall CBaseDoor::InputSetSpeed(CBaseDoor *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  this->m_flSpeed = m_float64;
}


// CBaseDoor::Lock  (line 956, @0x00000000021c65a0, libserver.so)
void __fastcall CBaseDoor::Lock(CBaseDoor *const this)
{
  this->m_bLocked = 1;
}


// CBaseDoor::Unlock  (line 970, @0x00000000021c65b0, libserver.so)
void __fastcall CBaseDoor::Unlock(CBaseDoor *const this)
{
  this->m_bLocked = 0;
}


// CBaseDoor::DoorActivate  (line 985, @0x00000000021d6110, libserver.so)  // inlines: CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: UTIL_IsMasterTriggered, PlayLockSounds, CBaseDoor::DoorGoDown, CBaseDoor::DoorGoUp
// callers: CBaseDoor::Use, CBaseDoor::DoorTouch
// globals: CEntityHandle::gm_pEntityList
int __fastcall CBaseDoor::DoorActivate(CBaseDoor *const this)
{
  CBaseEntity *m_pInstance; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  bool IsMasterTriggered; // dl
  int result; // eax
  string_t sMaster; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hActivator.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  sMaster.u.m_Id = this->m_sMaster.u.m_Id;
  IsMasterTriggered = UTIL_IsMasterTriggered(&sMaster, m_pInstance);
  result = 0;
  if ( IsMasterTriggered )
  {
    if ( (this->m_spawnflags.m_Value & 0x20) == 0 || this->m_toggle_state != TOGGLE_STATE::TS_AT_TOP )
    {
      PlayLockSounds(this, &this->m_ls, 0, 0, 0);
      if ( (this->m_toggle_state & 0xFFFFFFFD) != 0 )
      {
        CBaseDoor::DoorGoUp(this);
        return 1;
      }
      else
      {
        return 1;
      }
    }
    else
    {
      CBaseDoor::DoorGoDown(this);
      return 1;
    }
  }
  return result;
}


// CBaseDoor::DoorGoUp  (line 1014, @0x00000000021d5c80, libserver.so)  // inlines: CVariantBase, Cross, CrossProduct, DistTo, Dot, DotProduct, FastSqrt, FireOutput, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, NormalizeInPlace, StartMovingSound, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!=<CBaseEntity>, operator*, operator+=, operator-, operator->, operator=, ~CVariantBase
// calls: CBaseDoor::UpdateAreaPortals, CBaseDoor::MovingSoundThink, CBaseToggle::AngularMove, CEntityIOOutput::FireOutputInternal, CBaseToggle::LinearMove, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, CCollisionProperty::CalcNearestPoint, VectorNormalize, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseDoor::InputOpen, CBaseDoor::InputToggle, CBaseDoor::DoorActivate, CBaseDoor::Blocked
// globals: CBaseDoor::DoorHitTop(void), CEntityHandle::gm_pEntityList
void __fastcall CBaseDoor::DoorGoUp(CBaseDoor *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  float v3; // xmm1_4
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  float v7; // xmm1_4
  unsigned int v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  const Vector *AbsOrigin; // rax
  const CBaseEntity *v12; // rax
  const Vector *v13; // rax
  const CBaseEntity *v14; // rax
  const Vector *v15; // rax
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  const CBaseEntity *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm0_4
  vec_t v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm1_4
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  int v28; // xmm1_4
  const CBaseEntity *v29; // rax
  const Vector *v30; // rax
  vec_t v31; // xmm1_4
  vec_t v32; // xmm0_4
  float nearestPointDistToOrigin; // [rsp+0h] [rbp-80h]
  float nearestPointDistToOrigina; // [rsp+0h] [rbp-80h]
  float y; // [rsp+18h] [rbp-68h]
  float x; // [rsp+1Ch] [rbp-64h]
  float v37; // [rsp+1Ch] [rbp-64h]
  Vector nearestPoint; // [rsp+20h] [rbp-60h] BYREF
  Vector activatorToNearestPoint; // [rsp+30h] [rbp-50h] BYREF
  Vector activatorToOrigin; // [rsp+40h] [rbp-40h] BYREF
  CVariant vecDestAngle[3]; // [rsp+50h] [rbp-30h] BYREF

  CBaseDoor::UpdateAreaPortals(this, 1);
  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 && (this->m_toggle_state - 2) > 1 )
    CBaseDoor::MovingSoundThink(this);
  this->m_toggle_state = TOGGLE_STATE::TS_GOING_UP;
  this->m_pfnMoveDone.__pfn = CBaseDoor::DoorHitTop;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_pfnMoveDone.__delta = 0;
  if ( vptr_IHandleEntity[216](this) != 0 )
  {
    m_Index = this->m_hActivator.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hActivator.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && v6->m_pInstance != 0
      && (this->m_spawnflags.m_Value & 0x10) == 0
      && this->m_vecMoveAng.y != 0.0 )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(this);
      x = AbsOrigin->x;
      y = AbsOrigin->y;
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
      v13 = CBaseEntity::GetAbsOrigin(v12);
      CCollisionProperty::CalcNearestPoint(&this->m_Collision, v13, &nearestPoint);
      v14 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
      v15 = CBaseEntity::GetAbsOrigin(v14);
      v16 = nearestPoint.y - v15->y;
      v17 = nearestPoint.x - v15->x;
      activatorToNearestPoint.z = 0.0;
      activatorToNearestPoint.y = v16;
      activatorToNearestPoint.x = v17;
      v18 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
      v19 = CBaseEntity::GetAbsOrigin(v18);
      v20 = x - v19->x;
      v21 = y - v19->y;
      activatorToOrigin.z = 0.0;
      activatorToOrigin.x = v20;
      activatorToOrigin.y = v21;
      nearestPointDistToOrigin = fsqrt(
                                   (((v20 - activatorToNearestPoint.x) * (v20 - activatorToNearestPoint.x))
                                  + ((v21 - activatorToNearestPoint.y) * (v21 - activatorToNearestPoint.y)))
                                 + ((0.0 - activatorToNearestPoint.z) * (0.0 - activatorToNearestPoint.z)));
      VectorNormalize(&activatorToOrigin);
      VectorNormalize(&activatorToNearestPoint);
      v22 = activatorToOrigin.x;
      v23 = activatorToOrigin.y;
      v24 = activatorToNearestPoint.y;
      if ( nearestPointDistToOrigin < 5.0
        && (((activatorToOrigin.x * activatorToNearestPoint.x) + (activatorToOrigin.y * activatorToNearestPoint.y))
          + (activatorToOrigin.z * activatorToNearestPoint.z)) > 0.99000001 )
      {
        vecDestAngle[0].m_uint64 = (*(this->_vptr_IHandleEntity + 62))(this);
        *&vecDestAngle[0].m_type = v28;
        nearestPointDistToOrigina = (x - vecDestAngle[0].m_float) + x;
        v37 = (y - *(&vecDestAngle[0].m_pszString + 1)) + y;
        v29 = CEntityHandle::operator CEntityInstance *(&this->m_hActivator);
        v30 = CBaseEntity::GetAbsOrigin(v29);
        v31 = v37 - v30->y;
        v32 = nearestPointDistToOrigina - v30->x;
        activatorToOrigin.z = 0.0;
        activatorToOrigin.y = v31;
        activatorToOrigin.x = v32;
        VectorNormalize(&activatorToOrigin);
        v23 = activatorToOrigin.y;
        v24 = activatorToNearestPoint.y;
        v25 = activatorToNearestPoint.x;
        v22 = activatorToOrigin.x;
      }
      else
      {
        v25 = activatorToNearestPoint.x;
      }
      v26.m128_f32[0] = (v22 * v24) - (v25 * v23);
      v27 = _mm_cmplt_ss(0LL, v26);
      LODWORD(v7) = _mm_andnot_ps(v27, 0x3F800000u).m128_u32[0] | v27.m128_i32[0] & 0xBF800000;
    }
    else
    {
      v7 = 1.0;
    }
    *&v8 = this->m_vecAngle2.y * v7;
    v9 = this->m_vecAngle2.z * v7;
    v10 = v7 * this->m_vecAngle2.x;
    *&vecDestAngle[0].m_type = v9;
    vecDestAngle[0].m_uint64 = __PAIR64__(v8, LODWORD(v10));
    CBaseToggle::AngularMove(this, vecDestAngle, v10);
  }
  else
  {
    CBaseToggle::LinearMove(this, &this->m_vecPosition2, v3);
  }
  *&vecDestAngle[0].m_type = 0;
  vecDestAngle[0].m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnOpen, this, this, vecDestAngle, 0.0);
  if ( (vecDestAngle[0].m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, vecDestAngle[0].m_uint64);
}


// CBaseDoor::DoorHitTop  (line 1106, @0x00000000021d6990, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, HasSpawnFlags, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, entindex, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CNavDoorBlocker::UpdateNavBlocking, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetMoveDoneTime, CUtlMemory<Vector, int>::Purge, CBaseEntity::SetNextThink (16 total)
// globals: CBaseDoor::DoorTouch(CBaseEntity *), CBaseDoor::DoorGoDown(void)
void __fastcall CBaseDoor::DoorHitTop(CBaseDoor *const this)
{
  int v2; // xmm1_4
  float v3; // xmm1_4
  const char *m_pAsString; // rax
  CEntityIndex v5; // eax
  float v6; // xmm1_4
  unsigned int m_Value; // eax
  double v8; // xmm1_8
  bool v9; // zf
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v12; // [rsp+198h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v2;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v3;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v3);
    CRecipientFilter::MakeReliable(&filter);
    (*(this->_vptr_IHandleEntity + 217))(this);
    v9 = this->m_NoiseArrived.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    m_pAsString = "";
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    if ( !v9 )
      m_pAsString = this->m_NoiseArrived.u.m_pAsString;
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v5.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v5, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, 0);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x20) != 0 )
  {
    this->m_pfnTouch.__delta = 0;
    this->m_pfnTouch.__pfn = CBaseDoor::DoorTouch;
  }
  else
  {
    CBaseEntity::SetMoveDoneTime(this, this->m_flWait, v6);
    this->m_pfnMoveDone.__pfn = CBaseDoor::DoorGoDown;
    v9 = this->m_flWait == -1.0;
    this->m_pfnMoveDone.__delta = 0;
    if ( v9 )
      CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v8, 0);
    m_Value = this->m_spawnflags.m_Value;
  }
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  if ( (m_Value & 1) == 0 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnFullyOpen, this, this, &ep, 0.0);
    if ( (BYTE2(ep.m_pSoundName) & 1) == 0 )
      return;
    goto LABEL_10;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, this, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
LABEL_10:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
}


// CBaseDoor::DoorGoDown  (line 1160, @0x00000000021d5b60, libserver.so)  // inlines: CVariantBase, FireOutput, Free, StartMovingSound, ~CVariantBase
// calls: CBaseDoor::MovingSoundThink, CBaseToggle::LinearMove, CEntityIOOutput::FireOutputInternal, CBaseToggle::AngularMove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CBaseDoor::InputClose, CBaseDoor::InputToggle, CBaseDoor::DoorActivate, CBaseDoor::Blocked
// globals: CBaseDoor::DoorHitBottom(void)
void __fastcall CBaseDoor::DoorGoDown(CBaseDoor *const this)
{
  int (**vptr_IHandleEntity)(...); // rax
  float v3; // xmm1_4
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  if ( (this->m_spawnflags.m_Value & 0x1000) == 0 && (this->m_toggle_state - 2) > 1 )
    CBaseDoor::MovingSoundThink(this);
  this->m_toggle_state = TOGGLE_STATE::TS_GOING_DOWN;
  this->m_pfnMoveDone.__pfn = CBaseDoor::DoorHitBottom;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_pfnMoveDone.__delta = 0;
  if ( vptr_IHandleEntity[216](this) != 0 )
    CBaseToggle::AngularMove(this, &this->m_vecAngle1, v3);
  else
    CBaseToggle::LinearMove(this, &this->m_vecPosition1, v3);
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnClose, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CBaseDoor::DoorHitBottom  (line 1188, @0x00000000021d6fa0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CVariantBase, EmitSound_t, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, HasSpawnFlags, IndexToIdentity, IsValid, ListenForGameEvent, LookupEntity, Purge, RemoveAll, SetSoundName, SoundEventGuid_t, String, ToCStr, curtime, entindex, operator CEntityInstance*, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~CVariantBase, ~EmitSound_t
// calls: CNavDoorBlocker::UpdateNavBlocking, CEntityIOOutput::FireOutputInternal, CBaseEntity::ThinkSet, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CRecipientFilter::MakeReliable, CEntityInstance::GetEntityIndex, CBaseEntity::EmitSound, CRecipientFilter::~CRecipientFilter, CUtlMemory<Vector, int>::Purge, __stack_chk_fail (15 total)
// strings: "round_start_post_nav"
// globals: CBaseDoor::DoorTouch(CBaseEntity *), CEntityHandle::gm_pEntityList, CBaseDoor::CloseAreaPortalsThink(void)
void __fastcall CBaseDoor::DoorHitBottom(CBaseDoor *const this)
{
  unsigned int m_Value; // eax
  bool v3; // zf
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rsi
  CConcreteEntityList *v6; // rdi
  unsigned int v7; // edx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CGlobalVars *v10; // r12
  float v11; // xmm0_4
  void (__fastcall *m_pfnWarningFunc)(__int64); // rax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int v15; // xmm1_4
  float v16; // xmm1_4
  const char *m_pAsString; // rax
  CEntityIndex v18; // eax
  EmitSound_t ep; // [rsp+0h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+60h] [rbp-160h] BYREF
  unsigned __int64 v21; // [rsp+198h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  CNavDoorBlocker::UpdateNavBlocking(&this->m_NavBlocker, 0);
  this->m_bRegisteredForEvents = 1;
  (*(gameeventmanager->_vptr_IBaseInterface + 4))(
    gameeventmanager,
    &this->CGameEventListener,
    "round_start_post_nav",
    1);
  m_Value = this->m_spawnflags.m_Value;
  if ( (m_Value & 0x1000) == 0 )
  {
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    LODWORD(ep.m_pSoundName) = v15;
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::AddRecipientsByPAS(&filter, &ep);
    filter._vptr_IRecipientFilter = &off_3FECD70;
    *&ep.m_nChannel = (*(this->_vptr_IHandleEntity + 186))(this);
    *&ep.m_pSoundName = v16;
    CPASAttenuationFilter::Filter(&filter, &ep, 0.80000001, v16);
    CRecipientFilter::MakeReliable(&filter);
    (*(this->_vptr_IHandleEntity + 217))(this);
    v3 = this->m_NoiseArrivedClosed.u.m_Id == 0;
    ep.m_flVolume = 1.0;
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    if ( v3 )
    {
      m_pAsString = "";
      if ( this->m_NoiseArrived.u.m_Id != 0 )
        m_pAsString = this->m_NoiseArrived.u.m_pAsString;
    }
    else
    {
      m_pAsString = this->m_NoiseArrivedClosed.u.m_pAsString;
    }
    ep.m_pSoundName = m_pAsString;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NORM;
    v18.m_Data = CEntityInstance::GetEntityIndex(this).m_Data;
    CBaseEntity::EmitSound(&filter, v18, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filter._vptr_IRecipientFilter = &off_3FCB190;
    CRecipientFilter::~CRecipientFilter(&filter);
    m_Value = this->m_spawnflags.m_Value;
  }
  v3 = (m_Value & 1) == 0;
  m_Index = this->m_hActivator.m_Index;
  m_pInstance = 0;
  this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  v6 = CEntityHandle::gm_pEntityList;
  this->m_pfnTouch.__pfn = CBaseDoor::DoorTouch;
  this->m_pfnTouch.__delta = 0;
  v7 = m_Index + 2;
  if ( !v3 )
  {
    if ( v7 > 1 )
    {
      v13 = v6->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_hActivator.m_Index & 0x1FF];
        if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
    }
    LODWORD(ep.m_pSoundName) = 0;
    *&ep.m_nChannel = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnFullyOpen, m_pInstance, this, &ep, 0.0);
    if ( (BYTE2(ep.m_pSoundName) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
LABEL_9:
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
      goto LABEL_10;
LABEL_17:
    v11 = 0.5;
    goto LABEL_12;
  }
  if ( v7 > 1 )
  {
    v8 = v6->m_pIdentityChunks[(LOWORD(this->m_hActivator.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hActivator.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  LODWORD(ep.m_pSoundName) = 0;
  *&ep.m_nChannel = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnFullyClosed, m_pInstance, this, &ep, 0.0);
  if ( (BYTE2(ep.m_pSoundName) & 1) == 0 )
    goto LABEL_9;
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ep.m_nChannel);
  v10 = gpGlobals;
  if ( gpGlobals == 0 )
    goto LABEL_17;
LABEL_10:
  if ( !v10->m_bEnableAssertions && !v10->m_bInSimulation )
  {
    m_pfnWarningFunc = v10->m_pfnWarningFunc;
    if ( m_pfnWarningFunc != 0 )
      m_pfnWarningFunc(1);
  }
  v11 = v10->m_flCurrentTime + 0.5;
LABEL_12:
  CBaseEntity::ThinkSet(this, CBaseDoor::CloseAreaPortalsThink, v11, 1711969460, 0);
}


// CBaseDoor::GetDoorMovementGroup  (line 1243, @0x00000000021bbea0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CBaseDoor::Activate, CBaseDoor::GetDoorMovementGroup, CBaseDoor::Blocked
// globals: `typeinfo for'CBaseDoor
int __fastcall CBaseDoor::GetDoorMovementGroup(CBaseDoor *const this, CBaseDoor **pDoorList, int listMax)
{
  CBaseEntity *v4; // r14
  int v5; // ebx
  CBaseDoor *EntityByName; // rax
  CBaseDoor *v7; // rax
  __int64 v8; // rdx
  string_t iszName; // [rsp+20h] [rbp-40h] BYREF

  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    do
    {
      iszName.u.m_Id = this->m_pEntity->m_name.u.m_Id;
      EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, v4, &iszName, this, 0, 0, 0);
      v4 = EntityByName;
    }
    while ( EntityByName == this );
    if ( EntityByName == 0 )
      break;
    v7 = __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CBaseDoor, 0);
    if ( v7 != 0 && v5 < listMax )
    {
      v8 = v5++;
      pDoorList[v8] = v7;
    }
  }
  return v5;
}


// CBaseDoor::GetDoorMovementGroup  (line 1243, @0x00000000021c65c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CBaseDoor::GetDoorMovementGroup
int __fastcall CBaseDoor::GetDoorMovementGroup(CBaseDoor *const this, CBaseDoor **pDoorList, int listMax)
{
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    return CBaseDoor::GetDoorMovementGroup(this, pDoorList, listMax);
  else
    return 0;
}


// CBaseDoor::StartBlocked  (line 1279, @0x00000000021d6580, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseDoor::StartBlocked(CBaseDoor *const this, CBaseEntity *pOther)
{
  bool v2; // zf
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  v2 = this->m_toggle_state == TOGGLE_STATE::TS_GOING_DOWN;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( !v2 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnBlockedOpening, pOther, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_6:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnBlockedClosing, pOther, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_6;
}


// CBaseDoor::Blocked  (line 1299, @0x00000000021d6210, libserver.so)  // inlines: CUtlSymbolLarge, GetAbsVelocity, GetDoorMovementGroup, GetEntityName, operator==
// calls: CBaseDoor::DoorGoDown, CBaseDoor::GetDoorMovementGroup, CBaseEntity::CalcAbsoluteVelocity, CBaseEntity::GetLocalOrigin, CBaseEntity::SetLocalOrigin, CBaseEntity::SetAbsVelocity, CBaseDoor::DoorGoUp, CTakeDamageInfo::CTakeDamageInfo, CBaseEntity::TakeDamage, CTakeDamageInfo::~CTakeDamageInfo, CBaseEntity::GetLocalAngles, CBaseEntity::SetLocalAngles (16 total)
void __fastcall CBaseDoor::Blocked(CBaseDoor *const this, CBaseEntity *pOther)
{
  float m_flBlockDamage; // xmm0_4
  CBaseDoor **v5; // r12
  int DoorMovementGroup; // eax
  CBaseDoor **v7; // r14
  CBaseDoor *v8; // rbx
  const Vector *LocalOrigin; // rax
  const QAngle *LocalAngles; // rax
  CBaseDoor *v11; // [rsp-8h] [rbp-228h] BYREF

  m_flBlockDamage = this->m_flBlockDamage;
  if ( m_flBlockDamage != 0.0 )
  {
    if ( (this->m_bForceClosed || this->m_flWait < 0.0) && pOther->m_MoveType.m_Value == MoveType_t::MOVETYPE_VPHYSICS )
    {
      if ( CBaseEntity::GetDamageOptions(pOther) == DamageOptions_t::DAMAGE_NO
        || CBaseEntity::GetDamageOptions(pOther) == DamageOptions_t::DAMAGE_EVENTS_ONLY )
      {
        EntityPhysics_CreateSolver(this, pOther, 1, 4.0);
        goto LABEL_2;
      }
      m_flBlockDamage = this->m_flBlockDamage;
    }
    CTakeDamageInfo::CTakeDamageInfo(&v11, this, this, m_flBlockDamage, 1, 0);
    CBaseEntity::TakeDamage(pOther, &v11);
    CTakeDamageInfo::~CTakeDamageInfo(&v11);
  }
LABEL_2:
  if ( this->m_bForceClosed )
    return;
  if ( this->m_flWait >= 0.0 )
  {
    if ( this->m_toggle_state == TOGGLE_STATE::TS_GOING_DOWN )
    {
      CBaseDoor::DoorGoUp(this);
      if ( this->m_pEntity->m_name.u.m_Id == 0 )
        return;
      goto LABEL_7;
    }
    CBaseDoor::DoorGoDown(this);
  }
  if ( this->m_pEntity->m_name.u.m_Id == 0 )
    return;
LABEL_7:
  v5 = &v11;
  DoorMovementGroup = CBaseDoor::GetDoorMovementGroup(this, &v11, 64);
  if ( DoorMovementGroup > 0 )
  {
    v7 = &v11 + (DoorMovementGroup - 1) + 1;
    while ( 1 )
    {
      v8 = *v5;
      if ( (*v5)->m_flWait < 0.0 )
        goto LABEL_10;
      if ( this->m_bDoorGroup
        && this->m_vecMoveDir.x == v8->m_vecMoveDir.x
        && this->m_vecMoveDir.y == v8->m_vecMoveDir.y
        && this->m_vecMoveDir.z == v8->m_vecMoveDir.z )
      {
        if ( (this->m_iEFlags & 0x1000) != 0 )
          CBaseEntity::CalcAbsoluteVelocity(this);
        if ( (v8->m_iEFlags & 0x1000) != 0 )
          CBaseEntity::CalcAbsoluteVelocity(v8);
        if ( this->m_vecAbsVelocity.m_Value.x == v8->m_vecAbsVelocity.m_Value.x
          && this->m_vecAbsVelocity.m_Value.y == v8->m_vecAbsVelocity.m_Value.y
          && this->m_vecAbsVelocity.m_Value.z == v8->m_vecAbsVelocity.m_Value.z
          && this->m_vecAngVelocity.x == v8->m_vecAngVelocity.x
          && this->m_vecAngVelocity.y == v8->m_vecAngVelocity.y
          && this->m_vecAngVelocity.z == v8->m_vecAngVelocity.z )
        {
          v8->m_nSimulationTick = this->m_nSimulationTick;
          if ( (*(v8->_vptr_IHandleEntity + 216))(v8) != 0 )
          {
            LocalAngles = CBaseEntity::GetLocalAngles(this);
            CBaseEntity::SetLocalAngles(v8, LocalAngles);
            CBaseEntity::SetLocalAngularVelocity(v8, &vec3_angle);
          }
          else
          {
            LocalOrigin = CBaseEntity::GetLocalOrigin(this);
            CBaseEntity::SetLocalOrigin(v8, LocalOrigin);
            CBaseEntity::SetAbsVelocity(v8, &vec3_origin);
          }
        }
      }
      if ( v8->m_toggle_state == TOGGLE_STATE::TS_GOING_DOWN )
      {
        CBaseDoor::DoorGoUp(v8);
        if ( ++v5 == v7 )
          return;
      }
      else
      {
        CBaseDoor::DoorGoDown(v8);
LABEL_10:
        if ( ++v5 == v7 )
          return;
      }
    }
  }
}


// CBaseDoor::EndBlocked  (line 1381, @0x00000000021d6660, libserver.so)  // inlines: CVariantBase, FireOutput, Free, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
void __fastcall CBaseDoor::EndBlocked(CBaseDoor *const this)
{
  bool v1; // zf
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  v1 = this->m_toggle_state == TOGGLE_STATE::TS_GOING_DOWN;
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  if ( !v1 )
  {
    CEntityIOOutput::FireOutputInternal(&this->m_OnUnblockedOpening, this, this, &value, 0.0);
    if ( (value.m_flags & 1) == 0 )
      return;
LABEL_6:
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    return;
  }
  CEntityIOOutput::FireOutputInternal(&this->m_OnUnblockedClosing, this, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    goto LABEL_6;
}


// CRotDoor::~CRotDoor  (line 1432, @0x00000000021e2540, libserver.so)
// calls: CBaseDoor::~CBaseDoor
void __fastcall CRotDoor::~CRotDoor(CRotDoor *const this)
{
  this->_vptr_IHandleEntity = &off_4016B10;
  this->_vptr_IGameEventListener2 = off_40171F0;
  CBaseDoor::~CBaseDoor(this);
}


// CRotDoor::~CRotDoor  (line 1432, @0x00000000021e2580, libserver.so)  // inlines: ~CRotDoor
// calls: CBaseDoor::~CBaseDoor, CBaseEntity::operator delete
void __fastcall CRotDoor::~CRotDoor(CRotDoor *const this)
{
  this->_vptr_IHandleEntity = &off_4016B10;
  this->_vptr_IGameEventListener2 = off_40171F0;
  CBaseDoor::~CBaseDoor(this);
  CBaseEntity::operator delete(this);
}


// CRotDoor::GetEntityClass  (line 1434, @0x00000000021de3b0, libserver.so)
CEntityClass *__cdecl CRotDoor::GetEntityClass()
{
  return g_pEntityCRotDoorClass;
}


// CRotDoor::Schema_DynamicBinding  (line 1434, @0x00000000021de3c0, libserver.so)
// globals: CRotDoor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRotDoor::Schema_DynamicBinding(const CRotDoor *const this)
{
  return CRotDoor::s_pSchemaBinding;
}


// CRotDoor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1434, @0x00000000021de3d0, libserver.so)
// globals: CRotDoor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRotDoor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRotDoor::CEntityInstanceEntityClass *const this)
{
  return CRotDoor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRotDoor::CEntityInstanceEntityClass::DestructInstance  (line 1434, @0x00000000021de3e0, libserver.so)  // inlines: Destruct<CRotDoor>
void __fastcall CRotDoor::CEntityInstanceEntityClass::DestructInstance(
        CRotDoor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRotDoor::CEntityInstanceEntityClass::FreeInstance  (line 1434, @0x00000000021de400, libserver.so)
void __fastcall CRotDoor::CEntityInstanceEntityClass::FreeInstance(
        CRotDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRotDoor::CEntityInstanceEntityClass::CanAllocate  (line 1434, @0x00000000021de420, libserver.so)
bool __fastcall CRotDoor::CEntityInstanceEntityClass::CanAllocate(
        const CRotDoor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRotDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1434, @0x00000000021de430, libserver.so)
// globals: CRotDoor::s_pSchemaBinding
const ISchemaBinding *__fastcall CRotDoor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRotDoor::CEntityInstanceEntityClass *const this)
{
  return CRotDoor::s_pSchemaBinding;
}


// CRotDoor::CEntityInstanceEntityClass::AllocateInstance  (line 1434, @0x00000000021e0400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRotDoor::CEntityInstanceEntityClass::AllocateInstance(
        CRotDoor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1704);
  memset(v1, 0, 0x6A8u);
  return v1;
}


// CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1434, @0x00000000021e2a70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1434, @0x00000000021e2a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRotDoor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRotDoor::CEntityInstanceEntityClass::ConstructInstance  (line 1434, @0x00000000021e6a40, libserver.so)  // inlines: CRotDoor, Construct<CRotDoor>
// calls: CBaseDoor::CBaseDoor
CEntityInstance *__fastcall CRotDoor::CEntityInstanceEntityClass::ConstructInstance(
        CRotDoor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseDoor::CBaseDoor(p);
    *p = &off_4016B10;
    *(p + 160) = off_40171F0;
  }
  return p;
}


// CRotDoor::GetEntityClassInternal  (line 1434, @0x00000000021e6a80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CBaseDoor::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "func_door_rotating", "CRotDoor"
// globals: `guard variable for'CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass, CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass, __dso_handle, CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo, CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo
CEntityClass *__cdecl CRotDoor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass);
    CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass._vptr_CEntityClass = off_4016A90;
    __cxa_guard_release(&`guard variable for'CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass);
    __cxa_atexit(
      CRotDoor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass,
      &_dso_handle);
  }
  if ( g_pEntityCRotDoorClass != 0 )
    return &CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass;
  if ( `guard variable for'CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo) != 0 )
  {
    EntityClassInfo = CBaseDoor::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo,
      "CRotDoor",
      "func_door_rotating",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo);
  }
  CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass.m_pClassInfo = &CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo;
  CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass.m_pBaseClassInfo = CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo.m_pBaseClassInfo;
  g_pEntityCRotDoorClass = &CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass;
  CRotDoor::GetEntityClassInfo(void)::g_EntityCRotDoorClassInfo.m_pClass = &CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass;
  CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCRotDoorClass->m_pComponentOverrides = 0;
  return &CRotDoor::GetEntityClassInternal(void)::g_EntityCRotDoorClass;
}


// CRotDoor::IsRotatingDoor  (line 1441, @0x00000000021de440, libserver.so)
bool __fastcall CRotDoor::IsRotatingDoor(const CRotDoor *const this)
{
  return 1;
}


// CRotDoor::GetDataDescMap  (line 1448, @0x00000000021baca0, libserver.so)
// globals: CRotDoor::m_DataMap
datamap_t *__fastcall CRotDoor::GetDataDescMap(CRotDoor *const this)
{
  return &CRotDoor::m_DataMap;
}


// CRotDoor::AddDatadescMetadataKeys  (line 1448, @0x00000000021c65e0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRotDoor::GetEntityClass(void)
void __fastcall CRotDoor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRotDoor::GetEntityClass);
}


// CRotDoor::GetBaseMap  (line 1448, @0x00000000021c6600, libserver.so)
// globals: CBaseDoor::m_DataMap
datamap_t *__cdecl CRotDoor::GetBaseMap()
{
  return &CBaseDoor::m_DataMap;
}


// DataMapInit<CRotDoor>  (line 1448, @0x00000000021c6610, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_03.cpp
// strings: "CRotDoor"
// globals: `guard variable for'DataMapInit<CRotDoor>(CRotDoor *)::nameHolder, CBaseDoor::m_DataMap, CRotDoor::GetEntityClass(void), CRotDoor::m_DataMap, DataMapInit<CRotDoor>(CRotDoor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRotDoor>(CRotDoor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRotDoor>(CRotDoor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRotDoor>(CRotDoor *)::nameHolder) != 0 )
  {
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_pszBase = "CRotDoor";
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRotDoor>(CRotDoor *)::nameHolder.m_nLenBase = 8;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRotDoor>(CRotDoor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRotDoor>(CRotDoor *)::nameHolder,
      &_dso_handle);
  }
  CRotDoor::m_DataMap.dataNumFields = 1;
  CRotDoor::m_DataMap.baseMap = &CBaseDoor::m_DataMap;
  CRotDoor::m_DataMap.dataDesc = &DataMapInit<CRotDoor>(CRotDoor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRotDoor::m_DataMap, CRotDoor::GetEntityClass);
  return &CRotDoor::m_DataMap;
}


// CRotDoor::Spawn  (line 1454, @0x00000000021bde00, libserver.so)  // inlines: SetSolid, operator*, operator+, operator-, operator=
// calls: CBaseDoor::Spawn, CBaseToggle::AxisDir, CBaseEntity::GetLocalAngles
void __fastcall CRotDoor::Spawn(CRotDoor *const this, const CEntityKeyValues *pKeyValues)
{
  float z; // xmm1_4
  float x; // xmm3_4
  QAngle *LocalAngles; // rax
  float v6; // xmm2_4
  float y; // xmm1_4
  float m_flMoveDistance; // xmm0_4
  const QAngle *v9; // rax
  bool v10; // zf
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  vec_t v14; // xmm3_4
  int (**vptr_IHandleEntity)(...); // rax
  vec_t v16; // xmm3_4
  float v17; // xmm2_4
  vec_t v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // [rsp+4h] [rbp-1Ch]
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+Ch] [rbp-14h]

  CBaseDoor::Spawn(this, pKeyValues);
  CBaseToggle::AxisDir(this);
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    z = this->m_vecMoveAng.z;
    x = this->m_vecMoveAng.x;
    this->m_vecMoveAng.y = -this->m_vecMoveAng.y;
    this->m_vecMoveAng.z = -z;
    this->m_vecMoveAng.x = -x;
  }
  LocalAngles = CBaseEntity::GetLocalAngles(this);
  v6 = this->m_vecMoveAng.x;
  y = this->m_vecMoveAng.y;
  this->m_vecAngle1 = *LocalAngles;
  m_flMoveDistance = this->m_flMoveDistance;
  v21 = v6 * m_flMoveDistance;
  v22 = y * m_flMoveDistance;
  v23 = m_flMoveDistance * this->m_vecMoveAng.z;
  v9 = CBaseEntity::GetLocalAngles(this);
  v10 = (this->m_spawnflags.m_Value & 1) == 0;
  v11 = v21 + v9->x;
  v12 = v22 + v9->y;
  v13 = v23 + v9->z;
  this->m_vecAngle2.x = v11;
  this->m_vecAngle2.y = v12;
  this->m_vecAngle2.z = v13;
  if ( v10 )
  {
    if ( this->m_eSpawnPosition == FuncDoorSpawnPos_t::FUNC_DOOR_SPAWN_OPEN )
    {
      (*(this->_vptr_IHandleEntity + 128))(this, 0, &this->m_vecAngle2, 0);
      this->m_toggle_state = TOGGLE_STATE::TS_AT_TOP;
    }
    else
    {
      this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
    }
  }
  else
  {
    v14 = this->m_vecAngle1.x;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    this->m_vecAngle1.x = v11;
    this->m_vecAngle2.x = v14;
    v16 = this->m_vecAngle1.y;
    v17 = this->m_vecMoveAng.y;
    this->m_vecAngle1.y = v12;
    this->m_vecAngle2.y = v16;
    v18 = this->m_vecAngle1.z;
    v19 = this->m_vecMoveAng.z;
    this->m_vecAngle1.z = v13;
    this->m_vecAngle2.z = v18;
    v20 = this->m_vecMoveAng.x;
    this->m_vecMoveAng.y = -v17;
    this->m_vecMoveAng.z = -v19;
    this->m_vecMoveAng.x = -v20;
    vptr_IHandleEntity[128](this, 0, &this->m_vecAngle1, 0);
    this->m_toggle_state = TOGGLE_STATE::TS_AT_BOTTOM;
  }
  if ( this->m_bSolidBsp )
    (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 1);
}


// CRotDoor::CreateVPhysics  (line 1511, @0x00000000021bb3c0, libserver.so)  // inlines: GetCollisionGroup, GetCollisionGroup_Inline
// calls: CCollisionProperty::SetupPhysicsFromUnscaledModel
bool __fastcall CRotDoor::CreateVPhysics(CRotDoor *const this)
{
  CCollisionProperty *m_pCollision; // rax
  int m_Value; // edx

  m_pCollision = this->m_pCollision;
  if ( m_pCollision != 0 )
    m_Value = m_pCollision->m_CollisionGroup.m_Value;
  else
    m_Value = 4;
  CCollisionProperty::SetupPhysicsFromUnscaledModel(
    &this->m_Collision,
    VPhysicsMotionType_t::VPHYSICS_MOTION_TYPE_KEYFRAMED,
    m_Value,
    0);
  return 1;
}


// CRotDoor::SetToggleState  (line 1520, @0x00000000021bb650, libserver.so)
// calls: CBaseEntity::SetLocalAngles
void __fastcall CRotDoor::SetToggleState(CRotDoor *const this, int state)
{
  if ( state != 0 )
    CBaseEntity::SetLocalAngles(this, &this->m_vecAngle1);
  else
    CBaseEntity::SetLocalAngles(this, &this->m_vecAngle2);
}


