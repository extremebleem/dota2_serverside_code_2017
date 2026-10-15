// Reconstructed from DWARF by pahole; not original source.

// src/game/server/env_deferred_light.cpp:15
class CEnvDeferredSpotLight : public CEnvDeferredLight {
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
	CEnvDeferredSpotLight(CEnvDeferredSpotLight &);
	CEnvDeferredSpotLight(CEnvDeferredSpotLight &);
	CEnvDeferredSpotLight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CEnvDeferredSpotLight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1456
};

// src/game/server/env_deferred_light.cpp:49
class C_CEnvDeferredLight_MapInstall {
	C_CEnvDeferredLight_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CEnvDeferredSpotLight::Schema_DynamicBinding  (line 15, @0x00000000027ceb30, libserver.so)
// globals: CEnvDeferredSpotLight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDeferredSpotLight::Schema_DynamicBinding(
        const CEnvDeferredSpotLight *const this)
{
  return CEnvDeferredSpotLight::s_pSchemaBinding;
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 15, @0x00000000027ceb40, libserver.so)
// globals: CEnvDeferredSpotLight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  return CEnvDeferredSpotLight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::DestructInstance  (line 15, @0x00000000027ceb50, libserver.so)  // inlines: Destruct<CEnvDeferredSpotLight>
void __fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::DestructInstance(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::FreeInstance  (line 15, @0x00000000027ceb70, libserver.so)
void __fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::FreeInstance(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::CanAllocate  (line 15, @0x00000000027ceb90, libserver.so)
bool __fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::CanAllocate(
        const CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 15, @0x00000000027ceba0, libserver.so)
// globals: CEnvDeferredSpotLight::s_pSchemaBinding
const ISchemaBinding *__fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  return CEnvDeferredSpotLight::s_pSchemaBinding;
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::AllocateInstance  (line 15, @0x00000000027cf600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::AllocateInstance(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1456);
  memset(v1, 0, 0x5B0u);
  return v1;
}


// CEnvDeferredSpotLight::~CEnvDeferredSpotLight  (line 15, @0x00000000027cf790, libserver.so)  // inlines: ~CEnvDeferredLight, ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity
void __fastcall CEnvDeferredSpotLight::~CEnvDeferredSpotLight(CEnvDeferredSpotLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CEnvDeferredSpotLight::~CEnvDeferredSpotLight  (line 15, @0x00000000027cf7b0, libserver.so)  // inlines: ~CEnvDeferredLight, ~CEnvDeferredSpotLight, ~CModelPointEntity
// calls: CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CEnvDeferredSpotLight::~CEnvDeferredSpotLight(CEnvDeferredSpotLight *const this)
{
  this->_vptr_IHandleEntity = &off_3FEF570;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000027d1950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 15, @0x00000000027d1970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CEnvDeferredSpotLight::CEntityInstanceEntityClass::ConstructInstance  (line 15, @0x00000000027d5a00, libserver.so)  // inlines: CEnvDeferredSpotLight, Construct<CEnvDeferredSpotLight>
// calls: CEnvDeferredLight::CEnvDeferredLight
CEntityInstance *__fastcall CEnvDeferredSpotLight::CEntityInstanceEntityClass::ConstructInstance(
        CEnvDeferredSpotLight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CEnvDeferredLight::CEnvDeferredLight(p);
    *p = &off_42B4E50;
  }
  return p;
}


// CEnvDeferredSpotLight::GetEntityClassInternal  (line 15, @0x00000000027dcb00, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseModelEntity::InitScriptDesc, CEnvDeferredLight::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
// strings: "env_deferred_spot_light", "CEnvDeferredSpotLight"
// globals: `guard variable for'CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass, CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo, CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo
CEntityClass *__cdecl CEnvDeferredSpotLight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass) != 0 )
  {
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_designerName.u.m_Id = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass._vptr_CEntityClass = off_3F79390;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_ComponentOffsets.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_AllHelpers.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_atomicFields,
      4);
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classInputs.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classInputs.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classOutputs.m_Size = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_requiredEHandle.m_Index = -1;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_hNetworkSerializer = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pBaseClassInfo = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pClassInfo = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_flags = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_nAllHelpersFlags = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pScriptClassDesc = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pInputs = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_nInputCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pOutputs = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_nOutputCount = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pGameClass = 0;
    CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass._vptr_CEntityClass = off_42B4DD0;
    __cxa_guard_release(&`guard variable for'CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass);
    __cxa_atexit(
      CEnvDeferredSpotLight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass,
      &_dso_handle);
  }
  if ( g_pEntityCEnvDeferredSpotLightClass != 0 )
    return &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass;
  if ( `guard variable for'CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo) != 0 )
  {
    EntityClassInfo = CEnvDeferredLight::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo,
      "CEnvDeferredSpotLight",
      "env_deferred_spot_light",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo);
  }
  CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pClassInfo = &CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo;
  CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pBaseClassInfo = CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo.m_pBaseClassInfo;
  g_pEntityCEnvDeferredSpotLightClass = &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass;
  CEnvDeferredSpotLight::GetEntityClassInfo(void)::g_EntityCEnvDeferredSpotLightClassInfo.m_pClass = &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass;
  CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass.m_pScriptClassDesc = CBaseModelEntity::InitScriptDesc();
  g_pEntityCEnvDeferredSpotLightClass->m_pComponentOverrides = 0;
  return &CEnvDeferredSpotLight::GetEntityClassInternal(void)::g_EntityCEnvDeferredSpotLightClass;
}


