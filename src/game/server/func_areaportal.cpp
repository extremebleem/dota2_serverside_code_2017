// Reconstructed from DWARF by pahole; not original source.

// src/game/server/func_areaportal.cpp:25
class CAreaPortal : public CFuncAreaPortalBase {
public:

private:

	static datamap_t m_DataMap;

	int m_state;  // +0x48c
	typedef CFuncAreaPortalBase BaseClass;

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
	CAreaPortal(CAreaPortal &);
	CAreaPortal(CAreaPortal &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

protected:

	CAreaPortal();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void Use(CBaseEntity *, CBaseEntity *, USE_TYPE, float);
	virtual int UpdateTransmitState();
	void InputOpen(inputdata_t &);
	void InputClose(inputdata_t &);
	void InputToggle(inputdata_t &);
	virtual bool UpdateVisibility(const CUtlVector<Vector, CUtlMemory<Vector, int> > &, float, bool &);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();

private:

	bool UpdateState();
	virtual ~CAreaPortal();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[108] Use
	// vtable[64] UpdateTransmitState
	// vtable[214] UpdateVisibility
	// vtable[34] GetDataDescMap
	// sizeof = 1168
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CAreaPortal::~CAreaPortal  (line 25, @0x0000000002250310, libserver.so)
// calls: CFuncAreaPortalBase::~CFuncAreaPortalBase
void __fastcall CAreaPortal::~CAreaPortal(CAreaPortal *const this)
{
  this->_vptr_IHandleEntity = &off_40401D0;
  CFuncAreaPortalBase::~CFuncAreaPortalBase(this);
}


// CAreaPortal::~CAreaPortal  (line 25, @0x0000000002250330, libserver.so)  // inlines: ~CAreaPortal
// calls: CFuncAreaPortalBase::~CFuncAreaPortalBase, CBaseEntity::operator delete
void __fastcall CAreaPortal::~CAreaPortal(CAreaPortal *const this)
{
  this->_vptr_IHandleEntity = &off_40401D0;
  CFuncAreaPortalBase::~CFuncAreaPortalBase(this);
  CBaseEntity::operator delete(this);
}


// CAreaPortal::GetEntityClass  (line 27, @0x0000000002245030, libserver.so)
CEntityClass *__cdecl CAreaPortal::GetEntityClass()
{
  return g_pEntityCAreaPortalClass;
}


// CAreaPortal::Schema_DynamicBinding  (line 27, @0x0000000002245040, libserver.so)
// globals: CAreaPortal::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAreaPortal::Schema_DynamicBinding(const CAreaPortal *const this)
{
  return CAreaPortal::s_pSchemaBinding;
}


// CAreaPortal::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 27, @0x0000000002245050, libserver.so)
// globals: CAreaPortal::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAreaPortal::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAreaPortal::CEntityInstanceEntityClass *const this)
{
  return CAreaPortal::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAreaPortal::CEntityInstanceEntityClass::DestructInstance  (line 27, @0x0000000002245060, libserver.so)  // inlines: Destruct<CAreaPortal>
void __fastcall CAreaPortal::CEntityInstanceEntityClass::DestructInstance(
        CAreaPortal::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAreaPortal::CEntityInstanceEntityClass::FreeInstance  (line 27, @0x0000000002245080, libserver.so)
void __fastcall CAreaPortal::CEntityInstanceEntityClass::FreeInstance(
        CAreaPortal::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAreaPortal::CEntityInstanceEntityClass::CanAllocate  (line 27, @0x00000000022450a0, libserver.so)
bool __fastcall CAreaPortal::CEntityInstanceEntityClass::CanAllocate(
        const CAreaPortal::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAreaPortal::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 27, @0x00000000022450b0, libserver.so)
// globals: CAreaPortal::s_pSchemaBinding
const ISchemaBinding *__fastcall CAreaPortal::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAreaPortal::CEntityInstanceEntityClass *const this)
{
  return CAreaPortal::s_pSchemaBinding;
}


// CAreaPortal::CEntityInstanceEntityClass::AllocateInstance  (line 27, @0x00000000022467d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAreaPortal::CEntityInstanceEntityClass::AllocateInstance(
        CAreaPortal::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1168);
  memset(v1, 0, 0x490u);
  return v1;
}


// CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002248f20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAreaPortal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 27, @0x0000000002248f40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAreaPortal::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAreaPortal::GetEntityClassInternal  (line 27, @0x000000000224ea10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseModelEntity::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "func_areaportal", "CAreaPortal", "CFuncAreaPortalBase"
// globals: `guard variable for'CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass, CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo, CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo, `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo (9 total)
CEntityClass *__cdecl CAreaPortal::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass) != 0 )
  {
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_designerName.u.m_Id = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass._vptr_CEntityClass = off_3F79390;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_ComponentOffsets.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_AllHelpers.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classInputs.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classOutputs.m_Size = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_requiredEHandle.m_Index = -1;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_hNetworkSerializer = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pBaseClassInfo = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pClassInfo = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_flags = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_nAllHelpersFlags = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pScriptClassDesc = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pInputs = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_nInputCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pOutputs = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_nOutputCount = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pGameClass = 0;
    CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass._vptr_CEntityClass = off_4040150;
    __cxa_guard_release(&`guard variable for'CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass);
    __cxa_atexit(
      CAreaPortal::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass,
      &_dso_handle);
  }
  if ( g_pEntityCAreaPortalClass != 0 )
    return &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass;
  if ( `guard variable for'CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo) != 0 )
  {
    if ( `guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo) != 0 )
    {
      EntityClassInfo = CBaseModelEntity::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo,
        "CFuncAreaPortalBase",
        0,
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo,
      "CAreaPortal",
      "func_areaportal",
      0,
      &CFuncAreaPortalBase::GetEntityClassInfo(void)::g_EntityCFuncAreaPortalBaseClassInfo);
    __cxa_guard_release(&`guard variable for'CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo);
  }
  CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pClassInfo = &CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo;
  CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pBaseClassInfo = CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo.m_pBaseClassInfo;
  g_pEntityCAreaPortalClass = &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass;
  CAreaPortal::GetEntityClassInfo(void)::g_EntityCAreaPortalClassInfo.m_pClass = &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass;
  CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCAreaPortalClass->m_pComponentOverrides = 0;
  return &CAreaPortal::GetEntityClassInternal(void)::g_EntityCAreaPortalClass;
}


// CAreaPortal::CEntityInstanceEntityClass::ConstructInstance  (line 27, @0x00000000022518a0, libserver.so)  // inlines: CAreaPortal, Construct<CAreaPortal>
// calls: CFuncAreaPortalBase::CFuncAreaPortalBase
CEntityInstance *__fastcall CAreaPortal::CEntityInstanceEntityClass::ConstructInstance(
        CAreaPortal::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CFuncAreaPortalBase::CFuncAreaPortalBase(p);
    *(p + 291) = 1;
    *p = &off_40401D0;
  }
  return p;
}


// CAreaPortal::GetDataDescMap  (line 54, @0x000000000221a380, libserver.so)
// globals: CAreaPortal::m_DataMap
datamap_t *__fastcall CAreaPortal::GetDataDescMap(CAreaPortal *const this)
{
  return &CAreaPortal::m_DataMap;
}


// CAreaPortal::AddDatadescMetadataKeys  (line 54, @0x0000000002226410, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CAreaPortal::GetEntityClass(void)
void __fastcall CAreaPortal::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CAreaPortal::GetEntityClass);
}


