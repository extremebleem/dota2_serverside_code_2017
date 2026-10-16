// Reconstructed from DWARF by pahole; not original source.

// src/game/server/baseflex.cpp:42
class C_CBaseFlex_MapInstall {
	C_CBaseFlex_MapInstall();

	// sizeof = 1
};

// src/game/server/baseflex.cpp:68
class CBaseFlexAlias_funCBaseFlex : public CBaseFlex {
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
	CBaseFlexAlias_funCBaseFlex(CBaseFlexAlias_funCBaseFlex &);
	CBaseFlexAlias_funCBaseFlex(CBaseFlexAlias_funCBaseFlex &);
	CBaseFlexAlias_funCBaseFlex();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CBaseFlexAlias_funCBaseFlex();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1360
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CBaseFlex::YouForgotToImplementOrDeclareServerClass  (line 42, @0x000000000213d880, libserver.so)
int __fastcall CBaseFlex::YouForgotToImplementOrDeclareServerClass(CBaseFlex *const this)
{
  return 0;
}


// CBaseFlex::GetServerClass  (line 42, @0x000000000214a5d0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CBaseFlex::GetServerClass(CBaseFlex *const this)
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


// CBaseFlex::GetDataDescMap  (line 44, @0x000000000213d890, libserver.so)
// globals: CBaseFlex::m_DataMap
datamap_t *__fastcall CBaseFlex::GetDataDescMap(CBaseFlex *const this)
{
  return &CBaseFlex::m_DataMap;
}


// CBaseFlex::AddDatadescMetadataKeys  (line 44, @0x00000000021603b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CBaseFlex::GetEntityClass(void)
void __fastcall CBaseFlex::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CBaseFlex::GetEntityClass);
}


// CBaseFlex::GetBaseMap  (line 44, @0x00000000021603d0, libserver.so)
datamap_t *__cdecl CBaseFlex::GetBaseMap()
{
  return &CBaseAnimatingOverlay::m_DataMap;
}


// DataMapInit<CBaseFlex>  (line 44, @0x00000000021603e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorDataOps, GetDataOps<CNetworkUtlVectorBase<float, CBaseFlex::NetworkVar_m_flexWeight> >
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// globals: `guard variable for'DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder, `guard variable for'DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc, CBaseFlex::GetEntityClass(void), CBaseFlex::m_DataMap, `guard variable for'CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float, CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkV, DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder, __dso_handle (9 total)
datamap_t *__fastcall DataMapInit<CBaseFlex>(CBaseFlex *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder) != 0 )
  {
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_pszBase = "CBaseFlex";
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder.m_nLenBase = 9;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CBaseFlex>(CBaseFlex *)::nameHolder,
      &_dso_handle);
  }
  CBaseFlex::m_DataMap.baseMap = &CBaseAnimatingOverlay::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc) != 0 )
  {
    if ( `guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1> *)::ops == 0
      && __cxa_guard_acquire(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1> *)::ops) != 0 )
    {
      CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1> *)::ops = off_40086D0;
      __cxa_guard_release(&`guard variable for'ISaveRestoreOps * CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1> *)::ops);
    }
    DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc[3].pSaveRestoreOps = &CUtlVectorDataopsInstantiator<1>::GetDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1>>(CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1> *)::ops;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc);
  }
  CBaseFlex::m_DataMap.dataNumFields = 6;
  CBaseFlex::m_DataMap.dataDesc = &DataMapInit<CBaseFlex>(CBaseFlex *)::dataDesc[1];
  AddDatadescMetadataKeys(&CBaseFlex::m_DataMap, CBaseFlex::GetEntityClass);
  return &CBaseFlex::m_DataMap;
}


// CBaseFlexAlias_funCBaseFlex::Schema_DynamicBinding  (line 68, @0x000000000217a7c0, libserver.so)
// globals: CBaseFlexAlias_funCBaseFlex::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseFlexAlias_funCBaseFlex::Schema_DynamicBinding(
        const CBaseFlexAlias_funCBaseFlex *const this)
{
  return CBaseFlexAlias_funCBaseFlex::s_pSchemaBinding;
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x000000000217a7d0, libserver.so)
// globals: CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  return CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x000000000217a7e0, libserver.so)  // inlines: Destruct<CBaseFlexAlias_funCBaseFlex>
void __fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::DestructInstance(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x000000000217a800, libserver.so)
void __fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::FreeInstance(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x000000000217a820, libserver.so)
bool __fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::CanAllocate(
        const CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x000000000217a830, libserver.so)
// globals: CBaseFlexAlias_funCBaseFlex::s_pSchemaBinding
const ISchemaBinding *__fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  return CBaseFlexAlias_funCBaseFlex::s_pSchemaBinding;
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x000000000217b2a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::AllocateInstance(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1360);
  memset(v1, 0, 0x550u);
  return v1;
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x000000000217c930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x000000000217c950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x000000000217ff80, libserver.so)  // inlines: CBaseFlexAlias_funCBaseFlex, Construct<CBaseFlexAlias_funCBaseFlex>
// calls: CBaseFlex::CBaseFlex
CEntityInstance *__fastcall CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::ConstructInstance(
        CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseFlex::CBaseFlex(p);
    *p = &off_4006A10;
  }
  return p;
}


// CBaseFlexAlias_funCBaseFlex::~CBaseFlexAlias_funCBaseFlex  (line 68, @0x000000000217ffb0, libserver.so)
// calls: CBaseFlex::~CBaseFlex
void __fastcall CBaseFlexAlias_funCBaseFlex::~CBaseFlexAlias_funCBaseFlex(CBaseFlexAlias_funCBaseFlex *const this)
{
  this->_vptr_IHandleEntity = &off_4006A10;
  CBaseFlex::~CBaseFlex(this);
}


// CBaseFlexAlias_funCBaseFlex::~CBaseFlexAlias_funCBaseFlex  (line 68, @0x000000000217ffd0, libserver.so)  // inlines: operator delete, ~CBaseFlexAlias_funCBaseFlex
// calls: CBaseFlex::~CBaseFlex
void __fastcall CBaseFlexAlias_funCBaseFlex::~CBaseFlexAlias_funCBaseFlex(CBaseFlexAlias_funCBaseFlex *const this)
{
  this->_vptr_IHandleEntity = &off_4006A10;
  CBaseFlex::~CBaseFlex(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal  (line 68, @0x00000000021803b0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseFlex::InitScriptDesc, CBaseFlex::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "CBaseFlexAlias_funCBaseFlex"
// globals: `guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass, CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo, CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo
CEntityClass *__cdecl CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass) != 0 )
  {
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_designerName.u.m_Id = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass._vptr_CEntityClass = off_3F79390;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_ComponentOffsets.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_AllHelpers.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_atomicFields,
      4);
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classInputs.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classInputs.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classOutputs.m_Size = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_requiredEHandle.m_Index = -1;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_hNetworkSerializer = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pBaseClassInfo = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pClassInfo = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_flags = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_nAllHelpersFlags = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pScriptClassDesc = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pInputs = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_nInputCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pOutputs = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_nOutputCount = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pGameClass = 0;
    CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass._vptr_CEntityClass = off_4006990;
    __cxa_guard_release(&`guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass);
    __cxa_atexit(
      CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass,
      &_dso_handle);
  }
  if ( g_pEntityCBaseFlexAlias_funCBaseFlexClass != 0 )
    return &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass;
  if ( `guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo) != 0 )
  {
    EntityClassInfo = CBaseFlex::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo,
      "CBaseFlexAlias_funCBaseFlex",
      "funCBaseFlex",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo);
  }
  CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pClassInfo = &CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo;
  CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pBaseClassInfo = CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo.m_pBaseClassInfo;
  g_pEntityCBaseFlexAlias_funCBaseFlexClass = &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass;
  CBaseFlexAlias_funCBaseFlex::GetEntityClassInfo(void)::g_EntityCBaseFlexAlias_funCBaseFlexClassInfo.m_pClass = &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass;
  CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass.m_pScriptClassDesc = CBaseFlex::InitScriptDesc();
  g_pEntityCBaseFlexAlias_funCBaseFlexClass->m_pComponentOverrides = 0;
  return &CBaseFlexAlias_funCBaseFlex::GetEntityClassInternal(void)::g_EntityCBaseFlexAlias_funCBaseFlexClass;
}


// CBaseFlex::CBaseFlex  (line 72, @0x000000000216db30, libserver.so)  // inlines: CNetworkUtlVectorBase, CNetworkUtlVector_MemoryType, CNetworkVarBase, CNetworkVectorBase, CUtlMap, CUtlMemory, CUtlRBTree, CUtlVector, CUtlVectorBase, EnsureValidValue, EnsureValidValue<bool>, FlexSettingMap_t, ResetDbgInfo, Zero
// calls: CBaseAnimatingOverlay::CBaseAnimatingOverlay
// callers: CBaseFlex::CEntityInstanceEntityClass::ConstructInstance, CFlexCycler::CEntityInstanceEntityClass::ConstructInstance, CBaseFlexAlias_funCBaseFlex::CEntityInstanceEntityClass::ConstructInstance, CBaseCombatCharacter::CBaseCombatCharacter, CGenericFlexCycler::CGenericFlexCycler, CEconEntity::CEconEntity, CFlexExpresserShim::CEntityInstanceEntityClass::ConstructInstance, CFlexExpresser::CFlexExpresser
// globals: CDefOps<flexsettinghdr_t const*>::LessFunc(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)
void __fastcall CBaseFlex::CBaseFlex(CBaseFlex *const this)
{
  CBaseAnimatingOverlay::CBaseAnimatingOverlay(this);
  this->_vptr_IHandleEntity = &off_4006150;
  this->m_flexWeight.m_Vector.m_Size = 0;
  this->m_flexWeight.m_Vector.m_Memory.m_pMemory = 0;
  this->m_flexWeight.m_Vector.m_Memory.m_nAllocationCount = 0;
  this->m_flexWeight.m_Vector.m_Memory.m_nGrowSize = 0;
  *&this->m_viewtarget.m_Value.y = 0;
  this->m_viewtarget.m_Value.x = 0.0;
  this->m_blinktoggle.m_Value = 0;
  this->m_SceneEvents.m_Size = 0;
  this->m_SceneEvents.m_Memory.m_pMemory = 0;
  this->m_SceneEvents.m_Memory.m_nAllocationCount = 0;
  this->m_SceneEvents.m_Memory.m_nGrowSize = 0;
  this->m_LocalToGlobal.m_Tree.m_LessFunc.m_LessFunc = CDefOps<flexsettinghdr_t const*>::LessFunc;
  this->m_LocalToGlobal.m_Tree.m_Elements.m_pMemory = 0;
  this->m_LocalToGlobal.m_Tree.m_Elements.m_nAllocationCount = 0;
  this->m_LocalToGlobal.m_Tree.m_Elements.m_nGrowSize = 0;
  this->m_LocalToGlobal.m_Tree.m_Root = -1;
  this->m_LocalToGlobal.m_Tree.m_NumElements = 0;
  this->m_LocalToGlobal.m_Tree.m_FirstFree = -1;
  this->m_LocalToGlobal.m_Tree.m_LastAlloc.index = -1;
  this->m_LocalToGlobal.m_Tree.m_pElements = 0;
  this->m_ActiveChoreoScenes.m_Size = 0;
  this->m_ActiveChoreoScenes.m_Memory.m_pMemory = 0;
  this->m_ActiveChoreoScenes.m_Memory.m_nAllocationCount = 0;
  this->m_ActiveChoreoScenes.m_Memory.m_nGrowSize = 0;
  this->m_bUpdateLayerPriorities = 1;
  this->m_flLastFlexAnimationTime = 0.0;
}


