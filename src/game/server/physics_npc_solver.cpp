// Reconstructed from DWARF by pahole; not original source.

// src/game/server/physics_npc_solver.cpp:369
class CPhysicsEntitySolver : public CLogicalEntity {
public:

private:

	static datamap_t m_DataMap;

	EHANDLE m_hMovingEntity;  // +0x308
	EHANDLE m_hPhysicsBlocker;  // +0x30c
	float m_separationDuration;  // +0x310
	float m_cancelTime;  // +0x314
	int m_savedCollisionGroup;  // +0x318
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
	CPhysicsEntitySolver(CPhysicsEntitySolver &);
	CPhysicsEntitySolver(CPhysicsEntitySolver &);
	CPhysicsEntitySolver();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void Init(CBaseEntity *, CBaseEntity *, float);
	CPhysicsEntitySolver * Create(CBaseEntity *, CBaseEntity *, float);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	virtual void Think();
	void ResetCancelTime();
	void BecomePenetrationSolver();
	virtual ~CPhysicsEntitySolver();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[117] Think
	// sizeof = 800
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPhysicsEntitySolver::~CPhysicsEntitySolver  (line 369, @0x0000000002306e80, libserver.so)  // inlines: ~CLogicalEntity, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity
void __fastcall CPhysicsEntitySolver::~CPhysicsEntitySolver(CPhysicsEntitySolver *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
}


// CPhysicsEntitySolver::~CPhysicsEntitySolver  (line 369, @0x0000000002306ea0, libserver.so)  // inlines: ~CLogicalEntity, ~CPhysicsEntitySolver, ~CServerOnlyEntity
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CPhysicsEntitySolver::~CPhysicsEntitySolver(CPhysicsEntitySolver *const this)
{
  this->_vptr_IHandleEntity = &off_4005410;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CPhysicsEntitySolver::GetEntityClass  (line 371, @0x0000000002303fd0, libserver.so)
CEntityClass *__cdecl CPhysicsEntitySolver::GetEntityClass()
{
  return g_pEntityCPhysicsEntitySolverClass;
}


// CPhysicsEntitySolver::Schema_DynamicBinding  (line 371, @0x0000000002303fe0, libserver.so)
// globals: CPhysicsEntitySolver::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsEntitySolver::Schema_DynamicBinding(
        const CPhysicsEntitySolver *const this)
{
  return CPhysicsEntitySolver::s_pSchemaBinding;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 371, @0x0000000002303ff0, libserver.so)
// globals: CPhysicsEntitySolver::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  return CPhysicsEntitySolver::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::DestructInstance  (line 371, @0x0000000002304000, libserver.so)  // inlines: Destruct<CPhysicsEntitySolver>
void __fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::DestructInstance(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::FreeInstance  (line 371, @0x0000000002304020, libserver.so)
void __fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::FreeInstance(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::CanAllocate  (line 371, @0x0000000002304040, libserver.so)
bool __fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::CanAllocate(
        const CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 371, @0x0000000002304050, libserver.so)
// globals: CPhysicsEntitySolver::s_pSchemaBinding
const ISchemaBinding *__fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  return CPhysicsEntitySolver::s_pSchemaBinding;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::AllocateInstance  (line 371, @0x0000000002305ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::AllocateInstance(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::ConstructInstance  (line 371, @0x0000000002306210, libserver.so)  // inlines: CEntityHandle, CHandle, CLogicalEntity, CPhysicsEntitySolver, CServerOnlyEntity, Construct<CPhysicsEntitySolver>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::ConstructInstance(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = -1;
    *p = &off_407F5B0;
    *(p + 195) = -1;
  }
  return p;
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 371, @0x0000000002308e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 371, @0x0000000002308e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPhysicsEntitySolver::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPhysicsEntitySolver::GetEntityClassInternal  (line 371, @0x00000000023162a0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CLogicalEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "physics_entity_solver", "CPhysicsEntitySolver"
// globals: `guard variable for'CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass, CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo, CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo
CEntityClass *__cdecl CPhysicsEntitySolver::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass) != 0 )
  {
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_designerName.u.m_Id = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass._vptr_CEntityClass = off_3F79390;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_ComponentOffsets.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_AllHelpers.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classInputs.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classOutputs.m_Size = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_requiredEHandle.m_Index = -1;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_hNetworkSerializer = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pBaseClassInfo = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pClassInfo = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_flags = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_nAllHelpersFlags = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pScriptClassDesc = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pInputs = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_nInputCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pOutputs = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_nOutputCount = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pGameClass = 0;
    CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass._vptr_CEntityClass = off_407F530;
    __cxa_guard_release(&`guard variable for'CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass);
    __cxa_atexit(
      CPhysicsEntitySolver::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass,
      &_dso_handle);
  }
  if ( g_pEntityCPhysicsEntitySolverClass != 0 )
    return &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass;
  if ( `guard variable for'CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo) != 0 )
  {
    EntityClassInfo = CLogicalEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo,
      "CPhysicsEntitySolver",
      "physics_entity_solver",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo);
  }
  CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pClassInfo = &CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo;
  CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pBaseClassInfo = CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo.m_pBaseClassInfo;
  g_pEntityCPhysicsEntitySolverClass = &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass;
  CPhysicsEntitySolver::GetEntityClassInfo(void)::g_EntityCPhysicsEntitySolverClassInfo.m_pClass = &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass;
  CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCPhysicsEntitySolverClass->m_pComponentOverrides = 0;
  return &CPhysicsEntitySolver::GetEntityClassInternal(void)::g_EntityCPhysicsEntitySolverClass;
}


// CPhysicsEntitySolver::GetDataDescMap  (line 400, @0x00000000022b7a20, libserver.so)
// globals: CPhysicsEntitySolver::m_DataMap
datamap_t *__fastcall CPhysicsEntitySolver::GetDataDescMap(CPhysicsEntitySolver *const this)
{
  return &CPhysicsEntitySolver::m_DataMap;
}


// CPhysicsEntitySolver::AddDatadescMetadataKeys  (line 400, @0x00000000022d9cf0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPhysicsEntitySolver::GetEntityClass(void)
void __fastcall CPhysicsEntitySolver::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPhysicsEntitySolver::GetEntityClass);
}


// CPhysicsEntitySolver::GetBaseMap  (line 400, @0x00000000022d9d10, libserver.so)
datamap_t *__cdecl CPhysicsEntitySolver::GetBaseMap()
{
  return &CLogicalEntity::m_DataMap;
}


// DataMapInit<CPhysicsEntitySolver>  (line 400, @0x00000000022d9d20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_08.cpp
// strings: "CPhysicsEntitySolver"
// globals: `guard variable for'DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder, CPhysicsEntitySolver::GetEntityClass(void), CPhysicsEntitySolver::m_DataMap, DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder) != 0 )
  {
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_pszBase = "CPhysicsEntitySolver";
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder.m_nLenBase = 20;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::nameHolder,
      &_dso_handle);
  }
  CPhysicsEntitySolver::m_DataMap.dataNumFields = 5;
  CPhysicsEntitySolver::m_DataMap.baseMap = &CLogicalEntity::m_DataMap;
  CPhysicsEntitySolver::m_DataMap.dataDesc = &DataMapInit<CPhysicsEntitySolver>(CPhysicsEntitySolver *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPhysicsEntitySolver::m_DataMap, CPhysicsEntitySolver::GetEntityClass);
  return &CPhysicsEntitySolver::m_DataMap;
}


