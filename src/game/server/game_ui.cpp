// Reconstructed from DWARF by pahole; not original source.

// src/game/server/game_ui.cpp:29
class CGameUI : public CBaseEntity {
public:

private:

	static datamap_t m_DataMap;

	float m_flFieldOfView;  // +0x308
	COutputEvent m_playerOn;  // +0x310
	COutputEvent m_playerOff;  // +0x328
	COutputEvent m_pressedMoveLeft;  // +0x340
	COutputEvent m_pressedMoveRight;  // +0x358
	COutputEvent m_pressedForward;  // +0x370
	COutputEvent m_pressedBack;  // +0x388
	COutputEvent m_pressedAttack;  // +0x3a0
	COutputEvent m_pressedAttack2;  // +0x3b8
	COutputEvent m_unpressedMoveLeft;  // +0x3d0
	COutputEvent m_unpressedMoveRight;  // +0x3e8
	COutputEvent m_unpressedForward;  // +0x400
	COutputEvent m_unpressedBack;  // +0x418
	COutputEvent m_unpressedAttack;  // +0x430
	COutputEvent m_unpressedAttack2;  // +0x448
	COutputFloat m_xaxis;  // +0x460
	COutputFloat m_yaxis;  // +0x480
	COutputFloat m_attackaxis;  // +0x4a0
	COutputFloat m_attack2axis;  // +0x4c0
	bool m_bForceUpdate;  // +0x4e0

