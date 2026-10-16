// Reconstructed from DWARF by pahole; not original source.

// src/game/server/dota/npc/dota_npc_shop.cpp:16
class C_CDOTA_BaseNPC_Shop_MapInstall {
	C_CDOTA_BaseNPC_Shop_MapInstall();

	// sizeof = 1
};

// src/game/server/dota/npc/dota_npc_shop.cpp:42
class CDOTA_ShopTrigger : public CBaseTrigger {
public:

private:

	static datamap_t m_DataMap;

	int m_ShopType;  // +0x5c4
	COutputEvent m_OnTrigger;  // +0x5c8
	typedef CBaseTrigger BaseClass;

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
	CDOTA_ShopTrigger(CDOTA_ShopTrigger &);
	CDOTA_ShopTrigger(CDOTA_ShopTrigger &);
	CDOTA_ShopTrigger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Spawn(const CEntityKeyValues *);
	virtual void StartTouch(CBaseEntity *);
	virtual void Touch(CBaseEntity *);
	virtual void EndTouch(CBaseEntity *);
	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	virtual ~CDOTA_ShopTrigger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[8] Spawn
	// vtable[111] StartTouch
	// vtable[112] Touch
	// vtable[113] EndTouch
	// vtable[34] GetDataDescMap
	// sizeof = 1504
};

// src/game/server/dota/npc/dota_npc_shop.cpp:126
class CSpeechCallbackShopownerPurchaseLine : public IDOTA_SpeechQueuedCallback {
public:

protected:

	const CHandle<CDOTA_BaseNPC> m_hItemOwner;  // +0x8
	CSpeechCallbackShopownerPurchaseLine(CSpeechCallbackShopownerPurchaseLine &);
	CSpeechCallbackShopownerPurchaseLine(const CSpeechCallbackShopownerPurchaseLine &);
	virtual void Go(CDOTA_Speech *, bool, CDOTA_SpeechConceptQueued &);
	CSpeechCallbackShopownerPurchaseLine(CDOTA_BaseNPC *);
	CDOTA_BaseNPC_Shop * FindNearestShopToItemOwner();
	const char * GetShopCriterionName(CDOTA_BaseNPC_Shop *);
	virtual ~CSpeechCallbackShopownerPurchaseLine();

	// vtable[0] Go
	// sizeof = 16
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Shop::GetDataDescMap  (line 8, @0x00000000028f55c0, libserver.so)
// globals: CDOTA_BaseNPC_Shop::m_DataMap
datamap_t *__fastcall CDOTA_BaseNPC_Shop::GetDataDescMap(CDOTA_BaseNPC_Shop *const this)
{
  return &CDOTA_BaseNPC_Shop::m_DataMap;
}


// CDOTA_BaseNPC_Shop::AddDatadescMetadataKeys  (line 8, @0x0000000002911de0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_BaseNPC_Shop::GetEntityClass(void)
void __fastcall CDOTA_BaseNPC_Shop::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_BaseNPC_Shop::GetEntityClass);
}


// CDOTA_BaseNPC_Shop::GetBaseMap  (line 8, @0x0000000002911e00, libserver.so)
// globals: CDOTA_BaseNPC_Building::m_DataMap
datamap_t *__cdecl CDOTA_BaseNPC_Shop::GetBaseMap()
{
  return &CDOTA_BaseNPC_Building::m_DataMap;
}


// DataMapInit<CDOTA_BaseNPC_Shop>  (line 8, @0x0000000002911e10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: __cxa_guard_acquire, AddDatadescMetadataKeys, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_BaseNPC_Shop"
// globals: `guard variable for'DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder, CDOTA_BaseNPC_Building::m_DataMap, CDOTA_BaseNPC_Shop::GetEntityClass(void), CDOTA_BaseNPC_Shop::m_DataMap, DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_pszBase = "CDOTA_BaseNPC_Shop";
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder.m_nLenBase = 18;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_BaseNPC_Shop::m_DataMap.dataNumFields = 1;
  CDOTA_BaseNPC_Shop::m_DataMap.baseMap = &CDOTA_BaseNPC_Building::m_DataMap;
  CDOTA_BaseNPC_Shop::m_DataMap.dataDesc = &DataMapInit<CDOTA_BaseNPC_Shop>(CDOTA_BaseNPC_Shop *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_BaseNPC_Shop::m_DataMap, CDOTA_BaseNPC_Shop::GetEntityClass);
  return &CDOTA_BaseNPC_Shop::m_DataMap;
}