// CBaseFlex::~CBaseFlex  (line 84, @0x000000000216dc70, libserver.so)  // inlines: Purge, PurgeAndDeleteElements, RemoveAll, ~CNetworkUtlVectorBase, ~CNetworkUtlVector_MemoryType, ~CUtlMap, ~CUtlMemory, ~CUtlRBTree, ~CUtlVector, ~CUtlVectorBase, ~FlexSettingMap_t
// calls: CUtlRBTree<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int, CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::CKeyLess, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int>, short unsigned int> >::RemoveAll, operator delete, CUtlMemory<CSceneEventInfo*, int>::Purge, CBaseAnimatingOverlay::~CBaseAnimatingOverlay, CUtlMemory<UtlRBTreeNode_t<CUtlMap<const flexsettinghdr_t*, FS_LocalToGlobal_t, short unsigned int>::Node_t, short unsigned int>, short unsigned int>::Purge, CUtlMemory<CChoreoScene*, int>::Purge, CUtlMemory<float, int>::Purge
// callers: CBaseFlex::~CBaseFlex, CBaseFlexAlias_funCBaseFlex::~CBaseFlexAlias_funCBaseFlex, CBaseCombatCharacter::CBaseCombatCharacter, CBaseCombatCharacter::~CBaseCombatCharacter, CFlexCycler::~CFlexCycler, CGenericFlexCycler::~CGenericFlexCycler, CGenericFlexCyclerAlias_cycler::~CGenericFlexCyclerAlias_cycler, CEconEntity::~CEconEntity, CEconWearable::~CEconWearable, CDOTAWearableItem::~CDOTAWearableItem, CBaseAttributableItem::~CBaseAttributableItem, CEconEntity::CEconEntity (15 total)
void __fastcall CBaseFlex::~CBaseFlex(CBaseFlex *const this)
{
  FlexSettingMap_t *p_m_LocalToGlobal; // r14
  __int64 v2; // r13
  int v3; // r12d
  CSceneEventInfo *v5; // rdi
  bool v6; // zf

  p_m_LocalToGlobal = &this->m_LocalToGlobal;
  v2 = 0;
  v3 = 0;
  this->_vptr_IHandleEntity = &off_4006150;
  CUtlRBTree<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short,CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&this->m_LocalToGlobal.m_Tree);
  if ( this->m_SceneEvents.m_Size > 0 )
  {
    do
    {
      ++v3;
      v5 = this->m_SceneEvents.m_Memory.m_pMemory[v2++];
      operator delete(v5);
    }
    while ( v3 < this->m_SceneEvents.m_Size );
  }
  v6 = (this->m_SceneEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SceneEvents.m_Size = 0;
  if ( v6 )
    CUtlMemory<CSceneEventInfo *,int>::Purge(&this->m_SceneEvents.m_Memory);
  v6 = (this->m_ActiveChoreoScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_ActiveChoreoScenes.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CChoreoScene *,int>::Purge(&this->m_ActiveChoreoScenes.m_Memory);
    if ( (this->m_ActiveChoreoScenes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CChoreoScene *,int>::Purge(&this->m_ActiveChoreoScenes.m_Memory);
  }
  CUtlRBTree<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short,CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::CKeyLess,CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>>::RemoveAll(&p_m_LocalToGlobal->m_Tree);
  this->m_LocalToGlobal.m_Tree.m_FirstFree = -1;
  if ( (this->m_LocalToGlobal.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) != 0 )
  {
    this->m_LocalToGlobal.m_Tree.m_LastAlloc.index = -1;
  }
  else
  {
    CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LocalToGlobal.m_Tree.m_Elements);
    v6 = (this->m_LocalToGlobal.m_Tree.m_Elements.m_nGrowSize & 0xC0000000) == 0;
    this->m_LocalToGlobal.m_Tree.m_LastAlloc.index = -1;
    if ( v6 )
      CUtlMemory<UtlRBTreeNode_t<CUtlMap<flexsettinghdr_t const*,FS_LocalToGlobal_t,unsigned short,bool (*)(flexsettinghdr_t const* const&,flexsettinghdr_t const* const&)>::Node_t,unsigned short>,unsigned short>::Purge(&this->m_LocalToGlobal.m_Tree.m_Elements);
  }
  v6 = (this->m_SceneEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_SceneEvents.m_Size = 0;
  if ( v6 )
  {
    CUtlMemory<CSceneEventInfo *,int>::Purge(&this->m_SceneEvents.m_Memory);
    if ( (this->m_SceneEvents.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CSceneEventInfo *,int>::Purge(&this->m_SceneEvents.m_Memory);
  }
  v6 = (this->m_flexWeight.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->m_flexWeight.m_Vector.m_Size = 0;
  if ( !v6
    || (CUtlMemory<float,int>::Purge(&this->m_flexWeight.m_Vector.m_Memory),
        (this->m_flexWeight.m_Vector.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CBaseAnimatingOverlay::~CBaseAnimatingOverlay(this);
  }
  else
  {
    CUtlMemory<float,int>::Purge(&this->m_flexWeight.m_Vector.m_Memory);
    CBaseAnimatingOverlay::~CBaseAnimatingOverlay(this);
  }
}


// CBaseFlex::~CBaseFlex  (line 84, @0x000000000216de60, libserver.so)  // inlines: operator delete
// calls: CBaseFlex::~CBaseFlex
void __fastcall CBaseFlex::~CBaseFlex(CBaseFlex *const this)
{
  CBaseFlex::~CBaseFlex(this);
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, this);
}


// CBaseFlex::OnNewModel  (line 95, @0x0000000002177820, libserver.so)  // inlines: AddMultipleToTail, CWeakHandle, GrowMemory, GrowVector, Init, InsertMultipleBefore, NetworkStateChanged, RemoveMultipleFromTail, SetCount
// calls: CBaseAnimating::GetNumFlexControllers, CBaseAnimating::OnNewModel, CBaseFlex::SetFlexWeight, CUtlMemory<float, int>::Grow
// callers: CBasePlayer::OnNewModel, CEconEntity::OnNewModel, NextBotCombatCharacter::OnNewModel
void __fastcall CBaseFlex::OnNewModel(CBaseFlex *const this, HModel hOldModel, HModel hNewModel)
{
  LocalFlexController_t NumFlexControllers; // eax
  const ResourceBindingBase_t *m_pData; // rax
  LocalFlexController_t v8; // ebx
  LocalFlexController_t v9; // r12d
  float v10; // xmm1_4
  int m_nAllocationCount; // edx
  LocalFlexController_t v12; // [rsp+Ch] [rbp-44h]
  HModel hOldModela; // [rsp+10h] [rbp-40h] BYREF
  HModel hNewModela; // [rsp+20h] [rbp-30h] BYREF

  NumFlexControllers = CBaseAnimating::GetNumFlexControllers(this);
  if ( NumFlexControllers - this->m_flexWeight.m_Vector.m_Size > 0 )
  {
    m_nAllocationCount = this->m_flexWeight.m_Vector.m_Memory.m_nAllocationCount;
    if ( NumFlexControllers > m_nAllocationCount )
    {
      v12 = NumFlexControllers;
      CUtlMemory<float,int>::Grow(&this->m_flexWeight.m_Vector.m_Memory, NumFlexControllers - m_nAllocationCount);
      NumFlexControllers = v12;
    }
    goto LABEL_9;
  }
  if ( NumFlexControllers != this->m_flexWeight.m_Vector.m_Size )
LABEL_9:
    this->m_flexWeight.m_Vector.m_Size = NumFlexControllers;
  (*(this->_vptr_IHandleEntity + 22))(this, 1216, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  hNewModela.m_pBinding = hNewModel.m_pBinding->m_pData;
  m_pData = hOldModel.m_pBinding->m_pData;
  v8 = 0;
  hOldModela.m_pBinding = m_pData;
  CBaseAnimating::OnNewModel(this, &hOldModela, &hNewModela);
  while ( 1 )
  {
    v9 = v8++;
    if ( v9 >= CBaseAnimating::GetNumFlexControllers(this) )
      break;
    CBaseFlex::SetFlexWeight(this, v9, 0.0, v10);
  }
}


// CBaseFlex::GetScenePriority  (line 110, @0x0000000002160540, libserver.so)
// calls: CChoreoScene::GetNumChannels
// callers: CBaseFlex::HandleStartSequenceSceneEvent, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent
int __fastcall CBaseFlex::GetScenePriority(const CBaseFlex *const this, CChoreoScene *scene)
{
  int m_Size; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // r12d
  CChoreoScene *v8; // rdi

  m_Size = this->m_ActiveChoreoScenes.m_Size;
  if ( m_Size <= 0 )
    return 0;
  v5 = 0;
  v6 = 8LL * (m_Size - 1) + 8;
  v7 = 0;
  do
  {
    v8 = this->m_ActiveChoreoScenes.m_Memory.m_pMemory[v5 / 8];
    if ( v8 != 0 )
    {
      if ( v8 == scene )
        return v7;
      v7 += CChoreoScene::GetNumChannels(v8);
    }
    v5 += 8LL;
  }
  while ( v5 != v6 );
  return v7;
}


// CBaseFlex::AddSceneEvent  (line 141, @0x00000000021750e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CSceneEventInfo*>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, HSequence, Set, operator=, operator[]
// calls: Msg, CChoreoEvent::GetActor, operator new, Scene_Printf, operator delete, CUtlMemory<CSceneEventInfo*, int>::Grow
// callers: CSceneEntity::DispatchStartExpression, CSceneEntity::DispatchStartFlexAnimation, CSceneEntity::DispatchStartLookAt, CSceneEntity::DispatchStartMoveTo, CSceneEntity::DispatchStartFace, CSceneEntity::DispatchStartSequence, CSceneEntity::DispatchStartGesture, CSceneEntity::DispatchStartGeneric, CSceneEntity::DispatchStartSpeak
// strings: "CBaseFlex::AddSceneEvent:  scene or event was NULL!!!\n", "CBaseFlex::AddSceneEvent:  event failed\n", "CBaseFlex::AddSceneEvent:  event->GetActor() was NULL!!!\n"
void __fastcall CBaseFlex::AddSceneEvent(
        CBaseFlex *const this,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CBaseEntity *pTarget,
        CSceneEntity *pSceneEntity)
{
  CChoreoActor *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  CSceneEventInfo *v13; // rbx
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rax
  __int16 v18; // di
  int v19; // edx
  __int64 m_Size; // r12
  int v21; // eax
  CSceneEventInfo **v22; // rax
  CSceneEntity *v23; // [rsp+0h] [rbp-40h]
  CChoreoActor *actora; // [rsp+8h] [rbp-38h]

  if ( scene != 0 && event != 0 )
  {
    v9 = CChoreoEvent::GetActor(event);
    if ( v9 != 0 )
    {
      v23 = pSceneEntity;
      actora = v9;
      v13 = operator new(0x60u);
      v13->m_pActor = 0;
      v13->m_hSceneEntity.m_Index = -1;
      v13->m_bStarted = 0;
      v13->m_iLayer = -1;
      v13->m_iPriority = 0;
      v13->m_hSequence.m_Data = -1;
      v13->m_bIsGesture = 0;
      v13->m_flWeight = 0.0;
      v13->m_hTarget.m_Index = -1;
      v13->m_bIsMoving = 0;
      v13->m_bHasArrived = 0;
      v13->m_flInitialYaw = 0.0;
      v13->m_flTargetYaw = 0.0;
      v13->m_flFacingYaw = 0.0;
      v13->m_nType = 0;
      v13->m_flNext = 0.0;
      v13->m_bClientSide = 0;
      v13->m_bShouldRemove = 0;
      v13->m_pExpHdr = 0;
      v13->m_pEvent = event;
      v13->m_pScene = scene;
      if ( pTarget != 0 )
      {
        m_pEntity = pTarget->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v16 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v13->m_hTarget.m_Index) = v16 | v13->m_hTarget.m_Index & 0x8000;
          v13->m_hTarget.m_Index = (v15 << 15) | v13->m_hTarget.m_Index & 0x7FFF;
        }
      }
      if ( v23 != 0 )
      {
        v17 = v23->m_pEntity;
        if ( v17 != 0 )
        {
          v18 = 0x7FFF;
          v19 = (v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1);
          if ( v17->m_EHandle.m_Index != -1 )
            v18 = v17->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v13->m_hSceneEntity.m_Index) = v18 | v13->m_hSceneEntity.m_Index & 0x8000;
          v13->m_hSceneEntity.m_Index = (v19 << 15) | v13->m_hSceneEntity.m_Index & 0x7FFF;
        }
      }
      if ( (*(this->_vptr_IHandleEntity + 252))(this, v13, scene, event, actora, pTarget) != 0 )
      {
        m_Size = this->m_SceneEvents.m_Size;
        v21 = this->m_SceneEvents.m_Size;
        if ( m_Size == this->m_SceneEvents.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CSceneEventInfo *,int>::Grow(&this->m_SceneEvents.m_Memory, 1);
          v21 = this->m_SceneEvents.m_Size;
        }
        this->m_SceneEvents.m_Size = v21 + 1;
        v22 = &this->m_SceneEvents.m_Memory.m_pMemory[m_Size];
        if ( v22 != 0 )
          *v22 = v13;
      }
      else
      {
        Scene_Printf("CBaseFlex::AddSceneEvent:  event failed\n");
        operator delete(v13);
      }
    }
    else
    {
      Msg("CBaseFlex::AddSceneEvent:  event->GetActor() was NULL!!!\n", v12, v10, v11, pSceneEntity);
    }
  }
  else
  {
    Msg("CBaseFlex::AddSceneEvent:  scene or event was NULL!!!\n", scene, event, pTarget, pSceneEntity);
  }
}


// CBaseFlex::RequestStartSequenceSceneEvent  (line 182, @0x00000000021605c0, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CChoreoEvent::GetParameters, CBaseAnimating::LookupSequence, CChoreoActor::GetName, Warning
// callers: CBaseFlex::StartSceneEvent
// strings: "CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n"
bool __fastcall CBaseFlex::RequestStartSequenceSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor,
        CBaseEntity *pTarget)
{
  const char *Parameters; // rax
  HSequence v11; // eax
  const char *v13; // rbx
  const char *Name; // rax
  const char *m_pAsString; // rsi

  Parameters = CChoreoEvent::GetParameters(event);
  v11.m_Data = CBaseAnimating::LookupSequence(this, Parameters).m_Data;
  info->m_hSequence = v11;
  if ( v11.m_Data == -1 )
  {
    v13 = CChoreoEvent::GetParameters(event);
    Name = CChoreoActor::GetName(actor);
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n", m_pAsString, Name, v13);
    return 0;
  }
  else
  {
    info->m_iLayer = -2;
    info->m_pActor = actor;
    return 1;
  }
}


// CBaseFlex::RequestStartGestureSceneEvent  (line 200, @0x0000000002160660, libserver.so)  // inlines: CUtlSymbolLarge, GetEntityName
// calls: CChoreoEvent::GetParameters, CBaseAnimating::LookupSequence, CChoreoActor::GetName, Warning
// callers: CBaseFlex::StartSceneEvent
// strings: "CSceneEntity %s :\"%s\" unable to find gesture \"%s\"\n"
bool __fastcall CBaseFlex::RequestStartGestureSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor,
        CBaseEntity *pTarget)
{
  const char *Parameters; // rax
  HSequence v11; // eax
  const char *v13; // rbx
  const char *Name; // rax
  const char *m_pAsString; // rsi

  Parameters = CChoreoEvent::GetParameters(event);
  v11.m_Data = CBaseAnimating::LookupSequence(this, Parameters).m_Data;
  info->m_hSequence = v11;
  if ( v11.m_Data == -1 )
  {
    v13 = CChoreoEvent::GetParameters(event);
    Name = CChoreoActor::GetName(actor);
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CSceneEntity %s :\"%s\" unable to find gesture \"%s\"\n", m_pAsString, Name, v13);
    return 0;
  }
  else
  {
    info->m_iLayer = -2;
    info->m_pActor = actor;
    return 1;
  }
}


// CBaseFlex::HandleStartSequenceSceneEvent  (line 218, @0x0000000002160700, libserver.so)  // inlines: CUtlSymbolLarge, EnterSceneSequence, GetEntityName
// calls: CChoreoEvent::GetParameters, CBaseAnimating::LookupSequence, Warning, CChoreoEvent::GetPlayOverScript, CChoreoActor::GetName, CChoreoEvent::GetChannel, CChoreoActor::FindChannelIndex, CBaseFlex::GetScenePriority, CBaseAnimatingOverlay::AddLayeredSequence, CBaseAnimatingOverlay::SetLayerNoRestore, CBaseAnimatingOverlay::SetLayerWeight, CBaseAnimating::GetModelPtr (18 total)
// callers: CBaseFlex::ProcessSequenceSceneEvent
// strings: "Scene sequences are unavailable in Left4Dead.\n", "CSceneEntity %s :\"%s\" failed to start sequence \"%s\"\n", "CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n"
bool __fastcall CBaseFlex::HandleStartSequenceSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor)
{
  const char *Parameters; // rax
  HSequence v10; // eax
  bool PlayOverScript; // r14
  const char *v12; // r12
  const char *Name; // rax
  const char *m_pAsString; // rsi
  CChoreoChannel *Channel; // rax
  int ChannelIndex; // eax
  int v18; // r15d
  int ScenePriority; // eax
  int v20; // eax
  float v21; // xmm1_4
  const CModel *ModelPtr; // rax
  const ISequence *v23; // rax
  float v24; // xmm1_4
  char v25; // al
  const char *v26; // r12
  const char *v27; // rax
  const char *v28; // rsi
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float dta; // [rsp+8h] [rbp-38h]
  float dtb; // [rsp+8h] [rbp-38h]

  Parameters = CChoreoEvent::GetParameters(event);
  v10.m_Data = CBaseAnimating::LookupSequence(this, Parameters).m_Data;
  info->m_iLayer = -1;
  info->m_hSequence = v10;
  if ( v10.m_Data != -1 )
  {
    Warning("Scene sequences are unavailable in Left4Dead.\n");
    PlayOverScript = CChoreoEvent::GetPlayOverScript(event);
    if ( !PlayOverScript )
    {
      v12 = CChoreoEvent::GetParameters(event);
      Name = CChoreoActor::GetName(actor);
      m_pAsString = "";
      if ( this->m_pEntity->m_name.u.m_Id != 0 )
        m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
      Warning("CSceneEntity %s :\"%s\" failed to start sequence \"%s\"\n", m_pAsString, Name, v12);
      return PlayOverScript;
    }
    Channel = CChoreoEvent::GetChannel(event);
    ChannelIndex = CChoreoActor::FindChannelIndex(actor, Channel);
    info->m_iPriority = ChannelIndex;
    v18 = ChannelIndex;
    ScenePriority = CBaseFlex::GetScenePriority(this, scene);
    v20 = CBaseAnimatingOverlay::AddLayeredSequence(this, info->m_hSequence, v18 + ScenePriority);
    info->m_iLayer = v20;
    CBaseAnimatingOverlay::SetLayerNoRestore(this, v20, 1);
    CBaseAnimatingOverlay::SetLayerWeight(this, info->m_iLayer, 0.0, v21);
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    v23 = CModel::pSeqdesc(ModelPtr, info->m_hSequence);
    if ( (*(v23->_vptr_IBaseSequence + 13))(v23) != 0 )
    {
      CBaseAnimatingOverlay::SetLayerPlaybackRate(this, info->m_iLayer, 1.0, v24);
      v25 = (*(this->_vptr_IHandleEntity + 174))(this);
      if ( v25 == 0 )
      {
LABEL_9:
        info->m_flWeight = 1.0;
        return PlayOverScript;
      }
    }
    else
    {
      dta = CChoreoScene::GetTime(scene);
      dtb = dta - CChoreoEvent::GetStartTime(event);
      v29 = CBaseAnimating::SequenceDuration(this, info->m_hSequence);
      v30 = (dtb / v29) - (dtb / v29);
      CBaseAnimatingOverlay::SetLayerCycle(this, info->m_iLayer, v30, v30, v31);
      CBaseAnimatingOverlay::SetLayerPlaybackRate(this, info->m_iLayer, 0.0, v32);
      v25 = (*(this->_vptr_IHandleEntity + 174))(this);
      if ( v25 == 0 )
        goto LABEL_9;
    }
    info->m_flWeight = 0.0;
    return v25;
  }
  v26 = CChoreoEvent::GetParameters(event);
  v27 = CChoreoActor::GetName(actor);
  v28 = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    v28 = this->m_pEntity->m_name.u.m_pAsString;
  PlayOverScript = 0;
  Warning("CSceneEntity %s :\"%s\" unable to find sequence \"%s\"\n", v28, v27, v26);
  return PlayOverScript;
}