	int m_nLastButtonState;  // +0x4e4
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
	CGameUI(CGameUI &);
	CGameUI(CGameUI &);
	CGameUI();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	datamap_t * GetBaseMap();
	void AddDatadescMetadataKeys(datamap_t *);
	virtual datamap_t * GetDataDescMap();
	void InputDeactivate(inputdata_t &);
	void InputActivate(inputdata_t &);
	virtual void Think();
	void Deactivate(CBaseEntity *);
	virtual ~CGameUI();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[34] GetDataDescMap
	// vtable[117] Think
	// sizeof = 1264
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CGameUI::~CGameUI  (line 29, @0x0000000002246e40, libserver.so)
// calls: CBaseEntity::~CBaseEntity
void __fastcall CGameUI::~CGameUI(CGameUI *const this)
{
  this->_vptr_IHandleEntity = &off_404C010;
  CBaseEntity::~CBaseEntity(this);
}


// CGameUI::~CGameUI  (line 29, @0x0000000002246e60, libserver.so)  // inlines: ~CGameUI
// calls: CBaseEntity::~CBaseEntity, CBaseEntity::operator delete
void __fastcall CGameUI::~CGameUI(CGameUI *const this)
{
  this->_vptr_IHandleEntity = &off_404C010;
  CBaseEntity::~CBaseEntity(this);
  CBaseEntity::operator delete(this);
}


// CGameUI::GetEntityClass  (line 31, @0x0000000002245c20, libserver.so)
CEntityClass *__cdecl CGameUI::GetEntityClass()
{
  return g_pEntityCGameUIClass;
}


// CGameUI::Schema_DynamicBinding  (line 31, @0x0000000002245c30, libserver.so)
// globals: CGameUI::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameUI::Schema_DynamicBinding(const CGameUI *const this)
{
  return CGameUI::s_pSchemaBinding;
}


// CGameUI::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 31, @0x0000000002245c40, libserver.so)
// globals: CGameUI::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CGameUI::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CGameUI::CEntityInstanceEntityClass *const this)
{
  return CGameUI::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CGameUI::CEntityInstanceEntityClass::DestructInstance  (line 31, @0x0000000002245c50, libserver.so)  // inlines: Destruct<CGameUI>
void __fastcall CGameUI::CEntityInstanceEntityClass::DestructInstance(
        CGameUI::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CGameUI::CEntityInstanceEntityClass::FreeInstance  (line 31, @0x0000000002245c70, libserver.so)
void __fastcall CGameUI::CEntityInstanceEntityClass::FreeInstance(
        CGameUI::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CGameUI::CEntityInstanceEntityClass::CanAllocate  (line 31, @0x0000000002245c90, libserver.so)
bool __fastcall CGameUI::CEntityInstanceEntityClass::CanAllocate(const CGameUI::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CGameUI::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 31, @0x0000000002245ca0, libserver.so)
// globals: CGameUI::s_pSchemaBinding
const ISchemaBinding *__fastcall CGameUI::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CGameUI::CEntityInstanceEntityClass *const this)
{
  return CGameUI::s_pSchemaBinding;
}


// CGameUI::CEntityInstanceEntityClass::AllocateInstance  (line 31, @0x0000000002246b10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CGameUI::CEntityInstanceEntityClass::AllocateInstance(CGameUI::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1264);
  memset(v1, 0, 0x4F0u);
  return v1;
}


// CGameUI::CEntityInstanceEntityClass::ConstructInstance  (line 31, @0x0000000002248200, libserver.so)  // inlines: CEntityHandle, CEntityIOOutput, CEntityOutputTemplate, CGameUI, CHandle, Construct<CGameUI>
// calls: CBaseEntity::CBaseEntity
CEntityInstance *__fastcall CGameUI::CEntityInstanceEntityClass::ConstructInstance(
        CGameUI::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CBaseEntity::CBaseEntity(p);
    *(p + 195) = -1;
    *p = &off_404C010;
    *(p + 98) = off_3F7C190;
    *(p + 101) = off_3F7C190;
    *(p + 104) = off_3F7C190;
    *(p + 107) = off_3F7C190;
    *(p + 110) = off_3F7C190;
    *(p + 113) = off_3F7C190;
    *(p + 116) = off_3F7C190;
    *(p + 119) = off_3F7C190;
    *(p + 122) = off_3F7C190;
    *(p + 125) = off_3F7C190;
    *(p + 128) = off_3F7C190;
    *(p + 131) = off_3F7C190;
    *(p + 134) = off_3F7C190;
    *(p + 137) = off_3F7C190;
    *(p + 140) = off_3FD2290;
    *(p + 144) = off_3FD2290;
    *(p + 148) = off_3FD2290;
    *(p + 152) = off_3FD2290;
    *(p + 314) = -1;
  }
  return p;
}


// CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002249240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameUI::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 31, @0x0000000002249260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CGameUI::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CGameUI::GetEntityClassInternal  (line 31, @0x000000000224d5f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CBaseEntity::InitScriptDesc, CBaseEntity::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "game_ui", "CGameUI"
// globals: `guard variable for'CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass, CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo, CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo
CEntityClass *__cdecl CGameUI::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass == 0
    && __cxa_guard_acquire(&`guard variable for'CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass) != 0 )
  {
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_designerName.u.m_Id = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass._vptr_CEntityClass = off_3F79390;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_ComponentOffsets.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_AllHelpers.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_atomicFields,
      4);
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classInputs.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classInputs.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classOutputs.m_Size = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_requiredEHandle.m_Index = -1;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_hNetworkSerializer = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pBaseClassInfo = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pClassInfo = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_flags = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_nAllHelpersFlags = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pScriptClassDesc = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pInputs = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_nInputCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pOutputs = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_nOutputCount = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pGameClass = 0;
    CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass._vptr_CEntityClass = off_404BF90;
    __cxa_guard_release(&`guard variable for'CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass);
    __cxa_atexit(
      CGameUI::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass,
      &_dso_handle);
  }
  if ( g_pEntityCGameUIClass != 0 )
    return &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass;
  if ( `guard variable for'CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo) != 0 )
  {
    EntityClassInfo = CBaseEntity::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo,
      "CGameUI",
      "game_ui",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo);
  }
  CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pClassInfo = &CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo;
  CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pBaseClassInfo = CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo.m_pBaseClassInfo;
  g_pEntityCGameUIClass = &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass;
  CGameUI::GetEntityClassInfo(void)::g_EntityCGameUIClassInfo.m_pClass = &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass;
  CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass.m_pScriptClassDesc = CBaseEntity::InitScriptDesc();
  g_pEntityCGameUIClass->m_pComponentOverrides = 0;
  return &CGameUI::GetEntityClassInternal(void)::g_EntityCGameUIClass;
}


// CGameUI::GetDataDescMap  (line 75, @0x000000000221a6e0, libserver.so)
// globals: CGameUI::m_DataMap
datamap_t *__fastcall CGameUI::GetDataDescMap(CGameUI *const this)
{
  return &CGameUI::m_DataMap;
}


// CGameUI::AddDatadescMetadataKeys  (line 75, @0x000000000222faf0, libserver.so)
// calls: AddDatadescMetadataKeys
// globals: CGameUI::GetEntityClass(void)
void __fastcall CGameUI::AddDatadescMetadataKeys(datamap_t *pDataMap)
{
  AddDatadescMetadataKeys(pDataMap, CGameUI::GetEntityClass);
}


// CGameUI::GetBaseMap  (line 75, @0x000000000222fb10, libserver.so)
datamap_t *__cdecl CGameUI::GetBaseMap()
{
  return &CBaseEntity::m_DataMap;
}


// DataMapInit<CGameUI>  (line 75, @0x000000000222fb20, libserver.so)  // inlines: AddDatadescMetadataKeys, CDatadescGeneratedNameHolder, CUtlMemory, CUtlVector, CUtlVectorBase
// calls: AddDatadescMetadataKeys, __cxa_guard_acquire, __cxa_guard_release, __cxa_atexit
// callers: _GLOBAL__sub_I__unity_base_05.cpp
// strings: "CGameUI"
// globals: `guard variable for'DataMapInit<CGameUI>(CGameUI *)::nameHolder, `guard variable for'DataMapInit<CGameUI>(CGameUI *)::dataDesc, CGameUI::GetEntityClass(void), CGameUI::m_DataMap, DataMapInit<CGameUI>(CGameUI *)::nameHolder, __dso_handle, CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder()
datamap_t *__fastcall DataMapInit<CGameUI>(CGameUI *a1)
{
  if ( `guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::nameHolder == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::nameHolder) != 0 )
  {
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_Names.m_Size = 0;
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_pszBase = "CGameUI";
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_Names.m_Memory.m_pMemory = 0;
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_Names.m_Memory.m_nAllocationCount = 0;
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_Names.m_Memory.m_nGrowSize = 0;
    DataMapInit<CGameUI>(CGameUI *)::nameHolder.m_nLenBase = 7;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::nameHolder);
    __cxa_atexit(
      CDatadescGeneratedNameHolder::~CDatadescGeneratedNameHolder,
      &DataMapInit<CGameUI>(CGameUI *)::nameHolder,
      &_dso_handle);
  }
  CGameUI::m_DataMap.baseMap = &CBaseEntity::m_DataMap;
  if ( `guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::dataDesc == 0
    && __cxa_guard_acquire(&`guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::dataDesc) != 0 )
  {
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[8].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[9].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[10].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[11].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[12].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[13].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[14].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[15].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[16].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[17].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[18].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[19].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[20].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[21].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[22].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[23].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[24].pSaveRestoreOps = eventFuncs;
    DataMapInit<CGameUI>(CGameUI *)::dataDesc[25].pSaveRestoreOps = eventFuncs;
    __cxa_guard_release(&`guard variable for'datamap_t * DataMapInit<CGameUI>(CGameUI *)::dataDesc);
  }
  CGameUI::m_DataMap.dataNumFields = 25;
  CGameUI::m_DataMap.dataDesc = &DataMapInit<CGameUI>(CGameUI *)::dataDesc[1];
  AddDatadescMetadataKeys(&CGameUI::m_DataMap, CGameUI::GetEntityClass);
  return &CGameUI::m_DataMap;
}


// CGameUI::InputDeactivate  (line 116, @0x0000000002232b70, libserver.so)
// calls: CGameUI::Deactivate
void __fastcall CGameUI::InputDeactivate(CGameUI *const this, inputdata_t *const inputdata)
{
  CGameUI::Deactivate(this, inputdata->pActivator);
}


// CGameUI::Deactivate  (line 125, @0x00000000022327d0, libserver.so)  // inlines: CUtlSymbolLarge, CVariantBase, FireOutput, FireOutput<float>, Free, Get, GetEntityIdentity, GetEntityName, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBasePlayer*, operator CEntityInstance*, operator&=<int>, operator->, operator=, ~CVariantBase
// calls: Warning, CBaseEntity::SetNextThink, CEntityHandle::operator CEntityInstance*, CBaseCombatCharacter::GetActiveWeapon, CEntityIOOutput::FireOutputInternal, CBaseEntity::RemoveFlag, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// callers: CGameUI::InputDeactivate, CGameUI::Think
// strings: "%s Deactivate(): I have no player when called by %s!\n"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameUI::Deactivate(CGameUI *const this, CBaseEntity *pActivator)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  const char *m_pAsString; // rdx
  const char *v7; // rsi
  double v8; // xmm1_8
  CBaseEntity *m_pInstance; // r12
  unsigned int m_Value; // eax
  unsigned int v11; // r13d
  CEntityInstance *v12; // r13
  CEntityInstance *v13; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CVariant value; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_player.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_player.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_player.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0) )
  {
    m_Value = this->m_spawnflags.m_Value;
    if ( (m_Value & 0x20) != 0 )
    {
      CBaseEntity::RemoveFlag(v5->m_pInstance, 64);
      m_Value = this->m_spawnflags.m_Value;
    }
    if ( (m_Value & 0x40) != 0 )
    {
      v11 = m_pInstance[2].m_OnKilled.m_pDesc & 0xFFFFFFFE;
      if ( LODWORD(m_pInstance[2].m_OnKilled.m_pDesc) != v11 )
      {
        (*(m_pInstance[2].m_target.u.m_Id + 16))(&m_pInstance[2].m_target, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        LODWORD(m_pInstance[2].m_OnKilled.m_pDesc) = v11;
      }
      v12 = CEntityHandle::operator CEntityInstance *(&this->m_hSaveWeapon);
      if ( v12 != 0 )
      {
        v13 = CEntityHandle::operator CEntityInstance *(&this->m_player);
        (*(v13->_vptr_IHandleEntity + 310))(v13, v12, 0);
        this->m_hSaveWeapon.m_Index = -1;
      }
      if ( CBaseCombatCharacter::GetActiveWeapon(m_pInstance) != 0 )
      {
        ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(m_pInstance);
        (*(ActiveWeapon->_vptr_IHandleEntity + 282))(ActiveWeapon);
      }
    }
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_playerOff, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 1;
    value.m_flags = 0;
    this->m_xaxis.m_Value = 0.0;
    value.m_int = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_xaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 1;
    this->m_yaxis.m_Value = 0.0;
    value.m_flags = 0;
    value.m_int = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_yaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 1;
    this->m_attackaxis.m_Value = 0.0;
    value.m_flags = 0;
    value.m_int = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_attackaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    value.m_type = 1;
    this->m_attack2axis.m_Value = 0.0;
    value.m_flags = 0;
    value.m_int = 0;
    CEntityIOOutput::FireOutputInternal(&this->m_attack2axis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    this->m_nLastButtonState = 0;
    this->m_player.m_Index = -1;
  }
  else
  {
    m_pAsString = pActivator->m_pEntity->m_name.u.m_pAsString;
    v7 = this->m_pEntity->m_name.u.m_pAsString;
    if ( m_pAsString == 0 )
      m_pAsString = "";
    if ( v7 == 0 )
      v7 = "";
    Warning("%s Deactivate(): I have no player when called by %s!\n", v7, m_pAsString);
  }
  CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v8, 0);
}


// CGameUI::InputActivate  (line 180, @0x0000000002232d90, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, CVariantBase, ClearActiveWeapon, FireOutput, Free, Get, GetEHandle, GetEntityName, GetEntryIndex, GetInstance, GetSerialNumber, NetworkStateChanged, Set, StringID, TempString, ToBasePlayer, ToString, VariantFieldTypeName, curtime, operator->, operator=, operator|=<int>, ~CVariantBase
// calls: CEntityHandle::operator CEntityInstance*, CEntityIOOutput::FireOutputInternal, CBaseEntity::SetNextThink, CBaseCombatCharacter::GetActiveWeapon, CBaseCombatCharacter::SetActiveWeapon, CBasePlayer::HideViewModels, Warning, MakeEntitySystemString, CGameEntitySystem::FindEntityByName, CBaseEntity::AddFlag, V_snprintf, VariantFieldTypeName (14 total)
// strings: "%s InputActivate: invalid or missing !activator!\n", "%s InputActivate: entity %s not found or is not a player!\n", "%g %g %g %g", "No conversion from %s to string at the moment!\n", "true", "false" (25 total)
// globals: jpt_22330B5, jpt_223318B, jpt_22331AB, CVariantBase<CVariantDefaultAllocator>::ToString(void)::szBuf, jpt_22338A1
void __fastcall CGameUI::InputActivate(CGameUI *const this, inputdata_t *const inputdata)
{
  CBaseEntity *v4; // r13
  CEntityInstance *v5; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx
  double v9; // xmm1_8
  CGlobalVars *v10; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  double v12; // xmm0_8
  unsigned int m_Value; // eax
  CEntityInstance *v14; // rax
  int v15; // r13d
  const CBaseCombatCharacter *v16; // rax
  CBaseCombatWeapon *ActiveWeapon; // rax
  CEntityIdentity *v18; // rdx
  int v19; // eax
  __int16 v20; // cx
  const CBaseCombatCharacter *v21; // rax
  CBaseCombatWeapon *v22; // rax
  CBaseCombatCharacter *v23; // rax
  CBasePlayer *v24; // rax
  const char *v25; // rsi
  int16 m_type; // ax
  CBaseEntity *pCaller; // r14
  CBaseEntity *pActivator; // r13
  char *m_pszString; // rdx
  CBaseEntity *EntityByName; // rax
  int16 v31; // ax
  const char *v32; // rdx
  const char *m_pAsString; // rsi
  CBaseEntity *v34; // rax
  const char *v35; // rax
  double m_float; // xmm0_8
  const char *v37; // rcx
  const char *v38; // rax
  double m_float64; // xmm0_8
  const char *v40; // rcx
  const char *v41; // rdx
  CEntityInstance *v42; // [rsp+8h] [rbp-38h]
  CVariant value; // [rsp+10h] [rbp-30h] BYREF

  if ( inputdata->value.m_type == 30 )
  {
    MakeEntitySystemString(inputdata->value.m_pszString);
    if ( value.m_uint64 != 0 )
    {
      m_type = inputdata->value.m_type;
      pCaller = inputdata->pCaller;
      pActivator = inputdata->pActivator;
      if ( m_type == 30 )
      {
        m_pszString = inputdata->value.m_pszString;
      }
      else
      {
        switch ( m_type )
        {
          case 0:
            goto LABEL_55;
          case 1:
            m_float = inputdata->value.m_float;
            goto LABEL_59;
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
            break;
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
            break;
          case 5:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%d",
              inputdata->value.m_uint);
            goto LABEL_57;
          case 6:
            v37 = "true";
            if ( inputdata->value.m_char == 0 )
              v37 = "false";
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%s", v37);
            goto LABEL_64;
          case 8:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%c",
              inputdata->value.m_char);
            goto LABEL_57;
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
            break;
          case 25:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%g %g",
              *inputdata->value.m_pszString,
              *(inputdata->value.m_uint64 + 4));
            m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 26:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%lld",
              inputdata->value.m_uint64);
            goto LABEL_64;
          case 33:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%llu",
              inputdata->value.m_uint64);
LABEL_64:
            m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 34:
            m_float = inputdata->value.m_float64;
LABEL_59:
            V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float);
            m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          case 37:
            V_snprintf(
              &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
              512,
              "%u",
              inputdata->value.m_uint);