// CPhysicsEntitySolver::Create  (line 411, @0x00000000022d9f00, libserver.so)
// calls: CBaseEntity::CreateNoSpawn, CPhysicsEntitySolver::Init, DispatchSpawn
// callers: EntityPhysics_CreateSolver
// strings: "physics_entity_solver"
CPhysicsEntitySolver *__fastcall CPhysicsEntitySolver::Create(
        CBaseEntity *pMovingEntity,
        CBaseEntity *pPhysicsBlocker,
        float a3,
        float separationTime)
{
  CPhysicsEntitySolver *NoSpawn; // rbx

  NoSpawn = CBaseEntity::CreateNoSpawn("physics_entity_solver", &vec3_origin, &vec3_angle, 0);
  CPhysicsEntitySolver::Init(NoSpawn, pMovingEntity, pPhysicsBlocker, a3);
  DispatchSpawn(NoSpawn, 0);
  return NoSpawn;
}


// CPhysicsEntitySolver::Init  (line 420, @0x00000000022d9df0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=
// callers: CPhysicsEntitySolver::Create
void __fastcall CPhysicsEntitySolver::Init(
        CPhysicsEntitySolver *const this,
        CBaseEntity *pMovingEntity,
        CBaseEntity *pPhysicsBlocker,
        float separationTime)
{
  CEntityIdentity *m_pEntity; // rcx
  int v5; // eax
  __int16 v6; // si
  CEntityIdentity *v7; // rdx
  int v8; // eax
  __int16 v9; // cx

  if ( pMovingEntity != 0 && (m_pEntity = pMovingEntity->m_pEntity) != 0 )
  {
    v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hMovingEntity.m_Index) = v6 | this->m_hMovingEntity.m_Index & 0x8000;
    this->m_hMovingEntity.m_Index = (v5 << 15) | this->m_hMovingEntity.m_Index & 0x7FFF;
    if ( pPhysicsBlocker == 0 )
      goto LABEL_12;
  }
  else
  {
    this->m_hMovingEntity.m_Index = -1;
    if ( pPhysicsBlocker == 0 )
      goto LABEL_12;
  }
  v7 = pPhysicsBlocker->m_pEntity;
  if ( v7 == 0 )
  {
LABEL_12:
    this->m_hPhysicsBlocker.m_Index = -1;
    this->m_separationDuration = separationTime;
    return;
  }
  v8 = (v7->m_EHandle.m_Index >> 15) - (v7->m_flags & 1);
  if ( v7->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v7->m_EHandle.m_Index & 0x7FFF;
  this->m_separationDuration = separationTime;
  LOWORD(this->m_hPhysicsBlocker.m_Index) = v9 | this->m_hPhysicsBlocker.m_Index & 0x8000;
  this->m_hPhysicsBlocker.m_Index = (v8 << 15) | this->m_hPhysicsBlocker.m_Index & 0x7FFF;
}