// CBaseFlex::HandleStartGestureSceneEvent  (line 276, @0x0000000002160960, libserver.so)  // inlines: CUtlString, CUtlSymbolLarge, GetEntityName, String, ToCStr, operator char const*, ~CUtlString
// calls: CChoreoEvent::GetParameters, CBaseAnimating::LookupSequence, CBaseAnimating::GetBaseAnimatingController, CBaseAnimatingController::GetSequenceKeyValues, CUtlString::Set, KeyValues::FindKey, KeyValues::GetString, V_stricmp_fast, KeyValues::GetFirstSubKey, CUtlString::operator=, KeyValues::GetNextKey, KeyValues::GetName (37 total)
// callers: CBaseFlex::ProcessGestureSceneEvent
// strings: "faceposer", "startloop", "endloop", "CSceneEntity %s :\"%s\" unable to find gesture \"%s\"\n", "vcd error, gesture %s of model %s is marked as STUDIO_LOOPING!\n"
bool __fastcall CBaseFlex::HandleStartGestureSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor)
{
  const char *Parameters; // rax
  HSequence v9; // eax
  CBaseAnimatingController *BaseAnimatingController; // rax
  KeyValues *SequenceKeyValues; // rbx
  KeyValues *Key; // rax
  const KeyValues *v13; // rbx
  KeyValues *v14; // rax
  const char *String; // rax
  KeyValues *i; // rax
  const char *v17; // rax
  KeyValues *v18; // rbx
  const char *v19; // rax
  const char *v20; // rax
  const char *v21; // rax
  const char *v22; // rax
  CEventAbsoluteTag *AbsoluteTag; // rax
  const char *v24; // rax
  CEventAbsoluteTag *v25; // rax
  const char *v26; // rax
  CEventAbsoluteTag *v27; // rax
  const char *v28; // rax
  CEventAbsoluteTag *v29; // rax
  CChoreoChannel *Channel; // rax
  int ChannelIndex; // eax
  int v32; // ebx
  int ScenePriority; // eax
  int v34; // eax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  const CModel *ModelPtr; // rax
  const ISequence *v39; // rax
  float v40; // xmm1_4
  float OriginalPercentageFromPlaybackPercentage; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  const char *v45; // rbx
  const char *Name; // rax
  const char *m_pAsString; // rsi
  char *m_pString; // rbx
  const char *v49; // rax
  KeyValues *seqKeyValues; // [rsp+0h] [rbp-70h]
  CUtlString szStartLoop; // [rsp+20h] [rbp-50h] BYREF
  CUtlString szEndLoop; // [rsp+30h] [rbp-40h] BYREF

  Parameters = CChoreoEvent::GetParameters(event);
  v9.m_Data = CBaseAnimating::LookupSequence(this, Parameters).m_Data;
  info->m_iLayer = -1;
  info->m_hSequence = v9;
  if ( v9.m_Data == -1 )
  {
    v45 = CChoreoEvent::GetParameters(event);
    Name = CChoreoActor::GetName(actor);
    m_pAsString = "";
    if ( this->m_pEntity->m_name.u.m_Id != 0 )
      m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
    Warning("CSceneEntity %s :\"%s\" unable to find gesture \"%s\"\n", m_pAsString, Name, v45);
    return 0;
  }
  else
  {
    info->m_bIsGesture = 0;
    BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(this);
    SequenceKeyValues = CBaseAnimatingController::GetSequenceKeyValues(BaseAnimatingController, info->m_hSequence);
    seqKeyValues = SequenceKeyValues;
    if ( SequenceKeyValues != 0 )
    {
      szStartLoop.m_pString = 0;
      CUtlString::Set(&szStartLoop, "loop");
      szEndLoop.m_pString = 0;
      CUtlString::Set(&szEndLoop, "end");
      Key = KeyValues::FindKey(SequenceKeyValues, "faceposer", 0);
      v13 = Key;
      if ( Key != 0 )
      {
        v14 = KeyValues::FindKey(Key, "type", 0);
        if ( v14 != 0 )
        {
          String = KeyValues::GetString(v14, 0, "", 0, 0);
          info->m_bIsGesture = V_stricmp_fast(String, "gesture") == 0;
        }
        for ( i = KeyValues::GetFirstSubKey(v13); ; i = KeyValues::GetNextKey(v18) )
        {
          v18 = i;
          if ( i == 0 )
            break;
          v19 = KeyValues::GetName(i);
          if ( V_stricmp_fast(v19, "startloop") != 0 )
          {
            v20 = KeyValues::GetName(v18);
            if ( V_stricmp_fast(v20, "endloop") == 0 )
            {
              v21 = KeyValues::GetString(v18, 0, "", 0, 0);
              CUtlString::operator=(&szEndLoop, v21);
            }
          }
          else
          {
            v17 = KeyValues::GetString(v18, 0, "", 0, 0);
            CUtlString::operator=(&szStartLoop, v17);
          }
        }
      }
      v22 = CUtlString::Get(&szStartLoop);
      AbsoluteTag = CChoreoEvent::FindAbsoluteTag(event, ORIGINAL, v22);
      if ( AbsoluteTag != 0 )
        CEventAbsoluteTag::SetLinear(AbsoluteTag, 1);
      v24 = CUtlString::Get(&szStartLoop);
      v25 = CChoreoEvent::FindAbsoluteTag(event, PLAYBACK, v24);
      if ( v25 != 0 )
        CEventAbsoluteTag::SetLinear(v25, 1);
      v26 = CUtlString::Get(&szEndLoop);
      v27 = CChoreoEvent::FindAbsoluteTag(event, ORIGINAL, v26);
      if ( v27 != 0 )
        CEventAbsoluteTag::SetLinear(v27, 1);
      v28 = CUtlString::Get(&szEndLoop);
      v29 = CChoreoEvent::FindAbsoluteTag(event, PLAYBACK, v28);
      if ( v29 != 0 )
        CEventAbsoluteTag::SetLinear(v29, 1);
      KeyValues::deleteThis(seqKeyValues);
      if ( szEndLoop.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&szEndLoop);
      if ( szStartLoop.m_pString != 0 )
        CUtlString::FreeMemoryBlock(&szStartLoop);
    }
    if ( info->m_bIsGesture || (*(this->_vptr_IHandleEntity + 174))(this) == 0 )
      info->m_flWeight = 1.0;
    else
      info->m_flWeight = 0.0;
    Channel = CChoreoEvent::GetChannel(event);
    ChannelIndex = CChoreoActor::FindChannelIndex(actor, Channel);
    info->m_iPriority = ChannelIndex;
    v32 = ChannelIndex;
    ScenePriority = CBaseFlex::GetScenePriority(this, scene);
    v34 = CBaseAnimatingOverlay::AddLayeredSequence(this, info->m_hSequence, v32 + ScenePriority);
    info->m_iLayer = v34;
    CBaseAnimatingOverlay::SetLayerNoRestore(this, v34, 1);
    v35 = (*(event->_vptr_CChoreoObjectBase + 8))(event);
    CBaseAnimatingOverlay::SetLayerDuration(this, info->m_iLayer, v35, v36);
    CBaseAnimatingOverlay::SetLayerWeight(this, info->m_iLayer, 0.0, v37);
    ModelPtr = CBaseAnimating::GetModelPtr(this);
    v39 = CModel::pSeqdesc(ModelPtr, info->m_hSequence);
    if ( (*(v39->_vptr_IBaseSequence + 13))(v39) != 0 )
    {
      CBaseEntity::GetModelName(&szEndLoop, this);
      m_pString = "";
      if ( szEndLoop.m_pString != 0 )
        m_pString = szEndLoop.m_pString;
      v49 = CChoreoEvent::GetParameters(event);
      DevMsg(1, "vcd error, gesture %s of model %s is marked as STUDIO_LOOPING!\n", v49, m_pString);
    }
    CBaseAnimatingOverlay::SetLayerLooping(this, info->m_iLayer, 0);
    (*(event->_vptr_CChoreoObjectBase + 8))(event);
    CChoreoScene::GetTime(scene);
    CChoreoEvent::GetStartTime(event);
    OriginalPercentageFromPlaybackPercentage = CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage(event, v40);
    CBaseAnimatingOverlay::SetLayerCycle(this, info->m_iLayer, OriginalPercentageFromPlaybackPercentage, 0.0, v42);
    CBaseAnimatingOverlay::SetLayerPlaybackRate(this, info->m_iLayer, 0.0, v43);
    return 1;
  }
}


