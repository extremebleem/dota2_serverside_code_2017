// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_wraith_band.cpp:26
class CDOTA_Item_Recipe_WraithBand : public CDOTA_Item {
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
	CDOTA_Item_Recipe_WraithBand(CDOTA_Item_Recipe_WraithBand &);
	CDOTA_Item_Recipe_WraithBand(CDOTA_Item_Recipe_WraithBand &);
	CDOTA_Item_Recipe_WraithBand();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_WraithBand();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_wraith_band.cpp:37
class CDOTA_Item_WraithBand : public CDOTA_Item {
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
	CDOTA_Item_WraithBand(CDOTA_Item_WraithBand &);
	CDOTA_Item_WraithBand(CDOTA_Item_WraithBand &);
	CDOTA_Item_WraithBand();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_WraithBand();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_wraith_band.cpp:49
class CDOTA_Modifier_Item_WraithBand : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	int bonus_damage;  // +0xbb4
	CDOTA_Modifier_Item_WraithBand();
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_WraithBand();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_WraithBand::~CDOTA_Item_Recipe_WraithBand  (line 26, @0x0000000002e22d90, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_WraithBand::~CDOTA_Item_Recipe_WraithBand(CDOTA_Item_Recipe_WraithBand *const this)
{
  this->_vptr_IHandleEntity = &off_47991B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_WraithBand::~CDOTA_Item_Recipe_WraithBand  (line 26, @0x0000000002e22db0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_WraithBand
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_WraithBand::~CDOTA_Item_Recipe_WraithBand(CDOTA_Item_Recipe_WraithBand *const this)
{
  this->_vptr_IHandleEntity = &off_47991B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_WraithBand::Schema_DynamicBinding  (line 28, @0x0000000002e21540, libserver.so)
// globals: CDOTA_Item_Recipe_WraithBand::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_WraithBand::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_WraithBand *const this)
{
  return CDOTA_Item_Recipe_WraithBand::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e21550, libserver.so)
// globals: CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e21560, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_WraithBand>
void __fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e21580, libserver.so)
void __fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e215a0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e215b0, libserver.so)
// globals: CDOTA_Item_Recipe_WraithBand::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_WraithBand::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e21ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e228c0, libserver.so)  // inlines: CDOTA_Item_Recipe_WraithBand, Construct<CDOTA_Item_Recipe_WraithBand>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47991B0;
  }
  return p;
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal  (line 28, @0x0000000002e2a060, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_recipe_wraith_band", "CDOTA_Item_Recipe_WraithBand"
// globals: `guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass, CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo, CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass) != 0 )
  {
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pClassInfo = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_flags = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pInputs = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_nInputCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pOutputs = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_nOutputCount = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pGameClass = 0;
    CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass._vptr_CEntityClass = off_4799130;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_WraithBandClass != 0 )
    return &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass;
  if ( `guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo,
      "CDOTA_Item_Recipe_WraithBand",
      "item_recipe_wraith_band",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo);
  }
  CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pClassInfo = &CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo;
  CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pBaseClassInfo = CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_WraithBandClass = &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass;
  CDOTA_Item_Recipe_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_WraithBandClassInfo.m_pClass = &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass;
  CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_WraithBandClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_WraithBandClass;
}


// CDOTA_Item_WraithBand::~CDOTA_Item_WraithBand  (line 37, @0x0000000002e22de0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_WraithBand::~CDOTA_Item_WraithBand(CDOTA_Item_WraithBand *const this)
{
  this->_vptr_IHandleEntity = &off_4799DB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_WraithBand::~CDOTA_Item_WraithBand  (line 37, @0x0000000002e22e00, libserver.so)  // inlines: ~CDOTA_Item_WraithBand
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_WraithBand::~CDOTA_Item_WraithBand(CDOTA_Item_WraithBand *const this)
{
  this->_vptr_IHandleEntity = &off_4799DB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_WraithBand::Schema_DynamicBinding  (line 39, @0x0000000002e215c0, libserver.so)
// globals: CDOTA_Item_WraithBand::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_WraithBand::Schema_DynamicBinding(
        const CDOTA_Item_WraithBand *const this)
{
  return CDOTA_Item_WraithBand::s_pSchemaBinding;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002e215d0, libserver.so)
// globals: CDOTA_Item_WraithBand::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_WraithBand::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002e215e0, libserver.so)  // inlines: Destruct<CDOTA_Item_WraithBand>
void __fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002e21600, libserver.so)
void __fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002e21620, libserver.so)
bool __fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002e21630, libserver.so)
// globals: CDOTA_Item_WraithBand::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_WraithBand::s_pSchemaBinding;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002e22030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002e228f0, libserver.so)  // inlines: CDOTA_Item_WraithBand, Construct<CDOTA_Item_WraithBand>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4799DB0;
  }
  return p;
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_WraithBand::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_WraithBand::GetEntityClassInternal  (line 39, @0x0000000002e27860, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_WraithBand"
// globals: `guard variable for'CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass, CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo, CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo
CEntityClass *__cdecl CDOTA_Item_WraithBand::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass) != 0 )
  {
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classInputs.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_hNetworkSerializer = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pBaseClassInfo = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pClassInfo = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_flags = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pScriptClassDesc = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pInputs = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_nInputCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pOutputs = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_nOutputCount = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pGameClass = 0;
    CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass._vptr_CEntityClass = off_4799D30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass);
    __cxa_atexit(
      CDOTA_Item_WraithBand::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_WraithBandClass != 0 )
    return &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass;
  if ( `guard variable for'CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo,
      "CDOTA_Item_WraithBand",
      "item_wraith_band",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo);
  }
  CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pClassInfo = &CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo;
  CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pBaseClassInfo = CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_WraithBandClass = &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass;
  CDOTA_Item_WraithBand::GetEntityClassInfo(void)::g_EntityCDOTA_Item_WraithBandClassInfo.m_pClass = &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass;
  CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_WraithBandClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_WraithBand::GetEntityClassInternal(void)::g_EntityCDOTA_Item_WraithBandClass;
}


// CDOTA_Item_WraithBand::GetIntrinsicModifierName  (line 41, @0x0000000002e21640, libserver.so)
// strings: "modifier_item_wraith_band"
const char *__fastcall CDOTA_Item_WraithBand::GetIntrinsicModifierName(CDOTA_Item_WraithBand *const this)
{
  return "modifier_item_wraith_band";
}


// CDOTA_Modifier_Item_WraithBand::~CDOTA_Modifier_Item_WraithBand  (line 49, @0x0000000002e22320, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_WraithBand::~CDOTA_Modifier_Item_WraithBand(
        CDOTA_Modifier_Item_WraithBand *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_WraithBand::~CDOTA_Modifier_Item_WraithBand  (line 49, @0x0000000002e22340, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_WraithBand
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_WraithBand::~CDOTA_Modifier_Item_WraithBand(
        CDOTA_Modifier_Item_WraithBand *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_WraithBand::OnCreated  (line 72, @0x0000000002e1e390, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_WraithBand::OnCreated(CDOTA_Modifier_Item_WraithBand *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_strength", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_strength = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_agility = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_agility", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_intellect = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_agility = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_intellect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_intellect", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_Item_WraithBand::DeclareFunctions  (line 80, @0x0000000002e18c10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_WraithBand::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_WraithBand::DeclareFunctions(CDOTA_Modifier_Item_WraithBand *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Intellect;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_WraithBand::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Strength  (line 88, @0x0000000002e18c80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_WraithBand *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Agility  (line 93, @0x0000000002e18ca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_WraithBand *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Intellect  (line 98, @0x0000000002e18cc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WraithBand::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_WraithBand *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_WraithBand::GetModifierPreAttack_BonusDamage  (line 103, @0x0000000002e18ce0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_WraithBand::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_WraithBand *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


