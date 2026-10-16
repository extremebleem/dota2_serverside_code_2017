// Reconstructed from DWARF by pahole; not original source.

// src/game/server/ragdoll_manager.cpp:16
class CRagdollManager : public CBaseEntity {
	class NetworkVar_m_iCurrentMaxRagdollCount {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	int m_iMaxRagdollCount;  // +0x30c
	bool m_bSaveImportant;  // +0x310
	typedef CBaseEntity BaseClass;
	typedef CRagdollManager ThisClass;

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
	CRagdollManager(CRagdollManager &);
	CRagdollManager(CRagdollManager &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CRagdollManager();
	virtual void Activate(ActivateType_t);
	virtual int UpdateTransmitState();
	void InputSetMaxRagdollCount(inputdata_t &);
	virtual int DrawDebugTextOverlays(uint64, int);
	void UpdateCurrentMaxRagDollCount();
	virtual ~CRagdollManager();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[34] GetDataDescMap
	// vtable[10] Activate
	// vtable[64] UpdateTransmitState
	// vtable[79] DrawDebugTextOverlays
	// sizeof = 792
};

// src/game/server/ragdoll_manager.cpp:45
class C_CRagdollManager_MapInstall {
	C_CRagdollManager_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CRagdollManager::~CRagdollManager  (line 16, @0x0000000002372e80, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CRagdollManager::~CRagdollManager(CRagdollManager *const this)
{
  this->_vptr_IHandleEntity = &off_40A2C70;
  CBaseEntity::~CBaseEntity(this);
}


// CRagdollManager::~CRagdollManager  (line 16, @0x0000000002372ea0, libserver.so)  // inlines: ~CRagdollManager
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CRagdollManager::~CRagdollManager(CRagdollManager *const this)
{
  this->_vptr_IHandleEntity = &off_40A2C70;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CRagdollManager::GetEntityClass  (line 18, @0x00000000023712a0, libserver.so)
CEntityClass *__cdecl CRagdollManager::GetEntityClass()
{
  return g_pEntityCRagdollManagerClass;
}


// CRagdollManager::Schema_DynamicBinding  (line 18, @0x00000000023712b0, libserver.so)
// globals: CRagdollManager::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollManager::Schema_DynamicBinding(const CRagdollManager *const this)
{
  return CRagdollManager::s_pSchemaBinding;
}


// CRagdollManager::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 18, @0x00000000023712c0, libserver.so)
// globals: CRagdollManager::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CRagdollManager::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CRagdollManager::CEntityInstanceEntityClass *const this)
{
  return CRagdollManager::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CRagdollManager::CEntityInstanceEntityClass::DestructInstance  (line 18, @0x00000000023712d0, libserver.so)  // inlines: Destruct<CRagdollManager>
void __fastcall CRagdollManager::CEntityInstanceEntityClass::DestructInstance(
        CRagdollManager::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CRagdollManager::CEntityInstanceEntityClass::FreeInstance  (line 18, @0x00000000023712f0, libserver.so)
void __fastcall CRagdollManager::CEntityInstanceEntityClass::FreeInstance(
        CRagdollManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CRagdollManager::CEntityInstanceEntityClass::CanAllocate  (line 18, @0x0000000002371310, libserver.so)
bool __fastcall CRagdollManager::CEntityInstanceEntityClass::CanAllocate(
        const CRagdollManager::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CRagdollManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 18, @0x0000000002371320, libserver.so)
// globals: CRagdollManager::s_pSchemaBinding
const ISchemaBinding *__fastcall CRagdollManager::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CRagdollManager::CEntityInstanceEntityClass *const this)
{
  return CRagdollManager::s_pSchemaBinding;
}


// CRagdollManager::CEntityInstanceEntityClass::AllocateInstance  (line 18, @0x0000000002372990, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CRagdollManager::CEntityInstanceEntityClass::AllocateInstance(
        CRagdollManager::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 792);
  memset(v1, 0, 0x318u);
  return v1;
}


// CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x00000000023750f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 18, @0x0000000002375110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CRagdollManager::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CRagdollManager::CEntityInstanceEntityClass::ConstructInstance  (line 18, @0x0000000002378840, libserver.so)  // inlines: Construct<CRagdollManager>
// calls: CRagdollManager::CRagdollManager
CEntityInstance *__fastcall CRagdollManager::CEntityInstanceEntityClass::ConstructInstance(
        CRagdollManager::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CRagdollManager::CRagdollManager(p);
  return p;
}


// CRagdollManager::GetEntityClassInternal  (line 18, @0x000000000237ce90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "game_ragdoll_manager", "CRagdollManager"
// globals: `guard variable for'CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass, CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo, CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo
CEntityClass *__cdecl CRagdollManager::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass) != 0 )
  {
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_designerName.u.m_Id = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass._vptr_CEntityClass = off_3F79390;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_ComponentOffsets.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_AllHelpers.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classInputs.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classOutputs.m_Size = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_requiredEHandle.m_Index = -1;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_hNetworkSerializer = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pBaseClassInfo = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pClassInfo = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_flags = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_nAllHelpersFlags = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pScriptClassDesc = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pInputs = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_nInputCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pOutputs = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_nOutputCount = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pGameClass = 0;
    CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass._vptr_CEntityClass = off_40A2BF0;
    __cxa_guard_release(&`guard variable for'CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass);
    __cxa_atexit(
      CRagdollManager::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass,
      &_dso_handle);
  }
  if ( g_pEntityCRagdollManagerClass != 0 )
    return &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass;
  if ( `guard variable for'CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo,
      "CRagdollManager",
      "game_ragdoll_manager",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo);
  }
  CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pClassInfo = &CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo;
  CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pBaseClassInfo = CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo.m_pBaseClassInfo;
  g_pEntityCRagdollManagerClass = &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass;
  CRagdollManager::GetEntityClassInfo(void)::g_EntityCRagdollManagerClassInfo.m_pClass = &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass;
  CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCRagdollManagerClass->m_pComponentOverrides = 0;
  return &CRagdollManager::GetEntityClassInternal(void)::g_EntityCRagdollManagerClass;
}


// CRagdollManager::YouForgotToImplementOrDeclareServerClass  (line 45, @0x000000000234b610, libserver.so)
int __fastcall CRagdollManager::YouForgotToImplementOrDeclareServerClass(CRagdollManager *const this)
{
  return 0;
}


// CRagdollManager::GetServerClass  (line 45, @0x0000000002351ed0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CRagdollManager::GetServerClass(CRagdollManager *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CRagdollManager::GetDataDescMap  (line 48, @0x000000000234b620, libserver.so)
// globals: CRagdollManager::m_DataMap
datamap_t *__fastcall CRagdollManager::GetDataDescMap(CRagdollManager *const this)
{
  return &CRagdollManager::m_DataMap;
}


// CRagdollManager::AddDatadescMetadataKeys  (line 48, @0x000000000235f580, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CRagdollManager::GetEntityClass(void)
void __fastcall CRagdollManager::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CRagdollManager::GetEntityClass);
}


