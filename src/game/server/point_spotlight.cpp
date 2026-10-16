// Reconstructed from DWARF by pahole; not original source.

// src/game/server/point_spotlight.cpp:22
class CPointSpotlight : public CModelPointEntity {
public:

private:

	static datamap_t m_DataMap;

	bool m_bSpotlightOn;  // +0x480
	bool m_bEfficientSpotlight;  // +0x481

	HMaterialStrong m_nHaloSprite;  // +0x4a8
	float m_flSpotlightMaxLength;  // +0x4b8
	float m_flSpotlightCurLength;  // +0x4bc
	float m_flSpotlightGoalWidth;  // +0x4c0
	float m_flHaloScale;  // +0x4c4
	float m_flHDRColorScale;  // +0x4c8

	COutputEvent m_OnOn;  // +0x4d0
	COutputEvent m_OnOff;  // +0x4e8
	typedef CModelPointEntity BaseClass;

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
	CPointSpotlight(CPointSpotlight &);
	CPointSpotlight(CPointSpotlight &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	CPointSpotlight();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Activate(ActivateType_t);
	virtual void OnEntityEvent(EntityEvent_t, void *);
	virtual int UpdateTransmitState();
	void SpotlightThink();
	void SpotlightUpdate();
	Vector SpotlightCurrentPos();
	void SpotlightCreate();
	void SpotlightDestroy();
	void InputLightOn(inputdata_t &);
	void InputLightOff(inputdata_t &);
	void InputSetColor(inputdata_t &);
	void InputForceUpdate(inputdata_t &);
	void CreateEfficientSpotlight();
	void ComputeRenderInfo();
	virtual ~CPointSpotlight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[10] Activate
	// vtable[103] OnEntityEvent
	// vtable[64] UpdateTransmitState
	// sizeof = 1280
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CPointSpotlight::~CPointSpotlight  (line 22, @0x00000000023414b0, libserver.so)  // inlines: ~CModelPointEntity, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity
void __fastcall CPointSpotlight::~CPointSpotlight(CPointSpotlight *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2> *p_m_nHaloSprite; // rdi

  p_m_nHaloSprite = &this->m_nHaloSprite;
  p_m_nHaloSprite[-149].m_pBinding = &off_408F370;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(p_m_nHaloSprite);
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CPointSpotlight::~CPointSpotlight  (line 22, @0x0000000002341500, libserver.so)  // inlines: ~CModelPointEntity, ~CPointSpotlight, ~CStrongHandle
// calls: CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CPointSpotlight::~CPointSpotlight(CPointSpotlight *const this)
{
  CStrongHandle<InfoForResourceTypeIMaterial2> *p_m_nHaloSprite; // rdi

  p_m_nHaloSprite = &this->m_nHaloSprite;
  p_m_nHaloSprite[-149].m_pBinding = &off_408F370;
  CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(p_m_nHaloSprite);
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CPointSpotlight::GetEntityClass  (line 24, @0x0000000002339e30, libserver.so)
CEntityClass *__cdecl CPointSpotlight::GetEntityClass()
{
  return g_pEntityCPointSpotlightClass;
}


// CPointSpotlight::Schema_DynamicBinding  (line 24, @0x0000000002339e40, libserver.so)
// globals: CPointSpotlight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointSpotlight::Schema_DynamicBinding(const CPointSpotlight *const this)
{
  return CPointSpotlight::s_pSchemaBinding;
}


// CPointSpotlight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 24, @0x0000000002339e50, libserver.so)
// globals: CPointSpotlight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CPointSpotlight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  return CPointSpotlight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CPointSpotlight::CEntityInstanceEntityClass::DestructInstance  (line 24, @0x0000000002339e60, libserver.so)  // inlines: Destruct<CPointSpotlight>
void __fastcall CPointSpotlight::CEntityInstanceEntityClass::DestructInstance(
        CPointSpotlight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CPointSpotlight::CEntityInstanceEntityClass::FreeInstance  (line 24, @0x0000000002339e80, libserver.so)
void __fastcall CPointSpotlight::CEntityInstanceEntityClass::FreeInstance(
        CPointSpotlight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CPointSpotlight::CEntityInstanceEntityClass::CanAllocate  (line 24, @0x0000000002339ea0, libserver.so)
bool __fastcall CPointSpotlight::CEntityInstanceEntityClass::CanAllocate(
        const CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CPointSpotlight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 24, @0x0000000002339eb0, libserver.so)
// globals: CPointSpotlight::s_pSchemaBinding
const ISchemaBinding *__fastcall CPointSpotlight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  return CPointSpotlight::s_pSchemaBinding;
}


// CPointSpotlight::CEntityInstanceEntityClass::AllocateInstance  (line 24, @0x000000000233b220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CPointSpotlight::CEntityInstanceEntityClass::AllocateInstance(
        CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1280);
  memset(v1, 0, 0x500u);
  return v1;
}


// CPointSpotlight::CEntityInstanceEntityClass::ConstructInstance  (line 24, @0x000000000233b5a0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CModelPointEntity, CPointSpotlight, CStrongHandle, Construct<CPointSpotlight>
// calls: CBaseModelEntity::CBaseModelEntity
CEntityInstance *__fastcall CPointSpotlight::CEntityInstanceEntityClass::ConstructInstance(
        CPointSpotlight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseModelEntity::CBaseModelEntity(p);
    *(p + 149) = 0;
    *p = &off_408F370;
    *(p + 300) = -1;
    *(p + 301) = -1;
    *(p + 154) = off_3F7C190;
    *(p + 157) = off_3F7C190;
    *(p + 306) = 1065353216;
    *(p + 305) = 1114636288;
  }
  return p;
}


// CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000233ca30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 24, @0x000000000233ca50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CPointSpotlight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CPointSpotlight::GetEntityClassInternal  (line 24, @0x00000000023440c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CModelPointEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "point_spotlight", "CPointSpotlight"
// globals: `guard variable for'CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass, CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo, CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo
CEntityClass *__cdecl CPointSpotlight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass) != 0 )
  {
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_designerName.u.m_Id = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass._vptr_CEntityClass = off_3F79390;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_ComponentOffsets.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_AllHelpers.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classInputs.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classOutputs.m_Size = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_requiredEHandle.m_Index = -1;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_hNetworkSerializer = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pBaseClassInfo = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pClassInfo = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_flags = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_nAllHelpersFlags = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pScriptClassDesc = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pInputs = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_nInputCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pOutputs = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_nOutputCount = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pGameClass = 0;
    CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass._vptr_CEntityClass = off_408F2F0;
    __cxa_guard_release(&`guard variable for'CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass);
    __cxa_atexit(
      CPointSpotlight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass,
      &_dso_handle);
  }
  if ( g_pEntityCPointSpotlightClass != 0 )
    return &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass;
  if ( `guard variable for'CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo) != 0 )
  {
    EntityClassInfo = CModelPointEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo,
      "CPointSpotlight",
      "point_spotlight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo);
  }
  CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pClassInfo = &CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo;
  CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pBaseClassInfo = CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo.m_pBaseClassInfo;
  g_pEntityCPointSpotlightClass = &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass;
  CPointSpotlight::GetEntityClassInfo(void)::g_EntityCPointSpotlightClassInfo.m_pClass = &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass;
  CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCPointSpotlightClass->m_pComponentOverrides = 0;
  return &CPointSpotlight::GetEntityClassInternal(void)::g_EntityCPointSpotlightClass;
}


// CPointSpotlight::GetDataDescMap  (line 79, @0x000000000231ecb0, libserver.so)
// globals: CPointSpotlight::m_DataMap
datamap_t *__fastcall CPointSpotlight::GetDataDescMap(CPointSpotlight *const this)
{
  return &CPointSpotlight::m_DataMap;
}


// CPointSpotlight::AddDatadescMetadataKeys  (line 79, @0x00000000023291b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CPointSpotlight::GetEntityClass(void)
void __fastcall CPointSpotlight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CPointSpotlight::GetEntityClass);
}