// CDOTA_BaseNPC_Shop::YouForgotToImplementOrDeclareServerClass  (line 16, @0x00000000028f55d0, libserver.so)
int __fastcall CDOTA_BaseNPC_Shop::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Shop *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Shop::GetServerClass  (line 16, @0x0000000002900710, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Shop::GetServerClass(CDOTA_BaseNPC_Shop *const this)
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


// CDOTA_BaseNPC_Shop::Precache  (line 20, @0x000000000294bb30, libserver.so)
// calls: CDOTA_BaseNPC_Building::Precache
// strings: "soundevents/voscripts/game_sounds_vo_secretshop.vsndevts"
void __fastcall CDOTA_BaseNPC_Shop::Precache(CDOTA_BaseNPC_Shop *const this, const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Building::Precache(this, pContext);
  (**pContext->m_pManifest)(pContext->m_pManifest, "soundevents/voscripts/game_sounds_vo_secretshop.vsndevts");
}


// CDOTA_BaseNPC_Shop::Spawn  (line 26, @0x0000000002952dc0, libserver.so)  // inlines: NetworkStateChanged, Set, SetPhantomState, operator=<bool>
// calls: CDOTA_BaseNPC_Building::Spawn, CDOTABody::StartAnimation
void __fastcall CDOTA_BaseNPC_Shop::Spawn(CDOTA_BaseNPC_Shop *const this, const CEntityKeyValues *pKeyValues)
{
  DOTA_SHOP_TYPE m_Value; // edx
  CDOTABody *v4; // rax

  CDOTA_BaseNPC_Building::Spawn(this, pKeyValues);
  m_Value = this->m_ShopType.m_Value;
  this->m_iUnitType |= 0x200u;
  if ( m_Value != DOTA_SHOP_TYPE::DOTA_SHOP_HOME )
  {
    v4 = (*(this->_vptr_IHandleEntity + 377))(this);
    CDOTABody::StartAnimation(v4, 0x5DCu, 1, 1.0);
  }
  if ( !this->m_bIsPhantom.m_Value )
  {
    (*(this->_vptr_IHandleEntity + 22))(this, 2164, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_bIsPhantom.m_Value = 1;
  }
  (*(this->_vptr_IHandleEntity + 70))(this, 5);
}


// CDOTA_ShopTrigger::~CDOTA_ShopTrigger  (line 42, @0x00000000029781f0, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_ShopTrigger::~CDOTA_ShopTrigger(CDOTA_ShopTrigger *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hTouchingEntities; // rdi

  p_m_hTouchingEntities = &this->m_hTouchingEntities;
  *&p_m_hTouchingEntities[-61].m_Memory.m_nAllocationCount = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
}


// CDOTA_ShopTrigger::~CDOTA_ShopTrigger  (line 42, @0x0000000002978780, libserver.so)  // inlines: Purge, ~CBaseToggle, ~CBaseTrigger, ~CDOTA_ShopTrigger, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CBaseModelEntity::~CBaseModelEntity, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_ShopTrigger::~CDOTA_ShopTrigger(CDOTA_ShopTrigger *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hTouchingEntities; // rdi

  p_m_hTouchingEntities = &this->m_hTouchingEntities;
  *&p_m_hTouchingEntities[-61].m_Memory.m_nAllocationCount = &off_40BE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(p_m_hTouchingEntities);
  if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
    if ( (this->m_hTouchingEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hTouchingEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_40B41B0;
  CBaseModelEntity::~CBaseModelEntity(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_ShopTrigger::GetEntityClass  (line 44, @0x0000000002967b10, libserver.so)
CEntityClass *__cdecl CDOTA_ShopTrigger::GetEntityClass()
{
  return g_pEntityCDOTA_ShopTriggerClass;
}


// CDOTA_ShopTrigger::Schema_DynamicBinding  (line 44, @0x0000000002967b20, libserver.so)
// globals: CDOTA_ShopTrigger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ShopTrigger::Schema_DynamicBinding(const CDOTA_ShopTrigger *const this)
{
  return CDOTA_ShopTrigger::s_pSchemaBinding;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002967b30, libserver.so)
// globals: CDOTA_ShopTrigger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ShopTrigger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002967b40, libserver.so)  // inlines: Destruct<CDOTA_ShopTrigger>
void __fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002967b60, libserver.so)
void __fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002967b80, libserver.so)
bool __fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002967b90, libserver.so)
// globals: CDOTA_ShopTrigger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_ShopTrigger::s_pSchemaBinding;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x000000000296ae10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1504);
  memset(v1, 0, 0x5E0u);
  return v1;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x000000000296b250, libserver.so)  // inlines: CDOTA_ShopTrigger, CEntityIOOutput, Construct<CDOTA_ShopTrigger>