// CEnvDeferredLight::GetDataDescMap  (line 17, @0x00000000027a6ed0, libserver.so)
// globals: CEnvDeferredLight::m_DataMap
datamap_t *__fastcall CEnvDeferredLight::GetDataDescMap(CEnvDeferredLight *const this)
{
  return &CEnvDeferredLight::m_DataMap;
}


// CEnvDeferredLight::AddDatadescMetadataKeys  (line 17, @0x00000000027b2b40, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CEnvDeferredLight::GetEntityClass(void)
void __fastcall CEnvDeferredLight::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CEnvDeferredLight::GetEntityClass);
}


// CEnvDeferredLight::GetBaseMap  (line 17, @0x00000000027b2b60, libserver.so)
datamap_t *__cdecl CEnvDeferredLight::GetBaseMap()
{
  return &CModelPointEntity::m_DataMap;
}


// DataMapInit<CEnvDeferredLight>  (line 17, @0x00000000027b2b70, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_dota_08.cpp
// strings: "CEnvDeferredLight"
// globals: `guard variable for'DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder, CEnvDeferredLight::GetEntityClass(void), CEnvDeferredLight::m_DataMap, DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder) != 0 )
  {
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_pszBase = "CEnvDeferredLight";
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::nameHolder,
      &_dso_handle);
  }
  CEnvDeferredLight::m_DataMap.dataNumFields = 14;
  CEnvDeferredLight::m_DataMap.baseMap = &CModelPointEntity::m_DataMap;
  CEnvDeferredLight::m_DataMap.dataDesc = &DataMapInit<CEnvDeferredLight>(CEnvDeferredLight *)::dataDesc[1];
  AddDatadescMetadataKeys(&CEnvDeferredLight::m_DataMap, CEnvDeferredLight::GetEntityClass);
  return &CEnvDeferredLight::m_DataMap;
}


// CEnvDeferredLight::YouForgotToImplementOrDeclareServerClass  (line 49, @0x00000000027a6ee0, libserver.so)
int __fastcall CEnvDeferredLight::YouForgotToImplementOrDeclareServerClass(CEnvDeferredLight *const this)
{
  return 0;
}


// CEnvDeferredLight::GetServerClass  (line 49, @0x00000000027aa000, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CEnvDeferredLight::GetServerClass(CEnvDeferredLight *const this)
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


// CEnvDeferredLight::CEnvDeferredLight  (line 54, @0x00000000027b2c40, libserver.so)  // inlines: CEntityHandle, CHandle, CModelPointEntity, CNetworkVarBase, CNetworkVectorBase, Color, EnsureValidValue, EnsureValidValue<float>, EnsureValidValue<unsigned int>, GetForModify, Init, NetworkStateChanged, Set, SetColor, operator=<float>, operator=<int>, ~CModelPointEntity
// calls: CBaseModelEntity::CBaseModelEntity, CBaseEntity::NetworkStateChanged, CBaseModelEntity::~CBaseModelEntity, _Unwind_Resume
// callers: CEnvDeferredLight::CEntityInstanceEntityClass::ConstructInstance, CEnvDeferredSpotLight::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CEnvDeferredLight::CEnvDeferredLight(CEnvDeferredLight *const this)
{
  bool v2; // zf

  CBaseModelEntity::CBaseModelEntity(this);
  this->_vptr_IHandleEntity = &off_42B5510;
  this->m_hTargetEntity.m_Index = -1;
  this->m_LightColor = 0;
  this->m_flIntensity.m_Value = 0.0;
  this->m_flLightSize.m_Value = 0.0;
  this->m_flSpotFoV.m_Value = 0.0;
  this->m_vLightDirection.m_Value.x = 0.0;
  this->m_vLightDirection.m_Value.y = 0.0;
  this->m_vLightDirection.m_Value.z = 0.0;
  this->m_flStartFalloff.m_Value = 0.0;
  this->m_flDistanceFalloff.m_Value = 0.0;
  this->m_nFlags.m_Value = 0;
  CBaseEntity::NetworkStateChanged(this, 0x484u, -1, -1);
  this->m_LightColor.m_Value._color[0] = -1;
  this->m_LightColor.m_Value._color[1] = -1;
  v2 = this->m_flIntensity.m_Value == 1.0;
  this->m_LightColor.m_Value._color[2] = -1;
  this->m_LightColor.m_Value._color[3] = -1;
  if ( !v2 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flIntensity.m_Value = 1.0;
  }
  if ( this->m_flLightSize.m_Value != 128.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLightSize.m_Value = 128.0;
  }
  if ( this->m_flSpotFoV.m_Value != 0.0 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1168, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0.0);
    this->m_flSpotFoV.m_Value = 0.0;
  }
  if ( this->m_flStartFalloff.m_Value != 0.5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1184, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flStartFalloff.m_Value = 0.5;
  }
  if ( this->m_flDistanceFalloff.m_Value != 0.5 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flDistanceFalloff.m_Value = 0.5;
  }
  if ( this->m_nFlags.m_Value != 1 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFlags.m_Value = 1;
  }
}