// CBaseFlex::StartFacingSceneEvent  (line 434, @0x0000000002160df0, libserver.so)
bool __fastcall CBaseFlex::StartFacingSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor,
        CBaseEntity *pTarget)
{
  if ( pTarget == 0 )
    return 0;
  info->m_bIsMoving = 0;
  return 1;
}


// CBaseFlex::StartMoveToSceneEvent  (line 453, @0x0000000002160e10, libserver.so)
bool __fastcall CBaseFlex::StartMoveToSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor,
        CBaseEntity *pTarget)
{
  if ( pTarget != 0 )
  {
    info->m_bIsMoving = 0;
    info->m_bHasArrived = 0;
    (*(this->_vptr_IHandleEntity + 144))(this, info, scene, event, actor);
  }
  return 0;
}


// CBaseFlex::StartSceneEvent  (line 489, @0x00000000021615f0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, InitWeight, Set, StartFacingSceneEvent, StartMoveToSceneEvent, operator=
// calls: CChoreoEvent::GetType, CBaseFlex::RequestStartGestureSceneEvent, CBaseFlex::RequestStartSequenceSceneEvent, CBaseFlex::IsSuppressedFlexAnimation
// globals: jpt_2161639
bool __fastcall CBaseFlex::StartSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event,
        CChoreoActor *actor,
        CBaseEntity *pTarget)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  char IsSuppressedFlexAnimation; // bl
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx

  switch ( CChoreoEvent::GetType(event) )
  {
    case EXPRESSION:
    case SPEAK:
      return 1;
    case LOOKAT:
      if ( pTarget != 0 && (m_pEntity = pTarget->m_pEntity) != 0 )
      {
        v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v18 = 0x7FFF;
        else
          v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        IsSuppressedFlexAnimation = 1;
        LOWORD(info->m_hTarget.m_Index) = v18 | info->m_hTarget.m_Index & 0x8000;
        info->m_hTarget.m_Index = (v17 << 15) | info->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info->m_hTarget.m_Index = -1;
        return 1;
      }
      return IsSuppressedFlexAnimation;
    case MOVETO:
      IsSuppressedFlexAnimation = 0;
      if ( pTarget != 0 )
      {
        info->m_bIsMoving = 0;
        info->m_bHasArrived = 0;
        (*(this->_vptr_IHandleEntity + 144))(this, v13, v11, v12, actor);
      }
      return IsSuppressedFlexAnimation;
    case GESTURE:
      return CBaseFlex::RequestStartGestureSceneEvent(this, info, scene, event, actor, pTarget);
    case SEQUENCE:
      return CBaseFlex::RequestStartSequenceSceneEvent(this, info, scene, event, actor, pTarget);
    case FACE:
      if ( pTarget == 0 )
        goto LABEL_18;
      info->m_bIsMoving = 0;
      IsSuppressedFlexAnimation = 1;
      break;
    case FLEXANIMATION:
      IsSuppressedFlexAnimation = CBaseFlex::IsSuppressedFlexAnimation(this, info);
      if ( IsSuppressedFlexAnimation != 0 )
      {
        info->m_flWeight = 0.0;
      }
      else
      {
        info->m_flWeight = 1.0;
        return 1;
      }
      return IsSuppressedFlexAnimation;
    default:
LABEL_18:
      IsSuppressedFlexAnimation = 0;
      break;
  }
  return IsSuppressedFlexAnimation;
}