LABEL_57:
            m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
          default:
            v35 = VariantFieldTypeName(m_type);
            Warning("No conversion from %s to string at the moment!\n", v35);
LABEL_55:
            CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
            m_pszString = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
            break;
        }
      }
      EntityByName = CGameEntitySystem::FindEntityByName(
                       g_pGameEntitySystem,
                       0,
                       m_pszString,
                       this,
                       pActivator,
                       pCaller,
                       0);
      v4 = EntityByName;
      if ( EntityByName == 0 || (*(EntityByName->_vptr_IHandleEntity + 140))(EntityByName) == 0 )
      {
        v31 = inputdata->value.m_type;
        if ( v31 == 30 )
        {
          v32 = inputdata->value.m_pszString;
        }
        else
        {
          switch ( v31 )
          {
            case 0:
              goto LABEL_72;
            case 1:
              m_float64 = inputdata->value.m_float;
              goto LABEL_76;
            case 3:
            case 39:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g %g",
                *inputdata->value.m_pszString,
                *(inputdata->value.m_uint64 + 4),
                *(inputdata->value.m_uint64 + 8));
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
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
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            case 5:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d",
                inputdata->value.m_uint);
              goto LABEL_74;
            case 6:
              v40 = "true";
              v41 = "%s";
              if ( inputdata->value.m_char == 0 )
                v40 = "false";
              goto LABEL_79;
            case 8:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%c",
                inputdata->value.m_char);
              goto LABEL_74;
            case 9:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%d %d %d %d",
                inputdata->value.m_int,
                BYTE1(inputdata->value.m_int),
                BYTE2(inputdata->value.m_int),
                HIBYTE(inputdata->value.m_int));
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            case 25:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%g %g",
                *inputdata->value.m_pszString,
                *(inputdata->value.m_uint64 + 4));
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            case 26:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%lld",
                inputdata->value.m_uint64);
              goto LABEL_80;
            case 33:
              v40 = inputdata->value.m_pszString;
              v41 = "%llu";