// calls: CBaseTrigger::CBaseTrigger
CEntityInstance *__fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseTrigger::CBaseTrigger(p);
    *p = &off_42FC3F0;
    *(p + 185) = off_3F7C190;
  }
  return p;
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x000000000296f970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x000000000296f990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_ShopTrigger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_ShopTrigger::GetEntityClassInternal  (line 44, @0x00000000029810d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseTrigger::InitScriptDesc, CBaseTrigger::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "trigger_shop", "CDOTA_ShopTrigger"
// globals: `guard variable for'CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass, CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo, CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo
CEntityClass *__cdecl CDOTA_ShopTrigger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass) != 0 )
  {
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_designerName.u.m_Id = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass._vptr_CEntityClass = off_3F79390;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_AllHelpers.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classInputs.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classOutputs.m_Size = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_requiredEHandle.m_Index = -1;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_hNetworkSerializer = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pBaseClassInfo = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pClassInfo = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_flags = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_nAllHelpersFlags = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pScriptClassDesc = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pInputs = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_nInputCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pOutputs = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_nOutputCount = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pGameClass = 0;
    CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass._vptr_CEntityClass = off_42FC370;
    __cxa_guard_release(&`guard variable for'CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass);
    __cxa_atexit(
      CDOTA_ShopTrigger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_ShopTriggerClass != 0 )
    return &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass;
  if ( `guard variable for'CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo) != 0 )
  {
    EntityClassInfo = CBaseTrigger::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo,
      "CDOTA_ShopTrigger",
      "trigger_shop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo);
  }
  CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pClassInfo = &CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo;
  CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pBaseClassInfo = CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_ShopTriggerClass = &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass;
  CDOTA_ShopTrigger::GetEntityClassInfo(void)::g_EntityCDOTA_ShopTriggerClassInfo.m_pClass = &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass;
  CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass.m_pScriptClassDesc = CBaseTrigger::InitScriptDesc();
  g_pEntityCDOTA_ShopTriggerClass->m_pComponentOverrides = 0;
  return &CDOTA_ShopTrigger::GetEntityClassInternal(void)::g_EntityCDOTA_ShopTriggerClass;
}


// CDOTA_ShopTrigger::GetDataDescMap  (line 59, @0x00000000028f55e0, libserver.so)
// globals: CDOTA_ShopTrigger::m_DataMap
datamap_t *__fastcall CDOTA_ShopTrigger::GetDataDescMap(CDOTA_ShopTrigger *const this)
{
  return &CDOTA_ShopTrigger::m_DataMap;
}


// CDOTA_ShopTrigger::AddDatadescMetadataKeys  (line 59, @0x0000000002911ee0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CDOTA_ShopTrigger::GetEntityClass(void)
void __fastcall CDOTA_ShopTrigger::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CDOTA_ShopTrigger::GetEntityClass);
}


// CDOTA_ShopTrigger::GetBaseMap  (line 59, @0x0000000002911f00, libserver.so)
datamap_t *__cdecl CDOTA_ShopTrigger::GetBaseMap()
{
  return &CBaseTrigger::m_DataMap;
}


// DataMapInit<CDOTA_ShopTrigger>  (line 59, @0x0000000002911f10, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_characters_01.cpp
// strings: "CDOTA_ShopTrigger"
// globals: `guard variable for'DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder, `guard variable for'DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc, CDOTA_ShopTrigger::GetEntityClass(void), CDOTA_ShopTrigger::m_DataMap, DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder) != 0 )
  {
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_pszBase = "CDOTA_ShopTrigger";
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder.m_nLenBase = 17;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::nameHolder,
      &_dso_handle);
  }
  CDOTA_ShopTrigger::m_DataMap.baseMap = &CBaseTrigger::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc) != 0 )
  {
    DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc[2].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc);
  }
  CDOTA_ShopTrigger::m_DataMap.dataNumFields = 2;
  CDOTA_ShopTrigger::m_DataMap.dataDesc = &DataMapInit<CDOTA_ShopTrigger>(CDOTA_ShopTrigger *)::dataDesc[1];
  AddDatadescMetadataKeys(&CDOTA_ShopTrigger::m_DataMap, CDOTA_ShopTrigger::GetEntityClass);
  return &CDOTA_ShopTrigger::m_DataMap;
}