// CBaseFlex::CheckSceneEventCompletion  (line 527, @0x0000000002140340, libserver.so)
// calls: CChoreoEvent::GetType
__int64 __fastcall CBaseFlex::CheckSceneEventCompletion(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        float currenttime,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  CChoreoEvent::GetType(event);
  return 1;
}


// CBaseFlex::ProcessSceneEvents  (line 592, @0x00000000021421d0, libserver.so)
// calls: CBaseFlex::GetFlexWeight, CBaseFlex::SetFlexWeight, CBaseAnimating::GetNumFlexControllers, CChoreoScene::IsBackground
void __fastcall CBaseFlex::ProcessSceneEvents(CBaseFlex *const this)
{
  LocalFlexController_t v1; // r13d
  float v3; // xmm0_4
  float v4; // xmm1_4
  LocalFlexController_t v5; // r12d
  __int64 v6; // r15
  int i; // r14d
  CSceneEventInfo *v8; // r12
  CChoreoScene *m_pScene; // r13
  CChoreoEvent *m_pEvent; // rcx
  CChoreoEvent *event; // [rsp+8h] [rbp-38h]

  v1 = 0;
  while ( 1 )
  {
    v5 = v1++;
    if ( v5 >= CBaseAnimating::GetNumFlexControllers(this) )
      break;
    v3 = CBaseFlex::GetFlexWeight(this, v5) * 0.95;
    CBaseFlex::SetFlexWeight(this, v5, v3, v4);
  }
  v6 = 0;
  for ( i = 0; this->m_SceneEvents.m_Size > i; ++v6 )
  {
    v8 = this->m_SceneEvents.m_Memory.m_pMemory[v6];
    m_pScene = v8->m_pScene;
    m_pEvent = v8->m_pEvent;
    if ( m_pScene != 0 )
    {
      event = v8->m_pEvent;
      CChoreoScene::IsBackground(v8->m_pScene);
      m_pEvent = event;
    }
    if ( (*(this->_vptr_IHandleEntity + 254))(this, v8, m_pScene, m_pEvent) != 0 )
      v8->m_bStarted = 1;
    ++i;
  }
  this->m_bUpdateLayerPriorities = 0;
}


// CBaseFlex::ProcessFlexAnimationSceneEvent  (line 653, @0x0000000002161c70, libserver.so)
// calls: CChoreoEvent::HasEndTime, CBaseFlex::AddFlexAnimation
bool __fastcall CBaseFlex::ProcessFlexAnimationSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  if ( CChoreoEvent::HasEndTime(event) )
    CBaseFlex::AddFlexAnimation(this, info);
  return 1;
}


// CBaseFlex::ProcessFacingSceneEvent  (line 704, @0x0000000002160e40, libserver.so)  // inlines: EnterSceneSequence, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>
// calls: Warning
// strings: "Scene sequences are unavailable in Left4Dead.\n"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CBaseFlex::ProcessFacingSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = info->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return 0;
  v6 = &v5[info->m_hTarget.m_Index & 0x1FF];
  if ( v6 == 0 || m_Index != v6->m_EHandle.m_Index || v6->m_pInstance == 0 )
    return 0;
  Warning("Scene sequences are unavailable in Left4Dead.\n");
  return 0;
}


// CBaseFlex::ProcessMoveToSceneEvent  (line 817, @0x0000000002160eb0, libserver.so)
// calls: Warning
// strings: "Choreo MOVETO is unavailable in Left4Dead."
bool __fastcall CBaseFlex::ProcessMoveToSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  Warning("Choreo MOVETO is unavailable in Left4Dead.", info, scene, event);
  return 0;
}


// CBaseFlex::ProcessLookAtSceneEvent  (line 822, @0x0000000002160ed0, libserver.so)
// calls: Warning
// strings: "Choreo LOOKAT is unavailable in Left4Dead."
bool __fastcall CBaseFlex::ProcessLookAtSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  Warning("Choreo LOOKAT is unavailable in Left4Dead.", info, scene, event);
  return 0;
}


// CBaseFlex::ProcessMoveRelativeSceneEvent  (line 827, @0x0000000002160ef0, libserver.so)
// calls: Warning
// strings: "Choreo MoveRelativeSceneEvent is unavailable in Left4Dead."
bool __fastcall CBaseFlex::ProcessMoveRelativeSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  Warning("Choreo MoveRelativeSceneEvent is unavailable in Left4Dead.", info, scene, event);
  return 0;
}


// CBaseFlex::ProcessSceneEvent  (line 1138, @0x0000000002161ca0, libserver.so)  // inlines: EnterSceneSequence, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ProcessFacingSceneEvent, ProcessFlexAnimationSceneEvent, ProcessLookAtSceneEvent, ProcessMoveToSceneEvent, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CChoreoEvent::GetType, CChoreoEvent::HasEndTime, CBaseFlex::ProcessGestureSceneEvent, CBaseFlex::ProcessSequenceSceneEvent, Warning, CBaseFlex::ProcessFlexSettingSceneEvent, Msg, CBaseFlex::AddFlexAnimation
// strings: "Scene sequences are unavailable in Left4Dead.\n", "Choreo LOOKAT is unavailable in Left4Dead.", "Choreo MOVETO is unavailable in Left4Dead.", "unknown type %d in ProcessSceneEvent()\n"
// globals: jpt_2161CD8, CEntityHandle::gm_pEntityList
bool __fastcall CBaseFlex::ProcessSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  bool HasEndTime; // bl
  bool result; // al
  uint32 m_Index; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  EventNameMap_t::EVENTTYPE Type; // eax

  switch ( CChoreoEvent::GetType(event) )
  {
    case EXPRESSION:
      return CBaseFlex::ProcessFlexSettingSceneEvent(this, info, scene, event);
    case LOOKAT:
      Warning("Choreo LOOKAT is unavailable in Left4Dead.");
      return 0;
    case MOVETO:
      Warning("Choreo MOVETO is unavailable in Left4Dead.");
      return 0;
    case SPEAK:
      goto LABEL_3;
    case GESTURE:
      return CBaseFlex::ProcessGestureSceneEvent(this, info, scene, event);
    case SEQUENCE:
      return CBaseFlex::ProcessSequenceSceneEvent(this, info, scene, event);
    case FACE:
      m_Index = info->m_hTarget.m_Index;
      HasEndTime = 0;
      if ( m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(info->m_hTarget.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[info->m_hTarget.m_Index & 0x1FF];
          if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index && v12->m_pInstance != 0 )
            Warning("Scene sequences are unavailable in Left4Dead.\n");
        }
      }
      goto LABEL_4;
    case FLEXANIMATION:
      HasEndTime = CChoreoEvent::HasEndTime(event);
      if ( HasEndTime )
        CBaseFlex::AddFlexAnimation(this, info);
      else