// CPhysicsEntitySolver::Spawn  (line 428, @0x00000000022dcb80, libserver.so)  // inlines: Get, GetCollisionGroup, GetCollisionGroup_Inline, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator CBaseEntity*, operator CEntityInstance*, operator->
// calls: CLogicalEntity::Spawn, CBaseEntity::SetNextThink, PhysDisableEntityCollisions, CCollisionProperty::SetCollisionGroup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsEntitySolver::Spawn(CPhysicsEntitySolver *const this, const CEntityKeyValues *pKeyValues)
{
  double v3; // xmm1_8
  double v4; // xmm0_8
  CGlobalVars *v5; // r12
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rsi
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  uint32 v10; // eax
  CBaseEntity *v11; // rdi
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  uint32 v14; // eax
  CEntityInstance *v15; // rdi
  CConcreteEntityList *v16; // rsi
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  int (**vptr_IHandleEntity)(...); // rcx
  int v20; // ecx
  CEntityInstance *v21; // rcx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CCollisionProperty *v24; // rdi
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax

  CLogicalEntity::Spawn(this, pKeyValues);
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
  *&v4 = *&v4 + this->m_separationDuration;
  CBaseEntity::SetNextThink(this, v4, v3, 0);
  m_Index = this->m_hPhysicsBlocker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsBlocker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hPhysicsBlocker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  v10 = this->m_hMovingEntity.m_Index;
  v11 = 0;
  if ( v10 + 2 > 1 )
  {
    v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMovingEntity.m_Index) >> 9) & 0x3F];
    if ( v12 != 0 )
    {
      v13 = &v12[this->m_hMovingEntity.m_Index & 0x1FF];
      if ( v13 != 0 && v10 == v13->m_EHandle.m_Index )
        v11 = v13->m_pInstance;
    }
  }
  PhysDisableEntityCollisions(v11, m_pInstance);
  v14 = this->m_hPhysicsBlocker.m_Index;
  v15 = 0;
  v16 = CEntityHandle::gm_pEntityList;
  if ( v14 + 2 > 1 )
  {
    v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsBlocker.m_Index) >> 9) & 0x3F];
    if ( v17 != 0 )
    {
      v18 = &v17[this->m_hPhysicsBlocker.m_Index & 0x1FF];
      if ( v18 != 0 && v14 == v18->m_EHandle.m_Index )
        v15 = v18->m_pInstance;
    }
  }
  vptr_IHandleEntity = v15[11]._vptr_IHandleEntity;
  if ( vptr_IHandleEntity != 0 )
    v20 = *(vptr_IHandleEntity + 86);
  else
    v20 = 4;
  this->m_savedCollisionGroup = v20;
  v21 = 0;
  if ( v14 + 2 > 1 )
  {
    v22 = v16->m_pIdentityChunks[(LOWORD(this->m_hPhysicsBlocker.m_Index) >> 9) & 0x3F];
    if ( v22 != 0 )
    {
      v23 = &v22[this->m_hPhysicsBlocker.m_Index & 0x1FF];
      if ( v23 != 0 && v14 == v23->m_EHandle.m_Index )
        v21 = v23->m_pInstance;
    }
  }
  v24 = v21[11]._vptr_IHandleEntity;
  if ( v24 != 0 )
    CCollisionProperty::SetCollisionGroup(v24, 5);
}