// CDOTA_ShopTrigger::Spawn  (line 65, @0x00000000028f6640, libserver.so)
// calls: CBaseTrigger::Spawn, CBaseTrigger::InitTrigger
void __fastcall CDOTA_ShopTrigger::Spawn(CDOTA_ShopTrigger *const this, const CEntityKeyValues *pKeyValues)
{
  CBaseTrigger::Spawn(this, pKeyValues);
  CBaseTrigger::InitTrigger(this, pKeyValues);
}


// CDOTA_ShopTrigger::StartTouch  (line 81, @0x00000000028f55f0, libserver.so)  // inlines: ToDOTABaseNPC
void __fastcall CDOTA_ShopTrigger::StartTouch(CDOTA_ShopTrigger *const this, CBaseEntity *pOther)
{
  if ( pOther != 0 && pOther->m_bIsDOTANPC )
    (*(pOther->_vptr_IHandleEntity + 464))(pOther, this->m_ShopType, this);
}


// CDOTA_ShopTrigger::Touch  (line 96, @0x000000000291ad30, libserver.so)  // inlines: CVariantBase, FireOutput, Free, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, ~CVariantBase
// calls: CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_ShopTrigger::Touch(CDOTA_ShopTrigger *const this, CBaseEntity *pOther)
{
  CEntityInstance *m_pInstance; // rsi
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rdi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CVariant value; // [rsp+0h] [rbp-20h] BYREF

  m_pInstance = 0;
  m_Index = this->m_hActivator.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(this->m_hActivator.m_Index);
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[m_Index_low & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  value.m_type = 0;
  value.m_flags = 0;
  value.m_uint64 = 0;
  CEntityIOOutput::FireOutputInternal(&this->m_OnTrigger, m_pInstance, this, &value, 0.0);
  if ( (value.m_flags & 1) != 0 )
    (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
}


// CDOTA_ShopTrigger::EndTouch  (line 105, @0x0000000002910390, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTA_BaseNPC::LeaveShop
void __fastcall CDOTA_ShopTrigger::EndTouch(CDOTA_ShopTrigger *const this, CBaseEntity *pOther)
{
  if ( pOther != 0 && pOther->m_bIsDOTANPC )
    CDOTA_BaseNPC::LeaveShop(pOther, this->m_ShopType, this);
}


// CDOTA_BaseNPC_Shop_Speech::ShopkeeperSpeechEnabled  (line 120, @0x0000000002912030, libserver.so)  // inlines: GetBool, GetInt
bool __cdecl CDOTA_BaseNPC_Shop_Speech::ShopkeeperSpeechEnabled()
{
  return dota_speech_shopkeeper.m_pParent->m_Value.m_nValue != 0;
}


// CSpeechCallbackShopownerPurchaseLine::~CSpeechCallbackShopownerPurchaseLine  (line 126, @0x0000000002967f30, libserver.so)  // inlines: ~IDOTA_SpeechQueuedCallback
void __fastcall CSpeechCallbackShopownerPurchaseLine::~CSpeechCallbackShopownerPurchaseLine(
        CSpeechCallbackShopownerPurchaseLine *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
}


// CSpeechCallbackShopownerPurchaseLine::~CSpeechCallbackShopownerPurchaseLine  (line 126, @0x0000000002969f90, libserver.so)  // inlines: ~CSpeechCallbackShopownerPurchaseLine, ~IDOTA_SpeechQueuedCallback
// calls: operator delete
void __fastcall CSpeechCallbackShopownerPurchaseLine::~CSpeechCallbackShopownerPurchaseLine(
        CSpeechCallbackShopownerPurchaseLine *const this)
{
  this->_vptr_IDOTA_SpeechQueuedCallback = &off_4186FD0;
  operator delete(this);
}


// CDOTA_BaseNPC_Shop_Speech::MakeSpeechCallbackForItemPurchaseIfHeroDoesntHaveSomethingToSay  (line 143, @0x0000000002912050, libserver.so)  // inlines: CEntityHandle, CHandle, CSpeechCallbackShopownerPurchaseLine, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: operator new
// callers: CDOTA_Item::TryToComment
IDOTA_SpeechQueuedCallback *__fastcall CDOTA_BaseNPC_Shop_Speech::MakeSpeechCallbackForItemPurchaseIfHeroDoesntHaveSomethingToSay(
        CDOTA_Item *pItem,
        CDOTA_BaseNPC *pCaster)
{
  IDOTA_SpeechQueuedCallback *result; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v5; // edx
  __int16 v6; // si

  result = operator new(0x10u);
  result->_vptr_IDOTA_SpeechQueuedCallback = &off_42FCB10;
  LODWORD(result[1]._vptr_IDOTA_SpeechQueuedCallback) = -1;
  if ( pCaster != 0 )
  {
    m_pEntity = pCaster->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(result[1]._vptr_IDOTA_SpeechQueuedCallback) = v6 | result[1]._vptr_IDOTA_SpeechQueuedCallback & 0x8000;
      LODWORD(result[1]._vptr_IDOTA_SpeechQueuedCallback) = (v5 << 15)
                                                          | result[1]._vptr_IDOTA_SpeechQueuedCallback & 0x7FFF;
    }
  }
  return result;
}


// CDOTA_BaseNPC_Shop::ShopTypeToCriterionFact  (line 149, @0x00000000029120d0, libserver.so)
// strings: "home", "secret"
// globals: jpt_29120E9
const char *__fastcall CDOTA_BaseNPC_Shop::ShopTypeToCriterionFact(DOTA_SHOP_TYPE ty)
{
  const char *result; // rax

  switch ( ty )
  {
    case DOTA_SHOP_TYPE::DOTA_SHOP_HOME:
      result = "home";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE:
    case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE2:
      result = "side";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET:
    case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET2:
      result = "secret";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_NONE:
      result = "none";
      break;
    default:
      result = "error";
      break;
  }
  return result;
}


// CSpeechCallbackShopownerPurchaseLine::GetShopCriterionName  (line 170, @0x0000000002912140, libserver.so)  // inlines: ShopTypeToCriterionFact
// callers: CSpeechCallbackShopownerPurchaseLine::Go
// strings: "home", "secret"
// globals: jpt_2912161
const char *__fastcall CSpeechCallbackShopownerPurchaseLine::GetShopCriterionName(CDOTA_BaseNPC_Shop *pShop)
{
  const char *result; // rax

  switch ( pShop->m_ShopType.m_Value )
  {
    case DOTA_SHOP_TYPE::DOTA_SHOP_HOME:
      result = "home";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE:
    case DOTA_SHOP_TYPE::DOTA_SHOP_SIDE2:
      result = "side";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET:
    case DOTA_SHOP_TYPE::DOTA_SHOP_SECRET2:
      result = "secret";
      break;
    case DOTA_SHOP_TYPE::DOTA_SHOP_NONE:
      result = "none";
      break;
    default:
      result = "error";
      break;
  }
  return result;
}


// CSpeechCallbackShopownerPurchaseLine::Go  (line 176, @0x0000000002912240, libserver.so)  // inlines: DOTAGameRules, Get, GetBool, GetInstance, GetInt, GetTeamNumber, GetUnitName, ShopkeeperSpeechEnabled, SpeakConcept, String, ToCStr, operator CDOTA_BaseNPC*, operator->
// calls: CEntityHandle::operator CEntityInstance*, CDOTAGamerules::GetAnnouncer, CDOTA_Speech::SpeakConcept, CSpeechCallbackShopownerPurchaseLine::FindNearestShopToItemOwner, CSpeechCallbackShopownerPurchaseLine::GetShopCriterionName, CResponseCriteriaSet::AppendCriteria
// strings: "buyer"
void __fastcall CSpeechCallbackShopownerPurchaseLine::Go(
        CSpeechCallbackShopownerPurchaseLine *const this,
        CDOTA_Speech *pSpeech,
        bool bQueuedConceptWasPlayed,
        CDOTA_SpeechConceptQueued *const queuedConcept)
{
  CGameRules *v4; // r13
  const CHandle<CDOTA_BaseNPC> *p_m_hItemOwner; // r12
  CDOTA_Speech::SpeechSource_t *v8; // rax
  CDOTAGamerules *v9; // rdi
  CDOTA_BaseNPC *Announcer; // r13
  CDOTA_Speech::SpeechSource_t *v11; // rax
  CDOTA_Speech *v12; // rdi
  CDOTA_BaseNPC_Shop *NearestShopToItemOwner; // rax
  CDOTA_BaseNPC_Shop *v14; // r13
  const char *ShopCriterionName; // rax
  CEntityInstance *v16; // rax
  const char *m_pAsString; // rdx
  CDOTA_Speech *m_pSpeech; // rdi

  if ( !bQueuedConceptWasPlayed )
  {
    v4 = g_pGameRules;
    if ( g_pGameRules != 0 )
    {
      if ( dota_speech_shopkeeper.m_pParent->m_Value.m_nValue != 0 )
      {
        NearestShopToItemOwner = CSpeechCallbackShopownerPurchaseLine::FindNearestShopToItemOwner(this);
        v14 = NearestShopToItemOwner;
        if ( NearestShopToItemOwner != 0 )
        {
          p_m_hItemOwner = &this->m_hItemOwner;
          ShopCriterionName = CSpeechCallbackShopownerPurchaseLine::GetShopCriterionName(NearestShopToItemOwner);
          CResponseCriteriaSet::AppendCriteria(&queuedConcept->criteria, "shop", ShopCriterionName, 1.0);
          v16 = CEntityHandle::operator CEntityInstance *(p_m_hItemOwner);
          m_pAsString = "";
          if ( v16[70].m_iszPrivateVScripts.u.m_Id != 0 )
            m_pAsString = v16[70].m_iszPrivateVScripts.u.m_pAsString;
          CResponseCriteriaSet::AppendCriteria(&queuedConcept->criteria, "buyer", m_pAsString, 1.0);
          v8 = CEntityHandle::operator CEntityInstance *(p_m_hItemOwner);
          m_pSpeech = v14->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
          {
            if ( CDOTA_Speech::SpeakConcept(
                   m_pSpeech,
                   queuedConcept->iConcept,
                   &queuedConcept->criteria,
                   1,
                   v8,
                   0,
                   0,
                   0) )
            {
              return;
            }
            v8 = CEntityHandle::operator CEntityInstance *(p_m_hItemOwner);
          }
          v9 = g_pGameRules;
        }
        else
        {
          p_m_hItemOwner = &this->m_hItemOwner;
          v8 = CEntityHandle::operator CEntityInstance *(p_m_hItemOwner);
          v9 = g_pGameRules;
        }
      }
      else
      {
        p_m_hItemOwner = &this->m_hItemOwner;
        v8 = CEntityHandle::operator CEntityInstance *(&this->m_hItemOwner);
        v9 = v4;
      }
      Announcer = CDOTAGamerules::GetAnnouncer(v9, v8->m_iTeamNum.m_Value);
      if ( Announcer != 0 )
      {
        v11 = CEntityHandle::operator CEntityInstance *(p_m_hItemOwner);
        v12 = Announcer->m_Speech.m_pSpeech;
        if ( v12 != 0 )
          CDOTA_Speech::SpeakConcept(v12, queuedConcept->iConcept, &queuedConcept->criteria, 1, v11, 0, 0, 0);
      }
    }
  }
}


// CSpeechCallbackShopownerPurchaseLine::FindNearestShopToItemOwner  (line 207, @0x00000000029121c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, operator CDOTA_BaseNPC*, operator CEntityInstance*
// calls: CDOTAGamerules::GetShop
// callers: CSpeechCallbackShopownerPurchaseLine::Go
// globals: CEntityHandle::gm_pEntityList
CDOTA_BaseNPC_Shop *__fastcall CSpeechCallbackShopownerPurchaseLine::FindNearestShopToItemOwner(
        CSpeechCallbackShopownerPurchaseLine *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx

  m_Index = this->m_hItemOwner.m_Index;
  if ( m_Index + 2 > 1
    && (v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hItemOwner.m_Index) >> 9) & 0x3F]) != 0
    && (v3 = &v2[this->m_hItemOwner.m_Index & 0x1FF]) != 0
    && m_Index == v3->m_EHandle.m_Index
    && v3->m_pInstance != 0 )
  {
    return CDOTAGamerules::GetShop(
             g_pGameRules,
             HIBYTE(v3->m_pInstance[7].m_CScriptComponent),
             *(&v3->m_pInstance[80].m_worldGroupId + 1));
  }
  else
  {
    return 0;
  }
}


