// Reconstructed from DWARF by pahole; not original source.

// src/game/server/sprite_perfmonitor.cpp:18
class CParticlePerformanceMonitor : public CPointEntity {
	class NetworkVar_m_bDisplayPerf {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bMeasurePerf {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	typedef CPointEntity BaseClass;
	typedef CParticlePerformanceMonitor ThisClass;

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
	CParticlePerformanceMonitor(CParticlePerformanceMonitor &);
	CParticlePerformanceMonitor(CParticlePerformanceMonitor &);
	CParticlePerformanceMonitor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual int UpdateTransmitState();
	void InputTurnOnDisplay(inputdata_t &);
	void InputTurnOffDisplay(inputdata_t &);
	void InputStartMeasuring(inputdata_t &);
	void InputStopMeasuring(inputdata_t &);
	virtual ~CParticlePerformanceMonitor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[64] UpdateTransmitState
	// sizeof = 784
};

// src/game/server/sprite_perfmonitor.cpp:50
class C_CParticlePerformanceMonitor_MapInstall {
	C_CParticlePerformanceMonitor_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CParticlePerformanceMonitor::~CParticlePerformanceMonitor  (line 18, @0x00000000023e8e90, libserver.so)  // inlines: ~CPointEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CParticlePerformanceMonitor::~CParticlePerformanceMonitor(CParticlePerformanceMonitor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
}


// CParticlePerformanceMonitor::~CParticlePerformanceMonitor  (line 18, @0x00000000023e8eb0, libserver.so)  // inlines: ~CParticlePerformanceMonitor, ~CPointEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CParticlePerformanceMonitor::~CParticlePerformanceMonitor(CParticlePerformanceMonitor *const this)
{
  this->_vptr_IHandleEntity = &off_3FB6510;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CParticlePerformanceMonitor::GetEntityClass  (line 20, @0x00000000023e5420, libserver.so)
CEntityClass *__cdecl CParticlePerformanceMonitor::GetEntityClass()
{
  return g_pEntityCParticlePerformanceMonitorClass;
}


// CParticlePerformanceMonitor::Schema_DynamicBinding  (line 20, @0x00000000023e5430, libserver.so)
// globals: CParticlePerformanceMonitor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CParticlePerformanceMonitor::Schema_DynamicBinding(
        const CParticlePerformanceMonitor *const this)
{
  return CParticlePerformanceMonitor::s_pSchemaBinding;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 20, @0x00000000023e5440, libserver.so)
// globals: CParticlePerformanceMonitor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  return CParticlePerformanceMonitor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::DestructInstance  (line 20, @0x00000000023e5450, libserver.so)  // inlines: Destruct<CParticlePerformanceMonitor>
void __fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::DestructInstance(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::FreeInstance  (line 20, @0x00000000023e5470, libserver.so)
void __fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::FreeInstance(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::CanAllocate  (line 20, @0x00000000023e5490, libserver.so)
bool __fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::CanAllocate(
        const CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 20, @0x00000000023e54a0, libserver.so)
// globals: CParticlePerformanceMonitor::s_pSchemaBinding
const ISchemaBinding *__fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  return CParticlePerformanceMonitor::s_pSchemaBinding;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::AllocateInstance  (line 20, @0x00000000023e7e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::AllocateInstance(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 784);
  memset(v1, 0, 0x310u);
  return v1;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::ConstructInstance  (line 20, @0x00000000023e8ad0, libserver.so)  // inlines: CNetworkVarBase, CParticlePerformanceMonitor, CPointEntity, Construct<CParticlePerformanceMonitor>, EnsureValidValue<bool>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::ConstructInstance(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 776) = 0;
    *p = &off_40B2470;
    *(p + 777) = 0;
  }
  return p;
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023e9d90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 20, @0x00000000023e9db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CParticlePerformanceMonitor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CParticlePerformanceMonitor::GetEntityClassInternal  (line 20, @0x00000000023ee640, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "env_particle_performance_monitor", "CParticlePerformanceMonitor"
// globals: `guard variable for'CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass, CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass, __dso_handle, CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo, CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo
CEntityClass *__cdecl CParticlePerformanceMonitor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass);
    CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass._vptr_CEntityClass = off_40B23F0;
    __cxa_guard_release(&`guard variable for'CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass);
    __cxa_atexit(
      CParticlePerformanceMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass,
      &_dso_handle);
  }
  if ( g_pEntityCParticlePerformanceMonitorClass != 0 )
    return &CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass;
  if ( `guard variable for'CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo) != 0 )
  {
    EntityClassInfo = CPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo,
      "CParticlePerformanceMonitor",
      "env_particle_performance_monitor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo);
  }
  CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass.m_pClassInfo = &CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo;
  CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass.m_pBaseClassInfo = CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo.m_pBaseClassInfo;
  g_pEntityCParticlePerformanceMonitorClass = &CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass;
  CParticlePerformanceMonitor::GetEntityClassInfo(void)::g_EntityCParticlePerformanceMonitorClassInfo.m_pClass = &CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass;
  CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCParticlePerformanceMonitorClass->m_pComponentOverrides = 0;
  return &CParticlePerformanceMonitor::GetEntityClassInternal(void)::g_EntityCParticlePerformanceMonitorClass;
}


// CParticlePerformanceMonitor::GetDataDescMap  (line 39, @0x00000000023bae20, libserver.so)
// globals: CParticlePerformanceMonitor::m_DataMap
datamap_t *__fastcall CParticlePerformanceMonitor::GetDataDescMap(CParticlePerformanceMonitor *const this)
{
  return &CParticlePerformanceMonitor::m_DataMap;
}


// CParticlePerformanceMonitor::AddDatadescMetadataKeys  (line 39, @0x00000000023c4160, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CParticlePerformanceMonitor::GetEntityClass(void)
void __fastcall CParticlePerformanceMonitor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CParticlePerformanceMonitor::GetEntityClass);
}


// CParticlePerformanceMonitor::GetBaseMap  (line 39, @0x00000000023c4180, libserver.so)
datamap_t *__cdecl CParticlePerformanceMonitor::GetBaseMap()
{
  return &CPointEntity::m_DataMap;
}


// DataMapInit<CParticlePerformanceMonitor>  (line 39, @0x00000000023c4190, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_12.cpp
// strings: "CParticlePerformanceMonitor"
// globals: `guard variable for'DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder, CParticlePerformanceMonitor::GetEntityClass(void), CParticlePerformanceMonitor::m_DataMap, DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder) != 0 )
  {
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_pszBase = "CParticlePerformanceMonitor";
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder.m_nLenBase = 27;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::nameHolder,
      &_dso_handle);
  }
  CParticlePerformanceMonitor::m_DataMap.dataNumFields = 6;
  CParticlePerformanceMonitor::m_DataMap.baseMap = &CPointEntity::m_DataMap;
  CParticlePerformanceMonitor::m_DataMap.dataDesc = &DataMapInit<CParticlePerformanceMonitor>(CParticlePerformanceMonitor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CParticlePerformanceMonitor::m_DataMap, CParticlePerformanceMonitor::GetEntityClass);
  return &CParticlePerformanceMonitor::m_DataMap;
}


