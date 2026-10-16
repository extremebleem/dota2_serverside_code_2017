// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/econ/dota_item_wearable.cpp:30
class C_CDOTAWearableItem_MapInstall {
	C_CDOTAWearableItem_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/econ/dota_item_wearable.cpp:78
class CAdditionalWearable : public CDynamicProp {
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
	CAdditionalWearable(CAdditionalWearable &);
	CAdditionalWearable(CAdditionalWearable &);
	CAdditionalWearable();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CAdditionalWearable();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 1752
};

// src/game/shared/dota/econ/dota_item_wearable.cpp:99
class C_CAdditionalWearable_MapInstall {
	C_CAdditionalWearable_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTAWearableItem::YouForgotToImplementOrDeclareServerClass  (line 30, @0x0000000002e30860, libserver.so)
int __fastcall CDOTAWearableItem::YouForgotToImplementOrDeclareServerClass(CDOTAWearableItem *const this)
{
  return 0;
}


// CDOTAWearableItem::GetServerClass  (line 30, @0x0000000002e34f50, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTAWearableItem::GetServerClass(CDOTAWearableItem *const this)
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


// CDOTAWearableItem::GetDataDescMap  (line 68, @0x0000000002e30870, libserver.so)
// globals: CDOTAWearableItem::m_DataMap
datamap_t *__fastcall CDOTAWearableItem::GetDataDescMap(CDOTAWearableItem *const this)
{
  return &CDOTAWearableItem::m_DataMap;
}


// CDOTAWearableItem::AddDatadescMetadataKeys  (line 68, @0x0000000002e386b0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTAWearableItem::GetEntityClass(void)
void __fastcall CDOTAWearableItem::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTAWearableItem::GetEntityClass);
}


// CDOTAWearableItem::GetBaseMap  (line 68, @0x0000000002e386d0, libserver.so)
datamap_t *__cdecl CDOTAWearableItem::GetBaseMap()
{
  return &CEconWearable::m_DataMap;
}


// DataMapInit<CDOTAWearableItem>  (line 68, @0x0000000002e386e0, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: __static_initialization_and_destruction_0
// strings: "CDOTAWearableItem"
// globals: `guard variable for'DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder, CDOTAWearableItem::GetEntityClass(void), CDOTAWearableItem::m_DataMap, DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::dataDesc, DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_pszBase = "CDOTAWearableItem";
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::nameHolder,
      &_dso_handle);
  }
  CDOTAWearableItem::m_DataMap.dataNumFields = 1;
  CDOTAWearableItem::m_DataMap.baseMap = &CEconWearable::m_DataMap;
  CDOTAWearableItem::m_DataMap.dataDesc = DataMapInit<CDOTAWearableItem>(CDOTAWearableItem *)::dataDesc;
  AddDatadescMetadataKeys(&CDOTAWearableItem::m_DataMap, CDOTAWearableItem::GetEntityClass);
  return &CDOTAWearableItem::m_DataMap;
}


// CAdditionalWearable::~CAdditionalWearable  (line 78, @0x0000000002e53650, libserver.so)  // inlines: ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity
void __fastcall CAdditionalWearable::~CAdditionalWearable(CAdditionalWearable *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CAdditionalWearable::~CAdditionalWearable  (line 78, @0x0000000002e536b0, libserver.so)  // inlines: ~CAdditionalWearable, ~CBaseAnimating, ~CBaseProp, ~CBreakableProp, ~CDynamicProp
// calls: CHitboxComponent::~CHitboxComponent, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete
void __fastcall CAdditionalWearable::~CAdditionalWearable(CAdditionalWearable *const this)
{
  CHitboxComponent::Storage_t *p_m_CHitboxComponent; // rdi

  p_m_CHitboxComponent = &this->m_CHitboxComponent;
  p_m_CHitboxComponent[4].m_pHitGroupPriorities = &off_3FF0E98;
  *&p_m_CHitboxComponent[4].m_nHitboxHandle = off_3FF0D80;
  *&p_m_CHitboxComponent[-72].m_nHitboxHandle = &off_3FED330;
  CHitboxComponent::~CHitboxComponent(p_m_CHitboxComponent);
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CAdditionalWearable::Schema_DynamicBinding  (line 80, @0x0000000002e4f0f0, libserver.so)
// globals: CAdditionalWearable::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAdditionalWearable::Schema_DynamicBinding(
        const CAdditionalWearable *const this)
{
  return CAdditionalWearable::s_pSchemaBinding;
}


// CAdditionalWearable::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 80, @0x0000000002e4f100, libserver.so)
// globals: CAdditionalWearable::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CAdditionalWearable::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  return CAdditionalWearable::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CAdditionalWearable::CEntityInstanceEntityClass::DestructInstance  (line 80, @0x0000000002e4f110, libserver.so)  // inlines: Destruct<CAdditionalWearable>
void __fastcall CAdditionalWearable::CEntityInstanceEntityClass::DestructInstance(
        CAdditionalWearable::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CAdditionalWearable::CEntityInstanceEntityClass::FreeInstance  (line 80, @0x0000000002e4f130, libserver.so)
void __fastcall CAdditionalWearable::CEntityInstanceEntityClass::FreeInstance(
        CAdditionalWearable::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CAdditionalWearable::CEntityInstanceEntityClass::CanAllocate  (line 80, @0x0000000002e4f150, libserver.so)
bool __fastcall CAdditionalWearable::CEntityInstanceEntityClass::CanAllocate(
        const CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CAdditionalWearable::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 80, @0x0000000002e4f160, libserver.so)
// globals: CAdditionalWearable::s_pSchemaBinding
const ISchemaBinding *__fastcall CAdditionalWearable::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  return CAdditionalWearable::s_pSchemaBinding;
}


// CAdditionalWearable::CEntityInstanceEntityClass::AllocateInstance  (line 80, @0x0000000002e4fda0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CAdditionalWearable::CEntityInstanceEntityClass::AllocateInstance(
        CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1752);
  memset(v1, 0, 0x6D8u);
  return v1;
}


