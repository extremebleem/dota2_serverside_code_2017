// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_timescale.cpp:13
class CFuncTimescale : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flDesiredTimescale;  // +0x308
	float m_flAcceleration;  // +0x30c
	float m_flMinBlendRate;  // +0x310
	float m_flBlendDeltaMultiplier;  // +0x314
	bool m_isStarted;  // +0x318
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
	CFuncTimescale(CFuncTimescale &);
	CFuncTimescale(CFuncTimescale &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CFuncTimescale();
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputStart(inputdata_t &);
	void InputStop(inputdata_t &);
	void InputReset(inputdata_t &);
	virtual ~CFuncTimescale();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// sizeof = 800
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncTimescale::~CFuncTimescale  (line 13, @0x0000000002246df0, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CFuncTimescale::~CFuncTimescale(CFuncTimescale *const this)
{
  this->_vptr_IHandleEntity = &off_404B5D0;
  CBaseEntity::~CBaseEntity(this);
}


// CFuncTimescale::~CFuncTimescale  (line 13, @0x0000000002246e10, libserver.so)  // inlines: ~CFuncTimescale
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CFuncTimescale::~CFuncTimescale(CFuncTimescale *const this)
{
  this->_vptr_IHandleEntity = &off_404B5D0;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncTimescale::GetEntityClass  (line 15, @0x0000000002245b90, libserver.so)
CEntityClass *__cdecl CFuncTimescale::GetEntityClass()
{
  return g_pEntityCFuncTimescaleClass;
}


// CFuncTimescale::Schema_DynamicBinding  (line 15, @0x0000000002245ba0, libserver.so)
// globals: CFuncTimescale::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTimescale::Schema_DynamicBinding(const CFuncTimescale *const this)
{
  return CFuncTimescale::s_pSchemaBinding;
}


// CFuncTimescale::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x0000000002245bb0, libserver.so)
// globals: CFuncTimescale::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncTimescale::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  return CFuncTimescale::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncTimescale::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x0000000002245bc0, libserver.so)  // inlines: Destruct<CFuncTimescale>
void __fastcall CFuncTimescale::CEntityInstanceEntityClass::DestructInstance(
        CFuncTimescale::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncTimescale::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x0000000002245be0, libserver.so)
void __fastcall CFuncTimescale::CEntityInstanceEntityClass::FreeInstance(
        CFuncTimescale::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncTimescale::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x0000000002245c00, libserver.so)
bool __fastcall CFuncTimescale::CEntityInstanceEntityClass::CanAllocate(
        const CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncTimescale::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x0000000002245c10, libserver.so)
// globals: CFuncTimescale::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncTimescale::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  return CFuncTimescale::s_pSchemaBinding;
}


// CFuncTimescale::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x0000000002246ad0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncTimescale::CEntityInstanceEntityClass::AllocateInstance(
        CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 800);
  memset(v1, 0, 0x320u);
  return v1;
}


// CFuncTimescale::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x0000000002246bc0, libserver.so)  // inlines: CFuncTimescale, Construct<CFuncTimescale>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CFuncTimescale::CEntityInstanceEntityClass::ConstructInstance(
        CFuncTimescale::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 194) = 1065353216;
    *p = &off_404B5D0;
    *(p + 195) = 1028443341;
    *(p + 196) = 1036831949;
    *(p + 197) = 1077936128;
    *(p + 792) = 0;
  }
  return p;
}


// CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000022491f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x0000000002249210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncTimescale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncTimescale::GetEntityClassInternal  (line 15, @0x000000000224e6c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_timescale", "CFuncTimescale"
// globals: `guard variable for'CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass, CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo, CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo
CEntityClass *__cdecl CFuncTimescale::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass) != 0 )
  {
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_designerName.u.m_Id = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass._vptr_CEntityClass = off_3F79390;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_ComponentOffsets.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_AllHelpers.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classInputs.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classOutputs.m_Size = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_requiredEHandle.m_Index = -1;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_hNetworkSerializer = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pBaseClassInfo = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pClassInfo = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_flags = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_nAllHelpersFlags = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pScriptClassDesc = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pInputs = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_nInputCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pOutputs = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_nOutputCount = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pGameClass = 0;
    CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass._vptr_CEntityClass = off_404B550;
    __cxa_guard_release(&`guard variable for'CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass);
    __cxa_atexit(
      CFuncTimescale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncTimescaleClass != 0 )
    return &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass;
  if ( `guard variable for'CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo,
      "CFuncTimescale",
      "func_timescale",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo);
  }
  CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pClassInfo = &CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo;
  CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pBaseClassInfo = CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncTimescaleClass = &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass;
  CFuncTimescale::GetEntityClassInfo(void)::g_EntityCFuncTimescaleClassInfo.m_pClass = &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass;
  CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCFuncTimescaleClass->m_pComponentOverrides = 0;
  return &CFuncTimescale::GetEntityClassInternal(void)::g_EntityCFuncTimescaleClass;
}