// CParticlePerformanceMonitor::YouForgotToImplementOrDeclareServerClass  (line 50, @0x00000000023bae30, libserver.so)
int __fastcall CParticlePerformanceMonitor::YouForgotToImplementOrDeclareServerClass(
        CParticlePerformanceMonitor *const this)
{
  return 0;
}


// CParticlePerformanceMonitor::GetServerClass  (line 50, @0x00000000023c2e80, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CParticlePerformanceMonitor::GetServerClass(CParticlePerformanceMonitor *const this)
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


// CParticlePerformanceMonitor::Spawn  (line 56, @0x00000000023bf4b0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
// calls: CPointEntity::Spawn, CBaseEntity::SetMoveType
void __fastcall CParticlePerformanceMonitor::Spawn(
        CParticlePerformanceMonitor *const this,
        const CEntityKeyValues *pKeyValues)
{
  CPointEntity::Spawn(this, pKeyValues);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  if ( this->m_bDisplayPerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDisplayPerf.m_Value = 0;
  }
  if ( this->m_bMeasurePerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 777, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMeasurePerf.m_Value = 0;
  }
}


// CParticlePerformanceMonitor::UpdateTransmitState  (line 68, @0x00000000023bb700, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CParticlePerformanceMonitor::UpdateTransmitState(CParticlePerformanceMonitor *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CParticlePerformanceMonitor::InputTurnOnDisplay  (line 73, @0x00000000023bf820, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CParticlePerformanceMonitor::InputTurnOnDisplay(
        CParticlePerformanceMonitor *const this,
        inputdata_t *const inputdata)
{
  if ( !this->m_bDisplayPerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDisplayPerf.m_Value = 1;
  }
}


// CParticlePerformanceMonitor::InputTurnOffDisplay  (line 78, @0x00000000023bf8e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CParticlePerformanceMonitor::InputTurnOffDisplay(
        CParticlePerformanceMonitor *const this,
        inputdata_t *const inputdata)
{
  if ( this->m_bDisplayPerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bDisplayPerf.m_Value = 0;
  }
}


// CParticlePerformanceMonitor::InputStartMeasuring  (line 83, @0x00000000023bf7a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CParticlePerformanceMonitor::InputStartMeasuring(
        CParticlePerformanceMonitor *const this,
        inputdata_t *const inputdata)
{
  if ( !this->m_bMeasurePerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 777, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMeasurePerf.m_Value = 1;
  }
}


// CParticlePerformanceMonitor::InputStopMeasuring  (line 88, @0x00000000023bf8a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CParticlePerformanceMonitor::InputStopMeasuring(
        CParticlePerformanceMonitor *const this,
        inputdata_t *const inputdata)
{
  if ( this->m_bMeasurePerf.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 777, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bMeasurePerf.m_Value = 0;
  }
}