// CAdditionalWearable::CEntityInstanceEntityClass::ConstructInstance  (line 80, @0x0000000002e505c0, libserver.so)  // inlines: CAdditionalWearable, Construct<CAdditionalWearable>
// calls: CDynamicProp::CDynamicProp
CEntityInstance *__fastcall CAdditionalWearable::CEntityInstanceEntityClass::ConstructInstance(
        CAdditionalWearable::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDynamicProp::CDynamicProp(p);
    *p = &off_47A19D0;
    *(p + 152) = off_47A2320;
    *(p + 153) = &off_47A2438;
  }
  return p;
}


// CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x0000000002e53d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x0000000002e53da0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CAdditionalWearable::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CAdditionalWearable::GetEntityClassInternal  (line 80, @0x0000000002e5cca0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseAnimating::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBreakableProp::GetEntityClassInfo, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: __static_initialization_and_destruction_0
// strings: "additional_wearable", "CAdditionalWearable", "prop_dynamic", "CDynamicProp"
// globals: `guard variable for'CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass, CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo, CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo, `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo (9 total)
CEntityClass *__cdecl CAdditionalWearable::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass == 0
    && __cxa_guard_acquire(&`guard variable for'CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass) != 0 )
  {
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_designerName.u.m_Id = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass._vptr_CEntityClass = off_3F79390;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_ComponentOffsets.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_AllHelpers.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_atomicFields,
      4);
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classInputs.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classInputs.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classOutputs.m_Size = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_requiredEHandle.m_Index = -1;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_hNetworkSerializer = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pBaseClassInfo = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pClassInfo = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_flags = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_nAllHelpersFlags = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pScriptClassDesc = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pInputs = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_nInputCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pOutputs = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_nOutputCount = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pGameClass = 0;
    CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass._vptr_CEntityClass = off_47A1950;
    __cxa_guard_release(&`guard variable for'CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass);
    __cxa_atexit(
      CAdditionalWearable::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass,
      &_dso_handle);
  }
  if ( g_pEntityCAdditionalWearableClass != 0 )
    return &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass;
  if ( `guard variable for'CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo) != 0 )
  {
    if ( `guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo) != 0 )
    {
      EntityClassInfo = CBreakableProp::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo,
        "CDynamicProp",
        "prop_dynamic",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo,
      "CAdditionalWearable",
      "additional_wearable",
      0,
      &CDynamicProp::GetEntityClassInfo(void)::g_EntityCDynamicPropClassInfo);
    __cxa_guard_release(&`guard variable for'CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo);
  }
  CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pClassInfo = &CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo;
  CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pBaseClassInfo = CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo.m_pBaseClassInfo;
  g_pEntityCAdditionalWearableClass = &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass;
  CAdditionalWearable::GetEntityClassInfo(void)::g_EntityCAdditionalWearableClassInfo.m_pClass = &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass;
  CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass.m_pScriptClassDesc = CBaseAnimating::InitScriptDesc();
  g_pEntityCAdditionalWearableClass->m_pComponentOverrides = 0;
  return &CAdditionalWearable::GetEntityClassInternal(void)::g_EntityCAdditionalWearableClass;
}


// CAdditionalWearable::YouForgotToImplementOrDeclareServerClass  (line 99, @0x0000000002e30880, libserver.so)
int __fastcall CAdditionalWearable::YouForgotToImplementOrDeclareServerClass(CAdditionalWearable *const this)
{
  return 0;
}


// CAdditionalWearable::GetServerClass  (line 99, @0x0000000002e34fd0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CAdditionalWearable::GetServerClass(CAdditionalWearable *const this)
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


// CDOTAWearableItem::CDOTAWearableItem  (line 105, @0x0000000002e387b0, libserver.so)  // inlines: CEntityHandle, CHandle, CNetworkVarBase, EnsureValidValue<bool>
// calls: CEconWearable::CEconWearable
// callers: CDOTAWearableItem::CEntityInstanceEntityClass::ConstructInstance, CDOTA_Tiny_ScepterTree::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTAWearableItem::CDOTAWearableItem(CDOTAWearableItem *const this)
{
  CEconWearable::CEconWearable(this);
  this->m_hAdditionalWearable.m_Index = -1;
  this->_vptr_IHandleEntity = &off_47A1030;
  this->_vptr_IHasAttributes = &off_47A18F8;
  this->m_bOwnerModelChanged.m_Value = 0;
  this->m_bIsGeneratingEconItem.m_Value = 0;
}


// CDOTAWearableItem::SetIsGeneratingEconItem  (line 121, @0x0000000002e38800, libserver.so)  // inlines: MarkPVSInformationDirty, NetworkStateChanged, RemoveEffects, Set, operator=<bool>
// calls: CEntityInstance::IsAuthoritative, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::AddEffects
// callers: CDOTA_BaseNPC::OnSpawnWearable
void __fastcall CDOTAWearableItem::SetIsGeneratingEconItem(
        CDOTAWearableItem *const this,
        bool bIsGeneratingEconItem,
        bool bIsItemVisibleOnGeneratedEntity)
{
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    if ( this->m_bIsGeneratingEconItem.m_Value != bIsGeneratingEconItem )
    {
      (*(this->_vptr_IHandleEntity + 22))(this, 1705, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_bIsGeneratingEconItem.m_Value = bIsGeneratingEconItem;
    }
    if ( bIsGeneratingEconItem && !bIsItemVisibleOnGeneratedEntity )
    {
      CBaseEntity::AddEffects(this, 32);
    }
    else
    {
      (*(this->_vptr_IHandleEntity + 188))(this, this->m_fEffects.m_Value & 0xFFFFFFDF);
      this->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(this);
    }
  }
}


// CDOTAWearableItem::IsGeneratingEconItem  (line 139, @0x0000000002e388b0, libserver.so)
// callers: CDOTA_BaseNPC::UpdateAssetModifiers
bool __fastcall CDOTAWearableItem::IsGeneratingEconItem(const CDOTAWearableItem *const this)
{
  return this->m_bIsGeneratingEconItem.m_Value;
}


// CDOTAWearableItem::UpdateOnRemove  (line 437, @0x0000000002e33f00, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: CEntityInstance::IsAuthoritative, CEconEntity::UpdateOnRemove, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAWearableItem::UpdateOnRemove(CDOTAWearableItem *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  if ( CEntityInstance::IsAuthoritative(this)
    && (m_Index = this->m_hAdditionalWearable.m_Index) + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAdditionalWearable.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAdditionalWearable.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && v4->m_pInstance != 0 )
  {
    UTIL_Remove(v4->m_pInstance);
    this->m_hAdditionalWearable.m_Index = -1;
    CEconEntity::UpdateOnRemove(this);
  }
  else
  {
    CEconEntity::UpdateOnRemove(this);
  }
}


// CDOTAWearableItem::Equip  (line 552, @0x0000000002e34470, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, operator CEntityInstance*, operator!=<CBaseEntity>, operator->
// calls: CEconWearable::Equip, CEntityInstance::IsAuthoritative, CBaseEntity::DispatchUpdateTransmitState, CBaseEntity::GetMoveParent, CBaseEntity::FollowEntity
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAWearableItem::Equip(CDOTAWearableItem *const this, CBaseCombatCharacter *pOwner)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *m_pInstance; // r12
  CBaseEntity *MoveParent; // rax
  uint32 v8; // edx
  CBaseEntity *v9; // rdi
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx

  CEconWearable::Equip(this, pOwner);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_Index = this->m_hAdditionalWearable.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAdditionalWearable.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hAdditionalWearable.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        {
          m_pInstance = v5->m_pInstance;
          if ( v5->m_pInstance != 0 )
          {
            (*(m_pInstance->_vptr_IHandleEntity + 188))(v5->m_pInstance, m_pInstance->m_fEffects.m_Value & 0xFFFFFFDF);
            m_pInstance->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
            CBaseEntity::DispatchUpdateTransmitState(m_pInstance);
            MoveParent = CBaseEntity::GetMoveParent(this);
            v8 = this->m_hAdditionalWearable.m_Index;
            v9 = 0;
            if ( v8 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAdditionalWearable.m_Index) >> 9)
                                                                   & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[this->m_hAdditionalWearable.m_Index & 0x1FF];
                if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
                  v9 = v11->m_pInstance;
              }
            }
            CBaseEntity::FollowEntity(v9, MoveParent, 1);
          }
        }
      }
    }
  }
}


// CDOTAWearableItem::UnEquip  (line 570, @0x0000000002e34180, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>
// calls: CEconWearable::UnEquip, CEntityInstance::IsAuthoritative, CBaseEntity::AddEffects
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTAWearableItem::UnEquip(CDOTAWearableItem *const this, CBaseCombatCharacter *pOwner)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx

  CEconWearable::UnEquip(this, pOwner);
  if ( CEntityInstance::IsAuthoritative(this) )
  {
    m_Index = this->m_hAdditionalWearable.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAdditionalWearable.m_Index) >> 9) & 0x3F];
      if ( v4 != 0 )
      {
        v5 = &v4[this->m_hAdditionalWearable.m_Index & 0x1FF];
        if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
          CBaseEntity::AddEffects(v5->m_pInstance, 32);
      }
    }
  }
}


// CDOTAWearableItem::Spawn  (line 588, @0x0000000002e41f70, libserver.so)  // inlines: AcquireEntitySpawnerEntityVariantAllocator, Add, AddKeyValue<char const*>, AddToTail, Allocate, Base, CEntityHandle, CEntityKeyValuesModifyScope, CEntitySpawner, CEntitySpawnerBase, CEntitySpawnerContext, CEntitySpawnerContextBase, CHandle, CMicroProfilerGuard, CMicroProfilerSample, CUtlAbstractDelegate, CUtlDelegate, CUtlString, CVProfScope, ClosurePtr, CopyData, Element, EnterScope, ExitScope, FastDelegate2, FindKeyHash, Free, Get, GetAsset, GetClassInfo, GetEHandle, GetElapsed, GetEntityClass, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTimebaseRegister, InTargetThread, IndexToIdentity, Init, InvokeCallbacks, IsEmpty, IsEnabled, LookupEntity, OverrideAllocator, PLAT_CPU_TIME, Release, ReleaseEntitySpawnerEntityVariantAllocator, Set, SetValue, Spawn, V_strlen, memcpy, operator CAdditionalWearable*, operator CEntityInstance*, operator!, operator(), operator=, operator[], ~CEntityKeyValuesModifyScope, ~CEntitySpawner, ~CEntitySpawnerBase, ~CEntitySpawnerContext, ~CEntitySpawnerContextBase, ~CMicroProfilerGuard, ~CUtlString, ~CVProfScope
// calls: CEconWearable::Spawn, CEntityInstance::IsAuthoritative, GetAssetModifier<CEconItemView, CAdditionalWearableModifier>, CEntityKeyValues::CEntityKeyValues, CEntityKeyValuesModifyScope::BeginModify, CEntitySystem::GetActiveSpawnGroupHandle, CEntitySystem::GetSpawnOriginOffset, CUtlString::Get, CEntityKeyValues::HasValue, CEntityKeyValuesModifyScope::Release, CEntitySystem::CreateEntity, CEntitySystem::QueueSpawnEntity (34 total)
// strings: "Attempted to set attribute %s as if it was a non-attribute key!\n", "Spawn", "Server Simulation"
// globals: CEntityKeyValuesModifyScope::sm_pAllocatorOverride, CEntityHandle::gm_pEntityList
void __fastcall CDOTAWearableItem::Spawn(CDOTAWearableItem *const this, const CEntityKeyValues *pKeyValues)
{
  __int64 v3; // rax
  const CAdditionalWearableModifier *Asset; // rbx
  CEntitySystem *v5; // rdi
  const matrix3x4a_t *SpawnOriginOffset; // rax
  __int64 v7; // rdx
  char v8; // al
  const char *v9; // rax
  CEntityKeyValues *m_pEntityKeyValues; // rbx
  const char *v11; // r14
  int m_enabled; // r11d
  EntityNetworkingMode_t m_nMode; // ebx
  const char *v14; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v16; // si
  CEntitySpawnerContext<CAdditionalWearable> *m_pContext; // rbx
  detail::GenericClass *m_pthis; // rdx
  void (*pfn)(detail::GenericClass *); // rax
  _QWORD *v20; // rdi
  CEntityIdentity *v21; // rax
  CBaseEntity *m_pInstance; // r14
  CEntityIdentity *v23; // rax
  CEntityIdentity *v24; // rdx
  int v25; // eax
  __int16 v26; // cx
  CUtlScratchMemoryPool *v27; // rdi
  CEntityKeyValues *v28; // rbx
  const char *m_pszClassname; // rdx
  unsigned __int64 v31; // rbx
  uint64 v32; // rcx
  unsigned __int64 v33; // rbx
  uint64 m_numTimeBaseTicks; // rcx
  uint64 v35; // rcx
  int m_nCount; // esi
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::IndexType_t v37; // cx
  __int64 v38; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *v39; // rdx
  CVProfNode *m_pParent; // rax
  int m_nEntitySpawnerDataUseCount; // ecx
  __int16 v42; // dx
  unsigned __int64 m_nAllocated; // rax
  CUtlLeanVectorFixedGrowableBase<unsigned int,9u,short int>::ElemType_t *m_pElements; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v45; // rax
  __int16 v46; // ax
  int (**v47)(...); // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v48; // rax
  CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short int>::ElemType_t *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  CVProfNode *m_pCurNode; // rax
  CVProfile::CBudgetGroup *v53; // rax
  __int16 v54; // ax
  void *v55; // rax
  bool v56; // [rsp+24h] [rbp-1ACh]
  signed int v57; // [rsp+24h] [rbp-1ACh]
  CEntityKeyValues *i; // [rsp+30h] [rbp-1A0h]
  __int64 v59; // [rsp+30h] [rbp-1A0h]
  CEntityInstance *pEntity; // [rsp+38h] [rbp-198h]
  CEntityInstance *pEntityc; // [rsp+38h] [rbp-198h]
  CEntityInstance *pEntityd; // [rsp+38h] [rbp-198h]
  CEntityInstance *pEntitya; // [rsp+38h] [rbp-198h]
  CEntityInstance *pEntityb; // [rsp+38h] [rbp-198h]
  signed int pEntitye; // [rsp+38h] [rbp-198h]
  int v66; // [rsp+40h] [rbp-190h]
  _QWORD v67[2]; // [rsp+50h] [rbp-180h] BYREF
  CEntitySpawner<CAdditionalWearable> spawner; // [rsp+60h] [rbp-170h] BYREF
  CEntitySpawnerContext<CAdditionalWearable> context; // [rsp+100h] [rbp-D0h] BYREF
  unsigned __int64 v70; // [rsp+198h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  CEconWearable::Spawn(this, pKeyValues);
  if ( !CEntityInstance::IsAuthoritative(this) )
    return;
  v3 = (*(this->_vptr_IHandleEntity + 265))(this);
  Asset = GetAssetModifier<CEconItemView,CAdditionalWearableModifier>((v3 + 104));
  if ( Asset == 0 )
    return;
  CEntityKeyValues::CEntityKeyValues(&context.m_entityKeyValues);
  context.m_pParent = 0;
  memset(&context.m_callback, 0, sizeof(context.m_callback));
  spawner.m_modifyScope.m_pKeyValues = 0;
  spawner.m_modifyScope.m_pPrevAllocator = 0;
  CEntityKeyValuesModifyScope::BeginModify(&spawner.m_modifyScope, 0);
  spawner.m_pContext = &context;
  spawner._vptr_CEntitySpawnerBase = off_47A24D0;
  spawner.m_scriptClassName.m_pString = 0;
  spawner.m_pSpawnBatch = 0;
  v5 = g_pEntitySystem;
  spawner.m_pPrevAllocator = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  ++g_pEntitySystem->m_nEntitySpawnerDataUseCount;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = &v5->m_entitySpawnerData;
  spawner.m_hSpawnGroupHandle = CEntitySystem::GetActiveSpawnGroupHandle(v5);
  SpawnOriginOffset = CEntitySystem::GetSpawnOriginOffset(g_pEntitySystem);
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][0] = *&SpawnOriginOffset->m_flMatVal[0][0];
  v7 = *&SpawnOriginOffset->m_flMatVal[0][2];
  spawner.m_pEntityKeyValues = 0;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[0][2] = v7;
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[1][0] = *&SpawnOriginOffset->m_flMatVal[1][0];
  *&spawner.m_mSpawnGroupToWorld.m_flMatVal[2][0] = *&SpawnOriginOffset->m_flMatVal[2][0];
  spawner.m_pEntityClass = g_pEntityCAdditionalWearableClass;
  if ( g_pApplication != 0 )
    v8 = (*(g_pApplication->_vptr_IAppSystem + 24))(g_pApplication);
  else
    v8 = 0;
  spawner.m_bValidateKeys = v8;
  spawner.m_nMode = EntityNetworkingMode_t::ENTITY_NETWORKING_MODE_DEFAULT;
  (*spawner._vptr_CEntitySpawnerBase)(&spawner);
  v9 = CUtlString::Get(&Asset->m_strAsset);
  m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  v11 = v9;
  if ( spawner.m_pEntityKeyValues->m_nQueuedForSpawnCount > 0 )
  {
    v66 = -1;
LABEL_8:
    m_enabled = g_VProfCurrentProfile.m_enabled;
    v56 = m_enabled != 0;
    if ( m_enabled != 0 )
    {
      v33 = __rdtsc();
      pEntityd = g_VProfCurrentProfile.m_TargetThreadId;
      if ( pEntityd == ThreadGetCurrentId() )
      {
        m_pCurNode = g_VProfCurrentProfile.m_pCurNode;
        if ( m_pCurNode->m_pszName != "Spawn" )
        {
          m_pCurNode = CVProfNode::GetSubNode(g_VProfCurrentProfile.m_pCurNode, "Spawn", 0, "Server Simulation", 4);
          g_VProfCurrentProfile.m_pCurNode = m_pCurNode;
        }
        v53 = &g_VProfCurrentProfile.m_pBudgetGroups[m_pCurNode->m_BudgetGroupID];
        v53->m_BudgetFlags |= 4u;
        CVProfNode::EnterScope(g_VProfCurrentProfile.m_pCurNode);
        g_VProfCurrentProfile.m_fAtRoot = 0;
      }
      m_numTimeBaseTicks = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      v35 = m_numTimeBaseTicks - v33;
      m_pEntityKeyValues = spawner.m_pEntityKeyValues;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v35 + __rdtsc();
    }
    if ( !CEntityKeyValues::HasValue(m_pEntityKeyValues, -971301790) )
    {
      m_pszClassname = spawner.m_pEntityClass->m_pClassInfo->m_pszClassname;
      if ( m_pszClassname != 0 )
        CEntityKeyValues::SetValue(spawner.m_pEntityKeyValues, -971301790, m_pszClassname);
    }
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    m_nMode = spawner.m_nMode;
    v14 = CUtlString::Get(&spawner.m_scriptClassName);
    pEntity = CEntitySystem::CreateEntity(
                g_pEntitySystem,
                spawner.m_hSpawnGroupHandle,
                spawner.m_pEntityClass,
                v14,
                m_nMode,
                -1,
                -1,
                0,
                0);
    if ( pEntity != 0 )
    {
      m_pEntity = pEntity->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v66 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v16 & 0x7FFF;
      }
      v67[0] = pEntity->m_pEntity;
      v67[1] = spawner.m_pEntityKeyValues;
      (*(*g_pGameResourceService + 280LL))(
        g_pGameResourceService,
        spawner.m_hSpawnGroupHandle,
        1,
        v67,
        &spawner.m_mSpawnGroupToWorld);
      CEntitySystem::QueueSpawnEntity(g_pEntitySystem, pEntity, spawner.m_pEntityKeyValues);
      if ( spawner.m_pSpawnBatch == 0 )
        CEntitySystem::ExecuteQueuedCreation(g_pEntitySystem);
      m_pContext = spawner.m_pContext;
      for ( i = spawner.m_pEntityKeyValues; m_pContext != 0; m_pContext = m_pContext->m_pParent )
      {
        m_pthis = m_pContext->m_callback.m_Closure.m_pthis;
        pfn = m_pContext->m_callback.m_Closure.m_pFunction.__pfn;
        if ( m_pthis != 0 || pfn != 0 )
        {
          v20 = (m_pthis + m_pContext->m_callback.m_Closure.m_pFunction.__delta);
          if ( (pfn & 1) != 0 )
            pfn = *(pfn + *v20 - 1);
          (pfn)(v20, pEntity, i);
        }
      }
    }
    if ( v56 )
    {
      v31 = __rdtsc();
      if ( !g_VProfCurrentProfile.m_fAtRoot || g_VProfCurrentProfile.m_enabled != 0 )
      {
        pEntityc = g_VProfCurrentProfile.m_TargetThreadId;
        if ( pEntityc == ThreadGetCurrentId() )
        {
          if ( CVProfNode::ExitScope(g_VProfCurrentProfile.m_pCurNode) != 0 )
          {
            m_pParent = g_VProfCurrentProfile.m_pCurNode->m_pParent;
            if ( m_pParent != 0 )
              g_VProfCurrentProfile.m_pCurNode = m_pParent;
            else
              m_pParent = g_VProfCurrentProfile.m_pCurNode;
          }
          else
          {
            m_pParent = g_VProfCurrentProfile.m_pCurNode;
          }
          g_VProfCurrentProfile.m_fAtRoot = m_pParent == &g_VProfCurrentProfile.m_Root;
        }
      }
      v32 = g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks;
      ++g_VProfCurrentProfile.m_ScopeProfiler.m_numCalls;
      g_VProfCurrentProfile.m_ScopeProfiler.m_numTimeBaseTicks = v32 - v31 + __rdtsc();
    }
    if ( (v66 + 2) > 1 && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v66 >> 9) & 0x3F]) != 0 )
    {
      m_pInstance = 0;
      v23 = &v21[v66 & 0x1FF];
      if ( v23 != 0 && v66 == v23->m_EHandle.m_Index )
        m_pInstance = v23->m_pInstance;
    }
    else
    {
      m_pInstance = 0;
    }
    goto LABEL_29;
  }
  m_nCount = spawner.m_pEntityKeyValues->m_keyHashes.m_nCount;
  if ( m_nCount <= 0 )
  {
LABEL_68:
    CUtlLeanVectorImpl<CUtlLeanVectorFixedGrowableBase<unsigned int,(unsigned short)9,short>,unsigned int,short>::AddToTailGetPtr(&spawner.m_pEntityKeyValues->m_keyHashes);
    v42 = m_pEntityKeyValues->m_keyHashes.m_nCount - 1;
    m_nAllocated = m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    if ( m_nAllocated != 0 )
    {
      if ( m_nAllocated <= 9 )
        m_pElements = (&m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
      else
        m_pElements = m_pEntityKeyValues->m_keyHashes.m_pElements;
    }
    else
    {
      m_pElements = 0;
    }
    m_pElements[(m_pEntityKeyValues->m_keyHashes.m_nCount - 1)] = -926958586;
    pEntitya = v42;
    CUtlLeanVectorImpl<CUtlLeanVectorBase<CEntityKeyValues::KeyValueInfo_t,short>,CEntityKeyValues::KeyValueInfo_t,short>::AddToTailGetPtr(&m_pEntityKeyValues->m_keyValues);
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v45 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v45 = 0;
    v59 = pEntitya;
    pEntityb = &v45[pEntitya];
    v46 = WORD1(pEntityb->m_pEntity);
    if ( (v46 & 1) != 0 )
      WORD1(pEntityb->m_pEntity) = v46 & 0xFFFE;
    pEntityb->_vptr_IHandleEntity = 0;
    LOWORD(pEntityb->m_pEntity) = 30;
    if ( v11 != 0 )
    {
      v57 = strlen(v11) + 1;
      v47 = CEntityVariantAllocator::Allocate(v57);
      pEntityb->_vptr_IHandleEntity = v47;
      memcpy(v47, v11, v57);
      WORD1(pEntityb->m_pEntity) |= 1u;
    }
    if ( m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
      v48 = m_pEntityKeyValues->m_keyValues.m_pElements;
    else
      v48 = 0;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
    v48[v59].m_pAttributeName = 0;
  }
  else
  {
    v37 = spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocated;
    v38 = 0;
    while ( 1 )
    {
      if ( v37 != 0 )
      {
        v39 = (&spawner.m_pEntityKeyValues->m_keyHashes.m_nAllocAllocated + 1);
        if ( v37 > 9 )
          v39 = spawner.m_pEntityKeyValues->m_keyHashes.m_pElements;
      }
      else
      {
        v39 = 0;
      }
      if ( v39[v38] == -926958586 )
        break;
      if ( m_nCount <= ++v38 )
        goto LABEL_68;
    }
    if ( spawner.m_pEntityKeyValues->m_keyValues.m_nAllocated != 0 )
    {
      v49 = spawner.m_pEntityKeyValues->m_keyValues.m_pElements;
      v50 = v38;
      v51 = &v49[v50];
      if ( v49[v50].m_pAttributeName != 0 )
      {
LABEL_84:
        Warning("Attempted to set attribute %s as if it was a non-attribute key!\n", v49[v50].m_pAttributeName);
LABEL_85:
        m_pEntityKeyValues = spawner.m_pEntityKeyValues;
        goto LABEL_80;
      }
    }
    else
    {
      v50 = v38;
      v49 = 0;
      v51 = v50 * 24;
      if ( *(v50 * 24 + 16) != 0 )
        goto LABEL_84;
    }
    v54 = *(v51 + 10);
    if ( (v54 & 1) != 0 )
      *(v51 + 10) = v54 & 0xFFFE;
    *v51 = 0;
    *(v51 + 8) = 30;
    if ( v11 == 0 )
      goto LABEL_85;
    pEntitye = strlen(v11) + 1;
    v55 = CEntityVariantAllocator::Allocate(pEntitye);
    *v51 = v55;
    memcpy(v55, v11, pEntitye);
    *(v51 + 10) |= 1u;
    m_pEntityKeyValues = spawner.m_pEntityKeyValues;
  }
LABEL_80:
  v66 = -1;
  m_pInstance = 0;
  if ( m_pEntityKeyValues != 0 )
    goto LABEL_8;
LABEL_29:
  CBaseEntity::AddEffects(m_pInstance, 32);
  if ( m_pInstance != 0 && (v24 = m_pInstance->m_pEntity) != 0 )
  {
    v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
    v26 = 0x7FFF;
    if ( v24->m_EHandle.m_Index != -1 )
      v26 = v24->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hAdditionalWearable.m_Index) = v26 | this->m_hAdditionalWearable.m_Index & 0x8000;
    this->m_hAdditionalWearable.m_Index = (v25 << 15) | this->m_hAdditionalWearable.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hAdditionalWearable.m_Index = -1;
  }
  v27 = CEntityKeyValuesModifyScope::sm_pAllocatorOverride;
  spawner._vptr_CEntitySpawnerBase = off_47A24B0;
  CEntityKeyValuesModifyScope::sm_pAllocatorOverride = spawner.m_pPrevAllocator;
  if ( v27 == &g_pEntitySystem->m_entitySpawnerData )
  {
    m_nEntitySpawnerDataUseCount = g_pEntitySystem->m_nEntitySpawnerDataUseCount;
    g_pEntitySystem->m_nEntitySpawnerDataUseCount = m_nEntitySpawnerDataUseCount - 1;
    if ( m_nEntitySpawnerDataUseCount == 1 )
      CUtlScratchMemoryPool::FreeAll(v27);
  }
  if ( spawner.m_pEntityKeyValues != 0 )
  {
    CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
    v28 = spawner.m_pEntityKeyValues;
    if ( --spawner.m_pEntityKeyValues->m_nRefCount <= 0 )
    {
      CEntityKeyValues::~CEntityKeyValues(v28);
      operator delete(v28);
    }
  }
  if ( spawner.m_scriptClassName.m_pString != 0 )
    CUtlString::FreeMemoryBlock(&spawner.m_scriptClassName);
  CEntityKeyValuesModifyScope::Release(&spawner.m_modifyScope);
  CEntityKeyValues::~CEntityKeyValues(&context.m_entityKeyValues);
}


// CDOTAWearableItem::ShouldTransmit  (line 634, @0x0000000002e31880, libserver.so)  // inlines: GetParent, ToDOTABaseNPC
// calls: CBaseEntity::ShouldTransmit, CGameSceneNode::GetOwnerEntity
int __fastcall CDOTAWearableItem::ShouldTransmit(CDOTAWearableItem *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  const CGameSceneNode *v7; // rdi

  ShouldTransmit = CBaseEntity::ShouldTransmit(this, pInfo);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent == 0 )
    return ShouldTransmit;
  OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  if ( OwnerEntity == 0 || !OwnerEntity->m_bIsDOTANPC || (*(OwnerEntity->_vptr_IHandleEntity + 404))(OwnerEntity) == 0 )
    return ShouldTransmit;
  v7 = this->m_pGameSceneNode->m_pParent;
  if ( v7 != 0 )
    v7 = CGameSceneNode::GetOwnerEntity(v7);
  return (*(v7->_vptr_CGameSceneNode + 65))(v7, pInfo);
}


// CDOTAWearableItem::OwnerModelChanged  (line 669, @0x0000000002e33400, libserver.so)  // inlines: NetworkStateChanged, Set, operator=<bool>
void __fastcall CDOTAWearableItem::OwnerModelChanged(CDOTAWearableItem *const this, bool bOriginalModel)
{
  bool v2; // r12

  v2 = !bOriginalModel;
  if ( !bOriginalModel != this->m_bOwnerModelChanged.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 1704, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bOwnerModelChanged.m_Value = v2;
  }
  (*(this->_vptr_IHandleEntity + 213))(this);
}


// CDOTAWearableItem::ShouldMatchCycleToParent  (line 688, @0x0000000002e388c0, libserver.so)  // inlines: ShouldMatchCycleToParent
// calls: CEconItemView::GetStaticData
// callers: CDOTA_BaseNPC::UpdateWearablesAnimation
bool __fastcall CDOTAWearableItem::ShouldMatchCycleToParent(const CDOTAWearableItem *const this)
{
  const GameItemDefinition_t *StaticData; // rax

  if ( this == -1472LL || !this->m_AttributeManager.m_Item.m_bInitialized.m_Value )
    return 0;
  StaticData = CEconItemView::GetStaticData(&this->m_AttributeManager.m_Item);
  return StaticData != 0 && (*(StaticData + 529) & 0x20) != 0;
}