// CPhysicsEntitySolver::Think  (line 441, @0x00000000022b9eb0, libserver.so)
// calls: UTIL_Remove
void __fastcall CPhysicsEntitySolver::Think(CPhysicsEntitySolver *const this)
{
  UTIL_Remove(this);
}


// CPhysicsEntitySolver::UpdateOnRemove  (line 446, @0x00000000022ddab0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CBaseEntity::UpdateOnRemove, PhysEnableEntityCollisions, CCollisionProperty::SetCollisionGroup
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPhysicsEntitySolver::UpdateOnRemove(CPhysicsEntitySolver *const this)
{
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  uint32 v6; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CBaseEntity *v9; // r12
  CCollisionProperty *m_pCollision; // rdi

  m_Index = this->m_hMovingEntity.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hMovingEntity.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hMovingEntity.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  v6 = this->m_hPhysicsBlocker.m_Index;
  if ( v6 + 2 <= 1 )
    goto LABEL_10;
  v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPhysicsBlocker.m_Index) >> 9) & 0x3F];
  if ( v7 == 0 )
    goto LABEL_10;
  v8 = &v7[this->m_hPhysicsBlocker.m_Index & 0x1FF];
  if ( v8 == 0 || v6 != v8->m_EHandle.m_Index )
    goto LABEL_10;
  v9 = v8->m_pInstance;
  if ( m_pInstance != 0 )
  {
    if ( v8->m_pInstance == 0 )
    {
LABEL_10:
      CBaseEntity::UpdateOnRemove(this);
      return;
    }
    PhysEnableEntityCollisions(m_pInstance, v8->m_pInstance);
  }
  else if ( v8->m_pInstance == 0 )
  {
    goto LABEL_10;
  }
  m_pCollision = v9->m_pCollision;
  if ( m_pCollision == 0 )
    goto LABEL_10;
  CCollisionProperty::SetCollisionGroup(m_pCollision, this->m_savedCollisionGroup);
  CBaseEntity::UpdateOnRemove(this);
}


// EntityPhysics_CreateSolver  (line 464, @0x00000000022ddce0, libserver.so)
// calls: PhysEntityCollisionsAreDisabled, CPhysicsEntitySolver::Create
// callers: CBaseDoor::Blocked, CBasePropDoor::Blocked, CFuncTrackTrain::Blocked
CPhysicsEntitySolver *__fastcall EntityPhysics_CreateSolver(
        CBaseEntity *pMovingEntity,
        CBaseEntity *pPhysicsObject,
        bool disableCollisions,
        float separationDuration)
{
  float v6; // xmm1_4

  if ( PhysEntityCollisionsAreDisabled(pMovingEntity, pPhysicsObject) )
    return 0;
  else
    return CPhysicsEntitySolver::Create(pMovingEntity, pPhysicsObject, separationDuration, v6);
}