// CAreaPortal::GetBaseMap  (line 54, @0x0000000002226430, libserver.so)
// globals: CFuncAreaPortalBase::m_DataMap
datamap_t *__cdecl CAreaPortal::GetBaseMap()
{
  return &CFuncAreaPortalBase::m_DataMap;
}


// DataMapInit<CAreaPortal>  (line 54, @0x0000000002226440, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CAreaPortal"
// globals: `guard variable for'DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder, CFuncAreaPortalBase::m_DataMap, CAreaPortal::GetEntityClass(void), CAreaPortal::m_DataMap, DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CAreaPortal>(CAreaPortal *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder) != 0 )
  {
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_pszBase = "CAreaPortal";
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder.m_nLenBase = 11;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CAreaPortal>(CAreaPortal *)::nameHolder,
      &_dso_handle);
  }
  CAreaPortal::m_DataMap.dataNumFields = 7;
  CAreaPortal::m_DataMap.baseMap = &CFuncAreaPortalBase::m_DataMap;
  CAreaPortal::m_DataMap.dataDesc = &DataMapInit<CAreaPortal>(CAreaPortal *)::dataDesc[1];
  AddDatadescMetadataKeys(&CAreaPortal::m_DataMap, CAreaPortal::GetEntityClass);
  return &CAreaPortal::m_DataMap;
}