LABEL_3:
        HasEndTime = 1;
LABEL_4:
      result = HasEndTime;
      break;
    default:
      Type = CChoreoEvent::GetType(event);
      Msg("unknown type %d in ProcessSceneEvent()\n", Type);
      result = 0;
      break;
  }
  return result;
}


// CBaseFlex::IsRunningSceneMoveToEvent  (line 1179, @0x0000000002160f10, libserver.so)
// calls: CChoreoEvent::GetType
bool __fastcall CBaseFlex::IsRunningSceneMoveToEvent(const CBaseFlex *const this)
{
  int v2; // eax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r12
  CChoreoEvent *m_pEvent; // rdi

  v2 = this->m_SceneEvents.m_Size - 1;
  if ( v2 < 0 )
    return 0;
  v3 = 8LL * v2;
  v4 = 8 * (v2 - v2) - 8;
  while ( 1 )
  {
    m_pEvent = this->m_SceneEvents.m_Memory.m_pMemory[v3 / 8]->m_pEvent;
    if ( m_pEvent != 0 && CChoreoEvent::GetType(m_pEvent) == MOVETO )
      break;
    v3 -= 8LL;
    if ( v3 == v4 )
      return 0;
  }
  return 1;
}


// CBaseFlex::AddFlexAnimation  (line 1195, @0x00000000021618b0, libserver.so)  // inlines: V_strncat<long unsigned int>, V_strncpy<long unsigned int>
// calls: CChoreoEvent::GetTrackLookupSet, CChoreoScene::GetTime, CChoreoEvent::GetIntensity, CSceneEventInfo::UpdateWeight, CChoreoEvent::GetNumFlexAnimationTracks, CChoreoEvent::GetFlexAnimationTrack, CFlexAnimationTrack::IsTrackActive, CFlexAnimationTrack::IsComboType, CFlexAnimationTrack::GetRawFlexControllerIndex, CFlexAnimationTrack::GetIntensity, CBaseFlex::GetFlexWeight, CBaseFlex::SetFlexWeight (20 total)
// callers: CBaseFlex::ProcessFlexAnimationSceneEvent, CBaseFlex::ProcessSceneEvent
// strings: "right_", "left_"
void __fastcall CBaseFlex::AddFlexAnimation(CBaseFlex *const this, CSceneEventInfo *info)
{
  CChoreoEvent *m_pEvent; // r14
  int v3; // r12d
  float v4; // xmm1_4
  CFlexAnimationTrack *v5; // rax
  const CFlexAnimationTrack *v6; // rbx
  FlexExpressionTrackType_t v7; // r13d
  LocalFlexController_t RawFlexControllerIndex; // r15d
  float v9; // xmm1_4
  float FlexWeight; // xmm0_4
  int i; // r12d
  const char *FlexControllerName; // rax
  LocalFlexController_t FlexController; // eax
  const char *v14; // rax
  LocalFlexController_t v15; // eax
  CFlexAnimationTrack *FlexAnimationTrack; // rax
  CFlexAnimationTrack *v17; // rbx
  const char *v18; // rax
  LocalFlexController_t v19; // eax
  LocalFlexController_t v20; // r13d
  float v21; // xmm1_4
  float v22; // xmm0_4
  float weighta; // [rsp+8h] [rbp-258h]
  float weight; // [rsp+8h] [rbp-258h]
  CChoreoScene *flIntensity; // [rsp+10h] [rbp-250h]
  float flIntensitya; // [rsp+10h] [rbp-250h]
  float flIntensityb; // [rsp+10h] [rbp-250h]
  char name[520]; // [rsp+20h] [rbp-240h] BYREF
  unsigned __int64 v31; // [rsp+228h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( info != 0 )
  {
    m_pEvent = info->m_pEvent;
    if ( info->m_pEvent != 0 )
    {
      flIntensity = info->m_pScene;
      if ( flIntensity != 0 )
      {
        if ( !CChoreoEvent::GetTrackLookupSet(m_pEvent) )
        {
          for ( i = 0; i < CChoreoEvent::GetNumFlexAnimationTracks(m_pEvent); ++i )
          {
            FlexAnimationTrack = CChoreoEvent::GetFlexAnimationTrack(m_pEvent, i);
            v17 = FlexAnimationTrack;
            if ( FlexAnimationTrack != 0 )
            {
              if ( CFlexAnimationTrack::IsComboType(FlexAnimationTrack) )
              {
                _V_strncpy(name, "right_", 512);
                FlexControllerName = CFlexAnimationTrack::GetFlexControllerName(v17);
                _V_strncat(name, FlexControllerName, 512, 0xFFFFFFFFLL);
                FlexController = CBaseFlex::FindFlexController(this, name);
                CFlexAnimationTrack::SetFlexControllerIndex(
                  v17,
                  FlexController,
                  0,
                  FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
                _V_strncpy(name, "left_", 512);
                v14 = CFlexAnimationTrack::GetFlexControllerName(v17);
                _V_strncat(name, v14, 512, 0xFFFFFFFFLL);
                v15 = CBaseFlex::FindFlexController(this, name);
                CFlexAnimationTrack::SetFlexControllerIndex(
                  v17,
                  v15,
                  0,
                  FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_LEFTRIGHT);
              }
              else
              {
                v18 = CFlexAnimationTrack::GetFlexControllerName(v17);
                v19 = CBaseFlex::FindFlexController(this, v18);
                CFlexAnimationTrack::SetFlexControllerIndex(
                  v17,
                  v19,
                  0,
                  FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
              }
            }
          }
          CChoreoEvent::SetTrackLookupSet(m_pEvent, 1);
        }
        v3 = 0;
        CChoreoScene::GetTime(flIntensity);
        weighta = CChoreoEvent::GetIntensity(m_pEvent, v4);
        weight = weighta * CSceneEventInfo::UpdateWeight(info, this);
        if ( CChoreoEvent::GetNumFlexAnimationTracks(m_pEvent) > 0 )
        {
          do
          {
            v5 = CChoreoEvent::GetFlexAnimationTrack(m_pEvent, v3);
            v6 = v5;
            if ( v5 != 0 && CFlexAnimationTrack::IsTrackActive(v5) )
            {
              if ( g_bClientFlex && !CFlexAnimationTrack::IsServerSide(v6) )
              {
                ++v3;
                continue;
              }
              v7 = FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY;
              if ( CFlexAnimationTrack::IsComboType(v6) )
              {
                do
                {
                  RawFlexControllerIndex = CFlexAnimationTrack::GetRawFlexControllerIndex(v6, v7);
                  flIntensitya = CFlexAnimationTrack::GetIntensity(v6, v9, v7);
                  if ( RawFlexControllerIndex >= 0 )
                  {
                    FlexWeight = CBaseFlex::GetFlexWeight(this, RawFlexControllerIndex);
                    CBaseFlex::SetFlexWeight(
                      this,
                      RawFlexControllerIndex,
                      (FlexWeight * (1.0 - weight)) + (flIntensitya * weight),
                      (FlexWeight * (1.0 - weight)) + (flIntensitya * weight));
                  }
                  ++v7;
                }
                while ( v7 != FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_TYPE_COUNT );
              }
              else
              {
                v20 = CFlexAnimationTrack::GetRawFlexControllerIndex(
                        v6,
                        FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
                flIntensityb = CFlexAnimationTrack::GetIntensity(
                                 v6,
                                 v21,
                                 FlexExpressionTrackType_t::FLEX_EXPRESSION_TRACK_INTENSITY);
                if ( v20 >= 0 )
                {
                  v22 = CBaseFlex::GetFlexWeight(this, v20);
                  CBaseFlex::SetFlexWeight(
                    this,
                    v20,
                    (v22 * (1.0 - weight)) + (flIntensityb * weight),
                    (v22 * (1.0 - weight)) + (flIntensityb * weight));
                }
              }
            }
            ++v3;
          }
          while ( v3 < CChoreoEvent::GetNumFlexAnimationTracks(m_pEvent) );
        }
        info->m_bStarted = 1;
      }
    }
  }
}


// CBaseFlex::ProcessGestureSceneEvent  (line 1331, @0x0000000002160f90, libserver.so)
// calls: CChoreoScene::GetTime, CChoreoEvent::GetStartTime, CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage, CBaseAnimatingOverlay::SetLayerCycle, CChoreoEvent::GetIntensity, CBaseAnimatingOverlay::SetLayerWeight, CBaseFlex::HandleStartGestureSceneEvent, CBaseFlex::GetScenePriority, CBaseAnimatingOverlay::SetLayerPriority
// callers: CBaseFlex::ProcessSceneEvent
bool __fastcall CBaseFlex::ProcessGestureSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  bool m_bUpdateLayerPriorities; // r13
  int m_iLayer; // eax
  float v10; // xmm1_4
  float OriginalPercentageFromPlaybackPercentage; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float Intensity; // xmm0_4
  float v15; // xmm1_4
  int m_iPriority; // r12d
  int ScenePriority; // eax
  char v19; // al
  double v20; // xmm2_8
  float v21; // xmm2_4
  __m128d v22; // xmm1
  float flWeight; // [rsp+Ch] [rbp-34h]

  m_bUpdateLayerPriorities = event == 0 || info == 0;
  if ( m_bUpdateLayerPriorities )
    return 0;
  if ( scene != 0 )
  {
    m_iLayer = info->m_iLayer;
    if ( m_iLayer == -2 )
    {
      CBaseFlex::HandleStartGestureSceneEvent(this, info, scene, event, info->m_pActor);
      m_iLayer = info->m_iLayer;
    }
    if ( m_iLayer < 0 )
      return 1;
    (*(event->_vptr_CChoreoObjectBase + 8))(event);
    CChoreoScene::GetTime(scene);
    CChoreoEvent::GetStartTime(event);
    OriginalPercentageFromPlaybackPercentage = CChoreoEvent::GetOriginalPercentageFromPlaybackPercentage(event, v10);
    CBaseAnimatingOverlay::SetLayerCycle(this, info->m_iLayer, OriginalPercentageFromPlaybackPercentage, v12);
    CChoreoScene::GetTime(scene);
    Intensity = CChoreoEvent::GetIntensity(event, v13);
    if ( info->m_bIsGesture )
    {
      v15 = ((3.0 * info->m_flWeight) * info->m_flWeight)
          - (((info->m_flWeight + info->m_flWeight) * info->m_flWeight) * info->m_flWeight);
      goto LABEL_8;
    }
    flWeight = Intensity;
    v19 = (*(this->_vptr_IHandleEntity + 174))(this);
    Intensity = flWeight;
    if ( v19 != 0 )
    {
      v20 = info->m_flWeight - 0.2;
      if ( v20 <= 0.0 )
      {
        v15 = 0.0;
        v21 = 0.0;
        goto LABEL_16;
      }
    }
    else
    {
      v22 = _mm_cvtps_pd(LODWORD(info->m_flWeight));
      v22.m128d_f64[0] = v22.m128d_f64[0] + 0.2;
      if ( v22.m128d_f64[0] >= 1.0 )
      {
        v15 = 1.0;
        v21 = 1.0;
        goto LABEL_16;
      }
      v20 = _mm_movedup_pd(v22).m128d_f64[0];
    }
    v21 = v20;
    v15 = ((3.0 * v21) * v21) - (((v21 + v21) * v21) * v21);
LABEL_16:
    info->m_flWeight = v21;
LABEL_8:
    CBaseAnimatingOverlay::SetLayerWeight(this, info->m_iLayer, Intensity * v15, v15);
    m_bUpdateLayerPriorities = this->m_bUpdateLayerPriorities;
    if ( m_bUpdateLayerPriorities )
    {
      m_iPriority = info->m_iPriority;
      ScenePriority = CBaseFlex::GetScenePriority(this, scene);
      CBaseAnimatingOverlay::SetLayerPriority(this, info->m_iLayer, m_iPriority + ScenePriority);
      return m_bUpdateLayerPriorities;
    }
    return 1;
  }
  return m_bUpdateLayerPriorities;
}


// CBaseFlex::ProcessSequenceSceneEvent  (line 1404, @0x00000000021611a0, libserver.so)
// calls: CChoreoScene::GetTime, CChoreoEvent::GetIntensity, CBaseAnimatingOverlay::SetLayerWeight, CBaseAnimating::GetModelPtr, CModel::pSeqdesc, CBaseFlex::GetScenePriority, CBaseAnimatingOverlay::SetLayerPriority, CBaseFlex::HandleStartSequenceSceneEvent, CChoreoEvent::GetStartTime, CBaseAnimating::SequenceDuration, CBaseAnimatingOverlay::SetLayerCycle
// callers: CBaseFlex::ProcessSceneEvent
bool __fastcall CBaseFlex::ProcessSequenceSceneEvent(
        CBaseFlex *const this,
        CSceneEventInfo *info,
        CChoreoScene *scene,
        CChoreoEvent *event)
{
  int m_iLayer; // eax
  char v8; // r15
  float v10; // xmm1_4
  float Intensity; // xmm0_4
  __m128d v12; // xmm1
  float v13; // xmm1_4
  float v14; // xmm2_4
  int v15; // esi
  const CModel *ModelPtr; // rax
  const ISequence *v17; // rax
  bool m_bUpdateLayerPriorities; // r13
  int m_iPriority; // r15d
  int ScenePriority; // eax
  double v22; // xmm2_8
  __m128i v23; // xmm0
  unsigned int v24; // r15d
  float StartTime; // xmm0_4
  __m128i v26; // xmm4
  float v27; // r15d
  float v28; // xmm0_4
  float v29; // xmm1_4
  float flWeight; // [rsp+Ch] [rbp-34h]

  if ( info != 0 && event != 0 && scene != 0 )
  {
    m_iLayer = info->m_iLayer;
    v8 = 0;
    if ( m_iLayer != -2 )
      goto LABEL_5;
    if ( CBaseFlex::HandleStartSequenceSceneEvent(this, info, scene, event, info->m_pActor) )
    {
      m_iLayer = info->m_iLayer;
      v8 = 1;
LABEL_5:
      if ( m_iLayer < 0 )
        return 1;
      CChoreoScene::GetTime(scene);
      Intensity = CChoreoEvent::GetIntensity(event, v10);
      if ( v8 != 0 )
        Intensity = 0.0;
      flWeight = Intensity;
      if ( (*(this->_vptr_IHandleEntity + 174))(this) == 0 )
      {
        v12 = _mm_cvtps_pd(LODWORD(info->m_flWeight));
        v12.m128d_f64[0] = v12.m128d_f64[0] + 0.2;
        if ( v12.m128d_f64[0] >= 1.0 )
        {
          v13 = 1.0;
          v14 = 1.0;
          goto LABEL_11;
        }
        v22 = _mm_movedup_pd(v12).m128d_f64[0];
        goto LABEL_19;
      }
      v22 = info->m_flWeight - 0.2;
      if ( v22 > 0.0 )
      {
LABEL_19:
        v14 = v22;
        v13 = ((3.0 * v14) * v14) - (((v14 + v14) * v14) * v14);
        goto LABEL_11;
      }
      v13 = 0.0;
      v14 = 0.0;
LABEL_11:
      v15 = info->m_iLayer;
      info->m_flWeight = v14;
      CBaseAnimatingOverlay::SetLayerWeight(this, v15, flWeight * v13, v13);
      ModelPtr = CBaseAnimating::GetModelPtr(this);
      v17 = CModel::pSeqdesc(ModelPtr, info->m_hSequence);
      if ( (*(v17->_vptr_IBaseSequence + 13))(v17) == 0 )
      {
        *v23.m128i_i32 = CChoreoScene::GetTime(scene);
        v24 = _mm_cvtsi128_si32(v23);
        StartTime = CChoreoEvent::GetStartTime(event);
        v26 = _mm_cvtsi32_si128(v24);
        *v26.m128i_i32 = *v26.m128i_i32 - StartTime;
        v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
        v28 = CBaseAnimating::SequenceDuration(this, info->m_hSequence);
        v29 = 1.0;
        if ( (v27 / v28) <= 1.0 )
          v29 = fmaxf(0.0, v27 / v28);
        CBaseAnimatingOverlay::SetLayerCycle(this, info->m_iLayer, v29, v29);
      }
      m_bUpdateLayerPriorities = this->m_bUpdateLayerPriorities;
      if ( !m_bUpdateLayerPriorities )
        return 1;
      m_iPriority = info->m_iPriority;
      ScenePriority = CBaseFlex::GetScenePriority(this, scene);
      CBaseAnimatingOverlay::SetLayerPriority(this, info->m_iLayer, m_iPriority + ScenePriority);
      return m_bUpdateLayerPriorities;
    }
  }
  return 0;
}


// CBaseFlex::PermitResponse  (line 1489, @0x00000000021613f0, libserver.so)  // inlines: curtime
bool __fastcall CBaseFlex::PermitResponse(const CBaseFlex *const this, float a2, float response_length)
{
  float m_flCurrentTime; // xmm2_4
  bool result; // al
  float m_flAllowResponsesEndTime; // xmm1_4
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  float v9; // [rsp-14h] [rbp-1Ch]

  m_flCurrentTime = 0.0;
  result = 0;
  m_flAllowResponsesEndTime = this->m_flAllowResponsesEndTime;
  if ( m_flAllowResponsesEndTime > 0.0 )
  {
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
        {
          v9 = a2;
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
          a2 = v9;
          m_flAllowResponsesEndTime = this->m_flAllowResponsesEndTime;
        }
      }
      m_flCurrentTime = v7->m_flCurrentTime;
    }
    return m_flAllowResponsesEndTime >= (a2 + m_flCurrentTime);
  }
  return result;
}