// CFuncTimescale::GetDataDescMap  (line 38, @0x000000000221a580, libserver.so)
// globals: CFuncTimescale::m_DataMap
datamap_t *__fastcall CFuncTimescale::GetDataDescMap(CFuncTimescale *const this)
{
  return &CFuncTimescale::m_DataMap;
}


// CFuncTimescale::AddDatadescMetadataKeys  (line 38, @0x000000000222f040, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncTimescale::GetEntityClass(void)
void __fastcall CFuncTimescale::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncTimescale::GetEntityClass);
}


// CFuncTimescale::GetBaseMap  (line 38, @0x000000000222f060, libserver.so)
datamap_t *__cdecl CFuncTimescale::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CFuncTimescale>  (line 38, @0x000000000222f070, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncTimescale"
// globals: `guard variable for'DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder, CFuncTimescale::GetEntityClass(void), CFuncTimescale::m_DataMap, DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncTimescale>(CFuncTimescale *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_pszBase = "CFuncTimescale";
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder.m_nLenBase = 14;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncTimescale>(CFuncTimescale *)::nameHolder,
      &_dso_handle);
  }
  CFuncTimescale::m_DataMap.dataNumFields = 8;
  CFuncTimescale::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  CFuncTimescale::m_DataMap.dataDesc = &DataMapInit<CFuncTimescale>(CFuncTimescale *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncTimescale::m_DataMap, CFuncTimescale::GetEntityClass);
  return &CFuncTimescale::m_DataMap;
}


// CFuncTimescale::CFuncTimescale  (line 54, @0x000000000222f140, libserver.so)
// calls: CBaseEntity::CBaseEntity
void __fastcall CFuncTimescale::CFuncTimescale(CFuncTimescale *const this)
{
  CBaseEntity::CBaseEntity(this);
  this->m_flDesiredTimescale = 1.0;
  this->_vptr_IHandleEntity = &off_404B5D0;
  this->m_flAcceleration = 0.050000001;
  this->m_flMinBlendRate = 0.1;
  this->m_flBlendDeltaMultiplier = 3.0;
  this->m_isStarted = 0;
}


// CFuncTimescale::InputStart  (line 64, @0x000000000222f880, libserver.so)
// calls: CGameTimescale::SetDesiredTimescale
// globals: g_GameTimescale
void __fastcall CFuncTimescale::InputStart(CFuncTimescale *const this, inputdata_t *const inputdata)
{
  float v2; // xmm4_4

  if ( !this->m_isStarted )
  {
    CGameTimescale::SetDesiredTimescale(
      &g_GameTimescale,
      this->m_flDesiredTimescale,
      this->m_flAcceleration,
      this->m_flMinBlendRate,
      this->m_flBlendDeltaMultiplier,
      v2);
    this->m_isStarted = 1;
  }
}


// CFuncTimescale::InputStop  (line 74, @0x000000000222f8d0, libserver.so)
// calls: CGameTimescale::SetDesiredTimescale
// globals: g_GameTimescale
void __fastcall CFuncTimescale::InputStop(CFuncTimescale *const this, inputdata_t *const inputdata)
{
  float v2; // xmm4_4

  if ( this->m_isStarted )
  {
    CGameTimescale::SetDesiredTimescale(
      &g_GameTimescale,
      1.0,
      this->m_flAcceleration,
      this->m_flMinBlendRate,
      this->m_flBlendDeltaMultiplier,
      v2);
    this->m_isStarted = 0;
  }
}


// CFuncTimescale::InputReset  (line 84, @0x000000000222f620, libserver.so)
// calls: CGameTimescale::SetCurrentTimescale
// globals: g_GameTimescale
void __fastcall CFuncTimescale::InputReset(CFuncTimescale *const this, inputdata_t *const inputdata)
{
  float v2; // xmm1_4

  if ( this->m_isStarted )
  {
    CGameTimescale::SetCurrentTimescale(&g_GameTimescale, COERCE_DOUBLE(1065353216), v2);
    this->m_isStarted = 0;
  }
}