// CPointSpotlight::GetBaseMap  (line 79, @0x00000000023291d0, libserver.so)
datamap_t *__cdecl CPointSpotlight::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CPointSpotlight>  (line 79, @0x0000000002333e90, libserver.so)  // inlines: AddDatadescMetadataKeys, AddToTail, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<char*>, Element, GenerateName, GrowMemory, operator[], strcat, strcpy
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, operator new [], stpcpy, __cxa_guard_release, __cxa_atexit, CUtlMemory<char*, int>::Grow, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_09.cpp
// strings: "CPointSpotlight"
// globals: `guard variable for'DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder, `guard variable for'DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc, CPointSpotlight::GetEntityClass(void), CPointSpotlight::m_DataMap, DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CPointSpotlight>(CPointSpotlight *a1)
{
  char *v2; // r12
  __int64 m_Size; // rbx
  int v4; // eax
  char **v5; // rax

  if ( `guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder) != 0 )
  {
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_pszBase = "CPointSpotlight";
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_nLenBase = 15;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder,
      &_dso_handle);
  }
  CPointSpotlight::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc) != 0 )
  {
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    v2 = operator new[](DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_nLenBase + 15);
    strcpy(stpcpy(v2, DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_pszBase), "SpotlightThink");
    m_Size = DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size;
    v4 = DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size;
    if ( DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size == DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<char *,int>::Grow(&DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory, 1);
      v4 = DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size;
    }
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Size = v4 + 1;
    v5 = &DataMapInit<CPointSpotlight>(CPointSpotlight *)::nameHolder.m_Names.m_Memory.m_pMemory[m_Size];
    if ( v5 != 0 )
      *v5 = v2;
    DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc[20].fieldName = v2;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc);
  }
  CPointSpotlight::m_DataMap.dataNumFields = 20;
  CPointSpotlight::m_DataMap.dataDesc = &DataMapInit<CPointSpotlight>(CPointSpotlight *)::dataDesc[1];
  AddDatadescMetadataKeys(&CPointSpotlight::m_DataMap, CPointSpotlight::GetEntityClass);
  return &CPointSpotlight::m_DataMap;
}


// CPointSpotlight::CPointSpotlight  (line 116, @0x00000000023291e0, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CHandle, CModelPointEntity, CStrongHandle
// calls: CBaseModelEntity::CBaseModelEntity
void __fastcall CPointSpotlight::CPointSpotlight(CPointSpotlight *const this)
{
  CBaseModelEntity::CBaseModelEntity(this);
  this->m_nHaloSprite.m_pBinding = 0;
  this->_vptr_IHandleEntity = &off_408F370;
  this->m_hSpotlight.m_Index = -1;
  this->m_hSpotlightTarget.m_Index = -1;
  this->m_OnOn._vptr_CEntityIOOutput = off_3F7C190;
  this->m_OnOff._vptr_CEntityIOOutput = off_3F7C190;
  this->m_flHDRColorScale = 1.0;
  this->m_flHaloScale = 60.0;
}


// CPointSpotlight::Precache  (line 131, @0x00000000023395e0, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
// strings: "materials/sprites/light_glow03.vmat", "materials/sprites/glow_test02.vmat"
void __fastcall CPointSpotlight::Precache(CPointSpotlight *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  PrecacheMaterial("materials/sprites/light_glow03.vmat", pContext);
  PrecacheMaterial("materials/sprites/glow_test02.vmat", pContext);
}


// CPointSpotlight::Spawn  (line 144, @0x0000000002332f10, libserver.so)  // inlines: GetClassNameAsCStr, GetClassname, GetDebugName, HasSpawnFlags, Set, String, curtime, operator=
// calls: CModelPointEntity::Spawn, GetMaterialIndex, CStrongHandle<InfoForResourceTypeIMaterial2>::Init, CBaseEntity::SetMoveType, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CEntityIdentity::GetDebugName, DevMsg(char const*,...)
// strings: "materials/sprites/light_glow03.vmat", "%s (%s) has an invalid spotlight width %.1f (max %.1f).\n", "%s (%s) has an invalid spotlight length <= 0, setting to 500\n", "%s (%s) has an invalid spotlight width <= 0, setting to 10\n"
// globals: CPointSpotlight::SpotlightThink(void)
void __fastcall CPointSpotlight::Spawn(CPointSpotlight *const this, const CEntityKeyValues *pKeyValues)
{
  bool v3; // cf
  float m_flSpotlightGoalWidth; // xmm0_4
  vec_t z; // xmm0_4
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  unsigned int m_Value; // eax
  float m_flSpotlightMaxLength; // xmm0_4
  double v10; // xmm1_8
  CGlobalVars *v11; // r12
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v13; // xmm0_8
  const char *DebugName; // rax
  CEntityIdentity *m_pEntity; // rcx
  const char *m_pAsString; // rsi
  const char *v17; // rax
  CEntityIdentity *v18; // rcx
  const char *v19; // rsi
  const char *v20; // rax
  CEntityIdentity *v21; // rcx
  const char *v22; // rsi
  double v23; // [rsp+8h] [rbp-28h]
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *hResource; // [rsp+10h] [rbp-20h]

  CModelPointEntity::Spawn(this, pKeyValues);
  GetMaterialIndex("materials/sprites/light_glow03.vmat");
  CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&this->m_nHaloSprite, hResource);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  v3 = this->m_flSpotlightMaxLength > 0.0;
  this->m_bEfficientSpotlight = 1;
  if ( v3 )
  {
    m_flSpotlightGoalWidth = this->m_flSpotlightGoalWidth;
    if ( m_flSpotlightGoalWidth > 0.0 )
    {
LABEL_3:
      if ( m_flSpotlightGoalWidth > 102.3 )
      {
        v23 = m_flSpotlightGoalWidth;
        DebugName = CEntityIdentity::GetDebugName(this->m_pEntity);
        m_pEntity = this->m_pEntity;
        m_pAsString = "";
        if ( m_pEntity->m_designerName.u.m_Id != 0 )
          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
        DevMsg(
          "%s (%s) has an invalid spotlight width %.1f (max %.1f).\n",
          m_pAsString,
          DebugName,
          v23,
          102.3000030517578);
        this->m_flSpotlightGoalWidth = 102.3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    v17 = CEntityIdentity::GetDebugName(this->m_pEntity);
    v18 = this->m_pEntity;
    v19 = "";
    if ( v18->m_designerName.u.m_Id != 0 )
      v19 = v18->m_designerName.u.m_pAsString;
    DevMsg("%s (%s) has an invalid spotlight length <= 0, setting to 500\n", v19, v17);
    this->m_flSpotlightMaxLength = 500.0;
    m_flSpotlightGoalWidth = this->m_flSpotlightGoalWidth;
    if ( m_flSpotlightGoalWidth > 0.0 )
      goto LABEL_3;
  }
  v20 = CEntityIdentity::GetDebugName(this->m_pEntity);
  v21 = this->m_pEntity;
  v22 = "";
  if ( v21->m_designerName.u.m_Id != 0 )
    v22 = v21->m_designerName.u.m_pAsString;
  DevMsg("%s (%s) has an invalid spotlight width <= 0, setting to 10\n", v22, v20);
  this->m_flSpotlightGoalWidth = 10.0;
LABEL_4:
  this->m_hSpotlight.m_Index = -1;
  this->m_hSpotlightTarget.m_Index = -1;
  z = vec3_origin.z;
  x = vec3_origin.x;
  y = vec3_origin.y;
  this->m_vSpotlightTargetPos.z = z;
  m_Value = this->m_spawnflags.m_Value;
  this->m_vSpotlightCurrentPos.z = z;
  this->m_vSpotlightDir.z = z;
  m_flSpotlightMaxLength = this->m_flSpotlightMaxLength;
  this->m_vSpotlightTargetPos.x = x;
  this->m_flSpotlightCurLength = m_flSpotlightMaxLength;
  this->m_vSpotlightTargetPos.y = y;
  this->m_bSpotlightOn = m_Value & 1;
  this->m_bSpotlightOn &= 1u;
  this->m_vSpotlightCurrentPos.x = x;
  this->m_vSpotlightCurrentPos.y = y;
  this->m_vSpotlightDir.x = x;
  this->m_vSpotlightDir.y = y;
  CBaseEntity::ThinkSet(this, CPointSpotlight::SpotlightThink, 0.0, 0, 0);
  v11 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
    }
    HIDWORD(v13) = 0;
    *&v13 = v11->m_flCurrentTime + 0.1;
  }
  else
  {
    *&v13 = 1036831949;
  }
  CBaseEntity::SetNextThink(this, v13, v10, 0);
}


// CPointSpotlight::ComputeRenderInfo  (line 191, @0x0000000002329250, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetEndWidth, SetFadeLength, operator CEntityInstance*, operator->, operator=<double>, operator=<float>
// calls: CEntityHandle::operator CEntityInstance*, CBaseModelEntity::SetRenderAlpha
// callers: CPointSpotlight::CreateEfficientSpotlight, CPointSpotlight::SpotlightUpdate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::ComputeRenderInfo(CPointSpotlight *const this)
{
  float m_flSpotlightMaxLength; // xmm0_4
  float m_flSpotlightCurLength; // xmm1_4
  CBaseModelEntity *v4; // rax
  uint8 v5; // si
  float *v6; // rax
  float v7; // xmm1_4
  float *v8; // r12
  float v9; // xmm0_4
  float v10; // xmm0_4
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  uint32 m_Index; // eax
  float *m_pInstance; // r12
  CConcreteEntityList *v15; // rcx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  __m128 v18; // xmm1
  float v19; // xmm1_4
  uint32 v20; // eax
  float *v21; // r12
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CBaseModelEntity *v24; // rax
  float *v25; // rax
  float *v26; // r12
  uint32 v27; // eax
  float *v28; // r12
  double v29; // xmm0_8
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  float v32; // xmm0_4
  float v33; // [rsp+8h] [rbp-18h]
  float v34; // [rsp+8h] [rbp-18h]
  float flNewWidthb; // [rsp+Ch] [rbp-14h]
  float flNewWidth; // [rsp+Ch] [rbp-14h]
  float flNewWidtha; // [rsp+Ch] [rbp-14h]
  float flNewWidthd; // [rsp+Ch] [rbp-14h]
  __int32 flNewWidthc; // [rsp+Ch] [rbp-14h]

  m_flSpotlightMaxLength = this->m_flSpotlightMaxLength;
  m_flSpotlightCurLength = this->m_flSpotlightCurLength;
  if ( m_flSpotlightCurLength > (m_flSpotlightMaxLength + m_flSpotlightMaxLength) )
  {
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    v5 = 0;
LABEL_4:
    CBaseModelEntity::SetRenderAlpha(v4, v5);
    flNewWidth = this->m_flSpotlightMaxLength;
    v6 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    v7 = flNewWidth;
    v8 = v6;
    if ( flNewWidth == v6[315] )
    {
      v9 = this->m_flSpotlightCurLength;
    }
    else
    {
      (*(*v6 + 176LL))(v6, 1260, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v8[315] = flNewWidth;
      v9 = this->m_flSpotlightCurLength;
      v7 = this->m_flSpotlightMaxLength;
    }
    goto LABEL_6;
  }
  if ( m_flSpotlightCurLength > m_flSpotlightMaxLength )
  {
    v33 = this->m_flSpotlightMaxLength;
    flNewWidthb = this->m_flSpotlightCurLength;
    v4 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    v5 = (1.0 - ((flNewWidthb - v33) / v33));
    goto LABEL_4;
  }
  v24 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
  CBaseModelEntity::SetRenderAlpha(v24, 1u);
  flNewWidtha = this->m_flSpotlightCurLength;
  v25 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
  v9 = flNewWidtha;
  v26 = v25;
  if ( flNewWidtha != v25[315] )
  {
    (*(*v25 + 176LL))(v25, 1260, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v26[315] = flNewWidtha;
    v9 = this->m_flSpotlightCurLength;
  }
  v7 = this->m_flSpotlightMaxLength;
LABEL_6:
  v10 = (v9 / v7) * this->m_flSpotlightGoalWidth;
  if ( v10 > 102.3 )
  {
    v12 = 0x42CC999Au;
  }
  else
  {
    v11 = 0;
    v11.m128_f32[0] = fmaxf(0.0, v10);
    v12 = v11;
  }
  m_Index = this->m_hSpotlight.m_Index;
  m_pInstance = 0;
  v15 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlight.m_Index) >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[this->m_hSpotlight.m_Index & 0x1FF];
      if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
        m_pInstance = v17->m_pInstance;
    }
  }
  v18 = _mm_cmplt_ss(0x42CC999Au, v12);
  LODWORD(v19) = _mm_andnot_ps(v18, v12).m128_u32[0] | v18.m128_i32[0] & 0x42CC999A;
  if ( v19 != m_pInstance[314] )
  {
    v34 = v19;
    flNewWidthc = v12.m128_i32[0];
    (*(*m_pInstance + 176LL))(m_pInstance, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v15 = CEntityHandle::gm_pEntityList;
    m_pInstance[314] = v34;
    v12.m128_i32[0] = flNewWidthc;
  }
  if ( (this->m_spawnflags.m_Value & 2) != 0 )
  {
    v20 = this->m_hSpotlightTarget.m_Index;
    v21 = 0;
    if ( v20 + 2 > 1 )
    {
      v22 = v15->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v23 != 0 && v20 == v23->m_EHandle.m_Index )
          v21 = v23->m_pInstance;
      }
    }
    if ( v21[288] != 0.0 )
    {
      (*(*v21 + 176LL))(v21, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
      v21[288] = 0.0;
    }
  }
  else
  {
    v27 = this->m_hSpotlightTarget.m_Index;
    v28 = 0;
    v29 = v12.m128_f32[0] * 1.8;
    if ( v27 + 2 > 1 )
    {
      v30 = v15->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v30 != 0 )
      {
        v31 = &v30[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v31 != 0 && v27 == v31->m_EHandle.m_Index )
          v28 = v31->m_pInstance;
      }
    }
    v32 = v29;
    if ( v32 != v28[288] )
    {
      flNewWidthd = v32;
      (*(*v28 + 176LL))(v28, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v28[288] = flNewWidthd;
    }
  }
}


// CPointSpotlight::CreateEfficientSpotlight  (line 231, @0x0000000002337420, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, VectorSubtract, operator CEntityInstance*, operator->, operator=
// calls: CPointSpotlight::SpotlightCreate, CPointSpotlight::SpotlightCurrentPos, CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, VectorNormalize, CBaseEntity::SetMoveType, CPointSpotlight::ComputeRenderInfo
// callers: CPointSpotlight::Activate, CPointSpotlight::InputLightOn
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::CreateEfficientSpotlight(CPointSpotlight *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // eax
  CBaseEntity *m_pInstance; // rdi
  CConcreteEntityList *v7; // r8
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const Vector *AbsOrigin; // r12
  CEntityInstance *v11; // rax
  CConcreteEntityList *v12; // rsi
  vec_t z; // xmm0_4
  CEntityInstance *v14; // r12
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  const Vector *v18; // rax
  CEntityInstance *v19; // rdi
  CConcreteEntityList *v20; // rsi
  uint32 v21; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  float v24; // xmm0_4
  uint32 v25; // eax
  CBaseEntity *v26; // rdi
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  Vector v29; // 0:kr00_12.12

  m_Index = this->m_hSpotlightTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hSpotlightTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    CPointSpotlight::SpotlightCreate(this);
    v29 = CPointSpotlight::SpotlightCurrentPos(this);
    v5 = this->m_hSpotlightTarget.m_Index;
    m_pInstance = 0;
    v7 = CEntityHandle::gm_pEntityList;
    this->m_vSpotlightCurrentPos = v29;
    if ( v5 + 2 > 1 )
    {
      v8 = v7->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v9 != 0 && v5 == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    CBaseEntity::SetAbsOrigin(m_pInstance, &this->m_vSpotlightCurrentPos);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v11 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    v12 = CEntityHandle::gm_pEntityList;
    HIDWORD(v11[24].m_hPrivateScope.m_hScope) = LODWORD(AbsOrigin->x);
    *&v11[24].m_iszPrivateVScripts.u.m_Id = AbsOrigin->y;
    z = AbsOrigin->z;
    v14 = 0;
    *(&v11[24].m_iszPrivateVScripts.u.m_pAsString + 1) = z;
    v15 = this->m_hSpotlightTarget.m_Index;
    if ( v15 + 2 > 1 )
    {
      v16 = v12->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v16 != 0 )
      {
        v17 = &v16[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v17 != 0 && v15 == v17->m_EHandle.m_Index )
          v14 = v17->m_pInstance;
      }
    }
    v18 = CBaseEntity::GetAbsOrigin(v14);
    v19 = 0;
    v20 = CEntityHandle::gm_pEntityList;
    *&v14[24].m_pEntity = v18->x - *(&v14[24].m_hPrivateScope.m_hScope + 1);
    *(&v14[24].m_pEntity + 1) = v18->y - *&v14[24].m_iszPrivateVScripts.u.m_Id;
    *&v14[24].m_hPrivateScope.m_hScope = v18->z - *(&v14[24].m_iszPrivateVScripts.u.m_pAsString + 1);
    v21 = this->m_hSpotlightTarget.m_Index;
    if ( v21 + 2 > 1 )
    {
      v22 = v20->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v22 != 0 )
      {
        v23 = &v22[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v23 != 0 && v21 == v23->m_EHandle.m_Index )
          v19 = v23->m_pInstance;
      }
    }
    v24 = VectorNormalize(&v19[24].m_pEntity);
    v25 = this->m_hSpotlightTarget.m_Index;
    v26 = 0;
    this->m_flSpotlightCurLength = v24;
    if ( v25 + 2 > 1 )
    {
      v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v27 != 0 )
      {
        v28 = &v27[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v28 != 0 && v25 == v28->m_EHandle.m_Index )
          v26 = v28->m_pInstance;
      }
    }
    CBaseEntity::SetMoveType(v26, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
    CPointSpotlight::ComputeRenderInfo(this);
  }
}


// CPointSpotlight::Activate  (line 251, @0x0000000002337710, libserver.so)
// calls: CBaseModelEntity::Activate, CBaseEntity::GetMoveParent, CBaseEntity::ThinkSet, CPointSpotlight::CreateEfficientSpotlight
void __fastcall CPointSpotlight::Activate(CPointSpotlight *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    this->m_bEfficientSpotlight = 0;
  }
  else if ( this->m_bEfficientSpotlight )
  {
    if ( this->m_bSpotlightOn )
      CPointSpotlight::CreateEfficientSpotlight(this);
    CBaseEntity::ThinkSet(this, 0LL, 0.0, 0, 0);
  }
}


// CPointSpotlight::OnEntityEvent  (line 276, @0x0000000002324290, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, curtime, operator bool, operator->
// calls: CBaseEntity::OnEntityEvent, CBaseEntity::GetMoveParent, CBaseEntity::ThinkSet, CBaseEntity::SetNextThink, CEntityHandle::operator CEntityInstance*, CBaseEntity::SetMoveType
// globals: CEntityHandle::gm_pEntityList, CPointSpotlight::SpotlightThink(void)
void __fastcall CPointSpotlight::OnEntityEvent(CPointSpotlight *const this, EntityEvent_t event, void *pEventData)
{
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  double v9; // xmm1_8
  CGlobalVars *v10; // r14
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  CBaseEntity *v13; // rax

  if ( event == EntityEvent_t::ENTITY_EVENT_PARENT_CHANGED && CBaseEntity::GetMoveParent(this) != 0 )
  {
    m_Index = this->m_hSpotlightTarget.m_Index;
    this->m_bEfficientSpotlight = 0;
    if ( m_Index + 2 > 1 )
    {
      v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v7 != 0 )
      {
        v8 = &v7[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        {
          v13 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
          CBaseEntity::SetMoveType(v13, MoveType_t::MOVETYPE_FLY, MoveCollide_t::MOVECOLLIDE_DEFAULT);
        }
      }
    }
    CBaseEntity::ThinkSet(this, CPointSpotlight::SpotlightThink, 0.0, 0, 0);
    v10 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v12) = 0;
      *&v12 = v10->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v12 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v12, v9, 0);
  }
  CBaseEntity::OnEntityEvent(this, event, pEventData);
}


// CPointSpotlight::UpdateTransmitState  (line 301, @0x000000000231f2b0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CPointSpotlight::UpdateTransmitState(CPointSpotlight *const this)
{
  if ( this->m_bEfficientSpotlight )
    return CBaseEntity::SetTransmitState(this, 8);
  else
    return CBaseEntity::SetTransmitState(this, 16);
}


// CPointSpotlight::SpotlightThink  (line 312, @0x0000000002337c10, libserver.so)  // inlines: curtime
// calls: CBaseEntity::GetMoveParent, CBaseEntity::SetNextThink, CPointSpotlight::SpotlightUpdate
void __fastcall CPointSpotlight::SpotlightThink(CPointSpotlight *const this)
{
  double v2; // xmm1_8
  CGlobalVars *v3; // rbx
  CGlobalVars *v4; // rax
  double v5; // xmm0_8
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  CGlobalVars *v7; // rbx
  FnGlobalVarsWarningFunc v8; // rax
  double v9; // xmm0_8

  if ( CBaseEntity::GetMoveParent(this) != 0 )
  {
    v3 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      v4 = gpGlobals;
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
        if ( m_pfnWarningFunc != 0 )
          m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        v4 = gpGlobals;
      }
      *&v5 = LODWORD(v3->m_flCurrentTime);
    }
    else
    {
      v4 = 0;
      v5 = 0.0;
    }
    *&v5 = *&v5 + v4->interval_per_tick;
    CBaseEntity::SetNextThink(this, v5, v2, 0);
  }
  else
  {
    v7 = gpGlobals;
    if ( gpGlobals != 0 )
    {
      if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
      {
        v8 = gpGlobals->m_pfnWarningFunc;
        if ( v8 != 0 )
          v8(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
      }
      HIDWORD(v9) = 0;
      *&v9 = v7->m_flCurrentTime + 0.1;
    }
    else
    {
      *&v9 = 1036831949;
    }
    CBaseEntity::SetNextThink(this, v9, v2, 0);
  }
  CPointSpotlight::SpotlightUpdate(this);
}


// CPointSpotlight::SpotlightCreate  (line 331, @0x0000000002336950, libserver.so)  // inlines: AddSpawnFlags, CGameTrace, CStrongHandle, CVariantBase, EnableInteractsWith, FireOutput, Free, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetSerialNumber, IndexToIdentity, Init, IsValid, LengthSqr, LookupEntity, NetworkStateChanged, Ray_t, RnCollisionAttr_t, Set, SetAlpha, SetBlue, SetBrightness, SetColor, SetComponent, SetEndWidth, SetGreen, SetHDRColorScale, SetHaloScale, SetHaloTexture, SetNoise, SetRed, SetRenderColor, SetVal, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, a, b, g, operator CBaseEntity*, operator CEntityInstance*, operator CWeakHandle<InfoForResourceTypeIMaterial2>, operator*, operator+, operator->, operator=, operator=<CWeakHandle<InfoForResourceTypeIMaterial2> >, operator=<double>, operator=<float>, operator|=<int>, r, ~CStrongHandle, ~CVariantBase
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CreateEntityByName, CEntityHandle::operator CEntityInstance*, DispatchSpawn, CBaseEntity::SetAbsOrigin, CBeam::BeamCreate, CStrongHandle<InfoForResourceTypeIMaterial2>::Init (20 total)
// callers: CPointSpotlight::CreateEfficientSpotlight, CPointSpotlight::SpotlightUpdate
// strings: "spotlight_end", "materlials/sprites/glow_test02.vmat"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::SpotlightCreate(CPointSpotlight *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const QAngle *AbsAngles; // rax
  float m_flSpotlightMaxLength; // xmm1_4
  const Vector *AbsOrigin; // rax
  const Vector *v8; // rax
  float m_fValue; // xmm3_4
  vec_t v10; // xmm1_4
  CBaseEntity *EntityByName; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CBaseEntity *v15; // rax
  CBaseEntity *v16; // rax
  CEntityInstance *v17; // rax
  unsigned __int8 v18; // r15
  CEntityInstance *v19; // rax
  CEntityInstance *v20; // r13
  char m_pEntity_high; // r14
  float *v22; // rax
  double v23; // xmm1_8
  float *v24; // rax
  double v25; // xmm0_8
  double v26; // xmm2_8
  double v27; // xmm3_8
  CBeam *v28; // rax
  CEntityIdentity *v29; // rdx
  int v30; // eax
  __int16 v31; // cx
  float m_flHDRColorScale; // r15d
  float *v33; // rax
  CEntityInstance *v34; // r13
  int v35; // r15d
  unsigned __int8 v36; // r8
  char v37; // r15
  CEntityInstance *v38; // rax
  CStrongHandle<InfoForResourceTypeIMaterial2> *v39; // r15
  float m_flHaloScale; // r13d
  float *v41; // rax
  CBeam *v42; // r15
  __m128 m_flSpotlightGoalWidth_low; // xmm1
  __m128 v44; // xmm0
  float v45; // xmm0_4
  CBaseModelEntity *v46; // rax
  float *v47; // rax
  float *v48; // r15
  const CBaseEntity *v49; // rax
  const Vector *v50; // r15
  const Vector *v51; // r12
  CBeam *v52; // rax
  uint32 v53; // eax
  CBaseEntity *m_pInstance; // r12
  CEntityIdentity *v55; // rdx
  CEntityIdentity *v56; // rdx
  CBeam *v57; // rax
  unsigned __int8 v58; // [rsp+8h] [rbp-188h]
  float v59; // [rsp+Ch] [rbp-184h]
  float v60; // [rsp+Ch] [rbp-184h]
  unsigned __int8 v61; // [rsp+Ch] [rbp-184h]
  unsigned __int8 v62; // [rsp+Ch] [rbp-184h]
  unsigned __int8 v63; // [rsp+Ch] [rbp-184h]
  float v64; // [rsp+Ch] [rbp-184h]
  float hResourceb; // [rsp+10h] [rbp-180h]
  float hResourcec; // [rsp+10h] [rbp-180h]
  unsigned __int8 hResource; // [rsp+10h] [rbp-180h]
  unsigned __int8 hResourcea; // [rsp+10h] [rbp-180h]
  const ResourceBinding_t<InfoForResourceTypeIMaterial2> *hResourcef; // [rsp+10h] [rbp-180h]
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResourced; // [rsp+10h] [rbp-180h]
  float hResourceg; // [rsp+10h] [rbp-180h]
  CStrongHandle<InfoForResourceTypeIMaterial2>::ResourceHandleTyped_t hResourcee; // [rsp+10h] [rbp-180h]
  float src; // [rsp+18h] [rbp-178h]
  float srca; // [rsp+18h] [rbp-178h]
  CTraceFilterSimple v75; // [rsp+20h] [rbp-170h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-130h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-E0h] BYREF

  m_Index = this->m_hSpotlightTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hSpotlightTarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || v4->m_pInstance == 0 )
  {
    AbsAngles = CBaseEntity::GetAbsAngles(this);
    AngleVectors(AbsAngles, &this->m_vSpotlightDir, 0, 0);
    memset(&tr.m_ShapeAttributes, 0, 31);
    tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
    CGameTrace::Init(&tr);
    m_flSpotlightMaxLength = this->m_flSpotlightMaxLength;
    v59 = this->m_vSpotlightDir.x * m_flSpotlightMaxLength;
    hResourceb = this->m_vSpotlightDir.y * m_flSpotlightMaxLength;
    src = m_flSpotlightMaxLength * this->m_vSpotlightDir.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v60 = v59 + AbsOrigin->x;
    hResourcec = hResourceb + AbsOrigin->y;
    srca = src + AbsOrigin->z;
    v8 = CBaseEntity::GetAbsOrigin(this);
    m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
    ray.m_Start.w = 0.0;
    memset(&ray.m_Delta.w, 0, 36);
    ray.m_flRadius = m_fValue;
    ray.m_Delta.x = v60 - v8->x;
    ray.m_Delta.y = hResourcec - v8->y;
    v10 = srca - v8->z;
    ray.m_IsRay = 1;
    ray.m_Delta.z = v10;
    ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (v10 * v10)) != 0.0;
    ray.m_Start.Vector = *v8;
    CTraceFilterSimple::CTraceFilterSimple(&v75, this, 4, 0);
    v75.m_attr.m_nInteractsWith |= 0x7001uLL;
    CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v75, &tr);
    EntityByName = CreateEntityByName("spotlight_end", -1);
    if ( EntityByName != 0 && (m_pEntity = EntityByName->m_pEntity) != 0 )
    {
      v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSpotlightTarget.m_Index) = v14 | this->m_hSpotlightTarget.m_Index & 0x8000;
      this->m_hSpotlightTarget.m_Index = (v13 << 15) | this->m_hSpotlightTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSpotlightTarget.m_Index = -1;
    }
    v15 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    DispatchSpawn(v15, 0);
    v16 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    CBaseEntity::SetAbsOrigin(v16, &tr.endpos);
    v17 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    (*(v17->_vptr_IHandleEntity + 40))(v17, this);
    v18 = this->m_clrRender.m_Value._color[0];
    hResource = this->m_clrRender.m_Value._color[1];
    v61 = this->m_clrRender.m_Value._color[2];
    v19 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    v20 = v19;
    m_pEntity_high = HIBYTE(v19[17].m_pEntity);
    if ( v18 != BYTE4(v19[17].m_pEntity) )
    {
      (*(v19->_vptr_IHandleEntity + 22))(v19, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE4(v20[17].m_pEntity) = v18;
    }
    if ( hResource != BYTE5(v20[17].m_pEntity) )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE5(v20[17].m_pEntity) = hResource;
    }
    if ( v61 != BYTE6(v20[17].m_pEntity) )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE6(v20[17].m_pEntity) = v61;
    }
    if ( m_pEntity_high != HIBYTE(v20[17].m_pEntity) )
    {
      (*(v20->_vptr_IHandleEntity + 22))(v20, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      HIBYTE(v20[17].m_pEntity) = m_pEntity_high;
    }
    v22 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
    if ( this->m_flSpotlightMaxLength != v22[289] )
    {
      v64 = this->m_flSpotlightMaxLength;
      hResourced = v22;
      (*(*v22 + 176LL))(v22, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(&hResourced[36].m_pData + 1) = v64;
    }
    if ( (this->m_spawnflags.m_Value & 2) != 0 )
    {
      v24 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      if ( v24[288] != 0.0 )
      {
        hResourcee = v24;
        (*(*v24 + 176LL))(v24, 1152, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v25, v23, v26, v27, 0.0);
        LODWORD(hResourcee[36].m_pData) = 0;
      }
    }
    v28 = CBeam::BeamCreate("materlials/sprites/glow_test02.vmat", this->m_flSpotlightGoalWidth, *&v23);
    if ( v28 != 0 && (v29 = v28->m_pEntity) != 0 )
    {
      v30 = (v29->m_EHandle.m_Index >> 15) - (v29->m_flags & 1);
      v31 = 0x7FFF;
      if ( v29->m_EHandle.m_Index != -1 )
        v31 = v29->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hSpotlight.m_Index) = v31 | this->m_hSpotlight.m_Index & 0x8000;
      this->m_hSpotlight.m_Index = (v30 << 15) | this->m_hSpotlight.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSpotlight.m_Index = -1;
    }
    m_flHDRColorScale = this->m_flHDRColorScale;
    v33 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    v34 = v33;
    if ( m_flHDRColorScale != v33[289] )
    {
      (*(*v33 + 176LL))(v33, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *(&v34[24]._vptr_IHandleEntity + 1) = m_flHDRColorScale;
      v34 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    }
    v35 = HIDWORD(v34[8].m_hPrivateScope.m_hScope) | 0x8000;
    if ( HIDWORD(v34[8].m_hPrivateScope.m_hScope) != v35 )
    {
      (*(v34->_vptr_IHandleEntity + 22))(v34, 404, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      HIDWORD(v34[8].m_hPrivateScope.m_hScope) = v35;
      v34 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    }
    v36 = this->m_clrRender.m_Value._color[1];
    v37 = HIBYTE(v34[17].m_pEntity);
    v62 = this->m_clrRender.m_Value._color[0];
    hResourcea = this->m_clrRender.m_Value._color[2];
    if ( v62 != BYTE4(v34[17].m_pEntity) )
    {
      v58 = this->m_clrRender.m_Value._color[1];
      (*(v34->_vptr_IHandleEntity + 22))(v34, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v36 = v58;
      BYTE4(v34[17].m_pEntity) = v62;
    }
    v63 = v36;
    if ( v36 != BYTE5(v34[17].m_pEntity) )
    {
      (*(v34->_vptr_IHandleEntity + 22))(v34, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE5(v34[17].m_pEntity) = v63;
    }
    if ( hResourcea != BYTE6(v34[17].m_pEntity) )
    {
      (*(v34->_vptr_IHandleEntity + 22))(v34, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      BYTE6(v34[17].m_pEntity) = hResourcea;
    }
    if ( v37 != HIBYTE(v34[17].m_pEntity) )
    {
      (*(v34->_vptr_IHandleEntity + 22))(v34, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      HIBYTE(v34[17].m_pEntity) = v37;
    }
    hResourcef = this->m_nHaloSprite.m_pBinding;
    v38 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    *&ray.m_Start.x = 0;
    v39 = v38;
    CStrongHandle<InfoForResourceTypeIMaterial2>::Init(&ray, hResourcef);
    if ( v39[148].m_pBinding != *&ray.m_Start.x )
    {
      (*&v39->m_pBinding[5].m_nFlags)(v39, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      CStrongHandle<InfoForResourceTypeIMaterial2>::Init(v39 + 148, &ray);
    }
    CStrongHandle<InfoForResourceTypeIMaterial2>::Shutdown(&ray);
    m_flHaloScale = this->m_flHaloScale;
    v41 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    v42 = v41;
    if ( m_flHaloScale != v41[316] )
    {
      (*(*v41 + 176LL))(v41, 1264, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v42->m_fHaloScale.m_Value = m_flHaloScale;
      v42 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    }
    m_flSpotlightGoalWidth_low = LODWORD(this->m_flSpotlightGoalWidth);
    v44 = _mm_cmplt_ss(0x42CC999Au, m_flSpotlightGoalWidth_low);
    LODWORD(v45) = _mm_andnot_ps(v44, m_flSpotlightGoalWidth_low).m128_u32[0] | v44.m128_i32[0] & 0x42CC999A;
    if ( v45 != v42->m_fEndWidth.m_Value )
    {
      hResourceg = v45;
      (*(v42->_vptr_IHandleEntity + 22))(v42, 1256, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v42->m_fEndWidth.m_Value = hResourceg;
      v42 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    }
    CBeam::SetBeamFlags(v42, 640);
    v46 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    CBaseModelEntity::SetRenderAlpha(v46, 0x40u);
    v47 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
    v48 = v47;
    if ( v47[317] != 0.0 )
    {
      (*(*v47 + 176LL))(v47, 1268, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v48[317] = 0.0;
    }
    if ( this->m_bEfficientSpotlight )
    {
      v49 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      v50 = CBaseEntity::GetAbsOrigin(v49);
      v51 = CBaseEntity::GetAbsOrigin(this);
      v52 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
      CBeam::PointsInit(v52, v51, v50);
    }
    else
    {
      v53 = this->m_hSpotlightTarget.m_Index;
      m_pInstance = 0;
      if ( v53 + 2 > 1 )
      {
        v55 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
        if ( v55 != 0 )
        {
          v56 = &v55[this->m_hSpotlightTarget.m_Index & 0x1FF];
          if ( v56 != 0 && v53 == v56->m_EHandle.m_Index )
            m_pInstance = v56->m_pInstance;
        }
      }
      v57 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlight);
      CBeam::EntsInit(v57, this, m_pInstance);
    }
    ray.m_Start.z = 0.0;
    *&ray.m_Start.x = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_OnOn, this, this, &ray, 0.0);
    if ( (BYTE2(ray.m_Start.z) & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, *&ray.m_Start.x);
  }
}


// CPointSpotlight::SpotlightCurrentPos  (line 382, @0x00000000023296a0, libserver.so)  // inlines: CGameTrace, EnableInteractsWith, GetFloat, Init, LengthSqr, Ray_t, RnCollisionAttr_t, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleVectors, CGameTrace::Init, CBaseEntity::GetAbsOrigin, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay
// callers: CPointSpotlight::CreateEfficientSpotlight, CPointSpotlight::SpotlightUpdate
Vector __fastcall CPointSpotlight::SpotlightCurrentPos(CPointSpotlight *const this)
{
  const QAngle *AbsAngles; // rax
  float m_flSpotlightMaxLength; // xmm0_4
  const Vector *AbsOrigin; // rax
  const Vector *v5; // rax
  float m_fValue; // xmm4_4
  float v9; // [rsp+4h] [rbp-17Ch]
  float v10; // [rsp+4h] [rbp-17Ch]
  float v11; // [rsp+8h] [rbp-178h]
  float v12; // [rsp+8h] [rbp-178h]
  float v13; // [rsp+Ch] [rbp-174h]
  float v14; // [rsp+Ch] [rbp-174h]
  CTraceFilterSimple v15; // [rsp+20h] [rbp-160h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-120h] BYREF
  trace_t tr; // [rsp+B0h] [rbp-D0h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  AbsAngles = CBaseEntity::GetAbsAngles(this);
  AngleVectors(AbsAngles, &this->m_vSpotlightDir, 0, 0);
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  m_flSpotlightMaxLength = this->m_flSpotlightMaxLength;
  v9 = (this->m_vSpotlightDir.x + this->m_vSpotlightDir.x) * m_flSpotlightMaxLength;
  v11 = (this->m_vSpotlightDir.y + this->m_vSpotlightDir.y) * m_flSpotlightMaxLength;
  v13 = (this->m_vSpotlightDir.z + this->m_vSpotlightDir.z) * m_flSpotlightMaxLength;
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v10 = v9 + AbsOrigin->x;
  v12 = v11 + AbsOrigin->y;
  v14 = v13 + AbsOrigin->z;
  v5 = CBaseEntity::GetAbsOrigin(this);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_Start.w = 0.0;
  memset(&ray.m_Delta.w, 0, 36);
  ray.m_flRadius = m_fValue;
  ray.m_Delta.x = v10 - v5->x;
  ray.m_Delta.y = v12 - v5->y;
  ray.m_Delta.z = v14 - v5->z;
  ray.m_IsRay = 1;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  ray.m_Start.Vector = *v5;
  CTraceFilterSimple::CTraceFilterSimple(&v15, this, 4, 0);
  v15.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v15, &tr);
  *&result.x = *&tr.endpos.x;
  result.z = tr.endpos.z;
  return result;
}


// CPointSpotlight::SpotlightDestroy  (line 397, @0x000000000232fd80, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator bool, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, UTIL_Remove, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CPointSpotlight::InputLightOff, CPointSpotlight::SpotlightUpdate
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::SpotlightDestroy(CPointSpotlight *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  uint32 v5; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  uint32 v9; // eax
  CEntityInstance *v10; // rdi
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_Index = this->m_hSpotlight.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlight.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hSpotlight.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        value.m_type = 0;
        value.m_flags = 0;
        value.m_uint64 = 0;
        CEntityIOOutput::FireOutputInternal(&this->m_OnOff, this, this, &value, 0.0);
        if ( (value.m_flags & 1) != 0 )
          (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
        v5 = this->m_hSpotlight.m_Index;
        m_pInstance = 0;
        if ( v5 + 2 > 1 )
        {
          v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlight.m_Index) >> 9) & 0x3F];
          if ( v7 != 0 )
          {
            v8 = &v7[this->m_hSpotlight.m_Index & 0x1FF];
            if ( v8 != 0 && v5 == v8->m_EHandle.m_Index )
              m_pInstance = v8->m_pInstance;
          }
        }
        UTIL_Remove(m_pInstance);
        v9 = this->m_hSpotlightTarget.m_Index;
        v10 = 0;
        if ( v9 + 2 > 1 )
        {
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[this->m_hSpotlightTarget.m_Index & 0x1FF];
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
              v10 = v12->m_pInstance;
          }
        }
        UTIL_Remove(v10);
      }
    }
  }
}


// CPointSpotlight::SpotlightUpdate  (line 413, @0x00000000023377b0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length, LookupEntity, VectorLength, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator!, operator*=, operator->, operator=
// calls: CPointSpotlight::SpotlightCreate, DevWarning(char const*,...), CPointSpotlight::SpotlightDestroy, CEntityHandle::operator CEntityInstance*, CPointSpotlight::SpotlightCurrentPos, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsVelocity, CPointSpotlight::ComputeRenderInfo
// callers: CPointSpotlight::SpotlightThink, CPointSpotlight::InputForceUpdate
// strings: "**Attempting to update point_spotlight but target ent is NULL\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::SpotlightUpdate(CPointSpotlight *const this)
{
  uint32 m_Index; // eax
  __int64 v3; // rcx
  CEntityIdentity *v4; // rdx
  unsigned __int64 m_Index_low; // rsi
  char *v6; // rdx
  uint32 v7; // eax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  uint32 v10; // ecx
  const CBaseEntity *m_pInstance; // rdi
  CConcreteEntityList *v12; // rsi
  CEntityIdentity *v13; // rax
  CEntityIdentity *v14; // rax
  const Vector *AbsOrigin; // rax
  vec_t v16; // xmm2_4
  float z; // xmm1_4
  vec_t v18; // xmm1_4
  float v19; // xmm1_4
  CBaseEntity *v20; // rax
  CBaseEntity *v21; // rax
  const Vector *v22; // r12
  CEntityInstance *v23; // r12
  const Vector *v24; // rax
  CEntityInstance *v25; // rax
  float v26; // xmm0_4
  __m128d v27; // xmm1
  float v28; // xmm3_4
  CBaseEntity *v29; // rax
  float vTargetDist; // [rsp+Ch] [rbp-44h]
  Vector vTargetDir; // [rsp+10h] [rbp-40h] BYREF
  Vector vecNewVelocity; // [rsp+20h] [rbp-30h] BYREF
  Vector v33; // 0:kr00_12.12

  m_Index = this->m_hSpotlight.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlight.m_Index) >> 9) & 0x3F]) != 0
    && (m_Index_low = 120LL * (this->m_hSpotlight.m_Index & 0x1FF), (v6 = v4 + m_Index_low) != 0)
    && m_Index == *(v6 + 4)
    && *v6 != 0 )
  {
    if ( !this->m_bSpotlightOn )
    {
      CPointSpotlight::SpotlightDestroy(this);
      return;
    }
  }
  else
  {
    if ( !this->m_bSpotlightOn )
      return;
    CPointSpotlight::SpotlightCreate(this);
    v3 = CEntityHandle::gm_pEntityList;
  }
  v7 = this->m_hSpotlightTarget.m_Index;
  v8 = v7 + 2;
  if ( v8 > 1 )
  {
    m_Index_low = LOWORD(this->m_hSpotlightTarget.m_Index);
    v8 = *(v3 + 8 * ((m_Index_low >> 9) & 0x3F) + 8);
    if ( v8 != 0 )
    {
      v9 = m_Index_low & 0x1FF;
      m_Index_low = 8 * v9;
      v3 = 120 * v9;
      v8 += v3;
      if ( v8 != 0 && v7 == *(v8 + 16) && *v8 != 0 )
        goto LABEL_13;
    }
  }
  DevWarning("**Attempting to update point_spotlight but target ent is NULL\n", m_Index_low, v8, v3);
  CPointSpotlight::SpotlightDestroy(this);
  CPointSpotlight::SpotlightCreate(this);
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget) != 0 )
  {
LABEL_13:
    v33 = CPointSpotlight::SpotlightCurrentPos(this);
    v10 = this->m_hSpotlightTarget.m_Index;
    m_pInstance = 0;
    vecNewVelocity = v33;
    v12 = CEntityHandle::gm_pEntityList;
    this->m_vSpotlightCurrentPos.z = v33.z;
    this->m_vSpotlightCurrentPos.x = v33.x;
    this->m_vSpotlightCurrentPos.y = vecNewVelocity.y;
    if ( v10 + 2 > 1 )
    {
      v13 = v12->m_pIdentityChunks[(LOWORD(this->m_hSpotlightTarget.m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[this->m_hSpotlightTarget.m_Index & 0x1FF];
        if ( v14 != 0 && v10 == v14->m_EHandle.m_Index )
          m_pInstance = v14->m_pInstance;
      }
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
    v16 = this->m_vSpotlightCurrentPos.y - AbsOrigin->y;
    z = this->m_vSpotlightCurrentPos.z;
    vTargetDir.x = this->m_vSpotlightCurrentPos.x - AbsOrigin->x;
    v18 = z - AbsOrigin->z;
    vTargetDir.y = v16;
    vTargetDir.z = v18;
    v19 = fsqrt(((vTargetDir.x * vTargetDir.x) + (v16 * v16)) + (v18 * v18));
    if ( v19 < 1.0 )
    {
      v29 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      CBaseEntity::SetAbsVelocity(v29, &vec3_origin);
    }
    else
    {
      vTargetDist = v19;
      vecNewVelocity = vTargetDir;
      VectorNormalize(&vecNewVelocity);
      vecNewVelocity.y = vecNewVelocity.y * (vTargetDist * 10.0);
      vecNewVelocity.x = (vTargetDist * 10.0) * vecNewVelocity.x;
      vecNewVelocity.z = (vTargetDist * 10.0) * vecNewVelocity.z;
      if ( fsqrt(
             ((vecNewVelocity.x * vecNewVelocity.x) + (vecNewVelocity.y * vecNewVelocity.y))
           + (vecNewVelocity.z * vecNewVelocity.z)) > 200.0 )
      {
        VectorNormalize(&vecNewVelocity);
        vecNewVelocity.x = vecNewVelocity.x * 200.0;
        vecNewVelocity.y = vecNewVelocity.y * 200.0;
        vecNewVelocity.z = 200.0 * vecNewVelocity.z;
        VectorNormalize(&vTargetDir);
        v20 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
        CBaseEntity::SetAbsOrigin(v20, &this->m_vSpotlightCurrentPos);
      }
      v21 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      CBaseEntity::SetAbsVelocity(v21, &vecNewVelocity);
      v22 = CBaseEntity::GetAbsOrigin(this);
      *(&CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget)[24].m_hPrivateScope.m_hScope + 4) = *v22;
      v23 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      v24 = CBaseEntity::GetAbsOrigin(v23);
      *&v23[24].m_pEntity = v24->x - *(&v23[24].m_hPrivateScope.m_hScope + 1);
      *(&v23[24].m_pEntity + 1) = v24->y - *&v23[24].m_iszPrivateVScripts.u.m_Id;
      *&v23[24].m_hPrivateScope.m_hScope = v24->z - *(&v23[24].m_iszPrivateVScripts.u.m_pAsString + 1);
      v25 = CEntityHandle::operator CEntityInstance *(&this->m_hSpotlightTarget);
      v26 = VectorNormalize(&v25[24].m_pEntity);
      v27 = _mm_cvtps_pd(LODWORD(this->m_flSpotlightCurLength));
      v27.m128d_f64[0] = v27.m128d_f64[0] * 0.6 + v26 * 0.4;
      v28 = _mm_movedup_pd(v27).m128d_f64[0];
      this->m_flSpotlightCurLength = v28;
      CPointSpotlight::ComputeRenderInfo(this);
    }
  }
}


// CPointSpotlight::InputLightOn  (line 489, @0x0000000002337780, libserver.so)
// calls: CPointSpotlight::CreateEfficientSpotlight
void __fastcall CPointSpotlight::InputLightOn(CPointSpotlight *const this, inputdata_t *const inputdata)
{
  bool v2; // zf

  if ( !this->m_bSpotlightOn )
  {
    v2 = !this->m_bEfficientSpotlight;
    this->m_bSpotlightOn = 1;
    if ( !v2 )
      CPointSpotlight::CreateEfficientSpotlight(this);
  }
}


// CPointSpotlight::InputLightOff  (line 504, @0x000000000232ff10, libserver.so)
// calls: CPointSpotlight::SpotlightDestroy
void __fastcall CPointSpotlight::InputLightOff(CPointSpotlight *const this, inputdata_t *const inputdata)
{
  bool v2; // zf

  if ( this->m_bSpotlightOn )
  {
    v2 = !this->m_bEfficientSpotlight;
    this->m_bSpotlightOn = 0;
    if ( !v2 )
      CPointSpotlight::SpotlightDestroy(this);
  }
}


// CPointSpotlight::InputSetColor  (line 519, @0x0000000002320f50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Init, IsValid, LookupEntity, NetworkStateChanged, SetAlpha, SetBlue, SetColor, SetComponent, SetGreen, SetRed, SetRenderColor, SetVal, a, operator CEntityInstance*, operator bool, operator->
// globals: CEntityHandle::gm_pEntityList
void __fastcall CPointSpotlight::InputSetColor(CPointSpotlight *const this, inputdata_t *const inputdata)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v3; // r8
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int m_int; // r15d
  CEntityInstance *m_pInstance; // rbx
  char m_pEntity_high; // r12

  m_Index = this->m_hSpotlight.m_Index;
  v3 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hSpotlight.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hSpotlight.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_int = inputdata->value.m_int;
        m_pInstance = v5->m_pInstance;
        m_pEntity_high = HIBYTE(v5->m_pInstance[17].m_pEntity);
        if ( m_int != BYTE4(v5->m_pInstance[17].m_pEntity) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(
            m_pInstance,
            828,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            CEntityHandle::gm_pEntityList);
          BYTE4(m_pInstance[17].m_pEntity) = m_int;
        }
        if ( BYTE1(m_int) != BYTE5(m_pInstance[17].m_pEntity) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3);
          BYTE5(m_pInstance[17].m_pEntity) = BYTE1(m_int);
        }
        if ( BYTE2(m_int) != BYTE6(m_pInstance[17].m_pEntity) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3);
          BYTE6(m_pInstance[17].m_pEntity) = BYTE2(m_int);
        }
        if ( m_pEntity_high != HIBYTE(m_pInstance[17].m_pEntity) )
        {
          (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 828, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v3);
          HIBYTE(m_pInstance[17].m_pEntity) = m_pEntity_high;
        }
      }
    }
  }
}


// CPointSpotlight::InputForceUpdate  (line 531, @0x0000000002337d10, libserver.so)
// calls: CPointSpotlight::SpotlightUpdate
void __fastcall CPointSpotlight::InputForceUpdate(CPointSpotlight *const this, inputdata_t *const inputdata)
{
  CPointSpotlight::SpotlightUpdate(this);
}