// CBaseFlex::SetPermitResponse  (line 1511, @0x0000000002161470, libserver.so)
// callers: CSceneEntity::DispatchEndPermitResponses, CSceneEntity::DispatchStartPermitResponses
void __fastcall CBaseFlex::SetPermitResponse(CBaseFlex *const this, float a2, float endtime)
{
  this->m_flAllowResponsesEndTime = a2;
}


// CBaseFlex::SentenceStop  (line 1523, @0x0000000002161480, libserver.so)
// calls: CBaseEntity::EmitSound
// strings: "AI_BaseNPC.SentenceStop"
void __fastcall CBaseFlex::SentenceStop(CBaseFlex *const this)
{
  CBaseEntity::EmitSound(this, "AI_BaseNPC.SentenceStop", 0.0, 0);
}


// CBaseFlex::PlayScene  (line 1533, @0x00000000021402b0, libserver.so)
// calls: InstancedScriptedScene
float __fastcall CBaseFlex::PlayScene(
        CBaseFlex *const this,
        const char *pszScene,
        float flDelay,
        AI_Response *response,
        IRecipientFilter *filter)
{
  return InstancedScriptedScene(this, pszScene, 0, flDelay, 0, response, 0, filter);
}


// CBaseFlex::ScriptPlayScene  (line 1538, @0x00000000021402d0, libserver.so)
// calls: InstancedScriptedScene
float __fastcall CBaseFlex::ScriptPlayScene(CBaseFlex *const this, const char *pszScene, float a3, float flDelay)
{
  return InstancedScriptedScene(this, pszScene, 0, a3, 0, 0, 0, 0);
}


// CBaseFlex::PlayAutoGeneratedSoundScene  (line 1548, @0x0000000002140360, libserver.so)
// calls: InstancedAutoGeneratedSoundScene
float __fastcall CBaseFlex::PlayAutoGeneratedSoundScene(CBaseFlex *const this, const char *soundname)
{
  return InstancedAutoGeneratedSoundScene(this, soundname, 0);
}