LABEL_79:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, v41, v40);
LABEL_80:
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            case 34:
              m_float64 = inputdata->value.m_float64;
LABEL_76:
              V_snprintf(&CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf, 512, "%g", m_float64);
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            case 37:
              V_snprintf(
                &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf,
                512,
                "%u",
                inputdata->value.m_uint);
LABEL_74:
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
            default:
              v38 = VariantFieldTypeName(v31);
              Warning("No conversion from %s to string at the moment!\n", v38);
LABEL_72:
              CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf = 0;
              v32 = &CVariantBase<CVariantDefaultAllocator>::ToString(void)const::szBuf;
              break;
          }
        }
        m_pAsString = "";
        if ( this->m_pEntity->m_name.u.m_Id != 0 )
          m_pAsString = this->m_pEntity->m_name.u.m_pAsString;
        Warning("%s InputActivate: entity %s not found or is not a player!\n", m_pAsString, v32);
        return;
      }
LABEL_5:
      if ( (*(v4->_vptr_IHandleEntity + 140))(v4) == 0 )
        v4 = 0;
LABEL_7:
      v5 = CEntityHandle::operator CEntityInstance *(&this->m_player);
      if ( v5 != 0 )
      {
        if ( v4 != v5 )
          return;
      }
      else if ( v4 == 0 )
      {
        goto LABEL_90;
      }
      m_pEntity = v4->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v8 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_player.m_Index) = v8 | this->m_player.m_Index & 0x8000;
        this->m_player.m_Index = (v7 << 15) | this->m_player.m_Index & 0x7FFF;
        goto LABEL_13;
      }
