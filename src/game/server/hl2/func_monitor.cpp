// Reconstructed from DWARF by pahole; not original source.

// src/game/server/hl2/func_monitor.cpp:14
class CFuncMonitor : public CFuncBrush {
	class NetworkVar_m_targetCamera {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nResolutionEnum {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bRenderShadows {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bUseUniqueColorTarget {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_brushModelName {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_hTargetCamera {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_bEnabled {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	static datamap_t m_DataMap;

	bool m_bStartEnabled;  // +0x4bd
	typedef CFuncBrush BaseClass;
	typedef CFuncMonitor ThisClass;

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
	CFuncMonitor(CFuncMonitor &);
	CFuncMonitor(CFuncMonitor &);
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
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	CFuncMonitor();
	void SetCameraByName(const char *);
	void InputToggle(inputdata_t &);
	void InputEnable(inputdata_t &);
	void InputDisable(inputdata_t &);
	void InputSetCamera(inputdata_t &);
	virtual ~CFuncMonitor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// sizeof = 1216
};

// src/game/server/hl2/func_monitor.cpp:67
class C_CFuncMonitor_MapInstall {
	C_CFuncMonitor_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CFuncMonitor::~CFuncMonitor  (line 14, @0x00000000022471c0, libserver.so)  // inlines: ~CFuncBrush, ~CNetworkVarBase, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseModelEntity::~CBaseModelEntity
void __fastcall CFuncMonitor::~CFuncMonitor(CFuncMonitor *const this)
{
  this->_vptr_IHandleEntity = &off_4047C50;
  if ( this->m_brushModelName.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_brushModelName.m_Value);
  if ( this->m_targetCamera.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_targetCamera.m_Value);
  this->_vptr_IHandleEntity = &off_406EE90;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CFuncMonitor::~CFuncMonitor  (line 14, @0x00000000022485e0, libserver.so)  // inlines: ~CFuncBrush, ~CFuncMonitor, ~CNetworkVarBase, ~CUtlString
// calls: CUtlString::FreeMemoryBlock, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CFuncMonitor::~CFuncMonitor(CFuncMonitor *const this)
{
  this->_vptr_IHandleEntity = &off_4047C50;
  if ( this->m_brushModelName.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_brushModelName.m_Value);
  if ( this->m_targetCamera.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_targetCamera.m_Value);
  this->_vptr_IHandleEntity = &off_406EE90;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CFuncMonitor::GetEntityClass  (line 16, @0x0000000002245980, libserver.so)
CEntityClass *__cdecl CFuncMonitor::GetEntityClass()
{
  return g_pEntityCFuncMonitorClass;
}


// CFuncMonitor::Schema_DynamicBinding  (line 16, @0x0000000002245990, libserver.so)
// globals: CFuncMonitor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncMonitor::Schema_DynamicBinding(const CFuncMonitor *const this)
{
  return CFuncMonitor::s_pSchemaBinding;
}


// CFuncMonitor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 16, @0x00000000022459a0, libserver.so)
// globals: CFuncMonitor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CFuncMonitor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  return CFuncMonitor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CFuncMonitor::CEntityInstanceEntityClass::DestructInstance  (line 16, @0x00000000022459b0, libserver.so)  // inlines: Destruct<CFuncMonitor>
void __fastcall CFuncMonitor::CEntityInstanceEntityClass::DestructInstance(
        CFuncMonitor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CFuncMonitor::CEntityInstanceEntityClass::FreeInstance  (line 16, @0x00000000022459d0, libserver.so)
void __fastcall CFuncMonitor::CEntityInstanceEntityClass::FreeInstance(
        CFuncMonitor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CFuncMonitor::CEntityInstanceEntityClass::CanAllocate  (line 16, @0x00000000022459f0, libserver.so)
bool __fastcall CFuncMonitor::CEntityInstanceEntityClass::CanAllocate(
        const CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CFuncMonitor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 16, @0x0000000002245a00, libserver.so)
// globals: CFuncMonitor::s_pSchemaBinding
const ISchemaBinding *__fastcall CFuncMonitor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  return CFuncMonitor::s_pSchemaBinding;
}


// CFuncMonitor::CEntityInstanceEntityClass::AllocateInstance  (line 16, @0x0000000002246a10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CFuncMonitor::CEntityInstanceEntityClass::AllocateInstance(
        CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1216);
  memset(v1, 0, 0x4C0u);
  return v1;
}


// CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000002249150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 16, @0x0000000002249170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CFuncMonitor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CFuncMonitor::CEntityInstanceEntityClass::ConstructInstance  (line 16, @0x000000000224bb20, libserver.so)  // inlines: Construct<CFuncMonitor>
// calls: CFuncMonitor::CFuncMonitor
CEntityInstance *__fastcall CFuncMonitor::CEntityInstanceEntityClass::ConstructInstance(
        CFuncMonitor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CFuncMonitor::CFuncMonitor(p);
  return p;
}


// CFuncMonitor::GetEntityClassInternal  (line 16, @0x000000000224f790, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_monitor", "CFuncMonitor", "func_brush", "CFuncBrush"
// globals: `guard variable for'CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass, CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo, CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo, `guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo (9 total)
CEntityClass *__cdecl CFuncMonitor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass) != 0 )
  {
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_designerName.u.m_Id = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass._vptr_CEntityClass = off_3F79390;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_ComponentOffsets.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_AllHelpers.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_atomicFields,
      4);
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classInputs.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classInputs.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classOutputs.m_Size = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_requiredEHandle.m_Index = -1;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_hNetworkSerializer = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pBaseClassInfo = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pClassInfo = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_flags = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_nAllHelpersFlags = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pScriptClassDesc = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pInputs = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_nInputCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pOutputs = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_nOutputCount = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pGameClass = 0;
    CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass._vptr_CEntityClass = off_4047BD0;
    __cxa_guard_release(&`guard variable for'CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass);
    __cxa_atexit(
      CFuncMonitor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass,
      &_dso_handle);
  }
  if ( g_pEntityCFuncMonitorClass != 0 )
    return &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass;
  if ( `guard variable for'CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo,
        "CFuncBrush",
        "func_brush",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo,
      "CFuncMonitor",
      "func_monitor",
      0,
      &CFuncBrush::GetEntityClassInfo(void)::g_EntityCFuncBrushClassInfo);
    __cxa_guard_release(&`guard variable for'CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo);
  }
  CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pClassInfo = &CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo;
  CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pBaseClassInfo = CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo.m_pBaseClassInfo;
  g_pEntityCFuncMonitorClass = &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass;
  CFuncMonitor::GetEntityClassInfo(void)::g_EntityCFuncMonitorClassInfo.m_pClass = &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass;
  CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCFuncMonitorClass->m_pComponentOverrides = 0;
  return &CFuncMonitor::GetEntityClassInternal(void)::g_EntityCFuncMonitorClass;
}


// CFuncMonitor::GetDataDescMap  (line 47, @0x000000000221a510, libserver.so)
// globals: CFuncMonitor::m_DataMap
datamap_t *__fastcall CFuncMonitor::GetDataDescMap(CFuncMonitor *const this)
{
  return &CFuncMonitor::m_DataMap;
}


// CFuncMonitor::AddDatadescMetadataKeys  (line 47, @0x000000000222b800, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CFuncMonitor::GetEntityClass(void)
void __fastcall CFuncMonitor::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CFuncMonitor::GetEntityClass);
}


// CFuncMonitor::GetBaseMap  (line 47, @0x000000000222b820, libserver.so)
datamap_t *__cdecl CFuncMonitor::GetBaseMap()
{
  return &CFuncBrush::m_DataMap;
}


// DataMapInit<CFuncMonitor>  (line 47, @0x000000000222b830, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CFuncMonitor"
// globals: `guard variable for'DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder, CFuncMonitor::GetEntityClass(void), CFuncMonitor::m_DataMap, DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CFuncMonitor>(CFuncMonitor *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder) != 0 )
  {
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_pszBase = "CFuncMonitor";
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder.m_nLenBase = 12;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CFuncMonitor>(CFuncMonitor *)::nameHolder,
      &_dso_handle);
  }
  CFuncMonitor::m_DataMap.dataNumFields = 12;
  CFuncMonitor::m_DataMap.baseMap = &CFuncBrush::m_DataMap;
  CFuncMonitor::m_DataMap.dataDesc = &DataMapInit<CFuncMonitor>(CFuncMonitor *)::dataDesc[1];
  AddDatadescMetadataKeys(&CFuncMonitor::m_DataMap, CFuncMonitor::GetEntityClass);
  return &CFuncMonitor::m_DataMap;
}


// CFuncMonitor::YouForgotToImplementOrDeclareServerClass  (line 67, @0x000000000221a520, libserver.so)
int __fastcall CFuncMonitor::YouForgotToImplementOrDeclareServerClass(CFuncMonitor *const this)
{
  return 0;
}


// CFuncMonitor::GetServerClass  (line 67, @0x0000000002221a40, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CFuncMonitor::GetServerClass(CFuncMonitor *const this)
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


// CFuncMonitor::CFuncMonitor  (line 69, @0x000000000222b900, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, CUtlString, EnsureValidValue<CUtlString>, EnsureValidValue<bool>, EnsureValidValue<int>, NetworkStateChanged, Set, SetPtr, operator=, ~CFuncBrush, ~CNetworkVarBase, ~CUtlString
// calls: CFuncBrush::CFuncBrush, CUtlString::Set, CUtlString::FreeMemoryBlock, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume, CUtlString::~CUtlString
// callers: CFuncMonitor::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CFuncMonitor::CFuncMonitor(CFuncMonitor *const this)
{
  CNetworkVarBase<CUtlString,CFuncMonitor::NetworkVar_m_targetCamera> *p_m_targetCamera; // r14
  char *m_pString; // r13
  char *v4; // r13
  int (**vptr_IHandleEntity)(...); // rax
  int m_Value; // edi
  CUtlString v7; // [rsp+0h] [rbp-50h] BYREF
  CUtlString v8; // [rsp+10h] [rbp-40h] BYREF

  p_m_targetCamera = &this->m_targetCamera;
  CFuncBrush::CFuncBrush(this);
  this->_vptr_IHandleEntity = &off_4047C50;
  this->m_targetCamera.m_Value.m_pString = 0;
  v7.m_pString = 0;
  CUtlString::Set(&v7, 0);
  m_pString = v7.m_pString;
  if ( this->m_targetCamera.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&p_m_targetCamera->m_Value);
  this->m_targetCamera.m_Value.m_pString = m_pString;
  this->m_nResolutionEnum.m_Value = 0;
  this->m_bRenderShadows.m_Value = 0;
  this->m_bUseUniqueColorTarget.m_Value = 0;
  this->m_brushModelName.m_Value.m_pString = 0;
  v8.m_pString = 0;
  CUtlString::Set(&v8, 0);
  v4 = v8.m_pString;
  if ( this->m_brushModelName.m_Value.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&this->m_brushModelName.m_Value);
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  this->m_brushModelName.m_Value.m_pString = v4;
  this->m_bEnabled.m_Value = 0;
  this->m_hTargetCamera.m_Value.m_Index = -1;
  this->m_bStartEnabled = 1;
  vptr_IHandleEntity[22](this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  m_Value = this->m_nResolutionEnum.m_Value;
  this->m_bEnabled.m_Value = 1;
  if ( m_Value != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nResolutionEnum.m_Value = 0;
  }
  if ( this->m_bRenderShadows.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1196, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bRenderShadows.m_Value = 0;
  }
  if ( !this->m_bUseUniqueColorTarget.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1197, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bUseUniqueColorTarget.m_Value = 1;
  }
}


// CFuncMonitor::Precache  (line 78, @0x000000000221ba90, libserver.so)
// calls: CFuncBrush::Precache, CBaseEntity::PrecacheModelFromKeyValues
void __fastcall CFuncMonitor::Precache(CFuncMonitor *const this, const CEntityPrecacheContext *pContext)
{
  CFuncBrush::Precache(this, pContext);
  CBaseEntity::PrecacheModelFromKeyValues(this, pContext, 0, 0);
}


// CFuncMonitor::Spawn  (line 85, @0x000000000222bc40, libserver.so)  // inlines: GetForModify, GetModelNameFromKeyValues, NetworkStateChanged, Set, operator char const*
// calls: CFuncBrush::Spawn, GetModelNameFromKeyValues, CUtlString::Set, CUtlString::Get, CFuncMonitor::SetCameraByName
void __fastcall CFuncMonitor::Spawn(CFuncMonitor *const this, const CEntityKeyValues *pKeyValues)
{
  const char *ModelNameFromKeyValues; // r12
  const char *v5; // rax

  CFuncBrush::Spawn(this, pKeyValues);
  ModelNameFromKeyValues = GetModelNameFromKeyValues(pKeyValues, "");
  (*(this->_vptr_IHandleEntity + 22))(this, 1200, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  CUtlString::Set(&this->m_brushModelName.m_Value, ModelNameFromKeyValues);
  v5 = CUtlString::Get(&this->m_targetCamera.m_Value);
  CFuncMonitor::SetCameraByName(this, v5);
  if ( this->m_bEnabled.m_Value != this->m_bStartEnabled )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = this->m_bStartEnabled;
  }
}


// CFuncMonitor::Activate  (line 96, @0x000000000222bcf0, libserver.so)  // inlines: String, ToCStr
// calls: CBaseModelEntity::Activate, CFuncMonitor::SetCameraByName
void __fastcall CFuncMonitor::Activate(CFuncMonitor *const this, ActivateType_t activateType)
{
  const char *m_pAsString; // rsi

  CBaseModelEntity::Activate(this, activateType);
  m_pAsString = "";
  if ( this->m_target.u.m_Id != 0 )
    m_pAsString = this->m_target.u.m_pAsString;
  CFuncMonitor::SetCameraByName(this, m_pAsString);
}


// CFuncMonitor::SetCameraByName  (line 106, @0x000000000222bb50, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetForModify, GetSerialNumber, NetworkStateChanged, Set, operator=
// calls: CGameEntitySystem::FindEntityByName, __dynamic_cast
// callers: CFuncMonitor::Spawn, CFuncMonitor::Activate, CFuncMonitor::InputSetCamera
void __fastcall CFuncMonitor::SetCameraByName(CFuncMonitor *const this, const char *szName)
{
  CBaseEntity *EntityByName; // rax
  CBaseEntity *v4; // r12
  CEntityIdentity *m_pEntity; // rax
  int v6; // edx
  __int16 v7; // cx

  EntityByName = CGameEntitySystem::FindEntityByName(g_pGameEntitySystem, 0, szName, 0, 0, 0, 0);
  v4 = EntityByName;
  if ( EntityByName != 0
    && __dynamic_cast(EntityByName, &`typeinfo for'CBaseEntity, &`typeinfo for'CPointCamera, 0) != 0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1208, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v7 = 0x7FFF;
      else
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTargetCamera.m_Value.m_Index) = v7 | this->m_hTargetCamera.m_Value.m_Index & 0x8000;
      this->m_hTargetCamera.m_Value.m_Index = (v6 << 15) | this->m_hTargetCamera.m_Value.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTargetCamera.m_Value.m_Index = -1;
    }
  }
}


// CFuncMonitor::InputToggle  (line 123, @0x000000000221e7e0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CFuncMonitor::InputToggle(CFuncMonitor *const this, inputdata_t *const inputdata)
{
  bool v3; // r12

  v3 = !this->m_bEnabled.m_Value;
  if ( this->m_bEnabled.m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = v3;
  }
}


// CFuncMonitor::InputEnable  (line 132, @0x000000000221e760, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CFuncMonitor::InputEnable(CFuncMonitor *const this, inputdata_t *const inputdata)
{
  if ( !this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 1;
  }
}


// CFuncMonitor::InputDisable  (line 141, @0x000000000221e7a0, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CFuncMonitor::InputDisable(CFuncMonitor *const this, inputdata_t *const inputdata)
{
  if ( this->m_bEnabled.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1212, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bEnabled.m_Value = 0;
  }
}


// CFuncMonitor::InputSetCamera  (line 150, @0x000000000222bd30, libserver.so)  // inlines: AssignTo, TempString, ToString
// calls: CFuncMonitor::SetCameraByName, V_snprintf, VariantFieldTypeName, Warning
// strings: "%g %g %g %g", "No conversion from %s to string at the moment!\n", "%d %d %d %d", "true", "false"
// globals: jpt_222BD61, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf
void __fastcall CFuncMonitor::InputSetCamera(CFuncMonitor *const this, inputdata_t *const inputdata)
{
  int16 m_type; // ax
  char *m_pszString; // rsi
  const char *v5; // rax
  const char *v6; // rcx
  double m_float; // xmm0_8

  m_type = inputdata->value.m_type;
  if ( m_type != 30 )
  {
    switch ( m_type )
    {
      case 0:
        goto LABEL_8;
      case 1:
        m_float = inputdata->value.m_float;
        goto LABEL_19;
      case 3:
      case 39:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 4:
      case 27:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g %g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4),
          *(inputdata->value.m_uint64 + 8),
          *(inputdata->value.m_uint64 + 12));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 5:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d",
          inputdata->value.m_uint);
        goto LABEL_11;
      case 6:
        v6 = "true";
        if ( inputdata->value.m_char == 0 )
          v6 = "false";
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v6);
        goto LABEL_11;
      case 8:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%c",
          inputdata->value.m_char);
        goto LABEL_11;
      case 9:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%d %d %d %d",
          inputdata->value.m_int,
          BYTE1(inputdata->value.m_int),
          BYTE2(inputdata->value.m_int),
          HIBYTE(inputdata->value.m_int));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 25:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%g %g",
          *inputdata->value.m_pszString,
          *(inputdata->value.m_uint64 + 4));
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 26:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%lld",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 33:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%llu",
          inputdata->value.m_uint64);
        goto LABEL_11;
      case 34:
        m_float = inputdata->value.m_float64;
LABEL_19:
        V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
      case 37:
        V_snprintf(
          &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
          512,
          "%u",
          inputdata->value.m_uint);
LABEL_11:
        CFuncMonitor::SetCameraByName(this, &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf);
        return;
      default:
        v5 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to string at the moment!\n", v5);
LABEL_8:
        CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
        m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
        goto LABEL_4;
    }
  }
  m_pszString = inputdata->value.m_pszString;
LABEL_4:
  CFuncMonitor::SetCameraByName(this, m_pszString);
}