// CRagdollManager::GetBaseMap  (line 48, @0x000000000235f5a0, libserver.so)
datamap_t *__cdecl CRagdollManager::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CRagdollManager>  (line 48, @0x000000000235f5b0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_10.cpp
// strings: "CRagdollManager"
// globals: `guard variable for'DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder, CRagdollManager::GetEntityClass(void), CRagdollManager::m_DataMap, DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CRagdollManager>(CRagdollManager *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder) != 0 )
  {
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_pszBase = "CRagdollManager";
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CRagdollManager>(CRagdollManager *)::nameHolder,
      &_dso_handle);
  }
  CRagdollManager::m_DataMap.dataNumFields = 4;
  CRagdollManager::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CRagdollManager::m_DataMap.dataDesc = &DataMapInit<CRagdollManager>(CRagdollManager *)::dataDesc[1];
  AddDatadescMetadataKeys(&CRagdollManager::m_DataMap, CRagdollManager::GetEntityClass);
  return &CRagdollManager::m_DataMap;
}


// CRagdollManager::CRagdollManager  (line 62, @0x000000000235f680, libserver.so)  // inlines: CNetworkVarBase, EnsureValidValue<signed char>, NetworkStateChanged, Set, operator=<int>
// calls: CBaseEntity::CBaseEntity, CBaseEntity::NetworkStateChanged, CBaseEntity::~CBaseEntity, _Unwind_Resume
// callers: CRagdollManager::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CRagdollManager::CRagdollManager(CRagdollManager *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->_vptr_IHandleEntity = &off_40A2C70;
  this->m_iCurrentMaxRagdollCount.m_Value = 0;
  this->m_iMaxRagdollCount = -1;
  CBaseEntity::NetworkStateChanged(this, 0x308u, -1, -1);
  this->m_iCurrentMaxRagdollCount.m_Value = -1;
}