// CAreaPortal::CAreaPortal  (line 72, @0x000000000223b370, libserver.so)
// calls: CFuncAreaPortalBase::CFuncAreaPortalBase
void __fastcall CAreaPortal::CAreaPortal(CAreaPortal *const this)
{
  CFuncAreaPortalBase::CFuncAreaPortalBase(this);
  this->m_state = 1;
  this->_vptr_IHandleEntity = &off_40401D0;
}


// CAreaPortal::Activate  (line 81, @0x000000000221aea0, libserver.so)
// calls: CBaseModelEntity::Activate
void __fastcall CAreaPortal::Activate(CAreaPortal *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CAreaPortal::InputClose  (line 91, @0x000000000221a390, libserver.so)
void __fastcall CAreaPortal::InputClose(CAreaPortal *const this, inputdata_t *const inputdata)
{
  this->m_state = 0;
}


// CAreaPortal::InputOpen  (line 101, @0x000000000221a3a0, libserver.so)
void __fastcall CAreaPortal::InputOpen(CAreaPortal *const this, inputdata_t *const inputdata)
{
  this->m_state = 1;
}


// CAreaPortal::InputToggle  (line 111, @0x000000000221a3b0, libserver.so)
void __fastcall CAreaPortal::InputToggle(CAreaPortal *const this, inputdata_t *const inputdata)
{
  this->m_state = this->m_state != 1;
}


// CAreaPortal::UpdateVisibility  (line 118, @0x000000000221d910, libserver.so)  // inlines: UpdateVisibility
// calls: CFuncAreaPortalBase::UpdateVisibility
__int64 __fastcall CAreaPortal::UpdateVisibility(
        CAreaPortal *const this,
        const CUtlVector<Vector,CUtlMemory<Vector,int> > *const vecOrigins,
        float fovDistanceAdjustFactor,
        bool *const bIsOpenOnClient)
{
  if ( this->m_state != 0 )
  {
    if ( this->m_portalNumber != -1 )
      return CFuncAreaPortalBase::UpdateVisibility(this, vecOrigins, fovDistanceAdjustFactor, bIsOpenOnClient);
  }
  else
  {
    *bIsOpenOnClient = 0;
  }
  return 0;
}


// CAreaPortal::Use  (line 138, @0x000000000221a3d0, libserver.so)
void __fastcall CAreaPortal::Use(
        CAreaPortal *const this,
        CBaseEntity *pActivator,
        CBaseEntity *pCaller,
        USE_TYPE useType,
        float value)
{
  if ( useType == USE_ON )
  {
    this->m_state = 1;
  }
  else if ( useType == USE_OFF )
  {
    this->m_state = 0;
  }
}


// CAreaPortal::Spawn  (line 157, @0x0000000002220b90, libserver.so)  // inlines: AssignTo, Base, Element, FindKeyHash, Get<int>, GetValue, GetValue<int>, Min<long long unsigned int>, Min<unsigned int>, atoi, operator[]
// calls: CBaseEntity::Spawn, CEntityKeyValues::HasValue, CBaseEntity::AddEffects, VariantFieldTypeName, Warning, strtol
// strings: "No conversion from %s to int now\n"
// globals: CEntityKeyValues::sm_EmptyVariant, jpt_2220C52
void __fastcall CAreaPortal::Spawn(CAreaPortal *const this, const CEntityKeyValues *pKeyValues)
{
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t m_nAllocated; // cx
  __int64 i; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rdx
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v8; // rdx
  CEntityVariant *p_m_value; // rcx
  int16 m_type; // ax
  const char *v11; // rax
  int v12; // eax
  const char *m_uint64; // rax

  CBaseEntity::Spawn(this, pKeyValues);
  if ( CEntityKeyValues::HasValue(pKeyValues, -136218106) )
  {
    m_nCount = pKeyValues->m_keyHashes.m_nCount;
    if ( m_nCount > 0 )
    {
      m_nAllocated = pKeyValues->m_keyHashes.m_nAllocated;
      for ( i = 0; m_nCount > i; ++i )
      {
        if ( m_nAllocated != 0 )
        {
          m_pElements = (&pKeyValues->m_keyHashes.m_nAllocAllocated + 1);
          if ( m_nAllocated > 9 )
            m_pElements = pKeyValues->m_keyHashes.m_pElements;
          if ( m_pElements[i] == -136218106 )
          {
LABEL_11:
            if ( pKeyValues->m_keyValues.m_nAllocated != 0 )
              v8 = pKeyValues->m_keyValues.m_pElements;
            else
              v8 = 0;
            p_m_value = &v8[i].m_value;
            goto LABEL_15;
          }
        }
        else if ( *(4 * i) == -136218106 )
        {
          goto LABEL_11;
        }
      }
    }
    p_m_value = &CEntityKeyValues::sm_EmptyVariant;
LABEL_15:
    m_type = p_m_value->m_type;
    switch ( m_type )
    {
      case 0:
        goto LABEL_17;
      case 1:
        LODWORD(m_uint64) = p_m_value->m_float;
        goto LABEL_22;
      case 5:
        LODWORD(m_uint64) = p_m_value->m_int;
        goto LABEL_22;
      case 6:
        LODWORD(m_uint64) = p_m_value->m_char;
        goto LABEL_22;
      case 26:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_int64 > 0x7FFFFFFF )
          goto LABEL_20;
        if ( m_uint64 < 0xFFFFFFFF80000000LL )
          LODWORD(m_uint64) = 0x80000000;
LABEL_22:
        if ( m_uint64 != 0 )
LABEL_20:
          v12 = 1;
        else
LABEL_17:
          v12 = 0;
        this->m_state = v12;
        break;
      case 30:
        LODWORD(m_uint64) = strtol(p_m_value->m_pszString, 0, 10);
        goto LABEL_22;
      case 33:
        m_uint64 = p_m_value->m_uint64;
        if ( p_m_value->m_uint64 <= 0x7FFFFFFE )
          goto LABEL_22;
        goto LABEL_20;
      case 34:
        LODWORD(m_uint64) = p_m_value->m_float64;
        goto LABEL_22;
      case 37:
        LODWORD(m_uint64) = p_m_value->m_int;
        if ( p_m_value->m_int > 0x7FFFFFFEu )
          goto LABEL_20;
        goto LABEL_22;
      default:
        v11 = VariantFieldTypeName(m_type);
        Warning("No conversion from %s to int now\n", v11);
        goto LABEL_17;
    }
  }
  CBaseEntity::AddEffects(this, 80);
}


// CAreaPortal::UpdateState  (line 170, @0x0000000002226510, libserver.so)
bool __fastcall CAreaPortal::UpdateState(CAreaPortal *const this)
{
  return this->m_state != 0;
}


// CAreaPortal::UpdateTransmitState  (line 179, @0x000000000221acc0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CAreaPortal::UpdateTransmitState(CAreaPortal *const this)
{
  return CBaseEntity::SetTransmitState(this, 8);
}