// CEnvDeferredLight::InputTurnOn  (line 65, @0x00000000027a8680, libserver.so)  // inlines: NetworkStateChanged, Set, operator|=<int>
void __fastcall CEnvDeferredLight::InputTurnOn(CEnvDeferredLight *const this, inputdata_t *const inputdata)
{
  unsigned int v3; // r12d

  v3 = this->m_nFlags.m_Value | 1;
  if ( this->m_nFlags.m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFlags.m_Value = v3;
  }
}


// CEnvDeferredLight::InputTurnOff  (line 70, @0x00000000027a8640, libserver.so)  // inlines: NetworkStateChanged, Set, operator&=<int>
void __fastcall CEnvDeferredLight::InputTurnOff(CEnvDeferredLight *const this, inputdata_t *const inputdata)
{
  unsigned int v3; // r12d

  v3 = this->m_nFlags.m_Value & 0xFFFFFFFE;
  if ( this->m_nFlags.m_Value != v3 )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1192, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_nFlags.m_Value = v3;
  }
}


// CEnvDeferredLight::InputSetLightColor  (line 75, @0x00000000027a8500, libserver.so)  // inlines: Color32, FromUint32, NetworkStateChanged, Set, SetRawColor, operator Color, operator=, operator=<Color>
void __fastcall CEnvDeferredLight::InputSetLightColor(CEnvDeferredLight *const this, inputdata_t *const inputdata)
{
  int m_int; // r12d

  m_int = inputdata->value.m_int;
  if ( m_int != *&this->m_LightColor )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1156, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_LightColor = m_int;
  }
}


// CEnvDeferredLight::InputSetLightIntensity  (line 80, @0x00000000027a8540, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDeferredLight::InputSetLightIntensity(CEnvDeferredLight *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flIntensity.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1160, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flIntensity.m_Value = v4;
  }
}


// CEnvDeferredLight::InputSetLightRadius  (line 85, @0x00000000027a85c0, libserver.so)  // inlines: Float, NetworkStateChanged, Set, operator float, operator=<float>
void __fastcall CEnvDeferredLight::InputSetLightRadius(CEnvDeferredLight *const this, inputdata_t *const inputdata)
{
  float m_float64; // xmm0_4
  float v4; // [rsp+Ch] [rbp-14h]

  if ( inputdata->value.m_type == 34 )
    m_float64 = inputdata->value.m_float64;
  else
    m_float64 = inputdata->value.m_float;
  if ( m_float64 != this->m_flLightSize.m_Value )
  {
    v4 = m_float64;
    (*(this->_vptr_IHandleEntity + 22))(this, 1164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_flLightSize.m_Value = v4;
  }
}


// CEnvDeferredLight::Activate  (line 90, @0x00000000027a7660, libserver.so)
// calls: CBaseModelEntity::Activate
void __fastcall CEnvDeferredLight::Activate(CEnvDeferredLight *const this, ActivateType_t activateType)
{
  CBaseModelEntity::Activate(this, activateType);
}


// CEnvDeferredLight::Precache  (line 95, @0x00000000027ce220, libserver.so)  // inlines: Precache
// calls: CEntityInstance::Precache, PrecacheMaterial
void __fastcall CEnvDeferredLight::Precache(CEnvDeferredLight *const this, const CEntityPrecacheContext *pContext)
{
  CEntityInstance::Precache(this, pContext);
  if ( this->m_ProjectedTextureName.m_Value[0] != 0 )
    PrecacheMaterial(this->m_ProjectedTextureName.m_Value, pContext);
}


// CEnvDeferredLight::UpdateTransmitState  (line 105, @0x00000000027a6ef0, libserver.so)
// calls: CBaseEntity::SetTransmitState
int __fastcall CEnvDeferredLight::UpdateTransmitState(CEnvDeferredLight *const this)
{
  return CBaseEntity::SetTransmitState(this, 4);
}