LABEL_90:
      this->m_player.m_Index = -1;
LABEL_13:
      value.m_type = 0;
      value.m_flags = 0;
      value.m_uint64 = 0;
      CEntityIOOutput::FireOutputInternal(&this->m_playerOn, v4, this, &value, 0.0);
      if ( (value.m_flags & 1) != 0 )
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
      v10 = gpGlobals;
      if ( gpGlobals != 0 )
      {
        if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
        {
          m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
          if ( m_pfnWarningFunc != 0 )
            m_pfnWarningFunc(GlobalVarsUsageWarning_t::GV_CURTIME_CALLED_DURING_RENDERING);
        }
        *&v12 = LODWORD(v10->m_flCurrentTime);
      }
      else
      {
        v12 = 0.0;
      }
      CBaseEntity::SetNextThink(this, v12, v9, 0);
      m_Value = this->m_spawnflags.m_Value;
      if ( (m_Value & 0x20) != 0 )
      {
        v34 = CEntityHandle::operator CEntityInstance *(&this->m_player);
        CBaseEntity::AddFlag(v34, 64);
        m_Value = this->m_spawnflags.m_Value;
      }
      if ( (m_Value & 0x40) != 0 )
      {
        v14 = CEntityHandle::operator CEntityInstance *(&this->m_player);
        v15 = LODWORD(v14[41].m_hPrivateScope.m_hScope) | 1;
        if ( LODWORD(v14[41].m_hPrivateScope.m_hScope) != v15 )
        {
          v42 = v14;
          (*(v14[39].m_iszPrivateVScripts.u.m_Id + 16))(&v14[39].m_iszPrivateVScripts, 88, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          LODWORD(v42[41].m_hPrivateScope.m_hScope) = v15;
          v14 = CEntityHandle::operator CEntityInstance *(&this->m_player);
        }
        if ( CBaseCombatCharacter::GetActiveWeapon(v14) != 0 )
        {
          v16 = CEntityHandle::operator CEntityInstance *(&this->m_player);
          ActiveWeapon = CBaseCombatCharacter::GetActiveWeapon(v16);
          if ( ActiveWeapon != 0 && (v18 = ActiveWeapon->m_pEntity) != 0 )
          {
            v19 = (v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1);
            v20 = 0x7FFF;
            if ( v18->m_EHandle.m_Index != -1 )
              v20 = v18->m_EHandle.m_Index & 0x7FFF;
            LOWORD(this->m_hSaveWeapon.m_Index) = v20 | this->m_hSaveWeapon.m_Index & 0x8000;
            this->m_hSaveWeapon.m_Index = (v19 << 15) | this->m_hSaveWeapon.m_Index & 0x7FFF;
          }
          else
          {
            this->m_hSaveWeapon.m_Index = -1;
          }
          v21 = CEntityHandle::operator CEntityInstance *(&this->m_player);
          v22 = CBaseCombatCharacter::GetActiveWeapon(v21);
          (*(v22->_vptr_IHandleEntity + 283))(v22, 0);
          v23 = CEntityHandle::operator CEntityInstance *(&this->m_player);
          CBaseCombatCharacter::SetActiveWeapon(v23, 0);
          v24 = CEntityHandle::operator CEntityInstance *(&this->m_player);
          CBasePlayer::HideViewModels(v24);
        }
      }
      this->m_bForceUpdate = 1;
      return;
    }
  }
  if ( inputdata->pActivator != 0 && (*(inputdata->pActivator->_vptr_IHandleEntity + 140))(inputdata->pActivator) != 0 )
  {
    v4 = inputdata->pActivator;
    if ( inputdata->pActivator == 0 )
      goto LABEL_7;
    goto LABEL_5;
  }
  v25 = "";
  if ( this->m_pEntity->m_name.u.m_Id != 0 )
    v25 = this->m_pEntity->m_name.u.m_pAsString;
  Warning("%s InputActivate: invalid or missing !activator!\n", v25);
}