// CBaseFlex::ScriptGetOldestScene  (line 1557, @0x0000000002143ad0, libserver.so)  // inlines: EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, LookupEntity, ToHScript, operator CEntityInstance*
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CBaseFlex::ScriptGetOldestScene(CBaseFlex *const this)
{
  CSceneEventInfo *v1; // rcx
  HSCRIPT result; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // si
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CEntityInstance *m_pInstance; // rbx

  if ( this->m_SceneEvents.m_Size <= 0 )
    return 0;
  v1 = *this->m_SceneEvents.m_Memory.m_pMemory;
  result = 0;
  m_Index = v1->m_hSceneEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = v1->m_hSceneEntity.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 )
        {
          result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          if ( result == 0 )
          {
            CEntityInstance::CreatePublicScriptScope(v6->m_pInstance, 0);
            return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
          }
        }
      }
    }
  }
  return result;
}


// CBaseFlex::ScriptGetSceneByIndex  (line 1573, @0x0000000002143df0, libserver.so)  // inlines: Element, EntityToHScript, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPublicScriptScope, IndexToIdentity, IsValid, IsValidIndex, LookupEntity, ToHScript, operator CEntityInstance*, operator[]
// calls: CEntityInstance::CreatePublicScriptScope
// globals: CEntityHandle::gm_pEntityList
HSCRIPT __fastcall CBaseFlex::ScriptGetSceneByIndex(CBaseFlex *const this, int index)
{
  HSCRIPT result; // rax
  CSceneEventInfo *v3; // rdx
  uint32 m_Index; // esi
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx

  result = 0;
  if ( index >= 0 && index < this->m_SceneEvents.m_Size )
  {
    v3 = this->m_SceneEvents.m_Memory.m_pMemory[index];
    m_Index = v3->m_hSceneEntity.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = v3->m_hSceneEntity.m_Index;
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[v5 & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 )
          {
            result = m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            if ( result == 0 )
            {
              CEntityInstance::CreatePublicScriptScope(v7->m_pInstance, 0);
              return m_pInstance->m_pEntity->m_hPublicScope.m_hScope;
            }
          }
        }
      }
    }
  }
  return result;
}


// CBaseFlex::EnterSceneSequence  (line 1588, @0x00000000021614a0, libserver.so)
// calls: Warning
// strings: "Scene sequences are unavailable in Left4Dead.\n"
bool __fastcall CBaseFlex::EnterSceneSequence(
        CBaseFlex *const this,
        CChoreoScene *scene,
        CChoreoEvent *event,
        bool bRestart)
{
  Warning("Scene sequences are unavailable in Left4Dead.\n", scene, event, bRestart);
  return 0;
}


// CBaseFlex::ExitSceneSequence  (line 1640, @0x00000000021614c0, libserver.so)
bool __fastcall CBaseFlex::ExitSceneSequence(CBaseFlex *const this)
{
  return 1;
}


// CBaseFlex::IsSuppressedFlexAnimation  (line 1650, @0x00000000021614d0, libserver.so)  // inlines: curtime
// calls: CChoreoScene::IsBackground, CBaseAnimating::GetAnimTimeInterval
// callers: CBaseFlex::StartSceneEvent, CSceneEventInfo::InitWeight, CSceneEventInfo::UpdateWeight
bool __fastcall CBaseFlex::IsSuppressedFlexAnimation(CBaseFlex *const this, CSceneEventInfo *info)
{
  CChoreoScene *m_pScene; // rdi
  double m_flLastFlexAnimationTime; // r14
  CGlobalVars *v5; // rbx
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double m_flCurrentTime; // rbx
  CGlobalVars *v9; // rbx
  float v10; // xmm0_4
  FnGlobalVarsWarningFunc v11; // rax

  m_pScene = info->m_pScene;
  if ( m_pScene != 0 && CChoreoScene::IsBackground(m_pScene) )
  {
    m_flLastFlexAnimationTime = this->m_flLastFlexAnimationTime;
    v5 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      m_flCurrentTime = v5->m_flCurrentTime;
    }
    else
    {
      m_flCurrentTime = 0.0;
    }
    return m_flLastFlexAnimationTime > m_flCurrentTime - CBaseAnimating::GetAnimTimeInterval(this) * 1.5;
  }
  else
  {
    v9 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v11 = gpGlobals->m_pfnWarningFunc;
        if ( v11 != 0 )
          v11(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      v10 = v9->m_flCurrentTime;
    }
    else
    {
      v10 = 0.0;
    }
    this->m_flLastFlexAnimationTime = v10;
    return 0;
  }
}


// CBaseFlex::Teleport  (line 1668, @0x000000000213efb0, libserver.so)
// calls: CBaseAnimating::Teleport
// callers: CDOTA_BaseNPC::Teleport
void __fastcall CBaseFlex::Teleport(
        CBaseFlex *const this,
        const Vector *newPosition,
        const QAngle *newAngles,
        const Vector *newVelocity)
{
  CBaseAnimating::Teleport(this, newPosition, newAngles, newVelocity);
}


// CBaseFlex::DoBodyLean  (line 1683, @0x00000000021617d0, libserver.so)
void __fastcall CBaseFlex::DoBodyLean(CBaseFlex *const this)
{
  ;
}


// CSceneEventInfo::InitWeight  (line 1749, @0x00000000021617e0, libserver.so)
// calls: CBaseFlex::IsSuppressedFlexAnimation
void __fastcall CSceneEventInfo::InitWeight(CSceneEventInfo *const this, CBaseFlex *pActor)
{
  if ( CBaseFlex::IsSuppressedFlexAnimation(pActor, this) )
    this->m_flWeight = 0.0;
  else
    this->m_flWeight = 1.0;
}


// CSceneEventInfo::UpdateWeight  (line 1765, @0x0000000002161820, libserver.so)
// calls: CBaseFlex::IsSuppressedFlexAnimation
// callers: CBaseFlex::AddFlexAnimation
float __fastcall CSceneEventInfo::UpdateWeight(CSceneEventInfo *const this, CBaseFlex *pActor)
{
  bool IsSuppressedFlexAnimation; // al
  double m_flWeight; // xmm0_8
  double v5; // xmm0_8
  float result; // xmm0_4

  IsSuppressedFlexAnimation = CBaseFlex::IsSuppressedFlexAnimation(pActor, this);
  m_flWeight = this->m_flWeight;
  if ( IsSuppressedFlexAnimation )
  {
    v5 = m_flWeight - 0.2;
    if ( v5 <= 0.0 )
    {
      result = 0.0;
      goto LABEL_4;
    }
LABEL_3:
    result = v5;
LABEL_4:
    this->m_flWeight = result;
    return result;
  }
  v5 = m_flWeight + 0.1;
  if ( v5 < 1.0 )
    goto LABEL_3;
  this->m_flWeight = 1.0;
  return 1.0;
}


// flexsettinghdr_t::AddDatadescMetadataKeys  (line 1780, @0x0000000002161e60, libserver.so)
void __fastcall flexsettinghdr_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// flexsettinghdr_t::GetBaseMap  (line 1780, @0x0000000002161e70, libserver.so)
datamap_t *__cdecl flexsettinghdr_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<flexsettinghdr_t>  (line 1780, @0x0000000002161e80, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "flexsettinghdr_t"
// globals: `guard variable for'DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder, flexsettinghdr_t::m_DataMap, DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder) != 0 )
  {
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_pszBase = "flexsettinghdr_t";
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder.m_nLenBase = 16;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::nameHolder,
      &_dso_handle);
  }
  flexsettinghdr_t::m_DataMap.baseMap = 0;
  flexsettinghdr_t::m_DataMap.dataDesc = &DataMapInit<flexsettinghdr_t>(flexsettinghdr_t *)::dataDesc[1];
  flexsettinghdr_t::m_DataMap.dataNumFields = 12;
  return &flexsettinghdr_t::m_DataMap;
}


// flexsetting_t::AddDatadescMetadataKeys  (line 1795, @0x0000000002161f40, libserver.so)
void __fastcall flexsetting_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// flexsetting_t::GetBaseMap  (line 1795, @0x0000000002161f50, libserver.so)
datamap_t *__cdecl flexsetting_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<flexsetting_t>  (line 1795, @0x0000000002161f60, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "flexsetting_t"
// globals: `guard variable for'DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder, flexsetting_t::m_DataMap, DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<flexsetting_t>(flexsetting_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder) != 0 )
  {
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_pszBase = "flexsetting_t";
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder.m_nLenBase = 13;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<flexsetting_t>(flexsetting_t *)::nameHolder,
      &_dso_handle);
  }
  flexsetting_t::m_DataMap.baseMap = 0;
  flexsetting_t::m_DataMap.dataDesc = &DataMapInit<flexsetting_t>(flexsetting_t *)::dataDesc[1];
  flexsetting_t::m_DataMap.dataNumFields = 6;
  return &flexsetting_t::m_DataMap;
}


// flexweight_t::AddDatadescMetadataKeys  (line 1804, @0x0000000002162020, libserver.so)
void __fastcall flexweight_t::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  ;
}


// flexweight_t::GetBaseMap  (line 1804, @0x0000000002162030, libserver.so)
datamap_t *__cdecl flexweight_t::GetBaseMap()
{
  return 0;
}


// DataMapInit<flexweight_t>  (line 1804, @0x0000000002162040, libserver.so)  // inlines: CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_01.cpp
// strings: "flexweight_t"
// globals: `guard variable for'DataMapInit<flexweight_t>(flexweight_t *)::nameHolder, flexweight_t::m_DataMap, DataMapInit<flexweight_t>(flexweight_t *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<flexweight_t>(flexweight_t *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<flexweight_t>(flexweight_t *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<flexweight_t>(flexweight_t *)::nameHolder) != 0 )
  {
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_pszBase = "flexweight_t";
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<flexweight_t>(flexweight_t *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<flexweight_t>(flexweight_t *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<flexweight_t>(flexweight_t *)::nameHolder,
      &_dso_handle);
  }
  flexweight_t::m_DataMap.baseMap = 0;
  flexweight_t::m_DataMap.dataDesc = &DataMapInit<flexweight_t>(flexweight_t *)::dataDesc[1];
  flexweight_t::m_DataMap.dataNumFields = 3;
  return &flexweight_t::m_DataMap;
}