// CRagdollManager::UpdateTransmitState  (line 73, @0x000000000234b890, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CRagdollManager::UpdateTransmitState(CRagdollManager *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


// CRagdollManager::Activate  (line 81, @0x000000000235f740, libserver.so)
// calls: CBaseEntity::Activate, CRagdollManager::UpdateCurrentMaxRagDollCount
void __fastcall CRagdollManager::Activate(CRagdollManager *const this, ActivateType_t activateType)
{
  CBaseEntity::Activate(this, activateType);
  CRagdollManager::UpdateCurrentMaxRagDollCount(this);
}


// CRagdollManager::UpdateCurrentMaxRagDollCount  (line 89, @0x000000000235f6e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<int>
// callers: CRagdollManager::Activate, CRagdollManager::InputSetMaxRagdollCount
// globals: g_pRagdollLRU
void __fastcall CRagdollManager::UpdateCurrentMaxRagDollCount(CRagdollManager *const this)
{
  int m_iMaxRagdollCount; // r12d

  m_iMaxRagdollCount = this->m_iMaxRagdollCount;
  if ( m_iMaxRagdollCount != this->m_iCurrentMaxRagdollCount.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 776, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_iCurrentMaxRagdollCount.m_Value = m_iMaxRagdollCount;
  }
  g_pRagdollLRU->m_iMaxRagdolls = m_iMaxRagdollCount;
}


// CRagdollManager::InputSetMaxRagdollCount  (line 97, @0x000000000235f760, libserver.so)  // inlines: Int, operator int
// calls: CRagdollManager::UpdateCurrentMaxRagDollCount
void __fastcall CRagdollManager::InputSetMaxRagdollCount(CRagdollManager *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax

  m_type = inputdata->value.m_type;
  if ( m_type == 1 )
  {
    this->m_iMaxRagdollCount = inputdata->value.m_float;
    CRagdollManager::UpdateCurrentMaxRagDollCount(this);
  }
  else
  {
    if ( m_type == 34 )
      this->m_iMaxRagdollCount = inputdata->value.m_float64;
    else
      this->m_iMaxRagdollCount = inputdata->value.m_int;
    CRagdollManager::UpdateCurrentMaxRagDollCount(this);
  }
}


// RagdollManager_SaveImportant  (line 105, @0x000000000235f7c0, libserver.so)
bool __fastcall RagdollManager_SaveImportant(CAI_BaseNPC *pNPC)
{
  return 0;
}


// CRagdollManager::DrawDebugTextOverlays  (line 129, @0x000000000234b790, libserver.so)
// calls: CBaseEntity::DrawDebugTextOverlays, V_snprintf, CBaseEntity::EntityText, __stack_chk_fail
// strings: "max ragdoll count: %d"
int __fastcall CRagdollManager::DrawDebugTextOverlays(
        CRagdollManager *const this,
        uint64 nDebugOverlayBits,
        int iDebugFilterFlags)
{
  __int16 v4; // r13
  char v5; // bl
  int v6; // r12d
  char tempstr[520]; // [rsp+10h] [rbp-230h] BYREF
  unsigned __int64 v9; // [rsp+218h] [rbp-28h]

  v4 = iDebugFilterFlags;
  v5 = nDebugOverlayBits;
  v9 = __readfsqword(0x28u);
  v6 = CBaseEntity::DrawDebugTextOverlays(this, nDebugOverlayBits, iDebugFilterFlags);
  if ( (v5 & 1) != 0 && (v4 & 0x4000) != 0 )
  {
    V_snprintf(tempstr, 512, "max ragdoll count: %d", this->m_iCurrentMaxRagdollCount.m_Value);
    CBaseEntity::EntityText(this, v6++, tempstr, 0.0, 255, 255, 255, 255);
  }
  return v6;
}