// CGameUI::Think  (line 252, @0x0000000002233a20, libserver.so)  // inlines: CVariantBase, DotProduct, FireOutput, FireOutput<float>, Free, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, VectorSubtract, curtime, operator CBasePlayer*, operator CEntityInstance*, operator-, ~CVariantBase
// calls: CBaseEntity::SetNextThink, CBasePlayer::EyeVectors, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::AddFlag, CGameUI::Deactivate, CEntityIOOutput::FireOutputInternal, CVariantBase<CVariantDefaultAllocator>::Free, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CGameUI::Think(CGameUI *const this)
{
  double v1; // xmm1_8
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBasePlayer *m_pInstance; // r12
  int v7; // xmm1_4
  const Vector *AbsOrigin; // rax
  vec_t v9; // xmm0_4
  vec_t v10; // xmm2_4
  double v11; // xmm1_8
  double v12; // xmm0_8
  CGlobalVars *v13; // r13
  FnGlobalVarsWarningFunc m_pfnWarningFunc; // rax
  uint64 m_afButtonPressed; // rax
  int m_nLastButtonState; // eax
  int v17; // r14d
  bool v18; // zf
  float v19; // xmm0_4
  uint64 m_nButtons; // rax
  float v21; // r14d
  float v22; // r15d
  float attack2; // [rsp+Ch] [rbp-64h]
  Vector vPlayerFacing; // [rsp+10h] [rbp-60h] BYREF
  Vector vPlayerToUI; // [rsp+20h] [rbp-50h] BYREF
  CVariant value; // [rsp+30h] [rbp-40h] BYREF

  m_Index = this->m_player.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_player.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_player.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0) )
  {
    CBaseEntity::SetNextThink(this, COERCE_DOUBLE(3212836864LL), v1, 0);
    return;
  }
  if ( this->m_bForceUpdate )
    this->m_nLastButtonState = m_pInstance->m_nButtons;
  if ( this->m_flFieldOfView > -1.0 )
  {
    CBasePlayer::EyeVectors(m_pInstance, &vPlayerFacing, 0, 0);
    value.m_uint64 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
    *&value.m_type = v7;
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v9 = AbsOrigin->z - *&value.m_type;
    v10 = AbsOrigin->x - value.m_float;
    vPlayerToUI.y = AbsOrigin->y - *(&value.m_pszString + 1);
    vPlayerToUI.z = v9;
    vPlayerToUI.x = v10;
    VectorNormalize(&vPlayerToUI);
    if ( this->m_flFieldOfView > (((vPlayerFacing.x * vPlayerToUI.x) + (vPlayerFacing.y * vPlayerToUI.y))
                                + (vPlayerFacing.z * vPlayerToUI.z)) )
      goto LABEL_19;
  }
  CBaseEntity::AddFlag(m_pInstance, 8);
  v12 = 0.0;
  v13 = gpGlobals;
  if ( gpGlobals != 0 )
  {
    if ( !gpGlobals->m_bEnableAssertions && !gpGlobals->m_bInSimulation )
    {
      m_pfnWarningFunc = gpGlobals->m_pfnWarningFunc;
      if ( m_pfnWarningFunc != 0 )
        (m_pfnWarningFunc)(1, 0.0);
    }
    *&v12 = LODWORD(v13->m_flCurrentTime);
  }
  if ( (CBaseEntity::SetNextThink(this, v12, v11, 0), ((m_afButtonPressed = m_pInstance->m_afButtonPressed) & 0x20) != 0)
    && SLOBYTE(this->m_spawnflags.m_Value) < 0
    || (m_afButtonPressed & 2) != 0 && (this->m_spawnflags.m_Value & 0x100) != 0 )
  {
LABEL_19:
    CGameUI::Deactivate(this, m_pInstance);
    return;
  }
  m_nLastButtonState = this->m_nLastButtonState;
  v17 = m_nLastButtonState ^ LODWORD(m_pInstance->m_nButtons);
  if ( (v17 & 0x400) != 0 )
  {
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( (m_nLastButtonState & 0x400) != 0 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedMoveRight, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_26;
      goto LABEL_25;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedMoveRight, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_25:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_26:
  if ( (v17 & 0x200) != 0 )
  {
    v18 = (this->m_nLastButtonState & 0x200) == 0;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( !v18 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedMoveLeft, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_30;
      goto LABEL_29;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedMoveLeft, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_29:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_30:
  if ( (v17 & 8) != 0 )
  {
    v18 = (this->m_nLastButtonState & 8) == 0;
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    if ( !v18 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedForward, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_34;
      goto LABEL_33;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedForward, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_33:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_34:
  if ( (v17 & 0x10) != 0 )
  {
    v18 = (this->m_nLastButtonState & 0x10) == 0;
    value.m_flags = 0;
    value.m_type = 0;
    value.m_uint64 = 0;
    if ( !v18 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedBack, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_38;
      goto LABEL_37;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedBack, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_37:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_38:
  if ( (v17 & 1) != 0 )
  {
    v18 = (this->m_nLastButtonState & 1) == 0;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( !v18 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedAttack, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_42;
      goto LABEL_41;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedAttack, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_41:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_42:
  if ( (v17 & 0x800) != 0 )
  {
    v18 = (this->m_nLastButtonState & 0x800) == 0;
    value.m_type = 0;
    value.m_flags = 0;
    value.m_uint64 = 0;
    if ( !v18 )
    {
      CEntityIOOutput::FireOutputInternal(&this->m_unpressedAttack2, m_pInstance, this, &value, 0.0);
      if ( (value.m_flags & 1) == 0 )
        goto LABEL_46;
      goto LABEL_45;
    }
    CEntityIOOutput::FireOutputInternal(&this->m_pressedAttack2, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
LABEL_45:
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
LABEL_46:
  v19 = 1.0;
  this->m_nLastButtonState = m_pInstance->m_nButtons;
  m_nButtons = m_pInstance->m_nButtons;
  if ( (m_nButtons & 0x400) == 0 )
  {
    v19 = -1.0;
    if ( (m_nButtons & 0x200) == 0 )
      v19 = 0.0;
  }
  v21 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
  if ( (m_nButtons & 8) == 0 )
  {
    v21 = -1.0;
    if ( (m_nButtons & 0x10) == 0 )
      v21 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  }
  v22 = COERCE_FLOAT(_mm_cvtsi128_si32(0x3F800000u));
  if ( (m_nButtons & 1) == 0 )
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(0LL));
  attack2 = 0.0;
  if ( (m_nButtons & 0x800) != 0 )
    attack2 = 1.0;
  if ( this->m_bForceUpdate || v19 != this->m_xaxis.m_Value )
  {
    this->m_xaxis.m_Value = v19;
    value.m_type = 1;
    value.m_flags = 0;
    value.m_float = v19;
    CEntityIOOutput::FireOutputInternal(&this->m_xaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_bForceUpdate )
      goto LABEL_61;
  }
  if ( v21 != this->m_yaxis.m_Value )
  {
LABEL_61:
    this->m_yaxis.m_Value = v21;
    value.m_flags = 0;
    value.m_type = 1;
    value.m_float = v21;
    CEntityIOOutput::FireOutputInternal(&this->m_yaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_bForceUpdate )
      goto LABEL_64;
  }
  if ( v22 != this->m_attackaxis.m_Value )
  {
LABEL_64:
    this->m_attackaxis.m_Value = v22;
    value.m_type = 1;
    value.m_flags = 0;
    value.m_float = v22;
    CEntityIOOutput::FireOutputInternal(&this->m_attackaxis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
    if ( this->m_bForceUpdate )
      goto LABEL_65;
  }
  if ( attack2 != this->m_attack2axis.m_Value )
  {
LABEL_65:
    value.m_type = 1;
    this->m_attack2axis.m_Value = attack2;
    value.m_flags = 0;
    value.m_float = attack2;
    CEntityIOOutput::FireOutputInternal(&this->m_attack2axis, m_pInstance, this, &value, 0.0);
    if ( (value.m_flags & 1) != 0 )
      (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, value.m_uint64);
  }
  this->m_bForceUpdate = 0;
}


